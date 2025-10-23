#include "common.h"
#include "sh.h"

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

#define PGSIZE 4096 // bytes per page

#define STACK_PAGES     64
#define STACK_MAX (4096*STACK_PAGES)

#define USER_STACK_TOP  0x40000000UL

extern char _end[];   // heap start
extern char _end2[];  // provided by linker 
extern char _end3[];  // kernel page start

static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

void* sbrk(ptrdiff_t incr) {
    if (heap_end == 0)
        heap_end = (char*)&_end;

    if (heap_end + incr >= heap_limit) {
        return (void*)-1;
    }

    void* prev = heap_end;
    heap_end += incr;
    return prev;
}

void kfree(void *pa);
void freerange(void *pa_start, void *pa_end);

pagetable_t kernel_pagetable;

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
    puts(str);
    puts("panic!");
}

struct cpu {
    struct proc *proc;          // The process running on this cpu, or null.
    struct context_t context;     // swtch() here to enter scheduler().
    int noff;                   // Depth of push_off() nesting.
    int intena;                 // Were interrupts enabled before push_off()?
};

struct cpu gCPU;

struct cpu* mycpu() {
    return &gCPU;
}

#define VA2VPN(va, level) ((((uint64_t)(va)) >> (12 + (9 * level))) & 0x1FF)

#define MAXVA (1UL << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64_t)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64_t) (va)) >> PXSHIFT(level)) & PXMASK)
#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)

#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define KERNBASE 0x80000000UL
#define PHYSTOP 0x81500000UL

void* walkaddr(pagetable_t pagetable, uint64_t va);
void kfree_pagesX(void *pa, int npages);

void free_pagetable(pagetable_t pagetable, int level) {
    for(int i = 0; i < 512; i++) {
        pte_t pte = pagetable[i];
        if(!(pte & PTE_V))
            continue;
        uint64_t pa = PTE2PA(pte);
        // リーフかどうか (R/W/X フラグがあるならファイルデータページ)
        if(pte & (PTE_R | PTE_W | PTE_X)) {
            if(level > 0) {
                kfree((void*)pa);
            }
        } else if(level > 0) {
            // 中間ノード
            pagetable_t child = (pagetable_t)pa;
            free_pagetable(child, level - 1);
            kfree(child);
        }
    }
}

#define HEAP_END (_end + PGSIZE * 256)

struct proc* gProc[PROC_MAX];
int gNumProc;
int gActiveProc;

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
        puts("kfree panic");
        while(1);
    }

    // Fill with junk to catch dangling refs.
    memset(pa, 0, PGSIZE);

    r = (struct run*)kmem.freelist;
    
/*
    while(r) {
//printf("r %p\n", r);
        if(r == pa) {
            return;
        }
//printf("r->next %p\n", r->next);
        r = r->next;
    }
*/
    
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
        memset((char*)r, 0, PGSIZE); // fill with junk
    }
    
//printf("kalloc %p\n", r);
    return (void*)r;
}

void * kalloc_pagesX(int npages) {
    if(npages <= 0) return NULL;

    acquire(&kmem.lock);

    // Search for contiguous pages in freelist
    struct run *prev = NULL;
    struct run *curr = kmem.freelist;

    while(curr) {
        // Check if we have npages contiguous from curr
        uint64_t base = (uint64_t)curr;
        int found = 1;
        struct run *check = curr;

        for(int i = 0; i < npages; i++) {
            uint64_t expected_addr = base + i * PGSIZE;

            if((uint64_t)check != expected_addr) {
                found = 0;
                break;
            }

            if(i < npages - 1) {
                check = check->next;
                if(!check) {
                    found = 0;
                    break;
                }
            }
        }

        if(found) {
            // Remove npages from freelist
            struct run *last = curr;
            for(int i = 1; i < npages; i++) {
                last = last->next;
            }

            if(prev) {
                prev->next = last->next;
            } else {
                kmem.freelist = last->next;
            }

            release(&kmem.lock);

            // Clear all pages
            for(int i = 0; i < npages; i++) {
                memset((char*)(base + i * PGSIZE), 0, PGSIZE);
            }

            return (void*)base;
        }

        prev = curr;
        curr = curr->next;
    }

    release(&kmem.lock);
    return NULL;
}

void kfree_pagesX(void *pa, int npages) {
    if(npages <= 0 || pa == NULL) return;

    uint64_t base = (uint64_t)pa;

    // Check alignment and bounds for all pages
    for(int i = 0; i < npages; i++) {
        uint64_t page_addr = base + i * PGSIZE;
        if((page_addr % PGSIZE) != 0 || page_addr < (uint64_t)_end3 || page_addr >= PHYSTOP) {
            puts("kfree_pagesX panic");
            while(1);
        }
    }

    // Free each page individually in reverse order
    // This helps maintain locality in the freelist
    for(int i = npages - 1; i >= 0; i--) {
        void *page = (void*)(base + i * PGSIZE);

        struct run *r = (struct run*)kmem.freelist;
        int already_free = 0;

        while(r) {
            if(r == page) {
                already_free = 1;
                break;
            }
            r = r->next;
        }

        if(!already_free) {
            r = (struct run*)page;
            acquire(&kmem.lock);
            r->next = kmem.freelist;
            kmem.freelist = r;
            release(&kmem.lock);
        }
    }
}

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc) {
    for(int level = 2; level > 0; level--) {
        pte_t *pte = (pte_t*)&pagetable[PX(level, va)];
        if(*pte & PTE_V) {
            pagetable = (pagetable_t)PTE2PA(*pte);
        } else {
            if(!alloc || (pagetable = (pagetable_t)kalloc()) == 0) {
                return (void*)0;
            }
            memset(pagetable, 0, PGSIZE);
            *pte = PA2PTE(pagetable) | PTE_V;
        }
    }
    return (pte_t*)&pagetable[PX(0, va)];
}

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm) {
    uint64_t a, last;
    pte_t *pte;

    // if((va % PGSIZE) != 0)
    //     puts("mappages: va not aligned");

    // if((size % PGSIZE) != 0)
    //     puts("mappages: size not aligned");

    // if(size == 0)
    //     puts("mappages: size");
  
    a = va;
    last = va + size - PGSIZE;
    for(;;){
        if((pte = walk(pagetable, a, 1)) == 0) {
            return -1;
        }
        if(*pte & PTE_V) {
            // printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
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


// UART デバイスのアドレス
#define UART0         0x10000000UL
#define UART_RXDATA   ((volatile uint32_t*)(UART0 + 0x00))
#define UART_TXDATA   ((volatile uint32_t*)(UART0 + 0x04))
#define UART_IER      ((volatile uint8_t *)(UART0 + 0x01))
#define UART_RX_INTR  0x01

#define UART_THR      ((volatile uint8_t *)(UART0 + 0x00))  // 書き込み用
#define UART_LSR      ((volatile uint8_t *)(UART0 + 0x05))  // Line Status Register
#define UART_LSR_THRE 0x20  // Transmit Holding Register Empty

/// VIRTIOデバイス
#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8
#define VIRTIO_NUM VIRTIO_MAX_SLOTS

#define VIRTIO0 0x10001000L       
#define REG_STATUS 0x070 


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
    while (!(*UART_LSR & UART_LSR_THRE)) {
        asm volatile("wfi");   // 割り込みが来るまで低消費で停止
    };
    *UART_THR = c;
}

void putchar(char c) {
    putc(c);
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

int copyin(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t len)
{
  uint64_t n, va0, pa0;

  while(len > 0){
    va0 = PGROUNDDOWN(srcva);
    pa0 = (uint64_t)walkaddr(pagetable, va0);
    if(pa0 == 0)
      return -1;
    n = PGSIZE - (srcva - va0);
    if(n > len)
      n = len;
    memmove(dst, (void *)(pa0 + (srcva - va0)), n);

    len -= n;
    dst += n;
    srcva = va0 + PGSIZE;
  }
  return 0;
}

// Copy a null-terminated string from user to kernel.
// Copy bytes to dst from virtual address srcva in a given page table,
// until a '\0', or max.
// Return 0 on success, -1 on error.
int copyinstr(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t max)
{
  uint64_t n, va0, pa0;
  int found_null = 0;
  uint64_t copied = 0; // number of bytes copied excluding the trailing NUL

  char* dst2 = dst;

  while(!found_null && max > 0){
    va0 = PGROUNDDOWN(srcva);
    pa0 = (uint64_t)walkaddr(pagetable, va0);
    if(pa0 == 0)
      return -1;
    n = PGSIZE - (srcva - va0);
    if(n > max)
      n = max;

    char *p = (char *)(pa0 + (srcva - va0));
    while(n > 0){
      if(*p == '\0'){
        *dst2 = '\0';
        found_null = 1;
        break;
      } else {
        *dst2 = *p;
        dst2++;
        p++;
        copied++;
      }
      --n;
      --max;
    }

    srcva = va0 + PGSIZE;
  }

  if(found_null){
    return (int)copied; // return length (0 is valid for empty string)
  } else {
    return -1;
  }
}

void setting_user_pagetable(struct proc* proc, pagetable_t pagetable)
{
    mappages(pagetable, (uint64_t)TRAMPOLINE, PGSIZE, (uint64_t)TRAMPOLINE, PTE_R | PTE_W | PTE_V | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME, PGSIZE, (uint64_t)TRAPFRAME, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME2, PGSIZE, (uint64_t)TRAPFRAME2, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    for(int i=0; i<STACK_PAGES * 2; i++) {
        mappages(pagetable, (uint64_t)COMMON + i*PGSIZE, PGSIZE, (uint64_t)COMMON + i*PGSIZE, PTE_R | PTE_W | PTE_V | PTE_X | PTE_U);
    }
    
    // UART
    mappages(pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    mappages(pagetable, 0x10001000L, PGSIZE, 0x10001000L, PTE_R | PTE_W | PTE_V | PTE_U);
                
    asm volatile("sfence.vma zero, zero"); 
}

#include <stddef.h>
_Static_assert(sizeof(struct elfsym) == 24, "Elf64_Sym size must be 24");
_Static_assert(offsetof(struct elfsym, value) == 8, "st_value must be at +8");
_Static_assert(offsetof(struct elfsym, size)  == 16, "st_size  must be at +16");

static uint16_t u16le(const void* p){ const unsigned char* q=p; return (uint16_t)(q[0] | (q[1]<<8)); }
static uint32_t u32le(const void* p){ const unsigned char* q=p; return (uint32_t)q[0] | ((uint32_t)q[1]<<8) | ((uint32_t)q[2]<<16) | ((uint32_t)q[3]<<24); }
static uint64_t u64le(const void* p){ const unsigned char* q=p; return (uint64_t)q[0] | ((uint64_t)q[1]<<8) | ((uint64_t)q[2]<<16) | ((uint64_t)q[3]<<24)
                                                       | ((uint64_t)q[4]<<32) | ((uint64_t)q[5]<<40) | ((uint64_t)q[6]<<48) | ((uint64_t)q[7]<<56); }

static int find_gp_from_file(char* elfbuf, const struct elfhdr* eh, uint64_t* out_gp)
{
    if (!elfbuf || !eh || !out_gp) return -1;

    // --- locate section headers
    if (eh->shoff == 0 || eh->shnum == 0 || eh->shentsize == 0) return -1;
    const char* sh_base = elfbuf + eh->shoff;

    // --- find SHT_SYMTAB
    int idx_sym = -1;
    for (uint16_t i=0;i<eh->shnum;i++) {
        const char* sh = sh_base + (uint64_t)i * eh->shentsize;
        uint32_t sh_type = u32le(sh + 4);
        if (sh_type == SHT_SYMTAB) { idx_sym = (int)i; break; }
    }
    if (idx_sym < 0) return -1;

    // --- get .symtab header
    const char* sh_sym = sh_base + (uint64_t)idx_sym * eh->shentsize;
    uint64_t sym_off   = u64le(sh_sym + 0x18);
    uint64_t sym_size  = u64le(sh_sym + 0x20);
    uint32_t sym_link  = u32le(sh_sym + 0x28);
    uint64_t sym_entsz = u64le(sh_sym + 0x38);  // 注意: 64bitヘッダの sh_entsize は 0x38 にある

    if (sym_off == 0 || sym_size == 0 || sym_entsz == 0) return -1;
    uint64_t n = sym_size / sym_entsz;

    // --- get linked .strtab (prefer sh_link)
    if (sym_link >= eh->shnum) return -1;
    const char* sh_str = sh_base + (uint64_t)sym_link * eh->shentsize;
    if (u32le(sh_str + 4) != SHT_STRTAB) {
        // フォールバック: .shstrtab 以外の SHT_STRTAB を探す
        int idx_str = -1;
        for (uint16_t i=0;i<eh->shnum;i++) {
            if (i == eh->shstrndx) continue;
            const char* sh = sh_base + (uint64_t)i * eh->shentsize;
            if (u32le(sh + 4) == SHT_STRTAB) { idx_str = i; break; }
        }
        if (idx_str < 0) return -1;
        sh_str = sh_base + (uint64_t)idx_str * eh->shentsize;
    }
    uint64_t str_off = u64le(sh_str + 0x18);
    uint64_t str_sz  = u64le(sh_str + 0x20);
    const char* strtab = (str_sz ? (elfbuf + str_off) : "");

    // --- scan symbols using sh_entsize, field-by-field
    const char* syms = elfbuf + sym_off;
    const char target[] = "__global_pointer$";
    for (uint64_t i=0;i<n;i++) {
        const char* s = syms + i * sym_entsz;

        // Elf64_Sym (LE) layout: u32 st_name; u8 st_info; u8 st_other; u16 st_shndx; u64 st_value; u64 st_size
        uint32_t st_name = u32le(s + 0);
        // uint8_t  st_info = *(const unsigned char*)(s + 4);
        // uint8_t  st_other= *(const unsigned char*)(s + 5);
        // uint16_t st_shndx= u16le(s + 6);
        uint64_t st_value= u64le(s + 8);
        // uint64_t st_size = u64le(s + 16);
        const char* name = (st_name < str_sz) ? (strtab + st_name) : NULL;
        if (!name) continue;
        // 高速短絡: 先頭2文字 "__" を確認してから strcmp
        if (name[0]=='_' && name[1]=='_' && strcmp(name, target)==0) {
            *out_gp = st_value;   // そのまま gp へ書く（絶対VAの想定）
            
            return 0;
        }
    }

    return -1; // not found
}

void alloc_prog(char* elf_buf, int elf_buf_size, int fork_flag, int exec_flag, int* child_proc_index) {
    struct proc* result = kalloc();
    
    result->process_pages = kalloc();
    result->process_pages[0] = kalloc();
    
    result->process_pages[0]->process_kalloc_address = kalloc();
    result->process_pages[0]->num_process_kalloc_address = 0;
    
    result->num_process_pages = 1;
    
    result->program_size = elf_buf_size;
    char *prog_copy = malloc(elf_buf_size);
    if (!prog_copy) {
        panic("alloc_prog: program malloc");
    }
    memcpy(prog_copy, elf_buf, elf_buf_size);
    result->program = prog_copy;
    
    // initialize default cwd to root
    result->cwd[0] = '/';
    result->cwd[1] = '\0';
    result->umask = 0022;
    result->uid = 0;
    result->gid = 0;
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(result, pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)elf_buf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic: not elf");
    }
        
    struct proghdr *ph = (struct proghdr *)(elf_buf + eh->phoff);
    
    uint64_t va = 0;
    uint64_t max_va_end = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            
            struct process_pages* page = result->process_pages[result->num_process_pages - 1];
            
            page->process_kalloc_address[page->num_process_kalloc_address++] = pa;
            
            if(page->num_process_kalloc_address >= NUM_PROC_VA_MAX) {
                result->process_pages[++result->num_process_pages] = kalloc();
            }
            
            if (!pa) panic("kalloc");
            memset(pa, 0, PGSIZE);

            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
        }

        if (va + PGSIZE > max_va_end) {
            max_va_end = va + PGSIZE;
        }
        
        if (copyout(result->pagetable, ph->vaddr, elf_buf + ph->off, ph->filesz) < 0) {
            panic("copyout");
        }
        // 余り（= BSS/ゼロ初期化領域）を明示ゼロ
        if (ph->memsz > ph->filesz) {
            static const char zpg[PGSIZE] = {0};
            uint64_t pos = ph->vaddr + ph->filesz;
            uint64_t end = ph->vaddr + ph->memsz;
            while (pos < end) {
                uint64_t n = end - pos;
                if (n > PGSIZE) n = PGSIZE;
                if (copyout(result->pagetable, pos, (void*)zpg, n) < 0)
                    panic("bss zero");
                pos += n;
            }
        }
    }

    struct elfshdr *sh = (struct elfshdr *)(elf_buf + eh->shoff);
    const char *shstrtab = elf_buf + sh[eh->shstrndx].offset;
    static const char zpg[PGSIZE] = {0};
    for (int i = 0; i < eh->shnum; i++) {
        uint64_t pos = sh[i].addr;
        uint64_t end = sh[i].addr + sh[i].size;
        if (sh[i].type == SHT_NOBITS && (sh[i].flags & 0x2) && sh[i].size) {
            uint64_t pos = sh[i].addr;
            uint64_t end = sh[i].addr + sh[i].size;
            // まず、未マップページがあれば確保して貼る
            for (uint64_t va = PGROUNDDOWN(pos); va < end; va += PGSIZE) {
                if (walkaddr(result->pagetable, va) == 0) {
                    void *pa = kalloc();
                    if (!pa) panic("bss kalloc");
                    memset(pa, 0, PGSIZE);
                    mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                             PTE_U|PTE_R|PTE_W|PTE_V);

                    if (va + PGSIZE > max_va_end) {
                        max_va_end = va + PGSIZE;
                    }
                }
            }
            // つぎにセクション範囲を**必ず**0クリア
            while (pos < end) {
                uint64_t n = end - pos; if (n > PGSIZE) n = PGSIZE;
                if (copyout(result->pagetable, pos, (void*)zpg, n) < 0) panic("bss zero");
                pos += n;
            }
    
            // デバッグ（レンジ可視化）
            // printf("start2 %p end2 %p (%s)\n", (void*)sh[i].addr, (void*)(sh[i].addr+sh[i].size), shstrtab+sh[i].name);
        }
    }
    
    result->vaddr = ph->vaddr;
    result->memsz = ph->memsz;

    // Find global pointer
    uint64_t gp = 0;
    struct elfsym *symtab = (void*)0;
    const char *strtab = (void*)0;
    int symtab_size = 0;

    for (int i = 0; i < eh->shnum; i++) {
        if (strcmp(shstrtab + sh[i].name, ".symtab") == 0) {
            symtab = (struct elfsym *)(elf_buf + sh[i].offset);
            symtab_size = sh[i].size;
        }
        if (strcmp(shstrtab + sh[i].name, ".strtab") == 0) {
            strtab = elf_buf + sh[i].offset;
        }
    }

    if (symtab && strtab) {
        for (int i = 0; i < symtab_size / sizeof(struct elfsym); i++) {
            if (strcmp(strtab + symtab[i].name, "__global_pointer$") == 0) {
                gp = symtab[i].value;
                break;
            }
        }
        for (int i = 0; i < symtab_size / sizeof(struct elfsym); i++) {
            if (strcmp(strtab + symtab[i].name, "_end") == 0) {
                max_va_end = symtab[i].value;
                break;
            }
        }
    }

    result->sz = PGROUNDUP(max_va_end);
    if(find_gp_from_file(elf_buf, eh, &gp) < 0) {
        //puts("Warning __global_pointer$ not found(1)\n");
    }
    
    if(gp == 0) {
        // Fallback or error if gp not found, but for now we just warn.
        // For non-PIC code this might be okay. For PIC/GP-relative, it will fail.
        //puts("Warning: __global_pointer$ not found(2)\n");
    }

    if(fork_flag) {
        struct proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
#ifdef DEBUG_CWD
        printf("[fork] parent=%d cwd='%s'\n", gActiveProc, parent->cwd);
#endif
        // inherit cwd from parent on fork
        int i=0; while (parent->cwd[i] && i < (int)sizeof(result->cwd)-1) { result->cwd[i] = parent->cwd[i]; i++; }
        result->cwd[i] = '\0';
        result->umask = parent->umask;
        result->uid = parent->uid;
        result->gid = parent->gid;
        //result->pgrp = parent->pgrp;
        result->parent = parent;
        result->parent_pid = gActiveProc;
        
        uint64_t parent_current    = parent->context.sp;
        uint64_t parent_stack_top   = (uint64_t)parent->stack_top;
        
        uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
        for (int i = 0; i < STACK_PAGES; i++) {
            char *pa = kalloc();
            
            char *src = walkaddr(parent->pagetable, parent_stack_top+i*PGSIZE);
            if(src) {
                memmove(pa, (void*)src, PGSIZE);
            }

            mappages(result->pagetable,
             stack_base + i*PGSIZE,
             PGSIZE,
             (uint64_t)pa,
             PTE_U|PTE_R|PTE_W|PTE_V);
        }
        asm volatile("sfence.vma zero, zero"); 

        result->stack_top  = (char*)stack_base;
        result->context.sp = stack_base + STACK_PAGES*PGSIZE;
        result->context.gp = parent->context.gp; // Inherit gp in fork
    
        fs_dup_table(result, result->file_table, parent->file_table);
#ifdef DEBUG_CWD
        printf("[fork] child inherited cwd='%s'\n", result->cwd);
#endif
    }
    else {
        uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
        for (int i = 0; i < STACK_PAGES; i++) {
            char *pa = kalloc();

            mappages(result->pagetable,
             stack_base + i*PGSIZE,
             PGSIZE,
             (uint64_t)pa,
             PTE_U|PTE_R|PTE_W|PTE_V);
        }
        asm volatile("sfence.vma zero, zero"); 

        result->stack_top  = (char*)stack_base;
        result->context.sp = stack_base + STACK_PAGES*PGSIZE;
        result->context.gp = gp; // Set gp for new program
        
        asm volatile("sfence.vma zero, zero"); 
    
        if(exec_flag) {
            struct proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
            
            result->parent = parent->parent;
            result->parent_pid = parent->parent_pid;
            
            // inherit file table and cwd across exec
            memcpy(result->file_table, parent->file_table, sizeof(struct file*)*MAX_OPEN_FILES);
            result->umask = parent->umask;
            result->uid = parent->uid;
            result->gid = parent->gid;
            result->pgrp = parent->pgrp;
            int i=0; while (parent->cwd[i] && i < (int)sizeof(result->cwd)-1) { result->cwd[i] = parent->cwd[i]; i++; }
            result->cwd[i] = '\0';
        }
        else {
            fs_init(result->file_table);
        }
    }
    
    /// USER PROGRAM
    result->context.mepc = eh->entry;
    
    if(exec_flag) {
        struct proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
        free_proc(parent);
        gProc[gActiveProc] = result;
        user_satp = MAKE_SATP(result->pagetable);
        user_sp   = result->context.sp;

        *child_proc_index = gActiveProc;
    }
    else {
        if(gNumProc >= PROC_MAX) {
            int found = 0;
            for(int i=0; i<PROC_MAX; i++) {
                if(gProc[i] == NULL) {
                    gProc[i] = result;
                    *child_proc_index = i;
                    found = 1;
                    break;
                }
            }
            
            if(found == 0) {
                puts("proc max");
                while(1);
            }
        }
        else {
            gProc[gNumProc++] = result;
            *child_proc_index = gNumProc -1;
        }
    }
}

void free_proc(struct proc *p) {
    uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
    for (int i = 0; i < STACK_PAGES; i++) {
        char* pa = walkaddr(p->pagetable, stack_base + i*PGSIZE);

        kfree(pa);
    }
    for (int i=0; i<p->num_process_pages; i++) {
        struct process_pages* page = p->process_pages[i];
        
        for(int j=0; j<page->num_process_kalloc_address; j++) {
            kfree(page->process_kalloc_address[j]);
        }
        
        kfree(page);
    }
    kfree(p->process_pages);
    
    if (p->program) {
        free(p->program);
        p->program = NULL;
    }
    p->program_size = 0;
    
    free_pagetable(p->pagetable, 2);
    kfree(p->pagetable);
    kfree(p);
}

struct file** get_current_file_table()
{
    return gProc[gActiveProc]->file_table;
}

void plic_init();
void trap_init();
void uart_rx_init();

#define UART_IRQ 10

void plic_enable(int irq);

#define TIMER_INTERVAL 10000UL
#define SSTATUS_SIE (1UL << 1)  // sstatus.SIE ビット
#define SIE_STIE    (1UL << 5)  // sie.STIE ビット

extern void trapvec();  

static inline void w_sie(uint64_t x) {
    asm volatile("csrw sie, %0" : : "r"(x));
}

static inline uint64_t r_sie() {
    uint64_t x;
    asm volatile("csrr %0, sie" : "=r"(x));
    return x;
}

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

void disable_timer_interrupts() {
    w_sstatus(r_sstatus() & ~SSTATUS_SIE);
    w_sie(r_sie() & ~SIE_STIE);
}

void timer_reset() {
    uint64_t next = r_time() + TIMER_INTERVAL;
    w_stimecmp(next);
}

#define MAX_KERNEL 16

uint64_t kernel_sp __attribute__((section(".common")));
uint64_t user_sp __attribute__((section(".common")));
uint64_t kernel_satp __attribute__((section(".common")));    // trap.S から参照する
uint64_t user_satp __attribute__((section(".common")));
char yield_stack[STACK_MAX] __attribute__((section(".common")));

struct sKernelState
{
    struct context_t gYieldContext;
    struct context_t gYieldReturnContext;
    char gYieldStack[STACK_MAX];

    uint64_t gYieldUserSatp;
    uint64_t gYieldUserSP;
    uint64_t gYieldUserActiveProc;
};

struct sKernelState gKernelState[MAX_KERNEL] __attribute__((section(".common")));
int gNumKernelState __attribute__((section(".common")));

void remove_kernel_state(int active_proc) {
    int index = -1;
    for(int i=0; i<gNumKernelState; i++) {
        if(gKernelState[i].gYieldUserActiveProc == active_proc) {
            index = i;
            break;
        }
    }
    
    if(index == -1) {
        return;
    }

    for (int i = index; i < gNumKernelState - 1; i++) {
        gKernelState[i] = gKernelState[i+1];
    }

    gNumKernelState--;
}

void kernel_yield() {
    gKernelState[gNumKernelState].gYieldReturnContext = *(struct context_t*)TRAPFRAME;
    gKernelState[gNumKernelState].gYieldUserSatp = user_satp;
    gKernelState[gNumKernelState].gYieldUserSP = user_sp;
    gKernelState[gNumKernelState].gYieldUserActiveProc = gActiveProc;
    gKernelState[gNumKernelState].gYieldContext = *(struct context_t*)TRAPFRAME2;
    memmove(gKernelState[gNumKernelState].gYieldStack, yield_stack, STACK_MAX);
    
    gNumKernelState++;
    
    if(gNumKernelState >= MAX_KERNEL) {
        puts("MAX KERNEL");
        while(1);
    }
    
    enable_timer_interrupts();
}

void yield_return();

void kernel_yield_return() {
    int index = -1;
    for(int i=0; i<gNumKernelState; i++) {
        if(gKernelState[i].gYieldUserActiveProc == gActiveProc) {
            index = i;
            break;
        }
    }
    
    if(index != -1) {
        user_satp = gKernelState[index].gYieldUserSatp;
        user_sp = gKernelState[index].gYieldUserSP;
        
        gActiveProc = gKernelState[index].gYieldUserActiveProc;
        
        struct context_t* trapframe = (struct context_t*)TRAPFRAME2;
        
        *trapframe = gKernelState[index].gYieldContext;
        
        trapframe = (struct context_t*)TRAPFRAME;
        *trapframe = gKernelState[index].gYieldReturnContext;
        
        memmove(yield_stack, gKernelState[index].gYieldStack, STACK_MAX);
        
        remove_kernel_state(gActiveProc);
        
        yield_return();
    }
}

extern void swtch(struct context_t *new_);

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];

    struct context_t *tf = (struct context_t*)TRAPFRAME;
    p->context = *tf;

    timer_reset(); 

    int old_active_proc = gActiveProc;
    struct proc *old = gProc[gActiveProc];
    gActiveProc++;
    
    while(gActiveProc < gNumProc && gProc[gActiveProc] == NULL) {
        gActiveProc++;
    }
    
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }
    
    int index = -1;
    for(int i=0; i<gNumKernelState; i++) {
        if(gKernelState[i].gYieldUserActiveProc == gActiveProc) {
            index = i;
            break;
        }
    }
    
    if(index != -1) {
        kernel_yield_return();
        return;
    }
    
    struct proc* new_ = gProc[gActiveProc];
    
    if (new_ != old && new_->zombie == 0) {
        user_sp = new_->context.sp;
        user_satp = MAKE_SATP(new_->pagetable);
        old->context = *(struct context_t*)TRAPFRAME;
        //gCPU.proc = new_;
        uint64_t a0 = new_->context.a0;
        asm volatile("csrw sscratch, %0" : "=r" (a0));
        swtch(&new_->context);
    }
    else {
        gActiveProc = old_active_proc;
    }
}

void uvmunmap(pagetable_t pagetable, uint64_t va, uint64_t npages, int do_free) {
    if((va % PGSIZE) != 0)
        panic("uvmunmap: not aligned");

    for(uint64_t a = va; a < va + npages * PGSIZE; a += PGSIZE){
        pte_t *pte = walk(pagetable, a, 0);
        if(pte == 0 || (*pte & PTE_V) == 0)
            continue;
        
        if(do_free){
            uint64_t pa = PTE2PA(*pte);
            kfree((void*)pa);
        }
        *pte = 0;
    }
}

int uvm_alloc(struct proc *p, pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz) {
    if(new_sz <= old_sz) return 0;

    uint64_t va = PGROUNDUP(old_sz);
    for(; va < new_sz; va += PGSIZE) {
        char *mem = kalloc();
        
        struct process_pages* page = p->process_pages[p->num_process_pages - 1];
        
        page->process_kalloc_address[page->num_process_kalloc_address++] = mem;
        
        if(page->num_process_kalloc_address >= NUM_PROC_VA_MAX) {
            p->process_pages[++p->num_process_pages] = kalloc();
        }
        
        if(mem == 0){
            uvm_dealloc(pagetable, va, old_sz);
            return -1;
        }
        memset(mem, 0, PGSIZE);
        if(mappages(pagetable, va, PGSIZE, (uint64_t)mem, PTE_W|PTE_R|PTE_U|PTE_V) < 0){
            kfree(mem);
            uvm_dealloc(pagetable, va, old_sz);
            return -1;
        }
    }

    // Add this line!
    asm volatile("sfence.vma zero, zero"); 

    return 0;
}

void uvm_dealloc(pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz) {
    if(new_sz >= old_sz) return;
    uvmunmap(pagetable, PGROUNDUP(new_sz), (PGROUNDUP(old_sz) - PGROUNDUP(new_sz)) / PGSIZE, 1);
}

uintptr_t syscall_handler()
{
    disable_timer_interrupts();
    
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    uint64_t result = 0;
    
//printf("ARG SYSCALL %d\n", arg_syscall_no);
    
    switch(arg_syscall_no) {
        case SYS_write: {
            result = Sys_write();
            }
            break;
            
        case SYS_pipe: {
            result = Sys_pipe();
            }
            break;
            
        case SYS_dup2: {
            result = Sys_dup2();
            }
            break;
            
        case SYS_exit: {
            result = Sys_exit();
            }
            break;
            
        case SYS_wait: {
            result = Sys_wait();
            }
            break;
            
        case SYS_open: {
            result = Sys_open();
            }
            break;
        case SYS_opendir: {
            result = Sys_opendir();
            }
            break;
        case SYS_readdir: {
            result = Sys_readdir();
            }
            break;
        case SYS_closedir: {
            result = Sys_closedir();
            }
            break;
        case SYS_getcwd: {
            result = Sys_getcwd();
            }
            break;
        case SYS_chdir: {
            result = Sys_chdir();
            }
            break;
        case SYS_mkdir: {
            result = Sys_mkdir();
            }
            break;
        case SYS_rmdir: {
            result = Sys_rmdir();
            }
            break;
        case SYS_unlink: {
            result = Sys_unlink();
            }
            break;
        case SYS_rename: {
            result = Sys_rename();
            }
            break;
        case SYS_link: {
            result = Sys_link();
            }
            break;
        case SYS_symlink: {
            result = Sys_symlink();
            }
            break;
        case SYS_stat: {
            result = Sys_stat();
            }
            break;
        case SYS_readlink: {
            result = Sys_readlink();
            }
            break;
        case SYS_lstat: {
            result = Sys_lstat();
            }
            break;
        case SYS_chmod: {
            result = Sys_chmod();
            }
            break;
        case SYS_chown: {
            result = Sys_chown();
            }
            break;
        case SYS_settimeofday: {
            result = Sys_settimeofday();
            }
            break;
        case SYS_utimes: {
            result = Sys_utimes();
            }
            break;
        case SYS_umask: {
            result = Sys_umask();
            }
            break;
        case SYS_gettimeofday: {
            result = Sys_gettimeofday();
            }
            break;
        case SYS_getuid: {
            result = Sys_getuid();
            }
            break;
        case SYS_getgid: {
            result = Sys_getgid();
            }
            break;
        case SYS_setuid: {
            result = Sys_setuid();
            }
            break;
        case SYS_setgid: {
            result = Sys_setgid();
            }
            break;
        case SYS_realpath: {
            result = Sys_realpath();
            }
            break;
        case SYS_fstat: {
            result = Sys_fstat();
            }
            break;
            
        case SYS_lseek: {
            result = Sys_lseek();
            }
            break;
            
        case SYS_read: {
            result = Sys_read();
            }
            break;
            
        case SYS_close: {
            long fd = arg0;
            
            int ret = fs_close(fd, 0 /* massive */);
            
            result = ret;
            }
            break;
            
        case SYS_fork: {
            result = Sys_fork();
            }
            break;
            
        case SYS_clear: {
            gNumProc = 1;
            gActiveProc = 0;
            memset(gKernelState, 0, sizeof(struct sKernelState)*MAX_KERNEL);
            gNumKernelState = 0;

            result = 0;
            }
            break;
            
        case SYS_execv: {
            result = Sys_execv();
            }
            break;
        case SYS_execve: {
            result = Sys_execve();
            }
            break;
        case SYS_isatty: {
            result = Sys_isatty();
            }
            break;
            
        case SYS_brk: {
            result = Sys_brk();
            }
            break;
            
        case SYS_sleep: {
            result = Sys_sleep();
            }
            break;
            
        case SYS_tcsetpgrp: {
            result = Sys_tcsetpgrp();
            }
            
        case SYS_getpid: {
            result = Sys_getpid();
            }
            break;
            
        default: {
            uint64_t mepc = trapframe->mepc;
            printf("invalid syscall. syscall number %d mepc %p", arg_syscall_no, mepc);
            while(1);
        }
    }
    
    trapframe->a0 = result;
    
    return result;
}

void enter_user(uintptr_t, uintptr_t, uintptr_t, uint64_t, uint64_t);

static inline uint64_t r_sip()
{
  uint64_t x;
  asm volatile("csrr %0, sip" : "=r" (x) );
  return x;
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

static inline void w_stvec(uint64_t x) {
    asm volatile("csrw stvec, %0" : : "r"(x));
}

void timerinit()
{
    w_stvec((uint64_t)trapvec & ~0x03);
    w_stimecmp(r_time() + 10000000);
    
    w_sstatus(r_sstatus() | SSTATUS_SIE);
    w_sie(r_sie() | SIE_STIE);
}

struct proc* get_current_proc()
{
    return gProc[gActiveProc];
}

void global_init()
{
    memset(gProc, 0, sizeof(struct proc*)*PROC_MAX);
    gNumProc = 0;
    gNumKernelState = 0;
    memset(gKernelState, 0, sizeof(struct sKernelState)*MAX_KERNEL);
    gActiveProc = 0;
}

#define SSTATUS_SUM (1UL << 18)

int main()
{
    // Initialize kernel_sp FIRST, before any timer interrupts can fire
    asm volatile(
        "mv %0, sp\n"
        : "=r"(kernel_sp)
    );

    timerinit();
    trap_init();
    plic_init();
    plic_enable(UART_IRQ);

    w_stimecmp(r_time() + 10000000);

    uart_init();
    kinit();
    //console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    file_system_init();
    
    global_init();
    
    w_stimecmp(r_time() + 10000000);

    int fork_flag;
    int child_proc_index = 0;
    alloc_prog((char*)sh_elf, sizeof(sh_elf), fork_flag=0, 0, &child_proc_index);

    /// カーネルページからユーザープロセスをアクセス可能にする
    asm volatile("csrs sstatus, %0" : : "r"(SSTATUS_SUM));
    
    /// ユーザープロセスへ降りる
    w_stimecmp(r_time() + 10000000);
    
    struct proc* p = gProc[0];
    
    int gp = p->context.gp;
    
    uintptr_t usersp = (uint64_t)(p->context.sp);
    uint64_t usersatp = MAKE_SATP(p->pagetable);
    uintptr_t entry = p->context.mepc;
    
    w_stimecmp(r_time() + 100000);
    
    gCPU.proc = p;
    
    asm volatile(
        "mv %0, sp\n"     // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp)    // %0 は r レジスタに出力
        :                 // 入力オペランドなし
        :                 // 破壊するレジスタなし
    );
    enter_user(entry, usersp, usersatp, TIMER_INTERVAL, gp);

    // should not return; stay idle if it does
    while (1) { }
}
    
#define MAX_USERS 4
struct userrec { const char* name; const char* pass; uint16_t uid; uint16_t gid; };
struct userrec gUsers[MAX_USERS] = {
    {"root", "root", 0, 0},
    {"user", "user", 1000, 100},
};

static int parse_uint(const char* s, uint32_t *out)
{
    uint32_t v=0; if(!s||!*s) return -1; while(*s){ if(*s<'0'||*s>'9') return -1; v = v*10 + (*s-'0'); s++; } *out=v; return 0;
}

// Wall-clock base seconds set by settimeofday
uint32_t g_time_offset = 0;
