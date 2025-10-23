#include <stdint.h>

#define MSTATUS_MIE (1L << 3)
#define MIE_MTIE (1L << 7)

#define SSTATUS_SIE (1L << 1)
#define SIE_STIE (1L << 5)

static inline uint64_t r_mie()
{
    uint64_t x;
    asm volatile("csrr %0, mie" : "=r" (x) );
    return x;
}

static inline void w_mie(uint64_t x)
{
    asm volatile("csrw mie, %0" : : "r" (x));
}

static inline uint64_t r_sie() {
    uint64_t x;
    asm volatile("csrr %0, sie" : "=r" (x) );
    return x;
}

static inline void w_sie(uint64_t x) {
    asm volatile("csrw sie, %0" : : "r" (x));
}

int main();

typedef unsigned long long uint64;

static inline uint64 r_mhartid()
{
    uint64_t x;
    asm volatile("csrr %0, mhartid" : "=r" (x) );
    return x;
}

#define MSTATUS_MPP_MASK (3L << 11)
#define MSTATUS_MPP_M (3L << 11)
#define MSTATUS_MPP_S (1L << 11)
#define MSTATUS_MPP_U (0L << 11)

static inline uint64 r_mstatus()
{
    uint64_t x;
    asm volatile("csrr %0, mstatus" : "=r" (x) );
    return x;
}

static inline void w_mstatus(uint64_t x)
{
    asm volatile("csrw mstatus, %0" : : "r" (x));
}

#define SSTATUS_SPP (1L << 8)  // Previous mode, 1=Supervisor, 0=User
#define SSTATUS_SPIE (1L << 5) // Supervisor Previous Interrupt Enable
#define SSTATUS_UPIE (1L << 4) // User Previous Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable

static inline uint64 r_sstatus()
{
    uint64_t x;
    asm volatile("csrr %0, sstatus" : "=r" (x) );
    return x;
}

static inline void w_sstatus(uint64_t x)
{
    asm volatile("csrw sstatus, %0" : : "r" (x));
}

static inline uint64 r_sip()
{
    uint64_t x;
    asm volatile("csrr %0, sip" : "=r" (x) );
    return x;
}

static inline void w_sip(uint64_t x)
{
    asm volatile("csrw sip, %0" : : "r" (x));
}

// Supervisor Interrupt Enable
#define SIE_SEIE (1L << 9) // external
#define SIE_SSIE (1L << 1) // software

static inline void w_sepc(uint64_t x)
{
    asm volatile("csrw sepc, %0" : : "r" (x));
}

static inline uint64 r_sepc()
{
    uint64_t x;
    asm volatile("csrr %0, sepc" : "=r" (x) );
    return x;
}

static inline void w_mepc(uint64_t x)
{
    asm volatile("csrw mepc, %0" : : "r" (x));
}

static inline uint64 r_mepc()
{
    uint64_t x;
    asm volatile("csrr %0, mepc" : "=r" (x) );
    return x;
}

static inline uint64 r_medeleg()
{
    uint64_t x;
    asm volatile("csrr %0, medeleg" : "=r" (x) );
    return x;
}

static inline void w_medeleg(uint64_t x)
{
    asm volatile("csrw medeleg, %0" : : "r" (x));
}

static inline uint64 r_mideleg()
{
    uint64_t x;
    asm volatile("csrr %0, mideleg" : "=r" (x) );
    return x;
}

static inline void w_mideleg(uint64_t x)
{
    asm volatile("csrw mideleg, %0" : : "r" (x));
}

static inline void w_stvec(uint64_t x)
{
    asm volatile("csrw stvec, %0" : : "r" (x));
}

static inline uint64 r_stvec()
{
    uint64_t x;
    asm volatile("csrr %0, stvec" : "=r" (x) );
    return x;
}

static inline uint64 r_stimecmp()
{
    uint64_t x;
    asm volatile("csrr %0, 0x14d" : "=r" (x) );
    return x;
}

static inline void w_stimecmp(uint64_t x)
{
    asm volatile("csrw 0x14d, %0" : : "r" (x));
}

static inline void w_pmpcfg0(uint64_t x)
{
    asm volatile("csrw pmpcfg0, %0" : : "r" (x));
}

static inline void w_pmpaddr0(uint64_t x)
{
    asm volatile("csrw pmpaddr0, %0" : : "r" (x));
}

#define SATP_SV39 (8L << 60)
#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64)pagetable) >> 12))

static inline void w_satp(uint64_t x)
{
    asm volatile("csrw satp, %0" : : "r" (x));
}

static inline uint64 r_satp()
{
    uint64_t x;
    asm volatile("csrr %0, satp" : "=r" (x) );
    return x;
}

static inline uint64 r_scause()
{
    uint64_t x;
    asm volatile("csrr %0, scause" : "=r" (x) );
    return x;
}

static inline uint64 r_stval()
{
    uint64_t x;
    asm volatile("csrr %0, stval" : "=r" (x) );
    return x;
}


static inline uint64 r_time()
{
    uint64_t x;
    asm volatile("csrr %0, time" : "=r" (x) );
    return x;
}

static inline void intr_on()
{
    w_sstatus(r_sstatus() | SSTATUS_SIE);
}

static inline void intr_off()
{
    w_sstatus(r_sstatus() & ~SSTATUS_SIE);
}

static inline int intr_get()
{
    uint64_t x = r_sstatus();
    return (x & SSTATUS_SIE) != 0;
}

static inline uint64 r_sp()
{
    uint64_t x;
    asm volatile("mv %0, sp" : "=r" (x) );
    return x;
}

static inline uint64 r_tp()
{
    uint64_t x;
    asm volatile("mv %0, tp" : "=r" (x) );
    return x;
}

static inline void w_tp(uint64_t x)
{
    asm volatile("mv tp, %0" : : "r" (x));
}

static inline uint64 r_ra()
{
    uint64_t x;
    asm volatile("mv %0, ra" : "=r" (x) );
    return x;
}

// flush the TLB.
static inline void sfence_vma()
{
    asm volatile("sfence.vma zero, zero");
}

typedef uint64 pte_t;
typedef uint64 *pagetable_t; // 512 PTEs

#define PGSIZE 4096 // bytes per page
#define PGSHIFT 12  // bits of offset within a page

#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define PTE_V (1L << 0) // valid
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4) // user can access

#define PA2PTE(pa) ((((uint64)pa) >> 12) << 10)
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)

#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PX(level, va) ((((uint64) (va)) >> PXSHIFT(level)) & PXMASK)

#define MAXVA (1L << (9 + 9 + 9 + 12 - 1))

#define MSTATUS_TSR  (1UL << 22) // TSRビット(22)を定義

#define CLINT_MTIME    0x0200BFF8UL
#define CLINT_MTIMECMP 0x02004000UL

static inline uint64_t read_mtime(void) {
    return *(volatile uint64_t *)CLINT_MTIME;
}
static inline void write_mtimecmp(uint64_t t) {
    *(volatile uint64_t *)CLINT_MTIMECMP = t;
}

#define CLINT_MTIME     0x0200BFF8UL
#define CLINT_MTIMECMP  0x02004000UL

// mtime の値を読み取る (CLINTのアドレスを直接読む)
static inline uint64_t read_clint_mtime(void) {
    return *(volatile uint64_t *)CLINT_MTIME;
}
    
// mtimecmp の値を書き込む (CLINTのアドレスを直接書く)
static inline void write_clint_mtimecmp(uint64_t t) {
    *(volatile uint64_t *)CLINT_MTIMECMP = t;
}

static inline uint64_t r_mcause(void) {
    uint64_t x;
    asm volatile("csrr %0, mcause" : "=r" (x));
    return x;
}

void mtvec();

static inline void w_mtvec(uint64_t x) {
    asm volatile("csrw mtvec, %0" : : "r" (x));
}

static inline uint64_t r_menvcfg() {
  uint64_t x;
  asm volatile("csrr %0, 0x30a" : "=r" (x) );
  return x;
}

static inline void w_menvcfg(uint64_t x) {
  asm volatile("csrw 0x30a, %0" : : "r" (x));
}

static inline void w_mcounteren(uint64_t x) {
    asm volatile("csrw mcounteren, %0" : : "r" (x));
}

static inline uint64_t r_mcounteren() {
    uint64_t x;
    asm volatile("csrr %0, mcounteren" : "=r" (x) );
    return x;
}

void start()
{
    w_satp(0);
    w_mtvec((uint64_t)mtvec);
    w_mstatus(r_mstatus() | MSTATUS_MIE);
    w_mie(r_mie() | MIE_MTIE); 
    
    // set M Previous Privilege mode to Supervisor, for mret.
    unsigned long x = r_mstatus();
    x &= ~MSTATUS_MPP_MASK;
    x |= MSTATUS_MPP_S;    // S-mode
    x &= ~(1UL << 20);     /// TVM clear
    x &= ~(MSTATUS_TSR);   // sret, sfenceできるようにTSRを0
    w_mstatus(x);
  
    // set M Exception Program Counter to main, for mret.
    // requires gcc -mcmodel=medany
    w_mepc((uint64)main);
  
  
    // delegate all interrupts and exceptions to supervisor mode.
    w_medeleg(0xffff);
    w_mideleg(0xffff);
    w_sie(r_sie() | SIE_SEIE | SIE_STIE | SIE_SSIE);
  
    // configure Physical Memory Protection to give supervisor mode
    // access to all of physical memory.
    w_pmpaddr0(0x3fffffffffffffUL);
    w_pmpcfg0(0xf);
  
    // keep each CPU's hartid in its tp register, for cpuid().
    //int id = r_mhartid();
    //w_tp(id);
  
    // enable the sstc extension (i.e. stimecmp).
    w_menvcfg(r_menvcfg() | (1LL << 63)); 
  
    // allow supervisor to use stimecmp and time.
    w_mcounteren(r_mcounteren() | 2);
  
    // switch to supervisor mode and jump to main().
    asm volatile("mret");
}
