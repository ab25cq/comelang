#ifndef COMELANG_BARE_METAL_H
#define COMELANG_BARE_METAL_H

#include <stdint.h>
#include <stdarg.h>

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

using comelang;

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

extern char _end[];   // heap start
static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

uniq void* sbrk(ptrdiff_t incr) {
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

uniq mem_block_t *free_list = NULL;

uniq void *malloc(size_t size) {
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

uniq void *calloc(size_t nmemb, size_t size) {
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

uniq void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}

uniq char* strdup(const char* s) {
    char* s2 = s;
    size_t len = strlen(s2) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s2, len);
    return p;
}

uniq int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
                            
uniq char* strstr(const char* haystack, const char* needle) {
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

uniq void* memset(void *dst, int c, unsigned int n) {
    char *cdst = (char *) dst;
    int i;
    for(i = 0; i < n; i++){
        cdst[i] = c;
    }
    return dst;
}

uniq int memcmp(const void *v1, const void *v2, unsigned int n) {
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

uniq void* memmove(void *dst, const void *src, unsigned int n) {
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

uniq void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

uniq int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

uniq char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

uniq int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

uniq void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

uniq char* strncat(char* dest, const char* src, size_t n) {
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
uniq char *strtok(char *s, const char *delim) {
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

uniq void exit(int n) {
    while(1);
}

uniq char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
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

uniq int vasprintf(char** out, const char* fmt, va_list ap) {
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

uniq int snprintf(char* out, unsigned long out_size, const char* fmt, ...) {
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

uniq int vsnprintf(char* out, unsigned long out_size, const char* fmt, ...) {
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

// putcharは環境依存で外部定義
extern void putchar(char c);

uniq void printint(int val_, int base, int sign) {
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

uniq void printlong(unsigned long val_, int base, int sign)  {
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

uniq void printlonglong(unsigned long long val_, int base, int sign)  {
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

uniq int printf(const char* fmt, ...) {
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

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
#ifdef __32BIT_CPU__
    size = (size + 3 & ~0x3);
#else
    size = (size + 7 & ~0x7);
#endif

    result = calloc(1, size);
    
    return result;
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
        void* result = alloc_from_pages(size + sizeof(sMemHeader));
        
        sMemHeader* it = result;
        
        it->allocated = ALLOCATED_MAGIC_NUM;
        
        it->size = size + sizeof(sMemHeader);
        it->free_next = NULL;
        
        come_push_stackframe(sname, sline, 0);

        if(gNumComeStackFrame < COME_STACKFRAME_MAX) {
            int i;
            for(i=0; i<gNumComeStackFrame; i++) {
                it.sname[i] = gComeStackFrameSName[i];
                it.sline[i] = gComeStackFrameSLine[i];
                it.id[i] = gComeStackFrameID[i];
            }
        }
        else {
            int i;
            for(i=0; i<COME_STACKFRAME_MAX; i++) {
                it.sname[i] = gComeStackFrameSName[gNumComeStackFrame -1 - i];
                it.sline[i] = gComeStackFrameSLine[gNumComeStackFrame -1 - i];
                it.id[i] = gComeStackFrameID[gNumComeStackFrame -1 - i];
            }
        }
        
        come_pop_stackframe();
        
        it->next = gAllocMem;
        it->prev = null;
        
        it->class_name = class_name; 
        
        if(gAllocMem) {
            gAllocMem->prev = it;
        }
        
        gAllocMem = it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeader);
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));
        
        sMemHeaderTiny* it = result;
        
        it->allocated = ALLOCATED_MAGIC_NUM;
        
        it->class_name = class_name; 
        
        it->sname = sname;
        it->sline = sline;
        
        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = NULL;
        
        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;
        
        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }
        
        gAllocMem = (sMemHeader*)it;
        
        gNumAlloc++;
        
        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));
            
            if(it->allocated != ALLOCATED_MAGIC_NUM) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            size_t size = it->size;
            
            free(it);
            
            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));
            
            if(it->allocated != ALLOCATED_MAGIC_NUM) {
                return;
            }
            
            it->allocated = 0;
            
            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;
            
            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;
                
                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }
            
            free(it);
            
            gNumFree++;
        }
    }
}

////////////////////////////////////////////////////////////
// PICO 
////////////////////////////////////////////////////////////
#if __PICO__
no_output {
#include "stdint.h"
}
no_output {
#include "ctype.h"
}
no_output {
#include "stdarg.h"
}
no_output {
#include "string.h"
}
no_output {
#include "stdlib.h"
}
no_output {
#include "stdio.h"
}
no_output {
#include "wchar.h"
}
no_output {
#include "pico/stdlib.h"
}
no_output {
#include "pico/time.h"
}
no_output {
#include "hardware/irq.h"
}
no_output {
#include "hardware/timer.h"
}
no_output {
#include "hardware/uart.h"
}
#undef _GNU_SOURCE
output {#define _GNU_SOURCE}
#define _GNU_SOURCE
output {#include "stdint.h"}
output {#include "stdarg.h"}
output {#include "string.h"}
output {#include "stdlib.h"}
output {#include "stdio.h"}
output {#include "ctype.h"}
output {#include "wchar.h"}
output {#include "pico/stdlib.h"}
output {#include "pico/time.h"}
output {#include "hardware/irq.h"}
output {#include "hardware/timer.h"}
output {#include "hardware/uart.h"}

#include "pico/mutex.h"
output {#include "pico/mutex.h"}
#include "pico/multicore.h"
output {#include "pico/multicore.h"}

#define MUTEX_INITIALIZER (mutex_t){ .locked = false, .core = NULL }

#endif

/*
////////////////////////////////////////////////////////////
// COME MUTEX 
////////////////////////////////////////////////////////////

using comelang;

struct come_mutex<T>
{
    T value;
    mutex_t mutex;
    bool lock;
};

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        mutex_init(&self.mutex);
        self.value = value;
        return self;
    }
    
    T~ lock(come_mutex<T>* self) {
        mutex_enter_blocking(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            mutex_exit(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
}

uniq mutex_t gComeHeapMutex = MUTEX_INITIALIZER;

output {#include <stdatomic.h>}

typedef struct {
    _Atomic int locked;
} mutex_t;

void mutex_init(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}

void mutex_enter_blocking(mutex_t *mutex) {
    while (1) {
        int expected = 0;
        if (atomic_compare_exchange_weak(&mutex->locked, &expected, 1))
            break;
        __asm__ volatile("nop");  // or yield() or wfi
    }
}

void mutex_exit(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}

#define MUTEX_INITIALIZER { 0 }
*/

uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    inherit(sname, sline, id);
}

uniq void come_pop_stackframe() version 2
{
    inherit();
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    inherit(sname, sline);
}

uniq void stackframe() version 2
{
    inherit();
}

uniq string come_get_stackframe() version 2
{
    string result = inherit();
    
    return result;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    void* result = inherit(count, size, sname, sline, class_name);
    
    return result;
}

uniq void come_free(void* mem) version 2
{
    inherit(mem);
}

#endif

