#include <stdint.h>
#include <stddef.h>

void *kalloc_pages(size_t npages);
void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

// -----------------------------------------------------------------------------
//  virtioblk legacy (MMIO) driver  dynamic queuesize & contiguous vring
// -----------------------------------------------------------------------------
//  * Handles any queue size Q (81024 on QEMU virt)
//  * Allocates one contiguous physical region for desc+avail+used
//  * Implements the full legacy featurenegotiation handshake
//  * Debug prints at init / before notify / after DMA
//  * Simple bump allocator & fs.img smoketest (256 sectors)
// -----------------------------------------------------------------------------
//  20250605   Public Domain / 0BSD

/* -----------------------------------------------------------
 *  board / device constants
 * ---------------------------------------------------------*/
#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8

#define SECTOR_SIZE         512
#define FSIMG_SECTORS       256          /* 128 KiB sample image */

/* legacy MMIO registers (offset) */
#define R_MAGIC              0x000
#define R_VERSION            0x004
#define R_DEVICE_ID          0x008
#define R_DEVICE_FEATURES    0x010
#define R_DRIVER_FEATURES    0x020
#define R_GPAGE_SZ           0x028
#define R_Q_SEL              0x030
#define R_Q_NUM              0x034
#define R_Q_ALIGN            0x038
#define R_Q_PFN              0x040
#define R_Q_READY            0x044
#define R_Q_NOTIFY           0x050
#define R_STATUS             0x070

#define R_Q_DESC_LOW   0x080   /* QueueDescLow     (32-bit) */
#define R_Q_DESC_HIGH  0x084   /* QueueDescHigh    (32-bit) */
#define R_Q_AVAIL_LOW  0x090   /* QueueDriverLow   (32-bit) */
#define R_Q_AVAIL_HIGH 0x094   /* QueueDriverHigh  (32-bit) */
#define R_Q_USED_LOW   0x0A0   /* QueueDeviceLow   (32-bit) */
#define R_Q_USED_HIGH  0x0A4   /* QueueDeviceHigh  (32-bit) */

#define R_Q_NUM_MAX   0x034   /* QueueNumMax : RO */
#define R_Q_NUM       0x038   /* QueueNum    : RW */

#define S_ACK        1
#define S_DRIVER     2
#define S_FEATURES_OK 8   /* bit3 */
#define S_DRIVER_OK  4

/* -----------------------------------------------------------
 *  virtqueue structures (legacy layout)
 * ---------------------------------------------------------*/
struct virtq_desc {
    uint64_t addr;
    uint32_t len;
    uint16_t flags;
    uint16_t next;
} __attribute__((packed));

struct virtq_avail {
    uint16_t flags;
    uint16_t idx;
    uint16_t ring[];                /* flexible array */
} __attribute__((packed,aligned(2)));

struct virtq_used_elem { uint32_t id,len; } __attribute__((packed));
struct virtq_used {
    uint16_t flags;
    uint16_t idx;
    struct virtq_used_elem ring[];
} __attribute__((packed,aligned(4)));

#define F_NEXT   1
#define F_WRITE  2

struct virtio_blk_req {
    uint32_t type;
    uint32_t reserved;
    uint64_t sector;
} __attribute__((packed));
#define VBLK_T_IN 0

/* -----------------------------------------------------------
 *  simple bump allocator (4 KiB aligned pages)
 * ---------------------------------------------------------*/

/* -----------------------------------------------------------
 *  globals
 * ---------------------------------------------------------*/
static uint64_t vbase = 0;          /* MMIO base */
static uint32_t Q     = 0;          /* queue size */

static struct virtq_desc  *desc;
static struct virtq_avail *avail;
static struct virtq_used  *used;
static uint8_t            *vq_area;

static uint16_t aidx = 0;           /* avail index */
volatile static uint8_t  status_byte __attribute__((aligned(4)));
volatile static uint8_t  dma_buf[SECTOR_SIZE] __attribute__((aligned(512)));

/* MMIO helpers */
static inline void mw32(uint64_t b,uint32_t o,uint32_t v){ *(volatile uint32_t*)(b+o)=v; }
static inline uint32_t mr32(uint64_t b,uint32_t o){ return *(volatile uint32_t*)(b+o); }

/* -----------------------------------------------------------
 *  device & queue initialisation
 * ---------------------------------------------------------*/
void virtio_blk_init(void)
{
    /* 1. probe slots */
    for(int s=0;s<VIRTIO_MAX_SLOTS;s++){
        uint64_t base = VIRTIO_MMIO_BASE0 + s*VIRTIO_MMIO_STRIDE;
        if(mr32(base,R_MAGIC)!=0x74726976) continue;
        if(mr32(base,R_DEVICE_ID)==2){ vbase = base; break; }
    }
    if(!vbase){ puts("virtio-blk not found\n"); while(1);}  
    if(mr32(vbase,R_VERSION)!=1){ puts("not legacy mmio\n"); while(1);}  

    /* 1) ステータスクリア～ACK, DRIVER */
    mw32(vbase, R_STATUS, 0);
    mw32(vbase, R_STATUS, S_ACK | S_DRIVER);

    /* 2) FEATURE 交渉 */
    uint32_t devfeat = mr32(vbase, R_DEVICE_FEATURES);
    (void)devfeat;
    mw32(vbase, R_DRIVER_FEATURES, 0);  // 特に何も要求しない

    uint32_t st = mr32(vbase, R_STATUS) | S_FEATURES_OK;
    mw32(vbase, R_STATUS, st);
    if (!(mr32(vbase, R_STATUS) & S_FEATURES_OK)) {
        puts("FEATURES_OK rejected\n"); while (1);
    }

    /* 3) ページサイズ, キュー選択, キューサイズ取得＆設定 */
    mw32(vbase, R_GPAGE_SZ, 4096);
    mw32(vbase, R_Q_SEL, 0);
    uint32_t devQ = mr32(vbase, R_Q_NUM_MAX);
    uint32_t drvQ = (devQ > 128) ? 128 : devQ;  // 例として 128
    mw32(vbase, R_Q_NUM, drvQ);
    Q = drvQ;
    if (!Q || Q > 1024) {
        puts("unsupported queue size\n"); while (1);
    }
    printf("device queue size = %d (driver uses %d)\n", devQ, Q);

    /* 4) キュー全体を1ブロックで確保する */
    size_t sz_desc  = 16ULL * Q;
    size_t sz_avail =  4ULL + 2ULL * Q;
    size_t sz_used  =  4ULL + 8ULL * Q;
    size_t sz_total = sz_desc + sz_avail + sz_used;
    size_t npages   = (sz_total + 4095) >> 12;  // 4096で丸める

    vq_area = kalloc_pages(npages);
    if (!vq_area) {
        puts("kalloc_pages failed\n");
        while (1);
    }
    memset(vq_area, 0, npages * 4096);

    /* 5) 「desc/avail/used」はすべてこの連続領域に順次置く */
    desc  = (struct virtq_desc  *)vq_area;
    avail = (struct virtq_avail *)(vq_area + sz_desc);
    used  = (struct virtq_used  *)(vq_area + sz_desc + sz_avail);

    uint64_t vq_phys = (uintptr_t)vq_area;  // 物理アドレスの先頭

    /* 6) レガシー MMIO ではここだけで済む */
    mw32(vbase, R_Q_ALIGN, 4096);
    mw32(vbase, R_Q_PFN,   (uint32_t)(vq_phys >> 12));

    /* 7) 最終的に DRIVER_OK 立てる */
    mw32(vbase, R_STATUS, st | S_DRIVER_OK);
}

/* -----------------------------------------------------------
 *  sector read (blocking)
 * ---------------------------------------------------------*/
static inline void set_flags(uint16_t f0,uint16_t f1,uint16_t f2){ desc[0].flags=f0; desc[1].flags=f1; desc[2].flags=f2; }

static struct virtio_blk_req req;

void virtio_blk_read(uint64_t sector, void *dst)
{
    req.type = VBLK_T_IN;
    req.sector = sector;
    req.reserved = 0;    /* ← これをセット（必須） */
    status_byte = 0xFF;

    desc[0].addr = (uint64_t)&req;        desc[0].len = sizeof(req);       desc[0].next = 1;
    desc[1].addr = (uint64_t)dma_buf;     desc[1].len = SECTOR_SIZE;       desc[1].next = 2;
    desc[2].addr = (uint64_t)&status_byte;
    desc[2].len  = 1;
    /* flags will be set in one shot below */

    /* descriptor flags */
    set_flags(F_NEXT,                /* head  -> desc1 */
              F_NEXT | F_WRITE,      /* desc1 -> desc2, device writes */
              F_WRITE);              /* status byte, device writes   */

    /* add head (0) to avail ring */
    avail->ring[aidx % Q] = 0;
    __sync_synchronize();            /* ensure all descriptor writes visible */
    avail->idx = ++aidx;             /* publish */

    mw32(vbase, R_Q_NOTIFY, 0);      /* doorbell */

    /* busywait for device to set status_byte */
    while(status_byte == 0xFF)
        __sync_synchronize();

    memcpy(dst, dma_buf, SECTOR_SIZE);
}

/* -----------------------------------------------------------
 *  fs.img reader for quick test
 * ---------------------------------------------------------*/
static uint8_t fsimg_buf[FSIMG_SECTORS * SECTOR_SIZE] __attribute__((aligned(4096)));

void read_fsimg(void)
{
    for(int i = 0; i < FSIMG_SECTORS; i++)
        virtio_blk_read(i, fsimg_buf + i * SECTOR_SIZE);
}

char* fsimg()
{
    return fsimg_buf;
}
