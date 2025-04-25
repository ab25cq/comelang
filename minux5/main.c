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

typedef pte_t* pagetable_t;

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

struct cpu cpu;

enum procstate { UNUSED, USED, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

struct proc 
{
  enum procstate state;        // Process state
  struct context context;      // swtch() here to run process

  struct proc *parent;         // Parent process

  pagetable_t pagetable;
  
  char* stack;
};

struct trapframe {
  /*   0 */ uint64 kernel_satp;   // kernel page table
  /*   8 */ uint64 kernel_sp;     // top of process's kernel stack
  /*  16 */ uint64 kernel_trap;   // usertrap()
  /*  24 */ uint64 epc;           // saved user program counter
  /*  32 */ uint64 kernel_hartid; // saved kernel tp
  /*  40 */ uint64 ra;
  /*  48 */ uint64 sp;
  /*  56 */ uint64 gp;
  /*  64 */ uint64 tp;
  /*  72 */ uint64 t0;
  /*  80 */ uint64 t1;
  /*  88 */ uint64 t2;
  /*  96 */ uint64 s0;
  /* 104 */ uint64 s1;
  /* 112 */ uint64 a0;
  /* 120 */ uint64 a1;
  /* 128 */ uint64 a2;
  /* 136 */ uint64 a3;
  /* 144 */ uint64 a4;
  /* 152 */ uint64 a5;
  /* 160 */ uint64 a6;
  /* 168 */ uint64 a7;
  /* 176 */ uint64 s2;
  /* 184 */ uint64 s3;
  /* 192 */ uint64 s4;
  /* 200 */ uint64 s5;
  /* 208 */ uint64 s6;
  /* 216 */ uint64 s7;
  /* 224 */ uint64 s8;
  /* 232 */ uint64 s9;
  /* 240 */ uint64 s10;
  /* 248 */ uint64 s11;
  /* 256 */ uint64 t3;
  /* 264 */ uint64 t4;
  /* 272 */ uint64 t5;
  /* 280 */ uint64 t6;
};
#define SATP_SV39 (8L << 60)
#define SSTATUS_SPP (1L << 8)  // Previous mode, 1=Supervisor, 0=User
#define SSTATUS_SPIE (1L << 5) // Supervisor Previous Interrupt Enable
#define SSTATUS_UPIE (1L << 4) // User Previous Interrupt Enable
#define SSTATUS_SIE (1L << 1)  // Supervisor Interrupt Enable
#define SSTATUS_UIE (1L << 0)  // User Interrupt Enable
#define PTE_FLAGS(pte) ((pte) & 0x3FF)

#define NPROC 128

struct proc* gProc[NPROC];

#define KERNBASE 0x80000000L
#define PHYSTOP (KERNBASE + 1024)

#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

extern char end[]; // first address after kernel.
                   // defined by kernel.ld.

struct run {
  struct run *next;
};

struct {
  struct run *freelist;
} kmem;

typedef uint64 pde_t;

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

static void
printint(int fd, int xx, int base, int sgn)
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

static void
printptr(int fd, uint64 x) 
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

void
printf(const char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  vprintf(1, fmt, ap);
}

#define HEAP_END (end + PGSIZE * 1024)

void kinit()
{
  freerange(end, HEAP_END);
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

void yield()
{
    int other_proc = gActiveProc +1;
    if(other_proc >= gNumProc) {
        other_proc = 0;
    }
    int active_proc = gActiveProc;
    gActiveProc = other_proc;
    swtch(&gProc[active_proc]->context, &gProc[other_proc]->context);
}

void task1()
{
    while(1) {
        puts((char*)0x01);
        puts((char*)0x10);
        yield();
    }
}

void task2()
{
    while(1) {
        puts((char*)0x01);
        puts((char*)0x12);
        yield();
    }
}

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


void timer_init() {
    uint64 now = *MTIME;
    *MTIMECMP = now + 1000000;  // 
    // mie 
    w_mie(r_mie() | MIE_MTIE);
}

extern void timervec();  // 

void timervec_setup() {
    w_mtvec((uint64)timervec);
}

#define TIMER_INTERVAL 1000000  //  100ms 

void timer_reset() {
    uint64_t now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
}

void timer_handler() {
    timer_reset();  // mtimecmp
    yield();        //  
}

void enable_timer_interrupts() {
    timervec_setup();  // mtvec 
    timer_init();      // mtimecmp 
    w_mie(r_mie() | MIE_MTIE);       // 
    w_mstatus(r_mstatus() | MSTATUS_MIE); // 
}

#define PTE_V  0x001  // valid
#define PTE_R  0x002  // readable
#define PTE_W  0x004  // writable
#define PTE_X  0x008  // executable
#define PTE_U  0x010  // user-accessible

#define MAXVA (1L << 39)

#define PXSHIFT(level) (12 + 9 * (level))
#define PX(level, va) (((va) >> PXSHIFT(level)) & 0x1FF)

// PTE  
#define PTE2PA(pte) (((pte) >> 10) << 12)

//   PTE
#define PA2PTE(pa) (((uint64)(pa) >> 12) << 10)
#define MAKE_SATP(pagetable) (SATP_SV39 | (((uint64)pagetable) >> 12))

pagetable_t uvmcreate() {
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    return pagetable;
}

pte_t *
walk(pagetable_t pagetable, uint64 va, int alloc)
{
  if (va >= MAXVA)  // 
    return 0;

  for (int level = 2; level > 0; level--) {
    // 9  3
    int idx = PX(level, va);
    pte_t *pte = &pagetable[idx];

    if (*pte & PTE_V) {
      // PTE
      pagetable = (pagetable_t)PTE2PA(*pte);
    } else {
      // PTE
      if (!alloc || (pagetable = (pagetable_t)kalloc()) == 0)
        return 0;
      memset(pagetable, 0, PGSIZE);
      *pte = PA2PTE(pagetable) | PTE_V;
    }
  }

  return &pagetable[PX(0, va)];
}

int
mappages(pagetable_t pagetable, uint64 va, uint64 pa, uint64 size, int perm)
{
  uint64 a, last;
  pte_t *pte;

  if (size == 0)
    return -1;

  a = PGROUNDDOWN(va);
  last = PGROUNDDOWN(va + size - 1);

  for (;;) {
    pte = walk(pagetable, a, 1);  // alloc=1  
    if (pte == 0)
      return -1;
    if (*pte & PTE_V)
      return -1;  // 

    *pte = PA2PTE(pa) | perm | PTE_V;

    if (a == last)
      break;
    a += PGSIZE;
    pa += PGSIZE;
  }

  return 0;
}

uint64
uvmdealloc(pagetable_t pagetable, uint64 oldsz, uint64 newsz)
{
  if (newsz >= oldsz)
    return oldsz;

  oldsz = PGROUNDUP(oldsz);
  for (uint64 a = PGROUNDUP(newsz); a < oldsz; a += PGSIZE) {
    pte_t *pte = walk(pagetable, a, 0);
    if (pte && (*pte & PTE_V)) {
      uint64 pa = PTE2PA(*pte);
      kfree((void*)pa);
      *pte = 0;
    }
  }
  return newsz;
}

uint64
uvmalloc(pagetable_t pagetable, uint64 oldsz, uint64 newsz, int perm)
{
  if (newsz < oldsz)
    return oldsz;

  oldsz = PGROUNDUP(oldsz);
  for (uint64 a = oldsz; a < newsz; a += PGSIZE) {
    void *mem = kalloc();  // 1
    if (mem == 0) {
      uvmdealloc(pagetable, a, oldsz);  // 
      return 0;
    }
    memset(mem, 0, PGSIZE);
    if (mappages(pagetable, a, (uint64)mem, PGSIZE, perm) != 0) {
      kfree(mem);
      uvmdealloc(pagetable, a, oldsz);
      return 0;
    }
  }
  return newsz;
}


int
uvmcopy(pagetable_t old, pagetable_t new, uint64 sz)
{
  for (uint64 i = 0; i < sz; i += PGSIZE) {
    pte_t *pte = walk(old, i, 0);
    if (!pte || !(*pte & PTE_V))
      continue;

    uint64 pa = PTE2PA(*pte);
    int flags = PTE_FLAGS(*pte);

    void *mem = kalloc();
    if (mem == 0) {
      uvmdealloc(new, i, 0);
      return -1;
    }

    memmove(mem, (void*)pa, PGSIZE);

    if (mappages(new, i, (uint64)mem, PGSIZE, flags) != 0) {
      kfree(mem);
      uvmdealloc(new, i, 0);
      return -1;
    }
  }
  return 0;
}

int
copyin(pagetable_t pagetable, char *dst, uint64 srcva, uint64 len)
{
  while (len > 0) {
    uint64 va0 = PGROUNDDOWN(srcva);
    pte_t *pte = walk(pagetable, va0, 0);
    if (pte == 0 || (*pte & PTE_V) == 0 || (*pte & PTE_U) == 0)
      return -1;

    uint64 pa = PTE2PA(*pte);
    uint64 n = PGSIZE - (srcva - va0);
    if (n > len)
      n = len;

    memmove(dst, (char *)(pa + (srcva - va0)), n);

    len -= n;
    dst += n;
    srcva += n;
  }
  return 0;
}

int
copyout(pagetable_t pagetable, uint64 dstva, char *src, uint64 len)
{
  while (len > 0) {
    uint64 va0 = PGROUNDDOWN(dstva);
    pte_t *pte = walk(pagetable, va0, 0);
    if (pte == 0 || (*pte & PTE_V) == 0 || (*pte & PTE_U) == 0)
      return -1;

    uint64 pa = PTE2PA(*pte);
    uint64 n = PGSIZE - (dstva - va0);
    if (n > len)
      n = len;

    memmove((void *)(pa + (dstva - va0)), src, n);

    len -= n;
    src += n;
    dstva += n;
  }
  return 0;
}

/*
void syscall() {
    if (a7 == SYS_puts) {
        char buf[128];
        copyin(p->pagetable, buf, p->trapframe->a0, 127);
        buf[127] = 0;
        puts(buf); // UART
    }
}
*/

/*
void exec_user_program(const char* elf_bin, pagetable_t pt, struct trapframe* tf) 
{
    Elf64_Ehdr *eh = (Elf64_Ehdr*)elf_bin;

    for (int i = 0; i < eh->e_phnum; i++) {
        Elf64_Phdr *ph = (Elf64_Phdr*)(elf_bin + eh->e_phoff + i * sizeof(Elf64_Phdr));
        if (ph->p_type != PT_LOAD)
            continue;

        uvmalloc(pt, ph->p_vaddr, ph->p_vaddr + ph->p_memsz,
                 PTE_R | PTE_W | PTE_X | PTE_U);

        copyout(pt, ph->p_vaddr, elf_bin + ph->p_offset, ph->p_filesz);
    }

    tf->epc = eh->e_entry;
    tf->sp = USER_STACK_TOP;
}
*/

const uint8_t user_code[] = {
  0x13, 0x05, 0x00, 0x54,   // li a0, 'T'
  0x73, 0x00, 0x00, 0x00,   // ecall
  0x13, 0x05, 0x00, 0x41,   // li a0, 'A'
  0x73, 0x00, 0x00, 0x00,
  0x13, 0x05, 0x00, 0x53,
  0x73, 0x00, 0x00, 0x00,
  0x13, 0x05, 0x00, 0x4B,
  0x73, 0x00, 0x00, 0x00,
  0x13, 0x05, 0x00, 0x31,
  0x73, 0x00, 0x00, 0x00,
  0x13, 0x05, 0x00, 0x0A,   // \n
  0x73, 0x00, 0x00, 0x00,
  0x6F, 0xF0, 0xDF, 0xFF    // j start (PC  -32)
};

struct proc* alloc_proc(void (*task)())
{
    struct proc* result = kalloc();
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = kalloc();
    
    result->context.sp = result->stack + PGSIZE;
    result->context.ra = task;
    
    result->pagetable = uvmcreate();
    uvmalloc(result->pagetable, 0x0000, 0x20000, PTE_R | PTE_W | PTE_X | PTE_U);

    //  0x1000  user_func 
    copyout(result->pagetable, 0x1000, user_code, sizeof(user_code));

    // trapframe 
    struct trapframe *tf = kalloc();
    memset(tf, 0, sizeof(*tf));
    tf->epc = 0x1000;
    tf->sp = 0x20000;

    uint64 satp = MAKE_SATP(result->pagetable);
    uint64 sstatus = r_sstatus();
    sstatus &= ~SSTATUS_SPP;
    sstatus |= SSTATUS_SPIE;

    userret(satp, sstatus, tf->epc, tf->sp);
    
    gProc[gNumProc] = result;
    
    gNumProc++;
    
    return result;
}

int main()
{
    kinit();
    
    alloc_proc(task1);
    alloc_proc(task2);

    enable_timer_interrupts();
    
    task1();
    
    while (1);
}
