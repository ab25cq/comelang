/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct real_pcre;

struct real_pcre16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

struct tm;

/// struct definition ///
typedef unsigned long  int size_t;

typedef __builtin_va_list __gnuc_va_list;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char __int_least8_t;

typedef unsigned char __uint_least8_t;

typedef short int __int_least16_t;

typedef unsigned short int __uint_least16_t;

typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;

typedef long  int __int_least64_t;

typedef unsigned long  int __uint_least64_t;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

struct anonymous_typeX1
{
    int __val[2];
};

typedef struct anonymous_typeX1 __fsid_t;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int __loff_t;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ4
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX2
{
    int __count;
    union anonymous_typeZ4 __value;
};

typedef struct anonymous_typeX2 __mbstate_t;

struct _G_fpos_t
{
    long  int __pos;
    struct anonymous_typeX2 __state;
};

typedef struct _G_fpos_t __fpos_t;

struct _G_fpos64_t
{
    long  int __pos;
    struct anonymous_typeX2 __state;
};

typedef struct _G_fpos64_t __fpos64_t;

typedef struct _IO_FILE __FILE;

typedef struct _IO_FILE FILE;

typedef void _IO_lock_t;

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker* _markers;
    struct _IO_FILE* _chain;
    int _fileno;
    int _flags2;
    long  int _old_offset;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void* _lock;
    long  int _offset;
    struct _IO_codecvt* _codecvt;
    struct _IO_wide_data* _wide_data;
    struct _IO_FILE* _freeres_list;
    void* _freeres_buf;
    unsigned long  int __pad5;
    int _mode;
    char _unused2[15*sizeof(int)-4*sizeof(void*)-sizeof(unsigned long  int)];
};

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int);

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int);

typedef int (*cookie_seek_function_t)(void*,long  int*,int);

typedef int (*cookie_close_function_t)(void*);

struct _IO_cookie_io_functions_t
{
    long  int (*read)(void*,char*,unsigned long  int);
    long  int (*write)(void*,const char*,unsigned long  int);
    int (*seek)(void*,long  int*,int);
    int (*close)(void*);
};

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef __builtin_va_list va_list;

typedef long  int off_t;

typedef long  int off64_t;

typedef long  int ssize_t;

typedef struct _G_fpos_t fpos_t;

typedef struct _G_fpos64_t fpos64_t;

extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
typedef float _Float32;

typedef double _Float64;

typedef double _Float32x;

typedef long  double _Float64x;

typedef int wchar_t;

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX7 lldiv_t;

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

typedef struct __locale_struct* __locale_t;

typedef struct __locale_struct* locale_t;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef long  int quad_t;

typedef unsigned long  int u_quad_t;

typedef struct anonymous_typeX1 fsid_t;

typedef long  int loff_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned long  int dev_t;

typedef unsigned int gid_t;

typedef unsigned int mode_t;

typedef unsigned long  int nlink_t;

typedef unsigned int uid_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int daddr_t;

typedef char* caddr_t;

typedef int key_t;

typedef long  int clock_t;

typedef int clockid_t;

typedef long  int time_t;

typedef void* timer_t;

typedef unsigned int useconds_t;

typedef long  int suseconds_t;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char int8_t;

typedef short int int16_t;

typedef int int32_t;

typedef long  int int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  int u_int64_t;

typedef int register_t;

struct anonymous_typeX8
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

typedef struct anonymous_typeX8 __sigset_t;

typedef struct anonymous_typeX8 sigset_t;

struct timeval
{
    long  int tv_sec;
    long  int tv_usec;
};

struct timespec
{
    long  int tv_sec;
    long  int tv_nsec;
};

typedef long  int __fd_mask;

struct anonymous_typeX9
{
    long  int fds_bits[1024/(8*(int)sizeof(long  int))];
};

typedef struct anonymous_typeX9 fd_set;

typedef long  int fd_mask;

typedef long  int blksize_t;

typedef long  int blkcnt_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef long  int blkcnt64_t;

typedef unsigned long  int fsblkcnt64_t;

typedef unsigned long  int fsfilcnt64_t;

struct anonymous_typeX11
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ10
{
unsigned long long int __value64;
struct anonymous_typeX11 __value32;
};

typedef union anonymous_typeZ10 __atomic_wide_counter;

struct __pthread_internal_list
{
    struct __pthread_internal_list* __prev;
    struct __pthread_internal_list* __next;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_slist
{
    struct __pthread_internal_slist* __next;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list __list;
};

struct __pthread_rwlock_arch_t
{
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union anonymous_typeZ10 __wseq;
    union anonymous_typeZ10 __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

struct anonymous_typeX12
{
    int __data;
};

typedef struct anonymous_typeX12 __once_flag;

typedef unsigned long  int pthread_t;

union anonymous_typeZ13
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ13 pthread_mutexattr_t;

union anonymous_typeZ14
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ14 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
char __size[56];
long  int __align;
};

typedef union pthread_attr_t pthread_attr_t;

union anonymous_typeZ15
{
struct __pthread_mutex_s __data;
char __size[40];
long  int __align;
};

typedef union anonymous_typeZ15 pthread_mutex_t;

union anonymous_typeZ16
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};

typedef union anonymous_typeZ16 pthread_cond_t;

union anonymous_typeZ17
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long  int __align;
};

typedef union anonymous_typeZ17 pthread_rwlock_t;

union anonymous_typeZ18
{
char __size[8];
long  int __align;
};

typedef union anonymous_typeZ18 pthread_rwlockattr_t;

typedef int pthread_spinlock_t;

union anonymous_typeZ19
{
char __size[32];
long  int __align;
};

typedef union anonymous_typeZ19 pthread_barrier_t;

union anonymous_typeZ20
{
char __size[4];
int __align;
};

typedef union anonymous_typeZ20 pthread_barrierattr_t;

struct random_data
{
    int* fptr;
    int* rptr;
    int* state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int* end_ptr;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*);

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern char* program_invocation_name;
extern char* program_invocation_short_name;
typedef int error_t;

typedef void* any;

typedef char* string;

extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
struct buffer
{
    unsigned char* buf;
    int len;
    int size;
};

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct integer
{
    long value;
};

struct floating
{
    double value;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
};

typedef struct real_pcre pcre;

typedef struct real_pcre16 pcre16;

typedef struct real_pcre32 pcre32;

typedef struct real_pcre_jit_stack pcre_jit_stack;

typedef struct real_pcre16_jit_stack pcre16_jit_stack;

typedef struct real_pcre32_jit_stack pcre32_jit_stack;

struct pcre_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};

typedef struct pcre_extra pcre_extra;

struct pcre16_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};

typedef struct pcre16_extra pcre16_extra;

struct pcre32_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};

typedef struct pcre32_extra pcre32_extra;

struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};

typedef struct pcre_callout_block pcre_callout_block;

struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};

typedef struct pcre16_callout_block pcre16_callout_block;

struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};

typedef struct pcre32_callout_block pcre32_callout_block;

extern void* (*pcre_malloc)(unsigned long  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);

typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);

typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);

typedef unsigned int wint_t;

typedef struct anonymous_typeX2 mbstate_t;

typedef int* wstring;

struct come_regex
{
    char* str;
    struct real_pcre* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre* re;
};

struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
};

struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

// source head

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE* __stream);
struct _IO_FILE* tmpfile();
struct _IO_FILE* tmpfile64();
char* tmpnam(char anonymous_var_nameX1[20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx);
int fflush(struct _IO_FILE* __stream);
int fflush_unlocked(struct _IO_FILE* __stream);
int fcloseall();
struct _IO_FILE* fopen(const char* __filename, const char* __modes);
struct _IO_FILE* freopen(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fopen64(const char* __filename, const char* __modes);
struct _IO_FILE* freopen64(const char* __filename, const char* __modes, struct _IO_FILE* __stream);
struct _IO_FILE* fdopen(int __fd, const char* __modes);
struct _IO_FILE* fopencookie(void* __magic_cookie, const char* __modes, struct _IO_cookie_io_functions_t __io_funcs);
struct _IO_FILE* fmemopen(void* __s, unsigned long  int __len, const char* __modes);
struct _IO_FILE* open_memstream(char** __bufloc, unsigned long  int* __sizeloc);
void setbuf(struct _IO_FILE* __stream, char* __buf);
int setvbuf(struct _IO_FILE* __stream, char* __buf, int __modes, unsigned long  int __n);
void setbuffer(struct _IO_FILE* __stream, char* __buf, unsigned long  int __size);
void setlinebuf(struct _IO_FILE* __stream);
int fprintf(struct _IO_FILE* __stream, const char* __format, ...);
int printf(const char* __format, ...);
int sprintf(char* __s, const char* __format, ...);
int vfprintf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vprintf(const char* __format, va_list __arg);
int vsprintf(char* __s, const char* __format, va_list __arg);
int snprintf(char* __s, unsigned long  int __maxlen, const char* __format, ...);
int vsnprintf(char* __s, unsigned long  int __maxlen, const char* __format, va_list __arg);
int vasprintf(char** __ptr, const char* __f, va_list __arg);
int __asprintf(char** __ptr, const char* __fmt, ...);
int asprintf(char** __ptr, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, va_list __arg);
int dprintf(int __fd, const char* __fmt, ...);
int fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int scanf(const char* __format, ...);
int sscanf(const char* __s, const char* __format, ...);
int __isoc99_fscanf(struct _IO_FILE* __stream, const char* __format, ...);
int __isoc99_scanf(const char* __format, ...);
int __isoc99_sscanf(const char* __s, const char* __format, ...);
int vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int vscanf(const char* __format, va_list __arg);
int vsscanf(const char* __s, const char* __format, va_list __arg);
int __isoc99_vfscanf(struct _IO_FILE* __s, const char* __format, va_list __arg);
int __isoc99_vscanf(const char* __format, va_list __arg);
int __isoc99_vsscanf(const char* __s, const char* __format, va_list __arg);
int fgetc(struct _IO_FILE* __stream);
int getc(struct _IO_FILE* __stream);
int getchar();
int getc_unlocked(struct _IO_FILE* __stream);
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE* __stream);
int fputc(int __c, struct _IO_FILE* __stream);
int putc(int __c, struct _IO_FILE* __stream);
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE* __stream);
int putc_unlocked(int __c, struct _IO_FILE* __stream);
int putchar_unlocked(int __c);
int getw(struct _IO_FILE* __stream);
int putw(int __w, struct _IO_FILE* __stream);
char* fgets(char* __s, int __n, struct _IO_FILE* __stream);
char* fgets_unlocked(char* __s, int __n, struct _IO_FILE* __stream);
long  int __getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getdelim(char** __lineptr, unsigned long  int* __n, int __delimiter, struct _IO_FILE* __stream);
long  int getline(char** __lineptr, unsigned long  int* __n, struct _IO_FILE* __stream);
int fputs(const char* __s, struct _IO_FILE* __stream);
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE* __stream);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __s);
int fputs_unlocked(const char* __s, struct _IO_FILE* __stream);
unsigned long  int fread_unlocked(void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
unsigned long  int fwrite_unlocked(const void* __ptr, unsigned long  int __size, unsigned long  int __n, struct _IO_FILE* __stream);
int fseek(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftell(struct _IO_FILE* __stream);
void rewind(struct _IO_FILE* __stream);
int fseeko(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello(struct _IO_FILE* __stream);
int fgetpos(struct _IO_FILE* __stream, struct _G_fpos_t* __pos);
int fsetpos(struct _IO_FILE* __stream, const struct _G_fpos_t* __pos);
int fseeko64(struct _IO_FILE* __stream, long  int __off, int __whence);
long  int ftello64(struct _IO_FILE* __stream);
int fgetpos64(struct _IO_FILE* __stream, struct _G_fpos64_t* __pos);
int fsetpos64(struct _IO_FILE* __stream, const struct _G_fpos64_t* __pos);
void clearerr(struct _IO_FILE* __stream);
int feof(struct _IO_FILE* __stream);
int ferror(struct _IO_FILE* __stream);
void clearerr_unlocked(struct _IO_FILE* __stream);
int feof_unlocked(struct _IO_FILE* __stream);
int ferror_unlocked(struct _IO_FILE* __stream);
void perror(const char* __s);
int fileno(struct _IO_FILE* __stream);
int fileno_unlocked(struct _IO_FILE* __stream);
int pclose(struct _IO_FILE* __stream);
struct _IO_FILE* popen(const char* __command, const char* __modes);
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __obstack, const char* __format, ...);
int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);
void flockfile(struct _IO_FILE* __stream);
int ftrylockfile(struct _IO_FILE* __stream);
void funlockfile(struct _IO_FILE* __stream);
int __uflow(struct _IO_FILE* anonymous_var_nameX2);
int __overflow(struct _IO_FILE* anonymous_var_nameX3, int anonymous_var_nameX4);
unsigned long  int __ctype_get_mb_cur_max();
double atof(const char* __nptr);
int atoi(const char* __nptr);
long  int atol(const char* __nptr);
long long int atoll(const char* __nptr);
double strtod(const char* __nptr, char** __endptr);
float strtof(const char* __nptr, char** __endptr);
long  double strtold(const char* __nptr, char** __endptr);
float strtof32(const char* __nptr, char** __endptr);
double strtof64(const char* __nptr, char** __endptr);
double strtof32x(const char* __nptr, char** __endptr);
long  double strtof64x(const char* __nptr, char** __endptr);
long  int strtol(const char* __nptr, char** __endptr, int __base);
unsigned long  int strtoul(const char* __nptr, char** __endptr, int __base);
long long int strtoq(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtouq(const char* __nptr, char** __endptr, int __base);
long long int strtoll(const char* __nptr, char** __endptr, int __base);
unsigned long long int strtoull(const char* __nptr, char** __endptr, int __base);
int strfromd(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int __size, const char* __format, float __f);
int strfromf64(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf32x(char* __dest, unsigned long  int __size, const char* __format, double __f);
int strfromf64x(char* __dest, unsigned long  int __size, const char* __format, long  double __f);
long  int strtol_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int strtoul_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
long long int strtoll_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int strtoull_l(const char* __nptr, char** __endptr, int __base, struct __locale_struct* __loc);
double strtod_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtold_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
float strtof32_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof64_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
double strtof32x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
long  double strtof64x_l(const char* __nptr, char** __endptr, struct __locale_struct* __loc);
char* l64a(long  int __n);
long  int a64l(const char* __s);
int select(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, struct timeval* __timeout);
int pselect(int __nfds, struct anonymous_typeX9* __readfds, struct anonymous_typeX9* __writefds, struct anonymous_typeX9* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX8* __sigmask);
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  int __statelen);
char* setstate(char* __statebuf);
int random_r(struct random_data* __buf, int* __result);
int srandom_r(unsigned int __seed, struct random_data* __buf);
int initstate_r(unsigned int __seed, char* __statebuf, unsigned long  int __statelen, struct random_data* __buf);
int setstate_r(char* __statebuf, struct random_data* __buf);
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __buffer, double* __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, double* __result);
int lrand48_r(struct drand48_data* __buffer, long  int* __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int mrand48_r(struct drand48_data* __buffer, long  int* __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __buffer, long  int* __result);
int srand48_r(long  int __seedval, struct drand48_data* __buffer);
int seed48_r(unsigned short int __seed16v[3], struct drand48_data* __buffer);
int lcong48_r(unsigned short int __param[7], struct drand48_data* __buffer);
unsigned int arc4random();
void arc4random_buf(void* __buf, unsigned long  int __size);
unsigned int arc4random_uniform(unsigned int __upper_bound);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __nmemb, unsigned long  int __size);
void* realloc(void* __ptr, unsigned long  int __size);
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  int __nmemb, unsigned long  int __size);
void* alloca(unsigned long  int __size);
void* valloc(unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
void abort();
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status);
void quick_exit(int __status);
void _Exit(int __status);
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name);
char* realpath(const char* __name, char* __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__compar)(const void*,const void*,void*), void* __arg);
int abs(int __x);
long  int labs(long  int __x);
long long int llabs(long long int __x);
struct anonymous_typeX5 div(int __numer, int __denom);
struct anonymous_typeX6 ldiv(long  int __numer, long  int __denom);
struct anonymous_typeX7 lldiv(long long int __numer, long long int __denom);
char* ecvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* fcvt(double __value, int __ndigit, int* __decpt, int* __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qfcvt(long  double __value, int __ndigit, int* __decpt, int* __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int fcvt_r(double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qecvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int qfcvt_r(long  double __value, int __ndigit, int* __decpt, int* __sign, char* __buf, unsigned long  int __len);
int mblen(const char* __s, unsigned long  int __n);
int mbtowc(int* __pwc, const char* __s, unsigned long  int __n);
int wctomb(char* __s, int __wchar);
unsigned long  int mbstowcs(int* __pwcs, const char* __s, unsigned long  int __n);
unsigned long  int wcstombs(char* __s, const int* __pwcs, unsigned long  int __n);
int rpmatch(const char* __response);
int getsubopt(char** __optionp, char** __tokens, char** __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __buflen);
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __dest, const void* __src, unsigned long  int __n);
void* memmove(void* __dest, const void* __src, unsigned long  int __n);
void* memccpy(void* __dest, const void* __src, int __c, unsigned long  int __n);
void* memset(void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  int __n);
void* memchr(const void* __s, int __c, unsigned long  int __n);
void* rawmemchr(const void* __s, int __c);
void* memrchr(const void* __s, int __c, unsigned long  int __n);
char* strcpy(char* __dest, const char* __src);
char* strncpy(char* __dest, const char* __src, unsigned long  int __n);
char* strcat(char* __dest, const char* __src);
char* strncat(char* __dest, const char* __src, unsigned long  int __n);
int strcmp(const char* __s1, const char* __s2);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcoll(const char* __s1, const char* __s2);
unsigned long  int strxfrm(char* __dest, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct* __l);
unsigned long  int strxfrm_l(char* __dest, const char* __src, unsigned long  int __n, struct __locale_struct* __l);
char* strdup(const char* __s);
char* strndup(const char* __string, unsigned long  int __n);
char* strchr(const char* __s, int __c);
char* strrchr(const char* __s, int __c);
char* strchrnul(const char* __s, int __c);
unsigned long  int strcspn(const char* __s, const char* __reject);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strpbrk(const char* __s, const char* __accept);
char* strstr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delim);
char* __strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strtok_r(char* __s, const char* __delim, char** __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle);
void* memmem(const void* __haystack, unsigned long  int __haystacklen, const void* __needle, unsigned long  int __needlelen);
void* __mempcpy(void* __dest, const void* __src, unsigned long  int __n);
void* mempcpy(void* __dest, const void* __src, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int strnlen(const char* __string, unsigned long  int __maxlen);
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  int __buflen);
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct* __l);
int bcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void bcopy(const void* __src, void* __dest, unsigned long  int __n);
void bzero(void* __s, unsigned long  int __n);
char* index(const char* __s, int __c);
char* rindex(const char* __s, int __c);
int ffs(int __i);
int ffsl(long  int __l);
int ffsll(long long int __ll);
int strcasecmp(const char* __s1, const char* __s2);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct* __loc);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_struct* __loc);
void explicit_bzero(void* __s, unsigned long  int __n);
char* strsep(char** __stringp, const char* __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __dest, const char* __src);
char* stpcpy(char* __dest, const char* __src);
char* __stpncpy(char* __dest, const char* __src, unsigned long  int __n);
char* stpncpy(char* __dest, const char* __src, unsigned long  int __n);
int strverscmp(const char* __s1, const char* __s2);
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  int __n);
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv* localeconv();
struct __locale_struct* newlocale(int __category_mask, const char* __locale, struct __locale_struct* __base);
struct __locale_struct* duplocale(struct __locale_struct* __dataset);
void freelocale(struct __locale_struct* __dataset);
struct __locale_struct* uselocale(struct __locale_struct* __dataset);
int* __errno_location();
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function);
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function);
void __assert(const char* __assertion, const char* __file, int __line);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_format(struct buffer* self, char* str, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
char* buffer_printable(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool int_equals(int self, int right);
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(int c);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* charp_printable(char* str);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
struct real_pcre* pcre_compile(const char* anonymous_var_nameX162, int anonymous_var_nameX163, const char** anonymous_var_nameX164, int* anonymous_var_nameX165, const unsigned char* anonymous_var_nameX166);
struct real_pcre16* pcre16_compile(const unsigned short int* anonymous_var_nameX167, int anonymous_var_nameX168, const char** anonymous_var_nameX169, int* anonymous_var_nameX170, const unsigned char* anonymous_var_nameX171);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX172, int anonymous_var_nameX173, const char** anonymous_var_nameX174, int* anonymous_var_nameX175, const unsigned char* anonymous_var_nameX176);
struct real_pcre* pcre_compile2(const char* anonymous_var_nameX177, int anonymous_var_nameX178, int* anonymous_var_nameX179, const char** anonymous_var_nameX180, int* anonymous_var_nameX181, const unsigned char* anonymous_var_nameX182);
struct real_pcre16* pcre16_compile2(const unsigned short int* anonymous_var_nameX183, int anonymous_var_nameX184, int* anonymous_var_nameX185, const char** anonymous_var_nameX186, int* anonymous_var_nameX187, const unsigned char* anonymous_var_nameX188);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX189, int anonymous_var_nameX190, int* anonymous_var_nameX191, const char** anonymous_var_nameX192, int* anonymous_var_nameX193, const unsigned char* anonymous_var_nameX194);
int pcre_config(int anonymous_var_nameX195, void* anonymous_var_nameX196);
int pcre16_config(int anonymous_var_nameX197, void* anonymous_var_nameX198);
int pcre32_config(int anonymous_var_nameX199, void* anonymous_var_nameX200);
int pcre_copy_named_substring(const struct real_pcre* anonymous_var_nameX201, const char* anonymous_var_nameX202, int* anonymous_var_nameX203, int anonymous_var_nameX204, const char* anonymous_var_nameX205, char* anonymous_var_nameX206, int anonymous_var_nameX207);
int pcre16_copy_named_substring(const struct real_pcre16* anonymous_var_nameX208, const unsigned short int* anonymous_var_nameX209, int* anonymous_var_nameX210, int anonymous_var_nameX211, const unsigned short int* anonymous_var_nameX212, unsigned short int* anonymous_var_nameX213, int anonymous_var_nameX214);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX215, const unsigned int* anonymous_var_nameX216, int* anonymous_var_nameX217, int anonymous_var_nameX218, const unsigned int* anonymous_var_nameX219, unsigned int* anonymous_var_nameX220, int anonymous_var_nameX221);
int pcre_copy_substring(const char* anonymous_var_nameX222, int* anonymous_var_nameX223, int anonymous_var_nameX224, int anonymous_var_nameX225, char* anonymous_var_nameX226, int anonymous_var_nameX227);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX228, int* anonymous_var_nameX229, int anonymous_var_nameX230, int anonymous_var_nameX231, unsigned short int* anonymous_var_nameX232, int anonymous_var_nameX233);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX234, int* anonymous_var_nameX235, int anonymous_var_nameX236, int anonymous_var_nameX237, unsigned int* anonymous_var_nameX238, int anonymous_var_nameX239);
int pcre_dfa_exec(const struct real_pcre* anonymous_var_nameX240, const struct pcre_extra* anonymous_var_nameX241, const char* anonymous_var_nameX242, int anonymous_var_nameX243, int anonymous_var_nameX244, int anonymous_var_nameX245, int* anonymous_var_nameX246, int anonymous_var_nameX247, int* anonymous_var_nameX248, int anonymous_var_nameX249);
int pcre16_dfa_exec(const struct real_pcre16* anonymous_var_nameX250, const struct pcre16_extra* anonymous_var_nameX251, const unsigned short int* anonymous_var_nameX252, int anonymous_var_nameX253, int anonymous_var_nameX254, int anonymous_var_nameX255, int* anonymous_var_nameX256, int anonymous_var_nameX257, int* anonymous_var_nameX258, int anonymous_var_nameX259);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX260, const struct pcre32_extra* anonymous_var_nameX261, const unsigned int* anonymous_var_nameX262, int anonymous_var_nameX263, int anonymous_var_nameX264, int anonymous_var_nameX265, int* anonymous_var_nameX266, int anonymous_var_nameX267, int* anonymous_var_nameX268, int anonymous_var_nameX269);
int pcre_exec(const struct real_pcre* anonymous_var_nameX270, const struct pcre_extra* anonymous_var_nameX271, const char* anonymous_var_nameX272, int anonymous_var_nameX273, int anonymous_var_nameX274, int anonymous_var_nameX275, int* anonymous_var_nameX276, int anonymous_var_nameX277);
int pcre16_exec(const struct real_pcre16* anonymous_var_nameX278, const struct pcre16_extra* anonymous_var_nameX279, const unsigned short int* anonymous_var_nameX280, int anonymous_var_nameX281, int anonymous_var_nameX282, int anonymous_var_nameX283, int* anonymous_var_nameX284, int anonymous_var_nameX285);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX286, const struct pcre32_extra* anonymous_var_nameX287, const unsigned int* anonymous_var_nameX288, int anonymous_var_nameX289, int anonymous_var_nameX290, int anonymous_var_nameX291, int* anonymous_var_nameX292, int anonymous_var_nameX293);
int pcre_jit_exec(const struct real_pcre* anonymous_var_nameX294, const struct pcre_extra* anonymous_var_nameX295, const char* anonymous_var_nameX296, int anonymous_var_nameX297, int anonymous_var_nameX298, int anonymous_var_nameX299, int* anonymous_var_nameX300, int anonymous_var_nameX301, struct real_pcre_jit_stack* anonymous_var_nameX302);
int pcre16_jit_exec(const struct real_pcre16* anonymous_var_nameX303, const struct pcre16_extra* anonymous_var_nameX304, const unsigned short int* anonymous_var_nameX305, int anonymous_var_nameX306, int anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int anonymous_var_nameX310, struct real_pcre16_jit_stack* anonymous_var_nameX311);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX312, const struct pcre32_extra* anonymous_var_nameX313, const unsigned int* anonymous_var_nameX314, int anonymous_var_nameX315, int anonymous_var_nameX316, int anonymous_var_nameX317, int* anonymous_var_nameX318, int anonymous_var_nameX319, struct real_pcre32_jit_stack* anonymous_var_nameX320);
void pcre_free_substring(const char* anonymous_var_nameX321);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX322);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX323);
void pcre_free_substring_list(const char** anonymous_var_nameX324);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX325);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX326);
int pcre_fullinfo(const struct real_pcre* anonymous_var_nameX327, const struct pcre_extra* anonymous_var_nameX328, int anonymous_var_nameX329, void* anonymous_var_nameX330);
int pcre16_fullinfo(const struct real_pcre16* anonymous_var_nameX331, const struct pcre16_extra* anonymous_var_nameX332, int anonymous_var_nameX333, void* anonymous_var_nameX334);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX335, const struct pcre32_extra* anonymous_var_nameX336, int anonymous_var_nameX337, void* anonymous_var_nameX338);
int pcre_get_named_substring(const struct real_pcre* anonymous_var_nameX339, const char* anonymous_var_nameX340, int* anonymous_var_nameX341, int anonymous_var_nameX342, const char* anonymous_var_nameX343, const char** anonymous_var_nameX344);
int pcre16_get_named_substring(const struct real_pcre16* anonymous_var_nameX345, const unsigned short int* anonymous_var_nameX346, int* anonymous_var_nameX347, int anonymous_var_nameX348, const unsigned short int* anonymous_var_nameX349, const unsigned short int** anonymous_var_nameX350);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX351, const unsigned int* anonymous_var_nameX352, int* anonymous_var_nameX353, int anonymous_var_nameX354, const unsigned int* anonymous_var_nameX355, const unsigned int** anonymous_var_nameX356);
int pcre_get_stringnumber(const struct real_pcre* anonymous_var_nameX357, const char* anonymous_var_nameX358);
int pcre16_get_stringnumber(const struct real_pcre16* anonymous_var_nameX359, const unsigned short int* anonymous_var_nameX360);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX361, const unsigned int* anonymous_var_nameX362);
int pcre_get_stringtable_entries(const struct real_pcre* anonymous_var_nameX363, const char* anonymous_var_nameX364, char** anonymous_var_nameX365, char** anonymous_var_nameX366);
int pcre16_get_stringtable_entries(const struct real_pcre16* anonymous_var_nameX367, const unsigned short int* anonymous_var_nameX368, unsigned short int** anonymous_var_nameX369, unsigned short int** anonymous_var_nameX370);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX371, const unsigned int* anonymous_var_nameX372, unsigned int** anonymous_var_nameX373, unsigned int** anonymous_var_nameX374);
int pcre_get_substring(const char* anonymous_var_nameX375, int* anonymous_var_nameX376, int anonymous_var_nameX377, int anonymous_var_nameX378, const char** anonymous_var_nameX379);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX380, int* anonymous_var_nameX381, int anonymous_var_nameX382, int anonymous_var_nameX383, const unsigned short int** anonymous_var_nameX384);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX385, int* anonymous_var_nameX386, int anonymous_var_nameX387, int anonymous_var_nameX388, const unsigned int** anonymous_var_nameX389);
int pcre_get_substring_list(const char* anonymous_var_nameX390, int* anonymous_var_nameX391, int anonymous_var_nameX392, const char*** anonymous_var_nameX393);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX394, int* anonymous_var_nameX395, int anonymous_var_nameX396, const unsigned short int*** anonymous_var_nameX397);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX398, int* anonymous_var_nameX399, int anonymous_var_nameX400, const unsigned int*** anonymous_var_nameX401);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre* anonymous_var_nameX402, int anonymous_var_nameX403);
int pcre16_refcount(struct real_pcre16* anonymous_var_nameX404, int anonymous_var_nameX405);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX406, int anonymous_var_nameX407);
struct pcre_extra* pcre_study(const struct real_pcre* anonymous_var_nameX408, int anonymous_var_nameX409, const char** anonymous_var_nameX410);
struct pcre16_extra* pcre16_study(const struct real_pcre16* anonymous_var_nameX411, int anonymous_var_nameX412, const char** anonymous_var_nameX413);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX414, int anonymous_var_nameX415, const char** anonymous_var_nameX416);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX417);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX418);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX419);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre* anonymous_var_nameX420, struct pcre_extra* anonymous_var_nameX421, const unsigned char* anonymous_var_nameX422);
int pcre16_pattern_to_host_byte_order(struct real_pcre16* anonymous_var_nameX423, struct pcre16_extra* anonymous_var_nameX424, const unsigned char* anonymous_var_nameX425);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX426, struct pcre32_extra* anonymous_var_nameX427, const unsigned char* anonymous_var_nameX428);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX429, const unsigned short int* anonymous_var_nameX430, int anonymous_var_nameX431, int* anonymous_var_nameX432, int anonymous_var_nameX433);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX434, const unsigned int* anonymous_var_nameX435, int anonymous_var_nameX436, int* anonymous_var_nameX437, int anonymous_var_nameX438);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX439, int anonymous_var_nameX440);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX441, int anonymous_var_nameX442);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX443, int anonymous_var_nameX444);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX445);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX446);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX447);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX448, struct real_pcre_jit_stack* (*anonymous_var_nameX449)(void*), void* anonymous_var_nameX450);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX451, struct real_pcre16_jit_stack* (*anonymous_var_nameX452)(void*), void* anonymous_var_nameX453);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX454, struct real_pcre32_jit_stack* (*anonymous_var_nameX455)(void*), void* anonymous_var_nameX456);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
int* wcscpy(int* __dest, const int* __src);
int* wcsncpy(int* __dest, const int* __src, unsigned long  int __n);
int* wcscat(int* __dest, const int* __src);
int* wcsncat(int* __dest, const int* __src, unsigned long  int __n);
int wcscmp(const int* __s1, const int* __s2);
int wcsncmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp(const int* __s1, const int* __s2);
int wcsncasecmp(const int* __s1, const int* __s2, unsigned long  int __n);
int wcscasecmp_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
int wcsncasecmp_l(const int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int wcscoll(const int* __s1, const int* __s2);
unsigned long  int wcsxfrm(int* __s1, const int* __s2, unsigned long  int __n);
int wcscoll_l(const int* __s1, const int* __s2, struct __locale_struct* __loc);
unsigned long  int wcsxfrm_l(int* __s1, const int* __s2, unsigned long  int __n, struct __locale_struct* __loc);
int* wcsdup(const int* __s);
int* wcschr(const int* __wcs, int __wc);
int* wcsrchr(const int* __wcs, int __wc);
int* wcschrnul(const int* __s, int __wc);
unsigned long  int wcscspn(const int* __wcs, const int* __reject);
unsigned long  int wcsspn(const int* __wcs, const int* __accept);
int* wcspbrk(const int* __wcs, const int* __accept);
int* wcsstr(const int* __haystack, const int* __needle);
int* wcstok(int* __s, const int* __delim, int** __ptr);
unsigned long  int wcslen(const int* __s);
int* wcswcs(const int* __haystack, const int* __needle);
unsigned long  int wcsnlen(const int* __s, unsigned long  int __maxlen);
int* wmemchr(const int* __s, int __c, unsigned long  int __n);
int wmemcmp(const int* __s1, const int* __s2, unsigned long  int __n);
int* wmemcpy(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemmove(int* __s1, const int* __s2, unsigned long  int __n);
int* wmemset(int* __s, int __c, unsigned long  int __n);
int* wmempcpy(int* __s1, const int* __s2, unsigned long  int __n);
unsigned int btowc(int __c);
int wctob(unsigned int __c);
int mbsinit(const struct anonymous_typeX2* __ps);
unsigned long  int mbrtowc(int* __pwc, const char* __s, unsigned long  int __n, struct anonymous_typeX2* __p);
unsigned long  int wcrtomb(char* __s, int __wc, struct anonymous_typeX2* __ps);
unsigned long  int __mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX2* __ps);
unsigned long  int mbsrtowcs(int* __dst, const char** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsrtombs(char* __dst, const int** __src, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int mbsnrtowcs(int* __dst, const char** __src, unsigned long  int __nmc, unsigned long  int __len, struct anonymous_typeX2* __ps);
unsigned long  int wcsnrtombs(char* __dst, const int** __src, unsigned long  int __nwc, unsigned long  int __len, struct anonymous_typeX2* __ps);
int wcwidth(int __c);
int wcswidth(const int* __s, unsigned long  int __n);
double wcstod(const int* __nptr, int** __endptr);
float wcstof(const int* __nptr, int** __endptr);
long  double wcstold(const int* __nptr, int** __endptr);
float wcstof32(const int* __nptr, int** __endptr);
double wcstof64(const int* __nptr, int** __endptr);
double wcstof32x(const int* __nptr, int** __endptr);
long  double wcstof64x(const int* __nptr, int** __endptr);
long  int wcstol(const int* __nptr, int** __endptr, int __base);
unsigned long  int wcstoul(const int* __nptr, int** __endptr, int __base);
long long int wcstoll(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstoull(const int* __nptr, int** __endptr, int __base);
long long int wcstoq(const int* __nptr, int** __endptr, int __base);
unsigned long long int wcstouq(const int* __nptr, int** __endptr, int __base);
long  int wcstol_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long  int wcstoul_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
long long int wcstoll_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
unsigned long long int wcstoull_l(const int* __nptr, int** __endptr, int __base, struct __locale_struct* __loc);
double wcstod_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstold_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
float wcstof32_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof64_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
double wcstof32x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
long  double wcstof64x_l(const int* __nptr, int** __endptr, struct __locale_struct* __loc);
int* wcpcpy(int* __dest, const int* __src);
int* wcpncpy(int* __dest, const int* __src, unsigned long  int __n);
struct _IO_FILE* open_wmemstream(int** __bufloc, unsigned long  int* __sizeloc);
int fwide(struct _IO_FILE* __fp, int __mode);
int fwprintf(struct _IO_FILE* __stream, const int* __format, ...);
int wprintf(const int* __format, ...);
int swprintf(int* __s, unsigned long  int __n, const int* __format, ...);
int vfwprintf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwprintf(const int* __format, va_list __arg);
int vswprintf(int* __s, unsigned long  int __n, const int* __format, va_list __arg);
int fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int wscanf(const int* __format, ...);
int swscanf(const int* __s, const int* __format, ...);
int __isoc99_fwscanf(struct _IO_FILE* __stream, const int* __format, ...);
int __isoc99_wscanf(const int* __format, ...);
int __isoc99_swscanf(const int* __s, const int* __format, ...);
int vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int vwscanf(const int* __format, va_list __arg);
int vswscanf(const int* __s, const int* __format, va_list __arg);
int __isoc99_vfwscanf(struct _IO_FILE* __s, const int* __format, va_list __arg);
int __isoc99_vwscanf(const int* __format, va_list __arg);
int __isoc99_vswscanf(const int* __s, const int* __format, va_list __arg);
unsigned int fgetwc(struct _IO_FILE* __stream);
unsigned int getwc(struct _IO_FILE* __stream);
unsigned int getwchar();
unsigned int fputwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwc(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar(int __wc);
int* fgetws(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws(const int* __ws, struct _IO_FILE* __stream);
unsigned int ungetwc(unsigned int __wc, struct _IO_FILE* __stream);
unsigned int getwc_unlocked(struct _IO_FILE* __stream);
unsigned int getwchar_unlocked();
unsigned int fgetwc_unlocked(struct _IO_FILE* __stream);
unsigned int fputwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwc_unlocked(int __wc, struct _IO_FILE* __stream);
unsigned int putwchar_unlocked(int __wc);
int* fgetws_unlocked(int* __ws, int __n, struct _IO_FILE* __stream);
int fputws_unlocked(const int* __ws, struct _IO_FILE* __stream);
unsigned long  int wcsftime(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp);
unsigned long  int wcsftime_l(int* __s, unsigned long  int __maxsize, const int* __format, const struct tm* __tp, struct __locale_struct* __loc);
char* dirname(char* __path);
char* __xpg_basename(char* __path);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* reg);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr);
int* charp_to_wstring(char* str);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(int left, int right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
// uniq global variable
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
    return ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
}
static inline unsigned int __bswap_32(unsigned int __bsx){
    return ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
}
static inline unsigned long  int __bswap_64(unsigned long  int __bsx){
    return ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
    return __x;
}
static inline unsigned int __uint32_identity(unsigned int __x){
    return __x;
}
static inline unsigned long  int __uint64_identity(unsigned long  int __x){
    return __x;
}
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result2__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2399, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result3__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2406, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result3__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2415, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2422, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2429, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result7__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2436, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result8__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2443, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result8__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2743, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2748, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result13__;
    __result13__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2753, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result13__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result15__;
    __result15__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2758, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result15__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result17__;
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2763, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result18__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2796, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2798, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result20__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2803, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2805, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result21__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2810, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2812, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result22__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2817, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2819, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result23__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2824, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2826, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result23__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result25__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2831, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2833, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result25__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result27__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2838, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2840, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result27__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result30__;
    __result30__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2845, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2850, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2855, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2860, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2865, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2870, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2875, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2880, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2885, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2890, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2895, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2900, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2905, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2910, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value116=string_printable(str)));
    /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value117=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static inline int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value118=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value119=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value120=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
struct list$1charph* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value121=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list$1charph* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value122=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=charp_strip(self)));
    /* U11 */__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
int* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value124=charp_to_wstring(str)));
    /* U11 */__right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=wchar_tp_to_string(wstr)));
    /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value127=string_to_wstring(((char*)(__right_value126=xsprintf("%d",self))))));
    /* U11 */__right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_length(int* str){
    return wchar_tp_length(str);
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value128=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value129=wchar_tp_reverse(str)));
    /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value130=wchar_tp_multiply(str,n)));
    /* U11 */__right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
int* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value131=wchar_tp_printable(str)));
    /* U11 */__right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline unsigned int wstring_get_hash_key(int* value){
    return wchar_tp_get_hash_key(value);
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static inline int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=charp_replace(self,index,c)));
    /* U11 */__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=charp_multiply(str,n)));
    /* U11 */__right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=charp_sub(self,reg,replace)));
    /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
char* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value137=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value138=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value140=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value141=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value143=string_chomp(str)));
    /* U11 */__right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

// body function
















static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result9__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result9__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result9__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result12__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result12__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result12__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result14__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result14__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result14__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result16__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result16__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result16__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result19__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result19__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result19__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result24__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result24__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result24__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result26__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result26__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result26__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result29__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result29__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result29__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result28__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 219, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 229, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 239, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result32__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result32__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result32__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result31__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 219, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 229, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 239, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result35__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result35__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result35__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result34__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 219, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 229, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 239, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result38__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result38__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result38__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result37__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 219, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 229, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 239, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result41__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result40__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 219, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 229, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 239, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result44__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result44__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result43__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 219, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 229, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 239, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result47__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result47__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result46__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 219, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 229, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 239, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result49__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result49__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result49__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result51__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result53__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result55__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result57__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result59__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result61__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}



















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_66;
struct list_item$1charph* prev_it_67;
    it_66=self->head;
    while(it_66!=((void*)0)) {
        prev_it_67=it_66;
        it_66=it_66->next;
        /*i*/come_call_finalizer3(prev_it_67,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}


































struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_68;
int erro_ofs_69;
int options_70;
void* __right_value144 = (void*)0;
char* __dec_obj16;
struct come_regex* __null_value1;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct tuple2$2come_regexphcharph* __result94__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct tuple2$2come_regexphcharph* __result96__;
err_68 = (void*)0;
memset(&erro_ofs_69, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_70=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj16=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_70;
    self->re=pcre_compile(str,options_70,&err_68,&erro_ofs_69,((void*)0));
    if(    self->re==((void*)0)) {
        __result94__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value148=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value145=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value148,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value150=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value150,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj17;
char* __dec_obj18;
struct tuple2$2come_regexphcharph* __result93__;
    __dec_obj17=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj17,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj18=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self){
struct come_regex* __dec_obj19;
char* __dec_obj20;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj19=self->v1;
            come_call_finalizer3(__dec_obj19,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj20=self->v2;
            /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj21;
struct tuple2$2come_regexphvoidp* __result95__;
    __dec_obj21=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj21,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self){
struct come_regex* __dec_obj22;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj22=self->v1;
            come_call_finalizer3(__dec_obj22,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        /* U13 */reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_71=0;
char* Err_72=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct tuple2$2come_regexphcharph* __result97__;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct tuple2$2come_regexphcharph* __result98__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value152=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_71=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_72=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_72)),    /*f*/come_call_finalizer3(__right_value152,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result97__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value154=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_72))));
        /*i*/come_call_finalizer3(come_exception_var_b1_71,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_72 = come_decrement_ref_count2(Err_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value154,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value156=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_71),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_71,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_72 = come_decrement_ref_count2(Err_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value156,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_73=0;
char* Err_74=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2come_regexphcharph* __result99__;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple2$2come_regexphcharph* __result100__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value158=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_73=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_74=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_74)),    /*f*/come_call_finalizer3(__right_value158,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result99__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value160=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_74))));
        /*i*/come_call_finalizer3(come_exception_var_b2_73,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_74 = come_decrement_ref_count2(Err_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value160,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value162=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_73),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_73,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_74 = come_decrement_ref_count2(Err_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value162,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result101__;
void* __right_value163 = (void*)0;
struct come_regex* result_75;
void* __right_value164 = (void*)0;
char* __dec_obj23;
const char* err_76;
int erro_ofs_77;
struct come_regex* __result102__;
err_76 = (void*)0;
memset(&erro_ofs_77, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    result_75=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj23=result_75->str;
    result_75->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_75->ignore_case=reg->ignore_case;
    result_75->multiline=reg->multiline;
    result_75->global=reg->global;
    result_75->extended=reg->extended;
    result_75->dotall=reg->dotall;
    result_75->anchored=reg->anchored;
    result_75->dollar_endonly=reg->dollar_endonly;
    result_75->ungreedy=reg->ungreedy;
    result_75->options=reg->options;
    result_75->re=pcre_compile(result_75->str,result_75->options,&err_76,&erro_ofs_77,((void*)0));
    if(    result_75->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_75->str);
        stackframe();
        exit(1);
    }
    __result102__ = gComeFunResultObject = __result_obj__ = result_75;
    /*i*/come_call_finalizer3(result_75,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result103__;
void* __right_value166 = (void*)0;
char* __result104__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string(reg->str)));
    /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* result_78;
int i_79;
char* __result105__;
    result_78=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_79=0;    i_79<strlen(str);    i_79++    ){
        if(        str[i_79]>=65&&str[i_79]<=90) {
            result_78[i_79]=str[i_79]-65+97;
        }
    }
    __result105__ = gComeFunResultObject = __result_obj__ = result_78;
    /* U13 */result_78 = come_decrement_ref_count2(result_78, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* result_80;
int i_81;
char* __result106__;
    result_80=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_81=0;    i_81<strlen(str);    i_81++    ){
        if(        str[i_81]>=97&&str[i_81]<=122) {
            result_80[i_81]=str[i_81]-97+65;
        }
    }
    __result106__ = gComeFunResultObject = __result_obj__ = result_80;
    /* U13 */result_80 = come_decrement_ref_count2(result_80, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
int* __result107__;
int len_82;
void* __right_value170 = (void*)0;
int* __result108__;
void* __right_value171 = (void*)0;
int* __result109__;
void* __right_value172 = (void*)0;
int* __result110__;
void* __right_value173 = (void*)0;
int* result_83;
int* __result111__;
    if(    str==((void*)0)) {
        __result107__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value169=__builtin_wstring("")));
        /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    len_82=xwcslen(str);
    if(    head<0) {
        head+=len_82;
    }
    if(    tail<0) {
        tail+=len_82+1;
    }
    if(    head>tail) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value170=__builtin_wstring("")));
        /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_82) {
        tail=len_82;
    }
    if(    head==tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value171=__builtin_wstring("")));
        /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(    tail-head+1<1) {
        __result110__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value172=__builtin_wstring("")));
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    result_83=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_83,str+head,sizeof(int)*(tail-head));
    result_83[tail-head]=0;
    __result111__ = gComeFunResultObject = __result_obj__ = result_83;
    /* U13 */result_83 = come_decrement_ref_count2(result_83, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result112__;
int len_84;
void* __right_value174 = (void*)0;
int* wstr_85;
int ret_86;
int* __result113__;
    if(    str==((void*)0)) {
        __result112__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    len_84=strlen(str);
    wstr_85=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_84+1)), "libcomelang-str.c", 200, "int"));
    ret_86=mbstowcs(wstr_85,str,len_84+1);
    wstr_85[ret_86]=0;
    if(    ret_86<0) {
        wstr_85[0]=0;
    }
    __result113__ = gComeFunResultObject = __result_obj__ = wstr_85;
    /* U13 */wstr_85 = come_decrement_ref_count2(wstr_85, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_87;
int len_88;
int i_89;
int len2_90;
int j_91;
memset(&j_91, 0, sizeof(int));
    n_87=0;
    len_88=strlen(str);
    for(    i_89=0;    i_89<len_88;    i_89++    ){
        len2_90=strlen(search_str);
        for(        j_91=0;        j_91<len2_90;        j_91++        ){
            if(            str[i_89+j_91]!=search_str[j_91]) {
                break;
            }
        }
        if(        j_91==len2_90) {
            n_87++;
            if(            n_87==count) {
                return i_89;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_92;
int result_96;
int offset_97;
const char* err_98;
int erro_ofs_99;
int options_100;
char* str_101;
struct real_pcre* re_102;
int n_103;
int options_104;
int len_105;
int regex_result_106;
int i_107;
int i_108;
err_98 = (void*)0;
memset(&erro_ofs_99, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_92=16;
    int start_93[ovec_max_92];
    memset(&start_93, 0, sizeof(int)    *(ovec_max_92)    );
    int end_94[ovec_max_92];
    memset(&end_94, 0, sizeof(int)    *(ovec_max_92)    );
    int ovec_value_95[ovec_max_92*3];
    memset(&ovec_value_95, 0, sizeof(int)    *(ovec_max_92*3)    );
    result_96=default_value;
    offset_97=0;
    options_100=reg->options;
    str_101=reg->str;
    re_102=reg->re;
    n_103=0;
    while((_Bool)1) {
        options_104=2097152;
        len_105=strlen(self);
        regex_result_106=pcre_exec(re_102,(struct pcre_extra*)0,self,len_105,offset_97,options_104,ovec_value_95,ovec_max_92*3);
        for(        i_107=0;        i_107<ovec_max_92;        i_107++        ){
            start_93[i_107]=ovec_value_95[i_107*2];
        }
        for(        i_108=0;        i_108<ovec_max_92;        i_108++        ){
            end_94[i_108]=ovec_value_95[i_108*2+1];
        }
        if(        regex_result_106>0) {
            n_103++;
            if(            offset_97==end_94[0]) {
                offset_97++;
            }
            else {
                offset_97=end_94[0];
            }
            if(            n_103==count) {
                result_96=start_93[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_96;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_109;
char* p_110;
    len_109=strlen(search_str);
    p_110=str+strlen(str)-len_109;
    while(p_110>=str) {
        if(        strncmp(p_110,search_str,len_109)==0) {
            return p_110-str;
        }
        p_110--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_111;
int erro_ofs_112;
int options_113;
char* str_114;
struct real_pcre* re_115;
void* __right_value175 = (void*)0;
char* self2_116;
int ovec_max_117;
int result_121;
int offset_122;
int options_123;
int len_124;
int regex_result_125;
int i_126;
int i_127;
int __result114__;
err_111 = (void*)0;
memset(&erro_ofs_112, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_113=reg->options;
    str_114=reg->str;
    re_115=reg->re;
    self2_116=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_117=16;
    int start_118[ovec_max_117];
    memset(&start_118, 0, sizeof(int)    *(ovec_max_117)    );
    int end_119[ovec_max_117];
    memset(&end_119, 0, sizeof(int)    *(ovec_max_117)    );
    int ovec_value_120[ovec_max_117*3];
    memset(&ovec_value_120, 0, sizeof(int)    *(ovec_max_117*3)    );
    result_121=default_value;
    offset_122=0;
    while((_Bool)1) {
        options_123=2097152;
        len_124=strlen(self2_116);
        regex_result_125=pcre_exec(re_115,(struct pcre_extra*)0,self2_116,len_124,offset_122,options_123,ovec_value_120,ovec_max_117*3);
        for(        i_126=0;        i_126<ovec_max_117;        i_126++        ){
            start_118[i_126]=ovec_value_120[i_126*2];
        }
        for(        i_127=0;        i_127<ovec_max_117;        i_127++        ){
            end_119[i_127]=ovec_value_120[i_127*2+1];
        }
        if(        regex_result_125==1||regex_result_125>0) {
            result_121=strlen(self)-1-start_118[0];
            break;
        }
        {
            break;
        }
    }
    __result114__ = result_121;
    /* U13 */self2_116 = come_decrement_ref_count2(self2_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result114__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_128;
char* p_129;
int n_130;
    len_128=strlen(search_str);
    p_129=str+strlen(str)-len_128;
    n_130=0;
    while(p_129>=str) {
        if(        strncmp(p_129,search_str,len_128)==0) {
            n_130++;
            if(            n_130==count) {
                return p_129-str;
            }
        }
        p_129--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1charph* __result116__;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1charph* result_131;
int offset_132;
int ovec_max_133;
const char* err_137;
int erro_ofs_138;
int options_139;
char* str_140;
struct real_pcre* re_141;
int options_142;
int len_143;
int regex_result_144;
int i_145;
int i_146;
void* __right_value180 = (void*)0;
char* str_147;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct list$1charph* group_strings_148;
void* __right_value183 = (void*)0;
char* str2_149;
void* __right_value187 = (void*)0;
char* str_153;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* group_strings_154;
int i_155;
void* __right_value190 = (void*)0;
char* match_string_156;
void* __right_value191 = (void*)0;
char* str2_157;
struct list$1charph* __result118__;
err_137 = (void*)0;
memset(&erro_ofs_138, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result_131=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_132=0;
    ovec_max_133=16;
    int start_134[ovec_max_133];
    memset(&start_134, 0, sizeof(int)    *(ovec_max_133)    );
    int end_135[ovec_max_133];
    memset(&end_135, 0, sizeof(int)    *(ovec_max_133)    );
    int ovec_value_136[ovec_max_133*3];
    memset(&ovec_value_136, 0, sizeof(int)    *(ovec_max_133*3)    );
    options_139=reg->options;
    str_140=reg->str;
    re_141=reg->re;
    while((_Bool)1) {
        options_142=2097152;
        len_143=strlen(self);
        regex_result_144=pcre_exec(re_141,(struct pcre_extra*)0,self,len_143,offset_132,options_142,ovec_value_136,ovec_max_133*3);
        for(        i_145=0;        i_145<ovec_max_133;        i_145++        ){
            start_134[i_145]=ovec_value_136[i_145*2];
        }
        for(        i_146=0;        i_146<ovec_max_133;        i_146++        ){
            end_135[i_146]=ovec_value_136[i_146*2+1];
        }
        if(        regex_result_144==1) {
            str_147=(char*)come_increment_ref_count(charp_substring(self,start_134[0],end_135[0]));
            group_strings_148=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_149=(char*)come_increment_ref_count(block(parent,str_147,group_strings_148));
            list$1charph_push_back(result_131,(char*)come_increment_ref_count(str2_149));
            if(            offset_132==end_135[0]) {
                offset_132++;
            }
            else {
                offset_132=end_135[0];
            }
            /* U13 */str_147 = come_decrement_ref_count2(str_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_148,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_149 = come_decrement_ref_count2(str2_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_144>1) {
            str_153=(char*)come_increment_ref_count(charp_substring(self,start_134[0],end_135[0]));
            group_strings_154=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_155=1;            i_155<regex_result_144;            i_155++            ){
                match_string_156=(char*)come_increment_ref_count(charp_substring(self,start_134[i_155],end_135[i_155]));
                list$1charph_push_back(group_strings_154,(char*)come_increment_ref_count(match_string_156));
                /* U13 */match_string_156 = come_decrement_ref_count2(match_string_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_157=(char*)come_increment_ref_count(block(parent,str_153,group_strings_154));
            list$1charph_push_back(result_131,(char*)come_increment_ref_count(str2_157));
            if(            offset_132==end_135[0]) {
                offset_132++;
            }
            else {
                offset_132=end_135[0];
            }
            /* U13 */str_153 = come_decrement_ref_count2(str_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_154,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_157 = come_decrement_ref_count2(str2_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_131;
    /*i*/come_call_finalizer3(result_131,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct list_item$1charph* litem_150;
char* __dec_obj24;
void* __right_value185 = (void*)0;
struct list_item$1charph* litem_151;
char* __dec_obj25;
void* __right_value186 = (void*)0;
struct list_item$1charph* litem_152;
char* __dec_obj26;
struct list$1charph* __result117__;
    if(    self->len==0) {
        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 219, "list_item$1charph"))));
        litem_150->prev=((void*)0);
        litem_150->next=((void*)0);
        __dec_obj24=litem_150->item;
        litem_150->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_150;
        self->head=litem_150;
    }
    else if(    self->len==1) {
        litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value185=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 229, "list_item$1charph"))));
        litem_151->prev=self->head;
        litem_151->next=((void*)0);
        __dec_obj25=litem_151->item;
        litem_151->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_151;
        self->head->next=litem_151;
    }
    else {
        litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value186=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 239, "list_item$1charph"))));
        litem_152->prev=self->tail;
        litem_152->next=((void*)0);
        __dec_obj26=litem_152->item;
        litem_152->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_152;
        self->tail=litem_152;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1charph* __result119__;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1charph* result_158;
int offset_159;
int ovec_max_160;
const char* err_164;
int erro_ofs_165;
int options_166;
char* str_167;
struct real_pcre* re_168;
int n_169;
int options_170;
int len_171;
int regex_result_172;
int i_173;
int i_174;
void* __right_value196 = (void*)0;
char* str_175;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1charph* group_strings_176;
void* __right_value199 = (void*)0;
char* str2_177;
void* __right_value200 = (void*)0;
char* str_178;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1charph* group_strings_179;
int i_180;
void* __right_value203 = (void*)0;
char* match_string_181;
void* __right_value204 = (void*)0;
char* str2_182;
struct list$1charph* __result120__;
err_164 = (void*)0;
memset(&erro_ofs_165, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result119__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value193=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value193,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    result_158=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
    offset_159=0;
    ovec_max_160=16;
    int start_161[ovec_max_160];
    memset(&start_161, 0, sizeof(int)    *(ovec_max_160)    );
    int end_162[ovec_max_160];
    memset(&end_162, 0, sizeof(int)    *(ovec_max_160)    );
    int ovec_value_163[ovec_max_160*3];
    memset(&ovec_value_163, 0, sizeof(int)    *(ovec_max_160*3)    );
    options_166=reg->options;
    str_167=reg->str;
    re_168=reg->re;
    n_169=0;
    while((_Bool)1) {
        options_170=2097152;
        len_171=strlen(self);
        regex_result_172=pcre_exec(re_168,(struct pcre_extra*)0,self,len_171,offset_159,options_170,ovec_value_163,ovec_max_160*3);
        for(        i_173=0;        i_173<ovec_max_160;        i_173++        ){
            start_161[i_173]=ovec_value_163[i_173*2];
        }
        for(        i_174=0;        i_174<ovec_max_160;        i_174++        ){
            end_162[i_174]=ovec_value_163[i_174*2+1];
        }
        if(        regex_result_172==1) {
            str_175=(char*)come_increment_ref_count(charp_substring(self,start_161[0],end_162[0]));
            group_strings_176=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_177=(char*)come_increment_ref_count(block(parent,str_175,group_strings_176));
            list$1charph_push_back(result_158,(char*)come_increment_ref_count(str2_177));
            if(            offset_159==end_162[0]) {
                offset_159++;
            }
            else {
                offset_159=end_162[0];
            }
            n_169++;
            if(            n_169==count) {
                /* U13 */str_175 = come_decrement_ref_count2(str_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_176,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_177 = come_decrement_ref_count2(str2_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_175 = come_decrement_ref_count2(str_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_176,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_177 = come_decrement_ref_count2(str2_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_172>1) {
            str_178=(char*)come_increment_ref_count(charp_substring(self,start_161[0],end_162[0]));
            group_strings_179=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_180=1;            i_180<regex_result_172;            i_180++            ){
                match_string_181=(char*)come_increment_ref_count(charp_substring(self,start_161[i_180],end_162[i_180]));
                list$1charph_push_back(group_strings_179,(char*)come_increment_ref_count(match_string_181));
                /* U13 */match_string_181 = come_decrement_ref_count2(match_string_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_182=(char*)come_increment_ref_count(block(parent,str_178,group_strings_179));
            list$1charph_push_back(result_158,(char*)come_increment_ref_count(str2_182));
            if(            offset_159==end_162[0]) {
                offset_159++;
            }
            else {
                offset_159=end_162[0];
            }
            n_169++;
            if(            n_169==count) {
                /* U13 */str_178 = come_decrement_ref_count2(str_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_179,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_182 = come_decrement_ref_count2(str2_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_178 = come_decrement_ref_count2(str_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_179,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_182 = come_decrement_ref_count2(str2_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result120__ = gComeFunResultObject = __result_obj__ = result_158;
    /*i*/come_call_finalizer3(result_158,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1charph* __result121__;
const char* err_183;
int erro_ofs_184;
int options_185;
char* str_186;
struct real_pcre* re_187;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1charph* result_188;
int offset_189;
int ovec_max_190;
int options_194;
int len_195;
int regex_result_196;
int i_197;
int i_198;
void* __right_value209 = (void*)0;
char* str_199;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1charph* match_strings_200;
void* __right_value212 = (void*)0;
char* str2_201;
void* __right_value213 = (void*)0;
char* str_202;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* match_strings_203;
int i_204;
void* __right_value216 = (void*)0;
char* match_str_205;
void* __right_value217 = (void*)0;
char* str2_206;
void* __right_value218 = (void*)0;
char* str_207;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1charph* match_strings_208;
void* __right_value221 = (void*)0;
char* str2_209;
struct list$1charph* __result122__;
err_183 = (void*)0;
memset(&erro_ofs_184, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value206=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value206,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    options_185=reg->options;
    str_186=reg->str;
    re_187=reg->re;
    result_188=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_189=0;
    ovec_max_190=16;
    int start_191[ovec_max_190];
    memset(&start_191, 0, sizeof(int)    *(ovec_max_190)    );
    int end_192[ovec_max_190];
    memset(&end_192, 0, sizeof(int)    *(ovec_max_190)    );
    int ovec_value_193[ovec_max_190*3];
    memset(&ovec_value_193, 0, sizeof(int)    *(ovec_max_190*3)    );
    while((_Bool)1) {
        options_194=2097152;
        len_195=strlen(self);
        regex_result_196=pcre_exec(re_187,(struct pcre_extra*)0,self,len_195,offset_189,options_194,ovec_value_193,ovec_max_190*3);
        for(        i_197=0;        i_197<ovec_max_190;        i_197++        ){
            start_191[i_197]=ovec_value_193[i_197*2];
        }
        for(        i_198=0;        i_198<ovec_max_190;        i_198++        ){
            end_192[i_198]=ovec_value_193[i_198*2+1];
        }
        if(        regex_result_196==1) {
            str_199=(char*)come_increment_ref_count(charp_substring(self,offset_189,start_191[0]));
            match_strings_200=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_201=(char*)come_increment_ref_count(block(parent,str_199,match_strings_200));
            list$1charph_push_back(result_188,(char*)come_increment_ref_count(str2_201));
            if(            offset_189==end_192[0]) {
                offset_189++;
            }
            else {
                offset_189=end_192[0];
            }
            /* U13 */str_199 = come_decrement_ref_count2(str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_200,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_201 = come_decrement_ref_count2(str2_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_196>1) {
            str_202=(char*)come_increment_ref_count(charp_substring(self,offset_189,start_191[0]));
            if(            offset_189==end_192[0]) {
                offset_189++;
            }
            else {
                offset_189=end_192[0];
            }
            match_strings_203=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_204=1;            i_204<regex_result_196;            i_204++            ){
                match_str_205=(char*)come_increment_ref_count(charp_substring(self,start_191[i_204],end_192[i_204]));
                list$1charph_push_back(match_strings_203,(char*)come_increment_ref_count(match_str_205));
                /* U13 */match_str_205 = come_decrement_ref_count2(match_str_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_206=(char*)come_increment_ref_count(block(parent,str_202,match_strings_203));
            list$1charph_push_back(result_188,(char*)come_increment_ref_count(str2_206));
            /* U13 */str_202 = come_decrement_ref_count2(str_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_203,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_206 = come_decrement_ref_count2(str2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_189<charp_length(self)) {
        str_207=(char*)come_increment_ref_count(charp_substring(self,offset_189,-1));
        match_strings_208=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_209=(char*)come_increment_ref_count(block(parent,str_207,match_strings_208));
        list$1charph_push_back(result_188,(char*)come_increment_ref_count(str2_209));
        /* U13 */str_207 = come_decrement_ref_count2(str_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_209 = come_decrement_ref_count2(str2_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = result_188;
    /*i*/come_call_finalizer3(result_188,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1charph* __result123__;
const char* err_210;
int erro_ofs_211;
int options_212;
char* str_213;
struct real_pcre* re_214;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1charph* result_215;
int offset_216;
int ovec_max_217;
int n_221;
int options_222;
int len_223;
int regex_result_224;
int i_225;
int i_226;
void* __right_value226 = (void*)0;
char* str_227;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1charph* match_strings_228;
void* __right_value229 = (void*)0;
char* str2_229;
void* __right_value230 = (void*)0;
char* str_230;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct list$1charph* match_strings_231;
int i_232;
void* __right_value233 = (void*)0;
char* match_str_233;
void* __right_value234 = (void*)0;
char* str2_234;
struct list$1charph* __result124__;
err_210 = (void*)0;
memset(&erro_ofs_211, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result123__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value223=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value223,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    options_212=reg->options;
    str_213=reg->str;
    re_214=reg->re;
    result_215=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_216=0;
    ovec_max_217=16;
    int start_218[ovec_max_217];
    memset(&start_218, 0, sizeof(int)    *(ovec_max_217)    );
    int end_219[ovec_max_217];
    memset(&end_219, 0, sizeof(int)    *(ovec_max_217)    );
    int ovec_value_220[ovec_max_217*3];
    memset(&ovec_value_220, 0, sizeof(int)    *(ovec_max_217*3)    );
    n_221=0;
    while((_Bool)1) {
        options_222=2097152;
        len_223=strlen(self);
        regex_result_224=pcre_exec(re_214,(struct pcre_extra*)0,self,len_223,offset_216,options_222,ovec_value_220,ovec_max_217*3);
        for(        i_225=0;        i_225<ovec_max_217;        i_225++        ){
            start_218[i_225]=ovec_value_220[i_225*2];
        }
        for(        i_226=0;        i_226<ovec_max_217;        i_226++        ){
            end_219[i_226]=ovec_value_220[i_226*2+1];
        }
        if(        regex_result_224==1) {
            str_227=(char*)come_increment_ref_count(charp_substring(self,offset_216,start_218[0]));
            match_strings_228=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_229=(char*)come_increment_ref_count(block(parent,str_227,match_strings_228));
            list$1charph_push_back(result_215,(char*)come_increment_ref_count(str2_229));
            if(            offset_216==end_219[0]) {
                offset_216++;
            }
            else {
                offset_216=end_219[0];
            }
            /* U13 */str_227 = come_decrement_ref_count2(str_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_228,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_229 = come_decrement_ref_count2(str2_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_224>1) {
            str_230=(char*)come_increment_ref_count(charp_substring(self,offset_216,start_218[0]));
            if(            offset_216==end_219[0]) {
                offset_216++;
            }
            else {
                offset_216=end_219[0];
            }
            match_strings_231=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_232=1;            i_232<regex_result_224;            i_232++            ){
                match_str_233=(char*)come_increment_ref_count(charp_substring(self,start_218[i_232],end_219[i_232]));
                list$1charph_push_back(match_strings_231,(char*)come_increment_ref_count(match_str_233));
                /* U13 */match_str_233 = come_decrement_ref_count2(match_str_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_234=(char*)come_increment_ref_count(block(parent,str_230,match_strings_231));
            list$1charph_push_back(result_215,(char*)come_increment_ref_count(str2_234));
            /* U13 */str_230 = come_decrement_ref_count2(str_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_231,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_234 = come_decrement_ref_count2(str2_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_221++;
        if(        n_221==count) {
            break;
        }
    }
    __result124__ = gComeFunResultObject = __result_obj__ = result_215;
    /*i*/come_call_finalizer3(result_215,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    left==((void*)0)||left->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    right==((void*)0)||right->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(    left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(    left->global!=right->global) {
        return (_Bool)0;
    }
    if(    left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(    left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(    left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(    left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(    left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(    left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1charph* __result125__;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1charph* result_235;
int offset_236;
int ovec_max_237;
const char* err_241;
int erro_ofs_242;
int options_243;
char* str_244;
struct real_pcre* re_245;
int options_246;
int len_247;
int regex_result_248;
int i_249;
int i_250;
void* __right_value239 = (void*)0;
char* str_251;
void* __right_value240 = (void*)0;
char* str_252;
int i_253;
void* __right_value241 = (void*)0;
char* match_string_254;
struct list$1charph* __result126__;
err_241 = (void*)0;
memset(&erro_ofs_242, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value236=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value236,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    result_235=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_236=0;
    ovec_max_237=16;
    int start_238[ovec_max_237];
    memset(&start_238, 0, sizeof(int)    *(ovec_max_237)    );
    int end_239[ovec_max_237];
    memset(&end_239, 0, sizeof(int)    *(ovec_max_237)    );
    int ovec_value_240[ovec_max_237*3];
    memset(&ovec_value_240, 0, sizeof(int)    *(ovec_max_237*3)    );
    options_243=reg->options;
    str_244=reg->str;
    re_245=reg->re;
    while((_Bool)1) {
        options_246=2097152;
        len_247=strlen(self);
        regex_result_248=pcre_exec(re_245,(struct pcre_extra*)0,self,len_247,offset_236,options_246,ovec_value_240,ovec_max_237*3);
        for(        i_249=0;        i_249<ovec_max_237;        i_249++        ){
            start_238[i_249]=ovec_value_240[i_249*2];
        }
        for(        i_250=0;        i_250<ovec_max_237;        i_250++        ){
            end_239[i_250]=ovec_value_240[i_250*2+1];
        }
        if(        regex_result_248==1) {
            str_251=(char*)come_increment_ref_count(charp_substring(self,start_238[0],end_239[0]));
            list$1charph_push_back(result_235,(char*)come_increment_ref_count(str_251));
            if(            offset_236==end_239[0]) {
                offset_236++;
            }
            else {
                offset_236=end_239[0];
            }
            /* U13 */str_251 = come_decrement_ref_count2(str_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_248>1) {
            str_252=(char*)come_increment_ref_count(charp_substring(self,start_238[0],end_239[0]));
            list$1charph_push_back(result_235,(char*)come_increment_ref_count(str_252));
            if(            offset_236==end_239[0]) {
                offset_236++;
            }
            else {
                offset_236=end_239[0];
            }
            *num_group_string_in_regex=regex_result_248-1;
            for(            i_253=1;            i_253<regex_result_248;            i_253++            ){
                match_string_254=(char*)come_increment_ref_count(charp_substring(self,start_238[i_253],end_239[i_253]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_254));
                /* U13 */match_string_254 = come_decrement_ref_count2(match_string_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_252 = come_decrement_ref_count2(str_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result126__ = gComeFunResultObject = __result_obj__ = result_235;
    /*i*/come_call_finalizer3(result_235,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
char* result_255;
int len_256;
char* __result127__;
    result_255=(char*)come_increment_ref_count(__builtin_string(self));
    len_256=strlen(self);
    if(    self[len_256-1]==10) {
        result_255[len_256-1]=0;
    }
    else if(    self[len_256-1]==13) {
        result_255[len_256-1]=0;
    }
    else if(    len_256>2&&self[len_256-2]==13&&self[len_256-1]==10) {
        result_255[len_256-2]=0;
    }
    __result127__ = gComeFunResultObject = __result_obj__ = result_255;
    /* U13 */result_255 = come_decrement_ref_count2(result_255, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_257;
void* __right_value243 = (void*)0;
char* result_258;
char* __result128__;
    len_257=16*(xwcslen(wstr)+1);
    result_258=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_257)), "libcomelang-str.c", 894, "char"));
    if(    wcstombs(result_258,wstr,len_257)<0) {
        strncpy(result_258,"",len_257);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = result_258;
    /* U13 */result_258 = come_decrement_ref_count2(result_258, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
int* __result129__;
    __result129__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value244=__builtin_wstring(str)));
    /* U11 */__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int wchar_tp_length(int* str){
    return xwcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_259;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
int* __result130__;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
int* __result131__;
void* __right_value249 = (void*)0;
int* sub_str_260;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
int* __result132__;
    len_259=xwcslen(str);
    if(    len_259==0) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value246=string_to_wstring(((char*)(__right_value245=wchar_tp_to_string(str))))));
        /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    head<0) {
        head+=len_259;
    }
    if(    tail<0) {
        tail+=len_259+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result131__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value248=string_to_wstring(((char*)(__right_value247=wchar_tp_to_string(str))))));
        /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    if(    tail>=len_259) {
        tail=len_259;
    }
    sub_str_260=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_260,sizeof(int)*(wstring_length(sub_str_260)+1));
    __result132__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value251=string_to_wstring(((char*)(__right_value250=wchar_tp_to_string(str))))));
    /* U13 */sub_str_260 = come_decrement_ref_count2(sub_str_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_261;
    head_261=wcsstr(str,search_str);
    if(    head_261==((void*)0)) {
        return default_value;
    }
    return head_261-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_262;
int* p_263;
int len2_264;
_Bool result_265;
int i_266;
memset(&i_266, 0, sizeof(int));
    len_262=xwcslen(search_str);
    p_263=str+xwcslen(str)-len_262;
    while(p_263>=str) {
        len2_264=xwcslen(p_263);
        result_265=(_Bool)1;
        for(        i_266=0;        i_266<len_262&&i_266<len2_264;        i_266++        ){
            if(            p_263[i_266]!=search_str[i_266]) {
                result_265=(_Bool)0;
            }
        }
        if(        result_265) {
            return (p_263-str);
        }
        p_263--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_267;
void* __right_value252 = (void*)0;
int* result_268;
int i_269;
int* __result133__;
    len_267=xwcslen(str);
    result_268=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_267+1)), "libcomelang-str.c", 994, "int"));
    for(    i_269=0;    i_269<len_267;    i_269++    ){
        result_268[i_269]=str[len_267-i_269-1];
    }
    result_268[len_267]=0;
    __result133__ = gComeFunResultObject = __result_obj__ = result_268;
    /* U13 */result_268 = come_decrement_ref_count2(result_268, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_270;
void* __right_value253 = (void*)0;
int* result_271;
int i_272;
int* __result134__;
    len_270=xwcslen(str)*n+1;
    result_271=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_270)), "libcomelang-str.c", 1009, "int"));
    result_271[0]=0;
    for(    i_272=0;    i_272<n;    i_272++    ){
        wcscat(result_271,str);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_271;
    /* U13 */result_271 = come_decrement_ref_count2(result_271, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_273;
void* __right_value254 = (void*)0;
int* result_274;
int n_275;
int i_276;
int c_277;
int* __result135__;
    len_273=wchar_tp_length(str);
    result_274=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_273*2+1)), "libcomelang-str.c", 1023, "int"));
    n_275=0;
    for(    i_276=0;    i_276<len_273;    i_276++    ){
        c_277=str[i_276];
        if(        (c_277>=0&&c_277<32)||c_277==127) {
            result_274[n_275++]=94;
            result_274[n_275++]=c_277+65-1;
        }
        else {
            result_274[n_275++]=c_277;
        }
    }
    result_274[n_275]=0;
    __result135__ = gComeFunResultObject = __result_obj__ = result_274;
    /* U13 */result_274 = come_decrement_ref_count2(result_274, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_278;
int ovec_max_279;
const char* err_283;
int erro_ofs_284;
int options_285;
char* str_286;
struct real_pcre* re_287;
int n_288;
int options_289;
int len_290;
int regex_result_291;
int i_292;
int i_293;
int i_296;
void* __right_value255 = (void*)0;
char* match_string_297;
err_283 = (void*)0;
memset(&erro_ofs_284, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_278=0;
    ovec_max_279=16;
    int start_280[ovec_max_279];
    memset(&start_280, 0, sizeof(int)    *(ovec_max_279)    );
    int end_281[ovec_max_279];
    memset(&end_281, 0, sizeof(int)    *(ovec_max_279)    );
    int ovec_value_282[ovec_max_279*3];
    memset(&ovec_value_282, 0, sizeof(int)    *(ovec_max_279*3)    );
    options_285=reg->options;
    str_286=reg->str;
    re_287=reg->re;
    n_288=0;
    while((_Bool)1) {
        options_289=2097152;
        len_290=strlen(self);
        regex_result_291=pcre_exec(re_287,(struct pcre_extra*)0,self,len_290,offset_278,options_289,ovec_value_282,ovec_max_279*3);
        for(        i_292=0;        i_292<ovec_max_279;        i_292++        ){
            start_280[i_292]=ovec_value_282[i_292*2];
        }
        for(        i_293=0;        i_293<ovec_max_279;        i_293++        ){
            end_281[i_293]=ovec_value_282[i_293*2+1];
        }
        if(        regex_result_291==1||(group_strings==((void*)0)&&regex_result_291>0)) {
            n_288++;
            if(            n_288==count) {
                return (_Bool)1;
            }
            if(            offset_278==end_281[0]) {
                offset_278++;
            }
            else {
                offset_278=end_281[0];
            }
        }
        else if(        regex_result_291>1) {
            n_288++;
            list$1charph_reset(group_strings);
            for(            i_296=1;            i_296<regex_result_291;            i_296++            ){
                match_string_297=(char*)come_increment_ref_count(charp_substring(self,start_280[i_296],end_281[i_296]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_297));
                /* U13 */match_string_297 = come_decrement_ref_count2(match_string_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_288==count) {
                return (_Bool)1;
            }
            if(            offset_278==end_281[0]) {
                offset_278++;
            }
            else {
                offset_278=end_281[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_294;
struct list_item$1charph* prev_it_295;
struct list$1charph* __result136__;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*i*/come_call_finalizer3(prev_it_295,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

int wchar_tp_compare(int* left, int* right){
    return wcscmp(left,right);
}

int wstring_compare(int* left, int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return 0;
    }
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(int left, int right){
    return left==right;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
int* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value256=wchar_tp_multiply(str,n)));
    /* U11 */__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
int* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value257=wchar_tp_multiply(str,n)));
    /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
int* result_298;
int* __result139__;
    result_298=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(xwcslen(left)+xwcslen(right)+1)), "libcomelang-str.c", 1194, "int"));
    wcscpy(result_298,left);
    wcscat(result_298,right);
    __result139__ = gComeFunResultObject = __result_obj__ = result_298;
    /* U13 */result_298 = come_decrement_ref_count2(result_298, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
int* result_299;
int* __result140__;
    result_299=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(xwcslen(left)+xwcslen(right)+1)), "libcomelang-str.c", 1204, "int"));
    wcscpy(result_299,left);
    wcscat(result_299,right);
    __result140__ = gComeFunResultObject = __result_obj__ = result_299;
    /* U13 */result_299 = come_decrement_ref_count2(result_299, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_300;
    head_300=strstr(str,search_str);
    if(    head_300==((void*)0)) {
        return default_value;
    }
    return head_300-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_301;
int result_305;
int offset_306;
const char* err_307;
int erro_ofs_308;
int options_309;
char* str_310;
struct real_pcre* re_311;
int options_312;
int len_313;
int regex_result_314;
int i_315;
int i_316;
err_307 = (void*)0;
memset(&erro_ofs_308, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_301=16;
    int start_302[ovec_max_301];
    memset(&start_302, 0, sizeof(int)    *(ovec_max_301)    );
    int end_303[ovec_max_301];
    memset(&end_303, 0, sizeof(int)    *(ovec_max_301)    );
    int ovec_value_304[ovec_max_301*3];
    memset(&ovec_value_304, 0, sizeof(int)    *(ovec_max_301*3)    );
    result_305=default_value;
    offset_306=0;
    options_309=reg->options;
    str_310=reg->str;
    re_311=reg->re;
    while((_Bool)1) {
        options_312=2097152;
        len_313=strlen(self);
        regex_result_314=pcre_exec(re_311,(struct pcre_extra*)0,self,len_313,offset_306,options_312,ovec_value_304,ovec_max_301*3);
        for(        i_315=0;        i_315<ovec_max_301;        i_315++        ){
            start_302[i_315]=ovec_value_304[i_315*2];
        }
        for(        i_316=0;        i_316<ovec_max_301;        i_316++        ){
            end_303[i_316]=ovec_value_304[i_316*2+1];
        }
        if(        regex_result_314==1||regex_result_314>0) {
            result_305=start_302[0];
            break;
        }
        {
            break;
        }
    }
    return result_305;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_317;
void* __right_value260 = (void*)0;
char* __result141__;
void* __right_value261 = (void*)0;
char* __result142__;
    len_317=strlen(self);
    if(    strcmp(self,"")==0) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string(self)));
        /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    index<0) {
        index+=len_317;
    }
    if(    index>=len_317) {
        index=len_317-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(self)));
    /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_318;
void* __right_value262 = (void*)0;
char* result_319;
int i_320;
char* __result143__;
    len_318=strlen(str)*n+1;
    result_319=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_318)), "libcomelang-str.c", 1305, "char"));
    result_319[0]=0;
    for(    i_320=0;    i_320<n;    i_320++    ){
        strcat(result_319,str);
    }
    __result143__ = gComeFunResultObject = __result_obj__ = result_319;
    /* U13 */result_319 = come_decrement_ref_count2(result_319, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
char* __result144__;
int offset_321;
int ovec_max_322;
const char* err_326;
int erro_ofs_327;
int options_328;
char* str_329;
struct real_pcre* re_330;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* result_331;
int options_332;
int len_333;
int regex_result_334;
int i_335;
int i_336;
void* __right_value266 = (void*)0;
char* str_337;
void* __right_value267 = (void*)0;
char* str_338;
void* __right_value268 = (void*)0;
char* str_339;
void* __right_value269 = (void*)0;
char* __result145__;
err_326 = (void*)0;
memset(&erro_ofs_327, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=__builtin_string(self)));
        /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    offset_321=0;
    ovec_max_322=16;
    int start_323[ovec_max_322];
    memset(&start_323, 0, sizeof(int)    *(ovec_max_322)    );
    int end_324[ovec_max_322];
    memset(&end_324, 0, sizeof(int)    *(ovec_max_322)    );
    int ovec_value_325[ovec_max_322*3];
    memset(&ovec_value_325, 0, sizeof(int)    *(ovec_max_322*3)    );
    options_328=reg->options;
    str_329=reg->str;
    re_330=reg->re;
    result_331=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1336, "buffer"))));
    while((_Bool)1) {
        options_332=2097152;
        len_333=strlen(self);
        regex_result_334=pcre_exec(re_330,(struct pcre_extra*)0,self,len_333,offset_321,options_332,ovec_value_325,ovec_max_322*3);
        for(        i_335=0;        i_335<ovec_max_322;        i_335++        ){
            start_323[i_335]=ovec_value_325[i_335*2];
        }
        for(        i_336=0;        i_336<ovec_max_322;        i_336++        ){
            end_324[i_336]=ovec_value_325[i_336*2+1];
        }
        if(        regex_result_334==1) {
            str_337=(char*)come_increment_ref_count(charp_substring(self,offset_321,start_323[0]));
            buffer_append_str(result_331,str_337);
            buffer_append_str(result_331,replace);
            if(            offset_321==end_324[0]) {
                offset_321++;
            }
            else {
                offset_321=end_324[0];
            }
            if(            !reg->global) {
                str_338=(char*)come_increment_ref_count(charp_substring(self,offset_321,-1));
                buffer_append_str(result_331,str_338);
                /* U13 */str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_337 = come_decrement_ref_count2(str_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_338 = come_decrement_ref_count2(str_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_337 = come_decrement_ref_count2(str_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_339=(char*)come_increment_ref_count(charp_substring(self,offset_321,-1));
            buffer_append_str(result_331,str_339);
            /* U13 */str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_339 = come_decrement_ref_count2(str_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=buffer_to_string(result_331)));
    /*i*/come_call_finalizer3(result_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
char* __result146__;
int offset_340;
int ovec_max_341;
const char* err_345;
int erro_ofs_346;
int options_347;
char* str_348;
struct real_pcre* re_349;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct buffer* result_350;
int n_351;
int options_352;
int len_353;
int regex_result_354;
int i_355;
int i_356;
void* __right_value273 = (void*)0;
char* str_357;
void* __right_value274 = (void*)0;
char* str_358;
void* __right_value275 = (void*)0;
char* str_359;
void* __right_value276 = (void*)0;
char* str_360;
void* __right_value277 = (void*)0;
char* __result147__;
err_345 = (void*)0;
memset(&erro_ofs_346, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string(self)));
        /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    offset_340=0;
    ovec_max_341=16;
    int start_342[ovec_max_341];
    memset(&start_342, 0, sizeof(int)    *(ovec_max_341)    );
    int end_343[ovec_max_341];
    memset(&end_343, 0, sizeof(int)    *(ovec_max_341)    );
    int ovec_value_344[ovec_max_341*3];
    memset(&ovec_value_344, 0, sizeof(int)    *(ovec_max_341*3)    );
    options_347=reg->options;
    str_348=reg->str;
    re_349=reg->re;
    result_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1402, "buffer"))));
    n_351=0;
    while((_Bool)1) {
        options_352=2097152;
        len_353=strlen(self);
        regex_result_354=pcre_exec(re_349,(struct pcre_extra*)0,self,len_353,offset_340,options_352,ovec_value_344,ovec_max_341*3);
        for(        i_355=0;        i_355<ovec_max_341;        i_355++        ){
            start_342[i_355]=ovec_value_344[i_355*2];
        }
        for(        i_356=0;        i_356<ovec_max_341;        i_356++        ){
            end_343[i_356]=ovec_value_344[i_356*2+1];
        }
        if(        regex_result_354==1) {
            n_351++;
            str_357=(char*)come_increment_ref_count(charp_substring(self,offset_340,start_342[0]));
            buffer_append_str(result_350,str_357);
            buffer_append_str(result_350,replace);
            if(            offset_340==end_343[0]) {
                offset_340++;
            }
            else {
                offset_340=end_343[0];
            }
            if(            !reg->global) {
                str_358=(char*)come_increment_ref_count(charp_substring(self,offset_340,-1));
                buffer_append_str(result_350,str_358);
                /* U13 */str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_357 = come_decrement_ref_count2(str_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_358 = come_decrement_ref_count2(str_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_351==count) {
                str_359=(char*)come_increment_ref_count(charp_substring(self,offset_340,-1));
                buffer_append_str(result_350,str_359);
                /* U13 */str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_357 = come_decrement_ref_count2(str_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_359 = come_decrement_ref_count2(str_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_357 = come_decrement_ref_count2(str_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_360=(char*)come_increment_ref_count(charp_substring(self,offset_340,-1));
            buffer_append_str(result_350,str_360);
            /* U13 */str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_360 = come_decrement_ref_count2(str_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value277=buffer_to_string(result_350)));
    /*i*/come_call_finalizer3(result_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_361;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct buffer* buf_362;
int i_363;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* __result148__;
    result_361=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1461, "list$1charph"))));
    buf_362=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1463, "buffer"))));
    for(    i_363=0;    i_363<charp_length(self);    i_363++    ){
        if(        strstr(self+i_363,str)==self+i_363) {
            list$1charph_push_back(result_361,(char*)come_increment_ref_count(__builtin_string(buf_362->buf)));
            buffer_reset(buf_362);
            i_363+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_362,self[i_363]);
        }
    }
    if(    buffer_length(buf_362)!=0) {
        list$1charph_push_back(result_361,(char*)come_increment_ref_count(__builtin_string(buf_362->buf)));
    }
    __result148__ = gComeFunResultObject = __result_obj__ = result_361;
    /*i*/come_call_finalizer3(result_361,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_362,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* __result149__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1charph* result_364;
int offset_365;
int ovec_max_366;
const char* err_370;
int erro_ofs_371;
int options_372;
char* str_373;
struct real_pcre* re_374;
int options_375;
int len_376;
int regex_result_377;
int i_378;
int i_379;
void* __right_value288 = (void*)0;
char* str_380;
void* __right_value289 = (void*)0;
char* str_381;
int i_382;
void* __right_value290 = (void*)0;
char* match_string_383;
struct list$1charph* __result150__;
err_370 = (void*)0;
memset(&erro_ofs_371, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value285=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1485, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value285,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1487, "list$1charph"))));
    offset_365=0;
    ovec_max_366=16;
    int start_367[ovec_max_366];
    memset(&start_367, 0, sizeof(int)    *(ovec_max_366)    );
    int end_368[ovec_max_366];
    memset(&end_368, 0, sizeof(int)    *(ovec_max_366)    );
    int ovec_value_369[ovec_max_366*3];
    memset(&ovec_value_369, 0, sizeof(int)    *(ovec_max_366*3)    );
    options_372=reg->options;
    str_373=reg->str;
    re_374=reg->re;
    while((_Bool)1) {
        options_375=2097152;
        len_376=strlen(self);
        regex_result_377=pcre_exec(re_374,(struct pcre_extra*)0,self,len_376,offset_365,options_375,ovec_value_369,ovec_max_366*3);
        for(        i_378=0;        i_378<ovec_max_366;        i_378++        ){
            start_367[i_378]=ovec_value_369[i_378*2];
        }
        for(        i_379=0;        i_379<ovec_max_366;        i_379++        ){
            end_368[i_379]=ovec_value_369[i_379*2+1];
        }
        if(        regex_result_377==1) {
            str_380=(char*)come_increment_ref_count(charp_substring(self,start_367[0],end_368[0]));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str_380));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            /* U13 */str_380 = come_decrement_ref_count2(str_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_377>1) {
            str_381=(char*)come_increment_ref_count(charp_substring(self,start_367[0],end_368[0]));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str_381));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            for(            i_382=1;            i_382<regex_result_377;            i_382++            ){
                match_string_383=(char*)come_increment_ref_count(charp_substring(self,start_367[i_382],end_368[i_382]));
                list$1charph_push_back(result_364,(char*)come_increment_ref_count(match_string_383));
                /* U13 */match_string_383 = come_decrement_ref_count2(match_string_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_381 = come_decrement_ref_count2(str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result150__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1charph* __result151__;
const char* err_384;
int erro_ofs_385;
int options_386;
char* str_387;
struct real_pcre* re_388;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1charph* result_389;
int offset_390;
int ovec_max_391;
int options_395;
int len_396;
int regex_result_397;
int i_398;
int i_399;
void* __right_value295 = (void*)0;
char* str_400;
void* __right_value296 = (void*)0;
char* str_401;
int i_402;
void* __right_value297 = (void*)0;
char* match_str_403;
void* __right_value298 = (void*)0;
char* str_404;
struct list$1charph* __result152__;
err_384 = (void*)0;
memset(&erro_ofs_385, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value292=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1561, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value292,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    options_386=reg->options;
    str_387=reg->str;
    re_388=reg->re;
    result_389=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1571, "list$1charph"))));
    offset_390=0;
    ovec_max_391=16;
    int start_392[ovec_max_391];
    memset(&start_392, 0, sizeof(int)    *(ovec_max_391)    );
    int end_393[ovec_max_391];
    memset(&end_393, 0, sizeof(int)    *(ovec_max_391)    );
    int ovec_value_394[ovec_max_391*3];
    memset(&ovec_value_394, 0, sizeof(int)    *(ovec_max_391*3)    );
    while((_Bool)1) {
        options_395=2097152;
        len_396=strlen(self);
        regex_result_397=pcre_exec(re_388,(struct pcre_extra*)0,self,len_396,offset_390,options_395,ovec_value_394,ovec_max_391*3);
        for(        i_398=0;        i_398<ovec_max_391;        i_398++        ){
            start_392[i_398]=ovec_value_394[i_398*2];
        }
        for(        i_399=0;        i_399<ovec_max_391;        i_399++        ){
            end_393[i_399]=ovec_value_394[i_399*2+1];
        }
        if(        regex_result_397==1) {
            str_400=(char*)come_increment_ref_count(charp_substring(self,offset_390,start_392[0]));
            list$1charph_push_back(result_389,(char*)come_increment_ref_count(str_400));
            if(            offset_390==end_393[0]) {
                offset_390++;
            }
            else {
                offset_390=end_393[0];
            }
            /* U13 */str_400 = come_decrement_ref_count2(str_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_397>1) {
            str_401=(char*)come_increment_ref_count(charp_substring(self,offset_390,start_392[0]));
            list$1charph_push_back(result_389,(char*)come_increment_ref_count(str_401));
            if(            offset_390==end_393[0]) {
                offset_390++;
            }
            else {
                offset_390=end_393[0];
            }
            for(            i_402=1;            i_402<regex_result_397;            i_402++            ){
                match_str_403=(char*)come_increment_ref_count(charp_substring(self,start_392[i_402],end_393[i_402]));
                list$1charph_push_back(result_389,(char*)come_increment_ref_count(match_str_403));
                /* U13 */match_str_403 = come_decrement_ref_count2(match_str_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_401 = come_decrement_ref_count2(str_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_390<charp_length(self)) {
        str_404=(char*)come_increment_ref_count(charp_substring(self,offset_390,-1));
        list$1charph_push_back(result_389,(char*)come_increment_ref_count(str_404));
        /* U13 */str_404 = come_decrement_ref_count2(str_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result152__ = gComeFunResultObject = __result_obj__ = result_389;
    /*i*/come_call_finalizer3(result_389,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_405;
int ovec_max_406;
const char* err_410;
int erro_ofs_411;
int options_412;
char* str_413;
struct real_pcre* re_414;
int options_415;
int len_416;
int regex_result_417;
int i_418;
int i_419;
err_410 = (void*)0;
memset(&erro_ofs_411, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_405=0;
    ovec_max_406=16;
    int start_407[ovec_max_406];
    memset(&start_407, 0, sizeof(int)    *(ovec_max_406)    );
    int end_408[ovec_max_406];
    memset(&end_408, 0, sizeof(int)    *(ovec_max_406)    );
    int ovec_value_409[ovec_max_406*3];
    memset(&ovec_value_409, 0, sizeof(int)    *(ovec_max_406*3)    );
    options_412=reg->options;
    str_413=reg->str;
    re_414=reg->re;
    while((_Bool)1) {
        options_415=2097152;
        len_416=strlen(self);
        regex_result_417=pcre_exec(re_414,(struct pcre_extra*)0,self,len_416,offset_405,options_415,ovec_value_409,ovec_max_406*3);
        for(        i_418=0;        i_418<ovec_max_406;        i_418++        ){
            start_407[i_418]=ovec_value_409[i_418*2];
        }
        for(        i_419=0;        i_419<ovec_max_406;        i_419++        ){
            end_408[i_419]=ovec_value_409[i_419*2+1];
        }
        if(        regex_result_417>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* __result153__;
const char* err_420;
int erro_ofs_421;
int options_422;
char* str_423;
struct real_pcre* re_424;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_425;
int offset_426;
int ovec_max_427;
int n_431;
int options_432;
int len_433;
int regex_result_434;
int i_435;
int i_436;
void* __right_value303 = (void*)0;
char* str_437;
void* __right_value304 = (void*)0;
char* str_438;
int i_439;
void* __right_value305 = (void*)0;
char* match_str_440;
void* __right_value306 = (void*)0;
char* str_441;
struct list$1charph* __result154__;
err_420 = (void*)0;
memset(&erro_ofs_421, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value300=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1689, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    options_422=reg->options;
    str_423=reg->str;
    re_424=reg->re;
    result_425=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1699, "list$1charph"))));
    offset_426=0;
    ovec_max_427=16;
    int start_428[ovec_max_427];
    memset(&start_428, 0, sizeof(int)    *(ovec_max_427)    );
    int end_429[ovec_max_427];
    memset(&end_429, 0, sizeof(int)    *(ovec_max_427)    );
    int ovec_value_430[ovec_max_427*3];
    memset(&ovec_value_430, 0, sizeof(int)    *(ovec_max_427*3)    );
    n_431=0;
    while((_Bool)1) {
        options_432=2097152;
        len_433=strlen(self);
        regex_result_434=pcre_exec(re_424,(struct pcre_extra*)0,self,len_433,offset_426,options_432,ovec_value_430,ovec_max_427*3);
        for(        i_435=0;        i_435<ovec_max_427;        i_435++        ){
            start_428[i_435]=ovec_value_430[i_435*2];
        }
        for(        i_436=0;        i_436<ovec_max_427;        i_436++        ){
            end_429[i_436]=ovec_value_430[i_436*2+1];
        }
        if(        regex_result_434==1) {
            str_437=(char*)come_increment_ref_count(charp_substring(self,offset_426,start_428[0]));
            list$1charph_push_back(result_425,(char*)come_increment_ref_count(str_437));
            if(            offset_426==end_429[0]) {
                offset_426++;
            }
            else {
                offset_426=end_429[0];
            }
            /* U13 */str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_434>1) {
            str_438=(char*)come_increment_ref_count(charp_substring(self,offset_426,start_428[0]));
            list$1charph_push_back(result_425,(char*)come_increment_ref_count(str_438));
            if(            offset_426==end_429[0]) {
                offset_426++;
            }
            else {
                offset_426=end_429[0];
            }
            for(            i_439=1;            i_439<regex_result_434;            i_439++            ){
                match_str_440=(char*)come_increment_ref_count(charp_substring(self,start_428[i_439],end_429[i_439]));
                list$1charph_push_back(result_425,(char*)come_increment_ref_count(match_str_440));
                /* U13 */match_str_440 = come_decrement_ref_count2(match_str_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_431++;
        if(        maxsplit==n_431) {
            break;
        }
    }
    if(    offset_426<charp_length(self)) {
        str_441=(char*)come_increment_ref_count(charp_substring(self,offset_426,-1));
        list$1charph_push_back(result_425,(char*)come_increment_ref_count(str_441));
        /* U13 */str_441 = come_decrement_ref_count2(str_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result154__ = gComeFunResultObject = __result_obj__ = result_425;
    /*i*/come_call_finalizer3(result_425,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_442;
int erro_ofs_443;
int options_444;
char* str_445;
struct real_pcre* re_446;
void* __right_value307 = (void*)0;
char* self2_447;
int ovec_max_448;
int result_452;
int offset_453;
int n_454;
int options_455;
int len_456;
int regex_result_457;
int i_458;
int i_459;
int __result155__;
err_442 = (void*)0;
memset(&erro_ofs_443, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_444=reg->options;
    str_445=reg->str;
    re_446=reg->re;
    self2_447=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_448=16;
    int start_449[ovec_max_448];
    memset(&start_449, 0, sizeof(int)    *(ovec_max_448)    );
    int end_450[ovec_max_448];
    memset(&end_450, 0, sizeof(int)    *(ovec_max_448)    );
    int ovec_value_451[ovec_max_448*3];
    memset(&ovec_value_451, 0, sizeof(int)    *(ovec_max_448*3)    );
    result_452=default_value;
    offset_453=0;
    n_454=0;
    while((_Bool)1) {
        options_455=2097152;
        len_456=strlen(self2_447);
        regex_result_457=pcre_exec(re_446,(struct pcre_extra*)0,self2_447,len_456,offset_453,options_455,ovec_value_451,ovec_max_448*3);
        for(        i_458=0;        i_458<ovec_max_448;        i_458++        ){
            start_449[i_458]=ovec_value_451[i_458*2];
        }
        for(        i_459=0;        i_459<ovec_max_448;        i_459++        ){
            end_450[i_459]=ovec_value_451[i_459*2+1];
        }
        if(        regex_result_457>0) {
            n_454++;
            if(            offset_453==end_450[0]) {
                offset_453++;
            }
            else {
                offset_453=end_450[0];
            }
            if(            n_454==count) {
                result_452=strlen(self)-end_450[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result155__ = result_452;
    /* U13 */self2_447 = come_decrement_ref_count2(self2_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result155__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_460;
int ovec_max_461;
const char* err_465;
int erro_ofs_466;
int options_467;
char* str_468;
struct real_pcre* re_469;
int n_470;
int options_471;
int len_472;
int regex_result_473;
int i_474;
int i_475;
err_465 = (void*)0;
memset(&erro_ofs_466, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_460=0;
    ovec_max_461=16;
    int start_462[ovec_max_461];
    memset(&start_462, 0, sizeof(int)    *(ovec_max_461)    );
    int end_463[ovec_max_461];
    memset(&end_463, 0, sizeof(int)    *(ovec_max_461)    );
    int ovec_value_464[ovec_max_461*3];
    memset(&ovec_value_464, 0, sizeof(int)    *(ovec_max_461*3)    );
    options_467=reg->options;
    str_468=reg->str;
    re_469=reg->re;
    n_470=0;
    while((_Bool)1) {
        options_471=2097152;
        len_472=strlen(self);
        regex_result_473=pcre_exec(re_469,(struct pcre_extra*)0,self,len_472,offset_460,options_471,ovec_value_464,ovec_max_461*3);
        for(        i_474=0;        i_474<ovec_max_461;        i_474++        ){
            start_462[i_474]=ovec_value_464[i_474*2];
        }
        for(        i_475=0;        i_475<ovec_max_461;        i_475++        ){
            end_463[i_475]=ovec_value_464[i_475*2+1];
        }
        if(        regex_result_473>0) {
            n_470++;
            if(            count==n_470) {
                return (_Bool)1;
            }
            if(            offset_460==end_463[0]) {
                offset_460++;
            }
            else {
                offset_460=end_463[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
char* __result156__;
int offset_476;
int ovec_max_477;
const char* err_481;
int erro_ofs_482;
int options_483;
char* str_484;
struct real_pcre* re_485;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct buffer* result_486;
int options_487;
int len_488;
int regex_result_489;
int i_490;
int i_491;
void* __right_value311 = (void*)0;
char* str_492;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1charph* group_strings_493;
void* __right_value314 = (void*)0;
char* match_string_494;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* block_result_495;
void* __right_value317 = (void*)0;
char* str_496;
void* __right_value318 = (void*)0;
char* str_497;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* group_strings_498;
int i_499;
void* __right_value321 = (void*)0;
char* match_string_500;
void* __right_value322 = (void*)0;
char* match_string_501;
void* __right_value323 = (void*)0;
char* block_result_502;
void* __right_value324 = (void*)0;
char* str_503;
void* __right_value325 = (void*)0;
char* str_504;
void* __right_value326 = (void*)0;
char* __result157__;
err_481 = (void*)0;
memset(&erro_ofs_482, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value308=__builtin_string("")));
        /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    offset_476=0;
    ovec_max_477=16;
    int start_478[ovec_max_477];
    memset(&start_478, 0, sizeof(int)    *(ovec_max_477)    );
    int end_479[ovec_max_477];
    memset(&end_479, 0, sizeof(int)    *(ovec_max_477)    );
    int ovec_value_480[ovec_max_477*3];
    memset(&ovec_value_480, 0, sizeof(int)    *(ovec_max_477*3)    );
    options_483=reg->options;
    str_484=reg->str;
    re_485=reg->re;
    result_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1920, "buffer"))));
    while((_Bool)1) {
        options_487=2097152;
        len_488=strlen(self);
        regex_result_489=pcre_exec(re_485,(struct pcre_extra*)0,self,len_488,offset_476,options_487,ovec_value_480,ovec_max_477*3);
        for(        i_490=0;        i_490<ovec_max_477;        i_490++        ){
            start_478[i_490]=ovec_value_480[i_490*2];
        }
        for(        i_491=0;        i_491<ovec_max_477;        i_491++        ){
            end_479[i_491]=ovec_value_480[i_491*2+1];
        }
        if(        regex_result_489==1) {
            str_492=(char*)come_increment_ref_count(charp_substring(self,offset_476,start_478[0]));
            buffer_append_str(result_486,str_492);
            group_strings_493=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1940, "list$1charph"))));
            match_string_494=(char*)come_increment_ref_count(charp_substring(self,start_478[0],end_479[0]));
            list$1charph_push_back(group_strings_493,(char*)come_increment_ref_count(charp_substring(self,start_478[0],end_479[0])));
            block_result_495=(char*)come_increment_ref_count(block(parent,match_string_494,group_strings_493));
            buffer_append_str(result_486,block_result_495);
            if(            offset_476==end_479[0]) {
                offset_476++;
            }
            else {
                offset_476=end_479[0];
            }
            if(            !reg->global) {
                str_496=(char*)come_increment_ref_count(charp_substring(self,offset_476,-1));
                buffer_append_str(result_486,str_496);
                /* U13 */str_496 = come_decrement_ref_count2(str_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_492 = come_decrement_ref_count2(str_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_493,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_494 = come_decrement_ref_count2(match_string_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_495 = come_decrement_ref_count2(block_result_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_496 = come_decrement_ref_count2(str_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_492 = come_decrement_ref_count2(str_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_493,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_494 = come_decrement_ref_count2(match_string_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_495 = come_decrement_ref_count2(block_result_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_489>1) {
            str_497=(char*)come_increment_ref_count(charp_substring(self,offset_476,start_478[0]));
            buffer_append_str(result_486,str_497);
            if(            offset_476==end_479[0]) {
                offset_476++;
            }
            else {
                offset_476=end_479[0];
            }
            group_strings_498=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1975, "list$1charph"))));
            for(            i_499=1;            i_499<regex_result_489;            i_499++            ){
                match_string_500=(char*)come_increment_ref_count(charp_substring(self,start_478[i_499],end_479[i_499]));
                list$1charph_push_back(group_strings_498,(char*)come_increment_ref_count(match_string_500));
                /* U13 */match_string_500 = come_decrement_ref_count2(match_string_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_501=(char*)come_increment_ref_count(charp_substring(self,start_478[0],end_479[0]));
            block_result_502=(char*)come_increment_ref_count(block(parent,match_string_501,group_strings_498));
            buffer_append_str(result_486,block_result_502);
            if(            !reg->global) {
                str_503=(char*)come_increment_ref_count(charp_substring(self,offset_476,-1));
                buffer_append_str(result_486,str_503);
                /* U13 */str_503 = come_decrement_ref_count2(str_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_497 = come_decrement_ref_count2(str_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_501 = come_decrement_ref_count2(match_string_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_502 = come_decrement_ref_count2(block_result_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_503 = come_decrement_ref_count2(str_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_497 = come_decrement_ref_count2(str_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_501 = come_decrement_ref_count2(match_string_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_502 = come_decrement_ref_count2(block_result_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_504=(char*)come_increment_ref_count(charp_substring(self,offset_476,-1));
            buffer_append_str(result_486,str_504);
            /* U13 */str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_504 = come_decrement_ref_count2(str_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value326=buffer_to_string(result_486)));
    /*i*/come_call_finalizer3(result_486,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
char* __result158__;
int offset_505;
int ovec_max_506;
const char* err_510;
int erro_ofs_511;
int options_512;
char* str_513;
struct real_pcre* re_514;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct buffer* result_515;
int n_516;
int options_517;
int len_518;
int regex_result_519;
int i_520;
int i_521;
void* __right_value330 = (void*)0;
char* str_522;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charph* group_strings_523;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* match_string_524;
void* __right_value335 = (void*)0;
char* block_result_525;
void* __right_value336 = (void*)0;
char* str_526;
void* __right_value337 = (void*)0;
char* str_527;
void* __right_value338 = (void*)0;
char* str_528;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* group_strings_529;
int i_530;
void* __right_value341 = (void*)0;
char* match_string_531;
void* __right_value342 = (void*)0;
char* match_string_532;
void* __right_value343 = (void*)0;
char* block_result_533;
void* __right_value344 = (void*)0;
char* str_534;
void* __right_value345 = (void*)0;
char* str_535;
void* __right_value346 = (void*)0;
char* str_536;
void* __right_value347 = (void*)0;
char* __result159__;
err_510 = (void*)0;
memset(&erro_ofs_511, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value327=__builtin_string("")));
        /* U11 */__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    offset_505=0;
    ovec_max_506=16;
    int start_507[ovec_max_506];
    memset(&start_507, 0, sizeof(int)    *(ovec_max_506)    );
    int end_508[ovec_max_506];
    memset(&end_508, 0, sizeof(int)    *(ovec_max_506)    );
    int ovec_value_509[ovec_max_506*3];
    memset(&ovec_value_509, 0, sizeof(int)    *(ovec_max_506*3)    );
    options_512=reg->options;
    str_513=reg->str;
    re_514=reg->re;
    result_515=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2024, "buffer"))));
    n_516=0;
    while((_Bool)1) {
        options_517=2097152;
        len_518=strlen(self);
        regex_result_519=pcre_exec(re_514,(struct pcre_extra*)0,self,len_518,offset_505,options_517,ovec_value_509,ovec_max_506*3);
        for(        i_520=0;        i_520<ovec_max_506;        i_520++        ){
            start_507[i_520]=ovec_value_509[i_520*2];
        }
        for(        i_521=0;        i_521<ovec_max_506;        i_521++        ){
            end_508[i_521]=ovec_value_509[i_521*2+1];
        }
        if(        regex_result_519==1) {
            n_516++;
            str_522=(char*)come_increment_ref_count(charp_substring(self,offset_505,start_507[0]));
            buffer_append_str(result_515,str_522);
            group_strings_523=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2047, "list$1charph"))));
            list$1charph_push_back(group_strings_523,(char*)come_increment_ref_count(charp_substring(self,start_507[0],end_508[0])));
            match_string_524=(char*)come_increment_ref_count(charp_substring(self,start_507[0],end_508[0]));
            block_result_525=(char*)come_increment_ref_count(block(parent,match_string_524,group_strings_523));
            buffer_append_str(result_515,block_result_525);
            if(            offset_505==end_508[0]) {
                offset_505++;
            }
            else {
                offset_505=end_508[0];
            }
            if(            !reg->global) {
                str_526=(char*)come_increment_ref_count(charp_substring(self,offset_505,-1));
                buffer_append_str(result_515,str_526);
                /* U13 */str_526 = come_decrement_ref_count2(str_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_522 = come_decrement_ref_count2(str_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_524 = come_decrement_ref_count2(match_string_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_525 = come_decrement_ref_count2(block_result_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_526 = come_decrement_ref_count2(str_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_516==count) {
                str_527=(char*)come_increment_ref_count(charp_substring(self,offset_505,-1));
                buffer_append_str(result_515,str_527);
                /* U13 */str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_522 = come_decrement_ref_count2(str_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_524 = come_decrement_ref_count2(match_string_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_525 = come_decrement_ref_count2(block_result_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_527 = come_decrement_ref_count2(str_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_522 = come_decrement_ref_count2(str_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_523,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_524 = come_decrement_ref_count2(match_string_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_525 = come_decrement_ref_count2(block_result_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_519>1) {
            n_516++;
            str_528=(char*)come_increment_ref_count(charp_substring(self,offset_505,start_507[0]));
            buffer_append_str(result_515,str_528);
            if(            offset_505==end_508[0]) {
                offset_505++;
            }
            else {
                offset_505=end_508[0];
            }
            group_strings_529=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2090, "list$1charph"))));
            for(            i_530=1;            i_530<regex_result_519;            i_530++            ){
                match_string_531=(char*)come_increment_ref_count(charp_substring(self,start_507[i_530],end_508[i_530]));
                list$1charph_push_back(group_strings_529,(char*)come_increment_ref_count(match_string_531));
                /* U13 */match_string_531 = come_decrement_ref_count2(match_string_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_532=(char*)come_increment_ref_count(charp_substring(self,start_507[0],end_508[0]));
            block_result_533=(char*)come_increment_ref_count(block(parent,match_string_532,group_strings_529));
            buffer_append_str(result_515,block_result_533);
            if(            !reg->global) {
                str_534=(char*)come_increment_ref_count(charp_substring(self,offset_505,-1));
                buffer_append_str(result_515,str_534);
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_528 = come_decrement_ref_count2(str_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_532 = come_decrement_ref_count2(match_string_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_533 = come_decrement_ref_count2(block_result_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_516==count) {
                str_535=(char*)come_increment_ref_count(charp_substring(self,offset_505,-1));
                buffer_append_str(result_515,str_535);
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_528 = come_decrement_ref_count2(str_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_532 = come_decrement_ref_count2(match_string_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_533 = come_decrement_ref_count2(block_result_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_528 = come_decrement_ref_count2(str_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_532 = come_decrement_ref_count2(match_string_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_533 = come_decrement_ref_count2(block_result_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_536=(char*)come_increment_ref_count(charp_substring(self,offset_505,-1));
            buffer_append_str(result_515,str_536);
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value347=buffer_to_string(result_515)));
    /*i*/come_call_finalizer3(result_515,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_537;
int* p_538;
    result_537=0;
    p_538=value;
    while(*p_538) {
        result_537+=(*p_538);
        p_538++;
    }
    return result_537;
}

_Bool wstring_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

char* wchar_t_to_string(int wc){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value348=xsprintf("%ls",wc)));
    /* U11 */__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* result_539;
void* __right_value350 = (void*)0;
char* __result161__;
char* __result162__;
    result_539=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_539[string_length(result_539)-1]==10) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=string_substring(result_539,0,-2)));
        /* U13 */result_539 = come_decrement_ref_count2(result_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_539;
    /* U13 */result_539 = come_decrement_ref_count2(result_539, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
char* __result163__;
char* result_540;
void* __right_value352 = (void*)0;
char* result2_541;
char* __result164__;
    if(    path==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=__builtin_string("")));
        /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_540=realpath(path,((void*)0));
    result2_541=(char*)come_increment_ref_count(__builtin_string(result_540));
    free(result_540);
    __result164__ = gComeFunResultObject = __result_obj__ = result2_541;
    /* U13 */result2_541 = come_decrement_ref_count2(result2_541, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result165__;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __result166__;
    if(    path==((void*)0)) {
        __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("")));
        /* U11 */__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string(dirname(((char*)(__right_value354=__builtin_string(path)))))));
    /* U11 */__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

unsigned long  int xwcslen(int* wstr){
int* p_542;
unsigned long  int len_543;
    p_542=wstr;
    len_543=0;
    while(*p_542) {
        p_542++;
        len_543++;
    }
    return len_543;
}

