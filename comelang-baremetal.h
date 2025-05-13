#ifndef COMELANG_BARE_METAL_H
#define COMELANG_BARE_METAL_H

////////////////////////////////////////////////////////////
// RISCV 
////////////////////////////////////////////////////////////
#ifdef __RISCV__
#include <stddef.h>

using comelang;
/*
typedef struct {
    volatile int locked;  // 0: unlocked, 1: locked
} mutex_t;

uniq _Atomic int atomic_swap(volatile int *addr, int newval) {
    int result;
    asm volatile (
        "amoswap.w.aq %0, %2, %1"
        : "=r"(result), "+A"(*addr)
        : "r"(newval)
        : "memory"
    );
    return result;
}

uniq _Atomic void mutex_enter_blocking(mutex_t *mutex) {
    while (atomic_swap(&mutex->locked, 1) != 0) {
        // busy wait
    }
}

_Atomic void mutex_exit(mutex_t *mutex) {
    asm volatile("fence" ::: "memory");
    mutex->locked = 0;
}

void mutex_init(mutex_t *mutex) {
    mutex->locked = 0;
}
*/

output { #include <stdatomic.h> }

typedef struct {
    _Atomic int locked;
} mutex_t;

void mutex_init(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}

void mutex_enter_blocking(mutex_t *mutex) {
    int expected = 0;
    while (!atomic_compare_exchange_weak(&mutex->locked, &expected, 1)) {
        expected = 0;
        __asm__ volatile("nop");
    }
}

void mutex_exit(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}


#define MUTEX_INITIALIZER { 0 }

uniq volatile mutex_t gExpMutex = MUTEX_INITIALIZER;

////////////////////////////////////////////////////////////
// PICO 
////////////////////////////////////////////////////////////
#elif __PICO__
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

uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(sname, sline, id);
    mutex_exit(&gComeHeapMutex);
}

uniq void come_pop_stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit();
    mutex_exit(&gComeHeapMutex);
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(sname, sline);
    mutex_exit(&gComeHeapMutex);
}

uniq void stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit();
    mutex_exit(&gComeHeapMutex);
}

uniq string come_get_stackframe() version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    string result = inherit();
    mutex_exit(&gComeHeapMutex);
    
    return result;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    void* result = inherit(count, size, sname, sline, class_name);
    mutex_exit(&gComeHeapMutex);
    
    return result;
}

uniq void come_free(void* mem) version 2
{
    mutex_enter_blocking(&gComeHeapMutex);
    inherit(mem);
    mutex_exit(&gComeHeapMutex);
}

////////////////////////////////////////////////////////////
// BARE_METAL LIBC SUBSET
////////////////////////////////////////////////////////////
#ifdef __BARE_METAL__
#include <stdarg.h>

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

#define ALIGN8(size) (((size) + 7) & ~7)

typedef struct sBlock {
    size_t size;
    struct sBlock* next;
    int free;
} block_t;

#define BLOCK_SIZE sizeof(block_t)

uniq block_t* free_list = NULL;

uniq void* _sbrk(ptrdiff_t incr) {
    if (heap_end == 0)
        heap_end = (char*)&_end;

    if (heap_end + incr >= heap_limit) {
        return (void*)-1;
    }

    void* prev = heap_end;
    heap_end += incr;
    return prev;
}

uniq block_t* find_free_block(size_t size) {
    block_t* curr = free_list;
    while (curr) {
        if (curr->free && curr->size >= size)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

uniq block_t* request_space(size_t size) {
    void* mem = _sbrk(size + BLOCK_SIZE);
    if (mem == (void*)-1)
        return NULL;

    block_t* b = (block_t*)mem;
    b->size = size;
    b->next = NULL;
    b->free = 0;

    return b;
}

uniq void* malloc(size_t size) {
    size = ALIGN8(size);
    block_t* block;

    if ((block = find_free_block(size))) {
        block->free = 0;
        return (void*)(block + 1);  //  block 
    }

    block = request_space(size);
    if (!block)
        return NULL;

    if (!free_list)
        free_list = block;
    else {
        block_t* curr = free_list;
        while (curr->next) curr = curr->next;
        curr->next = block;
    }

    return (void*)(block + 1);
}

uniq void free(void* ptr) {
    if (!ptr) return;

    block_t* block = ((block_t*)ptr) - 1;
    block->free = 1;
}

uniq void* calloc(size_t n, size_t size) {
    size_t total = n * size;
    void* ptr = malloc(total);
    if (ptr)
        memset(ptr, 0, total);
    return ptr;
}

uniq char* strdup(const char* s) {
    size_t len = strlen(s) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s, len);
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

uniq _Atomic void* memset(void *dst, int c, unsigned int n) {
  char *cdst = (char *) dst;
  int i;
  for(i = 0; i < n; i++){
    cdst[i] = c;
  }
  return dst;
}

uniq int memcmp(const void *v1, const void *v2, unsigned int n) {
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
    while(n-- > 0)
      *d++ = *s++;

  return dst;
}

// memcpy exists to placate GCC.  Use memmove.
uniq void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

uniq int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (uchar)*p - (uchar)*q;
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

// Like strncpy but guaranteed to NUL-terminate.
uniq char* safestrcpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  if(n <= 0)
    return os;
  while(--n > 0 && (*s++ = *t++) != 0)
    ;
  *s = 0;
  return os;
}

uniq int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

uniq char* strncat(char* dest, const char* src, size_t n) {
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

uniq void exit(int n)
{
    while(1);
}

uniq char* itoa(char* buf, long val_, int base, int is_unsigned) {
    char* p = buf;
    char tmp[32];
    int i = 0, negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (!is_unsigned && val_ < 0) {
        negative = 1;
        val_ = -val_;
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

uniq int vasprintf(char** result, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    
    char out[256];
    unsigned long out_size = 256;

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
    
    *result = malloc(sizeof(char)*(p - out +1));
    
    strncpy(*result, out, p - out);
    
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

// 1016
uniq void printint(long num, int base, int is_signed) {
    char buf[32];
    int i = 0;
    unsigned long n;

    if (is_signed && num < 0) {
        putchar('-');
        n = -num;
    } else {
        n = num;
    }

    do {
        buf[i++] = "0123456789abcdef"[n % base];
        n /= base;
    } while (n > 0);

    while (i--)
        putchar(buf[i]);
}

// printf
uniq int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    
    char* p;

    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++;  // 
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
            putchar('0');
            putchar('x');
            printint(val_, 16, 0);
            break;
        }
        case 's': {
            const char* s = va_arg(ap, const char*);
            if (!s) s = "(null)";
            while (*s)
                putchar(*s++);
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
            putchar(*p);  // 
            break;
        }
        }
    }

    va_end(ap);
    return 0;
}

uniq void perror(char* str)
{
    puts(str);
}

#endif

#endif
