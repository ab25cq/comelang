#include <stdarg.h>

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

struct context 
{
  uint64 ra;
  uint64 sp;

  // callee-saved
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
};


struct cpu 
{
    struct proc *proc;          // The process running on this cpu, or null.
    struct context context;     // swtch() here to enter scheduler().
};
struct run {
  struct run *next;
};

struct {
  struct run *freelist;
} kmem;

struct cpu cpu;

enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc 
{
  enum procstate state;        // Process state
  struct context context;      // swtch() here to run process

  struct proc *parent;         // Parent process

  char* stack;
  uint64_t mepc;
};

#define NPROC 128

struct proc* gProc[NPROC];

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 128*1024*1024)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

extern char end[]; // first address after kernel.
                   // defined by kernel.ld.


volatile char *uart = (char *)0x10000000;

void putc(int fd, char c) {
    if(fd == 1) {
        *(volatile char*)(0x10000000) = c;
    }
}

void uartputc_sync(char c) {
    *(volatile char*)(0x10000000) = c;
}

void puts(const char *s) {
    while (*s) putc(1, *s++);
}

static void printint(int fd, int xx, int base, int sgn)
{
  char buf[16];
  int i, neg;
  uint x;

  neg = 0;
  if(sgn && xx < 0){
    neg = 1;
    x = -xx;
  } else {
    x = xx;
  }

  i = 0;
  do{
    buf[i++] = digits[x % base];
  }while((x /= base) != 0);
  if(neg)
    buf[i++] = '-';

  while(--i >= 0)
    putc(fd, buf[i]);
}

static void printptr(int fd, uint64 x) 
{
  int i;
  putc(fd, '0');
  putc(fd, 'x');
  for (i = 0; i < (sizeof(uint64) * 2); i++, x <<= 4)
    putc(fd, digits[x >> (sizeof(uint64) * 8 - 4)]);
}

// Print to the given fd. Only understands %d, %x, %p, %s.
void
vprintf(int fd, const char *fmt, va_list ap)
{
  char *s;
  int c0, c1, c2, i, state;

  state = 0;
  for(i = 0; fmt[i]; i++){
    c0 = fmt[i] & 0xff;
    if(state == 0){
      if(c0 == '%'){
        state = '%';
      } else {
        putc(fd, c0);
      }
    } else if(state == '%'){
      c1 = c2 = 0;
      if(c0) c1 = fmt[i+1] & 0xff;
      if(c1) c2 = fmt[i+2] & 0xff;
      if(c0 == 'd'){
        printint(fd, va_arg(ap, int), 10, 1);
      } else if(c0 == 'l' && c1 == 'd'){
        printint(fd, va_arg(ap, uint64), 10, 1);
        i += 1;
      } else if(c0 == 'l' && c1 == 'l' && c2 == 'd'){
        printint(fd, va_arg(ap, uint64), 10, 1);
        i += 2;
      } else if(c0 == 'u'){
        printint(fd, va_arg(ap, int), 10, 0);
      } else if(c0 == 'l' && c1 == 'u'){
        printint(fd, va_arg(ap, uint64), 10, 0);
        i += 1;
      } else if(c0 == 'l' && c1 == 'l' && c2 == 'u'){
        printint(fd, va_arg(ap, uint64), 10, 0);
        i += 2;
      } else if(c0 == 'x'){
        printint(fd, va_arg(ap, int), 16, 0);
      } else if(c0 == 'l' && c1 == 'x'){
        printint(fd, va_arg(ap, uint64), 16, 0);
        i += 1;
      } else if(c0 == 'l' && c1 == 'l' && c2 == 'x'){
        printint(fd, va_arg(ap, uint64), 16, 0);
        i += 2;
      } else if(c0 == 'p'){
        printptr(fd, va_arg(ap, uint64));
      } else if(c0 == 's'){
        if((s = va_arg(ap, char*)) == 0)
          s = "(null)";
        for(; *s; s++)
          putc(fd, *s);
      } else if(c0 == '%'){
        putc(fd, '%');
      } else {
        // Unknown % sequence.  Print it to draw attention.
        putc(fd, '%');
        putc(fd, c0);
      }

      state = 0;
    }
  }
}

void
fprintf(int fd, const char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  vprintf(fd, fmt, ap);
}

void printf(const char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  vprintf(1, fmt, ap);
}

#define HEAP_END (end + PGSIZE * 256)

void
kfree(void *pa)
{
  struct run *r;

  if(((uint64)pa % PGSIZE) != 0 || (char*)pa < end || (uint64)pa >= HEAP_END) {
      puts("panic");
  }

  r = (struct run*)pa;

  r->next = kmem.freelist;
  kmem.freelist = r;
}

void
freerange(void *pa_start, void *pa_end)
{
  char *p;
  p = (char*)PGROUNDUP((uint64)pa_start);
  for(; p + PGSIZE <= HEAP_END; p += PGSIZE) {
    kfree(p);
  }
}

void kinit()
{
  freerange(end, HEAP_END);
}

void *
kalloc(void)
{
  struct run *r;

  r = kmem.freelist;
  if(r) {
    kmem.freelist = r->next;
  }

  return (void*)r;
}

void*
memset(void *dst, int c, uint n)
{
  char *cdst = (char *) dst;
  int i;
  for(i = 0; i < n; i++){
    cdst[i] = c;
  }
  return dst;
}

int
memcmp(const void *v1, const void *v2, uint n)
{
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

void*
memmove(void *dst, const void *src, uint n)
{
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
void*
memcpy(void *dst, const void *src, uint n)
{
  return memmove(dst, src, n);
}

int
strncmp(const char *p, const char *q, uint n)
{
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (uchar)*p - (uchar)*q;
}

char*
strncpy(char *s, const char *t, int n)
{
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

// Like strncpy but guaranteed to NUL-terminate.
char*
safestrcpy(char *s, const char *t, int n)
{
  char *os;

  os = s;
  if(n <= 0)
    return os;
  while(--n > 0 && (*s++ = *t++) != 0)
    ;
  *s = 0;
  return os;
}

int
strlen(const char *s)
{
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

int gActiveProc = 0;
int gNumProc = 0;

#define MTIMECMP (volatile uint64*)0x02004000
#define MTIME    (volatile uint64*)0x0200BFF8

// mie: Machine Interrupt Enable Register
#define MIE_MSIE (1 << 3)   // 
#define MIE_MTIE (1 << 7)   // 
#define MIE_MEIE (1 << 11)  // 

// mstatus: Machine Status Register
#define MSTATUS_MIE (1 << 3) // 

static inline uint64 r_mstatus() {
  uint64 x;
  asm volatile("csrr %0, mstatus" : "=r" (x));
  return x;
}

static inline uint64
r_sstatus()
{
  uint64 x;
  asm volatile("csrr %0, sstatus" : "=r" (x) );
  return x;
}

static inline void w_sstatus(uint64 x)
{
    asm volatile("csrw sstatus, %0" : : "r"(x));
}
#define SSTATUS_SIE (1L << 1)  // Supervisor Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable

static inline void intr_on()
{
    uint64_t x;
    asm volatile ("csrr %0, mstatus" : "=r" (x));
    x |= (1L << 3);  // MIEをセット
    asm volatile ("csrw mstatus, %0" : : "r" (x));
}

static inline void intr_off()
{
    uint64_t x;
    asm volatile ("csrr %0, mstatus" : "=r" (x));
    x &= ~(1L << 3);  // MIEをOFF
    asm volatile ("csrw mstatus, %0" : : "r" (x));
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

#define TIMER_INTERVAL 100000000  //  100ms 

extern void timervec();  // 

void enable_timer_interrupts() {
    w_mtvec((uint64)timervec & ~0x03);
    uint64 now = *MTIME;
    *MTIMECMP = now + 10000;  // 
    // mie 
    w_mie(r_mie() | MIE_MTIE);
    w_mstatus(r_mstatus() | MSTATUS_MIE); // 
}

void task1()
{
    while(1) {
        puts("TASK1a\n");
        puts("TASK1b\n");
        puts("TASK1c\n");
        puts("TASK1d\n");
        puts("TASK1e\n");
        puts("TASK1f\n");
        puts("TASK1g\n");
    }
}

void task2()
{
    while(1) {
        puts("TASK2a\n");
        puts("TASK2b\n");
        puts("TASK2c\n");
        puts("TASK2d\n");
        puts("TASK2e\n");
        puts("TASK2f\n");
        puts("TASK2g\n");
    }
}

struct proc* alloc_proc(void (*task)())
{
    struct proc* result = kalloc();
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = kalloc();
    
    result->context.sp = (uint64)(result->stack + PGSIZE);
    result->context.ra = (uint64)task;
    result->state = RUNNABLE;

    gProc[gNumProc++] = result;

    return result;
}

void swtch(struct context*, struct context*);

#define TIMER_INTERVAL 50000  // 適当な間隔（例えば100ms）

#define MTIME    ((volatile uint64_t *)0x0200BFF8)
#define MTIMECMP ((volatile uint64_t *)0x02004000)

void timer_reset() {
    uint64_t now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
    
printf("timer_reset: now=%lx mtimecmp=%lx\n", now, now + TIMER_INTERVAL);
}

void yield();
void scheduler();

void timer_handler() {
puts("TIMER\n");
    timer_reset();
    yield();  // タイマー割り込み中に強制的にyield！
}

void yield() {
    struct proc *p = gProc[gActiveProc];
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    }
    p = gProc[gActiveProc];
    p->state = RUNNABLE;
    scheduler();  // cpu.contextから戻ったらスケジューラを呼ぶ
}

void scheduler() {
puts("SCHEDULER\n");
    while (1) {
        intr_off();
        for (int i = 0; i < gNumProc; i++) {
puts("SCHEDULER LOOP\n");
            struct proc *p = gProc[i];
            if (p->state == RUNNABLE) {
printf("RUNNABLE %d\n", i);
                gActiveProc = i;
                p->state = RUNNING;
printf("YIELD ACTIVE PROC LOAD %d SAVE CPU\n", gActiveProc);
                swtch(&cpu.context, &p->context);
                p->state = RUNNABLE;
            }
else {
printf("NO RUNNABLE %d\n", i);
}
puts("SCHEDULER LOOP END\n");
        }
        
        intr_on();
    }
}


int main()
{
    kinit();  // カーネルヒープ初期化

    alloc_proc(task1);  // タスク1を作る
    alloc_proc(task2);  // タスク2を作る

    enable_timer_interrupts();  // タイマ割り込みスタート

    scheduler();  // ★ 最後はscheduler()に制御を渡す！

    while (1);  // ここには戻らないはずだが、念のため無限ループ
}
