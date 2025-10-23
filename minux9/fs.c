// fs.c
#include <stdint.h>
#include <stddef.h>
#include "common.h"

//typedef int32_t ssize_t;

void * kalloc(void);
void kfree(void *pa);
void timer_handler();

void *kalloc_pages(size_t npages);
void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
char* strncat(char* dest, const char* src, size_t n);
char* strncpy(char *s, const char *t, int n);
char *strtok(char *s, const char *delim);
extern void puts(const char* s);
int strcmp(const char* s1, const char* s2);
int strncmp(const char *p, const char *q, unsigned int n);
// forward decl
static void build_abs_normalized(char *out, size_t outsz, const char *path);

// open flags shared via common.h
#ifndef O_RDONLY
#define O_RDONLY 0
#endif
#ifndef O_WRONLY
#define O_WRONLY 1
#endif
#ifndef O_RDWR
#define O_RDWR 2
#endif
#ifndef O_CREAT
#define O_CREAT  (1<<9)
#endif
#ifndef O_TRUNC
#define O_TRUNC  (1<<10)
#endif
#ifndef O_APPEND
#define O_APPEND (1<<11)
#endif

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
#define VBLK_T_OUT 1

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

// Forward declarations
static void virtio_blk_write(uint64_t sector, const void *src);

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

// ───────────────────────────────────────────────────────────────────────
// ブロックキャッシュ
// ────────────────────────────────────────────────────────────────────────

#define BCACHE_SIZE 32  // キャッシュエントリ数

struct bcache_entry {
    uint32_t blkno;     // ブロック番号 (0 = 未使用)
    uint8_t data[BSIZE]; // キャッシュされたデータ
    uint32_t refcnt;    // 参照カウント
    uint32_t dirty;     // ダーティフラグ (書き込み必要)
    uint32_t last_use;  // LRU用タイムスタンプ
};

static struct bcache_entry bcache[BCACHE_SIZE];
static uint32_t bcache_time = 0;
static uint32_t bcache_hits = 0;
static uint32_t bcache_misses = 0;

void bcache_init(void)
{
    for (int i = 0; i < BCACHE_SIZE; i++) {
        bcache[i].blkno = 0;
        bcache[i].refcnt = 0;
        bcache[i].dirty = 0;
        bcache[i].last_use = 0;
    }
    bcache_hits = 0;
    bcache_misses = 0;
}

void bcache_stats(void)
{
    printf("Block cache stats: hits=%u misses=%u hit_rate=%u%%\n",
           bcache_hits, bcache_misses,
           (bcache_hits + bcache_misses) > 0 ? (bcache_hits * 100 / (bcache_hits + bcache_misses)) : 0);
}

// LRU置換で空きエントリを見つける
static int bcache_evict(void)
{
    int victim = -1;
    uint32_t oldest = 0xFFFFFFFF;

    // refcnt == 0 のエントリから最も古いものを選ぶ
    for (int i = 0; i < BCACHE_SIZE; i++) {
        if (bcache[i].refcnt == 0 && bcache[i].last_use < oldest) {
            oldest = bcache[i].last_use;
            victim = i;
        }
    }

    if (victim >= 0) {
        // ダーティなら書き戻す
        if (bcache[victim].dirty && bcache[victim].blkno != 0) {
            virtio_blk_write(bcache[victim].blkno, bcache[victim].data);
        }
        bcache[victim].blkno = 0;
        bcache[victim].dirty = 0;
    }

    return victim;
}

// ブロックをキャッシュから取得（なければディスクから読む）
static struct bcache_entry* bcache_get(uint32_t blkno)
{
    bcache_time++;

    // まずキャッシュ内を探す
    for (int i = 0; i < BCACHE_SIZE; i++) {
        if (bcache[i].blkno == blkno) {
            bcache[i].refcnt++;
            bcache[i].last_use = bcache_time;
            bcache_hits++;
            return &bcache[i];
        }
    }

    // キャッシュミス: 空きエントリを探す
    bcache_misses++;
    int slot = -1;
    for (int i = 0; i < BCACHE_SIZE; i++) {
        if (bcache[i].blkno == 0) {
            slot = i;
            break;
        }
    }

    // 空きがなければLRUで追い出す
    if (slot < 0) {
        slot = bcache_evict();
    }

    if (slot < 0) {
        // 全エントリが使用中の場合は最初のエントリを強制的に使う
        slot = 0;
        if (bcache[slot].dirty) {
            virtio_blk_write(bcache[slot].blkno, bcache[slot].data);
        }
    }

    // ディスクから読み込む
    bcache[slot].blkno = blkno;
    bcache[slot].dirty = 0;
    bcache[slot].refcnt = 1;
    bcache[slot].last_use = bcache_time;
    virtio_blk_read(blkno, bcache[slot].data);

    return &bcache[slot];
}

// キャッシュエントリの参照を解放
static void bcache_release(struct bcache_entry *be)
{
    if (be->refcnt > 0) {
        be->refcnt--;
    }
}

void read_block(uint32_t blk, void *dst)
{
    struct bcache_entry *be = bcache_get(blk);
    memcpy(dst, be->data, BSIZE);
    bcache_release(be);
}

static void virtio_blk_write(uint64_t sector, const void *src)
{
    req.type = VBLK_T_OUT;
    req.sector = sector;
    req.reserved = 0;
    status_byte = 0xFF;

    memcpy((void*)dma_buf, src, SECTOR_SIZE);

    desc[0].addr = (uint64_t)&req;        desc[0].len = sizeof(req);    desc[0].next = 1;
    desc[1].addr = (uint64_t)dma_buf;     desc[1].len = SECTOR_SIZE;    desc[1].next = 2;
    desc[2].addr = (uint64_t)&status_byte; desc[2].len = 1;

    set_flags(F_NEXT, F_NEXT, F_WRITE);

    avail->ring[aidx % Q] = 0;
    __sync_synchronize();
    avail->idx = ++aidx;

    mw32(vbase, R_Q_NOTIFY, 0);

    while(status_byte == 0xFF)
        __sync_synchronize();
}

void write_block(uint32_t blk, const void *src)
{
    struct bcache_entry *be = bcache_get(blk);
    memcpy(be->data, src, BSIZE);
    be->dirty = 1;
    bcache_release(be);
}

// ───────────────────────────────────────────────────────────────────────
// ファイルシステム部
// ────────────────────────────────────────────────────────────────────────

static struct superblock sb;
static uint8_t        block_buf[BSIZE];
// Convert counter to coarse seconds for human readability.
#define FS_TIME_HZ 1000000UL
extern uint32_t g_time_offset;
static inline uint32_t fs_now(void) { uint64_t x; asm volatile("csrr %0, time" : "=r"(x)); return g_time_offset + (uint32_t)(x / FS_TIME_HZ); }

// Permission model helpers
#define P_READ  4
#define P_WRITE 2
#define P_EXEC  1

static int check_perm(struct dinode *ip, int want)
{
    struct proc *p = gProc[gActiveProc];
    uint32_t mode = ip->mode & 0777;
    int shift = 6; // owner by default
    if (p->uid == ip->uid) shift = 6;
    else if (p->gid == ip->gid) shift = 3;
    else {
        int member = 0;
        for (int i=0;i<p->nsupp;i++) if (p->supp_gids[i] == ip->gid) { member=1; break; }
        shift = member ? 3 : 0;
    }
    int perms = (mode >> shift) & 7;
    // if want includes write, require write bit; if exec required, require x; if read required, require r
    if ((want & P_READ)  && !(perms & 4)) return 0;
    if ((want & P_WRITE) && !(perms & 2)) return 0;
    if ((want & P_EXEC)  && !(perms & 1)) return 0;
    return 1;
}

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

// 内部ヘルパー（書き込み側）
#define IPB   (BSIZE / sizeof(struct dinode))
#define BPB   (BSIZE * 8)
static inline uint32_t BBLOCK(uint32_t b){ return sb.bmapstart + (b / BPB); }

static void write_inode(uint32_t inum, const struct dinode *src)
{
    if (inum < 1 || inum > sb.ninodes) return;
    uint32_t inodes_per_blk = BSIZE / sizeof(struct dinode);
    uint32_t blkno = sb.inodestart + ((inum - 1) / inodes_per_blk);
    uint32_t offset = ((inum - 1) % inodes_per_blk) * sizeof(struct dinode);

    uint8_t buf[BSIZE];
    read_block(blkno, buf);
    struct dinode *dip = (struct dinode *)(buf + offset);
    *dip = *src;
    write_block(blkno, buf);
}

static int bitmap_test(uint32_t b)
{
    uint32_t bmapblk = BBLOCK(b);
    uint8_t buf[BSIZE];
    read_block(bmapblk, buf);
    uint32_t bi = b % BPB;
    return (buf[bi/8] >> (bi%8)) & 1;
}

static void bitmap_set(uint32_t b)
{
    uint32_t bmapblk = BBLOCK(b);
    uint8_t buf[BSIZE];
    read_block(bmapblk, buf);
    uint32_t bi = b % BPB;
    buf[bi/8] |= (1 << (bi%8));
    write_block(bmapblk, buf);
}

static void bitmap_clear(uint32_t b)
{
    if (b == 0) return;
    uint32_t bmapblk = BBLOCK(b);
    uint8_t buf[BSIZE];
    read_block(bmapblk, buf);
    uint32_t bi = b % BPB;
    buf[bi/8] &= ~(1 << (bi%8));
    write_block(bmapblk, buf);
}

// Free all data blocks referenced by an inode, including indirects
static void free_inode_blocks(uint32_t inum, struct dinode *ip)
{
    // direct blocks
    for (int i = 0; i < NDIRECT; i++) {
        if (ip->addrs[i] != 0) {
            bitmap_clear(ip->addrs[i]);
            ip->addrs[i] = 0;
        }
    }

    // single indirect
    if (ip->addrs[NDIRECT] != 0) {
        uint32_t iblk = ip->addrs[NDIRECT];
        read_block(iblk, block_buf);
        uint32_t *ents = (uint32_t*)block_buf;
        for (int i = 0; i < NINDIRECT; i++) {
            if (ents[i]) bitmap_clear(ents[i]);
        }
        bitmap_clear(iblk);
        ip->addrs[NDIRECT] = 0;
    }

    // double indirect
    if (ip->addrs[NDIRECT+1] != 0) {
        uint32_t dblk = ip->addrs[NDIRECT+1];
        read_block(dblk, block_buf);
        uint32_t *first = (uint32_t*)block_buf;
        for (int i = 0; i < NINDIRECT; i++) {
            if (!first[i]) continue;
            uint32_t sblk = first[i];
            uint8_t sbuf[BSIZE];
            read_block(sblk, sbuf);
            uint32_t *second = (uint32_t*)sbuf;
            for (int j = 0; j < NINDIRECT; j++) {
                if (second[j]) bitmap_clear(second[j]);
            }
            bitmap_clear(sblk);
        }
        bitmap_clear(dblk);
        ip->addrs[NDIRECT+1] = 0;
    }

    ip->size = 0;
    write_inode(inum, ip);
}

static uint32_t alloc_data_block(void)
{
    uint32_t bmapblocks = (sb.size + BPB - 1) / BPB;
    uint32_t datastart  = sb.bmapstart + bmapblocks;
    for (uint32_t b = datastart; b < sb.size; b++) {
        if (!bitmap_test(b)) {
            bitmap_set(b);
            // 新規ブロックをゼロクリア
            uint8_t z[BSIZE];
            memset(z, 0, BSIZE);
            write_block(b, z);
            return b;
        }
    }
    return 0; // no space
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

static uint32_t inode_bmap_alloc(uint32_t inum, struct dinode *ip, uint32_t idx)
{
    if (idx < NDIRECT) {
        if (ip->addrs[idx] == 0) {
            uint32_t b = alloc_data_block();
            if (!b) return 0;
            ip->addrs[idx] = b;
            write_inode(inum, ip);
        }
        return ip->addrs[idx];
    }

    if (idx < NDIRECT + NINDIRECT) {
        uint32_t indirect_blk = ip->addrs[NDIRECT];
        if (indirect_blk == 0) {
            uint32_t nb = alloc_data_block();
            if (!nb) return 0;
            // ゼロ化ブロックは alloc_data_block が行う
            ip->addrs[NDIRECT] = nb;
            write_inode(inum, ip);
            indirect_blk = nb;
        }
        uint8_t buf[BSIZE];
        read_block(indirect_blk, buf);
        uint32_t *entries = (uint32_t *)buf;
        uint32_t i = idx - NDIRECT;
        if (entries[i] == 0) {
            uint32_t db = alloc_data_block();
            if (!db) return 0;
            entries[i] = db;
            write_block(indirect_blk, buf);
        }
        return entries[i];
    }

    // double-indirect
    uint32_t di = idx - (NDIRECT + NINDIRECT);
    uint32_t idx1 = di / NINDIRECT;
    uint32_t idx2 = di % NINDIRECT;

    uint32_t dindirect_blk = ip->addrs[NDIRECT + 1];
    if (dindirect_blk == 0) {
        uint32_t nb = alloc_data_block();
        if (!nb) return 0;
        ip->addrs[NDIRECT + 1] = nb;
        write_inode(inum, ip);
        dindirect_blk = nb;
    }

    uint8_t firstbuf[BSIZE];
    read_block(dindirect_blk, firstbuf);
    uint32_t *first_entries = (uint32_t *)firstbuf;
    uint32_t first_blk = first_entries[idx1];
    if (first_blk == 0) {
        uint32_t nb = alloc_data_block();
        if (!nb) return 0;
        first_entries[idx1] = nb;
        write_block(dindirect_blk, firstbuf);
        first_blk = nb;
    }

    uint8_t secondbuf[BSIZE];
    read_block(first_blk, secondbuf);
    uint32_t *second_entries = (uint32_t *)secondbuf;
    if (second_entries[idx2] == 0) {
        uint32_t db = alloc_data_block();
        if (!db) return 0;
        second_entries[idx2] = db;
        write_block(first_blk, secondbuf);
    }
    return second_entries[idx2];
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

static uint32_t path_lookup_lim(const char *path, int depth);

uint32_t path_lookup(const char *path) {
    return path_lookup_lim(path, 8);
}

static uint32_t path_lookup_lim(const char *path, int depth) {
    if (depth <= 0) return 0;
    if (!path || path[0] != '/') return 0;
    if (strcmp(path, "/") == 0) return ROOTINO;

    struct dinode ipr;
    read_inode(ROOTINO, &ipr);
    if (ipr.type != T_DIR) return 0;

    char buf[256];
    strncpy(buf, path, sizeof(buf)-1); buf[sizeof(buf)-1] = '\0';
    char *rest = buf;
    char *tok;
    uint32_t cur = ROOTINO;
    char prefix[256]; prefix[0] = '/'; prefix[1] = '\0';

    while ((tok = strtok(rest, "/")) != NULL) {
        rest = NULL; // subsequent calls
        if (ipr.type != T_DIR) return 0;
        // traverse requires execute permission on directory
        if (!check_perm(&ipr, P_EXEC)) return 0;
        uint32_t next = dir_lookup(&ipr, tok);
        if (next == 0) return 0;
        struct dinode nxt; read_inode(next, &nxt);
        if (nxt.type == T_SYMLINK) {
            // read link target string
            char lbuf[128];
            int n = nxt.size; if (n >= (int)sizeof(lbuf)) n = sizeof(lbuf)-1;
            read_data(&nxt, 0, (uint8_t*)lbuf, n);
            lbuf[n] = '\0';
            // Rebuild remaining path
            char remain[256];
            remain[0] = '\0';
            char *p = strtok(NULL, "/");
            while (p) {
                if (remain[0]) strncat(remain, "/", sizeof(remain)-strlen(remain)-1);
                strncat(remain, p, sizeof(remain)-strlen(remain)-1);
                p = strtok(NULL, "/");
            }
            char joined[256];
            if (lbuf[0] == '/') {
                strncpy(joined, lbuf, sizeof(joined)-1);
                joined[sizeof(joined)-1] = '\0';
            } else {
                // relative symlink resolves against prefix (dir containing link)
                strncpy(joined, prefix, sizeof(joined)-1);
                joined[sizeof(joined)-1] = '\0';
                if (!(joined[0]=='/' && joined[1]=='\0')) strncat(joined, "/", sizeof(joined)-strlen(joined)-1);
                strncat(joined, lbuf, sizeof(joined)-strlen(joined)-1);
            }
            if (remain[0]) {
                strncat(joined, "/", sizeof(joined)-strlen(joined)-1);
                strncat(joined, remain, sizeof(joined)-strlen(joined)-1);
            }
            return path_lookup_lim(joined, depth-1);
        }
        // advance
        cur = next; ipr = nxt;
        // update prefix with '/tok'
        if (!(prefix[0]=='/' && prefix[1]=='\0')) strncat(prefix, "/", sizeof(prefix)-strlen(prefix)-1);
        strncat(prefix, tok, sizeof(prefix)-strlen(prefix)-1);
    }
    return cur;
}

// Resolve path to canonical absolute path
int fs_realpath(const char *path, char *out, int outsz)
{
    if (!out || outsz <= 0) return -1;
    char abs[256]; build_abs_normalized(abs, sizeof(abs), path);
    // Walk using path_lookup_lim-like logic accumulating canonical path
    if (abs[0] != '/') return -1;
    if (strcmp(abs, "/") == 0) { if (outsz >= 2){ out[0]='/'; out[1]='\0'; return 0;} return -1; }
    struct dinode dir; read_inode(ROOTINO, &dir);
    char buf[256]; strncpy(buf, abs, sizeof(buf)-1); buf[sizeof(buf)-1]='\0';
    char *rest = buf, *tok;
    int depth=8; int first=1; int n=0; out[n++]='/'; out[1]='\0';
    while ((tok = strtok(rest, "/")) != NULL) {
        rest = NULL;
        if (dir.type != T_DIR) return -1;
        if (!check_perm(&dir, P_EXEC)) return -1;
        uint32_t next = dir_lookup(&dir, tok);
        if (!next) return -1;
        struct dinode nxt; read_inode(next, &nxt);
        if (nxt.type == T_SYMLINK) {
            if (--depth <= 0) return -1;
            char lbuf[128]; int len=nxt.size; if(len>(int)sizeof(lbuf)-1) len=sizeof(lbuf)-1;
            read_data(&nxt, 0, (uint8_t*)lbuf, len); lbuf[len]='\0';
            char remain[256]; remain[0]='\0'; char *p=strtok(NULL, "/");
            while(p){ if(remain[0]) strncat(remain, "/", sizeof(remain)-strlen(remain)-1); strncat(remain, p, sizeof(remain)-strlen(remain)-1); p=strtok(NULL, "/"); }
            char joined[512]; if (lbuf[0]=='/') { strncpy(joined, lbuf, sizeof(joined)-1); }
            else { // relative to current out
                joined[0]='\0'; strncat(joined, out, sizeof(joined)-1); if (joined[strlen(joined)-1] != '/') strncat(joined, "/", sizeof(joined)-strlen(joined)-1); strncat(joined, lbuf, sizeof(joined)-strlen(joined)-1);
            }
            if (remain[0]) { if (joined[strlen(joined)-1] != '/') strncat(joined, "/", sizeof(joined)-strlen(joined)-1); strncat(joined, remain, sizeof(joined)-strlen(joined)-1); }
            return fs_realpath(joined, out, outsz);
        }
        // append component to out
        int l = strlen(tok);
        if (n + l + 1 >= outsz) return -1; // overflow
        if (!(n==1 && out[0]=='/')) out[n++]='/';
        for(int i=0;i<l;i++) out[n++]=tok[i]; out[n]='\0';
        dir = nxt;
    }
    return 0;
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

// 先頭付近の適当な場所に追加
// fs.c 先頭付近に追加
static int owner_cap(struct file *f) {
    return (int)(sizeof(f->owner_processes) / sizeof(f->owner_processes[0]));
}
static void owner_add(struct file *f, struct proc *o) {
    int cap = owner_cap(f);
    // 重複禁止
    for (int i = 0; i < cap; i++) if (f->owner_processes[i] == o) return;
    // 空きを使う
    for (int i = 0; i < cap; i++) {
        if (f->owner_processes[i] == NULL) {
            f->owner_processes[i] = o;
            if (f->num_owner_process < cap) f->num_owner_process++;
            return;
        }
    }
    // いっぱいなら無視（安全側）
}
static void owner_remove(struct file *f, struct proc *o) {
    int cap = owner_cap(f), c = 0;
    for (int i = 0; i < cap; i++) {
        if (f->owner_processes[i] == o) f->owner_processes[i] = NULL;
        if (f->owner_processes[i]) c++;
    }
    f->num_owner_process = c;
}

#define FD_OFFSET 3



struct spipe gPipes[MAX_OPEN_FILES];
struct file gFiles[MAX_OPEN_FILES];

struct spipe* gFreePipes;
struct file* gFreeFiles;

void file_system_init()
{
    memset(gPipes, 0, sizeof(struct spipe)*MAX_OPEN_FILES);
    memset(gFiles, 0, sizeof(struct file)*MAX_OPEN_FILES);
    
    for(int i=0; i<MAX_OPEN_FILES; i++)  {
        struct spipe* p = &gPipes[i];
        
        p->free_next = gFreePipes;
        gFreePipes = p;
    }
    
    for(int i=0; i<MAX_OPEN_FILES; i++)  {
        struct file* p = &gFiles[i];
        
        p->free_next = gFreeFiles;
        gFreeFiles = p;
    }
}

struct spipe* alloc_pipe()
{
    struct spipe* p = gFreePipes;
    
    gFreePipes = gFreePipes->free_next;
    
    memset(p, 0, sizeof(struct spipe));
    
    return p;
}

void free_pipe(struct spipe* p)
{
    p->free_next = gFreePipes;
    gFreePipes = p;
}

struct file* alloc_file() {
    if (!gFreeFiles) return NULL;  // or panic("no free file");
    struct file* p = gFreeFiles;
    gFreeFiles = gFreeFiles->free_next;
    memset(p, 0, sizeof(*p));
    return p;
}


void free_file(struct file* p)
{
    p->free_next = gFreeFiles;
    gFreeFiles = p;
}

// ── pipealloc ──────────────────────────────────────────────────────────
// パイプ構造体を確保・初期化して返す

struct spipe* pipealloc(void)
{
    struct spipe *p = (struct spipe*)alloc_pipe(); //1, sizeof(struct spipe));
    
    memset(p, 0, sizeof(struct spipe));
    if (p == 0)
        return 0;
    p->nread     = 0;
    p->nwrite    = 0;
    p->read_open  = 1;
    p->write_open = 1;
    p->used = 0;
    p->num_linked_file = 0;
    
    void* user_va = p;
    void* pa = p;
    
    return p;
}

#define MAX_FILES 128

struct file* new_file_table()
{
    struct file* result = (struct file*)alloc_file(); //1, sizeof(struct file));
    if (!result) return NULL;  // Check for allocation failure
//printf("kalloc file table %p\n", result);
    memset(result, 0, sizeof(struct file));

    owner_add(result, gProc[gActiveProc]);

    return result;
}

void fs_init(struct file** file_table)
{
    memset(file_table, 0, sizeof(struct file*)*MAX_OPEN_FILES);
    
    file_table[0] = new_file_table();
    
    file_table[0]->kind = FK_STDIN;
    file_table[0]->used = 1;
    
    file_table[1] = new_file_table();
    
    file_table[1]->kind = FK_STDOUT;
    file_table[1]->used = 1;
    
    file_table[2] = new_file_table();
    
    file_table[2]->kind = FK_STDERR;
    file_table[2]->used = 1;
}

int is_pipe(int fd)
{
    struct file** file_table = get_current_file_table();
    
/*
    if (file_table[fd] && file_table[fd]->used) {
        if(file_table[fd]->pipe) {
            return 1;
        }
    }
*/
    if (fd < 0 || fd >= MAX_OPEN_FILES) return 0;
    if (!file_table[fd]) return 0;
    if (!file_table[fd]->used) return 0;
    /* FK_PIPE かつ pipe ポインタ非NULLのみをパイプとみなす */
    if (file_table[fd]->kind == FK_PIPE && file_table[fd]->pipe != NULL) {
        return 1;
    }
    return 0;
}

int is_stdin(int fd)
{
    struct file** file_table = get_current_file_table();
    if (file_table[fd] && file_table[fd]->used) {
        if(file_table[fd]->kind == FK_STDIN) {
            return 1;
        }
    }
    
    return 0;
}

int is_stdout(int fd)
{
    struct file** file_table = get_current_file_table();
    
    if (file_table[fd] && file_table[fd]->used) {
        if(file_table[fd]->kind == FK_STDOUT) {
            return 1;
        }
    }
    
    return 0;
}

int is_tty(int fd)
{
    struct file** file_table = get_current_file_table();
    if (fd < 0 || fd >= MAX_OPEN_FILES) return 0;
    if (!file_table[fd]) return 0;
    int k = file_table[fd]->kind;
    return (k == FK_STDIN || k == FK_STDOUT || k == FK_STDERR || k == FK_TTY);
}

void pipe_open(int* fd1, int* fd2) {
    struct file** file_table = get_current_file_table();
    
    struct spipe* pip = pipealloc();
    
    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (file_table[i] == NULL) {
            file_table[i] = new_file_table();
            
            file_table[i]->kind = FK_PIPE;
            file_table[i]->used  = 1;
            file_table[i]->inum  = -1;
            file_table[i]->off   = 0;
            file_table[i]->pipe = pip;
            file_table[i]->read_pipe = 1;
            file_table[i]->write_pipe   = 0;
            *fd1 = i;
            
            pip->used++;
            pip->linked_file[pip->num_linked_file++] = file_table[i];
            pip->nreader++;
            
            if(pip->num_linked_file >= PIPE_LINKED_MAX) {
                puts("PIPE LINKED MAX");
                while(1);
            }
            
//printf("pip->used %d\n", pip->used);
            break;
        }
    }
    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (file_table[i] == NULL) {
            file_table[i] = new_file_table();
            
            file_table[i]->kind = FK_PIPE;
            file_table[i]->used  = 1;
            file_table[i]->inum  = -1;
            //memset(&file_table[i].din, 0, sizeof(struct dinode));
            file_table[i]->off   = 0;
            file_table[i]->pipe = pip;
            file_table[i]->write_pipe = 1;
            file_table[i]->read_pipe = 0;
            *fd2 = i;  // <- 3,4,5… を返す
            
            pip->used++;
            pip->linked_file[pip->num_linked_file++] = file_table[i];
            pip->nwriter++;
            
            if(pip->num_linked_file >= PIPE_LINKED_MAX) {
                puts("PIPE LINKED MAX");
                while(1);
            }
            
//printf("pip->used %d\n", pip->used);
            break;
        }
    }
}

// ── piperead ────────────────────────────────────────────────────────────
// パイプから最大 n バイト読み込む。EOF:0, エラー:-1
void panic(char* str);
void yield();

extern int gActiveProc;

int piperead(int fd, char *addr, int n)
{
    struct file** file_table = get_current_file_table();
    
    if (file_table[fd] == NULL) {
        panic("piperead");
    }
    
    if(fd < 0 || fd >= MAX_OPEN_FILES) {
        panic("piperead");
    }
    struct spipe* p = file_table[fd]->pipe;
    
    if(p == NULL) {
        panic("piperead");
    }
    // データが来るまで待機
    while (p->nread == p->nwrite && p->write_open) {
       yield();
    }
    // 書き側クローズかつバッファ空 → EOF
    if (p->nread == p->nwrite && !p->write_open) {
        return 0;
    }
  
    // バッファからコピー
    volatile int j = 0;
    for (volatile int i = 0; i < n && p->nread < p->nwrite; i++) {
        while (p->nread == p->nwrite && p->write_open) {
           yield();
        }
        
        // 書き側クローズかつバッファ空 → EOF
        if (p->nread == p->nwrite && !p->write_open) {
            break; //return 0;
        }
        
        addr[i] = p->data[p->nread % PIPE_SIZE];
        p->nread++;
//printf("(1)PIPEREAD PID %d %c i %d n %d p->nread %d p->nwrite %d\n", gActiveProc, addr[i], i, n, p->nread, p->nwrite);
//        yield();
        j++;
//printf("(2)PIPEREAD PID %d %c i %d n %d p->nread %d p->nwrite %d\n", gActiveProc, addr[i], i, n, p->nread, p->nwrite);
    }
    //yield();
    return j;
}

// ── pipewrite ───────────────────────────────────────────────────────────
// パイプに n バイト書き込む。正常書き込み数、エラー:-1
int pipewrite(int fd, char *addr, int n)
{
    struct file** file_table = get_current_file_table();
    
    if (file_table[fd] == NULL) {
        panic("pipewrite");
    }
    
    if(fd < 0 || fd >= MAX_OPEN_FILES) {
        panic("pipewrite");
    }
    struct spipe* p = file_table[fd]->pipe;
    
    if(p == NULL) {
        panic("pipewrite");
    }
    
    for (volatile int i = 0; i < n; i++) {
      // バッファ満杯なら読み側を待つ
      while (p->nwrite - p->nread == PIPE_SIZE && p->read_open) {
          yield();
      }
      // 読み側クローズ → SIGPIPE 相当
      if (!p->read_open) {
          //return -1;
          return (i > 0) ? i : -1;   // ← 既に書けた分があればそれを返す
      }
      p->data[p->nwrite % PIPE_SIZE] = addr[i];
      p->nwrite++;
//printf("PID %d write %c i %d p->nread %d p->nwrite %% PIPE_SIZE %d\r\n", gActiveProc, addr[i], i, p->nread, p->nwrite % PIPE_SIZE);
      
      // 読み側を起こす
      //yield();
    }
  
    return n;
}


// fs_open: パスから inode を開き、ファイル記述子を返す
// 成功: [0, MAX_OPEN_FILES) の fd, 失敗: -1
// 先頭に定義
#define FD_OFFSET      3   // 返す FD は 3 からスタート

// ───────────────────────────────────────────────────────────────────────
// Helper: split parent directory and leaf name from absolute path
// return 1 on success, 0 on error
static int path_parent_lookup_abs(const char *path, uint32_t *parent_inum, char *leafname)
{
    if (!path || path[0] != '/') return 0;
    if (strcmp(path, "/") == 0) return 0; // no parent for root

    // Make a modifiable copy
    char copy[strlen(path) + 1];
    strncpy(copy, path, sizeof(copy));

    // Tokenize and walk to parent
    char *save = copy;
    char *last = NULL;
    char *tok = strtok(save, "/");
    uint32_t cur = ROOTINO;
    struct dinode ip;
    read_inode(cur, &ip);

    while (tok) {
        char *nexttok = strtok(NULL, "/");
        if (!nexttok) {
            // tok is the leaf name
            last = tok;
            break;
        }
        // descend into directory
        if (ip.type != T_DIR) return 0;
        uint32_t next_inum = dir_lookup(&ip, tok);
        if (next_inum == 0) return 0;
        read_inode(next_inum, &ip);
        cur = next_inum;
        tok = nexttok;
    }

    if (!last) return 0;
    *parent_inum = cur;
    // Copy leaf name (truncate to DIRSIZ)
    int n = strlen(last);
    if (n > DIRSIZ) n = DIRSIZ;
    for (int i = 0; i < DIRSIZ; i++) leafname[i] = 0;
    strncpy(leafname, last, n);
    return 1;
}

// ───────────────────────────────────────────────────────────────────────
// Helper: allocate a free inode (type=T_FILE, size=0)
static uint32_t alloc_inode_T_FILE(void)
{
    struct dinode di;
    for (uint32_t inum = 1; inum <= sb.ninodes; inum++) {
        read_inode(inum, &di);
        if (di.type == 0) {
            // Initialize new file inode
            struct dinode newi;
            memset(&newi, 0, sizeof(newi));
            newi.type = T_FILE;
            newi.nlink = 1;
            newi.size = 0;
            newi.mode = 0644; newi.uid=0; newi.gid=0; newi.atime = newi.mtime = newi.ctime = fs_now();
            write_inode(inum, &newi);
            return inum;
        }
    }
    return 0;
}

// ───────────────────────────────────────────────────────────────────────
// Helper: add a directory entry to parent directory
static int add_dirent(uint32_t parent_inum, const char *name, uint32_t child_inum)
{
    if (!name || name[0] == '\0') return -1;

    struct dinode pdi;
    read_inode(parent_inum, &pdi);
    if (pdi.type != T_DIR) return -1;

    // Prepare dirent
    struct dirent de;
    de.inum = (uint16_t)child_inum;
    // name is fixed DIRSIZ bytes, pad/truncate
    for (int i = 0; i < DIRSIZ; i++) de.name[i] = 0;
    strncpy(de.name, name, DIRSIZ);

    // 1) search for a free slot within current size
    uint32_t off = 0;
    while (off < pdi.size) {
        read_data(&pdi, off, block_buf, BSIZE);
        struct dirent *ents = (struct dirent *)block_buf;
        int entries = BSIZE / sizeof(struct dirent);
        for (int i = 0; i < entries; i++) {
            if (ents[i].inum == 0) {
                ents[i] = de;
                // Write back the whole block
                uint32_t blk_idx = (off / BSIZE);
                uint32_t disk_blk = inode_bmap_alloc(parent_inum, &pdi, blk_idx);
                if (!disk_blk) return -1;
                write_block(disk_blk, (uint8_t*)ents);
                // If we placed the entry beyond current logical end,
                // extend directory size so readdir can see it.
                uint32_t cur_entries = pdi.size / (uint32_t)sizeof(struct dirent);
                uint32_t abs_idx = (off / (uint32_t)sizeof(struct dirent)) + (uint32_t)i;
                if (abs_idx >= cur_entries) {
                    pdi.size = (abs_idx + 1) * (uint32_t)sizeof(struct dirent);
                    pdi.mtime = fs_now();
                    write_inode(parent_inum, &pdi);
                }
                return 0;
            }
        }
        off += BSIZE;
    }

    // 2) append a new entry at the end (may allocate a new block)
    uint32_t idx = pdi.size / sizeof(struct dirent);
    uint32_t blk_idx = (idx * sizeof(struct dirent)) / BSIZE;
    uint32_t blk_off = (idx * sizeof(struct dirent)) % BSIZE;
    uint32_t disk_blk = inode_bmap_alloc(parent_inum, &pdi, blk_idx);
    if (!disk_blk) return -1;

    uint8_t buf[BSIZE];
    read_block(disk_blk, buf);
    struct dirent *ents = (struct dirent *)buf;
    ents[(blk_off / sizeof(struct dirent))] = de;
    write_block(disk_blk, buf);

    pdi.size += sizeof(struct dirent);
    pdi.mtime = fs_now();
    write_inode(parent_inum, &pdi);
    return 0;
}

// Remove a directory entry with given name from parent directory
static int remove_dirent(uint32_t parent_inum, const char *name)
{
    struct dinode pdi;
    read_inode(parent_inum, &pdi);
    if (pdi.type != T_DIR) return -1;

    uint32_t off = 0;
    char namebuf[DIRSIZ+1];
    while (off < pdi.size) {
        read_block(inode_bmap_alloc(parent_inum, &pdi, off / BSIZE), block_buf);
        struct dirent *de = (struct dirent *)block_buf;
        int entries = BSIZE / sizeof(struct dirent);
        for (int i = 0; i < entries; i++) {
            if (de[i].inum == 0) continue;
            memcpy(namebuf, de[i].name, DIRSIZ);
            namebuf[DIRSIZ] = '\0';
            if (strncmp(namebuf, name, DIRSIZ) == 0) {
                de[i].inum = 0;
                write_block(inode_bmap_alloc(parent_inum, &pdi, off / BSIZE), block_buf);
                pdi.mtime = fs_now();
                write_inode(parent_inum, &pdi);
                return 0;
            }
        }
        off += BSIZE;
    }
    return -1;
}

// Normalize a path using "." and ".." components, starting from cwd if path is relative
static void build_abs_normalized(char *out, size_t outsz, const char *path)
{
    struct proc *p = gProc[gActiveProc];
    char merged[256];
    if (path && path[0] == '/') {
        strncpy(merged, path, sizeof(merged)-1);
        merged[sizeof(merged)-1] = '\0';
    } else {
        // join cwd + '/' + path
        strncpy(merged, p->cwd, sizeof(merged)-1);
        merged[sizeof(merged)-1] = '\0';
        int n = strlen(merged);
        if (!(n == 1 && merged[0] == '/')) {
            if (n < (int)sizeof(merged)-1) { merged[n++] = '/'; merged[n] = '\0'; }
        }
        if (path && path[0]) strncat(merged, path, sizeof(merged)-strlen(merged)-1);
    }

    // tokenize and normalize
    char tmp[256];
    strncpy(tmp, merged, sizeof(tmp)-1);
    tmp[sizeof(tmp)-1] = '\0';
    const char *s = tmp;
    const char *end = tmp + strlen(tmp);
    const char *tok_start;
    char comps[32][DIRSIZ+1];
    int compn = 0;
    while (s < end) {
        while (*s == '/') s++;
        if (*s == '\0') break;
        tok_start = s;
        while (*s && *s != '/') s++;
        int len = s - tok_start;
        if (len == 1 && tok_start[0] == '.') {
            // skip
        } else if (len == 2 && tok_start[0] == '.' && tok_start[1] == '.') {
            if (compn > 0) compn--;
        } else if (len > 0) {
            int llen = len;
            if (llen > DIRSIZ) llen = DIRSIZ;
            for (int i=0;i<DIRSIZ+1;i++) comps[compn][i]=0;
            for (int i=0;i<llen;i++) comps[compn][i] = tok_start[i];
            comps[compn][llen] = '\0';
            if (compn < 31) compn++;
        }
    }
    // build output
    int pos = 0;
    if (outsz > 0) out[pos++]='/' ;
    for (int i=0;i<compn;i++){
        int need = (i?1:0) + strlen(comps[i]);
        if ((size_t)pos + need >= outsz) break;
        if (i) out[pos++] = '/';
        for (int j=0; comps[i][j] && (size_t)pos < outsz-1; j++) out[pos++] = comps[i][j];
    }
    if (pos == 0) {
        if (outsz >= 2) { out[0]='/'; out[1]='\0'; }
        else if (outsz>=1) out[0]='\0';
    } else {
        out[pos]='\0';
    }
}

// Create a directory at path (relative to cwd allowed)
int fs_mkdir(const char *path, int mode)
{
    (void)mode;
    char abs[128];
    build_abs_normalized(abs, sizeof(abs), path);
    if (strcmp(abs, "/") == 0) return -1;

    // ensure not exists
    if (path_lookup(abs) != 0) return -1;

    // find parent and leaf
    uint32_t parent;
    char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    // require write+exec on parent dir
    struct dinode pdi; read_inode(parent, &pdi);
    if (!check_perm(&pdi, P_WRITE|P_EXEC)) return -1;
    if (leaf[0] == '\0') return -1;

    // allocate directory inode
    struct dinode di;
    uint32_t inum = 0;
    for (uint32_t i = 1; i <= sb.ninodes; i++) {
        read_inode(i, &di);
        if (di.type == 0) { inum = i; break; }
    }
    if (!inum) return -1;
    struct dinode newi; memset(&newi, 0, sizeof(newi));
    newi.type = T_DIR; newi.nlink = 1; newi.size = 0; newi.mtime = fs_now(); newi.ctime = newi.mtime;
    // apply umask and SGID inheritance
    unsigned short um = gProc[gActiveProc]->umask;
    struct dinode pdi_inh; read_inode(parent, &pdi_inh);
    newi.atime = newi.mtime; newi.uid = gProc[gActiveProc]->uid;
    newi.gid = (pdi_inh.mode & S_ISGID) ? pdi_inh.gid : gProc[gActiveProc]->gid;
    newi.mode = ((mode ? (mode & 0777) : 0755) & ~um);
    if (pdi_inh.mode & S_ISGID) newi.mode |= S_ISGID; // propagate SGID on directories
    write_inode(inum, &newi);

    if (add_dirent(parent, leaf, inum) != 0) return -1;
    return 0;
}

// Remove an empty directory at path (relative to cwd allowed)
int fs_rmdir(const char *path)
{
    char abs[128];
    build_abs_normalized(abs, sizeof(abs), path);
    if (strcmp(abs, "/") == 0) return -1;

    uint32_t inum = path_lookup(abs);
    if (inum == 0) return -1;
    struct dinode di; read_inode(inum, &di);
    if (di.type != T_DIR) return -1;
    // Only allow removing empty directory
    if (di.size != 0) {
        // check contents are all zero entries
        uint32_t off=0; int has_entries=0;
        while (off < di.size) {
            read_data(&di, off, block_buf, BSIZE);
            struct dirent *de = (struct dirent*)block_buf;
            int entries = BSIZE/sizeof(struct dirent);
            for(int i=0;i<entries;i++) if (de[i].inum) { has_entries=1; break; }
            if(has_entries) break;
            off += BSIZE;
        }
        if (has_entries) return -1;
    }

    uint32_t parent; char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    // require write+exec on parent dir
    struct dinode pdi2; read_inode(parent, &pdi2);
    if (!check_perm(&pdi2, P_WRITE|P_EXEC)) return -1;
    if (remove_dirent(parent, leaf) != 0) return -1;

    // Free any blocks (should be none if empty, but for safety)
    free_inode_blocks(inum, &di);
    // mark inode free
    struct dinode zero; memset(&zero, 0, sizeof(zero));
    write_inode(inum, &zero);
    return 0;
}

// Unlink (remove) a regular file at path
int fs_unlink(const char *path)
{
    char abs[128];
    build_abs_normalized(abs, sizeof(abs), path);
    if (strcmp(abs, "/") == 0) return -1;

    uint32_t inum = path_lookup(abs);
    if (inum == 0) return -1;
    struct dinode di; read_inode(inum, &di);
    if (di.type != T_FILE) return -1; // refuse to unlink non-regular

    // deny unlink if any process holds it open
    for (int pi = 0; pi < PROC_MAX; pi++) {
        if (!gProc[pi]) continue;
        struct file** ft = gProc[pi]->file_table;
        for (int i = 0; i < MAX_OPEN_FILES; i++) {
            if (ft[i] && ft[i]->kind == FK_FILE && ft[i]->inum == inum) {
                return -1; // busy
            }
        }
    }

    uint32_t parent; char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    // require write+exec on parent dir
    struct dinode pdi3; read_inode(parent, &pdi3);
    if (!check_perm(&pdi3, P_WRITE|P_EXEC)) return -1;
    // sticky bit on parent dir: only root, file owner, or dir owner can remove
    struct dinode pdir; read_inode(parent, &pdir);
    if (pdir.mode & S_ISVTX) {
        struct proc *pr = gProc[gActiveProc];
        if (!(pr->uid == 0 || pr->uid == di.uid || pr->uid == pdir.uid)) return -1;
    }
    if (remove_dirent(parent, leaf) != 0) return -1;

    // free data blocks then mark inode free
    free_inode_blocks(inum, &di);
    struct dinode zero; memset(&zero, 0, sizeof(zero));
    write_inode(inum, &zero);
    return 0;
}

// Helper: write arbitrary data to inode (overwrite from offset 0)
static int write_data_inode(uint32_t inum, struct dinode *ip, const uint8_t *src, uint32_t size)
{
    uint32_t left = size; uint32_t off = 0; const uint8_t *s = src;
    while (left > 0) {
        uint32_t blk_idx = off / BSIZE; uint32_t blk_off = off % BSIZE;
        uint32_t to_write = BSIZE - blk_off; if (to_write > left) to_write = left;
        uint32_t disk_blk = inode_bmap_alloc(inum, ip, blk_idx);
        if (!disk_blk) return -1;
        read_block(disk_blk, block_buf);
        memcpy(block_buf + blk_off, s, to_write);
        write_block(disk_blk, block_buf);
        left -= to_write; off += to_write; s += to_write;
    }
    ip->size = size; ip->mtime = fs_now(); write_inode(inum, ip); return 0;
}

// Create a symlink inode with link target stored as data
int fs_symlink(const char *target, const char *linkpath)
{
    char abs[128]; build_abs_normalized(abs, sizeof(abs), linkpath);
    if (strcmp(abs, "/") == 0) return -1;
    if (path_lookup(abs) != 0) return -1; // destination exists

    uint32_t parent; char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    if (leaf[0] == '\0') return -1;
    // require write+exec on parent dir
    struct dinode pdi; read_inode(parent, &pdi);
    if (!check_perm(&pdi, P_WRITE|P_EXEC)) return -1;

    // allocate inode
    struct dinode di; uint32_t inum=0;
    for (uint32_t i=1;i<=sb.ninodes;i++){ read_inode(i,&di); if(di.type==0){ inum=i; break; } }
    if (!inum) return -1;
    struct dinode ni; memset(&ni,0,sizeof(ni)); ni.type=T_SYMLINK; ni.nlink=1; ni.size=0; ni.mtime=fs_now(); ni.ctime=ni.mtime; write_inode(inum,&ni);

    if (add_dirent(parent, leaf, inum) != 0) return -1;
    // write target path as data
    uint32_t tlen = strlen(target); if (tlen > 240) tlen = 240; // limit
    uint8_t buf[240]; memset(buf,0,sizeof(buf)); strncpy((char*)buf, target, tlen);
    read_inode(inum, &ni);
    if (write_data_inode(inum, &ni, buf, tlen) != 0) return -1;
    return 0;
}

// Rename or move a file or directory from oldpath to newpath
int fs_rename(const char *oldpath, const char *newpath)
{
    char oldabs[128], newabs[128];
    build_abs_normalized(oldabs, sizeof(oldabs), oldpath);
    build_abs_normalized(newabs, sizeof(newabs), newpath);

    if (strcmp(oldabs, newabs) == 0) return 0;
    if (strcmp(oldabs, "/") == 0) return -1; // can't rename root

    uint32_t inum = path_lookup(oldabs);
    if (inum == 0) return -1;
    if (path_lookup(newabs) != 0) return -1; // destination exists

    uint32_t op, np; char oname[DIRSIZ+1]; char nname[DIRSIZ+1];
    for(int i=0;i<DIRSIZ+1;i++){ oname[i]=0; nname[i]=0; }
    if (!path_parent_lookup_abs(oldabs, &op, oname)) return -1;
    if (!path_parent_lookup_abs(newabs, &np,  nname)) return -1;
    if (oname[0] == '\0' || nname[0] == '\0') return -1;

    struct dinode pdi; read_inode(np, &pdi);
    if (pdi.type != T_DIR) return -1;
    // perms: write+exec on both parents
    struct dinode opd; read_inode(op, &opd);
    if (!check_perm(&opd, P_WRITE|P_EXEC)) return -1;
    if (!check_perm(&pdi, P_WRITE|P_EXEC)) return -1;

    // sticky in old parent: only root, file owner, or dir owner may rename
    struct dinode oldpd; read_inode(op, &oldpd);
    struct dinode filedi; read_inode(inum, &filedi);
    if (oldpd.mode & S_ISVTX) {
        struct proc *pr = gProc[gActiveProc];
        if (!(pr->uid == 0 || pr->uid == filedi.uid || pr->uid == oldpd.uid)) return -1;
    }
    if (add_dirent(np, nname, inum) != 0) return -1;
    if (remove_dirent(op, oname) != 0) return -1;
    return 0;
}

// Create a hard link newpath -> oldpath (files only)
int fs_link(const char *oldpath, const char *newpath)
{
    char oldabs[128], newabs[128];
    build_abs_normalized(oldabs, sizeof(oldabs), oldpath);
    build_abs_normalized(newabs, sizeof(newabs), newpath);

    if (strcmp(newabs, "/") == 0 || strcmp(oldabs, "/") == 0) return -1;
    uint32_t inum = path_lookup(oldabs);
    if (inum == 0) return -1;
    if (path_lookup(newabs) != 0) return -1;

    struct dinode di; read_inode(inum, &di);
    if (di.type != T_FILE) return -1; // restrict to regular files

    uint32_t parent; char leaf[DIRSIZ+1]; for (int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(newabs, &parent, leaf)) return -1;
    if (leaf[0] == '\0') return -1;
    // require write+exec on parent dir
    struct dinode pdi; read_inode(parent, &pdi);
    if (!check_perm(&pdi, P_WRITE|P_EXEC)) return -1;

    if (add_dirent(parent, leaf, inum) != 0) return -1;
    // inc link count
    di.nlink++;
    di.ctime = fs_now();
    write_inode(inum, &di);
    return 0;
}

int fs_stat(const char *path, struct stat *st)
{
    if (!st) return -1;
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t inum = path_lookup(abs);
    if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    st->type = di.type; st->nlink = di.nlink; st->size = di.size; st->inum = inum;
    st->mode = di.mode; st->uid = di.uid; st->gid = di.gid;
    st->atime = di.atime; st->mtime = di.mtime; st->ctime = di.ctime;
    return 0;
}

int fs_readlink(const char *path, char *buf, int bufsz)
{
    if (!buf || bufsz <= 0) return -1;
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t parent; char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    struct dinode pdi; read_inode(parent, &pdi); if (pdi.type != T_DIR) return -1;
    uint32_t inum = dir_lookup(&pdi, leaf); if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    if (di.type != T_SYMLINK) return -1;
    int n = di.size; if (n > bufsz) n = bufsz; if (n < 0) n = 0;
    if (n > 0) read_data(&di, 0, (uint8_t*)buf, n);
    return n;
}

int fs_lstat(const char *path, struct stat *st)
{
    if (!st) return -1;
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t parent; char leaf[DIRSIZ+1]; for(int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
    if (!path_parent_lookup_abs(abs, &parent, leaf)) return -1;
    struct dinode pdi; read_inode(parent, &pdi); if (pdi.type != T_DIR) return -1;
    uint32_t inum = dir_lookup(&pdi, leaf); if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    st->type = di.type; st->nlink = di.nlink; st->size = di.size; st->inum = inum;
    st->mode = di.mode; st->uid = di.uid; st->gid = di.gid;
    st->atime = di.atime; st->mtime = di.mtime; st->ctime = di.ctime;
    return 0;
}

int fs_chmod(const char *path, uint32_t mode)
{
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t inum = path_lookup(abs);
    if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    // only owner or root can chmod
    struct proc *p = gProc[gActiveProc];
    if (!(p->uid == 0 || p->uid == di.uid)) return -1;
    di.mode = mode & 07777; di.ctime = fs_now();
    write_inode(inum, &di);
    return 0;
}

int fs_chown(const char *path, uint16_t uid, uint16_t gid)
{
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t inum = path_lookup(abs);
    if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    // only root can chown
    if (gProc[gActiveProc]->uid != 0) return -1;
    di.uid = uid; di.gid = gid; di.ctime = fs_now();
    write_inode(inum, &di);
    return 0;
}

int fs_utimes(const char *path, uint32_t atime, uint32_t mtime)
{
    char abs[128]; build_abs_normalized(abs, sizeof(abs), path);
    uint32_t inum = path_lookup(abs);
    if (!inum) return -1;
    struct dinode di; read_inode(inum, &di);
    uint32_t now = fs_now();
    di.atime = (atime == 0xFFFFFFFFU) ? now : atime;
    di.mtime = (mtime == 0xFFFFFFFFU) ? now : mtime;
    di.ctime = now;
    write_inode(inum, &di);
    return 0;
}
int fs_open(const char *path) {
    // backward-compatible wrapper: flags=0, mode=0
    return fs_open2(path, 0, 0);
}

// fs_open2: flags/mode対応版
int fs_open2(const char *path, int flags, int mode) {
    struct file** file_table = get_current_file_table();
    char path2[128];  // 最終的な絶対パス（正規化済）
    if (!path || path[0] == '\0' || (path[0]=='.' && path[1]=='\0')) {
        struct proc *p = gProc[gActiveProc];
        build_abs_normalized(path2, sizeof(path2), p->cwd);
    } else {
        build_abs_normalized(path2, sizeof(path2), path);
    }
    
    // Special device: /dev/tty maps to console (read: UART, write: console)
    if (strcmp(path2, "/dev/tty") == 0) {
        for (int i = 3; i < MAX_OPEN_FILES; i++) {
            if (file_table[i] == NULL) {
                file_table[i] = new_file_table();
                file_table[i]->kind = FK_TTY;
                file_table[i]->used = 1;
                file_table[i]->inum = (uint32_t)-1;
                file_table[i]->off = 0;
                file_table[i]->read_pipe = 0;
                file_table[i]->write_pipe = 0;
                file_table[i]->oflags = flags;
                return i;
            }
        }
        return -1;
    }

    uint32_t inum = path_lookup(path2);
    struct dinode di;
    int created_new = 0;

    if (inum == 0) {
        // Not found
        if (flags & O_CREAT) {
            // Create in parent directory
            uint32_t parent;
            char leaf[DIRSIZ+1];
            for (int i=0;i<DIRSIZ+1;i++) leaf[i]=0;
            if (!path_parent_lookup_abs(path2, &parent, leaf)) {
                return -1;
            }
            uint32_t new_inum = alloc_inode_T_FILE();
            if (new_inum == 0) return -1;
            if (add_dirent(parent, leaf, new_inum) != 0) return -1;
            inum = new_inum;
            read_inode(inum, &di);
            // Set ownership/mode for newly created files immediately
            // so that subsequent permission checks are evaluated against
            // the creating user rather than default uid=0,mode=0644.
            unsigned short um = gProc[gActiveProc]->umask;
            // inherit gid from parent if SGID set
            uint32_t pinum; char leafx[DIRSIZ+1]; for(int ii=0;ii<DIRSIZ+1;ii++) leafx[ii]=0;
            uint16_t gid = gProc[gActiveProc]->gid;
            if (path_parent_lookup_abs(path2, &pinum, leafx)) {
                struct dinode pdi_inh; read_inode(pinum, &pdi_inh);
                if (pdi_inh.mode & S_ISGID) gid = pdi_inh.gid;
            }
            di.uid = gProc[gActiveProc]->uid;
            di.gid = gid;
            di.mode = ((mode & 0777) ? (mode & 0777) : 0644) & ~um;
            di.atime = di.mtime = di.ctime = fs_now();
            write_inode(inum, &di);
            created_new = 1;
        } else {
            return -1;
        }
    } else {
        read_inode(inum, &di);
    }

    if (di.type != T_FILE && di.type != T_DIR) return -1;

    // permission checks
    if (di.type == T_FILE) {
        int want = 0;
        if (flags == O_RDONLY) want |= P_READ;
        if (flags & O_WRONLY) want |= P_WRITE;
        if (flags & O_RDWR)   want |= (P_READ|P_WRITE);
        // If we just created the file, we already assigned mode/uid/gid
        // to the creating user above; proceed even if want==write.
        if (!created_new) {
            if (!check_perm(&di, want ? want : P_READ)) return -1;
        }
    } else if (di.type == T_DIR) {
        if (!check_perm(&di, P_READ|P_EXEC)) return -1;
    }

    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (file_table[i] == NULL) {
            file_table[i] = new_file_table();
            
            file_table[i]->kind = FK_FILE;
            file_table[i]->used  = 1;
            file_table[i]->inum  = inum;
            file_table[i]->din   = di;
            file_table[i]->off   = 0;
            file_table[i]->read_pipe   = 0;
            file_table[i]->write_pipe   = 0;
            file_table[i]->oflags = flags;

            // O_TRUNC: release existing blocks and reset size
            if ((flags & O_TRUNC) && file_table[i]->din.type == T_FILE) {
                free_inode_blocks(inum, &file_table[i]->din);
                uint32_t now = fs_now();
                file_table[i]->din.mtime = now;
                file_table[i]->din.ctime = now;
                file_table[i]->din.atime = now;
                write_inode(inum, &file_table[i]->din);
                file_table[i]->off = 0;
            }
            // O_APPEND: start at end of file
            if ((flags & O_APPEND) && file_table[i]->din.type == T_FILE) {
                file_table[i]->off = file_table[i]->din.size;
            }
            // If created now, din already updated above; keep cache in sync
            if (created_new) {
                file_table[i]->din = di;
            }
            return i;  // <- 3,4,5… を返す
        }
    }
    return -1;
}

// fs_read: fd から buf に count バイト読み込む
// 成功: 読み込んだバイト数 (0 は EOF), 失敗: -1
ssize_t fs_read(int fd, void *buf, size_t count) {
    struct file** file_table = get_current_file_table();
    
    if(file_table[fd] == NULL) {
        return -1;
    }
    
    int idx = fd;
    if (idx < 0 || idx >= MAX_OPEN_FILES)
        return -1;

    struct file *f = file_table[idx];
    uint32_t remaining = f->din.size - f->off;
    if (remaining == 0) return 0;

    uint32_t to_read = (count < remaining) ? count : remaining;
    read_data(&f->din, f->off, buf, to_read);
    f->off += to_read;
    // Access updates atime
    f->din.atime = fs_now();
    write_inode(f->inum, &f->din);
    return to_read;
}

// fs_write: fd から指す既存ファイルに書き込む（サイズ拡張なし）
// 成功: 書き込んだバイト数 (0 は EOF 相当), 失敗: -1
ssize_t fs_write(int fd, const void *buf, size_t count) {
    struct file** file_table = get_current_file_table();

    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    if (file_table[fd] == NULL) return -1;

    struct file *f = file_table[fd];
    if (f->kind != FK_FILE) return -1;
    if (!check_perm(&f->din, P_WRITE)) return -1;

    // 書き込み総量（サイズ拡張を許可）
    uint32_t to_total = count;

    const uint8_t *src = (const uint8_t *)buf;
    uint32_t left = to_total;
    // Respect O_APPEND: each write begins at current end
    uint32_t off  = (f->oflags & O_APPEND) ? f->din.size : f->off;
    if (f->oflags & O_APPEND) {
        f->off = off; // sync the file offset to end before writing
    }
    uint32_t written = 0;

    while (left > 0) {
        uint32_t blk_idx = off / BSIZE;
        uint32_t blk_off = off % BSIZE;
        uint32_t to_write = BSIZE - blk_off;
        if (to_write > left) to_write = left;

        uint32_t disk_blk = inode_bmap_alloc(f->inum, &f->din, blk_idx);
        if (disk_blk == 0) break; // ディスク満杯

        // 部分書き込みに備えて既存ブロックを読み、差し替え後に書く
        uint8_t bufblk[BSIZE];
        read_block(disk_blk, bufblk);
        memcpy(bufblk + blk_off, src, to_write);
        write_block(disk_blk, bufblk);

        left    -= to_write;
        off     += to_write;
        src     += to_write;
        written += to_write;
    }

    f->off += written;
    // サイズ拡張を反映
    uint32_t newsize = f->off;
    if (newsize > f->din.size) {
        f->din.size = newsize;
    }
    f->din.mtime = fs_now();
    write_inode(f->inum, &f->din);
    return written;
}

ssize_t fs_size(int fd) {
    struct file** file_table = get_current_file_table();
    
    if(file_table[fd] == NULL) {
        return -1;
    }
    
    int idx = fd;
    if (idx < 0 || idx >= MAX_OPEN_FILES || !file_table[idx]->used)
        return -1;

    struct file *f = file_table[idx];
    return f->din.size;
}

// fs_close: fd を閉じる
// 成功: 0, 失敗: -1

int fs_close(long fd, int massive) {
    struct file** ft = get_current_file_table();
    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    struct file *f = ft[fd];
    if (!f) return -1;

    // (A) まずこのプロセスの FD スロットを切り離す（多重closeを無害化）
    ft[fd] = NULL;

    // (B) massive のときは“このプロセスの”オーナー登録だけ外す
    if (massive) owner_remove(f, gProc[gActiveProc]);

    // (C) open file の参照を減らす
    if (f->used > 0) f->used--;

    // (D) まだ参照が残っているならここで終了
    if (f->used > 0) return 0;

    // (E) ここに来たら本当に最後の参照。pipe のカウンタをこの瞬間だけ減らす
    struct spipe* p = f->pipe;
    if (p) {
        if (f->read_pipe  && p->nreader > 0) { if (--p->nreader == 0) p->read_open  = 0; }
        if (f->write_pipe && p->nwriter > 0) { if (--p->nwriter == 0) p->write_open = 0; }
        if (p->used > 0) p->used--;
        if (p->used == 0) {
            // free_pipe の前に逆参照を切ってから解放（UAF防止）
            for (int i = 0; i < p->num_linked_file; i++) {
                if (p->linked_file[i]) p->linked_file[i]->pipe = NULL;
            }
            free_pipe(p);
        }
    }

    // (F) open file 自体をフリーリストへ
    free_file(f);
    return 0;
}

void fs_exit(struct file** file_table)
{
    for(int i=0; i<MAX_OPEN_FILES; i++) {
        fs_close(i, 1 /* massive */);
    }
}

void fs_dup_table(struct proc* owner, struct file** result, struct file** orig)
{
//puts("fs_dup");
    for(int i=0; i<MAX_OPEN_FILES; i++) {
        if(orig[i]) {
            result[i] = orig[i];
            result[i]->used++;
            
            // ★ 無制限に積まず、重複チェック＋空きスロット利用
            owner_add(result[i], owner);
            
/*
            if(result[i]->pipe) {
                struct spipe* pip = result[i]->pipe;
                
                pip->used++;
                pip->linked_file[pip->num_linked_file++] = result[i];
                
                if(pip->read_open) {
                    pip->nreader++;
                }
                
                if(pip->write_open) {
                    pip->nwriter++;
                }
                
                if(pip->num_linked_file >= PIPE_LINKED_MAX) {
                    puts("PIPE LINKED MAX");
                    while(1);
                }
            }
*/
        }
    }
//puts("fs_dup end");
}

void free_fs_table(struct file** file_table)
{
/*
    for(int i=0; i<MAX_OPEN_FILES; i++) {
        if(file_table[i]) {
            if(file_table[i]->pipe) {
                struct spipe* p = file_table[i]->pipe;
                
                kfree(file_table[i]->pipe);
            }
            if(file_table[i]->used <= 0) {
//                kfree(file_table[i]);
            }
        }
    }
*/
}

void fs_dup2(int oldfd, int newfd) {
    struct file** ft = get_current_file_table();
    if (oldfd < 0 || oldfd >= MAX_OPEN_FILES) return;
    if (newfd < 0 || newfd >= MAX_OPEN_FILES) return;
    if (ft[oldfd] == NULL) return;   // oldfd 無効なら何もしない
    if (oldfd == newfd) return;      // 自分自身なら何もしない

    if (ft[newfd] != NULL) fs_close(newfd, 0);   // 先に閉じる（冪等化済み）
    ft[newfd] = ft[oldfd];
    ft[oldfd]->used++;                           // 参照だけ増やす
    // ★ pipe のカウンタは触らない
}

// fs.c 追記（プロトタイプは fs.h にも追加してください）
int fs_fstat_fd(int fd, struct stat* st)
{
    if (!st) return -1;

    struct file** ft = get_current_file_table();
    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    struct file *f = ft[fd];
    if (!f || !f->used) return -1;

    // TTY / pipe なども扱っているなら種別で分岐して埋める。
    // まずは通常ファイル（FK_FILE）想定で inode 情報をそのまま返す。
    memset(st, 0, sizeof(*st));
/*
    st->st_mode = f->din.mode;
    st->st_uid  = f->din.uid;
    st->st_gid  = f->din.gid;
    st->st_nlink= f->din.nlink;
    st->st_size = f->din.size;     // ← fwrite で更新済みのサイズがここにある
    st->st_mtime= f->din.mtime;
    st->st_ino  = f->din.inum;
    
    struct dinode di; 
*/
    st->type = f->din.type; st->nlink = f->din.nlink; st->size = f->din.size;
    st->mode = f->din.mode; st->uid = f->din.uid; st->gid = f->din.gid;
    st->atime = f->din.atime; st->mtime = f->din.mtime; st->ctime = f->din.ctime;
    
    return 0;
}


// fs.c 追加
long fs_lseek(int fd, long offset, int whence) {
    if (fd < 0 || fd >= MAX_OPEN_FILES) return -1;
    struct file **ft = get_current_file_table();
    struct file *f = ft[fd];
    if (!f) return -1;

    long base;
    switch (whence) {
    case SEEK_SET: base = 0; break;
    case SEEK_CUR: base = (long)f->off; break;
    case SEEK_END: base = (long)f->din.size; break;
    default: return -1;
    }

    long newoff = base + offset;
    if (newoff < 0) return -1;

    f->off = (uint32_t)newoff;   // ブロック確保はしない
    return (long)f->off;         // 新しいファイル位置を返す
}
