//#include <comelang.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include "elf.h"
#include "userprog.h"
#include "userprog2.h"

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)
#define USERBASE 0x82000000L

extern char _end[];   // heap start
extern char _end2[];            /* provided by linker */
extern char _end3[];  // kernel page start

static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8
#define VIRTIO_NUM VIRTIO_MAX_SLOTS

#define ALIGN8(size) (((size) + 7) & ~7)

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

static void *kalloc_page(uint64_t bump)
{
    void *p = (void*)bump;
    bump = (bump + 4095) & ~4095UL;
    bump += 4096;
    return p;
}

void *kalloc_pages(size_t npages)
{
    uint64_t bump = (uint64_t)_end2;
    void *base = NULL;
    for(size_t i=0;i<npages;i++){
        void *pg = kalloc_page(bump);
        if(i==0) base = pg;
    }
    return base;
}

void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = NULL;

void *malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t); 

    mem_block_t *current = free_list;
    mem_block_t *prev = NULL;

    while (current != NULL) {
        if (current->size >= size) {
            if (prev == NULL) {
                free_list = current->next;
            } else {
                prev->next = current->next;
            }
            return (void *)(current + 1); 
        }
        prev = current;
        current = current->next;
    }

    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
        return NULL; 
    }

    new_mem->size = size;
    new_mem->next = NULL;
    return (void *)(new_mem + 1); 
}

void *calloc(size_t nmemb, size_t size) {
    size_t total_size = nmemb * size;
    if (total_size == 0) {
        return NULL;
    }

    void *ptr = malloc(total_size);
    if (ptr != NULL) {
        memset(ptr, 0, total_size);
    }
    return ptr;
}

void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}

char* strdup(const char* s) {
    char* s2 = s;
    size_t len = strlen(s2) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s2, len);
    return p;
}

int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
                            
char* strstr(const char* haystack, const char* needle) {
    if (!*needle)
        return (char*)haystack;

    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n)  // needle 
            return (char*)haystack;
    }

    return NULL;  
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
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}

void* memmove(void *dst, const void *src, unsigned int n) {
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
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}


int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

char* strncat(char* dest, const char* src, size_t n) {
    char* d = dest;

    // dest 
    while (*d) d++;

    //  n  src null 
    while (n-- && *src) {
        *d++ = *src++;
    }

    *d = '\0';

    return dest;
}

#include <stddef.h>

// 自前実装の strtok
// s が NULL でなければ、s の先頭から検索を始める。
// s が NULL の場合は、前回の呼び出し時の位置から続きのトークンを返す。
// delim に含まれるいずれかの文字で文字列を区切り、次のトークンを返す。
// トークンがなくなったら NULL を返す。
char *strtok(char *s, const char *delim) {
    static char *next;    // 次のトークン探索開始位置を保持
    char *start;
    char *p;

    // 呼び出し時に s が非 NULL なら、new string の検索を開始
    if (s != NULL) {
        next = s;
    }

    // 直前で末尾に達していれば NULL を返す
    if (next == NULL) {
        return NULL;
    }

    // 1) 先頭の区切り文字をスキップ
    start = next;
    while (*start != '\0') {
        // delim に含まれるかどうか調べる
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*start == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim) {
            break;
        }
        start++;
    }

    // 終端まで区切り文字しかなかった → もうトークンはない
    if (*start == '\0') {
        next = NULL;
        return NULL;
    }

    // 2) トークンの終端を見つける
    p = start;
    while (*p != '\0') {
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*p == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (is_delim) {
            break;
        }
        p++;
    }

    // 3) トークン終端を '\0' に置き換え、next を次回呼び出し用にセット
    if (*p == '\0') {
        // 文字列の末尾に達したので、次回以降 s=NULL にして呼べば再び NULL が返る
        next = NULL;
    } else {
        // 区切り文字を '\0' に置し、次の検索開始位置を p+1 にする
        *p = '\0';
        next = p + 1;
    }

    // トークンの先頭を返す
    return start;
}

void exit(int n) {
    while(1);
}

char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
    char* p = buf;
    char tmp[32];
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (is_signed && (long)val_ < 0) {
        negative = 1;
        val_ = (unsigned long)(-(long)val_);
    }

    do {
        int digit = val_ % base;
        tmp[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        val_ /= base;
    } while (val_);

    if (negative)
        *p++ = '-';

    while (i--)
        *p++ = tmp[i];
    *p = '\0';
    return buf;
}

int vasprintf(char** out, const char* fmt, va_list ap) {
    char out2[512];
    char* p = out2;
    const char* s;
    char buf[32];
    unsigned long remaining = sizeof(out2);

    for (; *fmt && remaining > 1; fmt++) {
        if (*fmt != '%') {
            *p++ = *fmt;
            remaining--;
            continue;
        }

        fmt++;  // skip '%'
        switch (*fmt) {
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 1);
            s = buf;
            break;
        case 'u':
            itoa(buf, va_arg(ap, unsigned int), 10, 0);
            s = buf;
            break;
        case 'x':
            itoa(buf, va_arg(ap, unsigned int), 16, 0);
            s = buf;
            break;
        case 's':
            s = va_arg(ap, const char*);
            if (!s) s = "(null)";
            break;
        case 'c':
            buf[0] = (char)va_arg(ap, int);  
            buf[1] = '\0';
            s = buf;
            break;
        case 'p':
            strncpy(buf, "0x", 32);
            itoa(buf + 2, (unsigned long)(uintptr_t)va_arg(ap, void*), 16, 0);
            s = buf;
            break;
        case '%':
            buf[0] = '%';
            buf[1] = '\0';
            s = buf;
            break;
        default:
            buf[0] = '%';
            buf[1] = *fmt;
            buf[2] = '\0';
            s = buf;
            break;
        }

        while (*s && remaining > 1) {
            *p++ = *s++;
            remaining--;
        }
    }

    *p = '\0';
    *out = strdup(out2);
    return p - out2;
}

int snprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}

int vsnprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}

extern void putchar(char c);

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}

void perror(char* str) {
    puts(str);
}

void panic()
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
uint64_t user_satp;

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

#define SSTATUS_SIE (1UL << 1)

static inline void intr_off_direct(void) {
    // sstatusレジスタのSIEビットをクリアする
    asm volatile("csrc sstatus, %0" : : "r"(SSTATUS_SIE));
}

#define SSTATUS_SIE (1UL << 1)

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
                return 0;
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

uint64_t kernel_satp;    // trap.S から参照する
extern char TRAPFRAME[];
extern char TRAMPOLINE[];

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

#define CLINT_MTIMECMP  0x02004000UL
#define CLINT_MTIME     0x0200BFF8UL

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);
    
    kernel_satp = MAKE_SATP(kernel_pagetable);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        uint64_t pa = addr;
        mappages(kernel_pagetable, addr, PGSIZE, pa, PTE_R | PTE_W | PTE_X | PTE_V);
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
    
    enable_mmu(kernel_pagetable);
}

void* walkaddr(pagetable_t pagetable, uint64_t va) {
    pte_t *pte = walk(pagetable, va, 0);
    if (pte == 0)
        return 0;
    if ((*pte & PTE_V) == 0)
        return 0;
    if ((*pte & PTE_U) == 0)
        return 0;
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


void *kalloc_pages(size_t npages);
void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

uint8_t elf_program[5096+1];
uint8_t elf_program2[5048+1];

// ↑main.c の先頭あたりに追加
#include <stdint.h>

void setting_user_pagetable(pagetable_t pagetable)
{
    mappages(pagetable, (uint64_t)TRAMPOLINE, PGSIZE, (uint64_t)TRAMPOLINE, PTE_R | PTE_W | PTE_V | PTE_X);
    
    // CLINT (タイマー割り込み)
    mappages(pagetable, CLINT_MTIME, PGSIZE, CLINT_MTIME, PTE_U|PTE_R|PTE_W|PTE_V);
    mappages(pagetable, CLINT_MTIMECMP,  PGSIZE, CLINT_MTIMECMP, PTE_U|PTE_R|PTE_W|PTE_V);
    
/*
    uint64_t addr = (uint64_t)_userret;
    mappages(pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V | PTE_U);
*/
    

/*
    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        mappages(pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V | PTE_U);
    }
*/
    
    // UART
    mappages(pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    mappages(pagetable, 0x10001000L, PGSIZE, 0x10001000L, PTE_R | PTE_W | PTE_V | PTE_U);
    
/*
    mappages(pagetable, (uint64_t)TRAPFRAME, PGSIZE, (uint64_t)TRAPFRAME, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    mappages(pagetable, (uint64_t)TRAMPOLINE, PGSIZE, (uint64_t)TRAMPOLINE, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    
    // PLIC
    mappages(pagetable, 0x02000000, 0x00020000, 0x02000000, PTE_V|PTE_R|PTE_W | PTE_U);

    mappages(pagetable, 0x0C000000, 0x00400000, 0x0C000000, PTE_V|PTE_R|PTE_W | PTE_U);

    /// VIRTIO ///
    for (int i = 0; i < VIRTIO_NUM; i++) {
        uint64_t va = VIRTIO_MMIO_BASE0 + i * VIRTIO_MMIO_STRIDE;
        uint64_t pa = va;  // QEMU virt では VA=PA の identity map
        
        mappages(pagetable, va, VIRTIO_MMIO_STRIDE, pa, PTE_V | PTE_R | PTE_W | PTE_U);
    }
*/
                
    asm volatile("sfence.vma zero, zero"); 
}

void alloc_prog() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)elf_program;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
        
    struct proghdr *ph = (struct proghdr *)(elf_program + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic();
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        
        if (copyout(result->pagetable, ph->vaddr, elf_program + ph->off, ph->filesz) < 0) {
            panic();
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    
    /// stack ///
    char *pa = kalloc();
    if (!pa) panic();
    memset(pa, 0, PGSIZE);
    
    mappages(result->pagetable, va, PGSIZE, (uint64_t)pa, PTE_U | PTE_R | PTE_W | PTE_V);
    asm volatile("sfence.vma zero, zero"); 
    
    result->stack = (char*)va + PGSIZE;
    result->context.sp = va + PGSIZE;
    
    /// USER PROGRAM
    result->context.mepc = eh->entry;
    
    uint64_t satp_val = MAKE_SATP(result->pagetable);
    user_satp = satp_val;                       // ← ここを追加
/*
    asm volatile("csrw satp, %0" :: "r"(satp_val));
    asm volatile("sfence.vma zero, zero");
*/
    
    gProc[gNumProc++] = result;
}

void alloc_prog2() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)elf_program2;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
        
    struct proghdr *ph = (struct proghdr *)(elf_program2 + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic();
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        if (copyout(result->pagetable, ph->vaddr, elf_program2 + ph->off, ph->filesz) < 0) {
            panic();
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    asm volatile("sfence.vma zero, zero"); 
    
    /// stack ///
    char *pa = kalloc();
    if (!pa) panic();
    memset(pa, 0, PGSIZE);
    
    mappages(result->pagetable, va, PGSIZE, (uint64_t)pa, PTE_U | PTE_R | PTE_W | PTE_V);
    asm volatile("sfence.vma zero, zero"); 
    
    result->stack = (char*)va + PGSIZE;
    result->context.sp = va + PGSIZE;
    
    /// USER PROGRAM
    result->context.mepc = eh->entry;
    
    uint64_t satp_val = MAKE_SATP(result->pagetable);
    user_satp = satp_val;                       // ← ここを追加
/*
    asm volatile("csrw satp, %0" :: "r"(satp_val));
    asm volatile("sfence.vma zero, zero");
*/
    
    gProc[gNumProc++] = result;
}

void reset_watchdog();
extern volatile char last_key;
void putc(char c);

struct proc *p ,*p2;

void enable_mmu(pagetable_t kernel_pagetable);


void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);

void mmu_init();

#define UART_IRQ 10

void plic_enable(int irq);
void mmu_init();
void kinit();

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

#define TIMER_INTERVAL 10000000UL
#define MIE_MTIE (1 << 7)

extern void trapvec();  



/*
static inline uint64_t read_mtime(void) {
    return *(volatile uint64_t *)CLINT_MTIME;
}
static inline void write_mtimecmp(uint64_t v) {
    *(volatile uint64_t *)CLINT_MTIMECMP = v;
}

void set_supervisor_timer(uint64_t interval) {
    uint64_t now = read_mtime();
    write_mtimecmp(now + interval);
}
*/

// bit 定義
#define SSTATUS_SIE (1UL << 1)  // sstatus.SIE ビット
#define SIE_STIE    (1UL << 5)  // sie.STIE ビット

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
    
    //set_supervisor_timer(TIMER_INTERVAL);
//    uint64_t now = read_mtime();
//    write_mtimecmp(now + TIMER_INTERVAL);
}

// Supervisor-mode タイマー割り込みを無効化
void disable_timer_interrupts(void) {
    unsigned long x;

    // STIE = 0
    x = r_sie();
    x &= ~SIE_STIE;
    w_sie(x);

    // SIE = 0
    x = r_sstatus();
    x &= ~SSTATUS_SIE;
    w_sstatus(x);
}

extern void swtch(struct context *old, struct context *new);

void timer_reset() {
    //set_supervisor_timer(TIMER_INTERVAL);
//    uint64_t now = *MTIME;
//    *MTIMECMP = now + TIMER_INTERVAL;
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
    struct proc *new = gProc[gActiveProc];
    
    if (new != old) {
        enable_mmu(new->pagetable);
        enable_timer_interrupts();
        user_satp = MAKE_SATP(new->pagetable);
        swtch(&mycpu()->context, &new->context);
    }
}

extern void putchar(char c);

// コンソール用スピンロック
static struct spinlock console_lock;

// 起動時に一度だけ呼び出す
void console_init(void) {
    initlock(&console_lock, "console");
}

extern void putchar(char c);

// コンソール用スピンロック
static struct spinlock console_lock;

// システムコール番号を定義
#define SYS_puts 64

// syscall.c に copyin_str を追加
// pagetableを渡すように変更が必要
// この関数は、現在のプロセスのページテーブルを使って、ユーザー仮想アドレスから文字列をカーネルバッファにコピーする
// (ここでは簡単のため、実装の詳細は省略し、syscall_handler内にロジックを記述します)

extern struct proc* gProc[];
extern int gActiveProc;


// カーネル側の puts (UART 等に文字列を出力)
void puts(const char *s) {
    acquire(&console_lock);
    while (*s) {
        putchar(*s++);
    }
    release(&console_lock);
}

void panic();

uintptr_t syscall_handler(uintptr_t a0, uintptr_t a1, uintptr_t a2,
    uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t syscall_no)
{
    disable_timer_interrupts();
    switch(syscall_no) {
    case SYS_puts: {
        char kernel_buf[256];
        uint64_t user_va = a0;
        
        struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
        int i = 0;
        for (i = 0; i < sizeof(kernel_buf) - 1; ++i) {
            char* user_char_pa = walkaddr(p->pagetable, user_va + i);
            if (user_char_pa == 0) {
                panic();
            }
            
            kernel_buf[i] = *user_char_pa;
            if (kernel_buf[i] == '\0') {
                break; // 文字列終端
            }
        }
        kernel_buf[i] = '\0';
        
        puts((char*)kernel_buf);
        enable_timer_interrupts();
        return 0;
    }
    default:
        panic();
    }
}


/*
// user-space からのシステムコールを受け取って dispatch する
uintptr_t syscall_handler(uintptr_t a0, uintptr_t a1, uintptr_t a2,
                          uintptr_t a3, uintptr_t a4, uintptr_t a5,
                          uintptr_t a6, uintptr_t syscall_no)
{
    switch(syscall_no) {
    case SYS_puts:
        // a0 にユーザー空間ポインタが入っている
        puts((const char *)a0);
        return 0;
    default:
        // 未知のシステムコール
        panic();
    }
}
*/

#define SSTATUS_SUM (1UL << 18)

#include "fs2.h"

extern void user_entry_trampoline();
void (*goto_user)(uintptr_t, uintptr_t, uintptr_t, uint64_t) = (void*)user_entry_trampoline;

#define SSTATUS_SPP (1L << 8)  // Previous mode, 1=Supervisor, 0=User

static inline uint64_t
r_sip()
{
  uint64_t x;
  asm volatile("csrr %0, sip" : "=r" (x) );
  return x;
}

int main()
{
    intr_off();
    w_sie(r_sie() & ~SIE_STIE);
    w_stvec((uint64_t)trapvec & ~0x03);
    
    trap_init();          
    plic_init();
    plic_enable(UART_IRQ);
    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    
    uint32_t inum = path_lookup("/hello.elf");
    if (inum != 0) {
        struct dinode ip;
        read_inode(inum, &ip);
        read_data(&ip, 0, elf_program, 5096);
    } else {
        puts("hello.elf not found in fs.img\n");
    }
    
    uint32_t inum2 = path_lookup("/hello2.elf");
    if (inum2 != 0) {
        struct dinode ip;
        read_inode(inum2, &ip);
        read_data(&ip, 0, elf_program2, 5048);
    } else {
        puts("hello.elf not found in fs.img\n");
    }

    alloc_prog();
    alloc_prog2();

/*
    // PMP entry 0: allow all access to all physical memory
    // address matching: TOR (top-of-range)
    // pmpaddr0 = max_addr >> 2 (TOR uses pmpaddr0 * 4 as upper bound)
    // pmpcfg0 = A=TOR, R/W/X=1
    
    asm volatile("li t0, -1");            // 0xFFFFFFFF for 32-bit PMPADDR
    asm volatile("csrw pmpaddr0, t0");    // Top address (unbounded TOR)
    asm volatile("li t0, 0x1F");          // TOR | R | W | X = 0001 1111
    asm volatile("csrw pmpcfg0, t0");     // PMP0 configuration
*/

/*
    uint64_t medeleg_val = (1 << 8); 
    // ページフォルト関連も委譲しておくと良い
    medeleg_val |= (1 << 12) | (1 << 13) | (1 << 15);
    asm volatile("csrw medeleg, %0" : : "r"(medeleg_val));

    // Supervisor-modeのタイマー(5)、外部(9)、ソフトウェア(1)割り込みをS-modeに委譲
    uint64_t mideleg_val = (1 << 9) | (1 << 5) | (1 << 1);
    asm volatile("csrw mideleg, %0" : : "r"(mideleg_val));
*/

    /// カーネルページからユーザープロセスをアクセス可能にする
    asm volatile("csrs sstatus, %0" : : "r"(SSTATUS_SUM));
    
    
//    push_off();
//    intr_off_direct(); 
    
    /// ユーザープロセスへ降りる
    
    struct proc* p = gProc[gActiveProc];
    
    uintptr_t usersp = (uint64_t)(p->stack);
    uint64_t usersatp = MAKE_SATP(p->pagetable);
    uintptr_t entry = p->context.mepc;

/*
    // 1) SATP をユーザー用ページテーブルにセット
    asm volatile("csrw satp, %0" :: "r"(usersatp));
    asm volatile("sfence.vma zero, zero");

    // 2) スタックをユーザースタックに
    asm volatile("mv sp, %0" :: "r"(usersp));

    // 3) sstatus.SPP=0, SPIE=1
    uintptr_t x;
    asm volatile("csrr %0, sstatus" : "=r"(x));
    x = (x & ~(1UL<<8)) | (1UL<<5);  // clear SPP, set SPIE
    asm volatile("csrw sstatus, %0" :: "r"(x));

    // 4) sepc にエントリセット
    asm volatile("csrw sepc, %0" :: "r"(entry));


    // 5) User モードへ
    asm volatile("sret");
*/
    
/*
    asm volatile("csrw satp, %0" :: "r"(satp_val));
    asm volatile("sfence.vma zero, zero");
    
    uint64_t mstatus;
    asm volatile("csrr %0, mstatus" : "=r"(mstatus));
    mstatus &= ~(3UL << 11); // MPP = U
    mstatus |= (1UL << 7);   // MPIE = 1
    asm volatile("csrw mstatus, %0" :: "r"(mstatus));
    
    //uint64_t entry = 0x1000;
    uint64_t entry = p->context.mepc;
    asm volatile("csrw mepc, %0" :: "r"(entry));

    asm volatile("fence.i");
    asm volatile("mret");
*/
//    enable_timer_interrupts();
   
/*
    // ここで初めて次の発火時刻をセット
    {
        uint64_t now = read_mtime();
        write_mtimecmp(now + TIMER_INTERVAL);
    } 
*/
/*
printf("sie=0x%x (STIE=%d), sstatus=0x%x (SIE=%d), sip=0x%x (STIP=%d)\n",
       r_sie(),   !!(r_sie()   & SIE_STIE),
              r_sstatus(), !!(r_sstatus() & SSTATUS_SIE),
                     r_sip(),   !!(r_sip()   & SIE_STIE));
*/

    goto_user(entry, usersp, usersatp, TIMER_INTERVAL);
    
    while (1); 
}
