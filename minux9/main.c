#include <comelang.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include "elf.h"
#include "fs2.h"
#include "userprog.h"
#include "userprog2.h"
#include "minux.h"

// machine-mode cycle counter
static inline uint64_t r_time()
{
    uint64_t x;
    asm volatile("csrr %0, time" : "=r" (x) );
    return x;
}

static inline void w_stimecmp(uint64_t x)
{
  asm volatile("csrw 0x14d, %0" : : "r" (x));
}

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

extern char _end2[];  // provided by linker 
extern char _end3[];  // kernel page start


#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8
#define VIRTIO_NUM VIRTIO_MAX_SLOTS


static void *kalloc_page(uint64_t bump) {
    void *p = (void*)bump;
    bump = (bump + 4095) & ~4095UL;
    bump += 4096;
    return p;
}

void *kalloc_pages(size_t npages) {
    uint64_t bump = (uint64_t)_end2;
    void *base = NULL;
    for(size_t i=0;i<npages;i++){
        void *pg = kalloc_page(bump);
        if(i==0) base = pg;
    }
    return base;
}


void perror(char* str) {
    puts(str);
}

void panic(char* str)
{
    puts("panic!");
}

struct context {
    uint64_t ra;
    uint64_t sp;
    uint64_t gp;
    uint64_t tp;
    uint64_t t0;
    uint64_t t1;
    uint64_t t2;
    uint64_t t3;
    uint64_t t4;
    uint64_t t5;
    uint64_t t6;
    uint64_t a0;
    uint64_t a1;
    uint64_t a2;
    uint64_t a3;
    uint64_t a4;
    uint64_t a5;
    uint64_t a6;
    uint64_t a7;
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
    uint64_t s4;
    uint64_t s5;
    uint64_t s6;
    uint64_t s7;
    uint64_t s8;
    uint64_t s9;
    uint64_t s10;
    uint64_t s11;
    uint64_t mepc;
};

struct cpu {
    struct proc *proc;          // The process running on this cpu, or null.
    struct context context;     // swtch() here to enter scheduler().
    int noff;                   // Depth of push_off() nesting.
    int intena;                 // Were interrupts enabled before push_off()?
};

struct cpu gCPU;

struct cpu* mycpu()
{
    return &gCPU;
}

typedef uint64_t pte_t;
typedef uint64_t pde_t;

typedef pte_t* pagetable_t; // 512

pagetable_t kernel_pagetable;

uint64_t make_satp(pagetable_t pagetable);

struct proc {
    struct context context;      // swtch() here to run process
    struct proc *parent;         // Parent process
    char* stack;
    char* program;
    
    pagetable_t pagetable;
};


#define HEAP_END (_end + PGSIZE * 256)

#define NPROC 128
struct proc* gProc[NPROC];
int gActiveProc = 0;
int gNumProc = 0;

void kfree(void *pa);
void freerange(void *pa_start, void *pa_end);

#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)


#define VA2VPN(va, level) ((((uint64_t)(va)) >> (12 + (9 * level))) & 0x1FF)

#define MAXVA (1UL << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64_t)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64_t) (va)) >> PXSHIFT(level)) & PXMASK)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define KERNBASE 0x80000000UL
#define PHYSTOP 0x81000000UL
void* memset(void *dst, int c, unsigned int n);

struct run {
    struct run *next;
};

static inline uint64_t r_mstatus() {
    uint64_t x;
    asm volatile("csrr %0, mstatus" : "=r" (x));
    return x;
}

static inline uint64_t r_sstatus() {
    uint64_t x;
    asm volatile("csrr %0, sstatus" : "=r" (x) );
    return x;
}

static inline void w_sstatus(uint64_t x) {
    asm volatile("csrw sstatus, %0" : : "r"(x));
}

#define SSTATUS_SIE (1L << 1)  // Supervisor Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable

#define MTIME    (volatile uint64_t*)0x0200BFF8
#define MTIMECMP (volatile uint64_t*)0x02004000
#define CLINT_MTIME     0x0200BFF8UL
#define CLINT_MTIMECMP  0x02004000UL

// Mutual exclusion lock.
struct spinlock {
  uint32_t locked;       // Is the lock held?

  // For debugging:
  char *name;        // Name of lock.
  struct cpu *cpu;   // The cpu holding the lock.
};

static inline void intr_on(void) {
    unsigned long x = r_sstatus();
    x |= SSTATUS_SIE;
    w_sstatus(x);
}

// disable device interrupts
static inline void intr_off() {
  w_sstatus(r_sstatus() & ~SSTATUS_SIE);
}

static inline void intr_off_direct(void) {
    // sstatusレジスタのSIEビットをクリアする
    asm volatile("csrc sstatus, %0" : : "r"(SSTATUS_SIE));
}

static inline void intr_on_direct(void) {
    // sstatusレジスタのSIEビットをセットする
    asm volatile("csrs sstatus, %0" : : "r"(SSTATUS_SIE));
}

// are device interrupts enabled?
static inline int intr_get() {
  uint64_t x = r_sstatus();
  return (x & SSTATUS_SIE) != 0;
}

int holding(struct spinlock *lk);
void pop_off(void);
void push_off(void);

// Mutual exclusion spin locks.
void initlock(struct spinlock *lk, char *name)
{
    lk->name = name;
    lk->locked = 0;
    lk->cpu = 0;
}

// Acquire the lock.
// Loops (spins) until the lock is acquired.
void acquire(struct spinlock *lk)
{
    push_off(); // disable interrupts to avoid deadlock.
    if(holding(lk))
        panic("acquire");

     // On RISC-V, sync_lock_test_and_set turns into an atomic swap:
     //   a5 = 1
     //   s1 = &lk->locked
     //   amoswap.w.aq a5, a5, (s1)
     while(__sync_lock_test_and_set(&lk->locked, 1) != 0)
    ;

     // Tell the C compiler and the processor to not move loads or stores
     // past this point, to ensure that the critical section's memory
     // references happen strictly after the lock is acquired.
     // On RISC-V, this emits a fence instruction.
     __sync_synchronize();

     // Record info about lock acquisition for holding() and debugging.
     lk->cpu = mycpu();
}

// Release the lock.
void release(struct spinlock *lk)
{
    if(!holding(lk))
        panic("release");

    lk->cpu = 0;

    // Tell the C compiler and the CPU to not move loads or stores
    // past this point, to ensure that all the stores in the critical
    // section are visible to other CPUs before the lock is released,
    // and that loads in the critical section occur strictly before
    // the lock is released.
    // On RISC-V, this emits a fence instruction.
     __sync_synchronize();

    // Release the lock, equivalent to lk->locked = 0.
    // This code doesn't use a C assignment, since the C standard
    // implies that an assignment might be implemented with
    // multiple store instructions.
    // On RISC-V, sync_lock_release turns into an atomic swap:
    //   s1 = &lk->locked
    //   amoswap.w zero, zero, (s1)
    __sync_lock_release(&lk->locked);
  
    pop_off();
}

// Check whether this cpu is holding the lock.
// Interrupts must be off.
int holding(struct spinlock *lk) {
    int r;
    r = (lk->locked && lk->cpu == mycpu());
    return r;
}

// push_off/pop_off are like intr_off()/intr_on() except that they are matched:
// it takes two pop_off()s to undo two push_off()s.  Also, if interrupts
// are initially off, then push_off, pop_off leaves them off.

void push_off(void)
{
    int old = intr_get();
  
    intr_off();
    if(mycpu()->noff == 0)
        mycpu()->intena = old;
    mycpu()->noff += 1;
}

void pop_off(void)
{
    struct cpu *c = mycpu();
    if(intr_get())
        panic("pop_off - interruptible");
    if(c->noff < 1)
        panic("pop_off");
    c->noff -= 1;
    if(c->noff == 0 && c->intena)
        intr_on();
}

struct {
  struct spinlock lock;
    struct run *freelist;
} kmem;

void kinit() {
    initlock(&kmem.lock, "kmem");
    freerange(_end3, (void*)PHYSTOP);
}

void freerange(void *pa_start, void *pa_end) {
    char *p;
    p = (char*)PGROUNDUP((uint64_t)pa_start);
    for(; p + PGSIZE <= (char*)pa_end; p += PGSIZE)
        kfree(p);
}

// Free the page of physical memory pointed at by pa,
// which normally should have been returned by a
// call to kalloc().  (The exception is when
// initializing the allocator; see kinit above.)
void kfree(void *pa) {
    struct run *r;

    if(((uint64_t)pa % PGSIZE) != 0 || (char*)pa < _end3 || (uint64_t)pa >= PHYSTOP) {
        while(1) puts("kfree panic");
    }

    // Fill with junk to catch dangling refs.
    memset(pa, 1, PGSIZE);

    r = (struct run*)pa;

    acquire(&kmem.lock);
    r->next = kmem.freelist;
    kmem.freelist = r;
    release(&kmem.lock);
}

void * kalloc(void) {
    struct run *r;

    acquire(&kmem.lock);
    r = kmem.freelist;
    if(r)
        kmem.freelist = r->next;
    release(&kmem.lock);

    if(r) {
        memset((char*)r, 5, PGSIZE); // fill with junk
    }
    
    return (void*)r;
}

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc) {
    if(va >= MAXVA)
        puts("walk");

    for(int level = 2; level > 0; level--) {
        pte_t *pte = &pagetable[PX(level, va)];
        if(*pte & PTE_V) {
            pagetable = (pagetable_t)PTE2PA(*pte);
        } else {
            if(!alloc || (pagetable = (pde_t*)kalloc()) == 0)
                return (void*)0;
            memset(pagetable, 0, PGSIZE);
            *pte = PA2PTE(pagetable) | PTE_V;
        }
    }
    return &pagetable[PX(0, va)];
}

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm) {
    uint64_t a, last;
    pte_t *pte;

    if((va % PGSIZE) != 0)
        puts("mappages: va not aligned");

    if((size % PGSIZE) != 0)
        puts("mappages: size not aligned");

    if(size == 0)
        puts("mappages: size");
  
    a = va;
    last = va + size - PGSIZE;
    for(;;){
        if((pte = walk(pagetable, a, 1)) == 0) {
            return -1;
        }
        if(*pte & PTE_V) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
        }
        
        *pte = PA2PTE(pa) | perm | PTE_V;
        if(a == last)
            break;
        a += PGSIZE;
        pa += PGSIZE;
    }
    return 0;
}

void dump_physical_memory(uint64_t pa, int count) {
    volatile uint32_t* ptr = (volatile uint32_t*)pa;

    for (int i = 0; i < count; i++) {
        if (i % 4 == 0)
            printf("%p: ", (uint64_t)(ptr + i));

        printf("%p ", ptr[i]);

        if (i % 4 == 3)
            puts("");
    }

    if (count % 4 != 0)
        puts("");
}

void vmprint_rec(pagetable_t pagetable, uint64_t va, int level) {
    for (int i = 0; i < 512; i++) {
        pte_t pte = pagetable[i];
        if (pte & PTE_V) {
            uint64_t pa = PTE2PA(pte);
            uint64_t child_va = va | ((uint64_t)i << (12 + 9 * (2 - level)));  // va

            for (int j = 0; j < level; j++)
                puts("\n.. ");
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n", child_va, pa, i, level);
  //dump_physical_memory(pa, 8);

            if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
                printf(" [leaf]");
            }

            printf(" flags: ");
            if (pte & PTE_R) printf(" R");
            if (pte & PTE_W) printf(" W");
            if (pte & PTE_X) printf(" X");
            if (pte & PTE_U) printf(" U");
            if (pte & PTE_V) printf(" V");
            puts("");

            if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
                vmprint_rec((pagetable_t)pa, child_va, level + 1);
            }
        }
    }
}

void vmprint(pagetable_t pagetable) {
    puts("page table:\n");
    vmprint_rec(pagetable, 0, 0);
}

#define SATP_SV39 (8L << 60)

#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64_t)pagetable) >> 12))

void enable_mmu(pagetable_t kernel_pagetable) {
    uint64_t satp = MAKE_SATP(kernel_pagetable);
    
    asm volatile("csrw satp, %0" :: "r"(satp));
            
    asm volatile("sfence.vma zero, zero");
}

#define VIRTIO0 0x10001000L       
#define REG_STATUS 0x070 

extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
uint64_t kernel_sp __attribute__((section(".common")));
uint64_t user_sp __attribute__((section(".common")));

uint64_t kernel_satp __attribute__((section(".common")));    // trap.S から参照する
uint64_t user_satp __attribute__((section(".common")));

// uart.c (Supervisor モード用)
// === UART RX 割り込みでキーを受け取る簡単な例 ===

// UART デバイスのアドレス
#define UART0         0x10000000UL
#define UART_RXDATA   ((volatile uint32_t*)(UART0 + 0x00))
#define UART_TXDATA   ((volatile uint32_t*)(UART0 + 0x04))
#define UART_IER      ((volatile uint8_t *)(UART0 + 0x01))
#define UART_RX_INTR  0x01

#define UART_THR      ((volatile uint8_t *)(UART0 + 0x00))  // 書き込み用
#define UART_LSR      ((volatile uint8_t *)(UART0 + 0x05))  // Line Status Register
#define UART_LSR_THRE 0x20  // Transmit Holding Register Empty

// Supervisor‐mode CSR ビット定義
#define SIE_SEIE   (1UL << 9)  // Supervisor External Interrupt Enable
#define SSTATUS_SIE (1UL << 1) // Sstatus.SIE

// PLIC 側で UART IRQ を Supervisor にルーティングする
extern void plic_enable(int irq);
#define UART_PLIC_IRQ 10

volatile char last_key = 0;

// UART 受信割り込みハンドラ。trap ハンドラ内からこれを呼びます。
void uart_rx_handler(void) {
    last_key = *(UART_RXDATA);
}

// Supervisor モードでの初期化
void uart_init(void) {
    // 1) UART デバイス側の RX 割り込みを有効化
    *UART_IER |= UART_RX_INTR;

    // 2) PLIC 側で UART_IRQ を Supervisor モードに有効化
    plic_enable(UART_PLIC_IRQ);

    // 3) Supervisor‐mode 外部割り込みを受け付ける
    asm volatile("csrs sie, %0" :: "r"(SIE_SEIE));

    // 4) Supervisor モード全体の割り込みを有効化
    asm volatile("csrs sstatus, %0" :: "r"(SSTATUS_SIE));
}

// 1 文字送信 (FIFO 空きを待ってから)
void putc(char c) {
    while (!(*UART_LSR & UART_LSR_THRE)) ;
    *UART_THR = c;
}
void putchar(char c) {
    putc(c);
}

// 割り込みなしでダイレクトに送る場合
void putc_direct(char c) {
    *(volatile char*)UART0 = c;
}
void puts_direct(const char* s) {
    while (*s) putc_direct(*s++);
}


void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        mappages(kernel_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }
    
    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
    mappages(kernel_pagetable, 0x10001000L, PGSIZE, 0x10001000L, PTE_R | PTE_W | PTE_V);

    // PLIC
    mappages(kernel_pagetable, 0x02000000, 0x00020000, 0x02000000, PTE_V|PTE_R|PTE_W);

    mappages(kernel_pagetable, 0x0C000000, 0x00400000, 0x0C000000, PTE_V|PTE_R|PTE_W);

    /// VIRTIO ///
    for (int i = 0; i < VIRTIO_NUM; i++) {
        uint64_t va = VIRTIO_MMIO_BASE0 + i * VIRTIO_MMIO_STRIDE;
        uint64_t pa = va;  // QEMU virt では VA=PA の identity map
        
        mappages(kernel_pagetable, va, VIRTIO_MMIO_STRIDE, pa, PTE_V | PTE_R | PTE_W);
    }
    mappages(kernel_pagetable, CLINT_MTIME, PGSIZE, CLINT_MTIME, PTE_R|PTE_W|PTE_V);
    mappages(kernel_pagetable, CLINT_MTIMECMP,  PGSIZE, CLINT_MTIMECMP, PTE_R|PTE_W|PTE_V);
                
    asm volatile("sfence.vma zero, zero"); 
    
    kernel_satp = MAKE_SATP(kernel_pagetable);
    
    enable_mmu(kernel_pagetable);
}

void* walkaddr(pagetable_t pagetable, uint64_t va) {
    pte_t *pte = walk(pagetable, va, 0);
    if (pte == 0)
        return (void*)0;
    if ((*pte & PTE_V) == 0)
        return (void*)0;
    if ((*pte & PTE_U) == 0)
        return (void*)0;
    uint64_t pa = PTE2PA(*pte);
    return (void*)(pa + (va & (PGSIZE - 1)));  
}

int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len) {
    uint64_t va0 = PGROUNDDOWN(dstva);
    uint64_t off = dstva - va0;
    char *pa;

    while (len > 0) {
        if ((pa = walkaddr(pagetable, va0)) == 0)
            return -1;
        uint64_t n = PGSIZE - off;
        if (n > len) n = len;

        memcpy(pa + off, src, n);
        len -= n;
        src += n;
        va0 += PGSIZE;
        off = 0;
    }
    return 0;
}


void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);


//#include "userprog.h"
//#include "userprog2.h"
//uint8_t elf_program[5096+1];
//uint8_t elf_program2[5048+1];

// ↑main.c の先頭あたりに追加

void setting_user_pagetable(pagetable_t pagetable)
{
    mappages(pagetable, (uint64_t)TRAMPOLINE, PGSIZE, (uint64_t)TRAMPOLINE, PTE_R | PTE_W | PTE_V | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME, PGSIZE, (uint64_t)TRAPFRAME, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME2, PGSIZE, (uint64_t)TRAPFRAME2, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    mappages(pagetable, (uint64_t)COMMON, PGSIZE, (uint64_t)COMMON, PTE_R | PTE_W | PTE_V | PTE_X | PTE_U);
    
    // UART
    mappages(pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    mappages(pagetable, 0x10001000L, PGSIZE, 0x10001000L, PTE_R | PTE_W | PTE_V | PTE_U);
                
    asm volatile("sfence.vma zero, zero"); 
}

void alloc_prog() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)hello_elf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
        
    struct proghdr *ph = (struct proghdr *)(hello_elf + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic("kalloc");
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        
        if (copyout(result->pagetable, ph->vaddr, hello_elf + ph->off, ph->filesz) < 0) {
            panic("copyout");
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    
    /// stack ///
    char *pa = kalloc();
    if (!pa) panic("kalloc");
    memset(pa, 0, PGSIZE);
    
    mappages(result->pagetable, va, PGSIZE, (uint64_t)pa, PTE_U | PTE_R | PTE_W | PTE_V);
    asm volatile("sfence.vma zero, zero"); 
    
    result->stack = (char*)va + PGSIZE;
    result->context.sp = va + PGSIZE;
    
    /// USER PROGRAM
    result->context.mepc = eh->entry;
    
    uint64_t satp_val = MAKE_SATP(result->pagetable);
    
    gProc[gNumProc++] = result;
}

void alloc_prog2() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)hello2_elf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
        
    struct proghdr *ph = (struct proghdr *)(hello2_elf + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic("kalloc");
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        if (copyout(result->pagetable, ph->vaddr, hello2_elf + ph->off, ph->filesz) < 0) {
            panic("copyout");
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    asm volatile("sfence.vma zero, zero"); 
    
    /// stack ///
    char *pa = kalloc();
    if (!pa) panic("kalloc");
    memset(pa, 0, PGSIZE);
    
    mappages(result->pagetable, va, PGSIZE, (uint64_t)pa, PTE_U | PTE_R | PTE_W | PTE_V);
    asm volatile("sfence.vma zero, zero"); 
    
    result->stack = (char*)va + PGSIZE;
    result->context.sp = va + PGSIZE;
    
    /// USER PROGRAM
    result->context.mepc = eh->entry;
    
    uint64_t satp_val = MAKE_SATP(result->pagetable);
    
    gProc[gNumProc++] = result;
}

void reset_watchdog();

void plic_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);

#define UART_IRQ 10

void plic_enable(int irq);

static inline void w_mstatus(uint64_t x) {
  asm volatile("csrw mstatus, %0" : : "r" (x));
}

static inline uint64_t r_sie() {
    uint64_t x;
    asm volatile("csrr %0, sie" : "=r"(x));
    return x;
}

static inline void w_sie(uint64_t x) {
    asm volatile("csrw sie, %0" : : "r"(x));
}

static inline void w_stvec(uint64_t x) {
    asm volatile("csrw stvec, %0" : : "r"(x));
}

#define TIMER_INTERVAL 10000UL
#define SSTATUS_SIE (1UL << 1)  // sstatus.SIE ビット
#define SIE_STIE    (1UL << 5)  // sie.STIE ビット

extern void trapvec();  

void my_intr_off()
{
    w_sstatus(r_sstatus() & ~SSTATUS_SIE);
    w_sie(r_sie() & ~SIE_STIE);
}
void my_intr_on()
{
    w_sstatus(r_sstatus() | SSTATUS_SIE);
    w_sie(r_sie() | SIE_STIE);
}

static inline uint64_t read_mtime() {
    return *(volatile uint64_t*)CLINT_MTIME;
}

// CLINT に MTIMECMP を書く
static inline void write_mtimecmp(uint64_t v) {
    *(volatile uint64_t*)CLINT_MTIMECMP = v;
}

// Supervisor-mode タイマー割り込みを有効化
void enable_timer_interrupts(void) {
    unsigned long x;

    // STIE = 1
    x = r_sie();
    x |= SIE_STIE;
    w_sie(x);

    // SIE = 1
    x = r_sstatus();
    x |= SSTATUS_SIE;
    w_sstatus(x);
}

// Supervisor-mode タイマー割り込みを無効化
void disable_timer_interrupts(void) {
    w_sstatus(r_sstatus() & ~SSTATUS_SIE);
    w_sie(r_sie() & ~SIE_STIE);
}

extern void swtch(struct context *old, struct context *new);

void timer_reset() {
    uint64_t next = r_time() + TIMER_INTERVAL;
    w_stimecmp(next);
}

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];

    struct context *tf = (struct context*)TRAPFRAME;
    p->context = *tf;

    timer_reset(); 

    struct proc *old = gProc[gActiveProc];
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    } 
    struct proc *new_ = gProc[gActiveProc];
    
    if (new_ != old) {
        user_sp = new_->context.sp;
        user_satp = MAKE_SATP(new_->pagetable);
        swtch(&old->context, &new_->context);
    }
}

// コンソール用スピンロック
static struct spinlock console_lock;

// 起動時に一度だけ呼び出す
void console_init(void) {
    initlock(&console_lock, "console");
}

// コンソール用スピンロック
static struct spinlock console_lock;

// カーネル側の puts (UART 等に文字列を出力)
void puts(const char *s) {
    acquire(&console_lock);
    while (*s) {
        putchar(*s++);
    }
    release(&console_lock);
}

uintptr_t syscall_handler(uintptr_t a0, uintptr_t a1, uintptr_t a2,
    uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t syscall_no)
{
    uintptr_t arg0 = a0;
    uintptr_t arg1 = a1;
    uintptr_t arg2 = a2;
    uintptr_t arg3 = a3;
    uintptr_t arg4 = a4;
    uintptr_t arg5 = a5;
    uintptr_t arg6 = a6;
    uintptr_t arg_syscall_no = syscall_no;
    
    disable_timer_interrupts();
    
    switch(syscall_no) {
    case SYS_write: {
        char kernel_buf[256];
        uint64_t user_va = arg1;
        
        struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
        int i = 0;
        for (i = 0; i < sizeof(kernel_buf) - 1; ++i) {
            char* user_char_pa = walkaddr(p->pagetable, user_va + i);
            if (user_char_pa == 0) {
                panic("walkaddr");
            }
            
            kernel_buf[i] = *user_char_pa;
            if (kernel_buf[i] == '\0') {
                break; // 文字列終端
            }
        }
        kernel_buf[i] = '\0';
        
        if(arg0 == 1) {
            puts((char*)kernel_buf);
        }
        return 0;
    }
    default:
        panic("invalid syscall");
    }
}



#define SSTATUS_SUM (1UL << 18)


void enter_user(uintptr_t, uintptr_t, uintptr_t, uint64_t);

#define SSTATUS_SPP (1L << 8)  // Previous mode, 1=Supervisor, 0=User

static inline uint64_t r_sip()
{
  uint64_t x;
  asm volatile("csrr %0, sip" : "=r" (x) );
  return x;
}

static inline uint64_t read_s_sp(void) {
    uint64_t sp_val;
    asm volatile(
        "mv %0, sp\n"     // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val)    // %0 は r• レジスタに出力
        :                 // 入力オペランドなし
        :                 // 破壊するレジスタなし
    );
    
    return sp_val;
}

static inline void sfence_vma()
{
  asm volatile("sfence.vma zero, zero");
}

static inline void w_satp(uint64_t x)
{
  asm volatile("csrw satp, %0" : : "r" (x));
}

static inline void w_sepc(uint64_t x)
{
  asm volatile("csrw sepc, %0" : : "r" (x));
}

void timerinit()
{
    w_stvec((uint64_t)trapvec & ~0x03);
    w_stimecmp(r_time() + 10000000);
    
    w_sstatus(r_sstatus() | SSTATUS_SIE);
    w_sie(r_sie() | SIE_STIE);
}

int main()
{
    timerinit();
    trap_init();          
    plic_init();
    plic_enable(UART_IRQ);
    
    w_stimecmp(r_time() + 10000000);
    
    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    
    w_stimecmp(r_time() + 10000000);

    alloc_prog();
    alloc_prog2();

    /// カーネルページからユーザープロセスをアクセス可能にする
    asm volatile("csrs sstatus, %0" : : "r"(SSTATUS_SUM));
    
    
    /// ユーザープロセスへ降りる
    w_stimecmp(r_time() + 10000000);
    
    struct proc* p = gProc[gActiveProc];
    
    uintptr_t usersp = (uint64_t)(p->stack);
    uint64_t usersatp = MAKE_SATP(p->pagetable);
    uintptr_t entry = p->context.mepc;
    
    w_stimecmp(r_time() + 100000);
    
    kernel_sp = read_s_sp();
    enter_user(entry, usersp, usersatp, TIMER_INTERVAL);
    
    while (1); 
}
