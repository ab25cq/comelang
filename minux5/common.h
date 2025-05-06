#include <stdarg.h>

typedef unsigned long size_t;
typedef long ptrdiff_t;

#define NULL ((void*)0)

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

#define ALIGN8(size) (((size) + 7) & ~7)

int printf(const char* fmt, ...);

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
    while(n-- > 0)
      *d++ = *s++;

  return dst;
}
// memcpy exists to placate GCC.  Use memmove.
 void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

typedef struct sBlock {
    size_t size;
    struct sBlock* next;
    int free;
} block_t;

#define BLOCK_SIZE sizeof(block_t)

 block_t* free_list = NULL;

 void* _sbrk(ptrdiff_t incr) {
    if (heap_end == 0)
        heap_end = &_end;

    if (heap_end + incr >= heap_limit)
        return (void*)-1;

    void* prev = heap_end;
    heap_end += incr;
    return prev;
}

 block_t* find_free_block(size_t size) {
    block_t* curr = free_list;
    while (curr) {
        if (curr->free && curr->size >= size)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

 block_t* request_space(size_t size) {
    void* mem = _sbrk(size + BLOCK_SIZE);
    if (mem == (void*)-1)
        return NULL;

    block_t* b = (block_t*)mem;
    b->size = size;
    b->next = NULL;
    b->free = 0;

    return b;
}
 void* memset(void *dst, int c, unsigned int n) {
  char *cdst = (char *) dst;
  int i;
  for(i = 0; i < n; i++){
    cdst[i] = c;
  }
  return dst;
}

 void* malloc(size_t size) {
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

 void free(void* ptr) {
    if (!ptr) return;

    block_t* block = ((block_t*)ptr) - 1;
    block->free = 1;
}

 void* calloc(size_t n, size_t size) {
    size_t total = n * size;
    void* ptr = malloc(total);
    if (ptr)
        memset(ptr, 0, total);
    return ptr;
}

 char* strdup(const char* s) {
    size_t len = strlen(s) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s, len);
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


 int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (uchar)*p - (uchar)*q;
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

// Like strncpy but guaranteed to NUL-terminate.
 char* safestrcpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  if(n <= 0)
    return os;
  while(--n > 0 && (*s++ = *t++) != 0)
    ;
  *s = 0;
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

 char* itoa(char* buf, long val_, int base, int is_unsigned) {
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

int printf(const char* fmt, ...) {
    char buf[256];
    va_list ap;
    va_start(ap, fmt);

    int len = snprintf(buf, sizeof(buf), fmt, ap);

    for (int i = 0; i < len; i++) {
        putchar(buf[i]);
    }

    va_end(ap);
    return len;
}

int vasprintf(char** strp, const char* fmt, va_list ap) {
    va_list ap_copy;
    va_copy(ap_copy, ap);

    // '\0' 
    int len = vsnprintf(NULL, 0, fmt, ap_copy);
    va_end(ap_copy);

    if (len < 0) {
        *strp = NULL;
        return -1;
    }

    // +1'\0'
    char* buf = malloc(len + 1);
    if (!buf) {
        *strp = NULL;
        return -1;
    }

    vsnprintf(buf, len + 1, fmt, ap);  // 
    *strp = buf;
    return len;
}

void perror(const char* msg) {
    int len = strlen(msg);

    for (int i = 0; i < len; i++) {
        putchar(msg[i]);
    }
}
