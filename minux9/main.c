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
struct run {
  struct run *next;
};

struct {
  struct run *freelist;
} kmem;

struct cpu gCPU;

enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc  {
  enum procstate state;        // Process state
  struct context context;      // swtch() here to run process

  struct proc *parent;         // Parent process

  char* stack;
};

#define NPROC 128

struct proc* gProc[NPROC];

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*1024*1024)

#define PGSIZE 4096*2*2 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

void putchar(char c) {
    *(volatile char*)(0x10000000) = c;
}

void uartputc_sync(char c) {
    *(volatile char*)(0x10000000) = c;
}

#define MIE_MTIE (1 << 7)

/*
void intr_on() {
    uint64_t x; 
    asm volatile("csrr %0, mie" : "=r"(x)); 
    x |= MIE_MTIE; 
    asm volatile("csrw mie, %0" : : "r"(x)); 
}

static inline void intr_off() { 
    uint64_t x; 
    asm volatile("csrr %0, mie" : "=r"(x)); 
    x &= ~MIE_MTIE; 
    asm volatile("csrw mie, %0" : : "r"(x)); 
}
*/

#define UART0 0x10000000L
#define UART_TXDATA (volatile uint32*)(UART0 + 0x00)
#define UART_TXFULL 0x80000000

#define UART_IRQ 10  // 任意の割り込み番号（使用するIRQによる）

#define UART_TX_INTR (1 << 5)  // 仮に tx empty 割り込み

#define BUF_SIZE 128

char uart_tx_buf[BUF_SIZE];
volatile int tx_w = 0;
volatile int tx_r = 0;

volatile int uart_tx_busy = 0;

static void uartstart() {
    while (tx_r != tx_w) {
        if (*(UART_TXDATA) & UART_TXFULL)
            break;

        *(UART_TXDATA) = uart_tx_buf[tx_r];
        tx_r = (tx_r + 1) % BUF_SIZE;
    }

    if (tx_r == tx_w) {
        uart_tx_busy = 0;
    } else {
        uart_tx_busy = 1;
    }
}

void uartputc(char c) {
    int next = (tx_w + 1) % BUF_SIZE;

    while (next == tx_r) {
        // バッファフルなので待機（または drop してもいい）
    }

    uart_tx_buf[tx_w] = c;
    tx_w = next;

    if (!uart_tx_busy) {
        uart_tx_busy = 1;
        uartstart();
    }
}

volatile mutex_t mutex = { 0 };

void puts(const char* s) {
    //mutex_enter_blocking(&mutex);
    while (*s) {
        uartputc(*s++);
    }
    //mutex_exit(&mutex);
}


#define HEAP_END (_end + PGSIZE * 256)

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

void kinit() {
  freerange(_end, HEAP_END);
}

void * kalloc(void) {
  struct run *r;

  r = kmem.freelist;
  if(r) {
    kmem.freelist = r->next;
  }

  return (void*)r;
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

void disable_timer_interrupt() {
}
        

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

#define TIMER_INTERVAL 10  //  100ms 

extern void timervec();  // 

void enable_timer_interrupts() {
    w_mie(0x00);
    w_mtvec((uint64)timervec & ~0x03);
    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
    uint64 now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
}

void disable_timer_interrupts() {
    w_mie(0x0);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);

    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}

volatile int gCountTask1 = 0;
volatile int gCountTask2 = 0;

_task void task1() {
    while(1) {
        puts("[1A]\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        "ABC".puts();
        gCountTask1++;
    }
}

_task void task2() {
    while(1) {
        puts("[2A]\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        "ABC".puts();
        gCountTask2++;
    }
}

void* memset(void *dst, int c, unsigned int n) {
  char *cdst = (char *) dst;
  int i;
  for(i = 0; i < n; i++){
    cdst[i] = c;
  }
  return dst;
}

int memcmp(const void *v1, const void *v2, unsigned int n) {
  const uchar *s1, *s2;

  s1 = v1;
  s2 = v2;
  while(n-- > 0){
    if(*s1 != *s2)
      return *s1 - *s2;
    s1++, s2++;
  }

  return 0;
}

void* memmove(void *dst, const void *src, uint n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;
  
  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0)
      *d++ = *s++;

  return dst;
}

// memcpy exists to placate GCC.  Use memmove.
void* memcpy(void *dst, const void *src, uint n) {
  return memmove(dst, src, n);
}

struct proc* alloc_proc(void (*task)()) {
    struct proc* result = kalloc();
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = kalloc();
    
    result->context.sp = (uint64)(result->stack + PGSIZE);
    result->context.mepc = (uint64)task;
    result->state = RUNNABLE;

    gProc[gNumProc++] = result;

    return result;
}

void swtch(struct context*, struct context*);


void yield();
void scheduler();

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];
    
    struct context *tf = (struct context*)TRAPFRAME;
    p->context = *tf;

    yield();
}

void yield() {
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }
    scheduler();
}

void scheduler() {
    struct proc *p = gProc[gActiveProc];

    enable_timer_interrupts();
    swtch(&gCPU.context, &p->context);
}

void mask_and_clear_timer_interrupt() {
    uint64_t now = *MTIME;

    w_mie(r_mie() & ~MIE_MTIE);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);
}

int main()
{
    kinit();
    
    new char[123];
    
    alloc_proc(task1);
    alloc_proc(task2);

    scheduler();

    while (1);
}
