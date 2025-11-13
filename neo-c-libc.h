#ifdef NEO_C_LIBC_H
#define NEO_C_LIB_H

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
#endif
