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

typedef long  int ptrdiff_t;

struct anonymous_typeX21
{
    long  long __max_align_ll;
    long  double __max_align_ld;
};

typedef struct anonymous_typeX21 max_align_t;

typedef void* GC_PTR;

typedef unsigned long  int GC_word;

typedef long GC_signed_word;

extern unsigned long  int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long  int);

extern void* (*GC_oom_fn)(unsigned long  int);
typedef void (*GC_on_heap_resize_proc)(unsigned long  int);

extern void (*GC_on_heap_resize)(unsigned long  int);
enum anonymous_typeY22 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};

typedef enum anonymous_typeY22 GC_EventType;

typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY22);

extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();

extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long  int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long  int GC_free_space_divisor;
extern unsigned long  int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long  int GC_time_limit;
struct GC_timeval_s
{
    unsigned long  int tv_ms;
    unsigned long  int tv_nsec;
};

typedef int (*GC_stop_func)();

struct GC_prof_stats_s
{
    unsigned long  int heapsize_full;
    unsigned long  int free_bytes_full;
    unsigned long  int unmapped_bytes;
    unsigned long  int bytes_allocd_since_gc;
    unsigned long  int allocd_bytes_before_gc;
    unsigned long  int non_gc_bytes;
    unsigned long  int gc_no;
    unsigned long  int markers_m1;
    unsigned long  int bytes_reclaimed_since_gc;
    unsigned long  int reclaimed_bytes_before_gc;
    unsigned long  int expl_freed_bytes_since_gc;
    unsigned long  int obtained_from_os_bytes;
};

typedef void (*GC_finalization_proc)(void*,void*);

enum anonymous_typeY23 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};

typedef enum anonymous_typeY23 GC_ToggleRefStatus;

typedef enum anonymous_typeY23 (*GC_toggleref_func)(void*);

typedef void (*GC_await_finalize_proc)(void*);

typedef void (*GC_warn_proc)(char*,unsigned long  int);

typedef void (*GC_abort_func)(const char*);

typedef unsigned long  int GC_hidden_pointer;

typedef void* (*GC_fn_type)(void*);

struct GC_stack_base
{
    void* mem_base;
};

typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);

extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long  int);

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
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
struct real_pcre* pcre_compile(const char* anonymous_var_nameX127, int anonymous_var_nameX128, const char** anonymous_var_nameX129, int* anonymous_var_nameX130, const unsigned char* anonymous_var_nameX131);
struct real_pcre16* pcre16_compile(const unsigned short int* anonymous_var_nameX132, int anonymous_var_nameX133, const char** anonymous_var_nameX134, int* anonymous_var_nameX135, const unsigned char* anonymous_var_nameX136);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX137, int anonymous_var_nameX138, const char** anonymous_var_nameX139, int* anonymous_var_nameX140, const unsigned char* anonymous_var_nameX141);
struct real_pcre* pcre_compile2(const char* anonymous_var_nameX142, int anonymous_var_nameX143, int* anonymous_var_nameX144, const char** anonymous_var_nameX145, int* anonymous_var_nameX146, const unsigned char* anonymous_var_nameX147);
struct real_pcre16* pcre16_compile2(const unsigned short int* anonymous_var_nameX148, int anonymous_var_nameX149, int* anonymous_var_nameX150, const char** anonymous_var_nameX151, int* anonymous_var_nameX152, const unsigned char* anonymous_var_nameX153);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX154, int anonymous_var_nameX155, int* anonymous_var_nameX156, const char** anonymous_var_nameX157, int* anonymous_var_nameX158, const unsigned char* anonymous_var_nameX159);
int pcre_config(int anonymous_var_nameX160, void* anonymous_var_nameX161);
int pcre16_config(int anonymous_var_nameX162, void* anonymous_var_nameX163);
int pcre32_config(int anonymous_var_nameX164, void* anonymous_var_nameX165);
int pcre_copy_named_substring(const struct real_pcre* anonymous_var_nameX166, const char* anonymous_var_nameX167, int* anonymous_var_nameX168, int anonymous_var_nameX169, const char* anonymous_var_nameX170, char* anonymous_var_nameX171, int anonymous_var_nameX172);
int pcre16_copy_named_substring(const struct real_pcre16* anonymous_var_nameX173, const unsigned short int* anonymous_var_nameX174, int* anonymous_var_nameX175, int anonymous_var_nameX176, const unsigned short int* anonymous_var_nameX177, unsigned short int* anonymous_var_nameX178, int anonymous_var_nameX179);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX180, const unsigned int* anonymous_var_nameX181, int* anonymous_var_nameX182, int anonymous_var_nameX183, const unsigned int* anonymous_var_nameX184, unsigned int* anonymous_var_nameX185, int anonymous_var_nameX186);
int pcre_copy_substring(const char* anonymous_var_nameX187, int* anonymous_var_nameX188, int anonymous_var_nameX189, int anonymous_var_nameX190, char* anonymous_var_nameX191, int anonymous_var_nameX192);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX193, int* anonymous_var_nameX194, int anonymous_var_nameX195, int anonymous_var_nameX196, unsigned short int* anonymous_var_nameX197, int anonymous_var_nameX198);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX199, int* anonymous_var_nameX200, int anonymous_var_nameX201, int anonymous_var_nameX202, unsigned int* anonymous_var_nameX203, int anonymous_var_nameX204);
int pcre_dfa_exec(const struct real_pcre* anonymous_var_nameX205, const struct pcre_extra* anonymous_var_nameX206, const char* anonymous_var_nameX207, int anonymous_var_nameX208, int anonymous_var_nameX209, int anonymous_var_nameX210, int* anonymous_var_nameX211, int anonymous_var_nameX212, int* anonymous_var_nameX213, int anonymous_var_nameX214);
int pcre16_dfa_exec(const struct real_pcre16* anonymous_var_nameX215, const struct pcre16_extra* anonymous_var_nameX216, const unsigned short int* anonymous_var_nameX217, int anonymous_var_nameX218, int anonymous_var_nameX219, int anonymous_var_nameX220, int* anonymous_var_nameX221, int anonymous_var_nameX222, int* anonymous_var_nameX223, int anonymous_var_nameX224);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX225, const struct pcre32_extra* anonymous_var_nameX226, const unsigned int* anonymous_var_nameX227, int anonymous_var_nameX228, int anonymous_var_nameX229, int anonymous_var_nameX230, int* anonymous_var_nameX231, int anonymous_var_nameX232, int* anonymous_var_nameX233, int anonymous_var_nameX234);
int pcre_exec(const struct real_pcre* anonymous_var_nameX235, const struct pcre_extra* anonymous_var_nameX236, const char* anonymous_var_nameX237, int anonymous_var_nameX238, int anonymous_var_nameX239, int anonymous_var_nameX240, int* anonymous_var_nameX241, int anonymous_var_nameX242);
int pcre16_exec(const struct real_pcre16* anonymous_var_nameX243, const struct pcre16_extra* anonymous_var_nameX244, const unsigned short int* anonymous_var_nameX245, int anonymous_var_nameX246, int anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int anonymous_var_nameX250);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX251, const struct pcre32_extra* anonymous_var_nameX252, const unsigned int* anonymous_var_nameX253, int anonymous_var_nameX254, int anonymous_var_nameX255, int anonymous_var_nameX256, int* anonymous_var_nameX257, int anonymous_var_nameX258);
int pcre_jit_exec(const struct real_pcre* anonymous_var_nameX259, const struct pcre_extra* anonymous_var_nameX260, const char* anonymous_var_nameX261, int anonymous_var_nameX262, int anonymous_var_nameX263, int anonymous_var_nameX264, int* anonymous_var_nameX265, int anonymous_var_nameX266, struct real_pcre_jit_stack* anonymous_var_nameX267);
int pcre16_jit_exec(const struct real_pcre16* anonymous_var_nameX268, const struct pcre16_extra* anonymous_var_nameX269, const unsigned short int* anonymous_var_nameX270, int anonymous_var_nameX271, int anonymous_var_nameX272, int anonymous_var_nameX273, int* anonymous_var_nameX274, int anonymous_var_nameX275, struct real_pcre16_jit_stack* anonymous_var_nameX276);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX277, const struct pcre32_extra* anonymous_var_nameX278, const unsigned int* anonymous_var_nameX279, int anonymous_var_nameX280, int anonymous_var_nameX281, int anonymous_var_nameX282, int* anonymous_var_nameX283, int anonymous_var_nameX284, struct real_pcre32_jit_stack* anonymous_var_nameX285);
void pcre_free_substring(const char* anonymous_var_nameX286);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX287);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX288);
void pcre_free_substring_list(const char** anonymous_var_nameX289);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX290);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX291);
int pcre_fullinfo(const struct real_pcre* anonymous_var_nameX292, const struct pcre_extra* anonymous_var_nameX293, int anonymous_var_nameX294, void* anonymous_var_nameX295);
int pcre16_fullinfo(const struct real_pcre16* anonymous_var_nameX296, const struct pcre16_extra* anonymous_var_nameX297, int anonymous_var_nameX298, void* anonymous_var_nameX299);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX300, const struct pcre32_extra* anonymous_var_nameX301, int anonymous_var_nameX302, void* anonymous_var_nameX303);
int pcre_get_named_substring(const struct real_pcre* anonymous_var_nameX304, const char* anonymous_var_nameX305, int* anonymous_var_nameX306, int anonymous_var_nameX307, const char* anonymous_var_nameX308, const char** anonymous_var_nameX309);
int pcre16_get_named_substring(const struct real_pcre16* anonymous_var_nameX310, const unsigned short int* anonymous_var_nameX311, int* anonymous_var_nameX312, int anonymous_var_nameX313, const unsigned short int* anonymous_var_nameX314, const unsigned short int** anonymous_var_nameX315);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX316, const unsigned int* anonymous_var_nameX317, int* anonymous_var_nameX318, int anonymous_var_nameX319, const unsigned int* anonymous_var_nameX320, const unsigned int** anonymous_var_nameX321);
int pcre_get_stringnumber(const struct real_pcre* anonymous_var_nameX322, const char* anonymous_var_nameX323);
int pcre16_get_stringnumber(const struct real_pcre16* anonymous_var_nameX324, const unsigned short int* anonymous_var_nameX325);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX326, const unsigned int* anonymous_var_nameX327);
int pcre_get_stringtable_entries(const struct real_pcre* anonymous_var_nameX328, const char* anonymous_var_nameX329, char** anonymous_var_nameX330, char** anonymous_var_nameX331);
int pcre16_get_stringtable_entries(const struct real_pcre16* anonymous_var_nameX332, const unsigned short int* anonymous_var_nameX333, unsigned short int** anonymous_var_nameX334, unsigned short int** anonymous_var_nameX335);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX336, const unsigned int* anonymous_var_nameX337, unsigned int** anonymous_var_nameX338, unsigned int** anonymous_var_nameX339);
int pcre_get_substring(const char* anonymous_var_nameX340, int* anonymous_var_nameX341, int anonymous_var_nameX342, int anonymous_var_nameX343, const char** anonymous_var_nameX344);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX345, int* anonymous_var_nameX346, int anonymous_var_nameX347, int anonymous_var_nameX348, const unsigned short int** anonymous_var_nameX349);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX350, int* anonymous_var_nameX351, int anonymous_var_nameX352, int anonymous_var_nameX353, const unsigned int** anonymous_var_nameX354);
int pcre_get_substring_list(const char* anonymous_var_nameX355, int* anonymous_var_nameX356, int anonymous_var_nameX357, const char*** anonymous_var_nameX358);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX359, int* anonymous_var_nameX360, int anonymous_var_nameX361, const unsigned short int*** anonymous_var_nameX362);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX363, int* anonymous_var_nameX364, int anonymous_var_nameX365, const unsigned int*** anonymous_var_nameX366);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre* anonymous_var_nameX367, int anonymous_var_nameX368);
int pcre16_refcount(struct real_pcre16* anonymous_var_nameX369, int anonymous_var_nameX370);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX371, int anonymous_var_nameX372);
struct pcre_extra* pcre_study(const struct real_pcre* anonymous_var_nameX373, int anonymous_var_nameX374, const char** anonymous_var_nameX375);
struct pcre16_extra* pcre16_study(const struct real_pcre16* anonymous_var_nameX376, int anonymous_var_nameX377, const char** anonymous_var_nameX378);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX379, int anonymous_var_nameX380, const char** anonymous_var_nameX381);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX382);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX383);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX384);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre* anonymous_var_nameX385, struct pcre_extra* anonymous_var_nameX386, const unsigned char* anonymous_var_nameX387);
int pcre16_pattern_to_host_byte_order(struct real_pcre16* anonymous_var_nameX388, struct pcre16_extra* anonymous_var_nameX389, const unsigned char* anonymous_var_nameX390);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX391, struct pcre32_extra* anonymous_var_nameX392, const unsigned char* anonymous_var_nameX393);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX394, const unsigned short int* anonymous_var_nameX395, int anonymous_var_nameX396, int* anonymous_var_nameX397, int anonymous_var_nameX398);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX399, const unsigned int* anonymous_var_nameX400, int anonymous_var_nameX401, int* anonymous_var_nameX402, int anonymous_var_nameX403);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX404, int anonymous_var_nameX405);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX406, int anonymous_var_nameX407);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX408, int anonymous_var_nameX409);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX410);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX411);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX412);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX413, struct real_pcre_jit_stack* (*anonymous_var_nameX414)(void*), void* anonymous_var_nameX415);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX416, struct real_pcre16_jit_stack* (*anonymous_var_nameX417)(void*), void* anonymous_var_nameX418);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX419, struct real_pcre32_jit_stack* (*anonymous_var_nameX420)(void*), void* anonymous_var_nameX421);
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
unsigned int GC_get_version();
unsigned long  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX423)(unsigned long  int));
void* (*GC_get_oom_fn())(unsigned long  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX425)(unsigned long  int));
void (*GC_get_on_heap_resize())(unsigned long  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX427)(enum anonymous_typeY22));
void (*GC_get_on_collection_event())(enum anonymous_typeY22);
void GC_set_find_leak(int anonymous_var_nameX428);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX429);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX430);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX431);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX432)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX433);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX434);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long  int anonymous_var_nameX435);
unsigned long  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX436);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long  int anonymous_var_nameX437);
unsigned long  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long  int anonymous_var_nameX438);
unsigned long  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX439);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long  int anonymous_var_nameX440);
unsigned long  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX441);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long  int anonymous_var_nameX442);
unsigned long  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX443);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long  int anonymous_var_nameX444);
unsigned long  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX445);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX446);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX447);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX448);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long  int anonymous_var_nameX449);
void* GC_malloc_atomic(unsigned long  int anonymous_var_nameX450);
char* GC_strdup(const char* anonymous_var_nameX451);
char* GC_strndup(const char* anonymous_var_nameX452, unsigned long  int anonymous_var_nameX453);
void* GC_malloc_uncollectable(unsigned long  int anonymous_var_nameX454);
void* GC_malloc_stubborn(unsigned long  int anonymous_var_nameX455);
void* GC_memalign(unsigned long  int anonymous_var_nameX456, unsigned long  int anonymous_var_nameX457);
int GC_posix_memalign(void** anonymous_var_nameX458, unsigned long  int anonymous_var_nameX459, unsigned long  int anonymous_var_nameX460);
void GC_free(void* anonymous_var_nameX461);
void GC_change_stubborn(const void* anonymous_var_nameX462);
void GC_end_stubborn_change(const void* anonymous_var_nameX463);
void* GC_base(void* anonymous_var_nameX464);
int GC_is_heap_ptr(const void* anonymous_var_nameX465);
unsigned long  int GC_size(const void* anonymous_var_nameX466);
void* GC_realloc(void* anonymous_var_nameX467, unsigned long  int anonymous_var_nameX468);
int GC_expand_hp(unsigned long  int anonymous_var_nameX469);
void GC_set_max_heap_size(unsigned long  int anonymous_var_nameX470);
void GC_exclude_static_roots(void* anonymous_var_nameX471, void* anonymous_var_nameX472);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX473, void* anonymous_var_nameX474);
void GC_remove_roots(void* anonymous_var_nameX475, void* anonymous_var_nameX476);
void GC_register_displacement(unsigned long  int anonymous_var_nameX477);
void GC_debug_register_displacement(unsigned long  int anonymous_var_nameX478);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX479)());
void GC_set_stop_func(int (*anonymous_var_nameX480)());
int (*GC_get_stop_func())();
unsigned long  int GC_get_heap_size();
unsigned long  int GC_get_free_bytes();
unsigned long  int GC_get_unmapped_bytes();
unsigned long  int GC_get_bytes_since_gc();
unsigned long  int GC_get_expl_freed_bytes_since_gc();
unsigned long  int GC_get_total_bytes();
unsigned long  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long  int* anonymous_var_nameX481, unsigned long  int* anonymous_var_nameX482, unsigned long  int* anonymous_var_nameX483, unsigned long  int* anonymous_var_nameX484, unsigned long  int* anonymous_var_nameX485);
unsigned long  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX486, unsigned long  int anonymous_var_nameX487);
unsigned long  int GC_get_size_map_at(int i);
unsigned long  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX488);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX489);
void* GC_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX490);
void* GC_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX491);
void* GC_debug_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX492, const char* s, int i);
void* GC_debug_malloc(unsigned long  int anonymous_var_nameX493, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long  int anonymous_var_nameX494, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX495, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX496, unsigned long  int anonymous_var_nameX497, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long  int anonymous_var_nameX498, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long  int anonymous_var_nameX499, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX500, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX501, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX502);
void* GC_debug_realloc(void* anonymous_var_nameX503, unsigned long  int anonymous_var_nameX504, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX505);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX506);
void* GC_debug_malloc_replacement(unsigned long  int anonymous_var_nameX507);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX508, unsigned long  int anonymous_var_nameX509);
void GC_register_finalizer(void* anonymous_var_nameX512, void (*anonymous_var_nameX513)(void*,void*), void* anonymous_var_nameX514, void (*anonymous_var_nameX515)(void*,void*), void** anonymous_var_nameX516);
void GC_debug_register_finalizer(void* anonymous_var_nameX517, void (*anonymous_var_nameX518)(void*,void*), void* anonymous_var_nameX519, void (*anonymous_var_nameX520)(void*,void*), void** anonymous_var_nameX521);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX522, void (*anonymous_var_nameX523)(void*,void*), void* anonymous_var_nameX524, void (*anonymous_var_nameX525)(void*,void*), void** anonymous_var_nameX526);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX527, void (*anonymous_var_nameX528)(void*,void*), void* anonymous_var_nameX529, void (*anonymous_var_nameX530)(void*,void*), void** anonymous_var_nameX531);
void GC_register_finalizer_no_order(void* anonymous_var_nameX532, void (*anonymous_var_nameX533)(void*,void*), void* anonymous_var_nameX534, void (*anonymous_var_nameX535)(void*,void*), void** anonymous_var_nameX536);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX537, void (*anonymous_var_nameX538)(void*,void*), void* anonymous_var_nameX539, void (*anonymous_var_nameX540)(void*,void*), void** anonymous_var_nameX541);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX542, void (*anonymous_var_nameX543)(void*,void*), void* anonymous_var_nameX544, void (*anonymous_var_nameX545)(void*,void*), void** anonymous_var_nameX546);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX547, void (*anonymous_var_nameX548)(void*,void*), void* anonymous_var_nameX549, void (*anonymous_var_nameX550)(void*,void*), void** anonymous_var_nameX551);
int GC_register_disappearing_link(void** anonymous_var_nameX552);
int GC_general_register_disappearing_link(void** anonymous_var_nameX553, const void* anonymous_var_nameX554);
int GC_move_disappearing_link(void** anonymous_var_nameX555, void** anonymous_var_nameX556);
int GC_unregister_disappearing_link(void** anonymous_var_nameX557);
int GC_register_long_link(void** anonymous_var_nameX558, const void* anonymous_var_nameX559);
int GC_move_long_link(void** anonymous_var_nameX560, void** anonymous_var_nameX561);
int GC_unregister_long_link(void** anonymous_var_nameX562);
void GC_set_toggleref_func(enum anonymous_typeY23 (*anonymous_var_nameX564)(void*));
enum anonymous_typeY23 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX565, int anonymous_var_nameX566);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX568)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long  int anonymous_var_nameX569);
void GC_set_warn_proc(void (*anonymous_var_nameX572)(char*,unsigned long  int));
void (*GC_get_warn_proc())(char*,unsigned long  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX573, unsigned long  int anonymous_var_nameX574);
void GC_set_log_fd(int anonymous_var_nameX575);
void GC_set_abort_func(void (*anonymous_var_nameX577)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX579)(void*), void* anonymous_var_nameX580);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX583)(struct GC_stack_base*,void*), void* anonymous_var_nameX584);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX585)(void*), void* anonymous_var_nameX586);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX587)(void*), void* anonymous_var_nameX588);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX589);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX590);
void GC_set_stackbottom(void* anonymous_var_nameX591, const struct GC_stack_base* anonymous_var_nameX592);
void* GC_same_obj(void* anonymous_var_nameX593, void* anonymous_var_nameX594);
void* GC_pre_incr(void** anonymous_var_nameX595, long  int anonymous_var_nameX596);
void* GC_post_incr(void** anonymous_var_nameX597, long  int anonymous_var_nameX598);
void* GC_is_visible(void* anonymous_var_nameX599);
void* GC_is_valid_displacement(void* anonymous_var_nameX600);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX601);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX602, const void* anonymous_var_nameX603);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX604, const void* anonymous_var_nameX605);
void* GC_malloc_many(unsigned long  int anonymous_var_nameX626);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX630)(const char*,void*,unsigned long  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX631);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void come_regex_finalizer(void* obj, void* client_data);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
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
char* charp_printable(char* str);
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
struct buffer* result_0;
struct buffer* __result2__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2399, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = gComeFunResultObject = __result_obj__ = result_0;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result3__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2406, "buffer"));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result3__ = gComeFunResultObject = __result_obj__ = result_1;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2415, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2422, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2429, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result7__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2436, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result8__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2443, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result8__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2743, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2748, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result11__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result13__;
    __result13__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2753, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result13__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result15__;
    __result15__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2758, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result15__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result17__;
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2763, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result18__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2796, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "comelang.h", 2798, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result18__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result20__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2803, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "comelang.h", 2805, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result21__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2810, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "comelang.h", 2812, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result22__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2817, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "comelang.h", 2819, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result23__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2824, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "comelang.h", 2826, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result23__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result25__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2831, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "comelang.h", 2833, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result25__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result27__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "comelang.h", 2838, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "comelang.h", 2840, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result27__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result30__;
    __result30__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "comelang.h", 2845, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "comelang.h", 2850, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "comelang.h", 2855, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "comelang.h", 2860, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "comelang.h", 2865, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "comelang.h", 2870, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "comelang.h", 2875, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "comelang.h", 2880, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "comelang.h", 2885, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "comelang.h", 2890, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "comelang.h", 2895, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "comelang.h", 2900, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "comelang.h", 2905, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "comelang.h", 2910, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_43;
int i_44;
    result_43=(_Bool)0;
    for(    i_44=0;    i_44<len;    i_44++    ){
        if(        strncmp(self[i_44],str,strlen(self[i_44]))==0) {
            result_43=(_Bool)1;
            break;
        }
    }
    return result_43;
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
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = string_printable(str);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = wchar_tp_substring(str,head,tail);
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
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = charp_scan_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = charp_split_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = charp_strip(self);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = charp_to_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
char* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = wchar_tp_to_string(wstr);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_length(int* str){
    return wchar_tp_length(str);
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = wchar_tp_delete(str,head,tail);
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
int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = wchar_tp_reverse(str);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
int* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = wchar_tp_printable(str);
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
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = charp_replace(self,index,c);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = charp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = charp_sub(self,reg,replace);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = charp_sub_count(self,reg,replace,count);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = charp_split_str(self,str);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = charp_scan(self,reg);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = charp_split(self,reg);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
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
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = charp_sub_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = string_chomp(str);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

// body function
















static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result9__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result9__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    self->memory=value;
    self->p=(short*)value->buf;
    __result12__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result12__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result14__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result14__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result16__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result16__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result19__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result19__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result19__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result24__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result24__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result24__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result26__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result26__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result26__;
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
    gComeFunResultObject = (void*)0;
    return __result29__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_16;
struct list_item$1char* litem_17;
struct list_item$1char* litem_18;
struct list$1char* __result28__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 219, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 229, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "comelang.h", 239, "list_item$1char");
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


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1charp* __result32__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1charp_push_back(self,values[i_19]);
    }
    __result32__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result32__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_20;
struct list_item$1charp* litem_21;
struct list_item$1charp* litem_22;
struct list$1charp* __result31__;
    if(    self->len==0) {
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 219, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 229, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "comelang.h", 239, "list_item$1charp");
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1short* __result35__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1short_push_back(self,values[i_23]);
    }
    __result35__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result35__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_24;
struct list_item$1short* litem_25;
struct list_item$1short* litem_26;
struct list$1short* __result34__;
    if(    self->len==0) {
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 219, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 229, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "comelang.h", 239, "list_item$1short");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1int* __result38__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1int_push_back(self,values[i_27]);
    }
    __result38__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result38__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_28;
struct list_item$1int* litem_29;
struct list_item$1int* litem_30;
struct list$1int* __result37__;
    if(    self->len==0) {
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 219, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 229, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "comelang.h", 239, "list_item$1int");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1long* __result41__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1long_push_back(self,values[i_31]);
    }
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result41__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_32;
struct list_item$1long* litem_33;
struct list_item$1long* litem_34;
struct list$1long* __result40__;
    if(    self->len==0) {
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 219, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 229, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "comelang.h", 239, "list_item$1long");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result44__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result44__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result44__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_36;
struct list_item$1float* litem_37;
struct list_item$1float* litem_38;
struct list$1float* __result43__;
    if(    self->len==0) {
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 219, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 229, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "comelang.h", 239, "list_item$1float");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1double* __result47__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1double_push_back(self,values[i_39]);
    }
    __result47__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result47__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_40;
struct list_item$1double* litem_41;
struct list_item$1double* litem_42;
struct list$1double* __result46__;
    if(    self->len==0) {
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 219, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 229, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "comelang.h", 239, "list_item$1double");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "comelang.h", 1013, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result49__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result49__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "comelang.h", 1013, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result51__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "comelang.h", 1013, "short");
    memcpy(self->items,values,sizeof(short)*self->len);
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result53__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "comelang.h", 1013, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result55__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "comelang.h", 1013, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result57__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "comelang.h", 1013, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result59__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "comelang.h", 1013, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result61__;
}




















































void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_45;
    reg_45=obj;
    if(    reg_45&&reg_45->re) {
        free(reg_45->re);
    }
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_46;
int erro_ofs_47;
int options_48;
struct come_regex* __null_value1;
struct tuple2$2come_regexphcharph* __result94__;
struct tuple2$2come_regexphcharph* __result96__;
err_46 = (void*)0;
memset(&erro_ofs_47, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_48=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_48;
    self->re=pcre_compile(str,options_48,&err_46,&erro_ofs_47,((void*)0));
    if(    self->re==((void*)0)) {
        __result94__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 46, "struct tuple2$2come_regexphcharph"),__null_value1,xsprintf("regex error \%s",charp_to_string(str)));
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result96__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 53, "struct tuple2$2come_regexphvoidp"),self,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* __result93__;
    self->v1=v1;
    self->v2=v2;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphvoidp* __result95__;
    self->v1=v1;
    self->v2=v2;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_49=0;
char* Err_50=0;
struct come_regex* __null_value2;
struct tuple2$2come_regexphcharph* __result97__;
struct tuple2$2come_regexphcharph* __result98__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b1_49=multiple_assign_var1->v1;
    Err_50=multiple_assign_var1->v2;
    if(    Err_50) {
        __result97__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphcharph"),__null_value2,Err_50);
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    __result98__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphvoidp"),come_exception_var_b1_49,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result98__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_51=0;
char* Err_52=0;
struct come_regex* __null_value3;
struct tuple2$2come_regexphcharph* __result99__;
struct tuple2$2come_regexphcharph* __result100__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b2_51=multiple_assign_var2->v1;
    Err_52=multiple_assign_var2->v2;
    if(    Err_52) {
        __result99__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphcharph"),__null_value3,Err_52);
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    __result100__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphvoidp"),come_exception_var_b2_51,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result100__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result101__;
struct come_regex* result_53;
const char* err_54;
int erro_ofs_55;
struct come_regex* __result102__;
err_54 = (void*)0;
memset(&erro_ofs_55, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result101__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    result_53=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_53->str=string_clone(reg->str);
    result_53->ignore_case=reg->ignore_case;
    result_53->multiline=reg->multiline;
    result_53->global=reg->global;
    result_53->extended=reg->extended;
    result_53->dotall=reg->dotall;
    result_53->anchored=reg->anchored;
    result_53->dollar_endonly=reg->dollar_endonly;
    result_53->ungreedy=reg->ungreedy;
    result_53->options=reg->options;
    result_53->re=pcre_compile(result_53->str,result_53->options,&err_54,&erro_ofs_55,((void*)0));
    if(    result_53->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_53->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_53,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result102__ = gComeFunResultObject = __result_obj__ = result_53;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
char* __result103__;
char* __result104__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result103__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = __builtin_string(reg->str);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_56;
int i_57;
char* __result105__;
    result_56=__builtin_string(str);
    for(    i_57=0;    i_57<strlen(str);    i_57++    ){
        if(        str[i_57]>=65&&str[i_57]<=90) {
            result_56[i_57]=str[i_57]-65+97;
        }
    }
    __result105__ = gComeFunResultObject = __result_obj__ = result_56;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_58;
int i_59;
char* __result106__;
    result_58=__builtin_string(str);
    for(    i_59=0;    i_59<strlen(str);    i_59++    ){
        if(        str[i_59]>=97&&str[i_59]<=122) {
            result_58[i_59]=str[i_59]-97+65;
        }
    }
    __result106__ = gComeFunResultObject = __result_obj__ = result_58;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result107__;
int len_60;
int* __result108__;
int* __result109__;
int* __result110__;
int* result_61;
int* __result111__;
    if(    str==((void*)0)) {
        __result107__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    len_60=xwcslen(str);
    if(    head<0) {
        head+=len_60;
    }
    if(    tail<0) {
        tail+=len_60+1;
    }
    if(    head>tail) {
        __result108__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_60) {
        tail=len_60;
    }
    if(    head==tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(    tail-head+1<1) {
        __result110__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    result_61=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 185, "int");
    memcpy(result_61,str+head,sizeof(int)*(tail-head));
    result_61[tail-head]=0;
    __result111__ = gComeFunResultObject = __result_obj__ = result_61;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result112__;
int len_62;
int* wstr_63;
int ret_64;
int* __result113__;
    if(    str==((void*)0)) {
        __result112__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    len_62=strlen(str);
    wstr_63=(int*)come_calloc(1, sizeof(int)*(1*(len_62+1)), "libcomelang-str-gc.c", 200, "int");
    ret_64=mbstowcs(wstr_63,str,len_62+1);
    wstr_63[ret_64]=0;
    if(    ret_64<0) {
        wstr_63[0]=0;
    }
    __result113__ = gComeFunResultObject = __result_obj__ = wstr_63;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_65;
int len_66;
int i_67;
int len2_68;
int j_69;
memset(&j_69, 0, sizeof(int));
    n_65=0;
    len_66=strlen(str);
    for(    i_67=0;    i_67<len_66;    i_67++    ){
        len2_68=strlen(search_str);
        for(        j_69=0;        j_69<len2_68;        j_69++        ){
            if(            str[i_67+j_69]!=search_str[j_69]) {
                break;
            }
        }
        if(        j_69==len2_68) {
            n_65++;
            if(            n_65==count) {
                return i_67;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_70;
int result_74;
int offset_75;
const char* err_76;
int erro_ofs_77;
int options_78;
char* str_79;
struct real_pcre* re_80;
int n_81;
int options_82;
int len_83;
int regex_result_84;
int i_85;
int i_86;
err_76 = (void*)0;
memset(&erro_ofs_77, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_70=16;
    int start_71[ovec_max_70];
    memset(&start_71, 0, sizeof(int)    *(ovec_max_70)    );
    int end_72[ovec_max_70];
    memset(&end_72, 0, sizeof(int)    *(ovec_max_70)    );
    int ovec_value_73[ovec_max_70*3];
    memset(&ovec_value_73, 0, sizeof(int)    *(ovec_max_70*3)    );
    result_74=default_value;
    offset_75=0;
    options_78=reg->options;
    str_79=reg->str;
    re_80=reg->re;
    n_81=0;
    while((_Bool)1) {
        options_82=2097152;
        len_83=strlen(self);
        regex_result_84=pcre_exec(re_80,(struct pcre_extra*)0,self,len_83,offset_75,options_82,ovec_value_73,ovec_max_70*3);
        for(        i_85=0;        i_85<ovec_max_70;        i_85++        ){
            start_71[i_85]=ovec_value_73[i_85*2];
        }
        for(        i_86=0;        i_86<ovec_max_70;        i_86++        ){
            end_72[i_86]=ovec_value_73[i_86*2+1];
        }
        if(        regex_result_84>0) {
            n_81++;
            if(            offset_75==end_72[0]) {
                offset_75++;
            }
            else {
                offset_75=end_72[0];
            }
            if(            n_81==count) {
                result_74=start_71[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_74;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_87;
char* p_88;
    len_87=strlen(search_str);
    p_88=str+strlen(str)-len_87;
    while(p_88>=str) {
        if(        strncmp(p_88,search_str,len_87)==0) {
            return p_88-str;
        }
        p_88--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_89;
int erro_ofs_90;
int options_91;
char* str_92;
struct real_pcre* re_93;
char* self2_94;
int ovec_max_95;
int result_99;
int offset_100;
int options_101;
int len_102;
int regex_result_103;
int i_104;
int i_105;
err_89 = (void*)0;
memset(&erro_ofs_90, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_91=reg->options;
    str_92=reg->str;
    re_93=reg->re;
    self2_94=charp_reverse(self);
    ovec_max_95=16;
    int start_96[ovec_max_95];
    memset(&start_96, 0, sizeof(int)    *(ovec_max_95)    );
    int end_97[ovec_max_95];
    memset(&end_97, 0, sizeof(int)    *(ovec_max_95)    );
    int ovec_value_98[ovec_max_95*3];
    memset(&ovec_value_98, 0, sizeof(int)    *(ovec_max_95*3)    );
    result_99=default_value;
    offset_100=0;
    while((_Bool)1) {
        options_101=2097152;
        len_102=strlen(self2_94);
        regex_result_103=pcre_exec(re_93,(struct pcre_extra*)0,self2_94,len_102,offset_100,options_101,ovec_value_98,ovec_max_95*3);
        for(        i_104=0;        i_104<ovec_max_95;        i_104++        ){
            start_96[i_104]=ovec_value_98[i_104*2];
        }
        for(        i_105=0;        i_105<ovec_max_95;        i_105++        ){
            end_97[i_105]=ovec_value_98[i_105*2+1];
        }
        if(        regex_result_103==1||regex_result_103>0) {
            result_99=strlen(self)-1-start_96[0];
            break;
        }
        {
            break;
        }
    }
    return result_99;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_106;
char* p_107;
int n_108;
    len_106=strlen(search_str);
    p_107=str+strlen(str)-len_106;
    n_108=0;
    while(p_107>=str) {
        if(        strncmp(p_107,search_str,len_106)==0) {
            n_108++;
            if(            n_108==count) {
                return p_107-str;
            }
        }
        p_107--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result115__;
struct list$1charph* result_109;
int offset_110;
int ovec_max_111;
const char* err_115;
int erro_ofs_116;
int options_117;
char* str_118;
struct real_pcre* re_119;
int options_120;
int len_121;
int regex_result_122;
int i_123;
int i_124;
char* str_125;
struct list$1charph* group_strings_126;
char* str2_127;
char* str_131;
struct list$1charph* group_strings_132;
int i_133;
char* match_string_134;
char* str2_135;
struct list$1charph* __result117__;
err_115 = (void*)0;
memset(&erro_ofs_116, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 395, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    result_109=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 398, "list$1charph"));
    offset_110=0;
    ovec_max_111=16;
    int start_112[ovec_max_111];
    memset(&start_112, 0, sizeof(int)    *(ovec_max_111)    );
    int end_113[ovec_max_111];
    memset(&end_113, 0, sizeof(int)    *(ovec_max_111)    );
    int ovec_value_114[ovec_max_111*3];
    memset(&ovec_value_114, 0, sizeof(int)    *(ovec_max_111*3)    );
    options_117=reg->options;
    str_118=reg->str;
    re_119=reg->re;
    while((_Bool)1) {
        options_120=2097152;
        len_121=strlen(self);
        regex_result_122=pcre_exec(re_119,(struct pcre_extra*)0,self,len_121,offset_110,options_120,ovec_value_114,ovec_max_111*3);
        for(        i_123=0;        i_123<ovec_max_111;        i_123++        ){
            start_112[i_123]=ovec_value_114[i_123*2];
        }
        for(        i_124=0;        i_124<ovec_max_111;        i_124++        ){
            end_113[i_124]=ovec_value_114[i_124*2+1];
        }
        if(        regex_result_122==1) {
            str_125=charp_substring(self,start_112[0],end_113[0]);
            group_strings_126=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 432, "list$1charph"));
            str2_127=block(parent,str_125,group_strings_126);
            list$1charph_push_back(result_109,str2_127);
            if(            offset_110==end_113[0]) {
                offset_110++;
            }
            else {
                offset_110=end_113[0];
            }
        }
        else if(        regex_result_122>1) {
            str_131=charp_substring(self,start_112[0],end_113[0]);
            group_strings_132=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 449, "list$1charph"));
            for(            i_133=1;            i_133<regex_result_122;            i_133++            ){
                match_string_134=charp_substring(self,start_112[i_133],end_113[i_133]);
                list$1charph_push_back(group_strings_132,match_string_134);
            }
            str2_135=block(parent,str_131,group_strings_132);
            list$1charph_push_back(result_109,str2_135);
            if(            offset_110==end_113[0]) {
                offset_110++;
            }
            else {
                offset_110=end_113[0];
            }
        }
        else {
            break;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result114__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_128;
struct list_item$1charph* litem_129;
struct list_item$1charph* litem_130;
struct list$1charph* __result116__;
    if(    self->len==0) {
        litem_128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 219, "list_item$1charph");
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 229, "list_item$1charph");
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "comelang.h", 239, "list_item$1charph");
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result118__;
struct list$1charph* result_136;
int offset_137;
int ovec_max_138;
const char* err_142;
int erro_ofs_143;
int options_144;
char* str_145;
struct real_pcre* re_146;
int n_147;
int options_148;
int len_149;
int regex_result_150;
int i_151;
int i_152;
char* str_153;
struct list$1charph* group_strings_154;
char* str2_155;
char* str_156;
struct list$1charph* group_strings_157;
int i_158;
char* match_string_159;
char* str2_160;
struct list$1charph* __result119__;
err_142 = (void*)0;
memset(&erro_ofs_143, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 480, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    result_136=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 483, "list$1charph"));
    offset_137=0;
    ovec_max_138=16;
    int start_139[ovec_max_138];
    memset(&start_139, 0, sizeof(int)    *(ovec_max_138)    );
    int end_140[ovec_max_138];
    memset(&end_140, 0, sizeof(int)    *(ovec_max_138)    );
    int ovec_value_141[ovec_max_138*3];
    memset(&ovec_value_141, 0, sizeof(int)    *(ovec_max_138*3)    );
    options_144=reg->options;
    str_145=reg->str;
    re_146=reg->re;
    n_147=0;
    while((_Bool)1) {
        options_148=2097152;
        len_149=strlen(self);
        regex_result_150=pcre_exec(re_146,(struct pcre_extra*)0,self,len_149,offset_137,options_148,ovec_value_141,ovec_max_138*3);
        for(        i_151=0;        i_151<ovec_max_138;        i_151++        ){
            start_139[i_151]=ovec_value_141[i_151*2];
        }
        for(        i_152=0;        i_152<ovec_max_138;        i_152++        ){
            end_140[i_152]=ovec_value_141[i_152*2+1];
        }
        if(        regex_result_150==1) {
            str_153=charp_substring(self,start_139[0],end_140[0]);
            group_strings_154=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 519, "list$1charph"));
            str2_155=block(parent,str_153,group_strings_154);
            list$1charph_push_back(result_136,str2_155);
            if(            offset_137==end_140[0]) {
                offset_137++;
            }
            else {
                offset_137=end_140[0];
            }
            n_147++;
            if(            n_147==count) {
                break;
            }
        }
        else if(        regex_result_150>1) {
            str_156=charp_substring(self,start_139[0],end_140[0]);
            group_strings_157=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 541, "list$1charph"));
            for(            i_158=1;            i_158<regex_result_150;            i_158++            ){
                match_string_159=charp_substring(self,start_139[i_158],end_140[i_158]);
                list$1charph_push_back(group_strings_157,match_string_159);
            }
            str2_160=block(parent,str_156,group_strings_157);
            list$1charph_push_back(result_136,str2_160);
            if(            offset_137==end_140[0]) {
                offset_137++;
            }
            else {
                offset_137=end_140[0];
            }
            n_147++;
            if(            n_147==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_136;
    gComeFunResultObject = (void*)0;
    return __result119__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result120__;
const char* err_161;
int erro_ofs_162;
int options_163;
char* str_164;
struct real_pcre* re_165;
struct list$1charph* result_166;
int offset_167;
int ovec_max_168;
int options_172;
int len_173;
int regex_result_174;
int i_175;
int i_176;
char* str_177;
struct list$1charph* match_strings_178;
char* str2_179;
char* str_180;
struct list$1charph* match_strings_181;
int i_182;
char* match_str_183;
char* str2_184;
char* str_185;
struct list$1charph* match_strings_186;
char* str2_187;
struct list$1charph* __result121__;
err_161 = (void*)0;
memset(&erro_ofs_162, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result120__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 576, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    options_163=reg->options;
    str_164=reg->str;
    re_165=reg->re;
    result_166=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 586, "list$1charph"));
    offset_167=0;
    ovec_max_168=16;
    int start_169[ovec_max_168];
    memset(&start_169, 0, sizeof(int)    *(ovec_max_168)    );
    int end_170[ovec_max_168];
    memset(&end_170, 0, sizeof(int)    *(ovec_max_168)    );
    int ovec_value_171[ovec_max_168*3];
    memset(&ovec_value_171, 0, sizeof(int)    *(ovec_max_168*3)    );
    while((_Bool)1) {
        options_172=2097152;
        len_173=strlen(self);
        regex_result_174=pcre_exec(re_165,(struct pcre_extra*)0,self,len_173,offset_167,options_172,ovec_value_171,ovec_max_168*3);
        for(        i_175=0;        i_175<ovec_max_168;        i_175++        ){
            start_169[i_175]=ovec_value_171[i_175*2];
        }
        for(        i_176=0;        i_176<ovec_max_168;        i_176++        ){
            end_170[i_176]=ovec_value_171[i_176*2+1];
        }
        if(        regex_result_174==1) {
            str_177=charp_substring(self,offset_167,start_169[0]);
            match_strings_178=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            str2_179=block(parent,str_177,match_strings_178);
            list$1charph_push_back(result_166,str2_179);
            if(            offset_167==end_170[0]) {
                offset_167++;
            }
            else {
                offset_167=end_170[0];
            }
        }
        else if(        regex_result_174>1) {
            str_180=charp_substring(self,offset_167,start_169[0]);
            if(            offset_167==end_170[0]) {
                offset_167++;
            }
            else {
                offset_167=end_170[0];
            }
            match_strings_181=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 636, "list$1charph"));
            for(            i_182=1;            i_182<regex_result_174;            i_182++            ){
                match_str_183=charp_substring(self,start_169[i_182],end_170[i_182]);
                list$1charph_push_back(match_strings_181,match_str_183);
            }
            str2_184=block(parent,str_180,match_strings_181);
            list$1charph_push_back(result_166,str2_184);
        }
        else {
            break;
        }
    }
    if(    offset_167<charp_length(self)) {
        str_185=charp_substring(self,offset_167,-1);
        match_strings_186=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 655, "list$1charph"));
        str2_187=block(parent,str_185,match_strings_186);
        list$1charph_push_back(result_166,str2_187);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = result_166;
    gComeFunResultObject = (void*)0;
    return __result121__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result122__;
const char* err_188;
int erro_ofs_189;
int options_190;
char* str_191;
struct real_pcre* re_192;
struct list$1charph* result_193;
int offset_194;
int ovec_max_195;
int n_199;
int options_200;
int len_201;
int regex_result_202;
int i_203;
int i_204;
char* str_205;
struct list$1charph* match_strings_206;
char* str2_207;
char* str_208;
struct list$1charph* match_strings_209;
int i_210;
char* match_str_211;
char* str2_212;
struct list$1charph* __result123__;
err_188 = (void*)0;
memset(&erro_ofs_189, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result122__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 666, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    options_190=reg->options;
    str_191=reg->str;
    re_192=reg->re;
    result_193=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 676, "list$1charph"));
    offset_194=0;
    ovec_max_195=16;
    int start_196[ovec_max_195];
    memset(&start_196, 0, sizeof(int)    *(ovec_max_195)    );
    int end_197[ovec_max_195];
    memset(&end_197, 0, sizeof(int)    *(ovec_max_195)    );
    int ovec_value_198[ovec_max_195*3];
    memset(&ovec_value_198, 0, sizeof(int)    *(ovec_max_195*3)    );
    n_199=0;
    while((_Bool)1) {
        options_200=2097152;
        len_201=strlen(self);
        regex_result_202=pcre_exec(re_192,(struct pcre_extra*)0,self,len_201,offset_194,options_200,ovec_value_198,ovec_max_195*3);
        for(        i_203=0;        i_203<ovec_max_195;        i_203++        ){
            start_196[i_203]=ovec_value_198[i_203*2];
        }
        for(        i_204=0;        i_204<ovec_max_195;        i_204++        ){
            end_197[i_204]=ovec_value_198[i_204*2+1];
        }
        if(        regex_result_202==1) {
            str_205=charp_substring(self,offset_194,start_196[0]);
            match_strings_206=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 705, "list$1charph"));
            str2_207=block(parent,str_205,match_strings_206);
            list$1charph_push_back(result_193,str2_207);
            if(            offset_194==end_197[0]) {
                offset_194++;
            }
            else {
                offset_194=end_197[0];
            }
        }
        else if(        regex_result_202>1) {
            str_208=charp_substring(self,offset_194,start_196[0]);
            if(            offset_194==end_197[0]) {
                offset_194++;
            }
            else {
                offset_194=end_197[0];
            }
            match_strings_209=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 728, "list$1charph"));
            for(            i_210=1;            i_210<regex_result_202;            i_210++            ){
                match_str_211=charp_substring(self,start_196[i_210],end_197[i_210]);
                list$1charph_push_back(match_strings_209,match_str_211);
            }
            str2_212=block(parent,str_208,match_strings_209);
            list$1charph_push_back(result_193,str2_212);
        }
        else {
            break;
        }
        n_199++;
        if(        n_199==count) {
            break;
        }
    }
    __result123__ = gComeFunResultObject = __result_obj__ = result_193;
    gComeFunResultObject = (void*)0;
    return __result123__;
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
struct list$1charph* __result124__;
struct list$1charph* result_213;
int offset_214;
int ovec_max_215;
const char* err_219;
int erro_ofs_220;
int options_221;
char* str_222;
struct real_pcre* re_223;
int options_224;
int len_225;
int regex_result_226;
int i_227;
int i_228;
char* str_229;
char* str_230;
int i_231;
char* match_string_232;
struct list$1charph* __result125__;
err_219 = (void*)0;
memset(&erro_ofs_220, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result124__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 796, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    result_213=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 799, "list$1charph"));
    offset_214=0;
    ovec_max_215=16;
    int start_216[ovec_max_215];
    memset(&start_216, 0, sizeof(int)    *(ovec_max_215)    );
    int end_217[ovec_max_215];
    memset(&end_217, 0, sizeof(int)    *(ovec_max_215)    );
    int ovec_value_218[ovec_max_215*3];
    memset(&ovec_value_218, 0, sizeof(int)    *(ovec_max_215*3)    );
    options_221=reg->options;
    str_222=reg->str;
    re_223=reg->re;
    while((_Bool)1) {
        options_224=2097152;
        len_225=strlen(self);
        regex_result_226=pcre_exec(re_223,(struct pcre_extra*)0,self,len_225,offset_214,options_224,ovec_value_218,ovec_max_215*3);
        for(        i_227=0;        i_227<ovec_max_215;        i_227++        ){
            start_216[i_227]=ovec_value_218[i_227*2];
        }
        for(        i_228=0;        i_228<ovec_max_215;        i_228++        ){
            end_217[i_228]=ovec_value_218[i_228*2+1];
        }
        if(        regex_result_226==1) {
            str_229=charp_substring(self,start_216[0],end_217[0]);
            list$1charph_push_back(result_213,str_229);
            if(            offset_214==end_217[0]) {
                offset_214++;
            }
            else {
                offset_214=end_217[0];
            }
        }
        else if(        regex_result_226>1) {
            str_230=charp_substring(self,start_216[0],end_217[0]);
            list$1charph_push_back(result_213,str_230);
            if(            offset_214==end_217[0]) {
                offset_214++;
            }
            else {
                offset_214=end_217[0];
            }
            *num_group_string_in_regex=regex_result_226-1;
            for(            i_231=1;            i_231<regex_result_226;            i_231++            ){
                match_string_232=charp_substring(self,start_216[i_231],end_217[i_231]);
                list$1charph_push_back(group_strings,match_string_232);
            }
        }
        else {
            break;
        }
    }
    __result125__ = gComeFunResultObject = __result_obj__ = result_213;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_233;
int len_234;
char* __result126__;
    result_233=__builtin_string(self);
    len_234=strlen(self);
    if(    self[len_234-1]==10) {
        result_233[len_234-1]=0;
    }
    else if(    self[len_234-1]==13) {
        result_233[len_234-1]=0;
    }
    else if(    len_234>2&&self[len_234-2]==13&&self[len_234-1]==10) {
        result_233[len_234-2]=0;
    }
    __result126__ = gComeFunResultObject = __result_obj__ = result_233;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_235;
char* result_236;
int n_237;
int i_238;
char c_239;
char* __result127__;
    len_235=charp_length(str);
    result_236=(char*)come_calloc(1, sizeof(char)*(1*(len_235*2+1)), "libcomelang-str-gc.c", 893, "char");
    n_237=0;
    for(    i_238=0;    i_238<len_235;    i_238++    ){
        c_239=str[i_238];
        if(        (c_239>=0&&c_239<32)||c_239==127) {
            result_236[n_237++]=94;
            result_236[n_237++]=c_239+65-1;
        }
        else {
            result_236[n_237++]=c_239;
        }
    }
    result_236[n_237]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = result_236;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_240;
char* result_241;
char* __result128__;
    len_240=16*(xwcslen(wstr)+1);
    result_241=(char*)come_calloc(1, sizeof(char)*(1*(len_240)), "libcomelang-str-gc.c", 919, "char");
    if(    wcstombs(result_241,wstr,len_240)<0) {
        strncpy(result_241,"",len_240);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = result_241;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result129__;
    __result129__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int wchar_tp_length(int* str){
    return xwcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_242;
int* __result130__;
int* __result131__;
int* sub_str_243;
int* __result132__;
    len_242=xwcslen(str);
    if(    len_242==0) {
        __result130__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    head<0) {
        head+=len_242;
    }
    if(    tail<0) {
        tail+=len_242+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result131__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    if(    tail>=len_242) {
        tail=len_242;
    }
    sub_str_243=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_243,sizeof(int)*(wstring_length(sub_str_243)+1));
    __result132__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result132__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_244;
    head_244=wcsstr(str,search_str);
    if(    head_244==((void*)0)) {
        return default_value;
    }
    return head_244-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_245;
int* p_246;
int len2_247;
_Bool result_248;
int i_249;
memset(&i_249, 0, sizeof(int));
    len_245=xwcslen(search_str);
    p_246=str+xwcslen(str)-len_245;
    while(p_246>=str) {
        len2_247=xwcslen(p_246);
        result_248=(_Bool)1;
        for(        i_249=0;        i_249<len_245&&i_249<len2_247;        i_249++        ){
            if(            p_246[i_249]!=search_str[i_249]) {
                result_248=(_Bool)0;
            }
        }
        if(        result_248) {
            return (p_246-str);
        }
        p_246--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_250;
int* result_251;
int i_252;
int* __result133__;
    len_250=xwcslen(str);
    result_251=(int*)come_calloc(1, sizeof(int)*(1*(len_250+1)), "libcomelang-str-gc.c", 1019, "int");
    for(    i_252=0;    i_252<len_250;    i_252++    ){
        result_251[i_252]=str[len_250-i_252-1];
    }
    result_251[len_250]=0;
    __result133__ = gComeFunResultObject = __result_obj__ = result_251;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_253;
int* result_254;
int i_255;
int* __result134__;
    len_253=xwcslen(str)*n+1;
    result_254=(int*)come_calloc(1, sizeof(int)*(1*(len_253)), "libcomelang-str-gc.c", 1034, "int");
    result_254[0]=0;
    for(    i_255=0;    i_255<n;    i_255++    ){
        wcscat(result_254,str);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_254;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_256;
int* result_257;
int n_258;
int i_259;
int c_260;
int* __result135__;
    len_256=wchar_tp_length(str);
    result_257=(int*)come_calloc(1, sizeof(int)*(1*(len_256*2+1)), "libcomelang-str-gc.c", 1048, "int");
    n_258=0;
    for(    i_259=0;    i_259<len_256;    i_259++    ){
        c_260=str[i_259];
        if(        (c_260>=0&&c_260<32)||c_260==127) {
            result_257[n_258++]=94;
            result_257[n_258++]=c_260+65-1;
        }
        else {
            result_257[n_258++]=c_260;
        }
    }
    result_257[n_258]=0;
    __result135__ = gComeFunResultObject = __result_obj__ = result_257;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_261;
int ovec_max_262;
const char* err_266;
int erro_ofs_267;
int options_268;
char* str_269;
struct real_pcre* re_270;
int n_271;
int options_272;
int len_273;
int regex_result_274;
int i_275;
int i_276;
int i_279;
char* match_string_280;
err_266 = (void*)0;
memset(&erro_ofs_267, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_261=0;
    ovec_max_262=16;
    int start_263[ovec_max_262];
    memset(&start_263, 0, sizeof(int)    *(ovec_max_262)    );
    int end_264[ovec_max_262];
    memset(&end_264, 0, sizeof(int)    *(ovec_max_262)    );
    int ovec_value_265[ovec_max_262*3];
    memset(&ovec_value_265, 0, sizeof(int)    *(ovec_max_262*3)    );
    options_268=reg->options;
    str_269=reg->str;
    re_270=reg->re;
    n_271=0;
    while((_Bool)1) {
        options_272=2097152;
        len_273=strlen(self);
        regex_result_274=pcre_exec(re_270,(struct pcre_extra*)0,self,len_273,offset_261,options_272,ovec_value_265,ovec_max_262*3);
        for(        i_275=0;        i_275<ovec_max_262;        i_275++        ){
            start_263[i_275]=ovec_value_265[i_275*2];
        }
        for(        i_276=0;        i_276<ovec_max_262;        i_276++        ){
            end_264[i_276]=ovec_value_265[i_276*2+1];
        }
        if(        regex_result_274==1||(group_strings==((void*)0)&&regex_result_274>0)) {
            n_271++;
            if(            n_271==count) {
                return (_Bool)1;
            }
            if(            offset_261==end_264[0]) {
                offset_261++;
            }
            else {
                offset_261=end_264[0];
            }
        }
        else if(        regex_result_274>1) {
            n_271++;
            list$1charph_reset(group_strings);
            for(            i_279=1;            i_279<regex_result_274;            i_279++            ){
                match_string_280=charp_substring(self,start_263[i_279],end_264[i_279]);
                list$1charph_push_back(group_strings,match_string_280);
            }
            if(            n_271==count) {
                return (_Bool)1;
            }
            if(            offset_261==end_264[0]) {
                offset_261++;
            }
            else {
                offset_261=end_264[0];
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
struct list_item$1charph* it_277;
struct list_item$1charph* prev_it_278;
struct list$1charph* __result136__;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
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
int* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
int* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
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
int* result_281;
int* __result139__;
    result_281=(int*)come_calloc(1, sizeof(int)*(1*(xwcslen(left)+xwcslen(right)+1)), "libcomelang-str-gc.c", 1219, "int");
    wcscpy(result_281,left);
    wcscat(result_281,right);
    __result139__ = gComeFunResultObject = __result_obj__ = result_281;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
int* result_282;
int* __result140__;
    result_282=(int*)come_calloc(1, sizeof(int)*(1*(xwcslen(left)+xwcslen(right)+1)), "libcomelang-str-gc.c", 1229, "int");
    wcscpy(result_282,left);
    wcscat(result_282,right);
    __result140__ = gComeFunResultObject = __result_obj__ = result_282;
    gComeFunResultObject = (void*)0;
    return __result140__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_283;
    head_283=strstr(str,search_str);
    if(    head_283==((void*)0)) {
        return default_value;
    }
    return head_283-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_284;
int result_288;
int offset_289;
const char* err_290;
int erro_ofs_291;
int options_292;
char* str_293;
struct real_pcre* re_294;
int options_295;
int len_296;
int regex_result_297;
int i_298;
int i_299;
err_290 = (void*)0;
memset(&erro_ofs_291, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_284=16;
    int start_285[ovec_max_284];
    memset(&start_285, 0, sizeof(int)    *(ovec_max_284)    );
    int end_286[ovec_max_284];
    memset(&end_286, 0, sizeof(int)    *(ovec_max_284)    );
    int ovec_value_287[ovec_max_284*3];
    memset(&ovec_value_287, 0, sizeof(int)    *(ovec_max_284*3)    );
    result_288=default_value;
    offset_289=0;
    options_292=reg->options;
    str_293=reg->str;
    re_294=reg->re;
    while((_Bool)1) {
        options_295=2097152;
        len_296=strlen(self);
        regex_result_297=pcre_exec(re_294,(struct pcre_extra*)0,self,len_296,offset_289,options_295,ovec_value_287,ovec_max_284*3);
        for(        i_298=0;        i_298<ovec_max_284;        i_298++        ){
            start_285[i_298]=ovec_value_287[i_298*2];
        }
        for(        i_299=0;        i_299<ovec_max_284;        i_299++        ){
            end_286[i_299]=ovec_value_287[i_299*2+1];
        }
        if(        regex_result_297==1||regex_result_297>0) {
            result_288=start_285[0];
            break;
        }
        {
            break;
        }
    }
    return result_288;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_300;
char* __result141__;
char* __result142__;
    len_300=strlen(self);
    if(    strcmp(self,"")==0) {
        __result141__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    index<0) {
        index+=len_300;
    }
    if(    index>=len_300) {
        index=len_300-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result142__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_301;
char* result_302;
int i_303;
char* __result143__;
    len_301=strlen(str)*n+1;
    result_302=(char*)come_calloc(1, sizeof(char)*(1*(len_301)), "libcomelang-str-gc.c", 1330, "char");
    result_302[0]=0;
    for(    i_303=0;    i_303<n;    i_303++    ){
        strcat(result_302,str);
    }
    __result143__ = gComeFunResultObject = __result_obj__ = result_302;
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result144__;
int offset_304;
int ovec_max_305;
const char* err_309;
int erro_ofs_310;
int options_311;
char* str_312;
struct real_pcre* re_313;
struct buffer* result_314;
int options_315;
int len_316;
int regex_result_317;
int i_318;
int i_319;
char* str_320;
char* str_321;
char* str_322;
char* __result145__;
err_309 = (void*)0;
memset(&erro_ofs_310, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    offset_304=0;
    ovec_max_305=16;
    int start_306[ovec_max_305];
    memset(&start_306, 0, sizeof(int)    *(ovec_max_305)    );
    int end_307[ovec_max_305];
    memset(&end_307, 0, sizeof(int)    *(ovec_max_305)    );
    int ovec_value_308[ovec_max_305*3];
    memset(&ovec_value_308, 0, sizeof(int)    *(ovec_max_305*3)    );
    options_311=reg->options;
    str_312=reg->str;
    re_313=reg->re;
    result_314=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1361, "buffer"));
    while((_Bool)1) {
        options_315=2097152;
        len_316=strlen(self);
        regex_result_317=pcre_exec(re_313,(struct pcre_extra*)0,self,len_316,offset_304,options_315,ovec_value_308,ovec_max_305*3);
        for(        i_318=0;        i_318<ovec_max_305;        i_318++        ){
            start_306[i_318]=ovec_value_308[i_318*2];
        }
        for(        i_319=0;        i_319<ovec_max_305;        i_319++        ){
            end_307[i_319]=ovec_value_308[i_319*2+1];
        }
        if(        regex_result_317==1) {
            str_320=charp_substring(self,offset_304,start_306[0]);
            buffer_append_str(result_314,str_320);
            buffer_append_str(result_314,replace);
            if(            offset_304==end_307[0]) {
                offset_304++;
            }
            else {
                offset_304=end_307[0];
            }
            if(            !reg->global) {
                str_321=charp_substring(self,offset_304,-1);
                buffer_append_str(result_314,str_321);
                break;
            }
        }
        else {
            str_322=charp_substring(self,offset_304,-1);
            buffer_append_str(result_314,str_322);
            break;
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_314);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result146__;
int offset_323;
int ovec_max_324;
const char* err_328;
int erro_ofs_329;
int options_330;
char* str_331;
struct real_pcre* re_332;
struct buffer* result_333;
int n_334;
int options_335;
int len_336;
int regex_result_337;
int i_338;
int i_339;
char* str_340;
char* str_341;
char* str_342;
char* str_343;
char* __result147__;
err_328 = (void*)0;
memset(&erro_ofs_329, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    offset_323=0;
    ovec_max_324=16;
    int start_325[ovec_max_324];
    memset(&start_325, 0, sizeof(int)    *(ovec_max_324)    );
    int end_326[ovec_max_324];
    memset(&end_326, 0, sizeof(int)    *(ovec_max_324)    );
    int ovec_value_327[ovec_max_324*3];
    memset(&ovec_value_327, 0, sizeof(int)    *(ovec_max_324*3)    );
    options_330=reg->options;
    str_331=reg->str;
    re_332=reg->re;
    result_333=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1427, "buffer"));
    n_334=0;
    while((_Bool)1) {
        options_335=2097152;
        len_336=strlen(self);
        regex_result_337=pcre_exec(re_332,(struct pcre_extra*)0,self,len_336,offset_323,options_335,ovec_value_327,ovec_max_324*3);
        for(        i_338=0;        i_338<ovec_max_324;        i_338++        ){
            start_325[i_338]=ovec_value_327[i_338*2];
        }
        for(        i_339=0;        i_339<ovec_max_324;        i_339++        ){
            end_326[i_339]=ovec_value_327[i_339*2+1];
        }
        if(        regex_result_337==1) {
            n_334++;
            str_340=charp_substring(self,offset_323,start_325[0]);
            buffer_append_str(result_333,str_340);
            buffer_append_str(result_333,replace);
            if(            offset_323==end_326[0]) {
                offset_323++;
            }
            else {
                offset_323=end_326[0];
            }
            if(            !reg->global) {
                str_341=charp_substring(self,offset_323,-1);
                buffer_append_str(result_333,str_341);
                break;
            }
            if(            n_334==count) {
                str_342=charp_substring(self,offset_323,-1);
                buffer_append_str(result_333,str_342);
                break;
            }
        }
        else {
            str_343=charp_substring(self,offset_323,-1);
            buffer_append_str(result_333,str_343);
            break;
        }
    }
    __result147__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_333);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_344;
struct buffer* buf_345;
int i_346;
struct list$1charph* __result148__;
    result_344=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1486, "list$1charph"));
    buf_345=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1488, "buffer"));
    for(    i_346=0;    i_346<charp_length(self);    i_346++    ){
        if(        strstr(self+i_346,str)==self+i_346) {
            list$1charph_push_back(result_344,__builtin_string(buf_345->buf));
            buffer_reset(buf_345);
            i_346+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_345,self[i_346]);
        }
    }
    if(    buffer_length(buf_345)!=0) {
        list$1charph_push_back(result_344,__builtin_string(buf_345->buf));
    }
    __result148__ = gComeFunResultObject = __result_obj__ = result_344;
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
struct list$1charph* result_347;
int offset_348;
int ovec_max_349;
const char* err_353;
int erro_ofs_354;
int options_355;
char* str_356;
struct real_pcre* re_357;
int options_358;
int len_359;
int regex_result_360;
int i_361;
int i_362;
char* str_363;
char* str_364;
int i_365;
char* match_string_366;
struct list$1charph* __result150__;
err_353 = (void*)0;
memset(&erro_ofs_354, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1510, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_347=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1512, "list$1charph"));
    offset_348=0;
    ovec_max_349=16;
    int start_350[ovec_max_349];
    memset(&start_350, 0, sizeof(int)    *(ovec_max_349)    );
    int end_351[ovec_max_349];
    memset(&end_351, 0, sizeof(int)    *(ovec_max_349)    );
    int ovec_value_352[ovec_max_349*3];
    memset(&ovec_value_352, 0, sizeof(int)    *(ovec_max_349*3)    );
    options_355=reg->options;
    str_356=reg->str;
    re_357=reg->re;
    while((_Bool)1) {
        options_358=2097152;
        len_359=strlen(self);
        regex_result_360=pcre_exec(re_357,(struct pcre_extra*)0,self,len_359,offset_348,options_358,ovec_value_352,ovec_max_349*3);
        for(        i_361=0;        i_361<ovec_max_349;        i_361++        ){
            start_350[i_361]=ovec_value_352[i_361*2];
        }
        for(        i_362=0;        i_362<ovec_max_349;        i_362++        ){
            end_351[i_362]=ovec_value_352[i_362*2+1];
        }
        if(        regex_result_360==1) {
            str_363=charp_substring(self,start_350[0],end_351[0]);
            list$1charph_push_back(result_347,str_363);
            if(            offset_348==end_351[0]) {
                offset_348++;
            }
            else {
                offset_348=end_351[0];
            }
        }
        else if(        regex_result_360>1) {
            str_364=charp_substring(self,start_350[0],end_351[0]);
            list$1charph_push_back(result_347,str_364);
            if(            offset_348==end_351[0]) {
                offset_348++;
            }
            else {
                offset_348=end_351[0];
            }
            for(            i_365=1;            i_365<regex_result_360;            i_365++            ){
                match_string_366=charp_substring(self,start_350[i_365],end_351[i_365]);
                list$1charph_push_back(result_347,match_string_366);
            }
        }
        else {
            break;
        }
    }
    __result150__ = gComeFunResultObject = __result_obj__ = result_347;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result151__;
const char* err_367;
int erro_ofs_368;
int options_369;
char* str_370;
struct real_pcre* re_371;
struct list$1charph* result_372;
int offset_373;
int ovec_max_374;
int options_378;
int len_379;
int regex_result_380;
int i_381;
int i_382;
char* str_383;
char* str_384;
int i_385;
char* match_str_386;
char* str_387;
struct list$1charph* __result152__;
err_367 = (void*)0;
memset(&erro_ofs_368, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1586, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    options_369=reg->options;
    str_370=reg->str;
    re_371=reg->re;
    result_372=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1596, "list$1charph"));
    offset_373=0;
    ovec_max_374=16;
    int start_375[ovec_max_374];
    memset(&start_375, 0, sizeof(int)    *(ovec_max_374)    );
    int end_376[ovec_max_374];
    memset(&end_376, 0, sizeof(int)    *(ovec_max_374)    );
    int ovec_value_377[ovec_max_374*3];
    memset(&ovec_value_377, 0, sizeof(int)    *(ovec_max_374*3)    );
    while((_Bool)1) {
        options_378=2097152;
        len_379=strlen(self);
        regex_result_380=pcre_exec(re_371,(struct pcre_extra*)0,self,len_379,offset_373,options_378,ovec_value_377,ovec_max_374*3);
        for(        i_381=0;        i_381<ovec_max_374;        i_381++        ){
            start_375[i_381]=ovec_value_377[i_381*2];
        }
        for(        i_382=0;        i_382<ovec_max_374;        i_382++        ){
            end_376[i_382]=ovec_value_377[i_382*2+1];
        }
        if(        regex_result_380==1) {
            str_383=charp_substring(self,offset_373,start_375[0]);
            list$1charph_push_back(result_372,str_383);
            if(            offset_373==end_376[0]) {
                offset_373++;
            }
            else {
                offset_373=end_376[0];
            }
        }
        else if(        regex_result_380>1) {
            str_384=charp_substring(self,offset_373,start_375[0]);
            list$1charph_push_back(result_372,str_384);
            if(            offset_373==end_376[0]) {
                offset_373++;
            }
            else {
                offset_373=end_376[0];
            }
            for(            i_385=1;            i_385<regex_result_380;            i_385++            ){
                match_str_386=charp_substring(self,start_375[i_385],end_376[i_385]);
                list$1charph_push_back(result_372,match_str_386);
            }
        }
        else {
            break;
        }
    }
    if(    offset_373<charp_length(self)) {
        str_387=charp_substring(self,offset_373,-1);
        list$1charph_push_back(result_372,str_387);
    }
    __result152__ = gComeFunResultObject = __result_obj__ = result_372;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_388;
int ovec_max_389;
const char* err_393;
int erro_ofs_394;
int options_395;
char* str_396;
struct real_pcre* re_397;
int options_398;
int len_399;
int regex_result_400;
int i_401;
int i_402;
err_393 = (void*)0;
memset(&erro_ofs_394, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_388=0;
    ovec_max_389=16;
    int start_390[ovec_max_389];
    memset(&start_390, 0, sizeof(int)    *(ovec_max_389)    );
    int end_391[ovec_max_389];
    memset(&end_391, 0, sizeof(int)    *(ovec_max_389)    );
    int ovec_value_392[ovec_max_389*3];
    memset(&ovec_value_392, 0, sizeof(int)    *(ovec_max_389*3)    );
    options_395=reg->options;
    str_396=reg->str;
    re_397=reg->re;
    while((_Bool)1) {
        options_398=2097152;
        len_399=strlen(self);
        regex_result_400=pcre_exec(re_397,(struct pcre_extra*)0,self,len_399,offset_388,options_398,ovec_value_392,ovec_max_389*3);
        for(        i_401=0;        i_401<ovec_max_389;        i_401++        ){
            start_390[i_401]=ovec_value_392[i_401*2];
        }
        for(        i_402=0;        i_402<ovec_max_389;        i_402++        ){
            end_391[i_402]=ovec_value_392[i_402*2+1];
        }
        if(        regex_result_400>0) {
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
struct list$1charph* __result153__;
const char* err_403;
int erro_ofs_404;
int options_405;
char* str_406;
struct real_pcre* re_407;
struct list$1charph* result_408;
int offset_409;
int ovec_max_410;
int n_414;
int options_415;
int len_416;
int regex_result_417;
int i_418;
int i_419;
char* str_420;
char* str_421;
int i_422;
char* match_str_423;
char* str_424;
struct list$1charph* __result154__;
err_403 = (void*)0;
memset(&erro_ofs_404, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1714, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    options_405=reg->options;
    str_406=reg->str;
    re_407=reg->re;
    result_408=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1724, "list$1charph"));
    offset_409=0;
    ovec_max_410=16;
    int start_411[ovec_max_410];
    memset(&start_411, 0, sizeof(int)    *(ovec_max_410)    );
    int end_412[ovec_max_410];
    memset(&end_412, 0, sizeof(int)    *(ovec_max_410)    );
    int ovec_value_413[ovec_max_410*3];
    memset(&ovec_value_413, 0, sizeof(int)    *(ovec_max_410*3)    );
    n_414=0;
    while((_Bool)1) {
        options_415=2097152;
        len_416=strlen(self);
        regex_result_417=pcre_exec(re_407,(struct pcre_extra*)0,self,len_416,offset_409,options_415,ovec_value_413,ovec_max_410*3);
        for(        i_418=0;        i_418<ovec_max_410;        i_418++        ){
            start_411[i_418]=ovec_value_413[i_418*2];
        }
        for(        i_419=0;        i_419<ovec_max_410;        i_419++        ){
            end_412[i_419]=ovec_value_413[i_419*2+1];
        }
        if(        regex_result_417==1) {
            str_420=charp_substring(self,offset_409,start_411[0]);
            list$1charph_push_back(result_408,str_420);
            if(            offset_409==end_412[0]) {
                offset_409++;
            }
            else {
                offset_409=end_412[0];
            }
        }
        else if(        regex_result_417>1) {
            str_421=charp_substring(self,offset_409,start_411[0]);
            list$1charph_push_back(result_408,str_421);
            if(            offset_409==end_412[0]) {
                offset_409++;
            }
            else {
                offset_409=end_412[0];
            }
            for(            i_422=1;            i_422<regex_result_417;            i_422++            ){
                match_str_423=charp_substring(self,start_411[i_422],end_412[i_422]);
                list$1charph_push_back(result_408,match_str_423);
            }
        }
        else {
            break;
        }
        n_414++;
        if(        maxsplit==n_414) {
            break;
        }
    }
    if(    offset_409<charp_length(self)) {
        str_424=charp_substring(self,offset_409,-1);
        list$1charph_push_back(result_408,str_424);
    }
    __result154__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_425;
int erro_ofs_426;
int options_427;
char* str_428;
struct real_pcre* re_429;
char* self2_430;
int ovec_max_431;
int result_435;
int offset_436;
int n_437;
int options_438;
int len_439;
int regex_result_440;
int i_441;
int i_442;
err_425 = (void*)0;
memset(&erro_ofs_426, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_427=reg->options;
    str_428=reg->str;
    re_429=reg->re;
    self2_430=charp_reverse(self);
    ovec_max_431=16;
    int start_432[ovec_max_431];
    memset(&start_432, 0, sizeof(int)    *(ovec_max_431)    );
    int end_433[ovec_max_431];
    memset(&end_433, 0, sizeof(int)    *(ovec_max_431)    );
    int ovec_value_434[ovec_max_431*3];
    memset(&ovec_value_434, 0, sizeof(int)    *(ovec_max_431*3)    );
    result_435=default_value;
    offset_436=0;
    n_437=0;
    while((_Bool)1) {
        options_438=2097152;
        len_439=strlen(self2_430);
        regex_result_440=pcre_exec(re_429,(struct pcre_extra*)0,self2_430,len_439,offset_436,options_438,ovec_value_434,ovec_max_431*3);
        for(        i_441=0;        i_441<ovec_max_431;        i_441++        ){
            start_432[i_441]=ovec_value_434[i_441*2];
        }
        for(        i_442=0;        i_442<ovec_max_431;        i_442++        ){
            end_433[i_442]=ovec_value_434[i_442*2+1];
        }
        if(        regex_result_440>0) {
            n_437++;
            if(            offset_436==end_433[0]) {
                offset_436++;
            }
            else {
                offset_436=end_433[0];
            }
            if(            n_437==count) {
                result_435=strlen(self)-end_433[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_435;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_443;
int ovec_max_444;
const char* err_448;
int erro_ofs_449;
int options_450;
char* str_451;
struct real_pcre* re_452;
int n_453;
int options_454;
int len_455;
int regex_result_456;
int i_457;
int i_458;
err_448 = (void*)0;
memset(&erro_ofs_449, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_443=0;
    ovec_max_444=16;
    int start_445[ovec_max_444];
    memset(&start_445, 0, sizeof(int)    *(ovec_max_444)    );
    int end_446[ovec_max_444];
    memset(&end_446, 0, sizeof(int)    *(ovec_max_444)    );
    int ovec_value_447[ovec_max_444*3];
    memset(&ovec_value_447, 0, sizeof(int)    *(ovec_max_444*3)    );
    options_450=reg->options;
    str_451=reg->str;
    re_452=reg->re;
    n_453=0;
    while((_Bool)1) {
        options_454=2097152;
        len_455=strlen(self);
        regex_result_456=pcre_exec(re_452,(struct pcre_extra*)0,self,len_455,offset_443,options_454,ovec_value_447,ovec_max_444*3);
        for(        i_457=0;        i_457<ovec_max_444;        i_457++        ){
            start_445[i_457]=ovec_value_447[i_457*2];
        }
        for(        i_458=0;        i_458<ovec_max_444;        i_458++        ){
            end_446[i_458]=ovec_value_447[i_458*2+1];
        }
        if(        regex_result_456>0) {
            n_453++;
            if(            count==n_453) {
                return (_Bool)1;
            }
            if(            offset_443==end_446[0]) {
                offset_443++;
            }
            else {
                offset_443=end_446[0];
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
char* __result155__;
int offset_459;
int ovec_max_460;
const char* err_464;
int erro_ofs_465;
int options_466;
char* str_467;
struct real_pcre* re_468;
struct buffer* result_469;
int options_470;
int len_471;
int regex_result_472;
int i_473;
int i_474;
char* str_475;
struct list$1charph* group_strings_476;
char* match_string_477;
char* block_result_478;
char* str_479;
char* str_480;
struct list$1charph* group_strings_481;
int i_482;
char* match_string_483;
char* match_string_484;
char* block_result_485;
char* str_486;
char* str_487;
char* __result156__;
err_464 = (void*)0;
memset(&erro_ofs_465, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result155__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    offset_459=0;
    ovec_max_460=16;
    int start_461[ovec_max_460];
    memset(&start_461, 0, sizeof(int)    *(ovec_max_460)    );
    int end_462[ovec_max_460];
    memset(&end_462, 0, sizeof(int)    *(ovec_max_460)    );
    int ovec_value_463[ovec_max_460*3];
    memset(&ovec_value_463, 0, sizeof(int)    *(ovec_max_460*3)    );
    options_466=reg->options;
    str_467=reg->str;
    re_468=reg->re;
    result_469=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1945, "buffer"));
    while((_Bool)1) {
        options_470=2097152;
        len_471=strlen(self);
        regex_result_472=pcre_exec(re_468,(struct pcre_extra*)0,self,len_471,offset_459,options_470,ovec_value_463,ovec_max_460*3);
        for(        i_473=0;        i_473<ovec_max_460;        i_473++        ){
            start_461[i_473]=ovec_value_463[i_473*2];
        }
        for(        i_474=0;        i_474<ovec_max_460;        i_474++        ){
            end_462[i_474]=ovec_value_463[i_474*2+1];
        }
        if(        regex_result_472==1) {
            str_475=charp_substring(self,offset_459,start_461[0]);
            buffer_append_str(result_469,str_475);
            group_strings_476=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1965, "list$1charph"));
            match_string_477=charp_substring(self,start_461[0],end_462[0]);
            list$1charph_push_back(group_strings_476,charp_substring(self,start_461[0],end_462[0]));
            block_result_478=block(parent,match_string_477,group_strings_476);
            buffer_append_str(result_469,block_result_478);
            if(            offset_459==end_462[0]) {
                offset_459++;
            }
            else {
                offset_459=end_462[0];
            }
            if(            !reg->global) {
                str_479=charp_substring(self,offset_459,-1);
                buffer_append_str(result_469,str_479);
                break;
            }
        }
        else if(        regex_result_472>1) {
            str_480=charp_substring(self,offset_459,start_461[0]);
            buffer_append_str(result_469,str_480);
            if(            offset_459==end_462[0]) {
                offset_459++;
            }
            else {
                offset_459=end_462[0];
            }
            group_strings_481=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2000, "list$1charph"));
            for(            i_482=1;            i_482<regex_result_472;            i_482++            ){
                match_string_483=charp_substring(self,start_461[i_482],end_462[i_482]);
                list$1charph_push_back(group_strings_481,match_string_483);
            }
            match_string_484=charp_substring(self,start_461[0],end_462[0]);
            block_result_485=block(parent,match_string_484,group_strings_481);
            buffer_append_str(result_469,block_result_485);
            if(            !reg->global) {
                str_486=charp_substring(self,offset_459,-1);
                buffer_append_str(result_469,str_486);
                break;
            }
        }
        else {
            str_487=charp_substring(self,offset_459,-1);
            buffer_append_str(result_469,str_487);
            break;
        }
    }
    __result156__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_469);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result157__;
int offset_488;
int ovec_max_489;
const char* err_493;
int erro_ofs_494;
int options_495;
char* str_496;
struct real_pcre* re_497;
struct buffer* result_498;
int n_499;
int options_500;
int len_501;
int regex_result_502;
int i_503;
int i_504;
char* str_505;
struct list$1charph* group_strings_506;
char* match_string_507;
char* block_result_508;
char* str_509;
char* str_510;
char* str_511;
struct list$1charph* group_strings_512;
int i_513;
char* match_string_514;
char* match_string_515;
char* block_result_516;
char* str_517;
char* str_518;
char* str_519;
char* __result158__;
err_493 = (void*)0;
memset(&erro_ofs_494, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    offset_488=0;
    ovec_max_489=16;
    int start_490[ovec_max_489];
    memset(&start_490, 0, sizeof(int)    *(ovec_max_489)    );
    int end_491[ovec_max_489];
    memset(&end_491, 0, sizeof(int)    *(ovec_max_489)    );
    int ovec_value_492[ovec_max_489*3];
    memset(&ovec_value_492, 0, sizeof(int)    *(ovec_max_489*3)    );
    options_495=reg->options;
    str_496=reg->str;
    re_497=reg->re;
    result_498=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 2049, "buffer"));
    n_499=0;
    while((_Bool)1) {
        options_500=2097152;
        len_501=strlen(self);
        regex_result_502=pcre_exec(re_497,(struct pcre_extra*)0,self,len_501,offset_488,options_500,ovec_value_492,ovec_max_489*3);
        for(        i_503=0;        i_503<ovec_max_489;        i_503++        ){
            start_490[i_503]=ovec_value_492[i_503*2];
        }
        for(        i_504=0;        i_504<ovec_max_489;        i_504++        ){
            end_491[i_504]=ovec_value_492[i_504*2+1];
        }
        if(        regex_result_502==1) {
            n_499++;
            str_505=charp_substring(self,offset_488,start_490[0]);
            buffer_append_str(result_498,str_505);
            group_strings_506=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2072, "list$1charph"));
            list$1charph_push_back(group_strings_506,charp_substring(self,start_490[0],end_491[0]));
            match_string_507=charp_substring(self,start_490[0],end_491[0]);
            block_result_508=block(parent,match_string_507,group_strings_506);
            buffer_append_str(result_498,block_result_508);
            if(            offset_488==end_491[0]) {
                offset_488++;
            }
            else {
                offset_488=end_491[0];
            }
            if(            !reg->global) {
                str_509=charp_substring(self,offset_488,-1);
                buffer_append_str(result_498,str_509);
                break;
            }
            if(            n_499==count) {
                str_510=charp_substring(self,offset_488,-1);
                buffer_append_str(result_498,str_510);
                break;
            }
        }
        else if(        regex_result_502>1) {
            n_499++;
            str_511=charp_substring(self,offset_488,start_490[0]);
            buffer_append_str(result_498,str_511);
            if(            offset_488==end_491[0]) {
                offset_488++;
            }
            else {
                offset_488=end_491[0];
            }
            group_strings_512=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2115, "list$1charph"));
            for(            i_513=1;            i_513<regex_result_502;            i_513++            ){
                match_string_514=charp_substring(self,start_490[i_513],end_491[i_513]);
                list$1charph_push_back(group_strings_512,match_string_514);
            }
            match_string_515=charp_substring(self,start_490[0],end_491[0]);
            block_result_516=block(parent,match_string_515,group_strings_512);
            buffer_append_str(result_498,block_result_516);
            if(            !reg->global) {
                str_517=charp_substring(self,offset_488,-1);
                buffer_append_str(result_498,str_517);
                break;
            }
            if(            n_499==count) {
                str_518=charp_substring(self,offset_488,-1);
                buffer_append_str(result_498,str_518);
                break;
            }
        }
        else {
            str_519=charp_substring(self,offset_488,-1);
            buffer_append_str(result_498,str_519);
            break;
        }
    }
    __result158__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_498);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_520;
int* p_521;
    result_520=0;
    p_521=value;
    while(*p_521) {
        result_520+=(*p_521);
        p_521++;
    }
    return result_520;
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
char* __result159__;
    __result159__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_522;
char* __result160__;
char* __result161__;
    result_522=__builtin_string(str);
    if(    result_522[string_length(result_522)-1]==10) {
        __result160__ = gComeFunResultObject = __result_obj__ = string_substring(result_522,0,-2);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    __result161__ = gComeFunResultObject = __result_obj__ = result_522;
    gComeFunResultObject = (void*)0;
    return __result161__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result162__;
char* result_523;
char* result2_524;
char* __result163__;
    if(    path==((void*)0)) {
        __result162__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    result_523=realpath(path,((void*)0));
    result2_524=__builtin_string(result_523);
    free(result_523);
    __result163__ = gComeFunResultObject = __result_obj__ = result2_524;
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result164__;
char* __result165__;
    if(    path==((void*)0)) {
        __result164__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    __result165__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result165__;
}

unsigned long  int xwcslen(int* wstr){
int* p_525;
unsigned long  int len_526;
    p_525=wstr;
    len_526=0;
    while(*p_525) {
        p_525++;
        len_526++;
    }
    return len_526;
}

