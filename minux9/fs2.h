#ifndef FS_H
#define FS_H

#include <stdint.h>

//──────────────────────────────────────────
// ファイルシステム共通定数・構造体（mkfs.c と合わせる）
//──────────────────────────────────────────
#define BSIZE      512                    // ブロックサイズ
#define NDIRECT    12                     // 直接ブロックポインタ数
#define NINDIRECT  (BSIZE / sizeof(uint32_t))  // 間接ブロック内のエントリ数（512/4=128）
#define MAXFILE    (NDIRECT + NINDIRECT + NINDIRECT * NINDIRECT)

#define ROOTINO    1     // ルートディレクトリの i-node 番号
#define T_DIR      1
#define T_FILE     2

#define DIRSIZ     14    // ディレクトリエントリ名の最大長

// ───────────────────────────────────────────────────────────────────────
// on-disk 構造体
// ────────────────────────────────────────────────────────────────────────

// スーパーブロック (ブロック番号 1 に配置)
struct superblock {
    uint32_t size;       // 全ブロック数
    uint32_t nblocks;    // データブロック数
    uint32_t ninodes;    // イノード数
    uint32_t nlog;       // ログ領域ブロック数（未使用なら 0）
    uint32_t logstart;   // ログ領域開始ブロック番号（未使用なら 0）
    uint32_t inodestart; // イノード領域開始ブロック番号
    uint32_t bmapstart;  // ビットマップ開始ブロック番号
};

// on-disk i-node 構造体
struct dinode {
    uint16_t type;             // 0=空き, 1=ファイル, 2=ディレクトリ
    uint16_t major;            // デバイス番号（未使用時は 0）
    uint16_t minor;            // デバイス番号（未使用時は 0）
    uint16_t nlink;            // ハードリンク数
    uint32_t size;             // ファイルサイズ（バイト）
    /* 直接ポインタ[0..NDIRECT-1], 1次インデクス=addrs[NDIRECT], 2次インデクス=addrs[NDIRECT+1] */
    uint32_t addrs[NDIRECT + 2];
};

// ディレクトリエントリ
struct dirent {
    uint16_t inum;           // ファイル/ディレクトリの i-node 番号
    char     name[DIRSIZ];   // ファイル名（固定長14バイト、ヌル終端なし）
};

//──────────────────────────────────────────
// ヘルパー関数のプロトタイプ
//──────────────────────────────────────────

// 低レイヤーのブロック読み込み（extern で実装されている想定）
// blockno: ファイルシステム上のブロック番号 (0 から始まる)
// buf:       BSIZE バイト確保されたバッファ
extern void read_block(uint32_t blockno, void *buf);

// superblock を読み込む
void read_superblock(void);

// i ノードを読み込む
// inum: iノード番号（1 から ninodes まで）
// dest: struct dinode のバッファ（呼び出し側が確保しておくこと）
void read_inode(uint32_t inum, struct dinode *dest);

// ファイル（またはディレクトリ）データをバッファに読み込む
// inode: 事前に read_inode により読み込んでおくこと
// offset, size: 読み込みたいオフセットとバイト数
// buf: 読み出し先バッファ（size バイト以上確保しておくこと）
void read_data(struct dinode *inode, uint32_t offset, uint8_t *buf, uint32_t size);

// ルートディレクトリからファイル名 lookup
// path: "/foo/bar.txt" のように絶対パスで与える
// return: 見つかったらその iノード番号、見つからなければ 0
uint32_t path_lookup(const char *path);

// ディレクトリ内でエントリを探す
// parent: 親ディレクトリの dinode 構造体
// name:    探したいファイル名（ヌル終端文字列）
// return:  iノード番号、見つからなければ 0
uint32_t dir_lookup(struct dinode *parent, const char *name);

// i ノードを読み込んで内容を出力する（デバッグ用）
void dump_inode(uint32_t inum);

// virtio ブロックデバイスを初期化
void virtio_blk_init(void);

#endif // FS_H

