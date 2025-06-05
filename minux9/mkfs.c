#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

//──────────────────────────────────────────
// ファイルシステム共通定数・構造体（mkfs.c と合わせる）
//──────────────────────────────────────────
#define BSIZE       512     // ブロックサイズ（バイト）
#define NINODES     16      // イノード数（例として 16）
#define NBLOCKS     256     // 総ブロック数（例として 256）

// 1 ブロックあたりに収まるイノード数
#define IPB         (BSIZE / sizeof(struct dinode))
// inum 番の i-node が格納されるブロック番号
//   ── IBLOCK(1) = 1/IPB + 2 = 2 なので inum=1 のルート i-node はブロック2に置く
#define IBLOCK(i)   ((i) / IPB + 2)

// 1 ブロックあたりビットマップで記録できるデータブロック数
#define BPB         (BSIZE * 8)
// データブロック b のビットマッが格納されるブロック番号
//   ── BBLOCK(b) = b/BPB + 2 + (inodeblocks)
//   ここで inodeblocks = (NINODES+IPB−1)/IPB
#define BBLOCK(b)   ((b) / BPB + 2 + ((NINODES + IPB - 1) / IPB))

#define NDIRECT     12
#define NINDIRECT   (BSIZE/sizeof(uint32_t))  // 512/4 = 128
#define MAXFILESIZE ((NDIRECT + NINDIRECT) * BSIZE)

#define ROOTINO     1       // ルートディレクトリの i-node 番号
#define T_DIR       1       // ディレクトリ型
#define T_FILE      2       // 通常ファイル型

#define DIRSIZ      14      // ディレクトリエントリ名の最大長

// ──────────────────────────────────────────
// オンディスクの i-node 構造体
// ──────────────────────────────────────────
struct dinode {
    uint16_t type;                // T_DIR=1 or T_FILE=2, 0 = unused
    uint16_t major;               // （未使用なら 0）
    uint16_t minor;               // （未使用なら 0）
    uint16_t nlink;               // リンク数
    uint32_t size;                // ファイルサイズ（バイト）
    uint32_t addrs[NDIRECT+1];    // [0..NDIRECT-1] = ダイレクトブロック番号
                                  // [NDIRECT] = 1レベル間接ブロック番号
};

// ──────────────────────────────────────────
// スーパーブロック構造体（ブロック番号 1 に置かれる）
// ──────────────────────────────────────────
struct superblock {
    uint32_t size;       // ファイルシステム全体のブロック数 (NBLOCKS)
    uint32_t nblocks;    // データブロック数
    uint32_t ninodes;    // i-node 数
    uint32_t nlog;       // ログ領域ブロック数（今回は未使用 = 0）
    uint32_t logstart;   // ログ領域開始ブロック番号（未使用 = 0）
    uint32_t inodestart; // i-node 領域開始ブロック番号 (= 2)
    uint32_t bmapstart;  // ビットマップ開始ブロック番号
};

// ──────────────────────────────────────────
// ディレクトリエントリ（1 ブロックに DIRSIZ ごとに詰められる）
// ──────────────────────────────────────────
struct dirent {
    uint16_t inum;              // ファイルの i-node 番号
    char     name[DIRSIZ];      // ファイル／ディレクトリ名（固定長 14 バイト、ヌル終端なし）
};



// -----------------------------------------------------------------------------
// 2. グローバル変数：ディスクイメージ全体をメモリ上に保持
// -----------------------------------------------------------------------------

static unsigned char img[NBLOCKS * BSIZE]; // FS イメージ全体（バイト列）
static uint8_t    freemap[NBLOCKS];        // ブロック使用状況（0=空き,1=使用中）


// -----------------------------------------------------------------------------
// 3. プロトタイプ宣言（ユーザー要望部分）
// -----------------------------------------------------------------------------

// データブロックを確保してブロック番号を返す（空きブロック取り出し）
uint32_t alloc_data_block(void);

// ブロック単位で書き込む
//   blkno: ブロック番号（0 〜 NBLOCKS-1）
//   buf:    書き込むデータ（BSIZE バイト）
void write_block(uint32_t blkno, void *buf);

// イノードをディスク上に書き込む
//   inum: イノード番号（1 〜 NINODES-1）
//   ip:   書き込むイノード構造体
void write_inode(uint32_t inum, struct dinode *ip);

// ディレクトリエントリを親ディレクトリに追加する
//   parent_inum: 親ディレクリのイノード番号
//   name:        追加するファイル名（ヌル終端文字列、長さ < DIRSIZ）
//   file_inum:   新しくリンクする子のイノード番号
void dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum);


// -----------------------------------------------------------------------------
// 4. 内部ヘルパー関数のプロトタイプ
// -----------------------------------------------------------------------------

static void write_superblock(void);
static int  read_inode(uint32_t inum, struct dinode *ip);
static void read_block(uint32_t blkno, void *buf);
static void set_bitmap(uint32_t blkno);
static int  bitmap_is_allocated(uint32_t blkno);


// -----------------------------------------------------------------------------
// 5. 実装：alloc_data_block / write_block / write_inode / dirlink
// -----------------------------------------------------------------------------

//-------------------------------------------------------------
// alloc_data_block:
//   FS 内で未使用のデータブロックをひとつ探し、使用済みマークをつけて
//   そのブロック番号を返す。
//   NBLOCKS 全体のうち、スーパーブロック（0）、イノード領域、ビットマップ領域
//   などの予約済み範囲は除外して、ユーザーデータ用領域から探す。
//-------------------------------------------------------------
uint32_t
alloc_data_block(void)
{
    // まずスーパーブロックはブロック 1 に置かれる想定。ブロック 0 は未使用。
    // イノード領域はブロック 2 から始まり、(NINODES/IPB) ブロックを占有。
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;
    uint32_t bmapblocks = (NBLOCKS + BPB - 1) / BPB;
    uint32_t datastart = bmapstart + bmapblocks;

    for (uint32_t b = datastart; b < NBLOCKS; b++) {
        if (!bitmap_is_allocated(b)) {
            set_bitmap(b);
            // image 全体上では、データブロック b は img[b*BSIZE ... ]
            return b;
        }
    }

    fprintf(stderr, "alloc_data_block: 空きデータブロックがありません\n");
    exit(1);
}

//-------------------------------------------------------------
// write_block:
//   blkno 番のブロック（0 ～ NBLOCKS-1）を img[] に書き込む。
//   buf の先頭から BSIZE バイトまるごとコピー。
//-------------------------------------------------------------
void
write_block(uint32_t blkno, void *buf)
{
    if (blkno >= NBLOCKS) {
        fprintf(stderr, "write_block: blkno=%u が範囲外 (0..%d)\n", blkno, NBLOCKS-1);
        exit(1);
    }
    memcpy(img + blkno * BSIZE, buf, BSIZE);
}

//-------------------------------------------------------------
// write_inode:
//   イノード番号 inum のイノード情報 ip をディスクのイノード領域に書き込む。
//   イノード領域はブロック 2 以降に連続して並んでいる
//   例えば inum=1..NINODES-1 の範囲で有効。
//-------------------------------------------------------------
void
write_inode(uint32_t inum, struct dinode *ip)
{
    if (inum >= NINODES) {
        fprintf(stderr, "write_inode: inum=%u が範囲外 (0..%d)\n", inum, NINODES-1);
        exit(1);
    }
    // イノードブロックの先頭ブロック番号
    uint32_t inodestart = 2;
    uint32_t block = IBLOCK(inum);
    uint32_t offset = inum % IPB;  // ブロック内のオフセット

    unsigned char buf[BSIZE];
    // 既存のブロック内容をいったん読み込む（他のイノードと共存させるため）
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)buf + offset;
    *dip = *ip;  // コピー
    write_block(block, buf);
}

//-------------------------------------------------------------
// dirlink:
//   親ディレクトリ parent_inum に、新しい子ファイル／ディレクトリ
//   file_inum を name という名前でリンクする。
//   ここでは、親ディレクトリは data ブロックを一つだけ持つ簡易版とする。
//   （本来ならば複数ブロックにまたがる可能性・間接ブロック参照などを実装するが
//    ここでは root 直下の単純な 1 ブロック分だけで済ませるサンプル。）
//-------------------------------------------------------------
void
dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum)
{
    if (parent_inum >= NINODES || file_inum >= NINODES) {
        fprintf(stderr, "dirlink: inum=%u または %u が範囲外\n",
                parent_inum, file_inum);
        exit(1);
    }

    // まず「親ディレクトリ inum のイノード」を読み出す
    struct dinode parent_ip;
    if (read_inode(parent_inum, &parent_ip) < 0) {
        fprintf(stderr, "dirlink: 親イノード %u を読めません\n", parent_inum);
        exit(1);
    }
    if (parent_ip.type != T_DIR) {
        fprintf(stderr, "dirlink: inum=%u はディレクトリはありません\n", parent_inum);
        exit(1);
    }

    // 今日の簡易実装では、親ディレクトリは 1 ブロック分（直接ブロック 0）のみ使うとする
    if (parent_ip.addrs[0] == 0) {
        // まだディレクトリデータを割り当てていないなら、新しいブロックを確保
        uint32_t b = alloc_data_block();
        parent_ip.addrs[0] = b;
        parent_ip.size = BSIZE;
        write_inode(parent_inum, &parent_ip);
    }

    // ブロック 0 の内容を読み出して、空きのエントリを探す
    unsigned char buf[BSIZE];
    read_block(parent_ip.addrs[0], buf);
    struct dirent *de = (struct dirent *)buf;
    int entries = BSIZE / sizeof(struct dirent);

    for (int i = 0; i < entries; i++) {
        if (de[i].inum == 0) {
            // 空きエントリを発見
            de[i].inum = file_inum;
            strncpy(de[i].name, name, DIRSIZ);
            // 名前をヌル終端する（DIRSIZ が埋まる場合は末尾ヌルを置かない）
            if (strlen(name) < DIRSIZ) {
                de[i].name[strlen(name)] = '\0';
            }
            write_block(parent_ip.addrs[0], buf);
            return;
        }
    }

    fprintf(stderr, "dirlink: 親ディレクトリに空きエントリがありません\n");
    exit(1);
}


// -----------------------------------------------------------------------------
// 6. ヘルパー関数の実装
// -----------------------------------------------------------------------------

//-------------------------------------------------------------
// write_superblock:
//   スーパーブロックをブロック 1 に書き込む。
//   FS 全体のメタデータ (size, ninodes, nblocks, inodestart, bmapstart, ...)
//   をセットしてイメージに埋め込む。
//-------------------------------------------------------------
static void
write_superblock(void)
{
    struct superblock sb;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapblocks = (NBLOCKS + BPB - 1) / BPB;

    sb.size       = NBLOCKS;
    sb.nblocks    = NBLOCKS - (2 + inodeblocks + bmapblocks);
    sb.ninodes    = NINODES;
    sb.nlog       = 0;        // ログ領域を使わない場合は 0
    sb.logstart   = 0;        // ログ領域開始（未使用なので 0）
    sb.inodestart = 2;        // イノード領域はブロック 2 から始まる
    sb.bmapstart  = 2 + inodeblocks;

    unsigned char buf[BSIZE];
    memset(buf, 0, BSIZE);
    memcpy(buf, &sb, sizeof(sb));
    write_block(1, buf);
}

//-------------------------------------------------------------
// read_block:
//   blkno 番のブロックを buf[0..BSIZE-1] にコピーして返す。
//   img[] から単純に memcpy。
//-------------------------------------------------------------
static void
read_block(uint32_t blkno, void *buf)
{
    if (blkno >= NBLOCKS) {
        fprintf(stderr, "read_block: blkno=%u が範囲外\n", blkno);
        exit(1);
    }
    memcpy(buf, img + blkno * BSIZE, BSIZE);
}

//-------------------------------------------------------------
// read_inode:
//   inum 番のイノードを *ip に読み込む。
//   イノード領域はブロック 2 以降に IPB 個ずつ格納。
//   成功時は 0 を返し、失敗時は -1。
//-------------------------------------------------------------
static int
read_inode(uint32_t inum, struct dinode *ip)
{
    if (inum >= NINODES) return -1;
    uint32_t block = IBLOCK(inum);
    unsigned char buf[BSIZE];
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)buf + (inum % IPB);
    *ip = *dip;
    return 0;
}

//-------------------------------------------------------------
// set_bitmap:
//   ビットマップにブロック blkno を「使用中」としてマークする。
//   ビットマップ自体は img[] の中に埋め込まれており、
//   ブロック BBLOCK(blkno) のデータ中の適切なビットを 1 に書き換える。
//-------------------------------------------------------------
static void
set_bitmap(uint32_t blkno)
{
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;

    uint32_t bmapblock = BBLOCK(blkno);
    unsigned char buf[BSIZE];
    read_block(bmapblock, buf);

    uint32_t bi = blkno % BPB;      // ビットマップ内オフセット（0..BPB-1）
    uint32_t byte_index = bi / 8;
    uint32_t bit_offset = bi % 8;
    buf[byte_index] |= (1 << bit_offset);

    write_block(bmapblock, buf);
    freemap[blkno] = 1;
}

//-------------------------------------------------------------
// bitmap_is_allocated:
//   ビットマップを参照して、blkno がすでに使用中かどうかを返す。
//   1: 使用中, 0: 空き。
//-------------------------------------------------------------
static int
bitmap_is_allocated(uint32_t blkno)
{
    uint32_t inodestart = 2;
    uint32_t inodeblocks = (NINODES + IPB - 1) / IPB;
    uint32_t bmapstart = inodestart + inodeblocks;

    uint32_t bmapblock = BBLOCK(blkno);
    unsigned char buf[BSIZE];
    read_block(bmapblock, buf);

    uint32_t bi = blkno % BPB;
    uint32_t byte_index = bi / 8;
    uint32_t bit_offset = bi % 8;
    return (buf[byte_index] >> bit_offset) & 1;
}


// -----------------------------------------------------------------------------
// 7. mkfs のメイン処理例
// -----------------------------------------------------------------------------

int
main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <output-image-file>\n", argv[0]);
        exit(1);
    }

    // 1) まず img[] をゼロクリアしておく
    memset(img, 0, sizeof(img));
    memset(freemap, 0, sizeof(freemap));

    // 2) スーパーブロックを書き込む
    write_superblock();

    // 3) ルートイノード (inum = ROOTINO = 1) を初期化してディスクに置く
    struct dinode root_ip;
    memset(&root_ip, 0, sizeof(root_ip));
    root_ip.type  = T_DIR;    // ディレクトリ
    root_ip.nlink = 1;
    root_ip.size  = 0;    // 後でデータブロック割当があれば変更される
    // addrs[] は全て 0 としておく
    write_inode(ROOTINO, &root_ip);

    // 4) たとえば「hello.elf」を読み込んで、ファイルとして埋め込む例を呼ぶ
    //    ここでは /hello.elf という名前でルートディレクトリに置く
    {
        const char *elfpath = "hello.elf";  // 現在のカレントに存在するバイナリ
        struct stat st;
        if (stat(elfpath, &st) < 0) {
            perror("stat hello.elf");
            exit(1);
        }
        size_t filesize = st.st_size;
        if (filesize > MAXFILESIZE) {
            fprintf(stderr, "hello.elf が大きすぎます (上限 %d bytes)\n", MAXFILESIZE);
            exit(1);
        }

        // 新規イノードを確保（inum = 2 を使うとする例）
        uint32_t new_inum = 2;
        struct dinode file_ip;
        memset(&file_ip, 0, sizeof(file_ip));
        file_ip.type  = T_FILE;            // 通常ファイル
        file_ip.nlink = 1;
        file_ip.size  = filesize;

        // hello.elf の中身をブロック単位で読み込んで書き込む
        int fd = open(elfpath, O_RDONLY);
        if (fd < 0) {
            perror("open hello.elf");
            exit(1);
        }
        char buf[BSIZE];
        size_t remaining = filesize;
        int    di = 0;    // file_ip.addrs[] の直接ポインタを巡るインデックス
        uint32_t indirect_blk = 0;
        uint32_t *indirect_data = NULL;

        while (remaining > 0) {
            // 新規データブロックを確保
            uint32_t b = alloc_data_block();
            ssize_t r = read(fd, buf, BSIZE);
            if (r < 0) {
                perror("read hello.elf");
                close(fd);
                exit(1);
            }
            // 書き込み
            write_block(b, buf);

            if (di < NDIRECT) {
                file_ip.addrs[di++] = b;
            } else {
                // 間接ブロックの準
                if (!indirect_blk) {
                    indirect_blk = alloc_data_block();
                    // 間接ブロックをゼロクリア
                    char z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(indirect_blk, z);
                    indirect_data = malloc(BSIZE);
                    memset(indirect_data, 0, BSIZE);
                    file_ip.addrs[NDIRECT] = indirect_blk;
                }
                size_t idx = di - NDIRECT;
                indirect_data[idx] = b;
                // メモリ上の間接マップをディスクに反映
                write_block(indirect_blk, indirect_data);
                di++;
            }
            remaining -= r;
        }
        close(fd);
        if (indirect_data) free(indirect_data);

        // イノード情報をディスクに書き込む
        write_inode(new_inum, &file_ip);

        // ルートディレクトリにリンク /hello.elf
        dirlink(ROOTINO, "hello.elf", new_inum);
    }
/*
    {
        const char *elfpath = "hello2.elf";  // 現在のカレントに存在するバイナリ
        struct stat st;
        if (stat(elfpath, &st) < 0) {
            perror("stat hello.elf");
            exit(1);
        }
        size_t filesize = st.st_size;
        if (filesize > MAXFILESIZE) {
            fprintf(stderr, "hello.elf が大きすぎます (上限 %d bytes)\n", MAXFILESIZE);
            exit(1);
        }

        // 新規イノードを確保（inum = 3 を使うとする例）
        uint32_t new_inum = 3;
        struct dinode file_ip;
        memset(&file_ip, 0, sizeof(file_ip));
        file_ip.type  = T_FILE;            // 通常ファイル
        file_ip.nlink = 1;
        file_ip.size  = filesize;

        // hello2.elf の中身をブロック単位で読み込んで書き込む
        int fd = open(elfpath, O_RDONLY);
        if (fd < 0) {
            perror("open hello.elf");
            exit(1);
        }
        char buf[BSIZE];
        size_t remaining = filesize;
        int    di = 0;    // file_ip.addrs[] の直接ポインタを巡るインデックス
        uint32_t indirect_blk = 0;
        uint32_t *indirect_data = NULL;

        while (remaining > 0) {
            // 新規データブロックを確保
            uint32_t b = alloc_data_block();
            ssize_t r = read(fd, buf, BSIZE);
            if (r < 0) {
                perror("read hello.elf");
                close(fd);
                exit(1);
            }
            // 書き込み
            write_block(b, buf);

            if (di < NDIRECT) {
                file_ip.addrs[di++] = b;
            } else {
                // 間接ブロックの準
                if (!indirect_blk) {
                    indirect_blk = alloc_data_block();
                    // 間接ブロックをゼロクリア
                    char z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(indirect_blk, z);
                    indirect_data = malloc(BSIZE);
                    memset(indirect_data, 0, BSIZE);
                    file_ip.addrs[NDIRECT] = indirect_blk;
                }
                size_t idx = di - NDIRECT;
                indirect_data[idx] = b;
                // メモリ上の間接マップをディスクに反映
                write_block(indirect_blk, indirect_data);
                di++;
            }
            remaining -= r;
        }
        close(fd);
        if (indirect_data) free(indirect_data);

        // イノード情報をディスクに書き込む
        write_inode(new_inum, &file_ip);

        // ルートディレクトリにリンク /hello.elf
        dirlink(ROOTINO, "hello.elf", new_inum);
    }
*/

    // 5) 最後に img[] 全体を実ファイルに書き出す
    int outfd = open(argv[1], O_CREAT | O_RDWR, 0666);
    if (outfd < 0) {
        perror("open output image");
        exit(1);
    }
    if (write(outfd, img, sizeof(img)) != sizeof(img)) {
        perror("write image");
        exit(1);
    }
    close(outfd);
    printf("mkfs 完了: 出力ファイル '%s' (サイズ %zu bytes)\n",
           argv[1], sizeof(img));

    return 0;
}

