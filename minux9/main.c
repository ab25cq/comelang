#define nullptr ((void*)0)
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include "elf.h"
#include "fs.h"
#include "userprog.h"
#include "userprog2.h"
#include "msh.h"
#include "common.h"

typedef int pid_t;

#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67
#define SYS_fork 68
#define SYS_execv 69
#define SYS_exit 70
#define SYS_wait 71
#define SYS_dup2 72
#define SYS_pipe 73
#define SYS_brk 74
#define SYS_clear 75

typedef unsigned long size_t;
typedef long ptrdiff_t;

pagetable_t kernel_pagetable;

#define NULL ((void*)0)

#define PGSIZE 4096 // bytes per page

#define USER_STACK_TOP  0x40000000UL  // 例: UTOP に近い値
#define STACK_PAGES     16
#define STACK_MAX (4096*STACK_PAGES)

extern char _end[];   // heap start
static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

// MMIO アドレス定義
#define UART0        0x10000000UL
#define UART_THR     (*(volatile uint8_t*)(UART0 + 0x00))  // Transmit Holding Register
#define UART_LSR     (*(volatile uint8_t*)(UART0 + 0x05))  // Line Status Register
#define UART_LSR_THRE 0x20                                // THR Empty ビット


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

void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}

void* memset(void *dst, int c, unsigned int n);

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

int strlen(const char *s);
void* memcpy(void *dst, const void *src, unsigned int n);

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

// putcharは環境依存で外部定義
extern void putchar(char c);

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
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

void kfree(void *pa);
void freerange(void *pa_start, void *pa_end);

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
    puts(str);
    puts("panic!");
}




uint64_t make_satp(pagetable_t pagetable);



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

#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))

#define KERNBASE 0x80000000UL
#define PHYSTOP 0x81000000UL

void* walkaddr(pagetable_t pagetable, uint64_t va);
void free_pagetable(pagetable_t pagetable, int level);

/// プロセスのユーザー空間を完全に解放
void free_proc(struct proc *p) {
    uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
    for (int i = 0; i < STACK_PAGES; i++) {
        char* pa = walkaddr(p->pagetable, stack_base + i*PGSIZE);

        kfree(pa);
//printf("stack kfree %p\n", pa);
    }
    for (int i=0; i<p->num_process_kalloc_address; i++) {
        kfree(p->process_kalloc_address[i]);
    }
    
    free_pagetable(p->pagetable, 2);
    kfree(p->pagetable);
    kfree(p);
}


#define HEAP_END (_end + PGSIZE * 256)

struct proc* gProc[PROC_MAX];
int gNumProc;
int gActiveProc;

#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)



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
        puts("kfree panic");
        while(1);
    }

    // Fill with junk to catch dangling refs.
    memset(pa, 0, PGSIZE);

    r = (struct run*)kmem.freelist;
    
    while(r) {
        if(r == pa) {
            return;
        }
        r = r->next;
    }
    
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
    
    return (void*)r;
}

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc) {
/*
    if(va >= MAXVA)
        puts("walk");
*/

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

char uart_getc();
size_t uart_readline(char *buf, size_t maxlen);
size_t uart_readn(char *buf, size_t len) ;

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
  int got_null = 0;
  
  char* dst2 = dst;

  while(got_null == 0 && max > 0){
    va0 = PGROUNDDOWN(srcva);
    pa0 = (uint64_t)walkaddr(pagetable, va0);
    if(pa0 == 0) {
      return -1;
    }
    n = PGSIZE - (srcva - va0);
    if(n > max)
      n = max;

    char *p = (char *) (pa0 + (srcva - va0));
    while(n > 0){
      if(*p == '\0'){
        *dst2 = '\0';
        got_null = dst2 - dst;
        break;
      } else {
        *dst2 = *p;
      }
      --n;
      --max;
      p++;
      dst2++;
    }

    srcva = va0 + PGSIZE;
  }
  if(got_null){
    dst2[got_null] = '\0';
    return got_null;
  } else {
    return -1;
  }
}




//#include "userprog.h"
//#include "userprog2.h"
//uint8_t elf_program[5096+1];
//uint8_t elf_program2[5048+1];

// ↑main.c の先頭あたりに追加

void setting_user_pagetable(struct proc* proc, pagetable_t pagetable)
{
    mappages(pagetable, (uint64_t)TRAMPOLINE, PGSIZE, (uint64_t)TRAMPOLINE, PTE_R | PTE_W | PTE_V | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME, PGSIZE, (uint64_t)TRAPFRAME, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    mappages(pagetable, (uint64_t)TRAPFRAME2, PGSIZE, (uint64_t)TRAPFRAME2, PTE_R | PTE_W | PTE_V | PTE_U | PTE_X);
    for(int i=0; i<32; i++) {
        mappages(pagetable, (uint64_t)COMMON + i*PGSIZE, PGSIZE, (uint64_t)COMMON + i*PGSIZE, PTE_R | PTE_W | PTE_V | PTE_X | PTE_U);
    }
    
    // UART
    mappages(pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    mappages(pagetable, 0x10001000L, PGSIZE, 0x10001000L, PTE_R | PTE_W | PTE_V | PTE_U);
                
    asm volatile("sfence.vma zero, zero"); 
}

void alloc_prog(char* elf_buf, int fork_flag, int exec_flag, int* child_proc_index) {
    struct proc* result = kalloc();
    
    result->program = elf_buf;
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);
    
    setting_user_pagetable(result, pagetable);
    
    result->pagetable = pagetable;
    
    struct elfhdr *eh = (struct elfhdr *)elf_buf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic: not elf");
    }
        
    struct proghdr *ph = (struct proghdr *)(elf_buf + eh->phoff);
    
    result->num_process_kalloc_address = 0;
    
    uint64_t va = 0;
    uint64_t max_va_end = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;

        if (ph->vaddr + ph->memsz > max_va_end) {
            max_va_end = ph->vaddr + ph->memsz;
        }
    
        for (va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            
            result->process_kalloc_address[result->num_process_kalloc_address++] = pa;
            
            if(result->num_process_kalloc_address >= NUM_PROC_VA_MAX) {
                puts("ELF MAX ERROR");
                while(1);
            }
            
            if (!pa) panic("kalloc");
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
        }
        
        if (copyout(result->pagetable, ph->vaddr, elf_buf + ph->off, ph->filesz) < 0) {
            panic("copyout");
        }
    }
    
    result->vaddr = ph->vaddr;
    result->memsz = ph->memsz;

    // Find global pointer
    uint64_t gp = 0;
    struct elfshdr *sh = (struct elfshdr *)(elf_buf + eh->shoff);
    const char *shstrtab = elf_buf + sh[eh->shstrndx].offset;
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
    }
    
    if(gp == 0) {
        // Fallback or error if gp not found, but for now we just warn.
        // For non-PIC code this might be okay. For PIC/GP-relative, it will fail.
        // puts("Warning: __global_pointer$ not found\n");
    }


    if(fork_flag) {
        struct proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
        
        uint64_t parent_current    = parent->context.sp;
        uint64_t parent_stack_top   = (uint64_t)parent->stack_top;
        
        uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
        for (int i = 0; i < STACK_PAGES; i++) {
            char *pa = kalloc();

//printf("stack kalloc %p\n", pa);
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
    }
    else {
        struct proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
        uint64_t stack_base = USER_STACK_TOP - STACK_PAGES*PGSIZE;
        for (int i = 0; i < STACK_PAGES; i++) {
            char *pa = kalloc();

//printf("stack kalloc %p\n", pa);
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
            memcpy(result->file_table, parent->file_table, sizeof(struct file*)*MAX_OPEN_FILES);
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

struct file** get_current_file_table()
{
    return gProc[gActiveProc]->file_table;
}

void reset_watchdog();

void plic_init();
void trap_init();
void uart_rx_init();

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

extern void swtch(struct context_t *new_);

void timer_reset() {
    uint64_t next = r_time() + TIMER_INTERVAL;
    w_stimecmp(next);
}

extern char stack_top[];

void yield();

char yield_stack[STACK_MAX] __attribute__((section(".common")));

#define MAX_KERNEL 16

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

int gKernelStateHead __attribute__((section(".common")));
int gKernelStateTail __attribute__((section(".common")));

void remove_kernel_state(int active_proc) {
    if (gKernelStateHead == gKernelStateTail) {
        return;
    }
    int index = -1;
    for(int i=0; i<MAX_KERNEL; i++) {
        if(gKernelState[i].gYieldUserActiveProc == active_proc) {
            index = i;
            break;
        }
    }
    
    if(index == -1) {
        return;
    }

    // 削除位置から末尾まで、要素を一つずつ前にシフトする
    // ループは削除する要素の次の要素から開始し、最後の要素まで回る
    for (int i = index; i < gNumKernelState - 1; i++) {
        int current_index = (gKernelStateHead + i) % MAX_KERNEL;
        int next_index = (gKernelStateHead + i + 1) % MAX_KERNEL;
        gKernelState[current_index] = gKernelState[next_index];
    }

    // tailとcountを更新する
    gKernelStateTail = (gKernelStateTail - 1 + MAX_KERNEL) % MAX_KERNEL;
    gNumKernelState--;
}

void timer_handler();

void kernel_yield() {
    if(((gKernelStateTail + 1) % MAX_KERNEL) == gKernelStateHead) {
        panic("kernel state queue max");
    }
    gKernelState[gKernelStateTail].gYieldReturnContext = *(struct context_t*)TRAPFRAME;
    gKernelState[gKernelStateTail].gYieldUserSatp = user_satp;
    gKernelState[gKernelStateTail].gYieldUserSP = user_sp;
    gKernelState[gKernelStateTail].gYieldUserActiveProc = gActiveProc;
    gKernelState[gKernelStateTail].gYieldContext = *(struct context_t*)TRAPFRAME2;
    
    memmove(gKernelState[gKernelStateTail].gYieldStack, yield_stack, STACK_MAX);
    
    gKernelStateTail = (gKernelStateTail + 1) % MAX_KERNEL;
    
    gNumKernelState++;
    
    timer_handler();
}

void yield_return();

void kernel_yield_return() {
    gNumKernelState--;
    
    user_satp = gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp = gKernelState[gKernelStateHead].gYieldUserSP;
    
    gActiveProc = gKernelState[gKernelStateHead].gYieldUserActiveProc;
    struct context_t* trapframe = (struct context_t*)TRAPFRAME2;
    
    *trapframe = gKernelState[gKernelStateHead].gYieldContext;
    
    trapframe = (struct context_t*)TRAPFRAME;
    *trapframe = gKernelState[gKernelStateHead].gYieldReturnContext;
    
    memmove(yield_stack, gKernelState[gKernelStateHead].gYieldStack, STACK_MAX);
    
    gKernelStateHead = (gKernelStateHead + 1) % MAX_KERNEL;
    
    yield_return();
}

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
    
    if(gActiveProc == gKernelState[gKernelStateHead].gYieldUserActiveProc && gNumKernelState > 0) 
    {
        kernel_yield_return();
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

// コンソール用スピンロック
static struct spinlock console_lock;

// 起動時に一度だけ呼び出す
void console_init(void) {
    initlock(&console_lock, "console");
}

// コンソール用スピロック
static struct spinlock console_lock;

int Sys_write()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int fd = arg0;
    
    char kernel_buf[256];
    uint64_t user_va = arg1;
    int len = arg2;
    
    memset(kernel_buf, 0, 256);
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    int ret = copyin(p->pagetable, kernel_buf, user_va, len);
    
    if(ret < 0) {
        panic("copyinstr");
    }
    
    struct file** file_table = get_current_file_table();

    if(is_pipe(fd)) {
        pipewrite(fd, kernel_buf, len);
    }
    else if(is_stdout(fd)) {
        for(int i=0; i<len; i++) {
            putchar(kernel_buf[i]);
        }
    }
    else {
        return -1;
        //panic("write(X)");
    }

    return 0;
}

int Sys_exit()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    fs_exit(p->file_table);
    
    p->xstatus = arg0;
    p->zombie = 1;
    
    return 0;
}

int Sys_wait()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int* status_va = (int*)arg0;
    
    int exit_status = 0;
    pid_t child_pid = -1;
    while(1) { // Keep searching until a zombie is found and handled
        struct proc* zombie_proc = NULL;
        for (int n=0; n<gNumProc; n++) {
            struct proc* it = gProc[n];
            
            if(it == NULL) {
            }
            else if(it->zombie) {
                zombie_proc = it;
                child_pid = n; // This is problematic if gProc is not an array-like list
                break;
            }
        }

        if(zombie_proc) {
            exit_status = zombie_proc->xstatus;
            free_fs_table(zombie_proc->file_table);
            free_proc(zombie_proc);
            remove_kernel_state(child_pid);
            //gProc.remove_by_pointer(zombie_proc);
            gProc[child_pid] = NULL;
            break; // Exit the while(1) loop
        }
        else {
            yield(); // No zombie found, yield and try again
        }
    }
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    if (copyout(p->pagetable, (uint64_t)status_va, (void*)&exit_status, sizeof(int)) < 0) {
        panic("wait: copyout failed");
    }
    
    return child_pid;
}

int Sys_open()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    char kernel_buf[256];
    uint64_t user_va = arg0;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    copyinstr(p->pagetable, kernel_buf, user_va, 256);
            
    int result = fs_open(kernel_buf);
    
    return result;
}

int Sys_fork()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    int fork_flag;
    int child_proc_index = -1;
    alloc_prog((char*)p->program, fork_flag=1, 0, &child_proc_index);
    struct proc* child_proc = gProc[child_proc_index];
    
    uint64_t sp = child_proc->context.sp;
    
    child_proc->context = *trapframe;
    child_proc->context.mepc = child_proc->context.mepc + 4;
    child_proc->context.sp = sp;
    child_proc->context.a0 = 0;
    
    int result = child_proc_index;
   
    return result;
}

int Sys_execv()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    
    /// path ///
    char kernel_buf[256];
    uint64_t user_va = arg0;
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    if(copyinstr(p->pagetable, kernel_buf, user_va, 256) < 0) {
        trapframe->a0 = -1;
        return -1;
    }
    
    char* path = kernel_buf;
    
    /// argv ////
    char argv_storage[32][32];
    char* kargv[32];
    uint64_t user_argv = arg1;
    int argc = 0;

    for (argc = 0; argc < 32; argc++) {
        uintptr_t uargp;
        if (copyin(p->pagetable, (char*)&uargp, user_argv + argc * sizeof(uintptr_t), sizeof(uintptr_t)) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
    
        if (uargp == 0) break; // End of argv
    
        if (copyinstr(p->pagetable, argv_storage[argc], uargp, sizeof(argv_storage[0])) < 0) {
            trapframe->a0 = -1;
            return -1;
        }
        kargv[argc] = argv_storage[argc];
    }
    kargv[argc] = NULL;

    // Read ELF file
    int fd = fs_open(path);
    if(fd < 0) {
        trapframe->a0 = -1;
        return -1;
    }
    ssize_t size = fs_size(fd);
    char elf_buf[2048]; // = calloc(1, size);
    int ret = fs_read(fd, elf_buf, size);
    fs_close(fd, 0 /* massive */);
    if (ret <= 0) {
        trapframe->a0 = -1;
        return -1;
    }
    
    // alloc_prog with exec_flag=1 replaces the current process's page table etc.
    int child_proc_index = 0;
    alloc_prog(elf_buf, /*fork_flag=*/0, /*exec_flag=*/1, &child_proc_index);
    
    //free(elf_buf);
    
    struct proc* new_p = gProc[gActiveProc]; // gProc[gActiveProc] now points to the new process data

    // Set up the user stack
    uint64_t sp = new_p->context.sp; // Initial top of stack
    uint64_t str_addrs[32];

    // Copy strings to stack
    for (int i = argc - 1; i >= 0; i--) {
        size_t len = strlen(kargv[i]) + 1;
        sp -= len;
        // sp &= ~7; // Align strings to 8 bytes for simplicity/safety
        if (copyout(new_p->pagetable, sp, kargv[i], len) < 0) {
            panic("execv: copyout string failed");
        }
        str_addrs[i] = sp;
    }
    
    // Align stack for argv array
    sp -= (argc + 1) * sizeof(uint64_t);
    sp &= ~7; 
    uint64_t argv_base = sp;

    // Copy argv pointers to stack
    for (int i = 0; i < argc; i++) {
        uint64_t ptr = str_addrs[i];
        if (copyout(new_p->pagetable, argv_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            panic("execv: copyout ptr failed");
        }
    }
    // Null terminate argv
    uint64_t nullp = 0;
    if (copyout(new_p->pagetable, argv_base + argc * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        panic("execv: copyout nullp failed");
    }

    // Update the trap frame for the new program
    // The assembly code will restore registers from this frame
    // and then do `sret`.
    trapframe->a0 = argc;
    trapframe->a1 = argv_base;
    trapframe->sp = sp;
    
    // The assembly code in trap.S increments sepc by 4 after the syscall handler.
    // To counteract this, we set mepc to entry-4. This is a hack.
    // A proper fix would involve changing trap.S to handle execv specially.
    trapframe->mepc = new_p->context.mepc - 4;

    // Update the global user_sp, which trap_return will use.
    user_sp = sp;
    
    return argc;
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

void uvm_dealloc(pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz) {
    if(new_sz >= old_sz) return;
    uvmunmap(pagetable, PGROUNDUP(new_sz), (PGROUNDUP(old_sz) - PGROUNDUP(new_sz)) / PGSIZE, 1);
}

int uvm_alloc(struct proc *p, pagetable_t pagetable, uint64_t old_sz, uint64_t new_sz) {
    if(new_sz <= old_sz) return 0;

    uint64_t a = PGROUNDUP(old_sz);
    for(; a < new_sz; a += PGSIZE) {
        char *mem = kalloc();
//printf("uvm kalloc %p\n", mem);
        
        p->process_kalloc_address[p->num_process_kalloc_address++] = mem;
        
        if(p->num_process_kalloc_address >= NUM_PROC_VA_MAX) {
            puts("ELF MAX ERROR");
            while(1);
        }
        
        if(mem == 0){
            uvm_dealloc(pagetable, a, old_sz);
            return -1;
        }
        memset(mem, 0, PGSIZE);
        if(mappages(pagetable, a, PGSIZE, (uint64_t)mem, PTE_W|PTE_R|PTE_U|PTE_V) < 0){
            kfree(mem);
            uvm_dealloc(pagetable, a, old_sz);
            return -1;
        }
    }

    // Add this line!
    asm volatile("sfence.vma zero, zero"); 

    return 0;
}

// In main.c, inside Sys_brk
int Sys_brk() {
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t addr = trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    uint64_t old_sz = p->sz;

    if (addr == 0) {
        return old_sz;
    }

    if (addr > old_sz) {
        if(uvm_alloc(p, p->pagetable, old_sz, addr) < 0) {
            printf("Sys_brk: uvm_alloc failed!\n");
            return -1; 
        }
    } else if (addr < old_sz) {
        uvm_dealloc(p->pagetable, old_sz, addr);
    }

    p->sz = addr;
    return p->sz;
}

/*
int Sys_brk() {
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    uint64_t addr = trapframe->a0;
    struct proc *p = gProc[gActiveProc];
    uint64_t old_sz = p->sz;

    if (addr == 0) {
        return old_sz;
    }

    if (addr > old_sz) {
        if(uvm_alloc(p->pagetable, old_sz, addr) < 0) {
            return -1; 
        }
    } else if (addr < old_sz) {
        uvm_dealloc(p->pagetable, old_sz, addr);
    }

    p->sz = addr;
    return p->sz;
}
*/

int Sys_dup2(void)
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int oldfd = arg0;
    int newfd = arg1;
    
    fs_dup2(oldfd, newfd);
    
    return 0;
}

int Sys_pipe(void)
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    char* kernel_buf;
    uint64_t user_va = arg0;
    
    int pipe_fds[2];
    int* fd = (int*)pipe_fds;
    
    pipe_open(&fd[0], &fd[1]);
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    
    if(copyout(p->pagetable, (uint64_t)user_va, (char*)fd, sizeof(int)*2) < 0)
    {
        panic("copyout");
    }
    
    return 0;
}


int Sys_read()
{
    struct context_t* trapframe = (struct context_t*)TRAPFRAME;
    
    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;
    
    int fd   = arg0;
    uint64_t destva = arg1;
    size_t   n     = arg2;
    
    char kernel_buf[256];
    int ret;
    
    struct file** file_table = get_current_file_table();

    if(is_stdin(fd)) {
        ret = uart_readn(kernel_buf, n);
    }
    else if(is_pipe(fd)) {
        ret = piperead(fd, kernel_buf, n);
    }
    else {
        ret = fs_read(fd, kernel_buf, n);
        if (ret < 0) {
            trapframe->a0 = ret;
            return 0;
        }
        kernel_buf[ret] = '\0';
    }
    
    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    /* copyout を使ってまとめてコピー */
    if (copyout(p->pagetable, destva, kernel_buf, ret) < 0) {
        panic("read: copyout failed");
    }

    return ret;
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

            gKernelStateHead = 0;
            gKernelStateTail = 0;
            
            result = 0;
            }
            break;
            
        case SYS_execv: {
            result = Sys_execv();
            }
            break;
            
        case SYS_brk: {
            result = Sys_brk();
            }
            break;
            
        default:
            printf("NO. %d\n", arg_syscall_no);
            panic("invalid syscall");
            while(1);
    }
    
    trapframe->a0 = result;
    
    return result;
}



#define SSTATUS_SUM (1UL << 18)


void enter_user(uintptr_t, uintptr_t, uintptr_t, uint64_t, uint64_t);

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
        "mv %0, sp\n"     // sp レジスタの値を出オペランド %0 に
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

struct proc* get_current_proc()
{
    return gProc[gActiveProc];
}

void global_init()
{
    memset(gProc, 0, sizeof(struct proc*)*PROC_MAX);
    gNumProc = 0;
    gKernelStateHead = 0;
    gKernelStateTail = 0;
    gNumKernelState = 0;
    memset(gKernelState, 0, sizeof(struct sKernelState)*MAX_KERNEL);
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
    file_system_init();
    
    global_init();
    
    w_stimecmp(r_time() + 10000000);

    int fork_flag;
    int child_proc_index = 0;
    alloc_prog((char*)msh_elf, fork_flag=0, 0, &child_proc_index);
//free_fs_table(gProc[0]->file_table);
//fs_exit(gProc[0]->file_table);
//free_proc(gProc[0]);
//while(1);
//    alloc_prog((char*)hello_elf, fork_flag=0);
//    alloc_prog((char*)hello2_elf, fork_flag=0);

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
    
    //kernel_sp = read_s_sp();
    asm volatile(
        "mv %0, sp\n"     // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp)    // %0 は r レジスタに出力
        :                 // 入力オペランドなし
        :                 // 破壊するレジスタなし
    );
    enter_user(entry, usersp, usersatp, TIMER_INTERVAL, gp);
    
    while (1); 
}

