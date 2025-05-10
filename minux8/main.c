#include <stdarg.h>
//#include <stdio.h>
//#include <comelang.h>

//#include <comelang.h>

typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;

typedef unsigned char uint8;
typedef unsigned char uint8_t;
typedef unsigned short uint16;
typedef unsigned short uint16_t;
typedef unsigned int  uint32;
typedef unsigned int  uint32_t;
typedef unsigned long uint64;
typedef unsigned long uint64_t;

#include "common.h"

typedef uint64_t pte_t;

static char digits[] = "0123456789ABCDEF";

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*512)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

void putchar(char c) {
    *(volatile char*)(0x10000000) = c;
}

#define HEAP_END (_end + PGSIZE * 4096)
void freerange(void *pa_start, void *pa_end);

void kinit() {
  freerange(_end, HEAP_END);
}
struct run {
  struct run *next;
};

struct {
  struct run *freelist;
} kmem;

void * kalloc(void) {
  struct run *r;

  r = kmem.freelist;
  if(r) {
    kmem.freelist = r->next;
  }

  return (void*)r;
}

/// MMU ///
#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)

#define VA2VPN(va, level) ((((uint64_t)(va)) >> (12 + (9 * level))) & 0x1FF)

#define MAXVA (1UL << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64) (va)) >> PXSHIFT(level)) & PXMASK)
typedef uint64 pde_t;

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512
pagetable_t kernel_pagetable;
pte_t * walk(pagetable_t pagetable, uint64 va, int alloc);


//void map_page(pagetable_t pagetable, uint64 va, uint64 pa, int perm);

int mappages(pagetable_t pagetable, uint64 va, uint64 size, uint64 pa, int perm);

void kvminit() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

/*
    // 0x80000000
    for (uint64 addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        map_page(kernel_pagetable, addr, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }
*/

    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V);
}

/*
void map_page(pagetable_t pagetable, uint64 va, uint64 pa, int perm) {
    int level;
    pagetable_t pt = pagetable;

    for (level = 2; level > 0; level--) {
        int idx = VA2VPN(va, level);
        if (!(pt[idx] & PTE_V)) {
            pagetable_t new_pt = (pagetable_t)kalloc();
            memset(new_pt, 0, PGSIZE);
            pt[idx] = ((uint64)new_pt >> 12) << 10 | PTE_V;
        }
        pt = (pagetable_t)(((pt[idx] >> 10) << 12));
    }

    int idx = VA2VPN(va, 0);
    pt[idx] = (pa >> 12) << 10 | perm | PTE_V;
}
*/

/*
void enable_vm(pagetable_t pagetable) {
    uint64 satp = SATP_SV39 | (((uint64)pagetable >> 12) & 0xFFFFFFFFFFF);
    asm volatile("csrw satp, %0" : : "r"(satp));
    asm volatile("sfence.vma zero, zero"); // TLB
}
*/

/*
#define SATP_SV39 (8L << 60)
#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64)pagetable) >> 12))
void enable_vm(pagetable_t pagetable) {
    uint64 pa = (uint64)pagetable - KERNBASE;  // 
    uint64 satp = SATP_SV39 | ((pa >> 12) & 0xFFFFFFFFFFF);
    asm volatile("csrw satp, %0" : : "r"(satp));
    asm volatile("sfence.vma zero, zero"); // flush TLB
}
*/


pagetable_t uvmcreate() {
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    return pagetable;
}

pte_t * walk(pagetable_t pagetable, uint64 va, int alloc)
{
  if(va >= MAXVA)
    puts("walk");

  for(int level = 2; level > 0; level--) {
    pte_t *pte = &pagetable[PX(level, va)];
    if(*pte & PTE_V) {
      pagetable = (pagetable_t)PTE2PA(*pte);
    } else {
      if(!alloc || (pagetable = (pde_t*)kalloc()) == 0)
        return 0;
      memset(pagetable, 0, PGSIZE);
      *pte = PA2PTE(pagetable) | PTE_V;
    }
  }
  return &pagetable[PX(0, va)];
}

#define MAXVA (1L << (9 + 9 + 9 + 12 - 1))
#define PTE2PA(pte) (((pte) >> 10) << 12)
#define PA2PTE(pa) ((((uint64)pa) >> 12) << 10)
#define PTE_FLAGS(pte) ((pte) & 0x3FF)
#define PXMASK          0x1FF // 9 bits
#define PXSHIFT(level)  (PGSHIFT+(9*(level)))
#define PGSHIFT 12  // bits of offset within a page
#define PX(level, va) ((((uint64) (va)) >> PXSHIFT(level)) & PXMASK)
typedef uint64 pde_t;

void kfree(void *pa);

void uvmunmap(pagetable_t pagetable, uint64 va, uint64 npages, int do_free)
{
  uint64 a;
  pte_t *pte;

  if((va % PGSIZE) != 0)
    puts("uvmunmap: not aligned");

  for(a = va; a < va + npages*PGSIZE; a += PGSIZE){
    if((pte = walk(pagetable, a, 0)) == 0)
      puts("uvmunmap: walk");
    if((*pte & PTE_V) == 0)
      puts("uvmunmap: not mapped");
    if(PTE_FLAGS(*pte) == PTE_V)
      puts("uvmunmap: not a leaf");
    if(do_free){
      uint64 pa = PTE2PA(*pte);
      kfree((void*)pa);
    }
    *pte = 0;
  }
}

uint64 uvmdealloc(pagetable_t pagetable, uint64 oldsz, uint64 newsz)
{
  if(newsz >= oldsz)
    return oldsz;

  if(PGROUNDUP(newsz) < PGROUNDUP(oldsz)){
    int npages = (PGROUNDUP(oldsz) - PGROUNDUP(newsz)) / PGSIZE;
    uvmunmap(pagetable, PGROUNDUP(newsz), npages, 1);
  }

  return newsz;
}

uint64 uvmalloc(pagetable_t pagetable, uint64 oldsz, uint64 newsz, int xperm)
{
  char *mem;
  uint64 a;

  if(newsz < oldsz)
    return oldsz;

  oldsz = PGROUNDUP(oldsz);
  for(a = oldsz; a < newsz; a += PGSIZE){
    mem = kalloc();
    if(mem == 0){
      uvmdealloc(pagetable, a, oldsz);
      return 0;
    }
    memset(mem, 0, PGSIZE);
    if(mappages(pagetable, a, PGSIZE, (uint64)mem, PTE_R|PTE_U|xperm) != 0){
      kfree(mem);
      uvmdealloc(pagetable, a, oldsz);
      return 0;
    }
  }
  return newsz;
}

int copyout(pagetable_t pagetable, uint64 dstva, char *src, uint64 len)
{
  uint64 n, va0, pa0;
  pte_t *pte;

  while(len > 0){
    va0 = PGROUNDDOWN(dstva);
    if(va0 >= MAXVA)
      return -1;
    pte = walk(pagetable, va0, 0);
    if(pte == 0 || (*pte & PTE_V) == 0 || (*pte & PTE_U) == 0 ||
       (*pte & PTE_W) == 0)
      return -1;
    pa0 = PTE2PA(*pte);
    n = PGSIZE - (dstva - va0);
    if(n > len)
      n = len;
    memmove((void *)(pa0 + (dstva - va0)), src, n);

    len -= n;
    src += n;
    dstva = va0 + PGSIZE;
  }
  return 0;
}

uint64
walkaddr(pagetable_t pagetable, uint64 va)
{
  pte_t *pte;
  uint64 pa;

  if(va >= MAXVA)
    return 0;

  pte = walk(pagetable, va, 0);
  if(pte == 0)
    return 0;
  if((*pte & PTE_V) == 0)
    return 0;
  if((*pte & PTE_U) == 0)
    return 0;
  pa = PTE2PA(*pte);
  return pa;
}

int copyin(pagetable_t pagetable, char *dst, uint64 srcva, uint64 len)
{
  uint64 n, va0, pa0;

  while(len > 0){
    va0 = PGROUNDDOWN(srcva);
    pa0 = walkaddr(pagetable, va0);
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

/*
int copyout(pagetable_t pagetable, uint64 dstva, void *src, uint64 len) {
    uint64 va = dstva;
    uint64 end = dstva + len;

    while (va < end) {
        //  PTE 
        pte_t *pte = walk(pagetable, va, 0);
        if (pte == 0 || (*pte & PTE_V) == 0)
            return -1;

        // 
        uint64 pa = ((*pte >> 10) << 12);

        // 
        uint64 page_offset = va % PGSIZE;
        uint64 n = PGSIZE - page_offset;
        if (n > end - va)
            n = end - va;

        // 
        memmove((void *)(pa + page_offset), src, n);
        
        va += n;
        src += n;
    }

    return 0;
}
*/


int mappages(pagetable_t pagetable, uint64 va, uint64 size, uint64 pa, int perm)
{
  uint64 a, last;
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
    if((pte = walk(pagetable, a, 1)) == 0)
      return -1;
    if(*pte & PTE_V)
      printf("mappages: remap %p", va);
    *pte = PA2PTE(pa) | perm | PTE_V;
    if(a == last)
      break;
    a += PGSIZE;
    pa += PGSIZE;
  }
  return 0;
}


pagetable_t kernel_pagetable;


struct context {
  uint64 ra;
  uint64 sp;
  uint64 gp;
  uint64 tp;
  uint64 t0;
  uint64 t1;
  uint64 t2;
  uint64 t3;
  uint64 t4;
  uint64 t5;
  uint64 t6;
  uint64 a0;
  uint64 a1;
  uint64 a2;
  uint64 a3;
  uint64 a4;
  uint64 a5;
  uint64 a6;
  uint64 a7;
  uint64 s0;
  uint64 s1;
  uint64 s2;
  uint64 s3;
  uint64 s4;
  uint64 s5;
  uint64 s6;
  uint64 s7;
  uint64 s8;
  uint64 s9;
  uint64 s10;
  uint64 s11;
  uint64 mepc;
};

extern char TRAPFRAME[];

struct cpu  {
    struct proc *proc;          // The process running on this cpu, or null.
    struct context* context;     // swtch() here to enter scheduler().
};

struct cpu gCPU;

enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc  {
  enum procstate state;        // Process state
  struct context* trapframe;
  
  pagetable_t pagetable;

  struct proc *parent;         // Parent process

  char* stack;
  
};

#define NPROC 128

struct proc* gProc[NPROC];

#define MIE_MTIE (1 << 7)

static inline uint64 intr_get() {
    uint64 x;
    asm volatile("csrr %0, mstatus" : "=r"(x));
    return (x & (1 << 3)) != 0;  // MSTATUS_MIE
}

static inline void intr_off() {
    uint64 x;
    asm volatile("csrr %0, mstatus" : "=r"(x));
    x &= ~(1 << 3);
    asm volatile("csrw mstatus, %0" : : "r"(x));
}

static inline void intr_on() {
    uint64 x;
    asm volatile("csrr %0, mstatus" : "=r"(x));
    x |= (1 << 3);
    asm volatile("csrw mstatus, %0" : : "r"(x));
}


void kfree(void *pa) {
  struct run *r;

  if(((uint64)pa % PGSIZE) != 0 || (char*)pa < _end || (uint64)pa >= HEAP_END) {
      puts("panic");
  }

  r = (struct run*)pa;

  r->next = kmem.freelist;
  kmem.freelist = r;
}

void freerange(void *pa_start, void *pa_end) {
  char *p;
  p = (char*)PGROUNDUP((uint64)pa_start);
  for(; p + PGSIZE <= HEAP_END; p += PGSIZE) {
    kfree(p);
  }
}

/*
void vmprint_rec(pagetable_t pagetable, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64 pa = PTE2PA(pte);
      for (int j = 0; j < level; j++)
        puts(".. ");
      printf("pte %d: pa %p\n", i, pa);


      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }
      printf(" flags: ");
      if (pte & PTE_R) printf("R");
      if (pte & PTE_W) printf("W");
      if (pte & PTE_X) printf("X");
      if (pte & PTE_U) printf("U");
      puts("");

      if ((pte & (PTE_R | PTE_W | PTE_X)) == 0) {
        vmprint_rec((pagetable_t)(pa), level + 1);
      }
    }
  }
}
*/

void dump_physical_memory(uint64 pa, int count) {
    volatile uint32_t* ptr = (volatile uint32_t*)pa;

    for (int i = 0; i < count; i++) {
        if (i % 4 == 0)
            printf("%p: ", (uint64)(ptr + i));

        printf("%p ", ptr[i]);

        if (i % 4 == 3)
            puts("");
    }

    if (count % 4 != 0)
        puts("");
}

void vmprint_rec(pagetable_t pagetable, uint64 va, int level) {
  for (int i = 0; i < 512; i++) {
    pte_t pte = pagetable[i];
    if (pte & PTE_V) {
      uint64 pa = PTE2PA(pte);
      uint64 child_va = va | ((uint64)i << (12 + 9 * (2 - level)));  // va

      for (int j = 0; j < level; j++)
        puts("\n.. ");
      printf("VA %p -> PA %p  (pte[%d]) (level %d)\n", child_va, pa, i, level);
      dump_physical_memory(pa, 8);

      if ((pte & (PTE_R | PTE_W | PTE_X)) != 0) {
        printf(" [leaf]");
      }

      printf(" flags: ");
      if (pte & PTE_R) printf(" R");
      if (pte & PTE_W) printf(" W");
      if (pte & PTE_X) printf(" X");
      if (pte & PTE_U) printf(" U");
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

int gActiveProc = 0;
int gNumProc = 0;

static inline uint64 r_sepc() {
    uint64 x;
    asm volatile("csrr %0, sepc" : "=r" (x) );
    return x;
}

static inline void w_sepc(uint64 x) {
    asm volatile("csrw sepc, %0" : : "r" (x) );
}

static inline uint64_t r_mepc(void)
{
    uint64_t x;
    asm volatile("csrr %0, mepc" : "=r" (x));
    return x;
}

#define MTIMECMP (volatile uint64*)0x02004000
#define MTIME    (volatile uint64*)0x0200BFF8

// mie: Machine Interrupt Enable Register
#define MIE_MSIE (1 << 3)   // 
#define MIE_MEIE (1 << 11)  // 

// mstatus: Machine Status Register
#define MSTATUS_MIE (1 << 3) // 

static inline uint64 r_mstatus() {
  uint64 x;
  asm volatile("csrr %0, mstatus" : "=r" (x));
  return x;
}

static inline uint64 r_sstatus() {
  uint64 x;
  asm volatile("csrr %0, sstatus" : "=r" (x) );
  return x;
}

static inline void w_sstatus(uint64 x) {
    asm volatile("csrw sstatus, %0" : : "r"(x));
}

#define SSTATUS_SIE (1L << 1)  // Supervisor Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable

#define MTIME_ADDR    ((volatile uint64_t*)0x0200bff8)
#define MTIMECMP_ADDR ((volatile uint64_t*)0x02004000)

static inline void w_mstatus(uint64 x) {
  asm volatile("csrw mstatus, %0" : : "r" (x));
}

static inline uint64_t r_mie() {
    uint64_t x;
    asm volatile("csrr %0, mie" : "=r"(x));
    return x;
}

static inline void w_mie(uint64_t x) {
    asm volatile("csrw mie, %0" : : "r"(x));
}

static inline void w_mtvec(uint64_t x) {
    asm volatile("csrw mtvec, %0" : : "r"(x));
}

#define TIMER_INTERVAL 10000000  //  100ms 

extern void timervec();  // 

void enable_timer_interrupts() {
    //w_mtvec((uint64)timervec & ~0x03);
    uint64 now = *MTIME;
    //*MTIMECMP = now + 10000;
    *MTIMECMP = now + 0xFFFFFFFF;
    w_mie(0x00);
    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}

void timer_interrupts_for_task_switch() {
    w_mie(0x0);
    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}

void timer_interrupts_for_scheduler() {
    w_mie(0x0);
    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}

void disable_timer_interrupts() {
    w_mie(0x0);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);

    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}
void user_puts(const char *s);

void task1() {
user_puts("TASK1");
    while(1) {
        user_puts("1a");
        user_puts("1b");
        user_puts("1c");
        user_puts("1d");
        user_puts("1e");
        user_puts("1f");
        user_puts("1g");
    }
}

void task2() {
user_puts("TASK2");
    while(1) {
        user_puts("2a");
        user_puts("2b");
        user_puts("2c");
        user_puts("2d");
        user_puts("2e");
        user_puts("2f");
        user_puts("2g");
    }
}

struct proc* alloc_proc(void (*task)()) {
    struct proc* result = kalloc();
    memset(result, 0, sizeof(struct proc));

    result->stack = kalloc();
    result->trapframe = (struct context*)kalloc();
    result->state = RUNNABLE;
    gProc[gNumProc++] = result;

    result->pagetable = uvmcreate();
//    uvmalloc(result->pagetable, 0x0000, 0x21000, PTE_R | PTE_W | PTE_X | PTE_U);

    // task  0x1000 
    uint64 pa = (uint64)task;
    mappages(result->pagetable, 0x1000, PGSIZE, pa, PTE_R | PTE_W | PTE_U | PTE_X);

    // trapframe 
    memset(result->trapframe, 0, sizeof(struct context));
//    result->trapframe->sp = (uint64)(result->stack + PGSIZE);

    pa = (uint64)result->trapframe;
    mappages(result->pagetable, 0x3000, PGSIZE, pa, PTE_R | PTE_W | PTE_U);
    result->trapframe->sp = 0x20000; //  uvmalloc 
    result->trapframe->mepc = 0x1000;
    result->trapframe->ra = 0x1000;
//    copyout(result->pagetable, 0x3000, (void*)result->trapframe, sizeof(struct context));
    
/*
uint64 read_value;
copyin(result->pagetable, &read_value, 0x3000, sizeof(read_value)); // copyin 
printf("\nRead: %p\n", read_value);
*/
/*
uint64 test_value = 0x1234567890abcdef;
copyout(result->pagetable, 0x3008, &test_value, sizeof(test_value));
*/
                
    return result;
}

uint64 va2pa(pagetable_t pagetable, uint64 va) {
    pte_t* pte = walk(pagetable, va, 0);
    if (pte == 0 || (*pte & PTE_V) == 0) return 0;
    return ((*pte >> 10) << 12) | (va & 0xFFF);
}

void swtch(struct context*, struct context*);

void timer_reset() {
    uint64_t now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
}

void yield();
void scheduler();

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];
    
//    struct context *tf = (struct context*)TRAPFRAME;
//    p->trapframe = tf;

    //timer_reset();

    yield();
}

void yield() {
    struct proc *p = gProc[gActiveProc];
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }
    p = gProc[gActiveProc];
    p->state = RUNNABLE;
    
    scheduler();
}

/*
void scheduler() {
printf("SCHEDULER\n");
    while (1) {
        for (int i = 0; i < gNumProc; i++) {
            struct proc *p = gProc[i];
            if (p->state == RUNNABLE) {
                gActiveProc = i;
                p->state = RUNNING;

printf("SWITCH TO %d\n", i);
                disable_timer_interrupts();
printf("mstatus = %x\n", r_mstatus());
                swtch(&gCPU.context, &p->context);
                disable_timer_interrupts();

                p->state = RUNNABLE;
            }
        }
    }
}
*/

extern void userret();

#define SATP_SV39 (8L << 60)

#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64)pagetable) >> 12))


void scheduler() {
    while (1) {
        for (int i = 0; i < gNumProc; i++) {
            struct proc *p = gProc[i];
            if (p->state == RUNNABLE) {
                gActiveProc = i;
                p->state = RUNNING;
vmprint(p->pagetable);

                uint64 satp_value = MAKE_SATP(p->pagetable);
                uint64 user_trapframe_addr = 0x3000;
//uint64 user_trapframe_addr = 0x81007000;
/*
uint64 read_value;
copyin(p->pagetable, &read_value, 0x3000, sizeof(read_value)); // copyin 
printf("\n(X)Read: %p\n", read_value);
*/

                asm volatile("mv a0, %0" : : "r"(satp_value));
                asm volatile("mv a1, %0" : : "r"(user_trapframe_addr));

                asm volatile("sfence.vma zero, zero");
                asm volatile("csrw satp, %0" : : "r"(satp_value));
                asm volatile("sfence.vma zero, zero");

                userret();
            }
        }
    }
}



void mask_and_clear_timer_interrupt() {
    uint64_t now = *MTIME;

    w_mie(r_mie() & ~MIE_MTIE);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
}

/// MMU ///

void user_puts(const char *s) {
    register const char* a0 = s;
    register long syscall_id = 1; // syscall1

    asm volatile("ecall" : : "r"(a0), "r"(syscall_id));
}

void usertrap() {
    struct proc *p = gProc[gActiveProc];
    struct context *tf = p->trapframe;

    uint64 epc = tf->mepc;
    uint64 syscall_id = tf->a7;
    
    if (syscall_id == 1) { // puts syscall
/*
        const char *user_str = (const char *)tf->a0;
        char buf[256];
        for (int i = 0; i < sizeof(buf)-1; i++) {
            uint64 va = (uint64)(user_str + i);

            if (buf[i] == '\0') break;
        }
        buf[sizeof(buf)-1] = '\0';
*/
        puts("ABC");
    }
    tf->mepc += 4; // ecall
}

extern void kernelvec();
void trap_init() {
    w_mtvec((uint64)kernelvec); 
}

#define SSTATUS_SPP (1L << 8)  // Previous mode, 1=Supervisor, 0=User
#define SSTATUS_SPIE (1L << 5) // Supervisor Previous Interrupt Enable
#define SSTATUS_UPIE (1L << 4) // User Previous Interrupt Enable
#define SSTATUS_SIE (1L << 1)  // Supervisor Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable

void user_mode()
{
    // sstatus  SPPSupervisor Previous Privilege User 
/*
    uint64 x = r_sstatus();
    x &= ~SSTATUS_SPP; // 0 = U-mode
    w_sstatus(x);
*/
    unsigned long x = r_sstatus();
    x &= ~SSTATUS_SPP; // clear SPP to 0 for user mode
    x |= SSTATUS_SPIE; // enable interrupts in user mode
    w_sstatus(x);
}

static inline void  w_satp(uint64 x)
{
  asm volatile("csrw satp, %0" : : "r" (x));
}

static inline void sfence_vma()
{
  // the zero, zero means flush all TLB entries.
  asm volatile("sfence.vma zero, zero");
}

static inline void  w_mepc(uint64 x)
{
  asm volatile("csrw mepc, %0" : : "r" (x));
}


static inline void w_mideleg(uint64 x)
{
  asm volatile("csrw mideleg, %0" : : "r" (x));
}

static inline void w_medeleg(uint64 x)
{
  asm volatile("csrw medeleg, %0" : : "r" (x));
}

static inline void
w_pmpaddr0(uint64 x)
{
  asm volatile("csrw pmpaddr0, %0" : : "r" (x));
}
// Physical Memory Protection
static inline void
w_pmpcfg0(uint64 x)
{
  asm volatile("csrw pmpcfg0, %0" : : "r" (x));
}

static inline uint64
r_mhartid()
{
  uint64 x;
  asm volatile("csrr %0, mhartid" : "=r" (x) );
  return x;
}

static inline void 
w_tp(uint64 x)
{
  asm volatile("mv tp, %0" : : "r" (x));
}
#define SIE_SEIE (1L << 9) // external
#define SIE_STIE (1L << 5) // timer
#define SIE_SSIE (1L << 1) // software
static inline uint64
r_sie()
{
  uint64 x;
  asm volatile("csrr %0, sie" : "=r" (x) );
  return x;
}

static inline void 
w_sie(uint64 x)
{
  asm volatile("csrw sie, %0" : : "r" (x));
}
#define MSTATUS_MPP_MASK (3L << 11) // previous mode.
#define MSTATUS_MPP_M (3L << 11)
#define MSTATUS_MPP_S (1L << 11)
#define MSTATUS_MPP_U (0L << 11)
#define MSTATUS_MIE (1L << 3)    // machine-mode interrupt enable.

#define NCPU 1

__attribute__ ((aligned (16))) char stack0[4096 * NCPU];

int main()
{
    kinit();
    trap_init();
    
    kvminit();
    
    //enable_vm(kernel_pagetable);
    
    asm volatile("sfence.vma zero, zero");
    uint64 kernel_root_ppn = ((uint64)kernel_pagetable) >> 12;
    uint64 satp_value = (8ULL << 60) | kernel_root_ppn;
    asm volatile("csrw satp, %0" : : "r"(satp_value));
    asm volatile("sfence.vma zero, zero");

    user_mode();
    
    alloc_proc(task1);
    alloc_proc(task2);
    
    enable_timer_interrupts();

    scheduler();

    while (1);
}

void start()
{
  // set M Previous Privilege mode to Supervisor, for mret.
  unsigned long x = r_mstatus();
  x &= ~MSTATUS_MPP_MASK;
  x |= MSTATUS_MPP_S;
  w_mstatus(x);

  // set M Exception Program Counter to main, for mret.
  // requires gcc -mcmodel=medany
  w_mepc((uint64)main);

  // disable paging for now.
  w_satp(0);

  // delegate all interrupts and exceptions to supervisor mode.
  w_medeleg(0xffff);
  w_mideleg(0xffff);
  w_sie(r_sie() | SIE_SEIE | SIE_STIE | SIE_SSIE);

  // configure Physical Memory Protection to give supervisor mode
  // access to all of physical memory.
  w_pmpaddr0(0x3fffffffffffffull);
  w_pmpcfg0(0xf);

  // ask for clock interrupts.
//  timerinit();

  // keep each CPU's hartid in its tp register, for cpuid().
  int id = r_mhartid();
  w_tp(id);

  // switch to supervisor mode and jump to main().
  asm volatile("mret");
}
