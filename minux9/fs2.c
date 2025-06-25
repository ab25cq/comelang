// fs.c
#include <stdint.h>
#include <stddef.h>
#include "fs2.h"

void *kalloc_pages(size_t npages);
void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
char* strncpy(char *s, const char *t, int n);
char *strtok(char *s, const char *delim);
extern void puts(const char* s);
int strcmp(const char* s1, const char* s2);
int strncmp(const char *p, const char *q, unsigned int n);

// ────────────────────────────────────────────────────────────────────────
// Virtio-ブロックデバイス（legacy MMIO）用簡易ドライバ
// ────────────────────────────────────────────────────────────────────────

#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8

#define SECTOR_SIZE         512

/* legacy MMIO レジスタ */
#define R_MAGIC            0x000
#define R_VERSION          0x004
#define R_DEVICE_ID        0x008
#define R_DEVICE_FEATURES  0x010
#define R_DRIVER_FEATURES  0x020
#define R_GPAGE_SZ         0x028
#define R_Q_SEL            0x030
#define R_Q_NUM            0x034
#define R_Q_ALIGN          0x038
#define R_Q_PFN            0x040
#define R_Q_READY          0x044
#define R_Q_NOTIFY         0x050
#define R_STATUS           0x070

#define R_Q_DESC_LOW       0x080
#define R_Q_DESC_HIGH      0x084
#define R_Q_AVAIL_LOW      0x090
#define R_Q_AVAIL_HIGH     0x094
#define R_Q_USED_LOW       0x0A0
#define R_Q_USED_HIGH      0x0A4

#define R_Q_NUM_MAX        0x034
#define R_Q_NUM            0x038

#define S_ACK        1
#define S_DRIVER     2
#define S_FEATURES_OK 8
#define S_DRIVER_OK  4

struct virtq_desc {
    uint64_t addr;
    uint32_t len;
    uint16_t flags;
    uint16_t next;
} __attribute__((packed));

struct virtq_avail {
    uint16_t flags;
    uint16_t idx;
    uint16_t ring[];    // flexible
} __attribute__((packed, aligned(2)));

struct virtq_used_elem { uint32_t id,len; } __attribute__((packed));
struct virtq_used {
    uint16_t flags;
    uint16_t idx;
    struct virtq_used_elem ring[];
} __attribute__((packed, aligned(4)));

#define F_NEXT   1
#define F_WRITE  2

struct virtio_blk_req {
    uint32_t type;
    uint32_t reserved;
    uint64_t sector;
} __attribute__((packed));
#define VBLK_T_IN 0

static uint64_t vbase = 0;
static uint32_t Q     = 0;

static struct virtq_desc  *desc;
static struct virtq_avail *avail;
static struct virtq_used  *used;
static uint8_t            *vq_area;

static uint16_t aidx = 0;
volatile static uint8_t  status_byte __attribute__((aligned(4)));
volatile static uint8_t  dma_buf[SECTOR_SIZE] __attribute__((aligned(512)));

static inline void mw32(uint64_t b,uint32_t o,uint32_t v) { *(volatile uint32_t*)(b+o)=v; }
static inline uint32_t mr32(uint64_t b,uint32_t o)         { return *(volatile uint32_t*)(b+o); }

void virtio_blk_init(void)
{
    for(int s=0; s<VIRTIO_MAX_SLOTS; s++){
        uint64_t base = VIRTIO_MMIO_BASE0 + s*VIRTIO_MMIO_STRIDE;
        if(mr32(base, R_MAGIC) != 0x74726976) continue;
        if(mr32(base, R_DEVICE_ID) == 2) { vbase = base; break; }
    }
    if(!vbase){ puts("virtio-blk not found\n"); while(1); }
    if(mr32(vbase, R_VERSION) != 1){ puts("not legacy mmio\n"); while(1); }

    mw32(vbase, R_STATUS, 0);
    mw32(vbase, R_STATUS, S_ACK | S_DRIVER);

    uint32_t devfeat = mr32(vbase, R_DEVICE_FEATURES);
    (void)devfeat;
    mw32(vbase, R_DRIVER_FEATURES, 0);

    uint32_t st = mr32(vbase, R_STATUS) | S_FEATURES_OK;
    mw32(vbase, R_STATUS, st);
    if(!(mr32(vbase, R_STATUS) & S_FEATURES_OK)){
        puts("FEATURES_OK rejected\n"); while(1);
    }

    mw32(vbase, R_GPAGE_SZ, 4096);
    mw32(vbase, R_Q_SEL, 0);
    uint32_t devQ = mr32(vbase, R_Q_NUM_MAX);
    uint32_t drvQ = (devQ > 128) ? 128 : devQ;
    mw32(vbase, R_Q_NUM, drvQ);
    Q = drvQ;
    if(!Q || Q > 1024) { puts("unsupported queue size\n"); while(1); }
    //printf("device queue size = %d (driver uses %d)\n", devQ, Q);

    size_t sz_desc  = 16ULL * Q;
    size_t sz_avail =  4ULL + 2ULL * Q;
    size_t sz_used  =  4ULL + 8ULL * Q;
    size_t sz_total = sz_desc + sz_avail + sz_used;
    size_t npages   = (sz_total + 4095) >> 12;

    vq_area = kalloc_pages(npages);
    if (!vq_area) { puts("kalloc_pages failed\n"); while(1); }
    memset(vq_area, 0, npages * 4096);

    desc  = (struct virtq_desc  *)vq_area;
    avail = (struct virtq_avail *)(vq_area + sz_desc);
    used  = (struct virtq_used  *)(vq_area + sz_desc + sz_avail);

    uint64_t vq_phys = (uintptr_t)vq_area;
    mw32(vbase, R_Q_ALIGN, 4096);
    mw32(vbase, R_Q_PFN,   (uint32_t)(vq_phys >> 12));

    mw32(vbase, R_STATUS, st | S_DRIVER_OK);
}

static inline void set_flags(uint16_t f0,uint16_t f1,uint16_t f2){
    desc[0].flags = f0;
    desc[1].flags = f1;
    desc[2].flags = f2;
}

static struct virtio_blk_req req;

static void virtio_blk_read(uint64_t sector, void *dst)
{
    req.type = VBLK_T_IN;
    req.sector = sector;
    req.reserved = 0;
    status_byte = 0xFF;

    desc[0].addr = (uint64_t)&req;    desc[0].len = sizeof(req);    desc[0].next = 1;
    desc[1].addr = (uint64_t)dma_buf; desc[1].len = SECTOR_SIZE;    desc[1].next = 2;
    desc[2].addr = (uint64_t)&status_byte; desc[2].len  = 1;

    set_flags(F_NEXT, F_NEXT | F_WRITE, F_WRITE);

    avail->ring[aidx % Q] = 0;
    __sync_synchronize();
    avail->idx = ++aidx;

    mw32(vbase, R_Q_NOTIFY, 0);

    while(status_byte == 0xFF)
        __sync_synchronize();

    memcpy(dst, dma_buf, SECTOR_SIZE);
}

void read_block(uint32_t blk, void *dst)
{
    virtio_blk_read(blk, dst);
}

// ───────────────────────────────────────────────────────────────────────
// ファイルシステム部
// ────────────────────────────────────────────────────────────────────────

static struct superblock sb;
static uint8_t        block_buf[BSIZE];

void read_superblock(void) {
    read_block(1, block_buf);
    memcpy(&sb, block_buf, sizeof(sb));
}

void read_inode(uint32_t inum, struct dinode *dest) {
    if (inum < 1 || inum > sb.ninodes) {
        memset(dest, 0, sizeof(*dest));
        return;
    }

    // 1 ブロックあたりのイノード数
    uint32_t inodes_per_blk = BSIZE / sizeof(struct dinode);
    // on-disk のブロック番号
    uint32_t blkno = sb.inodestart + ( (inum - 1) / inodes_per_blk );
    // write_inode で書き込んだオフセットと同じ計算式に揃える
    uint32_t offset = ((inum - 1) % inodes_per_blk) * sizeof(struct dinode);

    read_block(blkno, block_buf);
    struct dinode *dip = (struct dinode *)(block_buf + offset);
    *dest = *dip;
}

static uint32_t inode_blockno(struct dinode *ip, uint32_t idx) {
    if (idx < NDIRECT) {
        // 直接ブロック
        return ip->addrs[idx];
    } else if (idx < NDIRECT + NINDIRECT) {
        // １次インデクス
        uint32_t indirect_blk = ip->addrs[NDIRECT];
        if (indirect_blk == 0) return 0;
        read_block(indirect_blk, block_buf);
        uint32_t *entries = (uint32_t *)block_buf;
        return entries[idx - NDIRECT];
    } else {
        // ２次インデクス
        idx -= (NDIRECT + NINDIRECT);
        uint32_t dbl_index0 = idx / NINDIRECT;    // ２次の一段目
        uint32_t dbl_index1 = idx % NINDIRECT;    // ２次の二段目

        uint32_t dindirect_blk = ip->addrs[NDIRECT + 1];
        if (dindirect_blk == 0) return 0;
        // まず一段目のインデクスブロックを読む
        read_block(dindirect_blk, block_buf);
        uint32_t *first_entries = (uint32_t *)block_buf;
        uint32_t first_blk = first_entries[dbl_index0];
        if (first_blk == 0) return 0;

        // 次に、その first_blk が指す二段目のブロックを読む
        read_block(first_blk, block_buf);
        uint32_t *second_entries = (uint32_t *)block_buf;
        return second_entries[dbl_index1];
    }
}

void read_data(struct dinode *ip, uint32_t offset, uint8_t *buf, uint32_t size) {
    uint32_t left = size;
    uint32_t off  = offset;
    uint8_t *dst  = buf;

    while (left > 0) {
        uint32_t blk_idx = off / BSIZE;
        uint32_t blk_off = off % BSIZE;
        uint32_t to_read = BSIZE - blk_off;
        if (to_read > left) to_read = left;

        uint32_t disk_blk = inode_blockno(ip, blk_idx);
        if (disk_blk == 0) {
            memset(dst, 0, to_read);
        } else {
            read_block(disk_blk, block_buf);
            memcpy(dst, block_buf + blk_off, to_read);
        }
        left -= to_read;
        off  += to_read;
        dst  += to_read;
    }
}

uint32_t dir_lookup(struct dinode *parent, const char *name) {
    uint32_t off = 0;
    char namebuf[DIRSIZ+1];

    while (off < parent->size) {
        read_data(parent, off, block_buf, BSIZE);
        struct dirent *de = (struct dirent *)block_buf;
        int entries = BSIZE / sizeof(struct dirent);
        for (int i = 0; i < entries; i++) {
            if (de[i].inum == 0) continue;
            memcpy(namebuf, de[i].name, DIRSIZ);
            namebuf[DIRSIZ] = '\0';
            if (strncmp(namebuf, name, DIRSIZ) == 0) {
                return de[i].inum;
            }
        }
        off += BSIZE;
    }
    return 0;
}

uint32_t path_lookup(const char *path) {
    if (path[0] != '/') return 0;
    if (strcmp(path, "/") == 0) {
        return ROOTINO;
    }

    struct dinode ipr;
    read_inode(ROOTINO, &ipr);
    if (ipr.type != T_DIR) return 0;

    char copy[strlen(path)+1];
    strncpy(copy, path, strlen(path)+1);
    char *token = strtok(copy, "/");
    uint32_t current_inum = ROOTINO;

    while (token != NULL) {
        if (ipr.type != T_DIR) return 0;
        uint32_t next_inum = dir_lookup(&ipr, token);
        if (next_inum == 0) return 0;
        read_inode(next_inum, &ipr);
        current_inum = next_inum;
        token = strtok(NULL, "/");
    }
    return current_inum;
}

void dump_inode(uint32_t inum) {
    struct dinode ip;
    read_inode(inum, &ip);
    printf("== i-node %u ==\n", inum);
    printf("  type  = %u\n", ip.type);
    printf("  size  = %u\n", ip.size);
    printf("  addrs =");
    for (int i = 0; i < NDIRECT; i++) {
        if (ip.addrs[i] != 0) printf(" %u", ip.addrs[i]);
    }
    if (ip.addrs[NDIRECT] != 0) {
        printf(" [indirect %u]", ip.addrs[NDIRECT]);
    }
    if (ip.addrs[NDIRECT+1] != 0) {
        printf(" [double-indirect %u]", ip.addrs[NDIRECT+1]);
    }
    printf("\n");
}

// fs_api.c
// シンプルな fs_open/fs_read インタフェース実装

#define MAX_OPEN_FILES 16

typedef int32_t ssize_t;

// ファイルテーブルエントリ
struct file {
    uint32_t inum;        // inode 番号
    struct dinode din;     // on-disk inode 情報
    uint32_t off;         // 現在の読み込みオフセット
    int used;             // 使用フラグ
};

static struct file file_table[MAX_OPEN_FILES];

// fs_open: パスから inode を開き、ファイル記述子を返す
// 成功: [0, MAX_OPEN_FILES) の fd, 失敗: -1
int fs_open(const char *path) {
    uint32_t inum = path_lookup(path);
    if (inum == 0) {
        return -1;  // ファイル未検出
    }

    struct dinode di;
    read_inode(inum, &di);
    if (di.type != T_FILE && di.type != T_DIR) {
        return -1;  // 通常ファイルでもディレクトリでもない
    }

    // 空きスロット検索
    for (int fd = 0; fd < MAX_OPEN_FILES; fd++) {
        if (!file_table[fd].used) {
            file_table[fd].used = 1;
            file_table[fd].inum = inum;
            file_table[fd].din  = di;
            file_table[fd].off  = 0;
            return fd;
        }
    }
    return -1;  // テーブル満杯
}

// fs_read: fd から buf に count バイト読み込む
// 成功: 読み込んだバイト数 (0 は EOF), 失敗: -1
ssize_t fs_read(int fd, void *buf, size_t count) {
    if (fd < 0 || fd >= MAX_OPEN_FILES || !file_table[fd].used) {
        return -1;  // 無効な FD
    }

    struct file *f = &file_table[fd];
    uint32_t remaining = f->din.size - f->off;
    if (remaining == 0)
        return 0;  // EOF

    uint32_t to_read = (count < remaining) ? count : remaining;
    read_data(&f->din, f->off, (uint8_t *)buf, to_read);
    f->off += to_read;
    return to_read;
}

// fs_close: fd を閉じる
// 成功: 0, 失敗: -1
int fs_close(int fd) {
    if (fd < 0 || fd >= MAX_OPEN_FILES || !file_table[fd].used)
        return -1;
    file_table[fd].used = 0;
    return 0;
}



