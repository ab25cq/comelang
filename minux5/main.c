#include <stdarg.h>
//#include <stdio.h>
//#include <comelang.h>

#include <comelang.h>

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

typedef uint64_t pte_t;

static char digits[] = "0123456789ABCDEF";

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*1024*1024)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

void putchar(char c) {
    *(volatile char*)(0x10000000) = c;
}

#define HEAP_END (_end + PGSIZE * 4096)

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

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512
pagetable_t kernel_pagetable;

void map_page(pagetable_t pagetable, uint64 va, uint64 pa, int perm);

void kvminit() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64 addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        map_page(kernel_pagetable, addr, addr, PTE_R | PTE_W | PTE_X | PTE_V);
    }

    // UART
    map_page(kernel_pagetable, 0x10000000, 0x10000000, PTE_R | PTE_W | PTE_V);
}

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

#define SATP_SV39 (8L << 60)

void enable_vm(pagetable_t pagetable) {
    uint64 satp = SATP_SV39 | (((uint64)pagetable >> 12) & 0xFFFFFFFFFFF);
    asm volatile("csrw satp, %0" : : "r"(satp));
    asm volatile("sfence.vma zero, zero"); // TLB
}

pagetable_t uvmcreate() {
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    return pagetable;
}

pte_t* walk(pagetable_t pagetable, uint64 va, int alloc) {
    if (va >= (1L << 39))  // Sv39 
        return (pte_t*)0;

    for (int level = 2; level > 0; level--) {
        int idx = (va >> (12 + 9 * level)) & 0x1FF;
        pte_t* pte = &pagetable[idx];

        if (*pte & PTE_V) {
            pagetable = (pagetable_t)(((*pte >> 10) << 12)); // 
        } else {
            if (!alloc)
                return (pte_t*)0;

            pagetable_t newpage = (pagetable_t)kalloc();
            if (newpage == 0)
                return (pte_t*)0;

            memset(newpage, 0, PGSIZE);
            *pte = ((uint64)newpage >> 12) << 10 | PTE_V;
            pagetable = newpage;
        }
    }

    int idx = (va >> 12) & 0x1FF;
    return &pagetable[idx];
}

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


int mappages(pagetable_t pagetable, uint64 va, uint64 size, uint64 pa, int perm) {
    uint64 a;
    pte_t* pte;

    va = PGROUNDDOWN(va);
    for (a = va; a < va + size; a += PGSIZE, pa += PGSIZE) {
        pte = walk(pagetable, a, 1);
        if (pte == 0)
            return -1;
        if (*pte & PTE_V)
            return -1; // 

        *pte = (pa >> 12 << 10) | perm | PTE_V;
    }
    return 0;
}

int mappages(pagetable_t pagetable, uint64 va, uint64 size, uint64 pa, int perm) {
    uint64 a;
    pte_t* pte;

    va = PGROUNDDOWN(va);
    for (a = va; a < va + size; a += PGSIZE, pa += PGSIZE) {
        pte = walk(pagetable, a, 1);
        if (pte == 0)
            return -1;
        if (*pte & PTE_V) {
            // OK
            return -1;
        }

        //  leaf PTE 
        *pte = (pa >> 12 << 10) | perm | PTE_V;
    }
    return 0;
}


uint64 uvmalloc(pagetable_t pagetable, uint64 oldsz, uint64 newsz, int perm) {
    if (newsz < oldsz)
        return oldsz;

    oldsz = PGROUNDUP(oldsz);
    for (uint64 a = oldsz; a < newsz; a += PGSIZE) {
        void* mem = kalloc();
        if (!mem) {
            puts("uvmalloc: kalloc failed");
        }

        memset(mem, 0, PGSIZE);  // 

        if (mappages(pagetable, a, PGSIZE, (uint64)mem, perm) != 0) {
            puts("uvmalloc: mappages failed");
        }
    }

    return newsz;
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
    struct context context;     // swtch() here to enter scheduler().
};

struct cpu gCPU;

enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc  {
  enum procstate state;        // Process state
  struct context context;      // swtch() here to run process
  
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

struct proc* alloc_proc(void (*task)(), long task_size) {
    struct proc* result = kalloc();
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = kalloc();
    
    result->context.sp = (uint64)(result->stack + PGSIZE);
    result->context.mepc = (uint64)0x1000;
    result->state = RUNNABLE;

    gProc[gNumProc++] = result;
    
    result->pagetable = uvmcreate();
    uvmalloc(result->pagetable, 0x0000, 0x20000, PTE_R | PTE_W | PTE_X | PTE_U);  // 128KB

    // user_code  0x1000 
    copyout(result->pagetable, 0x1000, (void*)task, task_size);

    return result;
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
    
    struct context *tf = (struct context*)TRAPFRAME;
    p->context = *tf;

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

void mask_and_clear_timer_interrupt() {
    uint64_t now = *MTIME;

    w_mie(r_mie() & ~MIE_MTIE);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
}

/// MMU ///

void puts(const char *s) {
    while (*s) putchar(*s++);
}

void user_puts(const char *s) {
    register const char* a0 = s;
    register long syscall_id = 1; // syscall1

    asm volatile("ecall" : : "r"(a0), "r"(syscall_id));
}

void usertrap() {
    struct proc *p = gProc[gActiveProc];
    struct context *tf = &p->context;

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

#define SSTATUS_SPP (1L << 8)  // Supervisor Previous Privilege

void user_mode()
{
    // sstatus  SPPSupervisor Previous Privilege User 
    uint64 x = r_sstatus();
    x &= ~SSTATUS_SPP; // 0 = U-mode
    w_sstatus(x);
}

int main()
{
    kinit();
    trap_init();
    
    kvminit();
    enable_vm(kernel_pagetable);

    user_mode();
    
    alloc_proc(task1, sizeof(task1));
    alloc_proc(task2, sizeof(task2));
    
    enable_timer_interrupts();

    scheduler();

    while (1);
}
