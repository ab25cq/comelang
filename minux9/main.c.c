//#include <comelang.h>
#include <stdint.h>
#include <stdarg.h>
#include "elf.h"
#include "userprog.h"
#include "userprog2.h"

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

extern char _end[];   // heap start
extern char _end2[];  // kernel page start

static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

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

void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

// メモリブロックのヘッダ構造体 (サイズと次のブロックへのポインタ)
typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = NULL;

void *malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    // アラインメント調整 (例: 8バイトアラインメント)
    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t); // ヘッダ分のサイズを追加

    mem_block_t *current = free_list;
    mem_block_t *prev = NULL;

    // フリーリストを検索して、十分なサイズの空きブロックを探す
    while (current != NULL) {
        if (current->size >= size) {
            if (prev == NULL) {
                free_list = current->next;
            } else {
                prev->next = current->next;
            }
            return (void *)(current + 1); // データ領域へのポインタを返す
        }
        prev = current;
        current = current->next;
    }

    // 空きブロックが見つからなかった場合、sbrkで新しい領域を確保
    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
        return NULL; // メモリ不足
    }

    new_mem->size = size;
    new_mem->next = NULL;
    return (void *)(new_mem + 1); // データ領域へのポインタを返す
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

    mem_block_t *block = (mem_block_t *)ptr - 1; // ヘッダへのポインタを取得

    // フリーリストの先頭に挿入 (より効率的な方法もある)
    block->next = free_list;
    free_list = block;

    // ここで隣接する空きブロックをマージする処理を追加すると、より効率的なメモリ管理が可能になります。
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
        return (char*)haystack;  // 

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

    return NULL;  // 
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

    *d = '\0';  // 

    return dest;
}

void exit(int n) {
    while(1);
}

// 汎用 itoa（符号あり/なし、base 10, 16 に対応）
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

// 拡張版 vasprintf
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
            buf[0] = (char)va_arg(ap, int);  // char は int に昇格されて渡る
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
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  // GCC promotes
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
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  // GCC promotes
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

// UART1
extern void putchar(char c);

void printint(int val_, int base, int sign) {
    char buf[33];  // 32bit最大桁数 + '\0'
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
    char buf[65];  // 64bit最大桁数 + '\0'
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    // 0の特別処理
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

    // 逆順に出力
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

        p++; // %の次の文字

        if (*p == 'l') {
            // 'l'が連続しているかチェック。%lx or %llx 対応
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
            // 従来の1文字指定子
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
};

struct cpu gCPU;

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

#define KERNBASE 0x80000000L
#define PHYSTOP 0x81000000L
#define USERBASE 0x82000000L

void* memset(void *dst, int c, unsigned int n);

struct run {
    struct run *next;
};

struct {
//  struct spinlock lock;
    struct run *freelist;
} kmem;

void kinit() {
//  initlock(&kmem.lock, "kmem");
    freerange(_end2, (void*)PHYSTOP);
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

    if(((uint64_t)pa % PGSIZE) != 0 || (char*)pa < _end2 || (uint64_t)pa >= PHYSTOP) {
        while(1) puts("kfree panic");
    }

    // Fill with junk to catch dangling refs.
    memset(pa, 1, PGSIZE);

    r = (struct run*)pa;

    //  acquire(&kmem.lock);
    r->next = kmem.freelist;
    kmem.freelist = r;
//  release(&kmem.lock);
}

#define USERBASE 0x82000000L

void * kalloc(void) {
    struct run *r;

    //acquire(&kmem.lock);
    r = kmem.freelist;
    if(r)
        kmem.freelist = r->next;
    //release(&kmem.lock);

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
        if((pte = walk(pagetable, a, 1)) == 0)
            return -1;
        if(*pte & PTE_V)
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
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

uint64_t make_satp(pagetable_t pagetable) {
    return SATP_SV39 | (((uint64_t)pagetable >> 12) & 0xFFFFFFFFFFF);
}

void enable_mmu(pagetable_t kernel_pagetable) {
    uint64_t satp = make_satp(kernel_pagetable);
    
    // SATP に書き込み（仮想メモリ有効化）
    asm volatile("csrw satp, %0" :: "r"(satp));
            
    // アドレス変換を反映
    asm volatile("sfence.vma zero, zero");
                    
    // mstatus は不要（SATPだけで切り替わる）
}

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, PGSIZE);

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        mappages(kernel_pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V | PTE_U);
    }

    // UART
    mappages(kernel_pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
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
    return (void*)(pa + (va & (PGSIZE - 1)));  // ページ内オフセットを足す
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

extern char TRAPFRAME[];

void alloc_prog() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    result->stack = calloc(1, 256);
    result->context.sp = (uint64_t)(result->stack + 256);
    
    pagetable_t user_pagetable = (pagetable_t)kalloc();
    memset(user_pagetable, 0, PGSIZE);
    
    result->pagetable = user_pagetable;

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        mappages(result->pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V | PTE_U);
    }
    
    // UART
    mappages(result->pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    
    /// TRAPFRAME
    mappages(result->pagetable, (uint64_t)TRAPFRAME, PGSIZE, (uint64_t)TRAPFRAME, PTE_R | PTE_W | PTE_V | PTE_U);
    asm volatile("sfence.vma zero, zero"); 
    
    struct elfhdr *eh = (struct elfhdr *)hello_elf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
            
        
    struct proghdr *ph = (struct proghdr *)(hello_elf + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va2 = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        // メモリ確保とマッピング（memsz分）
        for (uint64_t va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic();
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        
        // 実行ファイルの内容を仮想アドレスに書き込み（filesz分）
        if (copyout(result->pagetable, PGROUNDDOWN(ph->vaddr), hello_elf + ph->off, ph->filesz) < 0) {
            panic();
        }
        else if(va2 == 0) {
            va2 = PGROUNDDOWN(ph->vaddr);
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    asm volatile("sfence.vma zero, zero"); 
    
    /// USER PROGRAM
    result->context.mepc = va2;
    
    gProc[gNumProc++] = result;
}

void alloc_prog2() {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    result->stack = calloc(1, 256);
    result->context.sp = (uint64_t)(result->stack + 256);
    
    pagetable_t user_pagetable = (pagetable_t)kalloc();
    memset(user_pagetable, 0, PGSIZE);
    
    result->pagetable = user_pagetable;

    // 0x80000000
    for (uint64_t addr = KERNBASE; addr < PHYSTOP; addr += PGSIZE) {
        mappages(result->pagetable, addr, PGSIZE, addr, PTE_R | PTE_W | PTE_X | PTE_V | PTE_U);
    }
    
    // UART
    mappages(result->pagetable, 0x10000000, PGSIZE, 0x10000000, PTE_R | PTE_W | PTE_V | PTE_U);
    asm volatile("sfence.vma zero, zero"); 
    
    struct elfhdr *eh = (struct elfhdr *)hello2_elf;
    
    if (eh->magic != ELF_MAGIC) {
        while(1) puts("panic");
    }
        
    struct proghdr *ph = (struct proghdr *)(hello2_elf + eh->phoff);
    
    uint64_t size = ph->filesz;
    
    uint64_t va2 = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != ELF_PROG_LOAD)
            continue;
    
        // メモリ確保とマッピング（memsz分）
        for (uint64_t va = PGROUNDDOWN(ph->vaddr); va < ph->vaddr + ph->memsz; va += PGSIZE) {
            void *pa = kalloc();
            if (!pa) panic();
            memset(pa, 0, PGSIZE);
            mappages(result->pagetable, va, PGSIZE, (uint64_t)pa,
                     PTE_U | PTE_R | PTE_W | PTE_X | PTE_V);
            asm volatile("sfence.vma zero, zero");
        }
        
        
        // 実行ファイルの内容を仮想アドレスに書き込み（filesz分）
        if (copyout(result->pagetable, PGROUNDDOWN(ph->vaddr), hello2_elf + ph->off, ph->filesz) < 0) {
            panic();
        }
        else if(va2 == 0) {
            va2 = PGROUNDDOWN(ph->vaddr);
        }
        asm volatile("sfence.vma zero, zero"); 
    }
    asm volatile("sfence.vma zero, zero"); 
    
    /// USER PROGRAM
    result->context.mepc = va2;
    
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


// mie: Machine Interrupt Enable Register
#define MIE_MSIE (1 << 3)   // 
#define MIE_MEIE (1 << 11)  // 

// mstatus: Machine Status Register
#define MSTATUS_MIE (1 << 3) // 

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

static inline void w_mstatus(uint64_t x) {
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

#define TIMER_INTERVAL 1000  //  100ms 
#define MIE_MTIE (1 << 7)

extern void timervec();  // 

void enable_timer_interrupts() {
    w_mtvec((uint64_t)timervec & ~0x03);
    uint64_t now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
    w_mie(MIE_MTIE);
    w_mstatus(r_mstatus() | MSTATUS_MIE);
}

void disable_timer_interrupts() {
    w_mie(0x0);

    w_mstatus(r_mstatus() & ~MSTATUS_MIE);

    *MTIMECMP = *MTIME + 0xFFFFFFFF;
}

extern void swtch(struct context *old, struct context *new);


void timer_reset() {
    uint64_t now = *MTIME;
    *MTIMECMP = now + TIMER_INTERVAL;
}

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];

    struct context *tf = (struct context*)TRAPFRAME;
    p->context = *tf;

    timer_reset(); // タイマーをリセット

    // カレントプロセスの保存
    struct proc *old = gProc[gActiveProc];
    gActiveProc++;
    if(gActiveProc >= gNumProc) {
        gActiveProc = 0;
    } 
    struct proc *new = gProc[gActiveProc];
    
    if (new != old) {
        enable_mmu(new->pagetable);
        enable_timer_interrupts();
        swtch(&gCPU.context, &new->context);
    }
}

int main()
{
    trap_init();           // mtvecにtrap handler設定
    plic_init();
    plic_enable(UART_IRQ);
    uart_init();
    kinit();
    mmu_init();
    //timer_init();
    
    alloc_prog();
    alloc_prog2();

    struct proc* p = gProc[gActiveProc];
    
    uint64_t satp_val = make_satp(p->pagetable);
    asm volatile("csrw satp, %0" :: "r"(satp_val));
    asm volatile("sfence.vma zero, zero");
    
    uint64_t mstatus;
    asm volatile("csrr %0, mstatus" : "=r"(mstatus));
    mstatus &= ~(3UL << 11); // MPP = U
    mstatus |= (1UL << 7);   // MPIE = 1
    asm volatile("csrw mstatus, %0" :: "r"(mstatus));
    
    // mepcに仮想アドレス（そのまま39bit仮想で渡してOK）
    uint64_t entry = 0x82000000;
    asm volatile("csrw mepc, %0" :: "r"(entry));
    
    // PMP entry 0: allow all access to all physical memory
    // address matching: TOR (top-of-range)
    // pmpaddr0 = max_addr >> 2 (TOR uses pmpaddr0 * 4 as upper bound)
    // pmpcfg0 = A=TOR, R/W/X=1
    
    asm volatile("li t0, -1");            // 0xFFFFFFFF for 32-bit PMPADDR
    asm volatile("csrw pmpaddr0, t0");    // Top address (unbounded TOR)
    asm volatile("li t0, 0x1F");          // TOR | R | W | X = 0001 1111
    asm volatile("csrw pmpcfg0, t0");     // PMP0 configuration
    
    enable_timer_interrupts();
    
    asm volatile("fence.i");
    asm volatile("mret");
    
    while (1); // mretが失敗したとき用
}

