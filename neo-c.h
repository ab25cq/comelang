#ifndef COMELANG_H
#define COMELANG_H

#define __BEGIN_DECLS
#define __END_DECLS

#undef __cplusplus

#ifdef __STDC__
#define __P(protos) protos
#else
#define __P(protos) ()
#endif

#define _GNU_SOURCE

#define ALLOCATED_MAGIC_NUM 177783

#define nullptr ((void*)0)
typedef char*% string;


///////////////////////////////////////////////////////////////////////////
// PICO
///////////////////////////////////////////////////////////////////////////

#ifdef __PICO__
#undef _GNU_SOURCE
__c__ {#define _GNU_SOURCE}
#define _GNU_SOURCE
no_output {
#include "stdarg.h"
}
//#include "stdint.h"
//output {#include "stdlib.h"}
no_output {
#include "stdlib.h"
}
no_output {
#include "stdio.h"
}
no_output {
#include "string.h"
}
no_output {
#include "pico/stdio.h"
}
__c__ {#include "stdarg.h"}
__c__ {#include "stdlib.h"}
__c__ {#include "stdint.h"}
__c__ {#include "string.h"}
//__c__ {#include "stdio.h"}
__c__ {#include "ctype.h"}
__c__ {#include "wchar.h"}
__c__ {#include "pico/stdlib.h"}
__c__ {#include "pico/stdio.h"}
__c__ {#include "pico/time.h"}
__c__ {#include "hardware/irq.h"}
__c__ {#include "hardware/timer.h"}
__c__ {#include "hardware/uart.h"}

//#include "pico/mutex.h"
__c__ {#include "pico/mutex.h"}
//#include "pico/multicore.h"
__c__ {#include "pico/multicore.h"}

#define MUTEX_INITIALIZER (mutex_t){ .locked = false, .core = NULL }
#define NULL ((void*)0)

typedef __builtin_va_list va_list;

using neo-c;

///////////////////////////////////////////////////////////////////////////
// BARE METAL 
///////////////////////////////////////////////////////////////////////////
#elif defined(__BARE_METAL__)

#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>

#undef va_start
#define va_start(ap, last) __builtin_va_start(ap, last)

using neo-c;

typedef struct {
  size_t gl_pathc;   // count of paths matched
  char **gl_pathv;   // NULL-terminated vector of strings
} glob_t;

// Minimal ctype classification table required by newlib-style ctype macros.
// Values mirror newlib's _ctype_ so that isalpha/isdigit macros work without
// pulling in the full libc archive.
uniq const char _ctype_[1 + 256] = {
     0,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32,-120, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 16, 16, 16, 16, 16,
    16, 16, 65, 65, 65, 65, 65, 65,  1,  1,  1,  1,  1,  1,  1,  1,
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 16, 16, 16, 16,
    16, 16, 66, 66, 66, 66, 66, 66,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 16, 16, 16, 16,
    32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0
};

uniq int __append_char(char **p, unsigned long *rem, char c) {
    if (*rem > 1) { **p = c; (*p)++; (*rem)--; return 1; }
    return 0;
}

uniq void __append_str(char **p, unsigned long *rem, const char *s) {
    while (*s && *rem > 1) { **p = *s++; (*p)++; (*rem)--; }
}

uniq int errno;

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

uniq mem_block_t *free_list = NULL;

extern size_t brk(size_t size);
uniq void exit(int status)
{
    while(1);
}

// POSIX 風 sbrk: 成功で「旧プログラムブレーク」を返す。失敗で (void*)-1, errno=ENOMEM
uniq void *sbrk(ptrdiff_t increment) {
    static uintptr_t cur;      // 現在の program break（ユーザ空間の絶対アドレス）
    static int inited = 0;

    // 初回：カーネルに問い合わせて現在の brk を知る
    if (!inited) {
        long now = brk(0);                // 実装が「クエリとしての brk(0)」でなくても、変更は起きない
        if (now < 0) { errno = 12; return (void*)-1; }  // ENOMEM
        cur = (uintptr_t)now;
        inited = 1;
    }

    if (increment == 0) {
        return (void*)cur;                // 現在の brk を返す
    }

    // オーバーフロー保護
    uintptr_t want = cur + (intptr_t)increment;
    if ((increment > 0 && want < cur) || (increment < 0 && want > cur)) {
        errno = 12;                       // ENOMEM
        return (void*)-1;
    }

    // 要求ブレークへ移動（brk の戻り値仕様に依らず、後で再取得して正規化）
    long rc = brk((long)want);
    if (rc < 0) { 
        errno = 12; 
        return (void*)-1; 
    }

    // 正規化：現在値を改めて読み直す
    long newer = brk(0);
    if (newer < 0) { 
        errno = 12; 
        return (void*)-1; 
    }

    void *old = (void*)cur;   // 旧ブレーク（これを返すのが sbrk の契約）
    cur = (uintptr_t)newer;
    return old;
}

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

uniq void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
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

uniq void *realloc(void *ptr, size_t size) {
    if (ptr == 0) return malloc(size);
    if (size == 0) { free(ptr); return (void*)0; }

    // Old block header sits just before the user pointer
    mem_block_t *oldb = (mem_block_t*)ptr - 1;
    size_t old_total = oldb->size;
    size_t old_payload = (old_total > sizeof(mem_block_t)) ? (old_total - sizeof(mem_block_t)) : 0;

    void *np = malloc(size);
    if (!np) return (void*)0;
    size_t tocopy = old_payload < size ? old_payload : size;
    memcpy(np, ptr, tocopy);
    free(ptr);
    return np;
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

uniq void* memchr(const void* s, int c, size_t n) {
    const unsigned char* p = (const unsigned char*)s;
    unsigned char target = (unsigned char)c;
    while (n--) {
        if (*p == target) {
            return (void*)p;
        }
        p++;
    }
    return (void*)0;
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

uniq char* strcpy(char* dest, const char* src) {
    char* d = dest;
    while ((*d++ = *src++) != '\0')
        ;
    return dest;
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
uniq char* strchr(const char* s, int c) {
    while (*s) {
        if (*s == (char)c) return (char*)s;
        s++;
    }
    return (c == 0) ? (char*)s : 0;
}

uniq char* strrchr(const char* s, int c) {
    const char* last = (const char*)0;
    do {
        if (*s == (char)c) last = s;
    } while (*s++);
    return (char*)last;
}

uniq char* strndup(const char* s, size_t n) {
    size_t len = 0;
    while (len < n && s[len]) len++;
    char* p = (char*)malloc(len + 1);
    if (!p) return (char*)0;
    for (size_t i = 0; i < len; i++) p[i] = s[i];
    p[len] = '\0';
    return p;
}



// ───────────────────────────────────────────
// Minimal argtable2-compatible implementation
enum arg_kind {
    ARG_KIND_LIT = 1,
    ARG_KIND_FILE = 2,
    ARG_KIND_END = 3,
};                                                     
struct arg_hdr {                                       
    enum arg_kind kind;
    const char *shortopts;
    const char *longopts;
    const char *datatype;
    const char *glossary;
    int mincount;
    int maxcount;
};
struct arg_lit {
    struct arg_hdr hdr;
    int count;
};
struct arg_file {
    struct arg_hdr hdr;
    int count;
    const char **filename;
};                                                     
struct arg_error {                                     
    const char *msg;
    const char *argval;
    const struct arg_hdr *hdr;
};               

struct arg_end {
    struct arg_hdr hdr;                                
    int count;                                         
    int maxerrors;                                    
    struct arg_error *errors;
};                  

uniq size_t arg_file_capacity(const struct arg_file *file) {
    int maxc = file->hdr.maxcount;
    return (maxc > 0) ? (size_t)maxc : 1u;
}

uniq void arg_lit_reset(struct arg_lit *lit) {
    if (lit) lit->count = 0;
}

uniq void arg_file_reset(struct arg_file *file) {
    if (!file) return;
    file->count = 0;
    size_t cap = arg_file_capacity(file);
    for (size_t i = 0; i < cap; ++i) {
        file->filename[i] = "";
    }
}

uniq void arg_end_reset(struct arg_end *end) {
    if (!end) return;
    end->count = 0;
    if (!end->errors) return;
    for (int i = 0; i < end->maxerrors; ++i) {
        end->errors[i].msg = NULL;
        end->errors[i].argval = NULL;
        end->errors[i].hdr = NULL;
    }
}

uniq void arg_add_error(struct arg_end *end, const char *msg,
                          const char *arg, const struct arg_hdr *hdr) {
    if (!end || end->maxerrors <= 0) return;
    if (end->count >= end->maxerrors) return;
    end->errors[end->count].msg = msg;
    end->errors[end->count].argval = arg;
    end->errors[end->count].hdr = hdr;
    end->count++;
}

uniq int arg_has_capacity(int count, int maxcount) {
    return (maxcount <= 0) || (count < maxcount);
}

uniq struct arg_lit *arg_litn(const char *shortopts, const char *longopts,
                         int mincount, int maxcount, const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_lit *lit = (struct arg_lit *)malloc(sizeof(*lit));
    if (!lit) return NULL;
    lit->hdr.kind = ARG_KIND_LIT;
    lit->hdr.shortopts = shortopts;
    lit->hdr.longopts = longopts;
    lit->hdr.datatype = NULL;
    lit->hdr.glossary = glossary;
    lit->hdr.mincount = mincount;
    lit->hdr.maxcount = maxcount;
    lit->count = 0;
    return lit;
}

uniq struct arg_file *arg_filen(const char *shortopts, const char *longopts,
                           const char *datatype, int mincount, int maxcount,
                           const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_file *file = (struct arg_file *)malloc(sizeof(*file));
    if (!file) return NULL;
    size_t cap = (maxcount > 0) ? (size_t)maxcount : 1u;
    file->filename = (const char **)malloc(sizeof(char *) * cap);
    if (!file->filename) {
        free(file);
        return NULL;
    }
    file->hdr.kind = ARG_KIND_FILE;
    file->hdr.shortopts = shortopts;
    file->hdr.longopts = longopts;
    file->hdr.datatype = datatype;
    file->hdr.glossary = glossary;
    file->hdr.mincount = mincount;
    file->hdr.maxcount = maxcount;
    file->count = 0;
    for (size_t i = 0; i < cap; ++i) file->filename[i] = "";
    return file;
}

uniq struct arg_end *arg_end(int maxerrors) {
    if (maxerrors < 0) return NULL;
    struct arg_end *end = (struct arg_end *)malloc(sizeof(*end));
    if (!end) return NULL;
    end->hdr.kind = ARG_KIND_END;
    end->hdr.shortopts = NULL;
    end->hdr.longopts = NULL;
    end->hdr.datatype = NULL;
    end->hdr.glossary = NULL;
    end->hdr.mincount = 0;
    end->hdr.maxcount = 0;
    end->maxerrors = maxerrors;
    end->errors = NULL;
    if (maxerrors > 0) {
        end->errors = (struct arg_error *)malloc(sizeof(struct arg_error) * (size_t)maxerrors);
        if (!end->errors) {
            free(end);
            return NULL;
        }
    }
    arg_end_reset(end);
    return end;
}

uniq int argtable_reset(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_LIT) {
            arg_lit_reset((struct arg_lit *)hdr);
        } else if (hdr->kind == ARG_KIND_FILE) {
            arg_file_reset((struct arg_file *)hdr);
        } else if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

uniq int argtable_entries(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

uniq int arg_long_match(const char *options, const char *name) {
    if (!options || !name) return 0;
    size_t namelen = strlen(name);
    const char *p = options;
    while (*p) {
        const char *start = p;
        while (*p && *p != ',' && *p != '|') p++;
        size_t len = (size_t)(p - start);
        if (len == namelen && strncmp(start, name, namelen) == 0) return 1;
        if (*p) p++;
    }
    return 0;
}

uniq struct arg_hdr *arg_find_short(void **argtable, int entries, char opt) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        const char *s = hdr->shortopts;
        while (s && *s) {
            if (*s++ == opt) return hdr;
        }
    }
    return NULL;
}

uniq struct arg_hdr *arg_find_long(void **argtable, int entries, const char *name) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if (arg_long_match(hdr->longopts, name)) return hdr;
    }
    return NULL;
}

uniq struct arg_file *arg_find_positional(void **argtable, int entries) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind != ARG_KIND_FILE) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            continue;
        }
        struct arg_file *file = (struct arg_file *)hdr;
        size_t cap = arg_file_capacity(file);
        if ((size_t)file->count < cap) return file;
    }
    return NULL;
}

uniq int arg_file_add(struct arg_file *file, const char *value,
                        struct arg_end *end, const char *errmsg) {
    if (!file) return -1;
    size_t cap = arg_file_capacity(file);
    if ((size_t)file->count >= cap && cap > 0) {
        arg_add_error(end, errmsg, value, &file->hdr);
        return -1;
    }
    file->filename[file->count] = value ? value : "";
    file->count++;
    return 0;
}

uniq int arg_parse(int argc, char **argv, void **argtable) {
    if (!argtable) return 0;

    struct arg_end *end = NULL;
    int total = argtable_reset(argtable, &end);
    if (!end) return 0;

    int entries = 0;
    while (entries < total && argtable[entries]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[entries];
        if (hdr->kind == ARG_KIND_END) break;
        entries++;
    }

    int errors_before = end->count;
    int stop_opts = 0;

    for (int i = 1; i < argc; ++i) {
        char *arg = argv[i];
        if (!stop_opts && arg[0] == '-' && arg[1] != '\0') {
            if (arg[1] == '-' && arg[2] == '\0') {
                stop_opts = 1;
                continue;
            }

            if (arg[1] == '-') {
                const char *name = arg + 2;
                const char *val_ = NULL;
                const char *eq = strchr(name, '=');
                char namebuf[64];
                if (eq) {
                    size_t len = (size_t)(eq - name);
                    if (len >= sizeof(namebuf)) len = sizeof(namebuf) - 1;
                    for (size_t k = 0; k < len; ++k) namebuf[k] = name[k];
                    namebuf[len] = '\0';
                    name = namebuf;
                    val_ = eq + 1;
                }
                struct arg_hdr *hdr = arg_find_long(argtable, entries, name);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    if (val_ && *val_) {
                        arg_add_error(end, "option does not take a value", arg, hdr);
                        continue;
                    }
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", arg, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    if (!val_) {
                        if (i + 1 < argc) {
                            val_ = argv[++i];
                        } else {
                            arg_add_error(end, "option requires a value", arg, hdr);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file *)hdr, val_, end,
                                  "option specified too many times");
                    continue;
                }
                arg_add_error(end, "unsupported option", arg, hdr);
                continue;
            }

            const char *p = arg + 1;
            while (*p) {
                char opt = *p++;
                struct arg_hdr *hdr = arg_find_short(argtable, entries, opt);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", NULL, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    const char *val_ = NULL;
                    if (*p) {
                        val_ = p;
                        p += strlen(p);
                    } else if (i + 1 < argc) {
                        val_ = argv[++i];
                    } else {
                        arg_add_error(end, "option requires a value", arg, hdr);
                        break;
                    }
                    arg_file_add((struct arg_file *)hdr, val_, end,
                                  "option specified too many times");
                    break;
                }
            }
            continue;
        }

        struct arg_file *file = arg_find_positional(argtable, entries);
        if (!file) {
            arg_add_error(end, "unexpected argument", arg, NULL);
            continue;
        }
        arg_file_add(file, arg, end, "too many positional arguments");
    }

    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;

        int count = 0;
        if (hdr->kind == ARG_KIND_LIT) {
            count = ((struct arg_lit *)hdr)->count;
        } else if (hdr->kind == ARG_KIND_FILE) {
            count = ((struct arg_file *)hdr)->count;
        }

        if (hdr->mincount > 0 && count < hdr->mincount) {
            if ((hdr->shortopts && hdr->shortopts[0]) ||
                (hdr->longopts && hdr->longopts[0])) {
                arg_add_error(end, "missing required option", hdr->longopts ? hdr->longopts : hdr->shortopts, hdr);
            } else {
                arg_add_error(end, "missing required argument", hdr->datatype, hdr);
            }
        }
    }

    (void)errors_before;
    return end->count;
}

uniq void arg_print_joined_option(char *buf, size_t bufsz,
                                    const struct arg_hdr *hdr) {
    size_t pos = 0;
    if (!bufsz) return;
    buf[0] = '\0';
    if (hdr->shortopts && hdr->shortopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "-%c", hdr->shortopts[0]);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
        if (hdr->longopts && hdr->longopts[0] && pos + 2 < bufsz) {
            wrote = snprintf(buf + pos, bufsz - pos, ", ");
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
    if (hdr->longopts && hdr->longopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "--%s", hdr->longopts);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
    }
    if ((hdr->shortopts && hdr->shortopts[0]) ||
        (hdr->longopts && hdr->longopts[0])) {
        if (hdr->datatype && hdr->datatype[0] && pos + 1 < bufsz) {
            int wrote = snprintf(buf + pos, bufsz - pos, " %s", hdr->datatype);
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
}

uniq void arg_print_syntax(void **argtable,
                      const char *suffix) {
    if (!argtable) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            printf(" [");
            if (hdr->shortopts && hdr->shortopts[0]) {
                printf("-%c", hdr->shortopts[0]);
                if (hdr->longopts && hdr->longopts[0]) printf("|");
            }
            if (hdr->longopts && hdr->longopts[0]) {
                printf("--%s", hdr->longopts);
            }
            if (hdr->kind == ARG_KIND_FILE && hdr->datatype && hdr->datatype[0]) {
                printf(" %s", hdr->datatype);
            }
            printf("]");
        } else {
            const char *dt = hdr->datatype ? hdr->datatype : "<value>";
            int mandatory = (hdr->mincount > 0) ? hdr->mincount : 0;
            for (int k = 0; k < mandatory; ++k) printf(" %s", dt);
            if (hdr->maxcount == 0 || hdr->maxcount > mandatory) {
                printf(" [%s]", dt);
            }
        }
    }
    if (suffix) printf("%s", suffix);
}

uniq void arg_print_glossary(void **argtable,
                        const char *format) {
    if (!argtable || !format) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    char optbuf[64];
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        optbuf[0] = '\0';
        arg_print_joined_option(optbuf, sizeof(optbuf), hdr);
        const char *gloss = hdr->glossary ? hdr->glossary : "";
        printf(format, optbuf, gloss);
    }
}

uniq void arg_print_errors(struct arg_end *end,
                      const char *progname) {
    if (!end) return;
    const char *prog = progname ? progname : "";
    for (int i = 0; i < end->count; ++i) {
        const struct arg_error *err = &end->errors[i];
        const char *msg = err->msg ? err->msg : "parse error";
        if (err->argval && err->argval[0]) {
            printf("%s: %s -- %s\n", prog, msg, err->argval);
        } else if (err->hdr && err->hdr->datatype &&
                   strcmp(msg, "missing required argument") == 0) {
            printf("%s: %s %s\n", prog, msg, err->hdr->datatype);
        } else if (err->hdr && err->hdr->longopts && err->hdr->longopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            printf("%s: %s --%s\n", prog, msg, err->hdr->longopts);
        } else if (err->hdr && err->hdr->shortopts && err->hdr->shortopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            printf("%s: %s -%c\n", prog, msg, err->hdr->shortopts[0]);
        } else {
            printf("%s: %s\n", prog, msg);
        }
    }
}

uniq void arg_freetable(void **argtable, size_t n) {
    if (!argtable) return;
    for (size_t i = 0; i < n; ++i) {
        if (!argtable[i]) continue;
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (hdr->kind == ARG_KIND_FILE) {
            struct arg_file *file = (struct arg_file *)hdr;
            free((void *)file->filename);
        } else if (hdr->kind == ARG_KIND_END) {
            struct arg_end *end = (struct arg_end *)hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i] = NULL;
    }
}

uniq int isprint(int c) {
    // Printable ASCII: space (0x20) to tilde (0x7E)
    return (c >= 0x20 && c <= 0x7e) ? 1 : 0;
}

uniq int isspace(int c) {
    return (c == ' '  || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f') ? 1 : 0;
}

uniq int isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}

uniq int isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

uniq int isalnum(int c) {
    return (isalpha(c) || isdigit(c)) ? 1 : 0;
}

extern void putchar(char c);

uniq void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

uniq char* strcat(char* dest, const char* src) {
    char* d = dest;
    while (*d) d++;
    while ((*d++ = *src++) != '\0')
        ;
    return dest;
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

uniq int __utoa_ull(char* dst, unsigned long long v, int base, int lower){
  static const char L[]="0123456789abcdef";
  static const char U[]="0123456789ABCDEF";
  const char* D = lower ? L : U;
  char tmp[32]; int i=0;
  if (base<2 || base>16){ dst[0]='0'; dst[1]=0; return 1; }
  if (v==0){ dst[0]='0'; dst[1]=0; return 1; }
  while (v){ tmp[i++] = D[v % (unsigned)base]; v /= (unsigned)base; }
  int n=i, j=0; while (i--) dst[j++]=tmp[i]; dst[j]=0; return n;
}

uniq void __fmt_num(char **p, unsigned long *rem,
                      unsigned long long v, int base,
                      int is_signed, int neg, int width, char pad, int lower) {
    char num[64]; int n = __utoa_ull(num, v, base, lower);
    int total = n + (neg?1:0);
    while (total < width) { __append_char(p, rem, pad); total++; }
    if (neg) __append_char(p, rem, '-');
    __append_str(p, rem, num);
}

// ========= 共通フォーマッタ =========
typedef struct {
  void (*putc_fn)(void* ctx, char c);
  void* ctx;
  int count;
} __fmt_out_t;

uniq void __fmt_putc(__fmt_out_t* o, char c) {
  o->putc_fn(o->ctx, c);
  o->count++;
}

uniq int __is_digit(char c){ return c>='0' && c<='9'; }

uniq void __emit_pad(__fmt_out_t* o, char pad, int n){
  while (n-- > 0) __fmt_putc(o, pad);
}

uniq void __emit_num(__fmt_out_t* o, unsigned long long v,
                       int base, int is_signed, int neg,
                       int width, char pad, int lower, int left) {
  char buf[64];
  int n = __utoa_ull(buf, v, base, lower);
  int total = n + (neg ? 1 : 0);

  if (!left) {
    __emit_pad(o, pad, (width>total)?(width-total):0);
  }
  if (neg) __fmt_putc(o, '-');
  for (int i=0;i<n;i++) __fmt_putc(o, buf[i]);
  if (left) {
    __emit_pad(o, ' ', (width>total)?(width-total):0); // 左寄せは空白で後ろ詰め
  }
}

// 中核フォーマッタ：__vformat の中
uniq void __vformat(__fmt_out_t* o, const char* fmt, va_list ap) {
  while (*fmt) {
    if (*fmt != '%'){ __fmt_putc(o, *fmt++); continue; }
    fmt++; // skip '%'

    // ---- flags ----
    char pad = ' ';
    int left = 0;
    int parsing_flags = 1;
    while (parsing_flags) {
      if (*fmt == '0') { pad = '0'; fmt++; }
      else if (*fmt == '-') { left = 1; pad = ' '; fmt++; } // '-' 優先、ゼロ詰め無効化
      else parsing_flags = 0;
    }

    // ---- width ----
    int width = 0;
    while (*fmt >= '0' && *fmt <= '9') { width = width*10 + (*fmt - '0'); fmt++; }

    // ---- length: l / ll ----
    int lcount = 0;
    while (*fmt == 'l'){ lcount++; fmt++; }

    // ---- conversion ----
    char c = *fmt ? *fmt++ : '\0';
    switch (c){
      case 'd': {
        long long sv;
        if (lcount >= 2)      sv = va_arg(ap, long long);
        else if (lcount == 1) sv = va_arg(ap, long);
        else                  sv = va_arg(ap, int);
        int neg = (sv < 0);
        unsigned long long uv = neg ? (unsigned long long)(-sv) : (unsigned long long)sv;
        __emit_num(o, uv, 10, 1, neg, width, pad, 1, left);
        break;
      }
      case 'u': case 'x': {
        int base = (c=='x')?16:10;
        unsigned long long uv;
        if (lcount >= 2)      uv = va_arg(ap, unsigned long long);
        else if (lcount == 1) uv = va_arg(ap, unsigned long);
        else                  uv = (unsigned int)va_arg(ap, unsigned int);
        __emit_num(o, uv, base, 0, 0, width, pad, 1, left);
        break;
      }
      case 'p': {
        unsigned long long uv = (unsigned long long)(uintptr_t)va_arg(ap, void*);
        // 0x は常に先頭、幅は「0x を除いた部分」に適用。左寄せも考慮。
        if (!left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen; // "0x" + hex
          __emit_pad(o, pad, (width>total)?(width-total):0);
        }
        __fmt_putc(o,'0'); __fmt_putc(o,'x');
        __emit_num(o, uv, 16, 0, 0, 0, ' ', 1, 0); // 中身は幅0で直出し
        if (left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen;
          __emit_pad(o, ' ', (width>total)?(width-total):0);
        }
        break;
      }
      case 'c': {
        char ch = (char)va_arg(ap, int);
        if (!left) __emit_pad(o, pad, (width>1)?(width-1):0);
        __fmt_putc(o, ch);
        if (left) __emit_pad(o, ' ', (width>1)?(width-1):0);
        break;
      }
      case 's': {
        const char* s = va_arg(ap, const char*);
        if (!s) s="(null)";
        int len=0; for(const char* t=s; *t; ++t) len++;
        if (!left) __emit_pad(o, pad, (width>len)?(width-len):0);
        while (*s) __fmt_putc(o, *s++);
        if (left) __emit_pad(o, ' ', (width>len)?(width-len):0);
        break;
      }
      case '%': __fmt_putc(o,'%'); break;
      default:
        // 未知指定子は素通し
        __fmt_putc(o,'%');
        if (c) __fmt_putc(o,c);
        break;
    }
  }
}

uniq int printf(const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  __fmt_out_t out = { __file_putc, stdout, 0 };
  __vformat(&out, fmt, ap);
  va_end(ap);
  return out.count;
}

// ========= バッファ系（snprintf, vsnprintf） =========
typedef struct {
  char* p; unsigned long rem;
} __buf_ctx_t;

uniq void __buf_putc(void* ctx, char ch){
  __buf_ctx_t* b = (__buf_ctx_t*)ctx;
  if (b->rem > 1){ *(b->p)++ = ch; b->rem--; }
}

typedef struct {
  char* p;
} __str_ctx_t;

uniq void __str_putc(void* ctx, char ch){
  __str_ctx_t* s = (__str_ctx_t*)ctx;
  *(s->p)++ = ch;
}

uniq int vsnprintf(char* out, unsigned long out_size, const char* fmt, va_list ap){
  if (!out || out_size==0) return 0;
  __buf_ctx_t b = { out, out_size };
  __fmt_out_t o = { __buf_putc, &b, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&o, fmt, aq);
  va_end(aq);
  // NUL 終端
  if (b.rem > 0) *(b.p) = '\0';
  else out[out_size-1] = '\0';
  return o.count;
}

uniq int snprintf(char* out, unsigned long out_size, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vsnprintf(out, out_size, fmt, ap);
  va_end(ap);
  return r;
}

uniq int vsprintf(char* out, const char* fmt, va_list ap){
  if (!out) return -1;
  __str_ctx_t s = { out };
  __fmt_out_t o = { __str_putc, &s, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&o, fmt, aq);
  va_end(aq);
  *(s.p) = '\0';
  return o.count;
}

uniq int sprintf(char* out, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vsprintf(out, fmt, ap);
  va_end(ap);
  return r;
}

// atexit registry
uniq void (*__atexit_funcs[32])(void);
uniq int __atexit_count = 0;

uniq int atexit(void (*func)(void)) {
  if (__atexit_count >= (int)(sizeof(__atexit_funcs)/sizeof(__atexit_funcs[0])))
    return -1;
  __atexit_funcs[__atexit_count++] = func;
  return 0;
}

uniq void __run_atexit(void) {
  for (int i = __atexit_count - 1; i >= 0; i--) {
    if (__atexit_funcs[i]) __atexit_funcs[i]();
  }
}

uniq double strtod(const char* nptr, char** endptr) {
    const char* s = nptr;
    while (isspace(*s)) s++;
    int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
    double ip = 0.0;
    int any = 0;
    while (*s >= '0' && *s <= '9') { ip = ip*10.0 + (*s - '0'); s++; any=1; }
    double fp = 0.0, scale = 1.0;
    if (*s == '.') { s++; while (*s>='0' && *s<='9') { fp = fp*10.0 + (*s-'0'); scale *= 10.0; s++; any=1; } }
    double val_ = ip + (scale>1.0 ? fp/scale : 0.0);
    if (*s=='e' || *s=='E') {
        s++;
        int esign = 0; if (*s=='+'||*s=='-'){ esign = (*s=='-'); s++; }
        int exp = 0; while (*s>='0'&&*s<='9'){ exp = exp*10 + (*s-'0'); s++; }
        double pow10 = 1.0; while (exp-- > 0) pow10 *= 10.0;
        val_ = esign ? (val_ / pow10) : (val_ * pow10);
        any = 1;
    }
    if (endptr) *endptr = (char*)(any ? s : nptr);
    return neg ? -val_ : val_;
}

uniq unsigned long long __minux_parse_unsigned(const char* nptr, char** endptr,
                                                 int base, int* neg_out, int* any_out) {
    const char* s = nptr;
    while (isspace(*s)) s++;

    int neg = 0;
    if (*s == '+') {
        s++;
    } else if (*s == '-') {
        neg = 1;
        s++;
    }

    unsigned long long val_ = 0;
    int any = 0;
    int actual_base = base;

    if (actual_base == 0) {
        if (s[0] == '0') {
            if (s[1] == 'x' || s[1] == 'X') {
                actual_base = 16;
                s += 2;
            } else {
                actual_base = 8;
                s++;
                any = 1;  // leading zero counts as a digit
            }
        } else {
            actual_base = 10;
        }
    } else if (actual_base == 16) {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
            s += 2;
        }
    }

    if (actual_base < 2 || actual_base > 36) {
        if (endptr) *endptr = (char*)nptr;
        if (neg_out) *neg_out = neg;
        if (any_out) *any_out = 0;
        return 0;
    }

    for (;; s++) {
        int c = *s;
        int d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'z') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'Z') d = c - 'A' + 10;
        else break;
        if (d >= actual_base) break;
        any = 1;
        val_ = val_ * (unsigned long long)actual_base + (unsigned long long)d;
    }

    if (endptr) *endptr = (char*)(any ? s : nptr);
    if (neg_out) *neg_out = neg;
    if (any_out) *any_out = any;
    return val_;
}

uniq unsigned long strtoul(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    unsigned long val_ = (unsigned long)parsed;
    if (neg) val_ = (unsigned long)(-(long)val_);
    return val_;
}

uniq long strtol(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long result = (long)parsed;
    if (neg) result = -result;
    return result;
}

uniq long long strtoll(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long long result = (long long)parsed;
    if (neg) result = -result;
    return result;
}

uniq long atol(const char* nptr) {
    return strtol(nptr, (char**)0, 10);
}

uniq int atoi(const char* nptr) {
    return (int)strtol(nptr, (char**)0, 10);
}

uniq int __tolower(int c) {
    if (c >= 'A' && c <= 'Z') return c - 'A' + 'a';
    return c;
}

uniq int strncasecmp(const char* a, const char* b, size_t n) {
    for (size_t i=0; i<n; i++) {
        unsigned char ca = (unsigned char)a[i];
        unsigned char cb = (unsigned char)b[i];
        if (ca == 0 || cb == 0) return (int)ca - (int)cb;
        int da = __tolower(ca);
        int db = __tolower(cb);
        if (da != db) return da - db;
    }
    return 0;
}

uniq char* strerror(int errnum) {
    switch (errnum) {
      case 0:  return "Success";
      case 1:  return "Operation not permitted";
      case 2:  return "No such file or directory";
      case 5:  return "I/O error";
      case 9:  return "Bad file descriptor";
      case 12: return "Out of memory";
      case 13: return "Permission denied";
      case 17: return "File exists";
      case 20: return "Not a directory";
      case 21: return "Is a directory";
      case 22: return "Invalid argument";
      case 32: return "Broken pipe";
      case 38: return "Function not implemented"; // ENOSYS
      default: return "Unknown error";
    }
}

uniq int ispunct(int c) {
    // Printable ASCII that is not alnum and not space
    return (c >= 0x21 && c <= 0x7e) && !isalnum(c);
}

uniq char* __strtok_save;
uniq char *strtok(char *s, const char *delim) {
    if (!s) s = __strtok_save;
    if (!s) return (char*)0;
    // skip leading delimiters
    const char *d;
    while (*s) {
        int isdelim = 0;
        for (d = delim; *d; d++) if (*d == *s) { isdelim = 1; break; }
        if (!isdelim) break;
        s++;
    }
    if (*s == '\0') { __strtok_save = (char*)0; return (char*)0; }
    char *start = s;
    while (*s) {
        for (d = delim; *d; d++) if (*d == *s) { *s = '\0'; __strtok_save = s+1; return start; }
        s++;
    }
    __strtok_save = (char*)0; return start;
}

uniq int isxdigit(int c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// --- minimal sscanf implementation (supports %zi, %d, %ld, %u, %s, %[...], width) ---
uniq int __minux_isspace(int c) { return c==' '||c=='\t'||c=='\n'||c=='\r'||c=='\v'||c=='\f'; }

uniq int sscanf(const char *str, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    const char *s = str;
    const char *f = fmt;
    int assigned = 0;

    #define SKIP_WS_INPUT() while (*s && __minux_isspace((unsigned char)*s)) s++

    while (*f) {
        if (*f != '%') {
            if (__minux_isspace((unsigned char)*f)) {
                while (__minux_isspace((unsigned char)*f)) f++;
                SKIP_WS_INPUT();
                continue;
            }
            if (*s != *f) { va_end(ap); return assigned; }
            s++; f++;
            continue;
        }
        f++; // skip '%'

        // width
        int width = 0;
        while (*f >= '0' && *f <= '9') { width = width*10 + (*f - '0'); f++; }

        // length modifier (handle 'l', 'z'; allow "ll")
        char length = 0;
        if (*f == 'l' || *f == 'z') { length = *f; f++; if (length=='l' && *f=='l') { f++; } }

        char conv = *f++;
        if (conv == 's') {
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            SKIP_WS_INPUT();
            int n=0;
            while (*s && !__minux_isspace((unsigned char)*s) && (width==0 || n<width)) { out[n++] = *s++; }
            out[n] = '\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='d' || conv=='i' || conv=='u') {
            SKIP_WS_INPUT();
            int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
            unsigned long long val_=0; int digits=0;
            while (*s>='0'&&*s<='9' && (width==0 || digits<width)) { val_ = val_*10 + (unsigned)(*s-'0'); s++; digits++; }
            if (digits==0) { va_end(ap); return assigned; }
            if (conv=='u') {
                if (length=='l')      { unsigned long* p = va_arg(ap, unsigned long*); *p = (unsigned long)val_; }
                else if (length=='z') { size_t* p = va_arg(ap, size_t*); *p = (size_t)val_; }
                else                  { unsigned* p = va_arg(ap, unsigned*); *p = (unsigned)val_; }
            } else {
                long long sval = neg ? -(long long)val_ : (long long)val_;
                if (length=='l')      { long* p = va_arg(ap, long*); *p = (long)sval; }
                else if (length=='z') { long long* p = va_arg(ap, long long*); *p = (long long)sval; } // ssize_t 相当
                else                  { int* p = va_arg(ap, int*); *p = (int)sval; }
            }
            assigned++;
        } else if (conv=='[') {
            // scanset: %[...]
            int invert = 0; if (*f=='^'){ invert=1; f++; }
            char set[256]={0};
            if (*f==']'){ set[(unsigned)']']=1; f++; }
            while (*f && *f!=']') {
                if (*(f+1)=='-' && *(f+2) && *(f+2)!=']') {
                    unsigned char a=(unsigned char)*f, b=(unsigned char)*(f+2);
                    if (a<=b) { for (int c=a;c<=b;c++) set[c]=1; }
                    else      { for (int c=b;c<=a;c++) set[c]=1; }
                    f+=3;
                } else {
                    set[(unsigned char)*f]=1; f++;
                }
            }
            if (*f==']') f++;
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            int n=0;
            while (*s && (width==0 || n<width)) {
                int in = set[(unsigned char)*s];
                if ((in && !invert) || (!in && invert)) { out[n++]=*s++; }
                else break;
            }
            out[n]='\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='c') {
            char *out = va_arg(ap, char*);
            int n = (width==0)?1:width;
            int i=0; for (; i<n && *s; i++) *out++ = *s++;
            if (i<n) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='%') {
            if (*s!='%') { va_end(ap); return assigned; }
            s++;
        } else {
            va_end(ap); return assigned; // 未対応指定子はその場で終了
        }

        while (__minux_isspace((unsigned char)*f)) {
            while (__minux_isspace((unsigned char)*f)) f++;
            SKIP_WS_INPUT();
        }
    }
    va_end(ap);
    return assigned;
}



///////////////////////////////////////////////////////////////////////////
// MINUX
///////////////////////////////////////////////////////////////////////////
#elif defined(__MINUX__)

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

using neo-c;

struct dirent {
    uint16_t inum;           // ファイル/ディレクトリの i-node 番号
    char     name[DIRSIZ];   // ファイル名（固定長14バイト、ヌル終端なし）
};

#define T_DIR      1
#define T_FILE     2
#define T_SYMLINK  3

struct stat {
    uint16_t type;  // T_DIR / T_FILE / T_SYMLINK
    uint16_t nlink; // ハードリンク数
    uint32_t size;  // バイト数
    uint32_t inum;  // i-node number
    uint32_t mode;  // パーミッション
    uint16_t uid;   // 所有者
    uint16_t gid;   // グループ
    uint32_t atime; // アクセス
    uint32_t mtime; // 更新
    uint32_t ctime; // 変更
};


enum { SEEK_SET, SEEK_END, SEEK_CUR };

#undef assert
#define assert

typedef long time_t;
typedef long suseconds_t;
struct timeval { time_t tv_sec; suseconds_t tv_usec; };
struct tm { int tm_sec, tm_min, tm_hour, tm_mday, tm_mon, tm_year, tm_wday, tm_yday, tm_isdst; };

typedef struct __minux_FILE {
  int fd;
  int flags;   // 1=readable, 2=writable, 4=append
  long pos;
  int eof;
  int err;
  int have_push;
  unsigned char push_ch;
  // memory stream support (fd < 0 if memory stream)
  int is_mem;
  char **ms_bufp;
  size_t *ms_sizep;
  char *ms_buf;    // internal buffer
  size_t ms_cap;   // capacity of ms_buf
  size_t ms_len;   // valid length
} FILE;

typedef struct {
  size_t gl_pathc;   // count of paths matched
  char **gl_pathv;   // NULL-terminated vector of strings
} glob_t;

#define EOF (-1)

typedef int pid_t;

#define SYS_execve 100
#define SYS_settimeofday 92
#define SYS_utimes 93
#define SYS_umask 94
#define SYS_gettimeofday 95
#define SYS_getuid 96
#define SYS_getgid 97
#define SYS_setuid 98
#define SYS_setgid 99
#define SYS_lseek 192
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define SYS_fstat   210
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
#define SYS_opendir 76
#define SYS_readdir 77
#define SYS_closedir 78
// add cwd-related syscalls
#define SYS_getcwd 79
#define SYS_chdir 80
#define SYS_mkdir 81
#define SYS_rmdir 82
#define SYS_unlink 83
#define SYS_rename 84
#define SYS_link   85
#define SYS_symlink 86
#define SYS_stat    87
#define SYS_readlink 88
#define SYS_lstat   89
#define SYS_chmod   90
#define SYS_chown   91
#define SYS_sleep 102
#define SYS_tcsetpgrp 103
#define SYS_getpid 105
#define SYS_realpath 101
#define SYS_isatty 104

extern int errno;

#define write(fd, buf, len) ({                                       \
    long _ret;                                                       \
    /* 引数を対応レジスタにセット */                                \
    register long _a0 asm("a0") = (long)(fd);                        \
    register long _a1 asm("a1") = (long)(buf);                       \
    register long _a2 asm("a2") = (long)(len);                       \
    register long _a7 asm("a7") = SYS_write;                         \
    /* ecall して戻り値は a0 に */                                  \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                      \
                 : "memory");                                        \
    /* statement-expression の結果として返す */                      \
    _ret = _a0;                                                     \
    _ret;                                                           \
})

#define tcsetpgrp(fildes, pgid_id) ({                                       \
    long _ret;                                                       \
    /* 引数を対応レジスタにセット */                                \
    register long _a0 asm("a0") = (long)(fildes);                    \
    register long _a1 asm("a1") = (long)(pgid_id);                   \
    register long _a7 asm("a7") = SYS_tcsetpgrp;                     \
    /* ecall して戻り値は a0 に */                                  \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a7)                               \
                 : "memory");                                        \
    /* statement-expression の結果として返す */                      \
    _ret = _a0;                                                     \
    _ret;                                                           \
})



#define read(fd, buf, len) ({                                      \
    long _ret;                                                     \
    /* 引数を対応するレジスタにセット */                          \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a1 asm("a1") = (long)(buf);                     \
    register long _a2 asm("a2") = (long)(len);                     \
    register long _a7 asm("a7") = SYS_read;                        \
    /* ecall 実行。戻り値は a0 に返ってくる */                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                     \
                 : "memory");                                       \
    /* a0 をローカル変数に退避して statement‐expression の値に */   \
    _ret = _a0;                                                    \
    _ret;                                                          \
})

#define open(path, flags, mode) ({                              \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(flags);                \
    register long _a2 asm("a2") = (long)(mode);                 \
    register long _a7 asm("a7") = SYS_open;                     \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                    \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                  \
                 : "memory");                                    \
    /* 戻り値は a0 に上がってくる */                             \
    (int)_a0;                                                   \
})

// open(2) flags (subset)
#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
#define O_CREAT  (1<<9)
#define O_TRUNC  (1<<10)
#define O_APPEND (1<<11)

#define close(fd) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                     \
    register long _a7 asm("a7") = SYS_close;                      \
    asm volatile("ecall"                                          \
                 : "+r"(_a0)                                     \
                 : "r"(_a7)                                      \
                 : "memory");                                    \
    (int)_a0;                                                     \
})

// opendir: open a directory and return fd (or -1)
#define opendir(path) ({                                           \
    register long _a0 asm("a0") = (long)(path);                    \
    register long _a7 asm("a7") = SYS_opendir;                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// readdir: fetch up to max_entries dirents; returns number filled, 0 (EOF), or -1
#define readdir(fd, dirents_ptr, max_entries) ({                    \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a1 asm("a1") = (long)(dirents_ptr);             \
    register long _a2 asm("a2") = (long)(max_entries);             \
    register long _a7 asm("a7") = SYS_readdir;                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                    \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// closedir: close directory fd; returns 0 or -1
#define closedir(fd) ({                                             \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a7 asm("a7") = SYS_closedir;                    \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// getcwd: write current directory into user buffer; returns length or -1
#define getcwd_user(buf, size) ({                                    \
    register long _a0 asm("a0") = (long)(buf);                      \
    register long _a1 asm("a1") = (long)(size);                     \
    register long _a7 asm("a7") = SYS_getcwd;                       \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a7)                               \
                 : "memory");                                       \
    (int)_a0;                                                       \
})

// chdir: change current process directory; returns 0 or -1
#define chdir(path) ({                                               \
    register long _a0 asm("a0") = (long)(path);                     \
    register long _a7 asm("a7") = SYS_chdir;                        \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a7)                                         \
                 : "memory");                                       \
    (int)_a0;                                                       \
})

// mkdir: create directory at path; returns 0 or -1
#define mkdir(path, mode) ({                                          \
    register long _a0 asm("a0") = (long)(path);                      \
    register long _a1 asm("a1") = (long)(mode);                      \
    register long _a7 asm("a7") = SYS_mkdir;                         \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a7)                               \
                 : "memory");                                       \
    (int)_a0;                                                        \
})

// rmdir: remove empty directory at path; returns 0 or -1
#define rmdir(path) ({                                                \
    register long _a0 asm("a0") = (long)(path);                      \
    register long _a7 asm("a7") = SYS_rmdir;                         \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a7)                                         \
                 : "memory");                                       \
    (int)_a0;                                                        \
})

// unlink: remove a file (not directory); returns 0 or -1
#define unlink(path) ({                                                \
    register long _a0 asm("a0") = (long)(path);                       \
    register long _a7 asm("a7") = SYS_unlink;                          \
    asm volatile("ecall"                                             \
                 : "+r"(_a0)                                        \
                 : "r"(_a7)                                          \
                 : "memory");                                        \
    (int)_a0;                                                         \
})

// rename: move/rename file or directory
#define rename(oldp,newp) ({                                           \
    register long _a0 asm("a0") = (long)(oldp);                       \
    register long _a1 asm("a1") = (long)(newp);                       \
    register long _a7 asm("a7") = SYS_rename;                          \
    asm volatile("ecall"                                             \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a7)                                 \
                 : "memory");                                        \
    (int)_a0;                                                         \
})

// link: create a hard link newp pointing to oldp
#define link(oldp,newp) ({                                              \
    register long _a0 asm("a0") = (long)(oldp);                        \
    register long _a1 asm("a1") = (long)(newp);                        \
    register long _a7 asm("a7") = SYS_link;                            \
    asm volatile("ecall"                                              \
                 : "+r"(_a0)                                         \
                 : "r"(_a1), "r"(_a7)                                  \
                 : "memory");                                         \
    (int)_a0;                                                          \
})

// symlink: create a symbolic link
#define symlink(target, linkpath) ({                                     \
    register long _a0 asm("a0") = (long)(target);                       \
    register long _a1 asm("a1") = (long)(linkpath);                     \
    register long _a7 asm("a7") = SYS_symlink;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// stat: fill struct stat for path
#define stat(path, stptr) ({                                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(stptr);                         \
    register long _a7 asm("a7") = SYS_stat;                              \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// readlink: read symlink target into buf (no NUL), returns bytes copied
#define readlink(path, buf, size) ({                                     \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(buf);                           \
    register long _a2 asm("a2") = (long)(size);                          \
    register long _a7 asm("a7") = SYS_readlink;                          \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// lstat: like stat but does not follow final symlink
#define lstat(path, stptr) ({                                            \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(stptr);                         \
    register long _a7 asm("a7") = SYS_lstat;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// chmod: change file mode
#define chmod(path, mode) ({                                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(mode);                          \
    register long _a7 asm("a7") = SYS_chmod;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// chown: change ownership
#define chown(path, uid, gid) ({                                         \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(uid);                           \
    register long _a2 asm("a2") = (long)(gid);                           \
    register long _a7 asm("a7") = SYS_chown;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

   
#define execv(path, argv) ({                                    \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(argv);                 \
    register long _a7 asm("a7") = SYS_execv;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

#define execvp(path, argv) ({                                    \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(argv);                 \
    register long _a7 asm("a7") = SYS_execv;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

// execve: exec with environment (envp = array of "KEY=VAL" strings)
#define execve(path, argv, envp) ({                               \
    register long _a0 asm("a0") = (long)(path);                  \
    register long _a1 asm("a1") = (long)(argv);                  \
    register long _a2 asm("a2") = (long)(envp);                  \
    register long _a7 asm("a7") = SYS_execve;                    \
    asm volatile("ecall"                                         \
                 : "+r"(_a0)                                    \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                 \
                 : "memory");                                   \
    (int)_a0;                                                    \
})

#define _exit(status) __extension__ ({  \
    register long _a0 asm("a0") = (long)(status);                 \
    register long _a7 asm("a7") = SYS_exit;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                          \
                 : "memory");                                  \
    while(1); \
}) 

void exit(int status);

#define wait(status_ptr) ({                                    \
    register long _a0 asm("a0") = (long)(status_ptr);          \
    register long _a7 asm("a7") = SYS_wait;                    \
    asm volatile("ecall"                                       \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                 \
    (int)_a0;                                                   \
})


#define dup2(oldfd,newfd) ({                                   \
    register long _a0 asm("a0") = (long)(oldfd);                \
    register long _a1 asm("a1") = (long)(newfd);                \
    register long _a7 asm("a7") = SYS_dup2;                     \
    asm volatile("ecall"                                       \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                 \
    (int)_a0;                                                   \
})


#define pipe(fds) ({                                           \
    register long _a0 asm("a0") = (long)(fds);                 \
    register long _a7 asm("a7") = SYS_pipe;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

// 戻り値を取るバージョン
#define fork()                                        \
    ({                                                    \
        register long _num asm("a7") = SYS_fork;          \
        register long _ret asm("a0");                     \
        asm volatile("ecall"                              \
                     : "=r"(_ret)                         \
                     : "r"(_num)                          \
                     : "memory");                         \
        _ret;                                             \
    })
    
#define clear_proc()                                       \
    ({                                                    \
        register long _num asm("a7") = SYS_clear;         \
        register long _ret asm("a0");                     \
        asm volatile("ecall"                              \
                     : "=r"(_ret)                         \
                     : "r"(_num)                          \
                     : "memory");                         \
        _ret;                                             \
    })
    
#define brk(size) ({                                           \
    register long _a0 asm("a0") = (long)(size);                 \
    register long _a7 asm("a7") = SYS_brk;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                  \
    (int)_a0;                                                   \
})
    
// settimeofday: set base epoch seconds used by FS times
#define settimeofday(sec) ({                                            \
    register long _a0 asm("a0") = (long)(sec);                          \
    register long _a7 asm("a7") = SYS_settimeofday;                     \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// utimes: set atime/mtime; pass 0xFFFFFFFF to set to 'now'
#define utimes(path, atime, mtime) ({                                   \
    register long _a0 asm("a0") = (long)(path);                         \
    register long _a1 asm("a1") = (long)(atime);                        \
    register long _a2 asm("a2") = (long)(mtime);                        \
    register long _a7 asm("a7") = SYS_utimes;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// umask: set new umask, return old
#define umask(newmask) ({                                               \
    register long _a0 asm("a0") = (long)(newmask);                      \
    register long _a7 asm("a7") = SYS_umask;                            \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// gettimeofday: returns epoch seconds
#define gettimeofday() ({                                               \
    register long _a7 asm("a7") = SYS_gettimeofday;                     \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// uid/gid syscalls
#define getuid() ({                                                     \
    register long _a7 asm("a7") = SYS_getuid;                           \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define getgid() ({                                                     \
    register long _a7 asm("a7") = SYS_getgid;                           \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define setuid(uid) ({                                                  \
    register long _a0 asm("a0") = (long)(uid);                          \
    register long _a7 asm("a7") = SYS_setuid;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define setgid(gid) ({                                                  \
    register long _a0 asm("a0") = (long)(gid);                          \
    register long _a7 asm("a7") = SYS_setgid;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})
// realpath: resolve to canonical absolute path; returns 0 on success
#define realpath_user(path, outbuf, outsz) ({                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(outbuf);                        \
    register long _a2 asm("a2") = (long)(outsz);                         \
    register long _a7 asm("a7") = SYS_realpath;                          \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// isatty: return 1 if fd refers to a TTY (stdin/stdout/stderr/tty), else 0
#define isatty(fd) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a7 asm("a7") = SYS_isatty;                      \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})


#define lseek(fd, offset, whence) ({                                 \
    register long _a0 asm("a0") = (long)(fd);                        \
    register long _a1 asm("a1") = (long)(offset);                    \
    register long _a2 asm("a2") = (long)(whence);                    \
    register long _a7 asm("a7") = SYS_lseek;                         \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                      \
                 : "memory");                                        \
    (long)_a0;                                                       \
})
// minux.h 追記

// fstat: fd を stat する
#define fstat(fd, stptr) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                            \
    register long _a1 asm("a1") = (long)(stptr);                         \
    register long _a7 asm("a7") = SYS_fstat;                             \
    asm volatile("ecall"                                                 \
                 : "+r"(_a0)                                             \
                 : "r"(_a1), "r"(_a7)                                    \
                 : "memory");                                            \
    (int)_a0;                                                            \
})

#define getpid() ({                                      \
    long _ret;                                                     \
    /* 引数を対応するレジスタにセット */                          \
    register long _a7 asm("a7") = SYS_getpid;                        \
    /* ecall 実行。戻り値は a0 に返ってくる */                     \
    asm volatile("ecall"                                           \
                 : "=r"(_ret)                         \
                 : "r"(_a7)                     \
                 : "memory");                                       \
    /* a0 をローカル変数に退避して statement‐expression の値に */   \
    _ret;                                                          \
})

//──────────────────────────────────────────
// Minimal curses-like interface for user programs
//──────────────────────────────────────────
typedef struct minux_window {
    int rows;
    int cols;
    int beg_y;
    int beg_x;
    int cur_y;
    int cur_x;
    struct minux_window* parent;
    int is_subwin;
    int is_static;
} WINDOW;

extern WINDOW* stdscr;

enum arg_kind {
    ARG_KIND_LIT = 1,
    ARG_KIND_FILE = 2,
    ARG_KIND_END = 3,
};                                                     
struct arg_hdr {                                       
    enum arg_kind kind;
    const char *shortopts;
    const char *longopts;
    const char *datatype;
    const char *glossary;
    int mincount;
    int maxcount;
};
struct arg_lit {
    struct arg_hdr hdr;
    int count;
};
struct arg_file {
    struct arg_hdr hdr;
    int count;
    const char **filename;
};                                                     
struct arg_error {                                     
    const char *msg;
    const char *argval;
    const struct arg_hdr *hdr;
};               

struct arg_end {
    struct arg_hdr hdr;                                
    int count;                                         
    int maxerrors;                                    
    struct arg_error *errors;
};                  

// Minimal ctype classification table required by newlib-style ctype macros.
// Values mirror newlib's _ctype_ so that isalpha/isdigit macros work without
// pulling in the full libc archive.
uniq const char _ctype_[1 + 256] = {
     0,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32,-120, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 16, 16, 16, 16, 16,
    16, 16, 65, 65, 65, 65, 65, 65,  1,  1,  1,  1,  1,  1,  1,  1,
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 16, 16, 16, 16,
    16, 16, 66, 66, 66, 66, 66, 66,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 16, 16, 16, 16,
    32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0
};

uniq int __append_char(char **p, unsigned long *rem, char c) {
    if (*rem > 1) { **p = c; (*p)++; (*rem)--; return 1; }
    return 0;
}

uniq void __append_str(char **p, unsigned long *rem, const char *s) {
    while (*s && *rem > 1) { **p = *s++; (*p)++; (*rem)--; }
}

uniq int errno;

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

uniq mem_block_t *free_list = NULL;

// POSIX 風 sbrk: 成功で「旧プログラムブレーク」を返す。失敗で (void*)-1, errno=ENOMEM
uniq void *sbrk(ptrdiff_t increment) {
    static uintptr_t cur;      // 現在の program break（ユーザ空間の絶対アドレス）
    static int inited = 0;

    // 初回：カーネルに問い合わせて現在の brk を知る
    if (!inited) {
        long now = brk(0);                // 実装が「クエリとしての brk(0)」でなくても、変更は起きない
        if (now < 0) { errno = 12; return (void*)-1; }  // ENOMEM
        cur = (uintptr_t)now;
        inited = 1;
    }

    if (increment == 0) {
        return (void*)cur;                // 現在の brk を返す
    }

    // オーバーフロー保護
    uintptr_t want = cur + (intptr_t)increment;
    if ((increment > 0 && want < cur) || (increment < 0 && want > cur)) {
        errno = 12;                       // ENOMEM
        return (void*)-1;
    }

    // 要求ブレークへ移動（brk の戻り値仕様に依らず、後で再取得して正規化）
    long rc = brk((long)want);
    if (rc < 0) { 
        errno = 12; 
        return (void*)-1; 
    }

    // 正規化：現在値を改めて読み直す
    long newer = brk(0);
    if (newer < 0) { 
        errno = 12; 
        return (void*)-1; 
    }

    void *old = (void*)cur;   // 旧ブレーク（これを返すのが sbrk の契約）
    cur = (uintptr_t)newer;
    return old;
}

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

uniq void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
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

uniq void *realloc(void *ptr, size_t size) {
    if (ptr == 0) return malloc(size);
    if (size == 0) { free(ptr); return 0; }

    // Old block header sits just before the user pointer
    mem_block_t *oldb = (mem_block_t*)ptr - 1;
    size_t old_total = oldb->size;
    size_t old_payload = (old_total > sizeof(mem_block_t)) ? (old_total - sizeof(mem_block_t)) : 0;

    void *np = malloc(size);
    if (!np) return 0;
    size_t tocopy = old_payload < size ? old_payload : size;
    memcpy(np, ptr, tocopy);
    free(ptr);
    return np;
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

uniq void* memchr(const void* s, int c, size_t n) {
    const unsigned char* p = (const unsigned char*)s;
    unsigned char target = (unsigned char)c;
    while (n--) {
        if (*p == target) {
            return (void*)p;
        }
        p++;
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

uniq char* strcpy(char* dest, const char* src) {
    char* d = dest;
    while ((*d++ = *src++) != '\0')
        ;
    return dest;
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
uniq char* strchr(const char* s, int c) {
    while (*s) {
        if (*s == (char)c) return (char*)s;
        s++;
    }
    return (c == 0) ? (char*)s : 0;
}

uniq char* strrchr(const char* s, int c) {
    const char* last = 0;
    do {
        if (*s == (char)c) last = s;
    } while (*s++);
    return (char*)last;
}

uniq char* strndup(const char* s, size_t n) {
    size_t len = 0;
    while (len < n && s[len]) len++;
    char* p = (char*)malloc(len + 1);
    if (!p) return 0;
    for (size_t i = 0; i < len; i++) p[i] = s[i];
    p[len] = '\0';
    return p;
}

uniq int mkstemp(char* template) {
    static unsigned long seed = 0x1234abcd;
    if (!template) return -1;
    int len = strlen(template);
    if (len < 6) return -1;
    char* x = template + len - 6;
    for (int i=0; i<6; i++) if (x[i] != 'X') return -1;

    const char* cs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    const int csn = 62;

    for (int attempt = 0; attempt < 256; attempt++) {
        // simple LCG to vary names
        seed = seed * 1664525u + 1013904223u;
        unsigned long v = seed;
        for (int i=0; i<6; i++) { x[i] = cs[(v + i*13) % csn]; }

        // if exists, try another
        struct stat st;
        if (stat(template, &st) == 0) continue;

        int fd = open(template, O_CREAT|O_RDWR, 0600);
        if (fd >= 0) return fd;
    }
    // give up; leave last tried name in place
    return -1;
}

// ───────────────────────────────────────────
// Minimal glob: only handles patterns without meta; otherwise returns 0 matches
// This is sufficient for rvcc -S path since it doesn't rely on globbed libs.
uniq int __has_meta(const char* s) {
    for (; *s; s++) if (*s=='*' || *s=='?' ) return 1; return 0;
}

uniq int __match_wild(const char* pat, const char* s) {
    // supports '*' and '?'
    if (*pat == '\0') return *s == '\0';
    if (*pat == '*') {
        while (*pat == '*') pat++;
        if (*pat == '\0') return 1; // trailing * matches all
        while (*s) { if (__match_wild(pat, s)) return 1; s++; }
        return 0;
    }
    if (*pat == '?') { return *s ? __match_wild(pat+1, s+1) : 0; }
    return (*pat == *s) ? __match_wild(pat+1, s+1) : 0;
}

uniq char* __join_path(const char* dir, const char* name) {
    int need_slash = 1;
    size_t dl = strlen(dir);
    if (dl > 0 && dir[dl-1] == '/') need_slash = 0;
    size_t nl = strlen(name);
    size_t tot = dl + (need_slash?1:0) + nl + 1;
    char* p = (char*)malloc(tot);
    if (!p) return 0;
    size_t i=0; for(size_t k=0;k<dl;k++) p[i++]=dir[k];
    if (need_slash) p[i++] = '/';
    for(size_t k=0;k<nl;k++) p[i++]=name[k];
    p[i]='\0';
    return p;
}

uniq int glob(const char* pattern, int flags, void* errfunc, glob_t* pglob) {
    (void)flags; (void)errfunc;
    if (!pglob) return -1;
    pglob->gl_pathc = 0;
    pglob->gl_pathv = 0;

    // split into dir and base pattern
    char dirbuf[256];
    const char* slash = strrchr(pattern, '/');
    const char* base = pattern;
    if (slash) {
        size_t dl = (size_t)(slash - pattern);
        if (dl >= sizeof(dirbuf)) dl = sizeof(dirbuf)-1;
        for (size_t i=0;i<dl;i++) dirbuf[i] = pattern[i];
        dirbuf[dl] = '\0';
        if (dl == 0) { dirbuf[0] = '/'; dirbuf[1] = '\0'; }
        base = slash + 1;
        if (*base == '\0') base = "*"; // pattern ended with '/'
    } else {
        // no dir component
        dirbuf[0] = '.'; dirbuf[1] = '\0';
        base = pattern;
    }

    // no meta: literal path
    if (!__has_meta(base)) {
        struct stat st;
        char* full = __join_path(dirbuf, base);
        if (!full) return -1;
        if (stat(full, &st) == 0) {
            char** v = (char**)malloc(sizeof(char*) * 2);
            if (!v) { free(full); return -1; }
            v[0] = full; v[1] = 0; pglob->gl_pathv = v; pglob->gl_pathc = 1; return 0;
        }
        free(full);
        return 0;
    }

    // wildcard: scan directory
    int dfd = opendir(dirbuf);
    if (dfd < 0) return 0;

    size_t cap = 8; size_t cnt = 0;
    char** vec = (char**)malloc(sizeof(char*) * cap);
    if (!vec) { closedir(dfd); return -1; }

    // read chunks
    for (;;) {
        struct dirent ents[16];
        int n = readdir(dfd, ents, 16);
        if (n < 0) { // error
            break;
        }
        if (n == 0) break; // EOF
        for (int i=0;i<n;i++) {
            char namebuf[DIRSIZ+1];
            for (int k=0;k<DIRSIZ;k++) namebuf[k] = ents[i].name[k];
            namebuf[DIRSIZ] = '\0';
            // trim trailing NULs (already NUL padded)
            // skip empty entries
            if (namebuf[0] == '\0') continue;
            // skip . and ..
            if ((namebuf[0]=='.' && namebuf[1]=='\0') || (namebuf[0]=='.' && namebuf[1]=='.' && namebuf[2]=='\0')) continue;
            if (!__match_wild(base, namebuf)) continue;
            char* full = __join_path(dirbuf, namebuf);
            if (!full) { continue; }
            if (cnt + 2 > cap) { size_t ncap = cap*2; char** nv = (char**)realloc(vec, sizeof(char*)*ncap); if (!nv) { free(full); continue; } vec = nv; cap = ncap; }
            vec[cnt++] = full;
        }
    }
    closedir(dfd);
    if (cnt == 0) { free(vec); return 0; }
    vec[cnt] = 0;
    pglob->gl_pathv = vec; pglob->gl_pathc = cnt;
    return 0;
}

uniq void globfree(glob_t* pglob) {
    if (!pglob || !pglob->gl_pathv) return;
    for (size_t i=0; pglob->gl_pathv[i]; i++) free(pglob->gl_pathv[i]);
    free(pglob->gl_pathv);
    pglob->gl_pathv = 0;
    pglob->gl_pathc = 0;
}

// ───────────────────────────────────────────
// Minimal argtable2-compatible implementation

uniq size_t arg_file_capacity(const struct arg_file *file) {
    int maxc = file->hdr.maxcount;
    return (maxc > 0) ? (size_t)maxc : 1u;
}

uniq void arg_lit_reset(struct arg_lit *lit) {
    if (lit) lit->count = 0;
}

uniq void arg_file_reset(struct arg_file *file) {
    if (!file) return;
    file->count = 0;
    size_t cap = arg_file_capacity(file);
    for (size_t i = 0; i < cap; ++i) {
        file->filename[i] = "";
    }
}

uniq void arg_end_reset(struct arg_end *end) {
    if (!end) return;
    end->count = 0;
    if (!end->errors) return;
    for (int i = 0; i < end->maxerrors; ++i) {
        end->errors[i].msg = NULL;
        end->errors[i].argval = NULL;
        end->errors[i].hdr = NULL;
    }
}

uniq void arg_add_error(struct arg_end *end, const char *msg,
                          const char *arg, const struct arg_hdr *hdr) {
    if (!end || end->maxerrors <= 0) return;
    if (end->count >= end->maxerrors) return;
    end->errors[end->count].msg = msg;
    end->errors[end->count].argval = arg;
    end->errors[end->count].hdr = hdr;
    end->count++;
}

uniq int arg_has_capacity(int count, int maxcount) {
    return (maxcount <= 0) || (count < maxcount);
}

uniq struct arg_lit *arg_litn(const char *shortopts, const char *longopts,
                         int mincount, int maxcount, const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_lit *lit = (struct arg_lit *)malloc(sizeof(*lit));
    if (!lit) return NULL;
    lit->hdr.kind = ARG_KIND_LIT;
    lit->hdr.shortopts = shortopts;
    lit->hdr.longopts = longopts;
    lit->hdr.datatype = NULL;
    lit->hdr.glossary = glossary;
    lit->hdr.mincount = mincount;
    lit->hdr.maxcount = maxcount;
    lit->count = 0;
    return lit;
}

uniq struct arg_file *arg_filen(const char *shortopts, const char *longopts,
                           const char *datatype, int mincount, int maxcount,
                           const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_file *file = (struct arg_file *)malloc(sizeof(*file));
    if (!file) return NULL;
    size_t cap = (maxcount > 0) ? (size_t)maxcount : 1u;
    file->filename = (const char **)malloc(sizeof(char *) * cap);
    if (!file->filename) {
        free(file);
        return NULL;
    }
    file->hdr.kind = ARG_KIND_FILE;
    file->hdr.shortopts = shortopts;
    file->hdr.longopts = longopts;
    file->hdr.datatype = datatype;
    file->hdr.glossary = glossary;
    file->hdr.mincount = mincount;
    file->hdr.maxcount = maxcount;
    file->count = 0;
    for (size_t i = 0; i < cap; ++i) file->filename[i] = "";
    return file;
}

uniq struct arg_end *arg_end(int maxerrors) {
    if (maxerrors < 0) return NULL;
    struct arg_end *end = (struct arg_end *)malloc(sizeof(*end));
    if (!end) return NULL;
    end->hdr.kind = ARG_KIND_END;
    end->hdr.shortopts = NULL;
    end->hdr.longopts = NULL;
    end->hdr.datatype = NULL;
    end->hdr.glossary = NULL;
    end->hdr.mincount = 0;
    end->hdr.maxcount = 0;
    end->maxerrors = maxerrors;
    end->errors = NULL;
    if (maxerrors > 0) {
        end->errors = (struct arg_error *)malloc(sizeof(struct arg_error) * (size_t)maxerrors);
        if (!end->errors) {
            free(end);
            return NULL;
        }
    }
    arg_end_reset(end);
    return end;
}

uniq int argtable_reset(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_LIT) {
            arg_lit_reset((struct arg_lit *)hdr);
        } else if (hdr->kind == ARG_KIND_FILE) {
            arg_file_reset((struct arg_file *)hdr);
        } else if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

uniq int argtable_entries(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

uniq int arg_long_match(const char *options, const char *name) {
    if (!options || !name) return 0;
    size_t namelen = strlen(name);
    const char *p = options;
    while (*p) {
        const char *start = p;
        while (*p && *p != ',' && *p != '|') p++;
        size_t len = (size_t)(p - start);
        if (len == namelen && strncmp(start, name, namelen) == 0) return 1;
        if (*p) p++;
    }
    return 0;
}

uniq struct arg_hdr *arg_find_short(void **argtable, int entries, char opt) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        const char *s = hdr->shortopts;
        while (s && *s) {
            if (*s++ == opt) return hdr;
        }
    }
    return NULL;
}

uniq struct arg_hdr *arg_find_long(void **argtable, int entries, const char *name) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if (arg_long_match(hdr->longopts, name)) return hdr;
    }
    return NULL;
}

uniq struct arg_file *arg_find_positional(void **argtable, int entries) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind != ARG_KIND_FILE) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            continue;
        }
        struct arg_file *file = (struct arg_file *)hdr;
        size_t cap = arg_file_capacity(file);
        if ((size_t)file->count < cap) return file;
    }
    return NULL;
}

uniq int arg_file_add(struct arg_file *file, const char *value,
                        struct arg_end *end, const char *errmsg) {
    if (!file) return -1;
    size_t cap = arg_file_capacity(file);
    if ((size_t)file->count >= cap && cap > 0) {
        arg_add_error(end, errmsg, value, &file->hdr);
        return -1;
    }
    file->filename[file->count] = value ? value : "";
    file->count++;
    return 0;
}

uniq int arg_parse(int argc, char **argv, void **argtable) {
    if (!argtable) return 0;

    struct arg_end *end = NULL;
    int total = argtable_reset(argtable, &end);
    if (!end) return 0;

    int entries = 0;
    while (entries < total && argtable[entries]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[entries];
        if (hdr->kind == ARG_KIND_END) break;
        entries++;
    }

    int errors_before = end->count;
    int stop_opts = 0;

    for (int i = 1; i < argc; ++i) {
        char *arg = argv[i];
        if (!stop_opts && arg[0] == '-' && arg[1] != '\0') {
            if (arg[1] == '-' && arg[2] == '\0') {
                stop_opts = 1;
                continue;
            }

            if (arg[1] == '-') {
                const char *name = arg + 2;
                const char *val = NULL;
                const char *eq = strchr(name, '=');
                char namebuf[64];
                if (eq) {
                    size_t len = (size_t)(eq - name);
                    if (len >= sizeof(namebuf)) len = sizeof(namebuf) - 1;
                    for (size_t k = 0; k < len; ++k) namebuf[k] = name[k];
                    namebuf[len] = '\0';
                    name = namebuf;
                    val = eq + 1;
                }
                struct arg_hdr *hdr = arg_find_long(argtable, entries, name);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    if (val && *val) {
                        arg_add_error(end, "option does not take a value", arg, hdr);
                        continue;
                    }
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", arg, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    if (!val) {
                        if (i + 1 < argc) {
                            val = argv[++i];
                        } else {
                            arg_add_error(end, "option requires a value", arg, hdr);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file *)hdr, val, end,
                                  "option specified too many times");
                    continue;
                }
                arg_add_error(end, "unsupported option", arg, hdr);
                continue;
            }

            const char *p = arg + 1;
            while (*p) {
                char opt = *p++;
                struct arg_hdr *hdr = arg_find_short(argtable, entries, opt);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", NULL, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    const char *val = NULL;
                    if (*p) {
                        val = p;
                        p += strlen(p);
                    } else if (i + 1 < argc) {
                        val = argv[++i];
                    } else {
                        arg_add_error(end, "option requires a value", arg, hdr);
                        break;
                    }
                    arg_file_add((struct arg_file *)hdr, val, end,
                                  "option specified too many times");
                    break;
                }
            }
            continue;
        }

        struct arg_file *file = arg_find_positional(argtable, entries);
        if (!file) {
            arg_add_error(end, "unexpected argument", arg, NULL);
            continue;
        }
        arg_file_add(file, arg, end, "too many positional arguments");
    }

    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;

        int count = 0;
        if (hdr->kind == ARG_KIND_LIT) {
            count = ((struct arg_lit *)hdr)->count;
        } else if (hdr->kind == ARG_KIND_FILE) {
            count = ((struct arg_file *)hdr)->count;
        }

        if (hdr->mincount > 0 && count < hdr->mincount) {
            if ((hdr->shortopts && hdr->shortopts[0]) ||
                (hdr->longopts && hdr->longopts[0])) {
                arg_add_error(end, "missing required option", hdr->longopts ? hdr->longopts : hdr->shortopts, hdr);
            } else {
                arg_add_error(end, "missing required argument", hdr->datatype, hdr);
            }
        }
    }

    (void)errors_before;
    return end->count;
}

uniq void arg_print_joined_option(char *buf, size_t bufsz,
                                    const struct arg_hdr *hdr) {
    size_t pos = 0;
    if (!bufsz) return;
    buf[0] = '\0';
    if (hdr->shortopts && hdr->shortopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "-%c", hdr->shortopts[0]);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
        if (hdr->longopts && hdr->longopts[0] && pos + 2 < bufsz) {
            wrote = snprintf(buf + pos, bufsz - pos, ", ");
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
    if (hdr->longopts && hdr->longopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "--%s", hdr->longopts);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
    }
    if ((hdr->shortopts && hdr->shortopts[0]) ||
        (hdr->longopts && hdr->longopts[0])) {
        if (hdr->datatype && hdr->datatype[0] && pos + 1 < bufsz) {
            int wrote = snprintf(buf + pos, bufsz - pos, " %s", hdr->datatype);
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
}

uniq void arg_print_syntax(struct __minux_FILE *fp, void **argtable,
                      const char *suffix) {
    if (!fp || !argtable) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            fprintf(fp, " [");
            if (hdr->shortopts && hdr->shortopts[0]) {
                fprintf(fp, "-%c", hdr->shortopts[0]);
                if (hdr->longopts && hdr->longopts[0]) fprintf(fp, "|");
            }
            if (hdr->longopts && hdr->longopts[0]) {
                fprintf(fp, "--%s", hdr->longopts);
            }
            if (hdr->kind == ARG_KIND_FILE && hdr->datatype && hdr->datatype[0]) {
                fprintf(fp, " %s", hdr->datatype);
            }
            fprintf(fp, "]");
        } else {
            const char *dt = hdr->datatype ? hdr->datatype : "<value>";
            int mandatory = (hdr->mincount > 0) ? hdr->mincount : 0;
            for (int k = 0; k < mandatory; ++k) fprintf(fp, " %s", dt);
            if (hdr->maxcount == 0 || hdr->maxcount > mandatory) {
                fprintf(fp, " [%s]", dt);
            }
        }
    }
    if (suffix) fprintf(fp, "%s", suffix);
}

uniq void arg_print_glossary(struct __minux_FILE *fp, void **argtable,
                        const char *format) {
    if (!fp || !argtable || !format) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    char optbuf[64];
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        optbuf[0] = '\0';
        arg_print_joined_option(optbuf, sizeof(optbuf), hdr);
        const char *gloss = hdr->glossary ? hdr->glossary : "";
        fprintf(fp, format, optbuf, gloss);
    }
}

uniq void arg_print_errors(struct __minux_FILE *fp, struct arg_end *end,
                      const char *progname) {
    if (!fp || !end) return;
    const char *prog = progname ? progname : "";
    for (int i = 0; i < end->count; ++i) {
        const struct arg_error *err = &end->errors[i];
        const char *msg = err->msg ? err->msg : "parse error";
        if (err->argval && err->argval[0]) {
            fprintf(fp, "%s: %s -- %s\n", prog, msg, err->argval);
        } else if (err->hdr && err->hdr->datatype &&
                   strcmp(msg, "missing required argument") == 0) {
            fprintf(fp, "%s: %s %s\n", prog, msg, err->hdr->datatype);
        } else if (err->hdr && err->hdr->longopts && err->hdr->longopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            fprintf(fp, "%s: %s --%s\n", prog, msg, err->hdr->longopts);
        } else if (err->hdr && err->hdr->shortopts && err->hdr->shortopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            fprintf(fp, "%s: %s -%c\n", prog, msg, err->hdr->shortopts[0]);
        } else {
            fprintf(fp, "%s: %s\n", prog, msg);
        }
    }
}

uniq void arg_freetable(void **argtable, size_t n) {
    if (!argtable) return;
    for (size_t i = 0; i < n; ++i) {
        if (!argtable[i]) continue;
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (hdr->kind == ARG_KIND_FILE) {
            struct arg_file *file = (struct arg_file *)hdr;
            free((void *)file->filename);
        } else if (hdr->kind == ARG_KIND_END) {
            struct arg_end *end = (struct arg_end *)hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i] = NULL;
    }
}

uniq int isprint(int c) {
    // Printable ASCII: space (0x20) to tilde (0x7E)
    return (c >= 0x20 && c <= 0x7e) ? 1 : 0;
}

uniq int isspace(int c) {
    return (c == ' '  || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f') ? 1 : 0;
}

uniq int isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}

uniq int isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

uniq int isalnum(int c) {
    return (isalpha(c) || isdigit(c)) ? 1 : 0;
}

uniq void putchar(char c)
{
    write(1, &c, 1);
}

uniq void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

uniq char* strcat(char* dest, const char* src) {
    char* d = dest;
    while (*d) d++;
    while ((*d++ = *src++) != '\0')
        ;
    return dest;
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

uniq int __utoa_ull(char* dst, unsigned long long v, int base, int lower){
  static const char L[]="0123456789abcdef";
  static const char U[]="0123456789ABCDEF";
  const char* D = lower ? L : U;
  char tmp[32]; int i=0;
  if (base<2 || base>16){ dst[0]='0'; dst[1]=0; return 1; }
  if (v==0){ dst[0]='0'; dst[1]=0; return 1; }
  while (v){ tmp[i++] = D[v % (unsigned)base]; v /= (unsigned)base; }
  int n=i, j=0; while (i--) dst[j++]=tmp[i]; dst[j]=0; return n;
}

uniq void __fmt_num(char **p, unsigned long *rem,
                      unsigned long long v, int base,
                      int is_signed, int neg, int width, char pad, int lower) {
    char num[64]; int n = __utoa_ull(num, v, base, lower);
    int total = n + (neg?1:0);
    while (total < width) { __append_char(p, rem, pad); total++; }
    if (neg) __append_char(p, rem, '-');
    __append_str(p, rem, num);
}

// ========= 共通フォーマッタ =========
typedef struct {
  // FILE* 向け出力 or バッファ向け出力の両方に使える汎用 putc
  void (*putc_fn)(void* ctx, char c);
  void* ctx;
  int count;
} __fmt_out_t;

uniq void __fmt_putc(__fmt_out_t* o, char c) {
  o->putc_fn(o->ctx, c);
  o->count++;
}

uniq int __is_digit(char c){ return c>='0' && c<='9'; }

uniq void __emit_pad(__fmt_out_t* o, char pad, int n){
  while (n-- > 0) __fmt_putc(o, pad);
}

uniq void __emit_num(__fmt_out_t* o, unsigned long long v,
                       int base, int is_signed, int neg,
                       int width, char pad, int lower, int left) {
  char buf[64];
  int n = __utoa_ull(buf, v, base, lower);
  int total = n + (neg ? 1 : 0);

  if (!left) {
    __emit_pad(o, pad, (width>total)?(width-total):0);
  }
  if (neg) __fmt_putc(o, '-');
  for (int i=0;i<n;i++) __fmt_putc(o, buf[i]);
  if (left) {
    __emit_pad(o, ' ', (width>total)?(width-total):0); // 左寄せは空白で後ろ詰め
  }
}

// 中核フォーマッタ：__vformat の中
uniq void __vformat(__fmt_out_t* o, const char* fmt, va_list ap) {
  while (*fmt) {
    if (*fmt != '%'){ __fmt_putc(o, *fmt++); continue; }
    fmt++; // skip '%'

    // ---- flags ----
    char pad = ' ';
    int left = 0;
    int parsing_flags = 1;
    while (parsing_flags) {
      if (*fmt == '0') { pad = '0'; fmt++; }
      else if (*fmt == '-') { left = 1; pad = ' '; fmt++; } // '-' 優先、ゼロ詰め無効化
      else parsing_flags = 0;
    }

    // ---- width ----
    int width = 0;
    while (*fmt >= '0' && *fmt <= '9') { width = width*10 + (*fmt - '0'); fmt++; }

    // ---- length: l / ll ----
    int lcount = 0;
    while (*fmt == 'l'){ lcount++; fmt++; }

    // ---- conversion ----
    char c = *fmt ? *fmt++ : '\0';
    switch (c){
      case 'd': {
        long long sv;
        if (lcount >= 2)      sv = va_arg(ap, long long);
        else if (lcount == 1) sv = va_arg(ap, long);
        else                  sv = va_arg(ap, int);
        int neg = (sv < 0);
        unsigned long long uv = neg ? (unsigned long long)(-sv) : (unsigned long long)sv;
        __emit_num(o, uv, 10, 1, neg, width, pad, 1, left);
        break;
      }
      case 'u': case 'x': {
        int base = (c=='x')?16:10;
        unsigned long long uv;
        if (lcount >= 2)      uv = va_arg(ap, unsigned long long);
        else if (lcount == 1) uv = va_arg(ap, unsigned long);
        else                  uv = (unsigned int)va_arg(ap, unsigned int);
        __emit_num(o, uv, base, 0, 0, width, pad, 1, left);
        break;
      }
      case 'p': {
        unsigned long long uv = (unsigned long long)(uintptr_t)va_arg(ap, void*);
        // 0x は常に先頭、幅は「0x を除いた部分」に適用。左寄せも考慮。
        if (!left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen; // "0x" + hex
          __emit_pad(o, pad, (width>total)?(width-total):0);
        }
        __fmt_putc(o,'0'); __fmt_putc(o,'x');
        __emit_num(o, uv, 16, 0, 0, 0, ' ', 1, 0); // 中身は幅0で直出し
        if (left) {
          int hexlen = 0; { char tmp[64]; hexlen = __utoa_ull(tmp, uv, 16, 1); }
          int total = 2 + hexlen;
          __emit_pad(o, ' ', (width>total)?(width-total):0);
        }
        break;
      }
      case 'c': {
        char ch = (char)va_arg(ap, int);
        if (!left) __emit_pad(o, pad, (width>1)?(width-1):0);
        __fmt_putc(o, ch);
        if (left) __emit_pad(o, ' ', (width>1)?(width-1):0);
        break;
      }
      case 's': {
        const char* s = va_arg(ap, const char*);
        if (!s) s="(null)";
        int len=0; for(const char* t=s; *t; ++t) len++;
        if (!left) __emit_pad(o, pad, (width>len)?(width-len):0);
        while (*s) __fmt_putc(o, *s++);
        if (left) __emit_pad(o, ' ', (width>len)?(width-len):0);
        break;
      }
      case '%': __fmt_putc(o,'%'); break;
      default:
        // 未知指定子は素通し
        __fmt_putc(o,'%');
        if (c) __fmt_putc(o,c);
        break;
    }
  }
}

// ========= FILE* 系 =========
uniq void __file_putc(void* ctx, char ch){
  FILE* fp = (FILE*)ctx;
  fputc((unsigned char)ch, fp);
}

uniq int vfprintf(FILE* fp, const char* fmt, va_list ap){
  __fmt_out_t out = { __file_putc, fp, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&out, fmt, aq);
  va_end(aq);
  return out.count;
}

uniq int fprintf(FILE* fp, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vfprintf(fp, fmt, ap);
  va_end(ap);
  return r;
}

uniq int vprintf(const char* fmt, va_list ap){
  return vfprintf(stdout, fmt, ap);
}

uniq int printf(const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  __fmt_out_t out = { __file_putc, stdout, 0 };
  __vformat(&out, fmt, ap);
  va_end(ap);
  return out.count;
}

// ========= バッファ系（snprintf, vsnprintf） =========
typedef struct {
  char* p; unsigned long rem;
} __buf_ctx_t;

uniq void __buf_putc(void* ctx, char ch){
  __buf_ctx_t* b = (__buf_ctx_t*)ctx;
  if (b->rem > 1){ *(b->p)++ = ch; b->rem--; }
}

typedef struct {
  char* p;
} __str_ctx_t;

uniq void __str_putc(void* ctx, char ch){
  __str_ctx_t* s = (__str_ctx_t*)ctx;
  *(s->p)++ = ch;
}

uniq int vsnprintf(char* out, unsigned long out_size, const char* fmt, va_list ap){
  if (!out || out_size==0) return 0;
  __buf_ctx_t b = { out, out_size };
  __fmt_out_t o = { __buf_putc, &b, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&o, fmt, aq);
  va_end(aq);
  // NUL 終端
  if (b.rem > 0) *(b.p) = '\0';
  else out[out_size-1] = '\0';
  return o.count;
}

uniq int snprintf(char* out, unsigned long out_size, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vsnprintf(out, out_size, fmt, ap);
  va_end(ap);
  return r;
}

uniq int vsprintf(char* out, const char* fmt, va_list ap){
  if (!out) return -1;
  __str_ctx_t s = { out };
  __fmt_out_t o = { __str_putc, &s, 0 };
  va_list aq; va_copy(aq, ap);
  __vformat(&o, fmt, aq);
  va_end(aq);
  *(s.p) = '\0';
  return o.count;
}

uniq int sprintf(char* out, const char* fmt, ...){
  va_list ap; va_start(ap, fmt);
  int r = vsprintf(out, fmt, ap);
  va_end(ap);
  return r;
}

// ───────────────────────────────────────────
// Minimal stdio (FILE, fopen/fclose/fseek, vfprintf/fprintf, fscanf)
// ───────────────────────────────────────────

uniq FILE __stdin  = { .fd = 0, .flags = 1, .pos = 0 };
uniq FILE __stdout = { .fd = 1, .flags = 2, .pos = 0 };
uniq FILE __stderr = { .fd = 2, .flags = 2, .pos = 0 };
uniq FILE* stdin  = &__stdin;
uniq FILE* stdout = &__stdout;
uniq FILE* stderr = &__stderr;

// atexit registry
uniq void (*__atexit_funcs[32])(void);
uniq int __atexit_count = 0;

uniq int atexit(void (*func)(void)) {
  if (__atexit_count >= (int)(sizeof(__atexit_funcs)/sizeof(__atexit_funcs[0])))
    return -1;
  __atexit_funcs[__atexit_count++] = func;
  return 0;
}

uniq void __run_atexit(void) {
  for (int i = __atexit_count - 1; i >= 0; i--) {
    if (__atexit_funcs[i]) __atexit_funcs[i]();
  }
}

uniq int __minux_exit(int status) {
  __run_atexit();
  // perform SYS_exit
  register long _a0 asm("a0") = (long)status;
  register long _a7 asm("a7") = SYS_exit;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
  while (1) { }
}

uniq int __parse_mode(const char* mode) {
  int flags = 0;
  if (!mode || !mode[0]) return -1;
  int rd = 0, wr = 0, app = 0, plus = 0, creat = 0, trunc = 0;
  switch (mode[0]) {
    case 'r': rd = 1; break;
    case 'w': wr = 1; creat = 1; trunc = 1; break;
    case 'a': wr = 1; creat = 1; app = 1; break;
    default: return -1;
  }
  for (const char* p = mode+1; *p; p++) {
    if (*p == '+') plus = 1;
    // ignore 'b'
  }
  int oflags = 0;
  if (rd && !wr && !plus) oflags = O_RDONLY;
  if (wr && !plus && !rd) oflags = O_WRONLY;
  if (plus) oflags = O_RDWR;
  if (creat) oflags |= O_CREAT;
  if (trunc) oflags |= O_TRUNC;
  if (app)   oflags |= O_APPEND;
  return oflags;
}

uniq FILE* fopen(const char* path, const char* mode) {
  int oflags = __parse_mode(mode);
  if (oflags < 0) return 0;
  int fd = open(path, oflags, 0644);
  if (fd < 0) return 0;
  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) { close(fd); return 0; }
  fp->fd = fd;
  fp->flags = ((oflags & O_RDONLY) ? 1:0) | ((oflags & (O_WRONLY|O_RDWR)) ? 2:0) | ((oflags & O_APPEND)?4:0);
  fp->pos = 0; fp->eof = 0; fp->err = 0; fp->have_push = 0; fp->push_ch = 0;
  fp->is_mem = 0; fp->ms_bufp = 0; fp->ms_sizep = 0; fp->ms_buf = 0; fp->ms_cap = 0; fp->ms_len = 0;
  return fp;
}

uniq int fclose(FILE* fp) {
  if (!fp) return -1;
  int rc = 0;
  if (fp->is_mem) {
    // finalize buffer: ensure NUL and publish pointers
    if (fp->ms_buf) {
      if (fp->ms_cap == fp->ms_len) {
        char *nb = (char*)realloc(fp->ms_buf, fp->ms_len + 1);
        if (nb) { fp->ms_buf = nb; fp->ms_cap = fp->ms_len + 1; }
      }
      fp->ms_buf[fp->ms_len] = '\0';
      if (fp->ms_bufp) *fp->ms_bufp = fp->ms_buf; else free(fp->ms_buf);
      if (fp->ms_sizep) *fp->ms_sizep = fp->ms_len;
    }
    free(fp);
    return 0;
  }
  if (fp != stdin && fp != stdout && fp != stderr) {
    rc = close(fp->fd);
    free(fp);
  }
  return rc;
}

uniq FILE* tmpfile(void) {
  char templ[] = "minuxXXXXXX";
  int fd = mkstemp(templ);
  if (fd < 0) {
    return 0;
  }
  unlink(templ);

  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) {
    close(fd);
    return 0;
  }
  fp->fd = fd;
  fp->flags = 1 | 2;
  fp->pos = 0;
  fp->eof = 0;
  fp->err = 0;
  fp->have_push = 0;
  fp->push_ch = 0;
  fp->is_mem = 0;
  fp->ms_bufp = 0;
  fp->ms_sizep = 0;
  fp->ms_buf = 0;
  fp->ms_cap = 0;
  fp->ms_len = 0;
  return fp;
}

uniq int fseek(FILE* fp, long offset, int whence) {
  if (!fp) return -1;
  long r = lseek(fp->fd, offset, whence);
  if (r < 0) { fp->err = 1; return -1; }
  fp->pos = r; fp->eof = 0; fp->have_push = 0;
  return 0;
}

uniq long ftell(FILE* fp) {
  if (!fp) return -1;
  if (fp->is_mem) {
    return fp->pos;
  }
  long r = lseek(fp->fd, 0, SEEK_CUR);
  if (r < 0) {
    fp->err = 1;
    return -1;
  }
  fp->pos = r;
  return r;
}

uniq void rewind(FILE* fp) {
  if (!fp) {
      return;
  }
  fp->eof = 0;
  fp->have_push = 0;
  if (fp->is_mem) {
    fp->pos = 0;
    fp->err = 0;
    return;
  }
  long r = lseek(fp->fd, 0, SEEK_SET);
  if (r < 0) {
    fp->err = 1;
    return;
  }
  fp->pos = r;
  fp->err = 0;
}

uniq int fgetc(FILE* fp) {
  if (!fp) return EOF;
  if (fp->have_push) { fp->have_push = 0; return fp->push_ch; }
  unsigned char ch;
  long n = read(fp->fd, &ch, 1);
  if (n == 1) { fp->pos++; return ch; }
  if (n == 0) { fp->eof = 1; return EOF; }
  fp->err = 1; return EOF;
}

uniq char* fgets(char* s, int size, FILE* fp) {
  if (!fp || !s || size <= 0)
    return NULL;

  int idx = 0;
  while (idx < size - 1) {
    int c = fgetc(fp);
    if (c == EOF) {
      if (idx == 0)
        return NULL;
      break;
    }
    s[idx++] = (char)c;
    if (c == '\n')
      break;
  }
  s[idx] = '\0';
  return s;
}

#define RL_HISTORY_MAX 32
uniq char* rl_history[RL_HISTORY_MAX];
uniq size_t rl_history_len = 0;

uniq void rl_history_add(const char* line) {
  if (!line || !*line) {
    return;
  }
  if (rl_history_len > 0 && strcmp(rl_history[rl_history_len - 1], line) == 0) {
    return;
  }
  char* copy = strdup(line);
  if (!copy) {
    return;
  }
  if (rl_history_len == RL_HISTORY_MAX) {
    free(rl_history[0]);
    for (size_t i = 1; i < RL_HISTORY_MAX; ++i) {
      rl_history[i - 1] = rl_history[i];
    }
    rl_history_len = RL_HISTORY_MAX - 1;
  }
  rl_history[rl_history_len++] = copy;
}

uniq char* readline_simple(const char* prompt) {
  if (prompt) {
    fputs(prompt, stdout);
    fflush(stdout);
  }

  size_t cap = 64;
  char* buf = (char*)malloc(cap);
  if (!buf) {
    return NULL;
  }

  size_t len = 0;
  while (1) {
    int ch = fgetc(stdin);
    if (ch == EOF) {
      if (len == 0) {
        free(buf);
        return NULL;
      }
      break;
    }

    if (ch == '\r') {
      ch = '\n';
    }

    if (ch == '\n') {
      break;
    }

    if (len + 1 >= cap) {
      size_t newcap = cap * 2;
      char* bigger = (char*)realloc(buf, newcap);
      if (!bigger) {
        free(buf);
        return NULL;
      }
      buf = bigger;
      cap = newcap;
    }

    buf[len++] = (char)ch;
  }

  buf[len] = '\0';
  return buf;
}

uniq void rl_redraw_line(const char* prompt, size_t prompt_len,
                           const char* buf, size_t len, size_t cur) {
  fputs("\r", stdout);
  if (prompt_len) {
    fwrite(prompt, 1, prompt_len, stdout);
  }
  if (len) {
    fwrite(buf, 1, len, stdout);
  }
  fputs("\033[K", stdout);
  size_t total = prompt_len + len;
  size_t desired = prompt_len + cur;
  if (total > desired) {
    unsigned long moves = (unsigned long)(total - desired);
    fprintf(stdout, "\033[%luD", moves);
  }
  fflush(stdout);
}

uniq int rl_ensure_capacity(char** bufp, size_t* capp, size_t needed) {
  if (needed <= *capp) {
    return 0;
  }
  size_t newcap = *capp;
  while (newcap < needed) {
    newcap *= 2;
    if (newcap < *capp) {
      newcap = needed;
      break;
    }
  }
  char* bigger = (char*)realloc(*bufp, newcap);
  if (!bigger) {
    return -1;
  }
  *bufp = bigger;
  *capp = newcap;
  return 0;
}

uniq char* readline_interactive(const char* prompt) {
  size_t prompt_len = prompt ? strlen(prompt) : 0;
  if (prompt_len) {
    fwrite(prompt, 1, prompt_len, stdout);
    fflush(stdout);
  }

  size_t cap = 64;
  char* buf = (char*)malloc(cap);
  if (!buf) {
    return NULL;
  }
  buf[0] = '\0';
  size_t len = 0;
  size_t cur = 0;

  size_t history_index = rl_history_len;
  char* saved_line = NULL;

  for (;;) {
    int ch = fgetc(stdin);
    if (ch == EOF) {
      if (len == 0) {
        fputc('\n', stdout);
        fflush(stdout);
        free(buf);
        if (saved_line) free(saved_line);
        return NULL;
      }
      ch = '\n';
    }

    if (ch == '\r') {
      ch = '\n';
    }

    if (ch == '\n') {
      fputc('\n', stdout);
      fflush(stdout);
      buf[len] = '\0';
      char* result = (char*)malloc(len + 1);
      if (!result) {
        free(buf);
        if (saved_line) free(saved_line);
        return NULL;
      }
      memcpy(result, buf, len + 1);
      if (len > 0) {
        rl_history_add(result);
      }
      free(buf);
      if (saved_line) free(saved_line);
      return result;
    }

    if (ch == 3) { // Ctrl-C
      fputc('\n', stdout);
      fflush(stdout);
      free(buf);
      if (saved_line) free(saved_line);
      return NULL;
    }

    if (ch == 4) { // Ctrl-D
      if (len == 0) {
        fputc('\n', stdout);
        fflush(stdout);
        free(buf);
        if (saved_line) free(saved_line);
        return NULL;
      }
      if (cur < len) {
        memmove(buf + cur, buf + cur + 1, len - cur);
        len--;
        buf[len] = '\0';
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 1) { // Ctrl-A
      if (cur != 0) {
        cur = 0;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 5) { // Ctrl-E
      if (cur != len) {
        cur = len;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 2) { // Ctrl-B
      if (cur > 0) {
        cur--;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 6) { // Ctrl-F
      if (cur < len) {
        cur++;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 11) { // Ctrl-K
      if (cur < len) {
        len = cur;
        buf[len] = '\0';
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 21) { // Ctrl-U
      if (len > 0) {
        len = 0;
        cur = 0;
        buf[0] = '\0';
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 12) { // Ctrl-L clear screen and redraw
      fputs("\033[2J\033[H", stdout);
      rl_redraw_line(prompt, prompt_len, buf, len, cur);
      continue;
    }

    if (ch == 14) { // Ctrl-N (down history)
      ch = 0x100; // reuse down arrow handler below
    }

    if (ch == 16) { // Ctrl-P (up history)
      ch = 0x101; // reuse up arrow handler below
    }

    if (ch == 27) { // ESC sequence for arrows/home/end/delete
      int c1 = fgetc(stdin);
      if (c1 == '[') {
        int c2 = fgetc(stdin);
        if (c2 == 'A') { // Up
          ch = 0x101;
        } else if (c2 == 'B') { // Down
          ch = 0x100;
        } else if (c2 == 'C') { // Right
          ch = 0x102;
        } else if (c2 == 'D') { // Left
          ch = 0x103;
        } else if (c2 == 'H') { // Home
          ch = 0x104;
        } else if (c2 == 'F') { // End
          ch = 0x105;
        } else if (c2 == '3') { // Delete key ESC [ 3 ~
          int c3 = fgetc(stdin);
          if (c3 == '~') {
            ch = 0x106;
          }
        } else {
          // consume trailing digits until non-digit maybe '~'
          while (c2 >= '0' && c2 <= '9') {
            int c3 = fgetc(stdin);
            if (c3 == '~' || c3 == EOF) break;
            c2 = c3;
          }
          ch = 0;
        }
      } else if (c1 == 'O') {
        int c2 = fgetc(stdin);
        if (c2 == 'H') {
          ch = 0x104;
        } else if (c2 == 'F') {
          ch = 0x105;
        }
      }
      if (ch == 27) {
        ch = 0;
      }
    }

    if (ch == 0x102) { // Right arrow
      if (cur < len) {
        cur++;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }
    if (ch == 0x103) { // Left arrow
      if (cur > 0) {
        cur--;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }
    if (ch == 0x104) { // Home
      if (cur != 0) {
        cur = 0;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }
    if (ch == 0x105) { // End
      if (cur != len) {
        cur = len;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }
    if (ch == 0x106) { // Delete key
      if (cur < len) {
        memmove(buf + cur, buf + cur + 1, len - cur);
        len--;
        buf[len] = '\0';
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch == 0x101 || ch == 0x100) { // history navigation
      int move_up = (ch == 0x101);
      if (move_up) {
        if (history_index > 0) {
          if (history_index == rl_history_len && !saved_line) {
            saved_line = (char*)malloc(len + 1);
            if (saved_line) memcpy(saved_line, buf, len + 1);
          }
          history_index--;
          const char* src = rl_history[history_index];
          size_t needed = strlen(src) + 1;
          if (rl_ensure_capacity(&buf, &cap, needed) == 0) {
            memcpy(buf, src, needed);
            len = needed - 1;
            cur = len;
            rl_redraw_line(prompt, prompt_len, buf, len, cur);
          }
        }
      } else {
        if (history_index < rl_history_len) {
          history_index++;
          const char* src;
          if (history_index == rl_history_len) {
            src = saved_line ? saved_line : "";
          } else {
            src = rl_history[history_index];
          }
          size_t needed = strlen(src) + 1;
          if (rl_ensure_capacity(&buf, &cap, needed) == 0) {
            memcpy(buf, src, needed);
            len = needed - 1;
            cur = len;
            rl_redraw_line(prompt, prompt_len, buf, len, cur);
          }
        }
      }
      continue;
    }

    if (ch == 8 || ch == 127) { // Backspace
      if (cur > 0) {
        memmove(buf + cur - 1, buf + cur, len - cur + 1);
        cur--;
        len--;
        rl_redraw_line(prompt, prompt_len, buf, len, cur);
      }
      continue;
    }

    if (ch < 32 || ch == 0x7f) {
      continue; // ignore other control chars
    }

    if (rl_ensure_capacity(&buf, &cap, len + 2) != 0) {
      free(buf);
      if (saved_line) free(saved_line);
      return NULL;
    }

    memmove(buf + cur + 1, buf + cur, len - cur + 1);
    buf[cur] = (char)ch;
    len++;
    cur++;
    rl_redraw_line(prompt, prompt_len, buf, len, cur);
  }
}

uniq char* readline(const char* prompt) {
  int input_tty = isatty(0);
  int output_tty = isatty(1);
  if (!input_tty || !output_tty) {
    return readline_simple(prompt);
  }
  return readline_interactive(prompt);
}

uniq int ungetc(int c, FILE* fp) {
  if (!fp || fp->have_push || c == EOF) return EOF;
  fp->push_ch = (unsigned char)c; fp->have_push = 1; return c;
}

uniq size_t fread(void* ptr, size_t size, size_t nmemb, FILE* fp) {
  if (!fp || size == 0 || nmemb == 0) return 0;

  size_t total = size * nmemb;
  if (size != 0 && total / size != nmemb) {
    fp->err = 1;
    return 0;
  }

  size_t done = 0;
  unsigned char* p = (unsigned char*)ptr;

  if (fp->is_mem) {
    size_t avail = (fp->ms_len > (size_t)fp->pos) ? (fp->ms_len - (size_t)fp->pos) : 0;
    size_t tocopy = (total < avail) ? total : avail;
    if (tocopy) {
      memcpy(p, fp->ms_buf + fp->pos, tocopy);
      fp->pos += tocopy;
      done = tocopy;
    }
    if (done < total) fp->eof = 1;
    return done / size;
  }

  if (fp->have_push && total > 0) {
    *p++ = fp->push_ch;
    fp->have_push = 0;
    done = 1;
  }

  while (done < total) {
    size_t want = total - done;
    if (want > 4096) want = 4096;
    long n = read(fp->fd, p + done, want);
    if (n <= 0) {
      if (n == 0) fp->eof = 1;
      else fp->err = 1;
      break;
    }
    done += (size_t)n;
    fp->pos += n;
  }

  return done / size;
}

uniq size_t fwrite(const void* ptr, size_t size, size_t nmemb, FILE* fp) {
  if (!fp) return 0;
  size_t total = size * nmemb;
  size_t done = 0;
  const unsigned char* p = (const unsigned char*)ptr;
  if (fp->is_mem) {
    // grow buffer
    size_t need = (size_t)fp->pos + total;
    if (need + 1 > fp->ms_cap) {
      size_t ncap = fp->ms_cap ? fp->ms_cap : 64;
      while (ncap < need + 1) ncap *= 2;
      char* nb = (char*)realloc(fp->ms_buf, ncap);
      if (!nb) { fp->err = 1; return 0; }
      fp->ms_buf = nb; fp->ms_cap = ncap;
    }
    memcpy(fp->ms_buf + fp->pos, p, total);
    fp->pos += total;
    if ((size_t)fp->pos > fp->ms_len) fp->ms_len = fp->pos;
    return nmemb;
  } else {
    while (done < total) {
      long n = write(fp->fd, p + done, total - done);
      if (n < 0) { fp->err = 1; break; }
      done += n; fp->pos += n;
    }
    return done / (size ? size : 1);
  }
}

uniq int fputs(const char* s, FILE* fp) {
  if (!fp)
    return EOF;

  if (!s)
    s = "(null)";

  size_t len = strlen(s);
  if (fp->is_mem) {
    if (len == 0)
      return 0;
    size_t written = fwrite(s, 1, len, fp);
    return written == len ? 0 : EOF;
  }

  size_t done = 0;
  while (done < len) {
    long n = write(fp->fd, s + done, len - done);
    if (n <= 0) {
      fp->err = 1;
      return EOF;
    }
    done += (size_t)n;
  }
  fp->pos += (long)done;
  return 0;
}

uniq void __fputs(FILE* fp, const char* s) {
  if (fputs(s, fp) == EOF) {
    fp->err = 1;
  }
}

uniq void __skip_spaces(FILE* fp) {
  int c;
  while ((c = fgetc(fp)) != EOF) {
    if (c!=' ' && c!='\t' && c!='\n' && c!='\r') { ungetc(c, fp); break; }
  }
}

uniq int __read_token(FILE* fp, char* buf, int max) {
  __skip_spaces(fp);
  int c; int i=0;
  while ((c = fgetc(fp)) != EOF) {
    if (c==' '||c=='\t'||c=='\n'||c=='\r') { ungetc(c, fp); break; }
    if (i < max-1) buf[i++] = (char)c;
  }
  buf[i] = '\0';
  return (i>0)?1:0;
}

uniq int fscanf(FILE* fp, const char* fmt, ...) {
  va_list ap; va_start(ap, fmt);
  int assigns = 0;
  for (const char* p = fmt; *p; p++) {
    if (*p != '%') continue; p++;
    if (*p == 'd' || *p=='u' || *p=='x') {
      char tok[64]; if (!__read_token(fp, tok, sizeof(tok))) break;
      long val = 0;
      int base = (*p=='x')?16:10; int neg=0; const char* s=tok;
      if (*p=='d' && *s=='-') { neg=1; s++; }
      while (*s) { int d;
        if (*s>='0'&&*s<='9') d=*s-'0';
        else if (base==16 && *s>='a'&&*s<='f') d=*s-'a'+10;
        else if (base==16 && *s>='A'&&*s<='F') d=*s-'A'+10;
        else break; val = val*base + d; s++; }
      if (neg) val = -val;
      if (*p=='d') { int* out = va_arg(ap, int*); *out = (int)val; }
      else if (*p=='u') { unsigned* out = va_arg(ap, unsigned*); *out = (unsigned)val; }
      else { unsigned* out = va_arg(ap, unsigned*); *out = (unsigned)val; }
      assigns++;
    } else if (*p == 's') {
      char* out = va_arg(ap, char*);
      char tok[256]; if (!__read_token(fp, tok, sizeof(tok))) break;
      strncpy(out, tok, 256);
      assigns++;
    } else if (*p == 'c') {
      int c = fgetc(fp); if (c==EOF) break; char* out = va_arg(ap, char*); *out = (char)c; assigns++;
    }
  }
  va_end(ap);
  return assigns;
}

uniq FILE* open_memstream(char **bufp, size_t *sizep) {
  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) return 0;
  fp->fd = -1; fp->flags = 2; fp->pos = 0; fp->eof = 0; fp->err = 0; fp->have_push = 0; fp->push_ch = 0;
  fp->is_mem = 1;
  fp->ms_bufp = bufp; fp->ms_sizep = sizep; fp->ms_buf = 0; fp->ms_cap = 0; fp->ms_len = 0;
  if (sizep) *sizep = 0; if (bufp) *bufp = 0;
  return fp;
}

uniq int fflush(FILE* fp) {
  if (!fp) return 0; // flush all: nothing buffered in this libc
  if (fp->is_mem) {
    // Ensure NUL termination and publish current buffer and size
    if (fp->ms_cap < fp->ms_len + 1) {
      size_t ncap = fp->ms_cap ? fp->ms_cap : 64;
      while (ncap < fp->ms_len + 1) ncap *= 2;
      char* nb = (char*)realloc(fp->ms_buf, ncap);
      if (!nb) { fp->err = 1; return -1; }
      fp->ms_buf = nb; fp->ms_cap = ncap;
    }
    if (fp->ms_buf)
      fp->ms_buf[fp->ms_len] = '\0';
    if (fp->ms_bufp) *fp->ms_bufp = fp->ms_buf;
    if (fp->ms_sizep) *fp->ms_sizep = fp->ms_len;
  }
  return 0;
}

uniq int fputc(int c, FILE* fp) {
    unsigned char ch = (unsigned char)c;
    return (fwrite(&ch, 1, 1, fp) == 1) ? (int)ch : EOF;
}

uniq double strtod(const char* nptr, char** endptr) {
    const char* s = nptr;
    while (isspace(*s)) s++;
    int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
    double ip = 0.0;
    int any = 0;
    while (*s >= '0' && *s <= '9') { ip = ip*10.0 + (*s - '0'); s++; any=1; }
    double fp = 0.0, scale = 1.0;
    if (*s == '.') { s++; while (*s>='0' && *s<='9') { fp = fp*10.0 + (*s-'0'); scale *= 10.0; s++; any=1; } }
    double val = ip + (scale>1.0 ? fp/scale : 0.0);
    if (*s=='e' || *s=='E') {
        s++;
        int esign = 0; if (*s=='+'||*s=='-'){ esign = (*s=='-'); s++; }
        int exp = 0; while (*s>='0'&&*s<='9'){ exp = exp*10 + (*s-'0'); s++; }
        double pow10 = 1.0; while (exp-- > 0) pow10 *= 10.0;
        val = esign ? (val / pow10) : (val * pow10);
        any = 1;
    }
    if (endptr) *endptr = (char*)(any ? s : nptr);
    return neg ? -val : val;
}

uniq unsigned long long __minux_parse_unsigned(const char* nptr, char** endptr,
                                                 int base, int* neg_out, int* any_out) {
    const char* s = nptr;
    while (isspace(*s)) s++;

    int neg = 0;
    if (*s == '+') {
        s++;
    } else if (*s == '-') {
        neg = 1;
        s++;
    }

    unsigned long long val = 0;
    int any = 0;
    int actual_base = base;

    if (actual_base == 0) {
        if (s[0] == '0') {
            if (s[1] == 'x' || s[1] == 'X') {
                actual_base = 16;
                s += 2;
            } else {
                actual_base = 8;
                s++;
                any = 1;  // leading zero counts as a digit
            }
        } else {
            actual_base = 10;
        }
    } else if (actual_base == 16) {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
            s += 2;
        }
    }

    if (actual_base < 2 || actual_base > 36) {
        if (endptr) *endptr = (char*)nptr;
        if (neg_out) *neg_out = neg;
        if (any_out) *any_out = 0;
        return 0;
    }

    for (;; s++) {
        int c = *s;
        int d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'z') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'Z') d = c - 'A' + 10;
        else break;
        if (d >= actual_base) break;
        any = 1;
        val = val * (unsigned long long)actual_base + (unsigned long long)d;
    }

    if (endptr) *endptr = (char*)(any ? s : nptr);
    if (neg_out) *neg_out = neg;
    if (any_out) *any_out = any;
    return val;
}

uniq unsigned long strtoul(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    unsigned long val = (unsigned long)parsed;
    if (neg) val = (unsigned long)(-(long)val);
    return val;
}

uniq long strtol(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long result = (long)parsed;
    if (neg) result = -result;
    return result;
}

uniq long long strtoll(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long long result = (long long)parsed;
    if (neg) result = -result;
    return result;
}

uniq long atol(const char* nptr) {
    return strtol(nptr, 0, 10);
}

uniq int atoi(const char* nptr) {
    return (int)strtol(nptr, 0, 10);
}

uniq int __tolower(int c) {
    if (c >= 'A' && c <= 'Z') return c - 'A' + 'a';
    return c;
}

uniq int strncasecmp(const char* a, const char* b, size_t n) {
    for (size_t i=0; i<n; i++) {
        unsigned char ca = (unsigned char)a[i];
        unsigned char cb = (unsigned char)b[i];
        if (ca == 0 || cb == 0) return (int)ca - (int)cb;
        int da = __tolower(ca);
        int db = __tolower(cb);
        if (da != db) return da - db;
    }
    return 0;
}

uniq time_t time(time_t* tloc) {
    struct timeval tv; tv.tv_sec = 0; tv.tv_usec = 0;
    // If gettimeofday is available it could be used; return epoch by default
    if (tloc) *tloc = tv.tv_sec;
    return tv.tv_sec;
}

uniq struct tm* localtime(const time_t* timep) {
    static struct tm tm;
    (void)timep;
    tm.tm_sec=0; tm.tm_min=0; tm.tm_hour=0; tm.tm_mday=1; tm.tm_mon=0; tm.tm_year=70; tm.tm_wday=4; tm.tm_yday=0; tm.tm_isdst=0;
    return &tm;
}

uniq char* ctime_r(const time_t* timep, char* buf) {
    (void)timep;
    const char* s = "Thu Jan  1 00:00:00 1970\n";
    char* p = buf; while (*s) *p++ = *s++; *p = '\0';
    return buf;
}

uniq char* strerror(int errnum) {
    switch (errnum) {
      case 0:  return "Success";
      case 1:  return "Operation not permitted";
      case 2:  return "No such file or directory";
      case 5:  return "I/O error";
      case 9:  return "Bad file descriptor";
      case 12: return "Out of memory";
      case 13: return "Permission denied";
      case 17: return "File exists";
      case 20: return "Not a directory";
      case 21: return "Is a directory";
      case 22: return "Invalid argument";
      case 32: return "Broken pipe";
      case 38: return "Function not implemented"; // ENOSYS
      default: return "Unknown error";
    }
}

uniq int ispunct(int c) {
    // Printable ASCII that is not alnum and not space
    return (c >= 0x21 && c <= 0x7e) && !isalnum(c);
}

uniq char* __strtok_save;
uniq char *strtok(char *s, const char *delim) {
    if (!s) s = __strtok_save;
    if (!s) return 0;
    // skip leading delimiters
    const char *d;
    while (*s) {
        int isdelim = 0;
        for (d = delim; *d; d++) if (*d == *s) { isdelim = 1; break; }
        if (!isdelim) break;
        s++;
    }
    if (*s == '\0') { __strtok_save = 0; return 0; }
    char *start = s;
    while (*s) {
        for (d = delim; *d; d++) if (*d == *s) { *s = '\0'; __strtok_save = s+1; return start; }
        s++;
    }
    __strtok_save = 0; return start;
}

uniq int isxdigit(int c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// --- minimal sscanf implementation (supports %zi, %d, %ld, %u, %s, %[...], width) ---
uniq int __minux_isspace(int c) { return c==' '||c=='\t'||c=='\n'||c=='\r'||c=='\v'||c=='\f'; }

uniq int sscanf(const char *str, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    const char *s = str;
    const char *f = fmt;
    int assigned = 0;

    #define SKIP_WS_INPUT() while (*s && __minux_isspace((unsigned char)*s)) s++

    while (*f) {
        if (*f != '%') {
            if (__minux_isspace((unsigned char)*f)) {
                while (__minux_isspace((unsigned char)*f)) f++;
                SKIP_WS_INPUT();
                continue;
            }
            if (*s != *f) { va_end(ap); return assigned; }
            s++; f++;
            continue;
        }
        f++; // skip '%'

        // width
        int width = 0;
        while (*f >= '0' && *f <= '9') { width = width*10 + (*f - '0'); f++; }

        // length modifier (handle 'l', 'z'; allow "ll")
        char length = 0;
        if (*f == 'l' || *f == 'z') { length = *f; f++; if (length=='l' && *f=='l') { f++; } }

        char conv = *f++;
        if (conv == 's') {
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            SKIP_WS_INPUT();
            int n=0;
            while (*s && !__minux_isspace((unsigned char)*s) && (width==0 || n<width)) { out[n++] = *s++; }
            out[n] = '\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='d' || conv=='i' || conv=='u') {
            SKIP_WS_INPUT();
            int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
            unsigned long long val=0; int digits=0;
            while (*s>='0'&&*s<='9' && (width==0 || digits<width)) { val = val*10 + (unsigned)(*s-'0'); s++; digits++; }
            if (digits==0) { va_end(ap); return assigned; }
            if (conv=='u') {
                if (length=='l')      { unsigned long* p = va_arg(ap, unsigned long*); *p = (unsigned long)val; }
                else if (length=='z') { size_t* p = va_arg(ap, size_t*); *p = (size_t)val; }
                else                  { unsigned* p = va_arg(ap, unsigned*); *p = (unsigned)val; }
            } else {
                long long sval = neg ? -(long long)val : (long long)val;
                if (length=='l')      { long* p = va_arg(ap, long*); *p = (long)sval; }
                else if (length=='z') { long long* p = va_arg(ap, long long*); *p = (long long)sval; } // ssize_t 相当
                else                  { int* p = va_arg(ap, int*); *p = (int)sval; }
            }
            assigned++;
        } else if (conv=='[') {
            // scanset: %[...]
            int invert = 0; if (*f=='^'){ invert=1; f++; }
            char set[256]={0};
            if (*f==']'){ set[(unsigned)']']=1; f++; }
            while (*f && *f!=']') {
                if (*(f+1)=='-' && *(f+2) && *(f+2)!=']') {
                    unsigned char a=(unsigned char)*f, b=(unsigned char)*(f+2);
                    if (a<=b) { for (int c=a;c<=b;c++) set[c]=1; }
                    else      { for (int c=b;c<=a;c++) set[c]=1; }
                    f+=3;
                } else {
                    set[(unsigned char)*f]=1; f++;
                }
            }
            if (*f==']') f++;
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            int n=0;
            while (*s && (width==0 || n<width)) {
                int in = set[(unsigned char)*s];
                if ((in && !invert) || (!in && invert)) { out[n++]=*s++; }
                else break;
            }
            out[n]='\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='c') {
            char *out = va_arg(ap, char*);
            int n = (width==0)?1:width;
            int i=0; for (; i<n && *s; i++) *out++ = *s++;
            if (i<n) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='%') {
            if (*s!='%') { va_end(ap); return assigned; }
            s++;
        } else {
            va_end(ap); return assigned; // 未対応指定子はその場で終了
        }

        while (__minux_isspace((unsigned char)*f)) {
            while (__minux_isspace((unsigned char)*f)) f++;
            SKIP_WS_INPUT();
        }
    }
    va_end(ap);
    return assigned;
}

#define MINUX_PATH_MAX 1024

uniq char *realpath(const char *path, char *resolved_path) {
    if (!path || !*path) {
        errno = 22; // EINVAL
        return 0;
    }

    char *out = resolved_path;
    int need_free = 0;
    if (!out) {
        out = (char*)malloc(MINUX_PATH_MAX);
        if (!out) {
            errno = 12; // ENOMEM
            return 0;
        }
        need_free = 1;
    }

    if (realpath_user(path, out, MINUX_PATH_MAX) < 0) {
        if (need_free) free(out);
        errno = 2; // ENOENT (generic failure)
        return 0;
    }

    return out;
}


// POSIX-like dirname: returns static buffer; input not modified
uniq char* dirname(const char* path) {
    static char buf[MINUX_PATH_MAX];
    if (!path || !*path) { buf[0]='.'; buf[1]='\0'; return buf; }

    // copy
    size_t n = 0;
    while (path[n] && n < MINUX_PATH_MAX-1) { buf[n] = path[n]; n++; }
    buf[n] = '\0';

    // strip trailing '/'
    while (n > 1 && buf[n-1] == '/') { buf[--n] = '\0'; }

    // find last '/'
    char *last = NULL;
    for (size_t i=0; i<n; i++) if (buf[i] == '/') last = &buf[i];

    if (!last) { buf[0]='.'; buf[1]='\0'; return buf; }
    if (last == buf) { buf[1] = '\0'; return buf; } // "/xxx" -> "/"

    *last = '\0';
    size_t m = (size_t)(last - buf);
    while (m > 0 && buf[m-1] == '/') { buf[--m] = '\0'; } // "/foo///bar" -> "/foo"

    if (m == 0) { buf[0] = '/'; buf[1] = '\0'; }
    return buf;
}

//──────────────────────────────────────────
// Minimal curses-like implementation for MINUX9
//──────────────────────────────────────────

#define MINUX_CURSES_DEFAULT_ROWS 24
#define MINUX_CURSES_DEFAULT_COLS 80

uniq WINDOW __stdscr;
uniq WINDOW* stdscr = NULL;

uniq int __curses_initialized = 0;
uniq int __curses_stdout_is_tty = -1;

uniq int curses_stdout_is_tty(void) {
    if (__curses_stdout_is_tty < 0) {
        __curses_stdout_is_tty = isatty(1) ? 1 : 0;
    }
    return __curses_stdout_is_tty;
}

uniq void curses_emit(const char* seq) {
    if (!seq) return;
    if (!curses_stdout_is_tty()) return;
    fputs(seq, stdout);
}

uniq void curses_init_window(WINDOW* win, int rows, int cols, int beg_y, int beg_x) {
    if (!win) return;
    if (rows <= 0) rows = 1;
    if (cols <= 0) cols = 1;
    if (beg_y < 0) beg_y = 0;
    if (beg_x < 0) beg_x = 0;
    win->rows = rows;
    win->cols = cols;
    win->beg_y = beg_y;
    win->beg_x = beg_x;
    win->cur_y = 0;
    win->cur_x = 0;
}

uniq void curses_reset_window(WINDOW* win) {
    curses_init_window(win, MINUX_CURSES_DEFAULT_ROWS, MINUX_CURSES_DEFAULT_COLS, 0, 0);
    win->parent = NULL;
    win->is_subwin = 0;
    win->is_static = 1;
}

uniq WINDOW* initscr(void) {
    if (__curses_initialized) {
        return stdscr;
    }

    curses_reset_window(&__stdscr);
    stdscr = &__stdscr;
    __curses_initialized = 1;
    __stdscr.is_static = 1;

    (void)curses_stdout_is_tty();
    curses_emit("\033[2J");   // clear screen
    curses_emit("\033[H");    // move cursor to home position
    fflush(stdout);

    return stdscr;
}

uniq int endwin(void) {
    if (!__curses_initialized) {
        return 0;
    }
    curses_emit("\033[0m");   // reset attributes
    curses_emit("\033[?25h"); // ensure cursor is shown
    fflush(stdout);

    stdscr = NULL;
    __curses_initialized = 0;
    __curses_stdout_is_tty = -1;
    return 0;
}

uniq int wrefresh(WINDOW* win) {
    if (!win) {
        return -1;
    }
    return fflush(stdout) == 0 ? 0 : -1;
}

uniq int refresh(void) {
    if (!stdscr) {
        return -1;
    }
    return wrefresh(stdscr);
}

uniq WINDOW* newwin(int nlines, int ncols, int begin_y, int begin_x) {
    if (!__curses_initialized) {
        if (!initscr()) {
            return NULL;
        }
    }

    WINDOW* win = (WINDOW*)malloc(sizeof(WINDOW));
    if (!win) {
        return NULL;
    }

    int rows = (nlines > 0) ? nlines : MINUX_CURSES_DEFAULT_ROWS;
    int cols = (ncols > 0) ? ncols : MINUX_CURSES_DEFAULT_COLS;
    curses_init_window(win, rows, cols, begin_y, begin_x);
    win->parent = NULL;
    win->is_subwin = 0;
    win->is_static = 0;
    return win;
}

uniq WINDOW* subwin(WINDOW* win, int nlines, int ncols, int begin_y, int begin_x) {
    if (!win) {
        return NULL;
    }

    if (!__curses_initialized) {
        if (!initscr()) {
            return NULL;
        }
    }

    int parent_top = win->beg_y;
    int parent_left = win->beg_x;
    int parent_bottom = parent_top + win->rows;
    int parent_right = parent_left + win->cols;

    if (begin_y < parent_top || begin_x < parent_left) {
        return NULL;
    }

    if (begin_y >= parent_bottom || begin_x >= parent_right) {
        return NULL;
    }

    int rows = nlines;
    int cols = ncols;
    if (rows <= 0) rows = parent_bottom - begin_y;
    if (cols <= 0) cols = parent_right - begin_x;

    if (rows <= 0 || cols <= 0) {
        return NULL;
    }

    if (begin_y + rows > parent_bottom || begin_x + cols > parent_right) {
        return NULL;
    }

    WINDOW* sub = (WINDOW*)malloc(sizeof(WINDOW));
    if (!sub) {
        return NULL;
    }

    curses_init_window(sub, rows, cols, begin_y, begin_x);
    sub->parent = win;
    sub->is_subwin = 1;
    sub->is_static = 0;
    return sub;
}

uniq int delwin(WINDOW* win) {
    if (!win) {
        return -1;
    }
    if (win == stdscr || win->is_static) {
        return -1;
    }
    free(win);
    return 0;
}

uniq int wmove(WINDOW* win, int y, int x) {
    if (!win) {
        return -1;
    }
    if (y < 0 || x < 0) {
        return -1;
    }
    if (y >= win->rows || x >= win->cols) {
        return -1;
    }

    win->cur_y = y;
    win->cur_x = x;

    if (curses_stdout_is_tty()) {
        fprintf(stdout, "\033[%d;%dH", win->beg_y + y + 1, win->beg_x + x + 1);
    }
    return 0;
}

uniq int __mvwprintfv(WINDOW* win, int y, int x, const char* fmt, va_list ap) {
    if (!win || !fmt) {
        return -1;
    }

    if (wmove(win, y, x) != 0) {
        return -1;
    }

    va_list aq;
    va_copy(aq, ap);
    int wrote = vfprintf(stdout, fmt, aq);
    va_end(aq);

    if (wrote >= 0) {
        // Track cursor position best-effort for simple cases.
        int next_x = x + wrote;
        win->cur_y = y;
        win->cur_x = (next_x < win->cols) ? next_x : win->cols - 1;
    }

    return wrote;
}

uniq int mvwprintf(WINDOW* win, int y, int x, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int wrote = __mvwprintfv(win, y, x, fmt, ap);
    va_end(ap);
    return wrote;
}

uniq int mvprintw(int y, int x, const char* fmt, ...) {
    if (!stdscr) {
        return -1;
    }
    va_list ap;
    va_start(ap, fmt);
    int wrote = __mvwprintfv(stdscr, y, x, fmt, ap);
    va_end(ap);
    return wrote;
}

uniq int fileno(FILE* fp) {
  if (!fp) return -1;
    return fp->fd;
}
    
uniq void setlocale(int n, char* m)
{
}

uniq void perror(char* msg)
{
    puts(msg);
    _exit(3);
}

uniq void exit(int status)
{
    _exit(status);
}

uniq void* _impure_ptr(void)
{
    return NULL;
}

uniq unsigned sleep(unsigned seconds)
{
    register long a0 asm("a0") = (long)seconds;
    register long a7 asm("a7") = SYS_sleep;
    asm volatile("ecall"
                 : "+r"(a0)
                 : "r"(a7)
                 : "memory");
    return (unsigned)a0;
}

uniq int system(const char* command)
{
    if (command == NULL) {
        return 1; // shell is assumed to exist
    }
    
    int shell_pgrp = getpid();
    
    tcsetpgrp(0, shell_pgrp);

    pid_t pid = fork();
    if (pid < 0) {
        return -1;
    }

    if (pid == 0) {
        tcsetpgrp(0, shell_pgrp);
        
        char* argv[] = { "sh", "-c", (char*)command, NULL };
        char* envp[] = { NULL };
        execve("/sh", argv, envp);
        _exit(100);
    }

    int status = 0;
    int w = wait(&status);
    if (w == pid)
        return status;

    return 0;
}

uniq char* getenv(const char* str)
{
    return NULL;
}

///////////////////////////////////////////////////////////////////////////
// UNIX
///////////////////////////////////////////////////////////////////////////
#else

#define COME_STACKFRAME_MAX 16
#define COME_STACKFRAME_MAX_GLOBAL 128

using C
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#undef va_start
#define va_start(ap, last) __builtin_va_start(ap, last)
#include <limits.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <ctype.h>
}

using neo-c;

#endif

///////////////////////////////////////////////////////////////////////////
// PREVIOUS DEFINITIONS
///////////////////////////////////////////////////////////////////////////
//#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())

struct buffer 
{
    char*% buf;
    int len;
    int size;
};

uniq buffer*% buffer*::initialize(buffer*% self);
uniq void buffer*::finalize(buffer* self);
uniq buffer*% buffer*::clone(buffer* self);
uniq bool buffer*::equals(buffer* left, buffer* right);
uniq buffer* buffer*::append_str(buffer* self, char* mem);
uniq buffer* buffer*::append(buffer* self, char* mem, size_t size);
uniq string xsprintf(char* msg, ...);
uniq string char*::to_string(char* self);
uniq string int::to_string(int self);
uniq unsigned int bool::get_hash_key(bool value);
uniq unsigned int _Bool::get_hash_key(bool value);
uniq unsigned int char::get_hash_key(char value);
uniq unsigned int short::get_hash_key(short int value);
uniq unsigned int int::get_hash_key(int value);
uniq unsigned int long::get_hash_key(long value);
uniq unsigned int size_t::get_hash_key(size_t value);
uniq unsigned int float::get_hash_key(float value);
uniq unsigned int double::get_hash_key(double value);
uniq unsigned int char*::get_hash_key(char* value);
uniq unsigned int string::get_hash_key(char* value);
uniq unsigned int void*::get_hash_key(void* value);
uniq string char*::substring(char* str, int head, int tail);
uniq buffer* buffer*::append_format(buffer* self, char* msg, ...);
uniq string __builtin_string(char* str);
uniq string buffer*::to_string(buffer* self);
uniq string char*::to_string(char* self);
uniq string double::to_string(double self);
uniq string float::to_string(float self);
uniq string size_t::to_string(size_t self);
uniq string long::to_string(long self);
uniq string int::to_string(int self);
uniq string short::to_string(short self);
uniq string char::to_string(char self);
uniq string bool::to_string(bool self);
uniq string _Bool::to_string(bool self);
uniq bool string::equals(char* self, char* right);


///////////////////////////////////////////////////////////////////////////
// DEBUG FUNCTIONS
///////////////////////////////////////////////////////////////////////////
#if defined(__MINUX__) || defined(__BARE_METAL__) || defined(__PICO__)
uniq void come_push_stackframe(char* sname, int sline, int id)
{
}

uniq void come_pop_stackframe()
{
}

uniq void come_save_stackframe(char* sname, int sline)
{
}

uniq void stackframe()
{
}

uniq string come_get_stackframe()
{
    return string("");
}

#else
uniq char* gComeStackFrameSName[COME_STACKFRAME_MAX_GLOBAL];
uniq int gComeStackFrameSLine[COME_STACKFRAME_MAX_GLOBAL];
uniq int gComeStackFrameID[COME_STACKFRAME_MAX_GLOBAL];
uniq int gNumComeStackFrame = 0;

uniq char* gComeStackFrameBuffer = NULL;

uniq void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame < COME_STACKFRAME_MAX_GLOBAL) {
        gComeStackFrameSName[gNumComeStackFrame] = sname;  // const string
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
        gComeStackFrameID[gNumComeStackFrame] = id;
    
        gNumComeStackFrame++;
    }
}

uniq void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

uniq void come_save_stackframe(char* sname, int sline)
{
    buffer*% buf = new buffer();
    buf.append_format("%s %d\n", sname, sline);
    for(int i=gNumComeStackFrame-2; i>=0; i--) {
        buf.append_format("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
    
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer = strdup(buf.to_string());
}

uniq void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
}

uniq string come_get_stackframe()
{
    return string(gComeStackFrameBuffer);
}
#endif

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
record uniq bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);
    
    return false;
}
#else
uniq bool die(char* msg)
{
    puts(msg);
    //stackframe();
    exit(4);
    
    return false;
}
#endif

//////////////////////////////
/// heap
//////////////////////////////
struct sMemHeaderTiny
{
    size_t size;
    int allocated;   //ALLOCATED_MAGIC_NUM
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    size_t size;
    int allocated;            /// ALLOCATED_MAGIC_NUM 
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
    char* sname[COME_STACKFRAME_MAX];
    int sline[COME_STACKFRAME_MAX];
    int id[COME_STACKFRAME_MAX];
#endif
    
    char* class_name;
};

uniq sMemHeader* gAllocMem;

uniq int gComeDebugLib = 0;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;

#define HEAP_POOL_PAGE_SIZE 4096

#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)

#define INIT_PAGE_PAGE_SIZE 4
#define NEW_ALLOC_SIZE 2

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    
    char* mTop;
    int mCurrentPages;
    
    sMemHeaderTiny* mFreeMem[HEAP_POOL_PAGE_SIZE];
};

uniq struct sHeapPage gHeapPages;

uniq void come_heap_init(int come_debug)
{
    gComeDebugLib = come_debug
    
    gComeStackFrameBuffer = NULL;
    memset(gComeStackFrameSName, 0, sizeof(char*)*COME_STACKFRAME_MAX_GLOBAL);
    memset(gComeStackFrameSLine, 0, sizeof(int)*COME_STACKFRAME_MAX_GLOBAL);
    memset(gComeStackFrameID, 0, sizeof(int)*COME_STACKFRAME_MAX_GLOBAL);
    
    gHeapPages.mSizePages = INIT_PAGE_PAGE_SIZE;
    
    gHeapPages.mPages = calloc(1, sizeof(char**)*gHeapPages.mSizePages);
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        gHeapPages.mPages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
    }
    
    gHeapPages.mTop = gHeapPages.mPages[0];
    gHeapPages.mCurrentPages = 0;
    
    memset(gHeapPages.mFreeMem, 0, sizeof(sMemHeaderTiny*)*HEAP_POOL_PAGE_SIZE);
    
    gAllocMem = NULL;
}

uniq void come_heap_final()
{
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    
    if(gComeDebugLib) {
        sMemHeader* it = gAllocMem;
        int n = 0;
        while(it) {
            n++;
            
            bool flag = false;
            printf("#%d ", n);
            if(it->class_name) {
                printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
            }
            for(int i=0; i<COME_STACKFRAME_MAX; i++) {
                if(it->sname[i]) {
                    printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                    flag = true;
                }
            }
            if(flag) {
                puts("");
            }
            it = it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            if(it->class_name) {
                printf("#%d %p (%s) %s %d\n", n, (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name, it->sname , it->sline);
            }
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        free(gHeapPages.mPages[i]);
    }
    free(gHeapPages.mPages);
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;
#ifdef __32BIT_CPU__
    size = (size + 3 & ~0x3);
#else
    size = (size + 7 & ~0x7);
#endif
    
    if(size < HEAP_POOL_PAGE_SIZE) {
        if(gHeapPages.mFreeMem[size]) {
            result = gHeapPages.mFreeMem[size];
            
            gHeapPages.mFreeMem[size] = gHeapPages.mFreeMem[size]->free_next;
            memset(result, 0, size);
        }

        if(result == null) {
            size_t free_area = gHeapPages.mPages[gHeapPages.mCurrentPages] + HEAP_POOL_PAGE_SIZE - gHeapPages.mTop;
            
            if(size >= free_area) {
                gHeapPages.mCurrentPages++;
                
                if(gHeapPages.mCurrentPages == gHeapPages.mSizePages) {
                    int new_size_pages = gHeapPages.mSizePages * NEW_ALLOC_SIZE;
                    char** new_pages = calloc(1, sizeof(char*)*new_size_pages);
                    
                    int i=0;
                    for(; i<gHeapPages.mSizePages; i++) {
                        new_pages[i] = gHeapPages.mPages[i];
                    }
                    
                    for(; i<new_size_pages; i++) {
                        new_pages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
                    }
                    
                    free(gHeapPages.mPages);
                    
                    gHeapPages.mPages = new_pages;
                    gHeapPages.mSizePages = new_size_pages;
                }
                
                gHeapPages.mTop = gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            
            result = gHeapPages.mTop;
            gHeapPages.mTop += size;
        }
    }
    else {
        result = calloc(1, size);
    }
    
    return result;
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
            
            if(size < HEAP_POOL_PAGE_SIZE) {
                if(gHeapPages.mFreeMem[size] == NULL) {
                    it->free_next = NULL;
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
                else {
                    it->free_next = (sMemHeader*)gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = (sMemHeaderTiny*)it;
                }
            }
            else {
                free(it);
            }
            
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
            
            size_t size = it->size;
            
            if(size < HEAP_POOL_PAGE_SIZE) {
                if(gHeapPages.mFreeMem[size] == NULL) {
                    it->free_next = NULL;
                    gHeapPages.mFreeMem[size] = it;
                }
                else {
                    it->free_next = gHeapPages.mFreeMem[size];
                    gHeapPages.mFreeMem[size] = it;
                }
            }
            else {
                free(it);
            }
            
            gNumFree++;
        }
    }
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

uniq void come_print_heap_info(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            return;
        }
        
        printf("%p ", mem);
        if(it->class_name) {
            printf("(%s): ", it->class_name);
        }
        for(int i=0; i<COME_STACKFRAME_MAX; i++) {
            if(it->sname[i]) {
                printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
            }
        }
        puts("");
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            return;
        }
        printf("%p (%s) %s %d\n", mem, it->class_name, it->sname , it->sline);
    }
}

#else

uniq void come_heap_init(int come_debug)
{
}

uniq void come_heap_final()
{
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

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
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
            
            size_t size = it->size;
            
            free(it);
            
            gNumFree++;
        }
    }
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
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

uniq void come_print_heap_info(void* mem)
{
}
#endif

uniq char* come_dynamic_typeof(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            printf("invalid heap object(%p)(1)\n", it);
            exit(2);
        }
        
        return it->class_name;
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));
        
        if(it->allocated != ALLOCATED_MAGIC_NUM) {
            printf("invalid heap object(%p)(2)\n", it);
            exit(2);
        }
        
        return it->class_name;
    }
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="")
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);
    
    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;
    
    size_t* size2 = (size_t*)(mem + sizeof(size_t));
    
    *size2 = size*count + sizeof(size_t) + sizeof(size_t);
    
    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);
    
    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);
    
    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);
    
    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    (*ref_count)++;
    
    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    printf("ref_count %ld\n", *ref_count);
    
    return mem;
}

uniq int come_get_ref_count(void* mem)
{
    if(mem == NULL) {
        return 0;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    return *ref_count;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == NULL) {
        return NULL;
    }
    
    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
    
    if(!no_decrement) {
        (*ref_count)--;
    }
    
    size_t count = *ref_count;
    if(!no_free && count <= 0) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);
            
            come_free(protocol_obj);
        }
        come_free(mem);
        return NULL;
    }
    
    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == NULL) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
        else {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        size_t count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        void (*finalizer)(void*) = fun;
                        finalizer(mem);
                    }
                }
                else {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

#ifndef __RISCV__
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
    return inherit();
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    return inherit(count, size, sname, sline, class_name);
}

uniq void come_free(void* mem) version 2
{
    inherit(mem);
}

#endif

//////////////////////////////
// list
//////////////////////////////
struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
    {
        self.head = null;
        self.tail = null;
        self.len = 0;
        
        for(int i=0; i<num_value; i++) {
            self.push_back(dummy_heap values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    immutable list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.add(clone it.item);
            }
            else {
                result.add(dummy_heap dupe it.item);
            }

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    T pop_front(list<T>* self) {
        T result;
        if(self.len == 1) {
            result = self.head.item;
            
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;
            
            delete borrow litem;
            
            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;
            
            result = self.head.item;
            
            self.head = litem.next;
            self.head.prev = null;
            
            delete borrow litem;
            
            self.len--;
        }
        return result;
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
        
        return self;
    }
    
    immutable string to_string(list<T>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;
            
            i++;
            
            if(i != self.length()) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }
        
        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    immutable list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }
    immutable T item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return dummy_heap default_value;
    }

    immutable int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }
    
    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;
            
            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;
            
            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
        
        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
        
        return self;
    }
    list<T>* remove(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* remove_by_pointer(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it->item == item) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;
            
            it = it.next;
        }
        
        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }
        
        if(head == 0 && tail == self.len) 
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail) 
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
        
        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }
        
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
        
        return self;
    }

    immutable int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    immutable int find_by_pointer(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item == item) {
                return it2;
            }
            it2++;
            
            it = it.next;
        }

        return default_value;
    }
    immutable bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    immutable list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    void operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
    }
    immutable T operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    immutable list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right) 
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next()) {
            if(it.equals(item)) {
                return true;
            }
        }
        
        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0) 
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap dupe it.item);
                }
                break;
            }
        }
        
        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);
        
        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    template<R> immutable list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    immutable list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    immutable list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;
                
                it = it.next;
            }
        }

        return result;
    }
    immutable list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    } 
    
    immutable list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);
    
                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();
        
        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);
            
            if(n < self.length()-1) {
                buf.append_str(sep);
            }
            
            n++;
        }
        
        return buf.to_string();
    }
}

//////////////////////////////
// map
//////////////////////////////
struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;
    
    list<T>*% key_list;

    int it;
};

#define MAP_TABLE_DEFAULT_SIZE 128

impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;
        
        self.key_list = new list<T>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
    {
        self.keys = borrow gc_inc(new T[MAP_TABLE_DEFAULT_SIZE]);
        self.items = borrow gc_inc(new T2[MAP_TABLE_DEFAULT_SIZE]);
        self.item_existance = borrow gc_inc(new bool[MAP_TABLE_DEFAULT_SIZE]);

        for(int i=0; i<MAP_TABLE_DEFAULT_SIZE; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = MAP_TABLE_DEFAULT_SIZE;
        self.len = 0;

        self.it = 0;
        
        self.key_list = new list<T>();
        
        for(int i=0; i<num_keys; i++) {
            self.insert(dummy_heap keys\[i], dummy_heap values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);
        
        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }
        
        var result = new map<T,T2>();
        
        result.key_list = new list<T>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            
            var it2 = self.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.put(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.put(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.put(dummy_heap dupe it, clone it2);
            }
            else {
                result.put(dummy_heap dupe it, dummy_heap dupe it2);
            }
        }

        return result;
    }
    
    immutable string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();
        
        result.append_str("[");
        
        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);
            
            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());
            
            it = it.next;
            
            if(it != null) {
                result.append_str(",");
            }
        }
        
        result.append_str("]");
        
        return result.to_string();
    }
    
    immutable T2 at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    map<T,T2>* remove_by_pointer(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it] == key) 
                {
                    self.key_list.remove(self.keys\[it]);
                    
                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    memset(self.items + it, 0, sizeof(T2));
                    
                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }
        
        return self;
    }
    immutable int length(map<T, T2>* self) {
        return self.len;
    }
    
    T& begin(map<T, T2>* self) {
        if(self == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }
        
        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }
    
    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = ((T)it).get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2 default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }
    
    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key)) 
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }
        
        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }
        
        if(!same_key_exist) {
            self.key_list.push_back(key);
        }
        
        return self;
    }
    immutable T2 operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));
        
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;
        
        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    
    void operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);
    }
    
    immutable bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it.equals(it2)) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);
                
                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
            
            n++;
        }

        return result;
    }
    
    immutable bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);
            
            if(it === it2) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);
                
                if(!(item === item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }
            
            n++;
        }

        return result;
    }
    
    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !(left.operator_equals(right);
    }
    
    immutable bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    immutable map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);
            
            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        return result;
    }
    immutable map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
                T2` default_value;
                memset(&default_value, 0, sizeof(T2));
                
                T2& it2 = left.at(it, default_value);
                
                if(isheap(T) && isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else if(isheap(T)) {
                    result.insert(clone it, dummy_heap dupe it2);
                }
                else if(isheap(T2)) {
                    result.insert(dummy_heap dupe it, clone it2);
                }
                else {
                    result.insert(dummy_heap dupe it, dummy_heap dupe it2);
                }
                n++;
            }
        }

        return result;
    }
    immutable list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap dupe it);
            }
        }
        
        return result;
    }
    
    immutable list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();
        
        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) { 
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
        
            var it2 = self.at(it, default_value);
            
            if(isheap(T2)) {
                result.push_back(clone it2);
            }
            else {
                result.push_back(dummy_heap dupe it2);
            }
        }
        
        return result;
    }
}

//////////////////////////////
// tuple
//////////////////////////////
struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;
        
        return self;
    }
    
    immutable bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple1<T>* self, tuple1<T>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
    }
    
    immutable string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;
        
        return self;
    }
    
    immutable string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    immutable bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        
        return self;
    }
    
    immutable string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    immutable bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        
        return self;
    }
    
    immutable string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    immutable bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;
        
        return self;
    }
    
    immutable string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    immutable bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        if(!self.v5.equals(right.v5)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right) 
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        if(!(self.v5 === right.v5)) {
            return false;
        }
        
        return true;
    }
    immutable bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}

//////////////////////////////
// buffer
//////////////////////////////
uniq buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq buffer*% buffer*::initialize_with_value(buffer*% self, char* mem, size_t size) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;
    
    self.append(mem, size);

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq immutable buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    var result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

uniq immutable bool buffer*::equals(buffer* left, buffer* right)
{
    if(left == null || right == null) {
        return false;
    }
    
    return left.to_string().equals(right.to_string());
}

uniq immutable int buffer*::length(buffer* self) 
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
{
    if(self == null || msg == null) {
        return self;
    }
    
#ifdef __RISCV__
    char result[128];
    
    va_list` args;
    va_start(args, msg);
    snprintf(result, 128, args);
    va_end(args);
    
    int len = strlen(result);
#else
    va_list` args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);
    
    if(len < 0) {
        return self;
    }
#endif
    
    string mem = string(result);
    
    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    free(result);
    
    return self;
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;
    
    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value) 
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_long(buffer* self, long value) 
{
    long* mem = &value;
    int size = sizeof(long);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::append_short(buffer* self, short value) 
{
    if(self == null) {
        return null;
    }
    
    short* mem = &value;
    int size = sizeof(short);
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    
    return self;
}

uniq buffer* buffer*::alignment(buffer* self) 
{
    if(self == null) {
        return null;
    }
    
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
    
    return self;
}

uniq immutable int buffer*::compare(buffer* left, buffer* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left.buf, right.buf);
}

uniq immutable buffer*% char*::to_buffer(char* self) 
{
    var result = new buffer.initialize();
    
    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq immutable string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }
    
    return string(self.buf);
}

uniq immutable unsigned char* buffer*::head_pointer(buffer* self)
{
    return self.buf;
}

uniq buffer*% char[]::to_buffer(char* self, size_t len) 
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

uniq immutable buffer*% char*[]::to_buffer(char** self, size_t len) 
{
    var result = new buffer();
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

uniq immutable buffer*% short[]::to_buffer(short* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

uniq immutable buffer*% int[]::to_buffer(int* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

uniq immutable buffer*% long[]::to_buffer(long* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

uniq immutable buffer*% float[]::to_buffer(float* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

uniq immutable buffer*% double[]::to_buffer(double* self, size_t len) 
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}

uniq immutable string buffer*::printable(buffer* self)
{
    int len = self.len;
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        unsigned char c = self.buf[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else if(c > 127) {
            result[n++] = '?';
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

impl list <T>
{
    immutable buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        for(var it = self.begin(); !self.end(); it = self.next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

//////////////////////////////
/// base library(primitive array)
//////////////////////////////
uniq list<char>*% char[]::to_list(char* self, size_t len) 
{
    return new list<char>.initialize_with_values(len, self);
}

uniq list<char*>*% char*[]::to_list(char** self, size_t len) 
{
    return new list<char*>.initialize_with_values(len, self);
}

uniq list<short>*% short[]::to_list(short* self, size_t len) 
{
    return new list<short>.initialize_with_values(len, self);
}

uniq list<int>*% int[]::to_list(int* self, size_t len) 
{
    return new list<int>.initialize_with_values(len, self);
}

uniq list<long>*% long[]::to_list(long* self, size_t len) 
{
    return new list<long>.initialize_with_values(len, self);
}

uniq list<float>*% float[]::to_list(float* self, size_t len) 
{
    return new list<float>.initialize_with_values(len, self);
}

uniq list<double>*% double[]::to_list(double* self, size_t len) 
{
    return new list<double>.initialize_with_values(len, self);
}

//////////////////////////////
/// base library(equals)
//////////////////////////////
uniq immutable bool bool::equals(bool self, bool right) 
{
    return self == right;
}

uniq immutable bool _Bool::equals(_Bool self, _Bool right) 
{
    return self == right;
}

uniq immutable bool char::equals(char self, char right) 
{
    return self == right;
}

uniq immutable bool short::equals(short self, short right) 
{
    return self == right;
}

uniq immutable bool int::equals(int self, int right) 
{
    return self == right;
}

uniq immutable bool long::equals(long self, long right) 
{
    return self == right;
}

uniq immutable bool size_t::equals(size_t self, size_t right) 
{
    return self == right;
}

uniq immutable bool float::equals(float self, float right) 
{
    return self == right;
}

uniq immutable bool double::equals(double self, double right) 
{
    return self == right;
}

uniq immutable bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool _Bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq immutable bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq immutable bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq immutable bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool _Bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool char*::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool string::equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right) 
{
    return self == right;
}

uniq bool bool*::equals(bool* self, bool* right) 
{
    return *self == *right;
}

uniq bool string::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }
    
    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right) 
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right) 
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right) 
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }
    
    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string string::operator_add(char* self, char* right) 
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

uniq string char*::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right) 
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();
    
    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }
    
    return buf.to_string();
}

uniq size_t char[]::length(char* self, size_t len) 
{
    return len;
}

uniq bool char*[]::contained(char** self, size_t len, char* str) 
{
    bool result = false;
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = true;
            break;
        }
    }
    return result;
}

uniq size_t short[]::length(short* self, size_t len) 
{
    return len;
}

uniq size_t int[]::length(int* self, size_t len) 
{
    return len;
}

uniq size_t long[]::length(long* self, size_t len) 
{
    return len;
}

uniq size_t float[]::length(float* self, size_t len) 
{
    return len;
}

uniq size_t double[]::length(double* self, size_t len) 
{
    return len;
}

//////////////////////////////
/// base library(get_hash key)
//////////////////////////////
uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int _Bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int void*::get_hash_key(void* value)
{
    return (((int)value).get_hash_key());
}

//////////////////////////////
/// base library(clone)
//////////////////////////////
uniq bool bool::clone(bool self)
{
    return self;
}

uniq bool _Bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}

//////////////////////////////
/// base library(character code)
//////////////////////////////

uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisspace(char c)
{
    return c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == 28 || c == 11;
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xispunct(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
 }

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string char*::reverse(char* str) 
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list` args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);
    
    if(len < 0) {
        return string("");
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

uniq string char*::delete(char* str, int head, int tail) 
{
    if(str == null) {
        return string("");
    }
    
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    char*% result = new char[len-(tail-head)+1];
    
    memcpy(result, str, head);
    memcpy(result + head, str + tail, len-tail);
    
    result[len -(tail-head)] = '\0';

    return result;
}

uniq list<string>*% char*::split_char(char* self, char c) 
{
    if(self == null) {
        return new list<string>();
    }
    
    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}


uniq string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

uniq string char*::sub_plain(char* self, char* str, char* replace)
{
    if(str == null || replace == null) {
        return string(self);
    }

    auto result = new buffer.initialize();
    
    char* p = self;
    
    while(true) {
        char* p2 = strstr(p, str);
        
        if(p2 == null) {
            p2 = p;
            while(*p2) {
                p2++;
            }
            result.append(p, p2 - p);
            break;
        }
        
        result.append(p, p2 - p);
        result.append_str(replace);
        
        p = p2 + strlen(str);
    }

    return result.to_string();
}

//////////////////////////////
/// base library(path library)
//////////////////////////////
uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);
    
    char* p = path2 + strlen(path2);
    
    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }
    
    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

//////////////////////////////
/// base library(to_string)
//////////////////////////////
uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string _Bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

//////////////////////////////
/// base library(compare)
//////////////////////////////
uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int _Bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }
    
    return 0;
}

uniq int char::compare(char left, char right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int short::compare(short left, short right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int int::compare(int left, int right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int long::compare(long left, long right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int size_t::compare(size_t left, size_t right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int float::compare(float left, float right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int double::compare(double left, double right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

uniq int string::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right) 
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }
    
    return strcmp(left,right);
}

//////////////////////////////
/// base library(STDOUT, STDIN)
//////////////////////////////
uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);
    
    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);
    
    return string(self);
}

uniq string char*::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;

#ifdef __RISCV__
    char msg2[128];
    
    va_list` args;
    va_start(args, self);
    int len = snprintf(msg2, 128, self, args);
    va_end(args);
#else
    va_list` args;
    va_start(args, self);
    vasprintf(&msg2,self,args);
    va_end(args);
#endif
    
    printf("%s", msg2);

    free(msg2);
    
    return string(self);
}

uniq int int::printf(int self, char* msg)
{
    printf(msg, self);
    
    return self;
}

//////////////////////////////
/// base library(assert)
//////////////////////////////
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
#undef assert

uniq record int assert(int exp) version 2
{
    if(exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}
#endif

uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}

/*
 *
 * Mini regex-module inspired by Rob Pike's regex code described in:
 *
 * http://www.cs.princeton.edu/courses/archive/spr09/cos333/beautiful.html
 *
 *
 *
 * Supports:
 * ---------
 *   '.'        Dot, matches any character
 *   '^'        Start anchor, matches beginning of string
 *   '$'        End anchor, matches end of string
 *   '*'        Asterisk, match zero or more (greedy)
 *   '+'        Plus, match one or more (greedy)
 *   '?'        Question, match zero or one (non-greedy)
 *   '[abc]'    Character class, match if one of {'a', 'b', 'c'}
 *   '[^abc]'   Inverted class, match if NOT one of {'a', 'b', 'c'} -- NOTE: feature is currently broken!
 *   '[a-zA-Z]' Character ranges, the character set of the ranges { a-z | A-Z }
 *   '\s'       Whitespace, \t \f \r \n \v and spaces
 *   '\S'       Non-whitespace
 *   '\w'       Alphanumeric, [a-zA-Z0-9_]
 *   '\W'       Non-alphanumeric
 *   '\d'       Digits, [0-9]
 *   '\D'       Non-digits
 *   '()'       Grouping, allowing quantifiers on sub-expressions and capturing
 *
 *
 */


#ifndef RE_DOT_MATCHES_NEWLINE
// Define to 0 if you DON'T want '.' to match '\r' + '\n' 
#define RE_DOT_MATCHES_NEWLINE 0
#endif

#ifndef xisdigit
#define xisdigit isdigit
#endif

#ifndef xisalpha
#define xisalpha isalpha
#endif

#ifndef xisspace
#define xisspace isspace
#endif

// Typedef'd pointer to get abstract datatype. 
struct re_program;
typedef struct re_program* re_t;


typedef struct re_capture
{
  int start;
  int length;
} re_capture;


// Definitions:

#define MAX_REGEXP_OBJECTS   64   // Max number of regex symbols in expression, incl. groups. 
#define MAX_CHAR_CLASS_LEN   40   // Max length of character-class buffer.                   
#define MAX_CAPTURE_SLOTS    MAX_REGEXP_OBJECTS

enum
{
  RE_UNUSED,
  RE_DOT,
  RE_BEGIN,
  RE_END,
  RE_QUESTIONMARK,
  RE_STAR,
  RE_PLUS,
  RE_CHAR,
  RE_CHAR_CLASS,
  RE_INV_CHAR_CLASS,
  RE_DIGIT,
  RE_NOT_DIGIT,
  RE_ALPHA,
  RE_NOT_ALPHA,
  RE_WHITESPACE,
  RE_NOT_WHITESPACE,
  RE_GROUP,
  RE_GROUP_END
};


typedef struct regex_t regex_t;

struct regex_t
{
  unsigned char type;   // RE_CHAR, RE_STAR, RE_GROUP, etc. 
  union
  {
    unsigned char  ch;      // Literal character                
    unsigned char* ccl;     // Pointer to characters in a class  
    struct
    {
      regex_t* first;       // First token inside the group      
      regex_t* last;        // Sentinel token terminating group  
      int      id;          // Capture index (1-based)          
    } group;
  } u;
  regex_t* next;            // Linked list pointer for sequence 
};


typedef struct re_program
{
  regex_t*       start;
  int            group_count;
} regex_program_t;


typedef struct
{
  regex_t*        pool;
  int             pool_capacity;
  int             pool_size;
  unsigned char*  ccl_buf;
  int             ccl_capacity;
  int             ccl_idx;
  int             group_count;
} compiler_state;


typedef struct
{
  const char* base;
  re_capture* captures;
  int         capture_capacity;   // Slots provided by caller 
  int         total_groups;       // Groups present in pattern
} match_context;



// Public functions: 
uniq int re_matchp(re_t pattern, const char* text, int* matchlength, re_capture* captures, int max_captures)
{
  *matchlength = 0;
  if (pattern == 0)
  {
    return -1;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  regex_t* start = program->start;
  if (start == 0)
  {
    return -1;
  }

  match_context ctx;
  ctx.base = text;
  ctx.captures = (captures != 0 && max_captures > 0) ? captures : 0;
  ctx.capture_capacity = (captures != 0 && max_captures > 0) ? max_captures : 0;
  if (ctx.capture_capacity > MAX_CAPTURE_SLOTS)
  {
    ctx.capture_capacity = MAX_CAPTURE_SLOTS;
  }
  ctx.total_groups = program->group_count;

  if (ctx.captures != 0)
  {
    clear_captures(&ctx);
  }

  if (start->type == RE_BEGIN)
  {
    const char* end = matchpattern(start->next, text, &ctx);
    if (end != 0)
    {
      *matchlength = (int)(end - text);
      if (ctx.captures != 0)
      {
        // Groups already recorded relative to ctx.base 
      }
      return 0;
    }
    return -1;
  }
  else
  {
    const char* cursor = text;
    while (1)
    {
      if (ctx.captures != 0)
      {
        clear_captures(&ctx);
      }
      const char* end = matchpattern(start, cursor, &ctx);
      if (end != 0)
      {
        if (*cursor == '\0' && cursor != text)
        {
          return -1; // Preserve legacy behaviour
        }
        *matchlength = (int)(end - cursor);
        return (int)(cursor - text);
      }

      if (*cursor == '\0')
      {
        break;
      }
      cursor += 1;
    }
  }

  return -1;
}

uniq int re_match(const char* pattern, const char* text, int* matchlength)
{
  return re_matchp(re_compile(pattern), text, matchlength, (re_capture*)0, 0);
}

uniq re_t re_compile(const char* pattern)
{
  static regex_t        re_compiled[MAX_REGEXP_OBJECTS];
  static unsigned char  ccl_buf[MAX_CHAR_CLASS_LEN];
  static regex_program_t program;

  compiler_state state;
  state.pool = re_compiled;
  state.pool_capacity = MAX_REGEXP_OBJECTS;
  state.pool_size = 0;
  state.ccl_buf = ccl_buf;
  state.ccl_capacity = MAX_CHAR_CLASS_LEN;
  state.ccl_idx = 1; // leave first slot unused to mimic original behaviour 
  state.group_count = 0;

  if (state.ccl_capacity > 0)
  {
    state.ccl_buf[0] = 0;
  }

  int pos = 0;
  regex_t* head = compile_sequence(&state, pattern, &pos, 0);
  if ((head == 0) || (pattern[pos] != '\0'))
  {
    return NULL;
  }

  program.start = head;
  program.group_count = state.group_count;
  return (re_t) &program;
}


uniq void re_print(re_t pattern)
{
  if (pattern == 0)
  {
    return;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  if (program->start == 0)
  {
    return;
  }

  re_print_internal(program->start, 0);
}


// Private helper implementations 
uniq void clear_captures(match_context* ctx)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  for (int i = 0; i < ctx->capture_capacity; ++i)
  {
    ctx->captures[i].start = -1;
    ctx->captures[i].length = 0;
  }
}

uniq void snapshot_captures(const match_context* ctx, re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(buffer_, ctx->captures, sizeof(re_capture) * ctx->capture_capacity);
}

uniq void restore_captures(match_context* ctx, const re_capture* buffer_)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(ctx->captures, buffer_, sizeof(re_capture) * ctx->capture_capacity);
}


uniq regex_t* new_token(compiler_state* st)
{
  if (st->pool_size >= st->pool_capacity)
  {
    return NULL;
  }

  regex_t* token = &st->pool[st->pool_size++];
  token->type = RE_UNUSED;
  token->u.ccl = 0;
  token->next = 0;
  token->u.group.first = 0;
  token->u.group.last = 0;
  token->u.group.id = 0;
  return token;
}

uniq int append_token(regex_t** head, regex_t** tail, regex_t* token)
{
  if (token == 0)
  {
    return 0;
  }

  if (*head == 0)
  {
    *head = token;
  }
  else
  {
    (*tail)->next = token;
  }
  *tail = token;
  return 1;
}

uniq regex_t* compile_sequence(compiler_state* st, const char* pattern, int* pos, int in_group)
{
  regex_t* head = (regex_t*)0;
  regex_t* tail = (regex_t*)0;

  while (pattern[*pos] != '\0')
  {
    char c = pattern[*pos];

    if (in_group && (c == ')'))
    {
      break;
    }

    regex_t* token = (regex_t*)0;

    switch (c)
    {
      case '^':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_BEGIN;
        (*pos)++;
      } break;

      case '$':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_END;
        (*pos)++;
      } break;

      case '.':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_DOT;
        (*pos)++;
      } break;

      case '*':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_STAR;
        (*pos)++;
      } break;

      case '+':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_PLUS;
        (*pos)++;
      } break;

      case '?':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_QUESTIONMARK;
        (*pos)++;
      } break;

      case '\\':
      {
        (*pos)++;
        if (pattern[*pos] == '\0')
        {
          return NULL;
        }

        token = new_token(st);
        if (token == 0) return NULL;

        switch (pattern[*pos])
        {
          case 'd': token->type = RE_DIGIT;          break;
          case 'D': token->type = RE_NOT_DIGIT;      break;
          case 'w': token->type = RE_ALPHA;          break;
          case 'W': token->type = RE_NOT_ALPHA;      break;
          case 's': token->type = RE_WHITESPACE;     break;
          case 'S': token->type = RE_NOT_WHITESPACE; break;
          default:
          {
            token->type = RE_CHAR;
            token->u.ch = (unsigned char)pattern[*pos];
          } break;
        }
        (*pos)++;
      } break;

      case '[':
      {
        int buf_begin = st->ccl_idx;
        int negated = 0;
        (*pos)++;

        if (pattern[*pos] == '^')
        {
          negated = 1;
          (*pos)++;
          if (pattern[*pos] == '\0')
          {
            return NULL;
          }
        }

        if (pattern[*pos] == '\0')
        {
          return NULL;
        }

        while ((pattern[*pos] != '\0') && (pattern[*pos] != ']'))
        {
          if (pattern[*pos] == '\\')
          {
            if (st->ccl_idx >= (st->ccl_capacity - 1))
            {
              return NULL;
            }
            st->ccl_buf[st->ccl_idx++] = '\\';
            (*pos)++;
            if (pattern[*pos] == '\0')
            {
              return NULL;
            }
          }

          if (st->ccl_idx >= st->ccl_capacity)
          {
            return NULL;
          }
          st->ccl_buf[st->ccl_idx++] = (unsigned char)pattern[*pos];
          (*pos)++;
        }

        if (pattern[*pos] != ']')
        {
          return NULL;
        }

        if (st->ccl_idx >= st->ccl_capacity)
        {
          return NULL;
        }
        st->ccl_buf[st->ccl_idx++] = 0;

        token = new_token(st);
        if (token == 0) return NULL;
        token->type = negated ? RE_INV_CHAR_CLASS : RE_CHAR_CLASS;
        token->u.ccl = &st->ccl_buf[buf_begin];

        (*pos)++;
      } break;

      case '(':
      {
        (*pos)++;
        regex_t* inner = compile_sequence(st, pattern, pos, 1);
        if (inner == 0)
        {
          return NULL;
        }
        if (pattern[*pos] != ')')
        {
          return NULL;
        }

        regex_t* tail = inner;
        while ((tail != 0) && (tail->type != RE_UNUSED))
        {
          tail = tail->next;
        }
        if (tail == 0)
        {
          return NULL;
        }

        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_GROUP;
        token->u.group.first = inner;
        token->u.group.last = tail;
        token->u.group.id = ++st->group_count;

        tail->type = RE_GROUP_END;
        tail->u.group.first = token;

        (*pos)++;
      } break;

      case ')':
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;

      default:
      {
        token = new_token(st);
        if (token == 0) return NULL;
        token->type = RE_CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;
    }

    if (!append_token(&head, &tail, token))
    {
      return NULL;
    }
  }

  regex_t* sentinel = new_token(st);
  if (sentinel == 0)
  {
    return NULL;
  }
  sentinel->type = RE_UNUSED;
  sentinel->next = 0;

  if (head == 0)
  {
    head = sentinel;
  }
  else
  {
    tail->next = sentinel;
  }

  return head;
}

uniq const char* matchpattern(regex_t* pattern, const char* text, match_context* ctx)
{
  if (pattern == 0)
  {
    return text;
  }

  if (pattern->type == RE_UNUSED)
  {
    return text;
  }

  re_capture snapshot[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot);

  regex_t* current = pattern;
  const char* cursor = text;

  while (current != 0 && current->type != RE_UNUSED)
  {
    regex_t* next = current->next;

    if (current->type == RE_GROUP_END)
    {
      regex_t* owner = current->u.group.first;
      if ((owner != 0) && (owner->u.group.id > 0) && (ctx->captures != 0))
      {
        int idx = owner->u.group.id - 1;
        if (idx < ctx->capture_capacity)
        {
          int start = ctx->captures[idx].start;
          if (start >= 0)
          {
            ctx->captures[idx].length = (int)(cursor - ctx->base) - start;
            if (ctx->captures[idx].length < 0)
            {
              ctx->captures[idx].length = 0;
            }
          }
        }
      }
      current = current->next;
      continue;
    }

    if ((next != 0) && (next->type == RE_QUESTIONMARK))
    {
      const char* result = matchquestion(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if ((next != 0) && (next->type == RE_STAR))
    {
      const char* result = matchstar(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if ((next != 0) && (next->type == RE_PLUS))
    {
      const char* result = matchplus(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if (current->type == RE_GROUP)
    {
      const char* result = matchgroup(current, next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return NULL;
    }
    else if (current->type == RE_END)
    {
      if (*cursor != '\0')
      {
        restore_captures(ctx, snapshot);
        return NULL;
      }
      current = current->next;
    }
    else
    {
      const char* after = matchtoken(current, cursor, ctx);
      if (after == 0)
      {
        restore_captures(ctx, snapshot);
        return NULL;
      }
      cursor = after;
      current = current->next;
    }
  }

  return cursor;
}

uniq const char* matchgroup(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  regex_t* end_token = token->u.group.last;
  regex_t* saved_next = end_token != 0 ? end_token->next : 0;
  if (end_token != 0)
  {
    end_token->next = rest;
  }

  if (token->u.group.id > 0 && ctx->captures != 0)
  {
    int idx = token->u.group.id - 1;
    if (idx < ctx->capture_capacity)
    {
      ctx->captures[idx].start = (int)(text - ctx->base);
      ctx->captures[idx].length = 0;
    }
  }

  const char* result = matchpattern(token->u.group.first, text, ctx);

  if (end_token != 0)
  {
    end_token->next = saved_next;
  }

  if (result == 0)
  {
    restore_captures(ctx, snapshot_entry);
  }

  return result;
}

uniq const char* matchstar(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* consume = matchtoken(token, text, ctx);
  while ((consume != 0) && (consume != text))
  {
    re_capture snapshot_after_token[MAX_CAPTURE_SLOTS];
    snapshot_captures(ctx, snapshot_after_token);

    const char* recursive = matchstar(token, rest, consume, ctx);
    if (recursive != 0)
    {
      return recursive;
    }

    restore_captures(ctx, snapshot_after_token);
    consume = matchtoken(token, consume, ctx);
  }

  restore_captures(ctx, snapshot_entry);
  return matchpattern(rest, text, ctx);
}

uniq const char* matchplus(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* first = matchtoken(token, text, ctx);
  if ((first == 0) || (first == text))
  {
    restore_captures(ctx, snapshot_entry);
    return NULL;
  }

  const char* result = matchstar(token, rest, first, ctx);
  if (result != 0)
  {
    return result;
  }

  restore_captures(ctx, snapshot_entry);
  return NULL;
}

uniq const char* matchquestion(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* skipped = matchpattern(rest, text, ctx);
  if (skipped != 0)
  {
    return skipped;
  }

  restore_captures(ctx, snapshot_entry);

  const char* consumed = matchtoken(token, text, ctx);
  if ((consumed == 0) || (consumed == text))
  {
    restore_captures(ctx, snapshot_entry);
    return NULL;
  }

  const char* with = matchpattern(rest, consumed, ctx);
  if (with != 0)
  {
    return with;
  }

  restore_captures(ctx, snapshot_entry);
  return NULL;
}

uniq const char* matchtoken(regex_t* token, const char* text, match_context* ctx)
{
  switch (token->type)
  {
    case RE_DOT:
      return (*text != '\0' && matchdot(*text)) ? text + 1 : 0;

    case RE_CHAR:
      return (*text != '\0' && token->u.ch == (unsigned char)*text) ? text + 1 : 0;

    case RE_CHAR_CLASS:
      return (*text != '\0' && matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case RE_INV_CHAR_CLASS:
      return (*text != '\0' && !matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case RE_DIGIT:
      return (*text != '\0' && matchdigit(*text)) ? text + 1 : 0;

    case RE_NOT_DIGIT:
      return (*text != '\0' && !matchdigit(*text)) ? text + 1 : 0;

    case RE_ALPHA:
      return (*text != '\0' && matchalphanum(*text)) ? text + 1 : 0;

    case RE_NOT_ALPHA:
      return (*text != '\0' && !matchalphanum(*text)) ? text + 1 : 0;

    case RE_WHITESPACE:
      return (*text != '\0' && matchwhitespace(*text)) ? text + 1 : 0;

    case RE_NOT_WHITESPACE:
      return (*text != '\0' && !matchwhitespace(*text)) ? text + 1 : 0;

    case RE_GROUP:
      return matchgroup(token, (regex_t*)0, text, ctx);

    case RE_BEGIN:
      return (text == ctx->base) ? text : 0;

    case RE_END:
      return (*text == '\0') ? text : 0;

    default:
      break;
  }

  return (const char*)0;
}


uniq int matchdigit(char c)
{
  return xisdigit((unsigned char)c);
}
uniq int matchalpha(char c)
{
  return xisalpha((unsigned char)c);
}
uniq int matchwhitespace(char c)
{
  return xisspace((unsigned char)c);
}
uniq int matchalphanum(char c)
{
  return ((c == '_') || matchalpha(c) || matchdigit(c));
}
uniq int matchrange(char c, const char* str)
{
  return (    (c != '-')
           && (str[0] != '\0')
           && (str[0] != '-')
           && (str[1] == '-')
           && (str[2] != '\0')
           && (    (c >= str[0])
                && (c <= str[2])));
}
uniq int matchdot(char c)
{
#if defined(RE_DOT_MATCHES_NEWLINE) && (RE_DOT_MATCHES_NEWLINE == 1)
  (void)c;
  return 1;
#else
  return c != '\n' && c != '\r';
#endif
}
uniq int ismetachar(char c)
{
  return ((c == 's') || (c == 'S') || (c == 'w') || (c == 'W') || (c == 'd') || (c == 'D'));
}

uniq int matchmetachar(char c, const char* str)
{
  switch (str[0])
  {
    case 'd': return  matchdigit(c);
    case 'D': return !matchdigit(c);
    case 'w': return  matchalphanum(c);
    case 'W': return !matchalphanum(c);
    case 's': return  matchwhitespace(c);
    case 'S': return !matchwhitespace(c);
    default:  return (c == str[0]);
  }
}

uniq int matchcharclass(char c, const char* str)
{
  do
  {
    if (matchrange(c, str))
    {
      return 1;
    }
    else if (str[0] == '\\')
    {
      str += 1;
      if (matchmetachar(c, str))
      {
        return 1;
      }
      else if ((c == str[0]) && !ismetachar(c))
      {
        return 1;
      }
    }
    else if (c == str[0])
    {
      if (c == '-')
      {
        return ((str[-1] == '\0') || (str[1] == '\0'));
      }
      else
      {
        return 1;
      }
    }
  }
  while (*str++ != '\0');

  return 0;
}

uniq void re_print_internal(regex_t* pattern, int depth)
{
  const char* types[] =
  {
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };

  while (pattern != 0 && pattern->type != RE_UNUSED)
  {
    for (int i = 0; i < depth; ++i)
    {
      putchar(' ');
    }
    printf("type: %s", types[pattern->type]);

    if ((pattern->type == RE_CHAR_CLASS) || (pattern->type == RE_INV_CHAR_CLASS))
    {
      printf(" [");
      const unsigned char* ccl = pattern->u.ccl;
      while (*ccl != '\0' && *ccl != ']')
      {
        printf("%c", *ccl);
        ++ccl;
      }
      printf("]");
    }
    else if (pattern->type == RE_CHAR)
    {
      printf(" '%c'", pattern->u.ch);
    }
    else if (pattern->type == RE_GROUP)
    {
      printf(" id=%d\n", pattern->u.group.id);
      re_print_internal(pattern->u.group.first, depth + 2);
      pattern = pattern->next;
      continue;
    }

    printf("\n");
    pattern = pattern->next;
  }
}

uniq int re_get_group_count(re_t pattern)
{
  if (pattern == 0)
  {
    return 0;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  return program->group_count;
}

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif

uniq string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

uniq string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

uniq int char*::index_regex(char* self, char* reg, int default_value)
{
    if(reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    int result = default_value;

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0) 
        {
            result = regex_result;
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

uniq int char*::rindex(char* str, char* search_str, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

uniq int char*::rindex_regex(char* self, char* reg, int default_value)
{
    if(reg == null) {
        return default_value;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return default_value;
    }
    
    int result = default_value;
    
    int offset = 0;

    int n = 0;
    
    string self2 = self.reverse();

    int result = default_value;

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self2, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0) 
        {
            result = strlen(self) -matchlength;
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

uniq string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

uniq int char*::index(char* str, char* search_str, int default_value)
{
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

#if !defined(__BARE_METAL__) && !defined(__PICO__)
uniq string xrealpath(char* path)
{
    if(path == null) {
        return string("");
    }
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}
#endif


uniq string char*::replace(char* self, int index, char c)
{
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

uniq string char*::multiply(char* str, int n)
{
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strncat(result, str, len);
    }

    return result;
}

uniq list<string>*% char*::split_str(char* self, char* str) 
{
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}

uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}

uniq int string::rindex_regex(char* self, char* reg, int default_value=-1)
{
    return char*::rindex_regex(self, reg, default_value);
}

uniq string string::strip(char* self)
{
    return char*::strip(self);
}

uniq int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}

uniq int string::index_regex(char* self, char* reg, int default_value=-1)
{
    return char*::index_regex(self, reg, default_value);
}

uniq string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

uniq string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}

uniq bool char*::match(char* self, char* reg)
{
    if(reg == null) {
        return false;
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return false;
    }
    
    int offset = 0;

    int n = 0;
    
    int matchlength = 0;
    int max_captures = 8;
    re_capture captures[max_captures];
    int regex_result = re_matchp(re, self, &matchlength, captures, max_captures);

    /// match and no group strings ///
    if(regex_result >= 0)
    {
        return true;
    }
    /// no match ///
    else
    {
        return false;
    }
}

uniq list<string>*% char*::scan(char* self, char* reg)
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset + regex_result, offset + regex_result + matchlength);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                result.push_back(match_string);
            }
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

uniq list<string>*% char*::split(char* self, char* reg)
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.add(str);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else
        {
            break;
        }
    }

    if(offset < self.length()) {
        string str = self.substring(offset, -1);
        result.push_back(str);
    }

    return result;
}

uniq string string::sub(char* self, char* reg, char* replace)
{
    return char*::sub(self, reg, replace);
}

uniq list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

uniq list<string>*% string::scan(char* self, char* reg)
{
    return char*::scan(self, reg);
}

uniq list<string>*% string::split(char* self, char* reg)
{
    return char*::split(self, reg);
}

uniq bool string::match(char* self, char* reg)
{
    return char*::match(self, reg);
}

uniq string char*::sub(char* self, char* reg, char* replace)
{
    if(reg == null || reg == null) {
        return string("");
    }
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    auto result = new buffer.initialize();
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            result.append_str(replace);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }

    return result.to_string();
}

uniq string char*::sub_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(reg == null || reg == null) {
        return string("");
    }
    
    auto result = new buffer();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return string("");
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);
            
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }

        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            string str = self.substring(offset, offset + regex_result);

            result.append_str(str);

            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.append_str(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }
    }
    return result.to_string();
}

uniq list<string>*% char*::scan_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    if(reg == null || reg == null) {
        return new list<string>();
    }
    auto result = new list<string>();
    
    re_t re = re_compile(reg);
    
    if(re == NULL) {
        return new list<string>();
    }
    
    int offset = 0;

    int n = 0;
    
    int group_count = re_get_group_count(re);

    while(true) {
        int matchlength = 0;
        int max_captures = 8;
        re_capture captures[max_captures];
        int regex_result = re_matchp(re, self + offset, &matchlength, captures, max_captures);

        /// match and no group strings ///
        if(regex_result >= 0 && group_count == 0)
        {
            list<string>*% group_strings = new list<string>.initialize();
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// group strings ///
        else if(regex_result >= 0 && group_count > 0) {
            list<string>*% group_strings = new list<string>.initialize();

            for(int i=0; i<group_count; i++) {
                re_capture cp = captures[i];
                auto match_string = (self + offset).substring(cp.start, cp.start + cp.length);
                group_strings.push_back(match_string);
            }
            
            string match_string = self.substring(offset + regex_result, offset + regex_result + matchlength);
            
            string block_result = block(parent, match_string, group_strings);
            
            result.add(block_result);
            
            if(matchlength == 0) {
                offset++;
            }
            else {
                offset = offset + regex_result + matchlength;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

uniq string string::sub_block(char* self, char* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    return char*::sub_block(self, reg, parent, block);
}

#if defined(__LINUX__) || defined(__ANDROID__) || defined(__RASPBERRY_PI__) || defined(__MAC__)

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE
#endif

#include <wchar.h>
#include <libgen.h>

typedef wchar_t*% wstring;

uniq wstring __builtin_wstring(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

uniq int wchar_t*::length(wchar_t* str)
{
    return wcslen(str);
}

uniq int wstring::length(wchar_t* str)
{
    return wchar_t*::length(str);
}






uniq string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

uniq string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

uniq wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

uniq int char*::index_count(char* str, char* search_str, int count, int default_value)
{
    int n = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        int len2 = strlen(search_str);
        int j;
        for(j=0; j<len2; j++) {
            if(str[i+j] != search_str[j]) {
                break;
            }
        }
        
        if(j == len2) {
            n++;
            
            if(n == count) {
                return i;
            }
        }
    }
    
    return default_value;
}


uniq int char*::rindex(char* str, char* search_str, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}


uniq int char*::rindex_count(char* str, char* search_str, int count, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;
    
    int n = 0;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            n++;
            if(n == count) {
                return p - str;
            }
        }

        p--;
    }

    return default_value;
}







uniq string char*::strip(char* self)
{
    string result = string(self);
    
    int len = strlen(self);
    
    if(self[len-1] == '\n') {
        result[len-1] = '\0';
    }
    else if(self[len-1] == '\r') {
        result[len-1] = '\0';
    }
    else if(len > 2 && self[len-2] == '\r' && self[len-1] == '\n') {
        result[len-2] = '\0';
    }
    
    return result;
}

uniq string wchar_t*::to_string(wchar_t* wstr)
{
    int len = MB_LEN_MAX*(wcslen(wstr)+1);

    string result = new char[len];

    if(wcstombs(result, wstr, len) < 0) 
    {
        strncpy(result, "", len);
    }

    return result;
}

uniq wstring char*::to_wstring(char* str)
{
    return wstring(str);
}

uniq wstring wchar_t*::delete(wchar_t* str, int head, int tail) 
{
    int len = wcslen(str);

    if(len == 0) {
        return str.to_string().to_wstring();
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return str.to_string().to_wstring();
    }

    if(tail >= len) {
        tail = len;
    }
    
    wstring sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sizeof(wchar_t)*(sub_str.length()+1));

    return str.to_string().to_wstring();
}

uniq int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value)
{
    wchar_t* head = wcsstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}

uniq int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value)
{
    int len = wcslen(search_str);

    wchar_t* p = str + wcslen(str) - len;

    while(p >= str) {
        int len2 = wcslen(p);
        bool result = true;
        int i;
        for(i=0; i<len && i < len2; i++) {
            if(p[i] != search_str[i]) {
                result = false;
            }
        }
        if(result) {
            return (p - str);
        }

        p--;
    }

    return default_value;
}

uniq wstring wchar_t*::reverse(wchar_t* str) 
{
    int len = wcslen(str);
    wstring result = new wchar_t[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq wstring wchar_t*::multiply(wchar_t* str, int n)
{
    int len = wcslen(str) * n + 1;

    wstring result = new wchar_t[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        wcscat(result, str);
    }

    return result;
}

uniq wstring wchar_t*::printable(wchar_t* str)
{
    int len = str.length();
    wstring result = new wchar_t[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        wchar_t c = str[i];

        if((c >= 0 && c < ' ') 
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}


uniq int wchar_t*::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}

uniq int wstring::compare(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right);
}


uniq bool wchar_t*::equals(wchar_t left, wchar_t right)
{
    return left == right;
}


uniq wstring wchar_t*::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::operator_mult(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

uniq bool wstring::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}


uniq wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

uniq wstring wstring::operator_add(wchar_t* left, wchar_t* right)
{
    wchar_t*% result = new wchar_t[wcslen(left) + wcslen(right) + 1];
    
    wcscpy(result, left);
    wcscat(result, right);
    
    return result;
}

uniq int char*::index(char* str, char* search_str, int default_value)
{
    char* head = strstr(str, search_str);

    if(head == null) {
        return default_value;
    }

    return head - str;
}




uniq string char*::replace(char* self, int index, char c)
{
    int len = strlen(self);

    if(strcmp(self, "") == 0) {
        return string(self);
    }
    
    if(index < 0) {
       index += len;
    }

    if(index >= len) {
        index = len-1;
    }

    if(index < 0) {
        index = 0;
    }
    
    self[index] = c;
    
    return string(self);
}

uniq string char*::multiply(char* str, int n)
{
    int len = strlen(str) * n + 1;

    char*% result = new char[len];

    result[0] = '\0';

    for(int i=0; i<n; i++) {
        strcat(result, str);
    }

    return result;
}




uniq list<string>*% char*::split_str(char* self, char* str) 
{
    auto result = new list<string>.initialize();

    auto buf = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(strstr(self + i, str) == self + i) {
            result.push_back(string(buf.buf));
            buf.reset();
            i += strlen(str)-1;
        }
        else {
            buf.append_char(self[i]);
        }
    }
    if(buf.length() != 0) {
        result.push_back(string(buf.buf));
    }

    return result;
}









uniq unsigned int wchar_t*::get_hash_key(wchar_t* value)
{
    int result = 0;
    wchar_t* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wstring::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}


uniq bool wchar_t::operator_equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq bool wchar_t::operator_not_equals(wchar_t left, wchar_t right)
{
    return left != right;
}

uniq unsigned int wchar_t::get_hash_key(wchar_t value)
{
    return value;
}

uniq bool wchar_t::equals(wchar_t left, wchar_t right)
{
    return left == right;
}

uniq string wchar_t::to_string(wchar_t wc)
{
    return xsprintf("%ls", wc);
}

uniq string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

uniq string xrealpath(char* path)
{
    if(path == null) {
        return string("");
    }
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

uniq string xdirname(char* path)
{
    if(path == null) {
        return string("");
    }
    return string(dirname(string(path)));
}

uniq size_t xwcslen(wchar_t* wstr)
{
    wchar_t* p = wstr;
    
    size_t len = 0;
    while(*p) {
        p++;
        len++;
    }
    
    return len;
}

#ifdef __DEBIAN__
#define wcslen(o) xwcslen(o)
#endif

uniq wstring wstring::substring(wchar_t* str, int head, int tail) 
{
    return wchar_t*::substring(str, head, tail);
}

uniq int string::index_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::index_count(str, search_str, count, default_value);
}


uniq int string::rindex(char* str, char* search_str, int default_value=-1) 
{
    return char*::rindex(str, search_str, default_value);
}


uniq int string::rindex_count(char* str, char* search_str, int count=1, int default_value=-1)
{
    return char*::rindex_count(str, search_str, count, default_value);
}






uniq string string::strip(char* self)
{
    return char*::strip(self);
}

uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

uniq string wstring::to_string(wchar_t* wstr)
{
    return wchar_t*::to_string(wstr);
}

uniq wstring int::to_wstring(int self)
{
    return xsprintf("%d", self).to_wstring();
}

uniq wstring wstring::delete(wchar_t* str, int head, int tail)
{
    return wchar_t*::delete(str, head, tail);
}

uniq int wstring::index(wchar_t* str, wchar_t* search_str, int default_value=1)
{
    return wchar_t*::index(str, search_str, default_value);
}

uniq int wstring::rindex(wchar_t* str, wchar_t* search_str, int default_value=-1)
{
    return wchar_t*::rindex(str, search_str, default_value);
}

uniq wstring wstring::reverse(wchar_t* str)
{
    return wchar_t*::reverse(str);
}

uniq wstring wstring::multiply(wchar_t* str, int n)
{
    return wchar_t*::multiply(str, n);
}

uniq wstring wstring::printable(wchar_t* str)
{
    return wchar_t*::printable(str);
}

uniq unsigned int wstring::get_hash_key(wchar_t* value)
{
    return wchar_t*::get_hash_key(value);
}


uniq int string::index(char* str, char* search_str, int default_value=-1)
{
    return char*::index(str, search_str, default_value);
}


uniq string string::replace(char* self, int index, char c)
{
    return char*::replace(self, index, c);
}

uniq string string::multiply(char* str, int n)
{
    return char*::multiply(str, n);
}



uniq list<string>*% string::split_str(char* self, char* str)
{
    return char*::split_str(self, str);
}

uniq wstring string::to_wstring(char* str)
{
    return char*::to_wstring(str);
}

uniq string char*::chomp(char* str)
{
    return string::chomp(str);
}

uniq bool wchar_t*::equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) == 0;
}

uniq bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right)
{
    return wcscmp(left, right) != 0;
}

#endif

//////////////////////////////
/// base library(IO-FILE)
//////////////////////////////
#if !defined(__MINUX__) && !defined(__BARE_METAL__) && !defined(__PICO__)
uniq string FILE*::read(FILE* f)
{
    if(f == null) {
        return string("");
    }
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

uniq int FILE*::write(FILE* f, char* str)
{
    if(f == null || str == null) {
        return -1;
    }
    
    return fwrite(str, strlen(str), 1, f);
}

uniq int FILE*::fclose(FILE* f) 
{
    if(f == null) {
        return -1;
    }
    
    int result = fclose(f);
    
    if(result < 0) {
        return result;
    }
    
    return result;
}

uniq FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    if(f == null || msg == null) {
        return f;
    }
    char msg2[1024*2*2*2];

    va_list` args;
    va_start(args, msg);
    vsnprintf(msg2, 1024*2*2*2, msg, args);
    va_end(args);

    int result = fprintf(f, "%s", msg2);
    
    if(result < 0) {
        return f;
    }
    
    return f;
}

uniq int char*::write(char* self, char* file_name, bool append=false) 
{
    if(self == null || file_name == null) {
        return -1;
    }
    
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    if(f == NULL) {
        return -1;
    }
    
    int result = fwrite(self, strlen(self), 1, f);
    
    if(result < 0) {
        return result;
    }
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return result2;
    }
    
    return result;
}

uniq string char*::read(char* file_name) 
{
    if(file_name == null) {
        return string("");
    }
    
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return string("");
    }
    
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    string result = buf.to_string();
    
    int result2 = fclose(f)
    
    if(result2 < 0) {
        return string("");
    }
    
    return result;
}

uniq list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();
    
    if(f == null) {
        return result;
    }
    
    while(1) {
        char buf[BUFSIZ];
        
        if(fgets(buf, BUFSIZ, f) == NULL) {
            break;
        }
        
        result.push_back(string(buf));
    }
    
    return result;
}

uniq bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

uniq bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

uniq bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}
#endif

#endif
