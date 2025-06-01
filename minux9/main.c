//#include <comelang.h>
#include <stdint.h>
#include <stdarg.h>

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

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
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);

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
int printf(const char* fmt, ...);

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

// memcpy exists to placate GCC.  Use memmove.
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

void exit(int n)
{
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


#include <stdint.h>

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

void printlong(unsigned long val_, int base, int sign) 
{
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

void printlonglong(unsigned long long val_, int base, int sign) 
{
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

extern void puts(const char* s);

void perror(char* str)
{
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

struct cpu  {
    struct proc *proc;          // The process running on this cpu, or null.
    struct context context;     // swtch() here to enter scheduler().
};

struct cpu gCPU;

typedef uint64_t pte_t;
typedef pte_t* pagetable_t; // 512

uint64_t make_satp(pagetable_t pagetable);

struct proc {
    struct context context;      // swtch() here to run process
    struct proc *parent;         // Parent process
    char* stack;
    char* program;
    
    pagetable_t pagetable;
};

#define NPROC 128

struct proc* gProc[NPROC];

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.
extern char _code_end[]; // first address after kernel.
extern char stack_top[]; // first address after kernel.

#define HEAP_END (_end + PGSIZE * 256)

int gActiveProc = 0;
int gNumProc = 0;

volatile int gCountTask1 = 0;
volatile int gCountTask2 = 0;

void user_mmu_init(pagetable_t pagetable);
pagetable_t create_pagetable();

/*
struct proc* alloc_proc(void (*task)()) {
    struct proc* result = calloc(1, sizeof(struct proc));
    
    memset(result, 0, sizeof(struct proc));
    
    result->stack = calloc(1, 4096);
    
    result->context.sp = (uint64_t)(result->stack + 4096);
    result->context.ra = (uint64_t)task;
    
    result->pagetable = create_pagetable();
    
    user_mmu_init(result->pagetable);

    gProc[gNumProc++] = result;

    return result;
}
*/

uint64_t load_program(struct proc* proc);

struct proc* create_user_process();
#define USERBASE 0x82000000L

void vmprint(pagetable_t pagetable);

void alloc_prog() 
{
    gProc[gNumProc++] = create_user_process();
}

void* memset(void *dst, int c, unsigned int n);

void reset_watchdog();
extern volatile char last_key;
void putc(char c);

struct proc *p ,*p2;

void enable_mmu(pagetable_t kernel_pagetable);

void swtch(struct context* current_proc, struct context* next_proc);
void sswtch(struct context* current_proc, struct context* next_proc, uint64_t pagetable);

#define yield \
    if(last_key) { \
        putc(last_key); \
        last_key = 0; \
    } \
    \
    reset_watchdog(); \
    \
    p = gProc[gActiveProc]; \
    gActiveProc++; \
    if(gActiveProc >= gNumProc) { \
        gActiveProc = 0; \
    } \
    p2 = gProc[gActiveProc]; \
    \
    swtch(&p->context, &p2->context); \
    
#define syield \
    if(last_key) { \
        putc(last_key); \
        last_key = 0; \
    } \
    \
    reset_watchdog(); \
    \
    p = gProc[gActiveProc]; \
    gActiveProc++; \
    if(gActiveProc >= gNumProc) { \
        gActiveProc = 0; \
    } \
    p2 = gProc[gActiveProc]; \
    \
    uint64_t satp = make_satp(p2->pagetable); \
    sswtch(&p->context, &p2->context, satp); \

/*
void task1() {
    while(1) {
        puts("1\n");
        puts("[1B]\n");
        puts("[1C]\n");
        puts("[1D]\n");
        "ABCABC".puts();
            var a = s"123";
            puts(a);
            //puts(a.to_string());

        gCountTask1++;
        syield;
    }
}

void task2() {
    while(1) {
        puts("2\n");
        puts("[2B]\n");
        puts("[2C]\n");
        puts("[2D]\n");
        "ABCD".puts();
            var a = s"123";
            puts(a);
            //puts(a.to_string());
        gCountTask2++;
        yield;
    }
}
*/

void plic_init();
void uart_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);

void mmu_init();

#define UART_IRQ 10

void plic_enable(int irq);
void mmu_init();

void mmu_test();
void kinit();

void load_context(struct context*);
void* walkaddr(pagetable_t pagetable, uint64_t va);

void* kalloc();
pagetable_t create_pagetable();
int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm);

#define PTE_V (1L << 0)
#define PTE_R (1L << 1)
#define PTE_W (1L << 2)
#define PTE_X (1L << 3)
#define PTE_U (1L << 4)
#define PGSIZE 4096 // bytes per page
pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc);
int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len);
#define PGSIZE 4096 // bytes per page
#define PGROUNDUP(sz)  (((sz)+PGSIZE-1) & ~(PGSIZE-1))
#define PGROUNDDOWN(a) (((a)) & ~(PGSIZE-1))


#define PMPCFG_R (1 << 0) // Read
#define PMPCFG_W (1 << 1) // Write
#define PMPCFG_X (1 << 2) // Execute
#define PMPCFG_A_OFF (0 << 3) // Disabled
#define PMPCFG_A_TOR (1 << 3) // Top of Range
#define PMPCFG_A_NA4 (2 << 3) // Naturally Aligned 4-byte region
#define PMPCFG_A_NAPOT (3 << 3) // Naturally Aligned Power-of-2 region (recommended for pages)

// 例として pmp0 を使用します
#define PMP_ENTRY_INDEX 0 // 使用するPMPエントリのインデックス

// main関数の適切な場所（mretする前）に追加
void setup_pmp_for_user_code() {
    volatile uint64_t pmpcfg_val;
    volatile uint64_t pmpaddr_val;
    
    uint64_t current_mstatus;
    asm volatile("csrr %0, mstatus" : "=r"(current_mstatus));
    printf("DEBUG: MSTATUS before PMP setup: 0x%lx\n", current_mstatus);

    // 物理アドレス 0x80ff2000 にマップされている領域を保護する場合
    // この物理アドレスは kalloc() で取得したページのアドレスです。
    // mappages() で使用した `pa` 変数の値と同じアドレスです。
    // 例: uint32_t *pa = (uint32_t *)kalloc();
    // 0x80ff2000 は例であり、kalloc() の実際の返り値によって動します。
    // あなたのprintf("XXX pa %x\n", pa); の出力結果 0x80ff2000 を使用します。
    uint64_t target_pa_base = 0x80ff2000; // 実行したいコードの物理アドレスのベース

    // PMPエントリ0 (pmpaddr0) の設定
    // 4KBページをNAPOT (Naturally Aligned Power-of-2) で指定します。
    // NAPOTはアドレスを右シフトして使うため、PAGE_SIZE-1 で XOR してから右シフトします。
    // (target_pa_base | ((PGSIZE / 2) -1)) >> 2  の形式でNAPOTアドレスを計算します。
    // PMPADDR[i] = (base_address | (size / 2) - 1) >> 2
    // 0x80ff2000 (base) + 0x07ff (PGSIZE/2 - 1 = 2048 - 1) = 0x80ff27ff
    // しかしNAPOTではサイズが重要なので、ページサイズ4KBの場合、
    // pmpaddr[i] = (base >> 2) | ((size_in_bytes / 2) - 1) >> 2
    // 正しい計算は (base_address / 4) | (power_of_2_size / 8 - 1) です。
    // 4KBのページの場合、NAPOTエントリは `(base_address >> 2) | ((PGSIZE / 8) - 1)`
    // あるいは `(base_address >> 2) | ((1 << (log2(PGSIZE) - 1)) -1)` となります。
    // 簡単な方法は `base_address / 4` を `pmpaddr` に書き込み、
    // `PMPCFG_A_NAPOT` で `PGSIZE` を指定することです。
    // base_address = 0x80ff2000, size = 4096 (PGSIZE)
    // NAPOT for 4KB page: pmpaddrX = (base_address / 4) + (2048 / 4 - 1) = (base_address / 4) + 511
    // Simplest: pmpaddrX = (base_address >> 2) | ((PGSIZE >> 3) - 1) is not correct.
    // The spec says "address / 4 | ((size / 2) - 1) / 4" for NAPOT encoding.
    // Or, for a single 4KB page (base address = X): pmpaddrX = (X >> 2) | ((4096 / 8) - 1) = (X >> 2) | 511
    // The base address should be 4-byte aligned, and size should be power-of-2.
    // So for 0x80ff2000 (base) and 4096 (size):
    pmpaddr_val = (target_pa_base >> 2) | ((PGSIZE >> 3) - 1); // 4KB for NAPOT mode

    // pmpcfg0 レジスタに設定 (PMPエントリ0の設定)
    // R (Read), W (Write), X (Execute) アクセスを許可し、NAPOTモード (Naturally Aligned Power-of-2 region)
    pmpcfg_val = PTE_R | PTE_W | PTE_X | PMPCFG_A_NAPOT; // R/W/X許可, NAPOTモード

    // pmpcfg0 は PMPエントリ0から7までを制御します。
    // PMPエントリのインデックスに合わせてビットをシフトします。
    // pmpcfg0 = pmpcfg[7]:pmpcfg[6]:pmpcfg[5]:pmpcfg[4]:pmpcfg[3]:pmpcfg[2]:pmpcfg[1]:pmpcfg[0]
    // 今回はpmp0なので、ビット0-7を使用します。
    // pmpcfg_val は既に pmp0 の設定値になっているので、そのまま pmpcfg0 に書き込みます。
    asm volatile("csrw pmpcfg0, %0" :: "r"(pmpcfg_val));
    asm volatile("csrw pmpaddr0, %0" :: "r"(pmpaddr_val));

    // 必要に応じて、他のPMPエントリ（1-15）を無効化（A=OFF）して、意図しないアクセス制限を防ぐ
    // pmpcfg0 の残りの部分をクリアするか、または明示的に無効化する
    // pmpcfg0 には PMP0-PMP7 の設定がパックされているので注意
    // : pmpcfg0 を pmp0 の設定のみにして、残りを無効化 (0) する場合
    // pmpcfg0 = (pmpcfg_val << (PMP_ENTRY_INDEX * 8)) | (既存のpmpcfg0の残りの部分 & ~マスク);
    // しかし、PMPCFG0を直接上書きしているので、他のエントリは0 (Disabled) になります。
    // デフォルトで無効であれば、このままでOK。

    volatile uint64_t read_pmpcfg0, read_pmpaddr0;
    asm volatile("csrr %0, pmpcfg0" : "=r"(read_pmpcfg0));
    asm volatile("csrr %0, pmpaddr0" : "=r"(read_pmpaddr0));
    printf("PMPCFG0: 0x%x, PMPADDR0: 0x%x\n", read_pmpcfg0, read_pmpaddr0);
}

int main()
{
    trap_init();           // mtvecにtrap handler設定
    plic_init();
    plic_enable(UART_IRQ);
    uart_init();
    kinit();
    mmu_init();

    
    //alloc_prog();

    //struct proc* p = gProc[gActiveProc];
    
    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, PGSIZE);

    uint32_t *pa = (uint32_t *)kalloc();
    pa[0] = 0x00000517; // lui a0, 0x0
    pa[1] = 0x0000006f; // j 0x0
    asm volatile("fence.i");
    
    printf("4K %d\n", ((uint64_t)pagetable % 4096) == 0);
    
printf("XXX pa %x\n", pa);
printf("YYY *pa %x\n", *(uint32_t*)pa);
printf("YYY *papaap %x\n", *(uint32_t*)0x80ff2000L);
    
    mappages(pagetable, 0x82000000, PGSIZE, (uint64_t)pa,
             PTE_R | PTE_W | PTE_X | PTE_U | PTE_V); // ★ X 必須

void* va = (void*)0x82000000;
void* real = walkaddr(pagetable, (uint64_t)va);
printf("walkaddr(0x%p) = %p\n", va, real);

vmprint(pagetable);

    uint64_t satp_val = make_satp(pagetable);
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
    
    
    asm volatile("fence.i");
    asm volatile("mret");
    
    while (1); // mretが失敗したとき用
}

