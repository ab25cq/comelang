// mkfs.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

//──────────────────────────────────────────
// ファイルシステム共通定数・構造体（fs.h と合わせる）
//──────────────────────────────────────────
#define BSIZE       512     // ブロックサイズ（バイト）
#define NINODES     16      // イノード数（例として 16）
#define NBLOCKS     256     // 総ブロック数（例として 256）

// 1 ブロックあたりに収まるイノード数
#define IPB         (BSIZE / sizeof(struct dinode))
// inum 番の i-node が格納されるブロック番号
//   IBLOCK(1) = (1-1)/IPB + 2 = 2 なので inum=1 のルート i-node はブロック2に置く
#define IBLOCK(i)   (( (i) - 1 ) / IPB + 2)

// 1 ブロックあたりビットマップで記録できるデータブロック数
#define BPB         (BSIZE * 8)
// データブロック b のビットマップが格納されるブロック番号
//   BBLOCK(b) = b/BPB + 2 + inodeblocks
//   ここで inodeblocks = (NINODES + IPB - 1)/IPB
#define BBLOCK(b)   ( (b) / BPB + 2 + ((NINODES + IPB - 1) / IPB) )

#define NDIRECT     12
#define NINDIRECT   (BSIZE / sizeof(uint32_t))  // 512/4 = 128
// ダブル間接も含めた最大ファイルブロック数
#define MAXFILE     (NDIRECT + NINDIRECT + NINDIRECT * NINDIRECT)
#define MAXFILESIZE (MAXFILE * BSIZE)

#define ROOTINO     1       // ルートディレクトリのイノード番号
#define T_DIR       1       // ディレクトリ型
#define T_FILE      2       // 通常ファイル型

#define DIRSIZ      14      // ディレクトリエントリ名の最大長

// ──────────────────────────────────────────
// オンディスクの i-node 構造体 (2次間接用に拡張)
// ──────────────────────────────────────────
struct dinode {
    uint16_t type;                // T_DIR=1 or T_FILE=2, 0 = unused
    uint16_t major;               // （未使用なら 0）
    uint16_t minor;               // （未使用なら 0）
    uint16_t nlink;               // リンク数
    uint32_t size;                // ファイルサイズ（バイト）
    // [0..NDIRECT-1]: 直接ブロック (12)
    // [NDIRECT]     : 1次間接ブロックへのポインタ
    // [NDIRECT+1]   : 2次間接ブロックへのポインタ
    uint32_t addrs[NDIRECT + 2];
};

// ──────────────────────────────────────────
// スーパーブロック構造体（ブロック番号 1 に置かれる）
// ─────────────────────────────────────────
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

// ──────────────────────────────────────────────────────────
// グローバル変数：ディスクイメージ全体をメモリ上に保持
// ──────────────────────────────────────────────────────────
static unsigned char img[NBLOCKS * BSIZE]; // FS イメージ全体（バイト列）
static uint8_t       freemap[NBLOCKS];     // ブロック使用状況（0=空き,1=使用中）

// ──────────────────────────────────────────────────────────
// プロトタイプ宣言
// ──────────────────────────────────────────────────────────

// データブロックを確保してブロック番号を返す（空きブロック取り出し）
uint32_t alloc_data_block(void);

// ブロック単位で書き込む
//   blkno: ブロック番号（0 〜 NBLOCKS-1）
//   buf:    書き込むデータ（BSIZE バイト）
void write_block(uint32_t blkno, void *buf);

// イノードをディスク上に書き込む
//   inum: イノード番号（1 〜 NINODES）
//   ip:   書き込むイノード構造体
void write_inode(uint32_t inum, struct dinode *ip);

// ディレクトリエントリを親ディレクトリに追加する
//   parent_inum: 親ディレクリのイノード番号
//   name:        追加するファイル名（ヌル終端文字列、長さ < DIRSIZ）
//   file_inum:   新しくリンクする子のイノード番号
void dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum);

// ──────────────────────────────────────────────────────────
// 内部ヘルパー関数のプロトタイプ
// ──────────────────────────────────────────────────────────
static void  write_superblock(void);
static int   read_inode(uint32_t inum, struct dinode *ip);
static void  read_block(uint32_t blkno, void *buf);
static void  set_bitmap(uint32_t blkno);
static int   bitmap_is_allocated(uint32_t blkno);

// ──────────────────────────────────────────────────────────
// 実装：alloc_data_block / write_block / write_inode / dirlink
// ──────────────────────────────────────────────────────────

//-------------------------------------------------------------
// alloc_data_block:
//   FS 内で未使用のデータブロックをひとつ探し、使用済みマークをつけて
//   そのブロック番号を返す。
//   NBLOCKS 全体のうち、スーパーブロック（1）、イノード領域、ビットマップ領域
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
//   えば inum=1..NINODES の範囲で有効。
//-------------------------------------------------------------
void
write_inode(uint32_t inum, struct dinode *ip)
{
    if (inum < 1 || inum > NINODES) {
        fprintf(stderr, "write_inode: inum=%u が範囲外 (1..%d)\n", inum, NINODES);
        exit(1);
    }
    // イノードブロックの先頭ブロック番号
    uint32_t inodestart = 2;
    uint32_t block = IBLOCK(inum);
    uint32_t offset = ((inum - 1) % IPB) * sizeof(struct dinode);

    unsigned char buf[BSIZE];
    // 既存のブロック内容をいったん読み込んでおく
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)(buf + offset);
    *dip = *ip;
    write_block(block, buf);
}

//-------------------------------------------------------------
// dirlink:
//   親ディレクトリ parent_inum に、新しい子ファイル／ディレクトリ
//   file_inum を name という名前でリンクする。
//   簡易実装として「親ディレクトリは直ブロック0を1ブロック分だけ使う」とする。
//-------------------------------------------------------------
void
dirlink(uint32_t parent_inum, const char *name, uint32_t file_inum)
{
    if (parent_inum < 1 || parent_inum > NINODES ||
        file_inum   < 1 || file_inum   > NINODES) {
        fprintf(stderr, "dirlink: inum=%u または %u が範囲外\n", parent_inum, file_inum);
        exit(1);
    }

    // まず「親ディレクトリ inum の i-node」を読み出す
    struct dinode parent_ip;
    if (read_inode(parent_inum, &parent_ip) < 0) {
        fprintf(stderr, "dirlink: 親イノード %u を読めません\n", parent_inum);
        exit(1);
    }
    if (parent_ip.type != T_DIR) {
        fprintf(stderr, "dirlink: inum=%u はディレクトリではありません\n", parent_inum);
        exit(1);
    }

    // 今回の簡易実装では、親ディレクトリは「直接ブロック 0 のみ」を使う
    if (parent_ip.addrs[0] == 0) {
        // まだディレクリデータブロックを割り当てていなければ、新規確保
        uint32_t b = alloc_data_block();
        parent_ip.addrs[0] = b;
        parent_ip.size = BSIZE;
        write_inode(parent_inum, &parent_ip);
    }

    // ブロック0 の内容を読み出して、空きエントリを探す
    unsigned char buf[BSIZE];
    read_block(parent_ip.addrs[0], buf);
    struct dirent *de = (struct dirent *)buf;
    int entries = BSIZE / sizeof(struct dirent);

    for (int i = 0; i < entries; i++) {
        if (de[i].inum == 0) {
            // 空きエントリを発見
            de[i].inum = file_inum;
            strncpy(de[i].name, name, DIRSIZ);
            // 名前をヌル終端（DIRSIZ が埋まっている場合は末尾ヌルを置かない）
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

// ────────────────────────────────────────────────────────────────
// 6. ヘルパー関数の実装
// ────────────────────────────────────────────────────────────────

//-------------------------------------------------------------
// write_superblock:
//   スーパーブロックをブロック 1 に書き込む。
//   メタデータ (size, nblocks, ninodes, inodestart, bmapstart, ...) を埋め込む。
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
    sb.nlog       = 0;        // ログ領域は使わない
    sb.logstart   = 0;
    sb.inodestart = 2;        // i-node 領域はブロック2から
    sb.bmapstart  = 2 + inodeblocks;

    unsigned char buf[BSIZE];
    memset(buf, 0, BSIZE);
    memcpy(buf, &sb, sizeof(sb));
    write_block(1, buf);
}

//-------------------------------------------------------------
// read_block:
//   blkno 番のブロックを buf[0..BSIZE-1] にコピーして返す。
//   img[] から memcpy するだけ。
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
//   inum 番の i-node を *ip に読み込む。
//   i-node 領域はブロッ 2 以降に IPB 個ずつ格納されている。
//   成功時は 0 を返し、範囲外などで失敗時は -1。
//-------------------------------------------------------------
static int
read_inode(uint32_t inum, struct dinode *ip)
{
    if (inum < 1 || inum > NINODES) return -1;
    uint32_t block = IBLOCK(inum);
    unsigned char buf[BSIZE];
    read_block(block, buf);
    struct dinode *dip = (struct dinode *)buf + ((inum - 1) % IPB);
    *ip = *dip;
    return 0;
}

//-------------------------------------------------------------
// set_bitmap:
//   ビットマップにブロック blkno を「使用中」としてマークする。
//   ビットマップ自身は img[] の中に埋め込まれており、
//   ブロック BBLOCK(blkno) のデータ中の該当ビットを 1 にする。
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

    uint32_t bi = blkno % BPB;      // ビットマップ内オフセット (0..BPB-1)
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

// ────────────────────────────────────────────────────────────────────────
// 7. mkfs のメイン処理例
//    ダイレクト＋1次間接＋2次間接をサポートするバイナリ埋め込み例
// ────────────────────────────────────────────────────────────────────────

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
    root_ip.size  = 0;        // 後でデータブロック割当があれば設定される
    // addrs[] はゼロで初期化済み
    write_inode(ROOTINO, &root_ip);

    //-------------------------------------------------------------------
    // ここから「hello.elf」をルート直下に /hello.elf として埋め込む例
    //-------------------------------------------------------------------
    {
        const char *elfpath = "hello.elf";  
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

        // i-node 番号 2 を使ってファイルを作成するとする
        uint32_t new_inum = 2;
        struct dinode file_ip;
        memset(&file_ip, 0, sizeof(file_ip));
        file_ip.type  = T_FILE;
        file_ip.nlink = 1;
        file_ip.size  = filesize;

        int fd = open(elfpath, O_RDONLY);
        if (fd < 0) {
            perror("open hello.elf");
            exit(1);
        }

        // ────────────────────────────────────────────────────────────
        // バッファの準備
        // ────────────────────────────────────────────────────────────
        char buf[BSIZE];
        size_t remaining = filesize;
        int    di = 0;    // 書き込んだブロック数（0-based ブロック index）
        // １次間接用のバッァ：NINDIRECT 個の uint32_t を保持
        uint32_t single_indirect_blk = 0;
        uint32_t single_buf[NINDIRECT];
        memset(single_buf, 0, sizeof(single_buf));
        // ２次間接用のバッファ：NINDIRECT 個の uint32_t を保持
        // ２次間接の第一レベルを指すブロック番号
        uint32_t double_indirect_blk = 0;
        // 第一レベルの配列（"どの１次インデクスブロックを指すか" を NINDIRECT 個分保持）
        uint32_t double_buf[NINDIRECT];
        memset(double_buf, 0, sizeof(double_buf));
        // 第二レベルの配列リスト（必要な分だけ動的に確保し、後で逐次 write_block する）
        //  例えば double_second_blocks[i] が 0 でなければ、そのブロックが２次インデクスの
        //  第一レベルの i 番エントリ用に確保された「第二レベルブロック番号」を示す。
        uint32_t *double_second_blocks = malloc(sizeof(uint32_t) * NINDIRECT);
        memset(double_second_blocks, 0, sizeof(uint32_t) * NINDIRECT);
        // 第二レベルバッファ置き場：１ブロック分ずつ動的に確保して逐次書き込む
        uint32_t *second_buf[NINDIRECT];
        for (int i = 0; i < NINDIRECT; i++) {
            second_buf[i] = NULL;
        }

        // ────────────────────────────────────────────────────────────
        // 実際にファイルの中身を読み込んで
        // データブロックを確保し、i-node の addrs[] にセットしていくループ
        // ────────────────────────────────────────────────────────────
        while (remaining > 0) {
            // 1) 新規データブロックを確保
            uint32_t b = alloc_data_block();
            ssize_t r = read(fd, buf, BSIZE);
            if (r < 0) {
                perror("read hello.elf");
                close(fd);
                exit(1);
            }
            // 2) 新しいブロックへデータを書き込む
            write_block(b, buf);

            // 3) i-node の addrs[] に配置
            if (di < NDIRECT) {
                // ─────────── 直接ブロック領域 ───────────
                file_ip.addrs[di] = b;
            }
            else if (di < NDIRECT + NINDIRECT) {
                // ─────────── 1次間接領域 ───────────
                int idx1 = di - NDIRECT;
                if (single_indirect_blk == 0) {
                    // まだ１次間接ブロックを割り当てていない → 確保し、全要素ゼロクリア
                    single_indirect_blk = alloc_data_block();
                    uint8_t z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(single_indirect_blk, z);
                }
                single_buf[idx1] = b;
                // ※ 書き込みはループ後でまとめて行う
            }
            else {
                // ─────────── 2次間接領域 ───────────
                int di_idx = di - (NDIRECT + NINDIRECT);
                int idx1 = di_idx / NINDIRECT;  // 2次インデクスの「第一レベル」インデクス
                int idx2 = di_idx % NINDIRECT;  // 2次インデクスの「第二レベル」インデクス

                if (double_indirect_blk == 0) {
                    // まだ２次間接ブロックを割り当てていない → 確保
                    double_indirect_blk = alloc_data_block();
                    uint8_t z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(double_indirect_blk, z);
                }
                // double_buf[idx1] = (この idx1 に対応する 1次間接ブロック番号)
                if (double_buf[idx1] == 0) {
                    // idx1 番目の１次間接ブロックを初めて割り当てる
                    uint32_t new_first = alloc_data_block();
                    double_buf[idx1] = new_first;
                    // 第一レベルブロックと同様にゼロクリアしてから書き込む
                    second_buf[idx1] = malloc(BSIZE);
                    memset(second_buf[idx1], 0, BSIZE);
                    write_block(new_first, second_buf[idx1]);
                }
                // ２次レベルのバッファを確保しておき（既にあれば再利用）
                if (second_buf[idx1] == NULL) {
                    second_buf[idx1] = malloc(BSIZE);
                    memset(second_buf[idx1], 0, BSIZE);
                    // 実際の内容は既にブロックへ書き込まれているはずなので mem はゼロで OK
                }
                // second_buf[idx1] の中身を更新しておく
                uint32_t *entries = (uint32_t *)second_buf[idx1];
                entries[idx2] = b;

                // 後で書き戻す際に使うため second_buf[idx1] を保持しておく
                double_second_blocks[idx1] = double_buf[idx1];
            }

            di++;
            remaining -= r;
        }
        close(fd);

        // ────────────────────────────────────────────────────────────
        // i-node の 1次間接ブロックがあれば書き戻す
        // ────────────────────────────────────────────────────────────
        if (single_indirect_blk != 0) {
            write_block(single_indirect_blk, single_buf);
            file_ip.addrs[NDIRECT] = single_indirect_blk;
        }
        // ───────────────────────────────────────────────────────────
        // i-node の 2次間接の第一レベルブロックがあれば書き戻す
        // ※ double_buf に格納した「第一レベルブロック番号」を書き戻す
        //    さらに各 second_buf[i] も該当ブロックへ書き込む
        // ────────────────────────────────────────────────────────────
        if (double_indirect_blk != 0) {
            // 1) 第一レベルブロック本体を、double_buf の内容で書き込む
            write_block(double_indirect_blk, double_buf);
            file_ip.addrs[NDIRECT + 1] = double_indirect_blk;

            // 2) 各 second_buf[i] を write_block する
            for (int i = 0; i < NINDIRECT; i++) {
                if (double_buf[i] != 0 && second_buf[i] != NULL) {
                    write_block(double_buf[i], second_buf[i]);
                    free(second_buf[i]);
                }
            }
        }

        // 4) i-node 情報をディスクに書き込む
        write_inode(new_inum, &file_ip);

        // 5) ルートディレクトリにリンク /hello.elf
        dirlink(ROOTINO, "hello.elf", new_inum);
    }

    //-------------------------------------------------------------------
    // 同様に「hello2.elf」を /hello2.elf として埋め込む例
    //-------------------------------------------------------------------
    {
        const char *elfpath = "hello2.elf";  
        struct stat st;
        if (stat(elfpath, &st) < 0) {
            perror("stat hello2.elf");
            exit(1);
        }
        size_t filesize = st.st_size;
        if (filesize > MAXFILESIZE) {
            fprintf(stderr, "hello2.elf が大きすぎます (上限 %d bytes)\n", MAXFILESIZE);
            exit(1);
        }

        uint32_t new_inum = 3;
        struct dinode file_ip;
        memset(&file_ip, 0, sizeof(file_ip));
        file_ip.type  = T_FILE;
        file_ip.nlink = 1;
        file_ip.size  = filesize;

        int fd = open(elfpath, O_RDONLY);
        if (fd < 0) {
            perror("open hello2.elf");
            exit(1);
        }

        char buf[BSIZE];
        size_t remaining = filesize;
        int    di = 0;
        uint32_t single_indirect_blk = 0;
        uint32_t single_buf[NINDIRECT];
        memset(single_buf, 0, sizeof(single_buf));

        uint32_t double_indirect_blk = 0;
        uint32_t double_buf[NINDIRECT];
        memset(double_buf, 0, sizeof(double_buf));
        uint32_t *double_second_blocks = malloc(sizeof(uint32_t) * NINDIRECT);
        memset(double_second_blocks, 0, sizeof(uint32_t) * NINDIRECT);
        uint32_t *second_buf[NINDIRECT];
        for (int i = 0; i < NINDIRECT; i++) {
            second_buf[i] = NULL;
        }

        while (remaining > 0) {
            uint32_t b = alloc_data_block();
            ssize_t r = read(fd, buf, BSIZE);
            if (r < 0) {
                perror("read hello2.elf");
                close(fd);
                exit(1);
            }
            write_block(b, buf);

            if (di < NDIRECT) {
                file_ip.addrs[di] = b;
            }
            else if (di < NDIRECT + NINDIRECT) {
                int idx1 = di - NDIRECT;
                if (single_indirect_blk == 0) {
                    single_indirect_blk = alloc_data_block();
                    uint8_t z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(single_indirect_blk, z);
                }
                single_buf[idx1] = b;
            }
            else {
                int di_idx = di - (NDIRECT + NINDIRECT);
                int idx1 = di_idx / NINDIRECT;
                int idx2 = di_idx % NINDIRECT;
                if (double_indirect_blk == 0) {
                    double_indirect_blk = alloc_data_block();
                    uint8_t z[BSIZE];
                    memset(z, 0, BSIZE);
                    write_block(double_indirect_blk, z);
                }
                if (double_buf[idx1] == 0) {
                    uint32_t new_first = alloc_data_block();
                    double_buf[idx1] = new_first;
                    second_buf[idx1] = malloc(BSIZE);
                    memset(second_buf[idx1], 0, BSIZE);
                    write_block(new_first, second_buf[idx1]);
                }
                if (second_buf[idx1] == NULL) {
                    second_buf[idx1] = malloc(BSIZE);
                    memset(second_buf[idx1], 0, BSIZE);
                }
                uint32_t *entries = (uint32_t *)second_buf[idx1];
                entries[idx2] = b;
                double_second_blocks[idx1] = double_buf[idx1];
            }

            di++;
            remaining -= r;
        }
        close(fd);

        if (single_indirect_blk != 0) {
            write_block(single_indirect_blk, single_buf);
            file_ip.addrs[NDIRECT] = single_indirect_blk;
        }
        if (double_indirect_blk != 0) {
            write_block(double_indirect_blk, double_buf);
            file_ip.addrs[NDIRECT + 1] = double_indirect_blk;
            for (int i = 0; i < NINDIRECT; i++) {
                if (double_buf[i] != 0 && second_buf[i] != NULL) {
                    write_block(double_buf[i], second_buf[i]);
                    free(second_buf[i]);
                }
            }
        }

        write_inode(new_inum, &file_ip);
        dirlink(ROOTINO, "hello2.elf", new_inum);
    }

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

