/// previous struct definition ///
struct __locale_t;

struct __sFILE;

struct real_pcre8_or_16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

struct sigevent;

/// struct definition ///
typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long  long __clang_max_align_nonce1;
    long  double __clang_max_align_nonce2;
};

typedef struct anonymous_typeX1 max_align_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long  int __uint64_t;

typedef long __intptr_t;

typedef unsigned long  int __uintptr_t;

typedef char int8_t;

typedef unsigned char uint8_t;

typedef short int16_t;

typedef unsigned short int uint16_t;

typedef int int32_t;

typedef unsigned int uint32_t;

typedef long int64_t;

typedef unsigned long  int uint64_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef char int_least8_t;

typedef unsigned char uint_least8_t;

typedef short int_least16_t;

typedef unsigned short int uint_least16_t;

typedef int int_least32_t;

typedef unsigned int uint_least32_t;

typedef long int_least64_t;

typedef unsigned long  int uint_least64_t;

typedef char int_fast8_t;

typedef unsigned char uint_fast8_t;

typedef long int_fast64_t;

typedef unsigned long  int uint_fast64_t;

typedef long int_fast16_t;

typedef unsigned long  int uint_fast16_t;

typedef long int_fast32_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uintmax_t;

typedef long intmax_t;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long  long __s64;

typedef unsigned long  long __u64;

struct anonymous_typeX2
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

typedef struct anonymous_typeX2 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int __kernel_ino_t;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long __kernel_suseconds_t;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned int __kernel_old_dev_t;

typedef unsigned long  int __kernel_size_t;

typedef long __kernel_ssize_t;

typedef long __kernel_ptrdiff_t;

struct anonymous_typeX3
{
    int val[2];
};

typedef struct anonymous_typeX3 __kernel_fsid_t;

typedef long __kernel_off_t;

typedef long  long __kernel_loff_t;

typedef long __kernel_old_time_t;

typedef long __kernel_time_t;

typedef long  long __kernel_time64_t;

typedef long __kernel_clock_t;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef __int128 __s128;

typedef unsigned __int128 __u128;

typedef unsigned short int __le16;

typedef unsigned short int __be16;

typedef unsigned int __le32;

typedef unsigned int __be32;

typedef unsigned long  long __le64;

typedef unsigned long  long __be64;

typedef unsigned short int __sum16;

typedef unsigned int __wsum;

typedef unsigned int __poll_t;

struct anonymous_typeX4
{
    unsigned int flags;
    void* stack_base;
    unsigned long  int stack_size;
    unsigned long  int guard_size;
    int sched_policy;
    int sched_priority;
    char __reserved[16];
};

typedef struct anonymous_typeX4 pthread_attr_t;

struct anonymous_typeX5
{
    long __private[4];
};

typedef struct anonymous_typeX5 pthread_barrier_t;

typedef int pthread_barrierattr_t;

struct anonymous_typeX6
{
    int __private[12];
};

typedef struct anonymous_typeX6 pthread_cond_t;

typedef long pthread_condattr_t;

typedef int pthread_key_t;

struct anonymous_typeX7
{
    int __private[10];
};

typedef struct anonymous_typeX7 pthread_mutex_t;

typedef long pthread_mutexattr_t;

typedef int pthread_once_t;

struct anonymous_typeX8
{
    int __private[14];
};

typedef struct anonymous_typeX8 pthread_rwlock_t;

typedef long pthread_rwlockattr_t;

struct anonymous_typeX9
{
    long __private;
};

typedef struct anonymous_typeX9 pthread_spinlock_t;

typedef long pthread_t;

typedef unsigned int __gid_t;

typedef unsigned int gid_t;

typedef unsigned int __uid_t;

typedef unsigned int uid_t;

typedef int __pid_t;

typedef int pid_t;

typedef unsigned int __id_t;

typedef unsigned int id_t;

typedef unsigned long  int blkcnt_t;

typedef unsigned long  int blksize_t;

typedef char* caddr_t;

typedef long clock_t;

typedef int __clockid_t;

typedef int clockid_t;

typedef int daddr_t;

typedef unsigned long  int fsblkcnt_t;

typedef unsigned long  int fsfilcnt_t;

typedef unsigned int __mode_t;

typedef unsigned int mode_t;

typedef int __key_t;

typedef int key_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int ino_t;

typedef unsigned long  int ino64_t;

typedef unsigned int __nlink_t;

typedef unsigned int nlink_t;

typedef void* __timer_t;

typedef void* timer_t;

typedef long __suseconds_t;

typedef long suseconds_t;

typedef unsigned int __useconds_t;

typedef unsigned int useconds_t;

typedef unsigned long  int dev_t;

typedef long __time_t;

typedef long time_t;

typedef long off_t;

typedef long loff_t;

typedef long off64_t;

typedef unsigned int __socklen_t;

typedef unsigned int socklen_t;

typedef __builtin_va_list __va_list;

typedef long ssize_t;

typedef unsigned int uint_t;

typedef unsigned int uint;

typedef unsigned char u_char;

typedef unsigned short int u_short;

typedef unsigned int u_int;

typedef unsigned long  int u_long;

typedef unsigned int u_int32_t;

typedef unsigned short int u_int16_t;

typedef unsigned char u_int8_t;

typedef unsigned long  int u_int64_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

typedef struct __locale_t* locale_t;

struct flock
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct flock64
{
    short l_type;
    short l_whence;
    long l_start;
    long l_len;
    int l_pid;
};

struct f_owner_ex
{
    int type;
    int pid;
};

typedef long fpos_t;

typedef long fpos64_t;

typedef struct __sFILE FILE;

struct mallinfo
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

struct mallinfo2
{
    unsigned long  int arena;
    unsigned long  int ordblks;
    unsigned long  int smblks;
    unsigned long  int hblks;
    unsigned long  int hblkhd;
    unsigned long  int usmblks;
    unsigned long  int fsmblks;
    unsigned long  int uordblks;
    unsigned long  int fordblks;
    unsigned long  int keepcost;
};

enum HeapTaggingLevel { M_HEAP_TAGGING_LEVEL_NONE=(0),
M_HEAP_TAGGING_LEVEL_TBI=(1),
M_HEAP_TAGGING_LEVEL_ASYNC=(2),
M_HEAP_TAGGING_LEVEL_SYNC=(3)
};

struct anonymous_typeX10
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX10 div_t;

struct anonymous_typeX11
{
    long  int quot;
    long  int rem;
};

typedef struct anonymous_typeX11 ldiv_t;

struct anonymous_typeX12
{
    long long int quot;
    long long int rem;
};

typedef struct anonymous_typeX12 lldiv_t;

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

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
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

typedef struct real_pcre8_or_16 pcre;

typedef struct real_pcre8_or_16 pcre16;

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

typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);

typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);

typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct __kernel_timespec
{
    long  long tv_sec;
    long long tv_nsec;
};

struct __kernel_itimerspec
{
    struct __kernel_timespec it_interval;
    struct __kernel_timespec it_value;
};

struct __kernel_old_timespec
{
    long tv_sec;
    long tv_nsec;
};

struct __kernel_sock_timeval
{
    long  long tv_sec;
    long  long tv_usec;
};

struct timeval
{
    long tv_sec;
    long tv_usec;
};

struct itimerspec
{
    struct timespec it_interval;
    struct timespec it_value;
};

struct itimerval
{
    struct timeval it_interval;
    struct timeval it_value;
};

struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};

struct sigcontext
{
    unsigned long  long fault_address;
    unsigned long  long regs[31];
    unsigned long  long sp;
    unsigned long  long pc;
    unsigned long  long pstate;
    unsigned char __reserved[4096];
};

struct _aarch64_ctx
{
    unsigned int magic;
    unsigned int size;
};

struct fpsimd_context
{
    struct _aarch64_ctx head;
    unsigned int fpsr;
    unsigned int fpcr;
    __uint128_t vregs[32];
};

struct esr_context
{
    struct _aarch64_ctx head;
    unsigned long  long esr;
};

struct extra_context
{
    struct _aarch64_ctx head;
    unsigned long  long datap;
    unsigned int size;
    unsigned int __reserved[3];
};

struct sve_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int flags;
    unsigned short int __reserved[2];
};

struct tpidr2_context
{
    struct _aarch64_ctx head;
    unsigned long  long tpidr2;
};

struct za_context
{
    struct _aarch64_ctx head;
    unsigned short int vl;
    unsigned short int __reserved[3];
};

struct zt_context
{
    struct _aarch64_ctx head;
    unsigned short int nregs;
    unsigned short int __reserved[3];
};

struct anonymous_typeX13
{
    unsigned long  int sig[(64/64)];
};

typedef struct anonymous_typeX13 sigset_t;

typedef unsigned long  int old_sigset_t;

typedef void (*__signalfn_t)(int);

typedef void (*__sighandler_t)(int);

typedef void (*__restorefn_t)();

typedef void (*__sigrestore_t)();

struct __kernel_sigaction
{
    void (*sa_handler)(int);
    unsigned long  int sa_flags;
    void (*sa_restorer)();
    struct anonymous_typeX13 sa_mask;
};

struct sigaltstack
{
    void* ss_sp;
    int ss_flags;
    unsigned long  int ss_size;
};

typedef struct sigaltstack stack_t;

union sigval
{
int sival_int;
void* sival_ptr;
};

typedef union sigval sigval_t;

struct anonymous_typeX14
{
    int _pid;
    unsigned int _uid;
};

struct anonymous_typeX15
{
    int _tid;
    int _overrun;
    union sigval _sigval;
    int _sys_private;
};

struct anonymous_typeX16
{
    int _pid;
    unsigned int _uid;
    union sigval _sigval;
};

struct anonymous_typeX17
{
    int _pid;
    unsigned int _uid;
    int _status;
    long _utime;
    long _stime;
};

struct anonymous_typeX20
{
    char _dummy_bnd[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    void* _lower;
    void* _upper;
};

struct anonymous_typeX21
{
    char _dummy_pkey[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    unsigned int _pkey;
};

struct anonymous_typeX22
{
    unsigned long  int _data;
    unsigned int _type;
    unsigned int _flags;
};

union anonymous_typeZ19
{
int _trapno;
short _addr_lsb;
struct anonymous_typeX20 _addr_bnd;
struct anonymous_typeX21 _addr_pkey;
struct anonymous_typeX22 _perf;
};

struct anonymous_typeX24
{
    char _dummy_bnd[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    void* _lower;
    void* _upper;
};

struct anonymous_typeX25
{
    char _dummy_pkey[(((__alignof__(void*)<sizeof(short))?(sizeof(short)):(__alignof__(void*))))];
    unsigned int _pkey;
};

struct anonymous_typeX26
{
    unsigned long  int _data;
    unsigned int _type;
    unsigned int _flags;
};

union anonymous_typeZ23
{
int _trapno;
short _addr_lsb;
struct anonymous_typeX24 _addr_bnd;
struct anonymous_typeX25 _addr_pkey;
struct anonymous_typeX26 _perf;
};

struct anonymous_typeX18
{
    void* _addr;
    union anonymous_typeZ23 anonymous_var_nameY2;
};

struct anonymous_typeX27
{
    long _band;
    int _fd;
};

struct anonymous_typeX28
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union __sifields
{
struct anonymous_typeX14 _kill;
struct anonymous_typeX15 _timer;
struct anonymous_typeX16 _rt;
struct anonymous_typeX17 _sigchld;
struct anonymous_typeX18 _sigfault;
struct anonymous_typeX27 _sigpoll;
struct anonymous_typeX28 _sigsys;
};

struct anonymous_typeX30
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};

union anonymous_typeZ29
{
struct anonymous_typeX30 anonymous_var_nameXYZ1;
int _si_pad[128/sizeof(int)];
};

struct anonymous_typeX32
{
    int si_signo;
    int si_errno;
    int si_code;
    union __sifields _sifields;
};

union anonymous_typeZ31
{
struct anonymous_typeX32 anonymous_var_nameXYZ2;
int _si_pad[128/sizeof(int)];
};

struct siginfo
{
    union anonymous_typeZ31 anonymous_var_nameY4;
};

typedef struct siginfo siginfo_t;

struct anonymous_typeX34
{
    void (*_function)(union sigval);
    void* _attribute;
};

union anonymous_typeZ33
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX34 _sigev_thread;
};

struct anonymous_typeX36
{
    void (*_function)(union sigval);
    void* _attribute;
};

union anonymous_typeZ35
{
int _pad[((64-(sizeof(int)*2+sizeof(union sigval)))/sizeof(int))];
int _tid;
struct anonymous_typeX36 _sigev_thread;
};

struct sigevent
{
    union sigval sigev_value;
    int sigev_signo;
    int sigev_notify;
    union anonymous_typeZ35 _sigev_un;
};

typedef struct sigevent sigevent_t;

typedef int sig_atomic_t;

typedef void (*sig_t)(int);

typedef void (*sighandler_t)(int);

typedef struct anonymous_typeX13 sigset64_t;

union anonymous_typeZ37
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

union anonymous_typeZ38
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

struct sigaction
{
    int sa_flags;
    union anonymous_typeZ38 anonymous_var_nameY6;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};

union anonymous_typeZ39
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

union anonymous_typeZ40
{
void (*sa_handler)(int);
void (*sa_sigaction)(int,struct siginfo*,void*);
};

struct sigaction64
{
    int sa_flags;
    union anonymous_typeZ40 anonymous_var_nameY8;
    struct anonymous_typeX13 sa_mask;
    void (*sa_restorer)();
};

struct user_regs_struct
{
    unsigned long  int regs[31];
    unsigned long  int sp;
    unsigned long  int pc;
    unsigned long  int pstate;
};

struct user_fpsimd_struct
{
    __uint128_t vregs[32];
    unsigned int fpsr;
    unsigned int fpcr;
};

typedef unsigned long  int greg_t;

typedef unsigned long  int gregset_t[34];

typedef struct user_fpsimd_struct fpregset_t;

typedef struct sigcontext mcontext_t;

union anonymous_typeZ41
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};

union anonymous_typeZ42
{
struct anonymous_typeX13 uc_sigmask;
struct anonymous_typeX13 uc_sigmask64;
};

struct ucontext
{
    unsigned long  int uc_flags;
    struct ucontext* uc_link;
    struct sigaltstack uc_stack;
    union anonymous_typeZ42 anonymous_var_nameY10;
    char __padding[128-sizeof(struct anonymous_typeX13)];
    struct sigcontext uc_mcontext;
};

typedef struct ucontext ucontext_t;

typedef unsigned long  int fd_mask;

struct anonymous_typeX43
{
    unsigned long  int fds_bits[1024/(8*sizeof(unsigned long  int))];
};

typedef struct anonymous_typeX43 fd_set;

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long  int tm_gmtoff;
    const char* tm_zone;
};

enum :unsigned long  int { BIONIC_MULTIBYTE_RESULT_ILLEGAL_SEQUENCE=(18446744073709551615),
BIONIC_MULTIBYTE_RESULT_INCOMPLETE_SEQUENCE=(18446744073709551614),
BIONIC_MULTIBYTE_RESULT_NO_BYTES_CONSUMED=(18446744073709551613)
};

struct anonymous_typeX44
{
    unsigned char __seq[4];
    unsigned char __reserved[4];
};

typedef struct anonymous_typeX44 mbstate_t;

typedef unsigned int wint_t;

typedef long wctype_t;

typedef const void* wctrans_t;

typedef unsigned int* wstring;

struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};

struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
};

typedef void* GC_PTR;

typedef unsigned long  int GC_word;

typedef long GC_signed_word;

typedef void* (*GC_oom_func)(unsigned long  int);

typedef void (*GC_on_heap_resize_proc)(unsigned long  int);

enum anonymous_typeY45 { GC_EVENT_START
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

typedef enum anonymous_typeY45 GC_EventType;

typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY45);

typedef void (*GC_finalizer_notifier_proc)();

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

enum anonymous_typeY46 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};

typedef enum anonymous_typeY46 GC_ToggleRefStatus;

typedef enum anonymous_typeY46 (*GC_toggleref_func)(void*);

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

typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long  int);

struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

// source head
extern struct __sFILE* stdin;
extern struct __sFILE* stdout;
extern struct __sFILE* stderr;
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
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
extern const char* sys_siglist[(64+1)];
extern const char* sys_signame[(64+1)];
extern char* tzname[];
extern int daylight;
extern long  int timezone;
extern unsigned long  int GC_gc_no;
extern void* (*GC_oom_fn)(unsigned long  int);
extern void (*GC_on_heap_resize)(unsigned long  int);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
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
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
int android_get_application_target_sdk_version();
int __system_property_get(const char* __name, char* __value);
int strcasecmp(const char* __s1, const char* __s2);
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_t* __l);
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int __n);
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int __n, struct __locale_t* __l);
void* memccpy(void* __dst, const void* __src, int __stop_char, unsigned long  int __n);
void* memchr(const void* __s, int __ch, unsigned long  int __n);
void* memrchr(const void* __s, int __ch, unsigned long  int __n);
int memcmp(const void* __lhs, const void* __rhs, unsigned long  int __n);
void* memcpy(void* anonymous_var_nameX2, const void* anonymous_var_nameX3, unsigned long  int anonymous_var_nameX4);
void* mempcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __n);
void* memset(void* __dst, int __ch, unsigned long  int __n);
void* memmem(const void* __haystack, unsigned long  int __haystack_size, const void* __needle, unsigned long  int __needle_size);
char* strchr(const char* __s, int __ch);
char* __strchr_chk(const char* __s, int __ch, unsigned long  int __n);
char* strchrnul(const char* __s, int __ch);
char* strrchr(const char* __s, int __ch);
char* __strrchr_chk(const char* __s, int __ch, unsigned long  int __n);
unsigned long  int strlen(const char* __s);
unsigned long  int __strlen_chk(const char* __s, unsigned long  int __n);
int strcmp(const char* __lhs, const char* __rhs);
char* stpcpy(char* __dst, const char* __src);
char* strcpy(char* __dst, const char* __src);
char* strcat(char* __dst, const char* __src);
char* strdup(const char* __s);
char* strstr(const char* __haystack, const char* __needle);
char* strcasestr(const char* __haystack, const char* __needle);
char* strtok(char* __s, const char* __delimiter);
char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);
char* strerror_l(int __errno_value, struct __locale_t* __l);
char* __gnu_strerror_r(int __errno_value, char* __buf, unsigned long  int __n);
const char* strerror(int __errno_value);
unsigned long  int strnlen(const char* __s, unsigned long  int __n);
char* strncat(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s, unsigned long  int __n);
int strncmp(const char* __lhs, const char* __rhs, unsigned long  int __n);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcat(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strlcpy(char* __dst, const char* __src, unsigned long  int __n);
unsigned long  int strcspn(const char* __s, const char* __reject);
char* strpbrk(const char* __s, const char* __accept);
char* strsep(char** __s_ptr, const char* __delimiter);
unsigned long  int strspn(const char* __s, const char* __accept);
char* strsignal(int __signal);
int strcoll(const char* __lhs, const char* __rhs);
unsigned long  int strxfrm(char* __dst, const char* __src, unsigned long  int __n);
int strcoll_l(const char* __lhs, const char* __rhs, struct __locale_t* __l);
unsigned long  int strxfrm_l(char* __dst, const char* __src, unsigned long  int __n, struct __locale_t* __l);
char* __gnu_basename(const char* __path);
void clearerr(struct __sFILE* __fp);
int fclose(struct __sFILE* __fp);
int feof(struct __sFILE* __fp);
int ferror(struct __sFILE* __fp);
int fflush(struct __sFILE* __fp);
int fgetc(struct __sFILE* __fp);
char* fgets(char* __buf, int __size, struct __sFILE* __fp);
int fprintf(struct __sFILE* __fp, const char* __fmt, ...);
int fputc(int __ch, struct __sFILE* __fp);
int fputs(const char* __s, struct __sFILE* __fp);
unsigned long  int fread(void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int fscanf(struct __sFILE* __fp, const char* __fmt, ...);
unsigned long  int fwrite(const void* __buf, unsigned long  int __size, unsigned long  int __count, struct __sFILE* __fp);
int getc(struct __sFILE* __fp);
int getchar();
long getdelim(char** __line_ptr, unsigned long  int* __line_length_ptr, int __delimiter, struct __sFILE* __fp);
long getline(char** __line_ptr, unsigned long  int* __line_length_ptr, struct __sFILE* __fp);
void perror(const char* __msg);
int printf(const char* __fmt, ...);
int putc(int __ch, struct __sFILE* __fp);
int putchar(int __ch);
int puts(const char* __s);
int remove(const char* __path);
void rewind(struct __sFILE* __fp);
int scanf(const char* __fmt, ...);
void setbuf(struct __sFILE* __fp, char* __buf);
int setvbuf(struct __sFILE* __fp, char* __buf, int __mode, unsigned long  int __size);
int sscanf(const char* __s, const char* __fmt, ...);
int ungetc(int __ch, struct __sFILE* __fp);
int vfprintf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vprintf(const char* __fp, va_list __args);
int dprintf(int __fd, const char* __fmt, ...);
int vdprintf(int __fd, const char* __fmt, va_list __args);
int sprintf(char* __s, const char* __fmt, ...);
int vsprintf(char* __s, const char* __fmt, va_list __args);
char* tmpnam(char* __s);
char* tempnam(const char* __dir, const char* __prefix);
int rename(const char* __old_path, const char* __new_path);
int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);
int fseek(struct __sFILE* __fp, long __offset, int __whence);
long ftell(struct __sFILE* __fp);
int fgetpos(struct __sFILE* __fp, long* __pos);
int fsetpos(struct __sFILE* __fp, const long* __pos);
int fseeko(struct __sFILE* __fp, long __offset, int __whence);
long ftello(struct __sFILE* __fp);
struct __sFILE* funopen(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
int fgetpos64(struct __sFILE* __fp, long* __pos);
int fsetpos64(struct __sFILE* __fp, const long* __pos);
int fseeko64(struct __sFILE* __fp, long __offset, int __whence);
long ftello64(struct __sFILE* __fp);
struct __sFILE* funopen64(const void* __cookie, int (*__read_fn)(void*,char*,int), int (*__write_fn)(void*,const char*,int), long (*__seek_fn)(void*,long,int), int (*__close_fn)(void*));
struct __sFILE* fopen(const char* __path, const char* __mode);
struct __sFILE* fopen64(const char* __path, const char* __mode);
struct __sFILE* freopen(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* freopen64(const char* __path, const char* __mode, struct __sFILE* __fp);
struct __sFILE* tmpfile64();
int snprintf(char* __buf, unsigned long  int __size, const char* __fmt, ...);
int vfscanf(struct __sFILE* __fp, const char* __fmt, va_list __args);
int vscanf(const char* __fmt, va_list __args);
int vsnprintf(char* __buf, unsigned long  int __size, const char* __fmt, va_list __args);
int vsscanf(const char* __s, const char* __fmt, va_list __args);
struct __sFILE* fdopen(int __fd, const char* __mode);
int fileno(struct __sFILE* __fp);
int pclose(struct __sFILE* __fp);
struct __sFILE* popen(const char* __command, const char* __mode);
void flockfile(struct __sFILE* __fp);
int ftrylockfile(struct __sFILE* __fp);
void funlockfile(struct __sFILE* __fp);
int getc_unlocked(struct __sFILE* __fp);
int getchar_unlocked();
int putc_unlocked(int __ch, struct __sFILE* __fp);
int putchar_unlocked(int __ch);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __ptr, unsigned long  int* __size_ptr);
int asprintf(char** __s_ptr, const char* __fmt, ...);
char* fgetln(struct __sFILE* __fp, unsigned long  int* __length_ptr);
int fpurge(struct __sFILE* __fp);
void setbuffer(struct __sFILE* __fp, char* __buf, int __size);
int setlinebuf(struct __sFILE* __fp);
int vasprintf(char** __s_ptr, const char* __fmt, va_list __args);
void clearerr_unlocked(struct __sFILE* __fp);
int feof_unlocked(struct __sFILE* __fp);
int ferror_unlocked(struct __sFILE* __fp);
int fileno_unlocked(struct __sFILE* __fp);
int open(const char* anonymous_var_nameX25, int anonymous_var_nameX26, ...);
int getpid();
int unlink(const char* anonymous_var_nameX27);
void* malloc(unsigned long  int __byte_count);
void* calloc(unsigned long  int __item_count, unsigned long  int __item_size);
void* realloc(void* __ptr, unsigned long  int __byte_count);
void free(void* __ptr);
void* memalign(unsigned long  int __alignment, unsigned long  int __byte_count);
unsigned long  int malloc_usable_size(const void* __ptr);
struct mallinfo2 mallinfo();
int malloc_info(int __must_be_zero, struct __sFILE* __fp);
void abort();
void exit(int __status);
void _Exit(int __status);
int atexit(void (*__fn)());
int at_quick_exit(void (*__fn)());
void quick_exit(int __status);
char* getenv(const char* __name);
int putenv(char* __assignment);
int setenv(const char* __name, const char* __value, int __overwrite);
int unsetenv(const char* __name);
int clearenv();
char* mkdtemp(char* __template);
char* mktemp(char* __template);
int mkostemp64(char* __template, int __flags);
int mkostemp(char* __template, int __flags);
int mkostemps64(char* __template, int __suffix_length, int __flags);
int mkostemps(char* __template, int __suffix_length, int __flags);
int mkstemp64(char* __template);
int mkstemp(char* __template);
int mkstemps64(char* __template, int __flags);
int mkstemps(char* __template, int __flags);
long strtol(const char* __s, char** __end_ptr, int __base);
long long strtoll(const char* __s, char** __end_ptr, int __base);
unsigned long  int strtoul(const char* __s, char** __end_ptr, int __base);
unsigned long  long strtoull(const char* __s, char** __end_ptr, int __base);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
double strtod(const char* __s, char** __end_ptr);
long  double strtold(const char* __s, char** __end_ptr);
int atoi(const char* __s);
long atol(const char* __s);
long long atoll(const char* __s);
char* realpath(const char* __path, char* __resolved);
int system(const char* __command);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
void qsort(void* __base, unsigned long  int __nmemb, unsigned long  int __size, int (*__comparator)(const void*,const void*));
unsigned int arc4random();
unsigned int arc4random_uniform(unsigned int __upper_bound);
void arc4random_buf(void* __buf, unsigned long  int __n);
int rand_r(unsigned int* __seed_ptr);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long jrand48(unsigned short int __xsubi[3]);
void lcong48(unsigned short int __param[7]);
long lrand48();
long mrand48();
long nrand48(unsigned short int __xsubi[3]);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void srand48(long __seed);
char* initstate(unsigned int __seed, char* __state, unsigned long  int __n);
char* setstate(char* __state);
int getpt();
int posix_openpt(int __flags);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int __n);
int unlockpt(int __fd);
struct anonymous_typeX10 div(int __numerator, int __denominator);
struct anonymous_typeX11 ldiv(long __numerator, long __denominator);
struct anonymous_typeX12 lldiv(long  long __numerator, long  long __denominator);
const char* getprogname();
void setprogname(const char* __name);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(unsigned int* __dst, const char* __src, unsigned long  int __n);
int mbtowc(unsigned int* __wc_ptr, const char* __s, unsigned long  int __n);
int wctomb(char* __dst, unsigned int __wc);
unsigned long  int wcstombs(char* __dst, const unsigned int* __src, unsigned long  int __n);
int abs(int __x);
long labs(long __x);
long long llabs(long  long __x);
float strtof(const char* __s, char** __end_ptr);
double atof(const char* __s);
int rand();
void srand(unsigned int __seed);
long random();
void srandom(unsigned int __seed);
int grantpt(int __fd);
long long strtoll_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
unsigned long  long strtoull_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l);
long  double strtold_l(const char* __s, char** __end_ptr, struct __locale_t* __l);
struct lconv* localeconv();
struct __locale_t* duplocale(struct __locale_t* __l);
void freelocale(struct __locale_t* __l);
struct __locale_t* newlocale(int __category_mask, const char* __locale_name, struct __locale_t* __base);
char* setlocale(int __category, const char* __locale_name);
struct __locale_t* uselocale(struct __locale_t* __l);
int* __errno();
void __assert(const char* __file, int __line, const char* __msg);
void __assert2(const char* __file, int __line, const char* __function, const char* __msg);
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
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
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
int FILE_write(struct __sFILE* f, char* str);
char* FILE_read(struct __sFILE* f);
int FILE_fclose(struct __sFILE* f);
int* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX145, int anonymous_var_nameX146, const char** anonymous_var_nameX147, int* anonymous_var_nameX148, const unsigned char* anonymous_var_nameX149);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX150, int anonymous_var_nameX151, const char** anonymous_var_nameX152, int* anonymous_var_nameX153, const unsigned char* anonymous_var_nameX154);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX155, int anonymous_var_nameX156, const char** anonymous_var_nameX157, int* anonymous_var_nameX158, const unsigned char* anonymous_var_nameX159);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX160, int anonymous_var_nameX161, int* anonymous_var_nameX162, const char** anonymous_var_nameX163, int* anonymous_var_nameX164, const unsigned char* anonymous_var_nameX165);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX166, int anonymous_var_nameX167, int* anonymous_var_nameX168, const char** anonymous_var_nameX169, int* anonymous_var_nameX170, const unsigned char* anonymous_var_nameX171);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX172, int anonymous_var_nameX173, int* anonymous_var_nameX174, const char** anonymous_var_nameX175, int* anonymous_var_nameX176, const unsigned char* anonymous_var_nameX177);
int pcre_config(int anonymous_var_nameX178, void* anonymous_var_nameX179);
int pcre16_config(int anonymous_var_nameX180, void* anonymous_var_nameX181);
int pcre32_config(int anonymous_var_nameX182, void* anonymous_var_nameX183);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX184, const char* anonymous_var_nameX185, int* anonymous_var_nameX186, int anonymous_var_nameX187, const char* anonymous_var_nameX188, char* anonymous_var_nameX189, int anonymous_var_nameX190);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX191, const unsigned short int* anonymous_var_nameX192, int* anonymous_var_nameX193, int anonymous_var_nameX194, const unsigned short int* anonymous_var_nameX195, unsigned short int* anonymous_var_nameX196, int anonymous_var_nameX197);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX198, const unsigned int* anonymous_var_nameX199, int* anonymous_var_nameX200, int anonymous_var_nameX201, const unsigned int* anonymous_var_nameX202, unsigned int* anonymous_var_nameX203, int anonymous_var_nameX204);
int pcre_copy_substring(const char* anonymous_var_nameX205, int* anonymous_var_nameX206, int anonymous_var_nameX207, int anonymous_var_nameX208, char* anonymous_var_nameX209, int anonymous_var_nameX210);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX211, int* anonymous_var_nameX212, int anonymous_var_nameX213, int anonymous_var_nameX214, unsigned short int* anonymous_var_nameX215, int anonymous_var_nameX216);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX217, int* anonymous_var_nameX218, int anonymous_var_nameX219, int anonymous_var_nameX220, unsigned int* anonymous_var_nameX221, int anonymous_var_nameX222);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX223, const struct pcre_extra* anonymous_var_nameX224, const char* anonymous_var_nameX225, int anonymous_var_nameX226, int anonymous_var_nameX227, int anonymous_var_nameX228, int* anonymous_var_nameX229, int anonymous_var_nameX230, int* anonymous_var_nameX231, int anonymous_var_nameX232);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX233, const struct pcre16_extra* anonymous_var_nameX234, const unsigned short int* anonymous_var_nameX235, int anonymous_var_nameX236, int anonymous_var_nameX237, int anonymous_var_nameX238, int* anonymous_var_nameX239, int anonymous_var_nameX240, int* anonymous_var_nameX241, int anonymous_var_nameX242);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX243, const struct pcre32_extra* anonymous_var_nameX244, const unsigned int* anonymous_var_nameX245, int anonymous_var_nameX246, int anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int anonymous_var_nameX250, int* anonymous_var_nameX251, int anonymous_var_nameX252);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX253, const struct pcre_extra* anonymous_var_nameX254, const char* anonymous_var_nameX255, int anonymous_var_nameX256, int anonymous_var_nameX257, int anonymous_var_nameX258, int* anonymous_var_nameX259, int anonymous_var_nameX260);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX261, const struct pcre16_extra* anonymous_var_nameX262, const unsigned short int* anonymous_var_nameX263, int anonymous_var_nameX264, int anonymous_var_nameX265, int anonymous_var_nameX266, int* anonymous_var_nameX267, int anonymous_var_nameX268);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX269, const struct pcre32_extra* anonymous_var_nameX270, const unsigned int* anonymous_var_nameX271, int anonymous_var_nameX272, int anonymous_var_nameX273, int anonymous_var_nameX274, int* anonymous_var_nameX275, int anonymous_var_nameX276);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX277, const struct pcre_extra* anonymous_var_nameX278, const char* anonymous_var_nameX279, int anonymous_var_nameX280, int anonymous_var_nameX281, int anonymous_var_nameX282, int* anonymous_var_nameX283, int anonymous_var_nameX284, struct real_pcre_jit_stack* anonymous_var_nameX285);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX286, const struct pcre16_extra* anonymous_var_nameX287, const unsigned short int* anonymous_var_nameX288, int anonymous_var_nameX289, int anonymous_var_nameX290, int anonymous_var_nameX291, int* anonymous_var_nameX292, int anonymous_var_nameX293, struct real_pcre16_jit_stack* anonymous_var_nameX294);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX295, const struct pcre32_extra* anonymous_var_nameX296, const unsigned int* anonymous_var_nameX297, int anonymous_var_nameX298, int anonymous_var_nameX299, int anonymous_var_nameX300, int* anonymous_var_nameX301, int anonymous_var_nameX302, struct real_pcre32_jit_stack* anonymous_var_nameX303);
void pcre_free_substring(const char* anonymous_var_nameX304);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX305);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX306);
void pcre_free_substring_list(const char** anonymous_var_nameX307);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX308);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX309);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX310, const struct pcre_extra* anonymous_var_nameX311, int anonymous_var_nameX312, void* anonymous_var_nameX313);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX314, const struct pcre16_extra* anonymous_var_nameX315, int anonymous_var_nameX316, void* anonymous_var_nameX317);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX318, const struct pcre32_extra* anonymous_var_nameX319, int anonymous_var_nameX320, void* anonymous_var_nameX321);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX322, const char* anonymous_var_nameX323, int* anonymous_var_nameX324, int anonymous_var_nameX325, const char* anonymous_var_nameX326, const char** anonymous_var_nameX327);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX328, const unsigned short int* anonymous_var_nameX329, int* anonymous_var_nameX330, int anonymous_var_nameX331, const unsigned short int* anonymous_var_nameX332, const unsigned short int** anonymous_var_nameX333);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX334, const unsigned int* anonymous_var_nameX335, int* anonymous_var_nameX336, int anonymous_var_nameX337, const unsigned int* anonymous_var_nameX338, const unsigned int** anonymous_var_nameX339);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX340, const char* anonymous_var_nameX341);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX342, const unsigned short int* anonymous_var_nameX343);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX344, const unsigned int* anonymous_var_nameX345);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX346, const char* anonymous_var_nameX347, char** anonymous_var_nameX348, char** anonymous_var_nameX349);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX350, const unsigned short int* anonymous_var_nameX351, unsigned short int** anonymous_var_nameX352, unsigned short int** anonymous_var_nameX353);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX354, const unsigned int* anonymous_var_nameX355, unsigned int** anonymous_var_nameX356, unsigned int** anonymous_var_nameX357);
int pcre_get_substring(const char* anonymous_var_nameX358, int* anonymous_var_nameX359, int anonymous_var_nameX360, int anonymous_var_nameX361, const char** anonymous_var_nameX362);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX363, int* anonymous_var_nameX364, int anonymous_var_nameX365, int anonymous_var_nameX366, const unsigned short int** anonymous_var_nameX367);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX368, int* anonymous_var_nameX369, int anonymous_var_nameX370, int anonymous_var_nameX371, const unsigned int** anonymous_var_nameX372);
int pcre_get_substring_list(const char* anonymous_var_nameX373, int* anonymous_var_nameX374, int anonymous_var_nameX375, const char*** anonymous_var_nameX376);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX377, int* anonymous_var_nameX378, int anonymous_var_nameX379, const unsigned short int*** anonymous_var_nameX380);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX381, int* anonymous_var_nameX382, int anonymous_var_nameX383, const unsigned int*** anonymous_var_nameX384);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX385, int anonymous_var_nameX386);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX387, int anonymous_var_nameX388);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX389, int anonymous_var_nameX390);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX391, int anonymous_var_nameX392, const char** anonymous_var_nameX393);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX394, int anonymous_var_nameX395, const char** anonymous_var_nameX396);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX397, int anonymous_var_nameX398, const char** anonymous_var_nameX399);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX400);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX401);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX402);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX403, struct pcre_extra* anonymous_var_nameX404, const unsigned char* anonymous_var_nameX405);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX406, struct pcre16_extra* anonymous_var_nameX407, const unsigned char* anonymous_var_nameX408);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX409, struct pcre32_extra* anonymous_var_nameX410, const unsigned char* anonymous_var_nameX411);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX412, const unsigned short int* anonymous_var_nameX413, int anonymous_var_nameX414, int* anonymous_var_nameX415, int anonymous_var_nameX416);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX417, const unsigned int* anonymous_var_nameX418, int anonymous_var_nameX419, int* anonymous_var_nameX420, int anonymous_var_nameX421);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX422, int anonymous_var_nameX423);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX424, int anonymous_var_nameX425);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX426, int anonymous_var_nameX427);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX428);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX429);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX430);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX431, struct real_pcre_jit_stack* (*anonymous_var_nameX432)(void*), void* anonymous_var_nameX433);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX434, struct real_pcre16_jit_stack* (*anonymous_var_nameX435)(void*), void* anonymous_var_nameX436);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX437, struct real_pcre32_jit_stack* (*anonymous_var_nameX438)(void*), void* anonymous_var_nameX439);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int sigaction(int __signal, const struct sigaction* __new_action, struct sigaction* __old_action);
int siginterrupt(int __signal, int __flag);
void (*signal(int __signal, void (*__handler)(int)))(int);
int sigaddset(struct anonymous_typeX13* __set, int __signal);
int sigdelset(struct anonymous_typeX13* __set, int __signal);
int sigemptyset(struct anonymous_typeX13* __set);
int sigfillset(struct anonymous_typeX13* __set);
int sigismember(const struct anonymous_typeX13* __set, int __signal);
int sigpending(struct anonymous_typeX13* __set);
int sigprocmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);
int sigsuspend(const struct anonymous_typeX13* __mask);
int sigwait(const struct anonymous_typeX13* __set, int* __signal);
int raise(int __signal);
int kill(int __pid, int __signal);
int killpg(int __pgrp, int __signal);
int tgkill(int __tgid, int __tid, int __signal);
int sigaltstack(const struct sigaltstack* __new_signal_stack, struct sigaltstack* __old_signal_stack);
void psiginfo(const struct siginfo* __info, const char* __msg);
void psignal(int __signal, const char* __msg);
int pthread_kill(long __pthread, int __signal);
int pthread_sigmask(int __how, const struct anonymous_typeX13* __new_set, struct anonymous_typeX13* __old_set);
int sigqueue(int __pid, int __signal, const union sigval __value);
int sigtimedwait(const struct anonymous_typeX13* __set, struct siginfo* __info, const struct timespec* __timeout);
int sigwaitinfo(const struct anonymous_typeX13* __set, struct siginfo* __info);
void __FD_CLR_chk(int anonymous_var_nameX457, struct anonymous_typeX43* anonymous_var_nameX458, unsigned long  int anonymous_var_nameX459);
void __FD_SET_chk(int anonymous_var_nameX460, struct anonymous_typeX43* anonymous_var_nameX461, unsigned long  int anonymous_var_nameX462);
int __FD_ISSET_chk(int anonymous_var_nameX463, const struct anonymous_typeX43* anonymous_var_nameX464, unsigned long  int anonymous_var_nameX465);
int select(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, struct timeval* __timeout);
int pselect(int __max_fd_plus_one, struct anonymous_typeX43* __read_fds, struct anonymous_typeX43* __write_fds, struct anonymous_typeX43* __exception_fds, const struct timespec* __timeout, const struct anonymous_typeX13* __mask);
int gettimeofday(struct timeval* __tv, struct timezone* __tz);
int settimeofday(const struct timeval* __tv, const struct timezone* __tz);
int getitimer(int __which, struct itimerval* __current_value);
int setitimer(int __which, const struct itimerval* __new_value, struct itimerval* __old_value);
int utimes(const char* __path, const struct timeval __times[2]);
int futimes(int __fd, const struct timeval __times[2]);
int lutimes(const char* __path, const struct timeval __times[2]);
int futimesat(int __dir_fd, const char* __path, const struct timeval __times[2]);
long time(long* __t);
int nanosleep(const struct timespec* __duration, struct timespec* __remainder);
char* asctime(const struct tm* __tm);
char* asctime_r(const struct tm* __tm, char* __buf);
double difftime(long __lhs, long __rhs);
long mktime(struct tm* __tm);
struct tm* localtime(const long* __t);
struct tm* localtime_r(const long* __t, struct tm* __tm);
long timelocal(struct tm* __tm);
struct tm* gmtime(const long* __t);
struct tm* gmtime_r(const long* __t, struct tm* __tm);
long timegm(struct tm* __tm);
char* strptime(const char* __s, const char* __fmt, struct tm* __tm);
unsigned long  int strftime(char* __buf, unsigned long  int __n, const char* __fmt, const struct tm* __tm);
unsigned long  int strftime_l(char* __buf, unsigned long  int __n, const char* __fmt, const struct tm* __tm, struct __locale_t* __l);
char* ctime(const long* __t);
char* ctime_r(const long* __t, char* __buf);
void tzset();
long clock();
int clock_getcpuclockid(int __pid, int* __clock);
int clock_getres(int __clock, struct timespec* __resolution);
int clock_gettime(int __clock, struct timespec* __ts);
int clock_nanosleep(int __clock, int __flags, const struct timespec* __time, struct timespec* __remainder);
int clock_settime(int __clock, const struct timespec* __ts);
int timer_create(int __clock, struct sigevent* __event, void** __timer_ptr);
int timer_delete(void* __timer);
int timer_settime(void* __timer, int __flags, const struct itimerspec* __new_value, struct itimerspec* __old_value);
int timer_gettime(void* _timer, struct itimerspec* __ts);
int timer_getoverrun(void* __timer);
int iswalnum(unsigned int __wc);
int iswalpha(unsigned int __wc);
int iswblank(unsigned int __wc);
int iswcntrl(unsigned int __wc);
int iswdigit(unsigned int __wc);
int iswgraph(unsigned int __wc);
int iswlower(unsigned int __wc);
int iswprint(unsigned int __wc);
int iswpunct(unsigned int __wc);
int iswspace(unsigned int __wc);
int iswupper(unsigned int __wc);
int iswxdigit(unsigned int __wc);
unsigned int towlower(unsigned int __wc);
unsigned int towupper(unsigned int __wc);
long wctype(const char* __name);
int iswctype(unsigned int __wc, long __type);
unsigned int towctrans(unsigned int __wc, const void* __transform);
const void* wctrans(const char* __name);
unsigned int btowc(int __ch);
int fwprintf(struct __sFILE* __fp, const unsigned int* __fmt, ...);
int fwscanf(struct __sFILE* __fp, const unsigned int* __fmt, ...);
unsigned int fgetwc(struct __sFILE* __fp);
unsigned int* fgetws(unsigned int* __buf, int __size, struct __sFILE* __fp);
unsigned int fputwc(unsigned int __wc, struct __sFILE* __fp);
int fputws(const unsigned int* __s, struct __sFILE* __fp);
int fwide(struct __sFILE* __fp, int __mode);
unsigned int getwc(struct __sFILE* __fp);
unsigned int getwchar();
int mbsinit(const struct anonymous_typeX44* __ps);
unsigned long  int mbrlen(const char* __s, unsigned long  int __n, struct anonymous_typeX44* __ps);
unsigned long  int mbrtowc(unsigned int* __buf, const char* __s, unsigned long  int __n, struct anonymous_typeX44* __ps);
unsigned long  int mbsrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned long  int mbsnrtowcs(unsigned int* __dst, const char** __src, unsigned long  int __src_n, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned int putwc(unsigned int __wc, struct __sFILE* __fp);
unsigned int putwchar(unsigned int __wc);
int swprintf(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, ...);
int swscanf(const unsigned int* __s, const unsigned int* __fmt, ...);
unsigned int ungetwc(unsigned int __wc, struct __sFILE* __fp);
int vfwprintf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);
int vfwscanf(struct __sFILE* __fp, const unsigned int* __fmt, va_list __args);
int vswprintf(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, va_list __args);
int vswscanf(const unsigned int* __s, const unsigned int* __fmt, va_list __args);
int vwprintf(const unsigned int* __fmt, va_list __args);
int vwscanf(const unsigned int* __fmt, va_list __args);
unsigned int* wcpcpy(unsigned int* __dst, const unsigned int* __src);
unsigned int* wcpncpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcrtomb(char* __buf, unsigned int __wc, struct anonymous_typeX44* __ps);
int wcscasecmp(const unsigned int* __lhs, const unsigned int* __rhs);
int wcscasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);
unsigned int* wcscat(unsigned int* __dst, const unsigned int* __src);
unsigned int* wcschr(const unsigned int* __s, unsigned int __wc);
int wcscmp(const unsigned int* __lhs, const unsigned int* __rhs);
int wcscoll(const unsigned int* __lhs, const unsigned int* __rhs);
unsigned int* wcscpy(unsigned int* __dst, const unsigned int* __src);
unsigned long  int wcscspn(const unsigned int* __s, const unsigned int* __accept);
unsigned long  int wcsftime(unsigned int* __buf, unsigned long  int __n, const unsigned int* __fmt, const struct tm* __tm);
unsigned long  int wcslen(const unsigned int* __s);
int wcsncasecmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
int wcsncasecmp_l(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n, struct __locale_t* __l);
unsigned int* wcsncat(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
int wcsncmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
unsigned int* wcsncpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcsnrtombs(char* __dst, const unsigned int** __src, unsigned long  int __src_n, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned int* wcspbrk(const unsigned int* __s, const unsigned int* __accept);
unsigned int* wcsrchr(const unsigned int* __s, unsigned int __wc);
unsigned long  int wcsrtombs(char* __dst, const unsigned int** __src, unsigned long  int __dst_n, struct anonymous_typeX44* __ps);
unsigned long  int wcsspn(const unsigned int* __s, const unsigned int* __accept);
unsigned int* wcsstr(const unsigned int* __haystack, const unsigned int* __needle);
double wcstod(const unsigned int* __s, unsigned int** __end_ptr);
float wcstof(const unsigned int* __s, unsigned int** __end_ptr);
unsigned int* wcstok(unsigned int* __s, const unsigned int* __delimiter, unsigned int** __ptr);
long wcstol(const unsigned int* __s, unsigned int** __end_ptr, int __base);
long long wcstoll(const unsigned int* __s, unsigned int** __end_ptr, int __base);
long  double wcstold(const unsigned int* __s, unsigned int** __end_ptr);
unsigned long  int wcstoul(const unsigned int* __s, unsigned int** __end_ptr, int __base);
unsigned long  long wcstoull(const unsigned int* __s, unsigned int** __end_ptr, int __base);
int wcswidth(const unsigned int* __s, unsigned long  int __n);
unsigned long  int wcsxfrm(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
int wctob(unsigned int __wc);
int wcwidth(unsigned int __wc);
unsigned int* wmemchr(const unsigned int* __src, unsigned int __wc, unsigned long  int __n);
int wmemcmp(const unsigned int* __lhs, const unsigned int* __rhs, unsigned long  int __n);
unsigned int* wmemcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmempcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmemmove(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned int* wmemset(unsigned int* __dst, unsigned int __wc, unsigned long  int __n);
int wprintf(const unsigned int* __fmt, ...);
int wscanf(const unsigned int* __fmt, ...);
long long wcstoll_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);
unsigned long  long wcstoull_l(const unsigned int* __s, unsigned int** __end_ptr, int __base, struct __locale_t* __l);
long  double wcstold_l(const unsigned int* __s, unsigned int** __end_ptr, struct __locale_t* __l);
int wcscoll_l(const unsigned int* __lhs, const unsigned int* __rhs, struct __locale_t* __l);
unsigned long  int wcsxfrm_l(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n, struct __locale_t* __l);
unsigned long  int wcslcat(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
unsigned long  int wcslcpy(unsigned int* __dst, const unsigned int* __src, unsigned long  int __n);
struct __sFILE* open_wmemstream(unsigned int** __ptr, unsigned long  int* __size_ptr);
unsigned int* wcsdup(const unsigned int* __s);
unsigned long  int wcsnlen(const unsigned int* __s, unsigned long  int __n);
char* basename(const char* __path);
char* dirname(const char* __path);
unsigned int GC_get_version();
unsigned long  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX467)(unsigned long  int));
void* (*GC_get_oom_fn())(unsigned long  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX469)(unsigned long  int));
void (*GC_get_on_heap_resize())(unsigned long  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX471)(enum anonymous_typeY45));
void (*GC_get_on_collection_event())(enum anonymous_typeY45);
void GC_set_find_leak(int anonymous_var_nameX472);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX473);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX474);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX475);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX476)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX477);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX478);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long  int anonymous_var_nameX479);
unsigned long  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX480);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long  int anonymous_var_nameX481);
unsigned long  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long  int anonymous_var_nameX482);
unsigned long  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX483);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long  int anonymous_var_nameX484);
unsigned long  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX485);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long  int anonymous_var_nameX486);
unsigned long  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX487);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long  int anonymous_var_nameX488);
unsigned long  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX489);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX490);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX491);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX492);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long  int anonymous_var_nameX493);
void* GC_malloc_atomic(unsigned long  int anonymous_var_nameX494);
char* GC_strdup(const char* anonymous_var_nameX495);
char* GC_strndup(const char* anonymous_var_nameX496, unsigned long  int anonymous_var_nameX497);
void* GC_malloc_uncollectable(unsigned long  int anonymous_var_nameX498);
void* GC_malloc_stubborn(unsigned long  int anonymous_var_nameX499);
void* GC_memalign(unsigned long  int anonymous_var_nameX500, unsigned long  int anonymous_var_nameX501);
int GC_posix_memalign(void** anonymous_var_nameX502, unsigned long  int anonymous_var_nameX503, unsigned long  int anonymous_var_nameX504);
void GC_free(void* anonymous_var_nameX505);
void GC_change_stubborn(const void* anonymous_var_nameX506);
void GC_end_stubborn_change(const void* anonymous_var_nameX507);
void* GC_base(void* anonymous_var_nameX508);
int GC_is_heap_ptr(const void* anonymous_var_nameX509);
unsigned long  int GC_size(const void* anonymous_var_nameX510);
void* GC_realloc(void* anonymous_var_nameX511, unsigned long  int anonymous_var_nameX512);
int GC_expand_hp(unsigned long  int anonymous_var_nameX513);
void GC_set_max_heap_size(unsigned long  int anonymous_var_nameX514);
void GC_exclude_static_roots(void* anonymous_var_nameX515, void* anonymous_var_nameX516);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX517, void* anonymous_var_nameX518);
void GC_remove_roots(void* anonymous_var_nameX519, void* anonymous_var_nameX520);
void GC_register_displacement(unsigned long  int anonymous_var_nameX521);
void GC_debug_register_displacement(unsigned long  int anonymous_var_nameX522);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX523)());
void GC_set_stop_func(int (*anonymous_var_nameX524)());
int (*GC_get_stop_func())();
unsigned long  int GC_get_heap_size();
unsigned long  int GC_get_free_bytes();
unsigned long  int GC_get_unmapped_bytes();
unsigned long  int GC_get_bytes_since_gc();
unsigned long  int GC_get_expl_freed_bytes_since_gc();
unsigned long  int GC_get_total_bytes();
unsigned long  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long  int* anonymous_var_nameX525, unsigned long  int* anonymous_var_nameX526, unsigned long  int* anonymous_var_nameX527, unsigned long  int* anonymous_var_nameX528, unsigned long  int* anonymous_var_nameX529);
unsigned long  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX530, unsigned long  int anonymous_var_nameX531);
unsigned long  int GC_get_size_map_at(int i);
unsigned long  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX532);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX533);
void* GC_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX534);
void* GC_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX535);
void* GC_debug_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX536, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc(unsigned long  int anonymous_var_nameX537, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long  int anonymous_var_nameX538, unsigned long  int ra, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX539, unsigned long  int ra, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX540, unsigned long  int anonymous_var_nameX541, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long  int anonymous_var_nameX542, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long  int anonymous_var_nameX543, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX544, unsigned long  int ra, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX545, unsigned long  int ra, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX546);
void* GC_debug_realloc(void* anonymous_var_nameX547, unsigned long  int anonymous_var_nameX548, unsigned long  int ra, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX549);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX550);
void* GC_debug_malloc_replacement(unsigned long  int anonymous_var_nameX551);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX552, unsigned long  int anonymous_var_nameX553);
void GC_register_finalizer(void* anonymous_var_nameX556, void (*anonymous_var_nameX557)(void*,void*), void* anonymous_var_nameX558, void (*anonymous_var_nameX559)(void*,void*), void** anonymous_var_nameX560);
void GC_debug_register_finalizer(void* anonymous_var_nameX561, void (*anonymous_var_nameX562)(void*,void*), void* anonymous_var_nameX563, void (*anonymous_var_nameX564)(void*,void*), void** anonymous_var_nameX565);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX566, void (*anonymous_var_nameX567)(void*,void*), void* anonymous_var_nameX568, void (*anonymous_var_nameX569)(void*,void*), void** anonymous_var_nameX570);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX571, void (*anonymous_var_nameX572)(void*,void*), void* anonymous_var_nameX573, void (*anonymous_var_nameX574)(void*,void*), void** anonymous_var_nameX575);
void GC_register_finalizer_no_order(void* anonymous_var_nameX576, void (*anonymous_var_nameX577)(void*,void*), void* anonymous_var_nameX578, void (*anonymous_var_nameX579)(void*,void*), void** anonymous_var_nameX580);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX581, void (*anonymous_var_nameX582)(void*,void*), void* anonymous_var_nameX583, void (*anonymous_var_nameX584)(void*,void*), void** anonymous_var_nameX585);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX586, void (*anonymous_var_nameX587)(void*,void*), void* anonymous_var_nameX588, void (*anonymous_var_nameX589)(void*,void*), void** anonymous_var_nameX590);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX591, void (*anonymous_var_nameX592)(void*,void*), void* anonymous_var_nameX593, void (*anonymous_var_nameX594)(void*,void*), void** anonymous_var_nameX595);
int GC_register_disappearing_link(void** anonymous_var_nameX596);
int GC_general_register_disappearing_link(void** anonymous_var_nameX597, const void* anonymous_var_nameX598);
int GC_move_disappearing_link(void** anonymous_var_nameX599, void** anonymous_var_nameX600);
int GC_unregister_disappearing_link(void** anonymous_var_nameX601);
int GC_register_long_link(void** anonymous_var_nameX602, const void* anonymous_var_nameX603);
int GC_move_long_link(void** anonymous_var_nameX604, void** anonymous_var_nameX605);
int GC_unregister_long_link(void** anonymous_var_nameX606);
void GC_set_toggleref_func(enum anonymous_typeY46 (*anonymous_var_nameX608)(void*));
enum anonymous_typeY46 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX609, int anonymous_var_nameX610);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX612)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long  int anonymous_var_nameX613);
void GC_set_warn_proc(void (*anonymous_var_nameX616)(char*,unsigned long  int));
void (*GC_get_warn_proc())(char*,unsigned long  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX617, unsigned long  int anonymous_var_nameX618);
void GC_set_log_fd(int anonymous_var_nameX619);
void GC_set_abort_func(void (*anonymous_var_nameX621)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX623)(void*), void* anonymous_var_nameX624);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX627)(struct GC_stack_base*,void*), void* anonymous_var_nameX628);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX629)(void*), void* anonymous_var_nameX630);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX631)(void*), void* anonymous_var_nameX632);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX633);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX634);
void GC_set_stackbottom(void* anonymous_var_nameX635, const struct GC_stack_base* anonymous_var_nameX636);
void* GC_same_obj(void* anonymous_var_nameX637, void* anonymous_var_nameX638);
void* GC_pre_incr(void** anonymous_var_nameX639, long  int anonymous_var_nameX640);
void* GC_post_incr(void** anonymous_var_nameX641, long  int anonymous_var_nameX642);
void* GC_is_visible(void* anonymous_var_nameX643);
void* GC_is_valid_displacement(void* anonymous_var_nameX644);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX645);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX646, const void* anonymous_var_nameX647);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX648, const void* anonymous_var_nameX649);
void* GC_malloc_many(unsigned long  int anonymous_var_nameX670);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX674)(const char*,void*,unsigned long  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX675);
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
unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail);
unsigned int* __builtin_wstring(char* str);
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
char* wchar_tp_to_string(unsigned int* wstr);
unsigned int* charp_to_wstring(char* str);
int wchar_tp_length(unsigned int* str);
unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail);
int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value);
int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value);
unsigned int* wchar_tp_reverse(unsigned int* str);
unsigned int* wchar_tp_multiply(unsigned int* str, int n);
unsigned int* wchar_tp_printable(unsigned int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(unsigned int* left, unsigned int* right);
int wstring_compare(unsigned int* left, unsigned int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(unsigned int left, unsigned int right);
unsigned int* wchar_tp_operator_mult(unsigned int* str, int n);
unsigned int* wstring_operator_mult(unsigned int* str, int n);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right);
unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right);
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
unsigned int wchar_tp_get_hash_key(unsigned int* value);
_Bool wstring_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
unsigned int wchar_t_get_hash_key(unsigned int value);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
char* wchar_t_to_string(unsigned int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(unsigned int* wstr);
// uniq global variable
// source head3

// inline function
static inline int android_get_device_api_level(){
int api_level_1;
    char value_0[92]={0};
    if(    __system_property_get("ro.build.version.sdk",value_0)<1) {
        return -1;
    }
    api_level_1=atoi(value_0);
    return (((api_level_1>0))?(api_level_1):(-1));
}
static inline void __bionic_bcopy(const void* b1, void* b2, unsigned long  int len){
    __builtin_memmove(b2,b1,len);
}
static inline void __bionic_bzero(void* b, unsigned long  int len){
    __builtin_memset(b,0,len);
}
static inline int ffs(int __n){
    return __builtin_ffs(__n);
}
static inline int ffsl(long __n){
    return __builtin_ffsl(__n);
}
static inline int ffsll(long  long __n){
    return __builtin_ffsll(__n);
}
static inline char* ctermid(char* s){
    if(    s==0) {
        return (char*)"/dev/tty";
    }
    strcpy(s,"/dev/tty");
    return s;
}
static inline struct __sFILE* tmpfile(){
int p_2;
char* path_3;
int i_4;
unsigned int r_5;
int fd_6;
struct __sFILE* result_7;
path_3 = (void*)0;
memset(&i_4, 0, sizeof(int));
    p_2=getpid();
    for(    i_4=0;    i_4<100;    i_4++    ){
        r_5=arc4random();
        if(        asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1) {
            return ((void*)0);
        }
        fd_6=open(path_3,2|64|128|131072,384);
        if(        fd_6>=0) {
            result_7=fdopen(fd_6,"w+");
            unlink(path_3);
            free(path_3);
            return result_7;
        }
        free(path_3);
    }
    return ((void*)0);
}
static inline double strtod_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtod(__s,__end_ptr);
}
static inline float strtof_l(const char* __s, char** __end_ptr, struct __locale_t* __l){
    return strtof(__s,__end_ptr);
}
static inline long strtol_l(const char* __s, char** __end_ptr, int __base, struct __locale_t* __l){
    return strtol(__s,__end_ptr,__base);
}
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_8;
struct buffer* __result1__;
    result_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2392, "buffer"));
    buffer_append(result_8,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_8;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_9;
int i_10;
struct buffer* __result2__;
    result_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2399, "buffer"));
    for(    i_10=0;    i_10<len;    i_10++    ){
        buffer_append(result_9,self[i_10],strlen(self[i_10]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_9;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_11;
struct buffer* __result3__;
    result_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2408, "buffer"));
    buffer_append(result_11,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_11;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_12;
struct buffer* __result4__;
    result_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2415, "buffer"));
    buffer_append(result_12,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_12;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_13;
struct buffer* __result5__;
    result_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2422, "buffer"));
    buffer_append(result_13,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_13;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_14;
struct buffer* __result6__;
    result_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2429, "buffer"));
    buffer_append(result_14,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_14;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_15;
struct buffer* __result7__;
    result_15=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2436, "buffer"));
    buffer_append(result_15,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_15;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2736, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2746, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2751, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2756, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_16;
struct smart_pointer$1char* __result17__;
    buf_16=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2789, "buffer"));
    buffer_append(buf_16,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2791, "smart_pointer$1char"),buf_16);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_17;
struct smart_pointer$1charp* __result19__;
    buf_17=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2796, "buffer"));
    buffer_append(buf_17,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2798, "smart_pointer$1charp"),buf_17);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_18;
struct smart_pointer$1short* __result20__;
    buf_18=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2803, "buffer"));
    buffer_append(buf_18,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2805, "smart_pointer$1short"),buf_18);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_19;
struct smart_pointer$1int* __result21__;
    buf_19=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2810, "buffer"));
    buffer_append(buf_19,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2812, "smart_pointer$1int"),buf_19);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_20;
struct smart_pointer$1long* __result22__;
    buf_20=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2817, "buffer"));
    buffer_append(buf_20,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2819, "smart_pointer$1long"),buf_20);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_21;
struct smart_pointer$1float* __result24__;
    buf_21=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2824, "buffer"));
    buffer_append(buf_21,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2826, "smart_pointer$1float"),buf_21);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_22;
struct smart_pointer$1double* __result26__;
    buf_22=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2831, "buffer"));
    buffer_append(buf_22,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2833, "smart_pointer$1double"),buf_22);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2838, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2843, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2848, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2853, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2858, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2863, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2868, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2873, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2878, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2883, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2888, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2893, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2898, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2903, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_51;
int i_52;
    result_51=(_Bool)0;
    for(    i_52=0;    i_52<len;    i_52++    ){
        if(        strncmp(self[i_52],str,strlen(self[i_52]))==0) {
            result_51=(_Bool)1;
            break;
        }
    }
    return result_51;
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
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = wchar_tp_substring(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result65__;
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
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = charp_scan_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = charp_split_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = charp_strip(self);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = string_printable(str);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = charp_to_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = wchar_tp_to_string(wstr);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
unsigned int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = wchar_tp_delete(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline int wstring_index(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static inline int wstring_rindex(unsigned int* str, unsigned int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static inline unsigned int* wstring_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = wchar_tp_reverse(str);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
unsigned int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = wchar_tp_printable(str);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static inline unsigned int wstring_get_hash_key(unsigned int* value){
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
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = charp_replace(self,index,c);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = charp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = charp_sub(self,reg,replace);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = charp_sub_count(self,reg,replace,count);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = charp_split_str(self,str);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = charp_scan(self,reg);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = charp_split(self,reg);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    gComeFunResultObject = (void*)0;
    return __result87__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = charp_sub_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = string_chomp(str);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

// body function




















static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result8__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result8__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result11__;
    self->memory=value;
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result11__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result13__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result13__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result15__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result15__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result18__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result18__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result23__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result23__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result25__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result25__;
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1char_push_back(self,values[i_23]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_24;
struct list_item$1char* litem_25;
struct list_item$1char* litem_26;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_24=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 219, "list_item$1char");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 229, "list_item$1char");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 239, "list_item$1char");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1charp_push_back(self,values[i_27]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_28;
struct list_item$1charp* litem_29;
struct list_item$1charp* litem_30;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_28=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 219, "list_item$1charp");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 229, "list_item$1charp");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 239, "list_item$1charp");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1short_push_back(self,values[i_31]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_32;
struct list_item$1short* litem_33;
struct list_item$1short* litem_34;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_32=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 219, "list_item$1short");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 229, "list_item$1short");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 239, "list_item$1short");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1int_push_back(self,values[i_35]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_36;
struct list_item$1int* litem_37;
struct list_item$1int* litem_38;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_36=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 219, "list_item$1int");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 229, "list_item$1int");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 239, "list_item$1int");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_40;
struct list_item$1long* litem_41;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 219, "list_item$1long");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 229, "list_item$1long");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 239, "list_item$1long");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_43;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_43=0;    i_43<num_value;    i_43++    ){
        list$1float_push_back(self,values[i_43]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_44;
struct list_item$1float* litem_45;
struct list_item$1float* litem_46;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_44=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 219, "list_item$1float");
        litem_44->prev=((void*)0);
        litem_44->next=((void*)0);
        litem_44->item=item;
        self->tail=litem_44;
        self->head=litem_44;
    }
    else if(    self->len==1) {
        litem_45=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 229, "list_item$1float");
        litem_45->prev=self->head;
        litem_45->next=((void*)0);
        litem_45->item=item;
        self->tail=litem_45;
        self->head->next=litem_45;
    }
    else {
        litem_46=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 239, "list_item$1float");
        litem_46->prev=self->tail;
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail->next=litem_46;
        self->tail=litem_46;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_47;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_47=0;    i_47<num_value;    i_47++    ){
        list$1double_push_back(self,values[i_47]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_48;
struct list_item$1double* litem_49;
struct list_item$1double* litem_50;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_48=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 219, "list_item$1double");
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1) {
        litem_49=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 229, "list_item$1double");
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        litem_49->item=item;
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 239, "list_item$1double");
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        litem_50->item=item;
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1013, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result48__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1013, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1013, "short");
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1013, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1013, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result56__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1013, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result58__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1013, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}




















































void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_53;
    reg_53=obj;
    if(    reg_53&&reg_53->re) {
        free(reg_53->re);
    }
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_54;
int erro_ofs_55;
int options_56;
struct come_regex* __null_value1;
struct tuple2$2come_regexphcharph* __result93__;
struct tuple2$2come_regexphcharph* __result95__;
err_54 = (void*)0;
memset(&erro_ofs_55, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_56=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_56;
    self->re=pcre_compile(str,options_56,&err_54,&erro_ofs_55,((void*)0));
    if(    self->re==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 46, "struct tuple2$2come_regexphcharph"),__null_value1,xsprintf("regex error \%s",charp_to_string(str)));
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result95__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 53, "struct tuple2$2come_regexphvoidp"),self,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* __result92__;
    self->v1=v1;
    self->v2=v2;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphvoidp* __result94__;
    self->v1=v1;
    self->v2=v2;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
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
struct come_regex* come_exception_var_b1_57=0;
char* Err_58=0;
struct come_regex* __null_value2;
struct tuple2$2come_regexphcharph* __result96__;
struct tuple2$2come_regexphcharph* __result97__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b1_57=multiple_assign_var1->v1;
    Err_58=multiple_assign_var1->v2;
    if(    Err_58) {
        __result96__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphcharph"),__null_value2,Err_58);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    __result97__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphvoidp"),come_exception_var_b1_57,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result97__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_59=0;
char* Err_60=0;
struct come_regex* __null_value3;
struct tuple2$2come_regexphcharph* __result98__;
struct tuple2$2come_regexphcharph* __result99__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b2_59=multiple_assign_var2->v1;
    Err_60=multiple_assign_var2->v2;
    if(    Err_60) {
        __result98__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphcharph"),__null_value3,Err_60);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    __result99__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphvoidp"),come_exception_var_b2_59,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result100__;
struct come_regex* result_61;
const char* err_62;
int erro_ofs_63;
struct come_regex* __result101__;
err_62 = (void*)0;
memset(&erro_ofs_63, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_61=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_61->str=string_clone(reg->str);
    result_61->ignore_case=reg->ignore_case;
    result_61->multiline=reg->multiline;
    result_61->global=reg->global;
    result_61->extended=reg->extended;
    result_61->dotall=reg->dotall;
    result_61->anchored=reg->anchored;
    result_61->dollar_endonly=reg->dollar_endonly;
    result_61->ungreedy=reg->ungreedy;
    result_61->options=reg->options;
    result_61->re=pcre_compile(result_61->str,result_61->options,&err_62,&erro_ofs_63,((void*)0));
    if(    result_61->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_61->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_61,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result101__ = gComeFunResultObject = __result_obj__ = result_61;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
char* __result102__;
char* __result103__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    __result103__ = gComeFunResultObject = __result_obj__ = __builtin_string(reg->str);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_64;
int i_65;
char* __result104__;
    result_64=__builtin_string(str);
    for(    i_65=0;    i_65<strlen(str);    i_65++    ){
        if(        str[i_65]>=65&&str[i_65]<=90) {
            result_64[i_65]=str[i_65]-65+97;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_64;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_66;
int i_67;
char* __result105__;
    result_66=__builtin_string(str);
    for(    i_67=0;    i_67<strlen(str);    i_67++    ){
        if(        str[i_67]>=97&&str[i_67]<=122) {
            result_66[i_67]=str[i_67]-97+65;
        }
    }
    __result105__ = gComeFunResultObject = __result_obj__ = result_66;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
unsigned int* __result106__;
int len_68;
unsigned int* __result107__;
unsigned int* __result108__;
unsigned int* __result109__;
unsigned int* result_69;
unsigned int* __result110__;
    if(    str==((void*)0)) {
        __result106__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    len_68=wcslen(str);
    if(    head<0) {
        head+=len_68;
    }
    if(    tail<0) {
        tail+=len_68+1;
    }
    if(    head>tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_68) {
        tail=len_68;
    }
    if(    head==tail) {
        __result108__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(    tail-head+1<1) {
        __result109__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    result_69=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 185, "int");
    memcpy(result_69,str+head,sizeof(unsigned int)*(tail-head));
    result_69[tail-head]=0;
    __result110__ = gComeFunResultObject = __result_obj__ = result_69;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result111__;
int len_70;
unsigned int* wstr_71;
int ret_72;
unsigned int* __result112__;
    if(    str==((void*)0)) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    len_70=strlen(str);
    wstr_71=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_70+1)), "libcomelang-str-gc.c", 200, "int");
    ret_72=mbstowcs(wstr_71,str,len_70+1);
    wstr_71[ret_72]=0;
    if(    ret_72<0) {
        wstr_71[0]=0;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = wstr_71;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_73;
int len_74;
int i_75;
int len2_76;
int j_77;
memset(&j_77, 0, sizeof(int));
    n_73=0;
    len_74=strlen(str);
    for(    i_75=0;    i_75<len_74;    i_75++    ){
        len2_76=strlen(search_str);
        for(        j_77=0;        j_77<len2_76;        j_77++        ){
            if(            str[i_75+j_77]!=search_str[j_77]) {
                break;
            }
        }
        if(        j_77==len2_76) {
            n_73++;
            if(            n_73==count) {
                return i_75;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_78;
int result_82;
int offset_83;
const char* err_84;
int erro_ofs_85;
int options_86;
char* str_87;
struct real_pcre8_or_16* re_88;
int n_89;
int options_90;
int len_91;
int regex_result_92;
int i_93;
int i_94;
err_84 = (void*)0;
memset(&erro_ofs_85, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_78=16;
    int start_79[ovec_max_78];
    memset(&start_79, 0, sizeof(int)    *(ovec_max_78)    );
    int end_80[ovec_max_78];
    memset(&end_80, 0, sizeof(int)    *(ovec_max_78)    );
    int ovec_value_81[ovec_max_78*3];
    memset(&ovec_value_81, 0, sizeof(int)    *(ovec_max_78*3)    );
    result_82=default_value;
    offset_83=0;
    options_86=reg->options;
    str_87=reg->str;
    re_88=reg->re;
    n_89=0;
    while((_Bool)1) {
        options_90=2097152;
        len_91=strlen(self);
        regex_result_92=pcre_exec(re_88,(struct pcre_extra*)0,self,len_91,offset_83,options_90,ovec_value_81,ovec_max_78*3);
        for(        i_93=0;        i_93<ovec_max_78;        i_93++        ){
            start_79[i_93]=ovec_value_81[i_93*2];
        }
        for(        i_94=0;        i_94<ovec_max_78;        i_94++        ){
            end_80[i_94]=ovec_value_81[i_94*2+1];
        }
        if(        regex_result_92>0) {
            n_89++;
            if(            offset_83==end_80[0]) {
                offset_83++;
            }
            else {
                offset_83=end_80[0];
            }
            if(            n_89==count) {
                result_82=start_79[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_82;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_95;
char* p_96;
    len_95=strlen(search_str);
    p_96=str+strlen(str)-len_95;
    while(p_96>=str) {
        if(        strncmp(p_96,search_str,len_95)==0) {
            return p_96-str;
        }
        p_96--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_97;
int erro_ofs_98;
int options_99;
char* str_100;
struct real_pcre8_or_16* re_101;
char* self2_102;
int ovec_max_103;
int result_107;
int offset_108;
int options_109;
int len_110;
int regex_result_111;
int i_112;
int i_113;
err_97 = (void*)0;
memset(&erro_ofs_98, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_99=reg->options;
    str_100=reg->str;
    re_101=reg->re;
    self2_102=charp_reverse(self);
    ovec_max_103=16;
    int start_104[ovec_max_103];
    memset(&start_104, 0, sizeof(int)    *(ovec_max_103)    );
    int end_105[ovec_max_103];
    memset(&end_105, 0, sizeof(int)    *(ovec_max_103)    );
    int ovec_value_106[ovec_max_103*3];
    memset(&ovec_value_106, 0, sizeof(int)    *(ovec_max_103*3)    );
    result_107=default_value;
    offset_108=0;
    while((_Bool)1) {
        options_109=2097152;
        len_110=strlen(self2_102);
        regex_result_111=pcre_exec(re_101,(struct pcre_extra*)0,self2_102,len_110,offset_108,options_109,ovec_value_106,ovec_max_103*3);
        for(        i_112=0;        i_112<ovec_max_103;        i_112++        ){
            start_104[i_112]=ovec_value_106[i_112*2];
        }
        for(        i_113=0;        i_113<ovec_max_103;        i_113++        ){
            end_105[i_113]=ovec_value_106[i_113*2+1];
        }
        if(        regex_result_111==1||regex_result_111>0) {
            result_107=strlen(self)-1-start_104[0];
            break;
        }
        {
            break;
        }
    }
    return result_107;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_114;
char* p_115;
int n_116;
    len_114=strlen(search_str);
    p_115=str+strlen(str)-len_114;
    n_116=0;
    while(p_115>=str) {
        if(        strncmp(p_115,search_str,len_114)==0) {
            n_116++;
            if(            n_116==count) {
                return p_115-str;
            }
        }
        p_115--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result114__;
struct list$1charph* result_117;
int offset_118;
int ovec_max_119;
const char* err_123;
int erro_ofs_124;
int options_125;
char* str_126;
struct real_pcre8_or_16* re_127;
int options_128;
int len_129;
int regex_result_130;
int i_131;
int i_132;
char* str_133;
struct list$1charph* group_strings_134;
char* str2_135;
char* str_139;
struct list$1charph* group_strings_140;
int i_141;
char* match_string_142;
char* str2_143;
struct list$1charph* __result116__;
err_123 = (void*)0;
memset(&erro_ofs_124, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result114__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 395, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    result_117=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 398, "list$1charph"));
    offset_118=0;
    ovec_max_119=16;
    int start_120[ovec_max_119];
    memset(&start_120, 0, sizeof(int)    *(ovec_max_119)    );
    int end_121[ovec_max_119];
    memset(&end_121, 0, sizeof(int)    *(ovec_max_119)    );
    int ovec_value_122[ovec_max_119*3];
    memset(&ovec_value_122, 0, sizeof(int)    *(ovec_max_119*3)    );
    options_125=reg->options;
    str_126=reg->str;
    re_127=reg->re;
    while((_Bool)1) {
        options_128=2097152;
        len_129=strlen(self);
        regex_result_130=pcre_exec(re_127,(struct pcre_extra*)0,self,len_129,offset_118,options_128,ovec_value_122,ovec_max_119*3);
        for(        i_131=0;        i_131<ovec_max_119;        i_131++        ){
            start_120[i_131]=ovec_value_122[i_131*2];
        }
        for(        i_132=0;        i_132<ovec_max_119;        i_132++        ){
            end_121[i_132]=ovec_value_122[i_132*2+1];
        }
        if(        regex_result_130==1) {
            str_133=charp_substring(self,start_120[0],end_121[0]);
            group_strings_134=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 432, "list$1charph"));
            str2_135=block(parent,str_133,group_strings_134);
            list$1charph_push_back(result_117,str2_135);
            if(            offset_118==end_121[0]) {
                offset_118++;
            }
            else {
                offset_118=end_121[0];
            }
        }
        else if(        regex_result_130>1) {
            str_139=charp_substring(self,start_120[0],end_121[0]);
            group_strings_140=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 449, "list$1charph"));
            for(            i_141=1;            i_141<regex_result_130;            i_141++            ){
                match_string_142=charp_substring(self,start_120[i_141],end_121[i_141]);
                list$1charph_push_back(group_strings_140,match_string_142);
            }
            str2_143=block(parent,str_139,group_strings_140);
            list$1charph_push_back(result_117,str2_143);
            if(            offset_118==end_121[0]) {
                offset_118++;
            }
            else {
                offset_118=end_121[0];
            }
        }
        else {
            break;
        }
    }
    __result116__ = gComeFunResultObject = __result_obj__ = result_117;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_136;
struct list_item$1charph* litem_137;
struct list_item$1charph* litem_138;
struct list$1charph* __result115__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 219, "list_item$1charph");
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 229, "list_item$1charph");
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 239, "list_item$1charph");
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result117__;
struct list$1charph* result_144;
int offset_145;
int ovec_max_146;
const char* err_150;
int erro_ofs_151;
int options_152;
char* str_153;
struct real_pcre8_or_16* re_154;
int n_155;
int options_156;
int len_157;
int regex_result_158;
int i_159;
int i_160;
char* str_161;
struct list$1charph* group_strings_162;
char* str2_163;
char* str_164;
struct list$1charph* group_strings_165;
int i_166;
char* match_string_167;
char* str2_168;
struct list$1charph* __result118__;
err_150 = (void*)0;
memset(&erro_ofs_151, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result117__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 480, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    result_144=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 483, "list$1charph"));
    offset_145=0;
    ovec_max_146=16;
    int start_147[ovec_max_146];
    memset(&start_147, 0, sizeof(int)    *(ovec_max_146)    );
    int end_148[ovec_max_146];
    memset(&end_148, 0, sizeof(int)    *(ovec_max_146)    );
    int ovec_value_149[ovec_max_146*3];
    memset(&ovec_value_149, 0, sizeof(int)    *(ovec_max_146*3)    );
    options_152=reg->options;
    str_153=reg->str;
    re_154=reg->re;
    n_155=0;
    while((_Bool)1) {
        options_156=2097152;
        len_157=strlen(self);
        regex_result_158=pcre_exec(re_154,(struct pcre_extra*)0,self,len_157,offset_145,options_156,ovec_value_149,ovec_max_146*3);
        for(        i_159=0;        i_159<ovec_max_146;        i_159++        ){
            start_147[i_159]=ovec_value_149[i_159*2];
        }
        for(        i_160=0;        i_160<ovec_max_146;        i_160++        ){
            end_148[i_160]=ovec_value_149[i_160*2+1];
        }
        if(        regex_result_158==1) {
            str_161=charp_substring(self,start_147[0],end_148[0]);
            group_strings_162=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 519, "list$1charph"));
            str2_163=block(parent,str_161,group_strings_162);
            list$1charph_push_back(result_144,str2_163);
            if(            offset_145==end_148[0]) {
                offset_145++;
            }
            else {
                offset_145=end_148[0];
            }
            n_155++;
            if(            n_155==count) {
                break;
            }
        }
        else if(        regex_result_158>1) {
            str_164=charp_substring(self,start_147[0],end_148[0]);
            group_strings_165=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 541, "list$1charph"));
            for(            i_166=1;            i_166<regex_result_158;            i_166++            ){
                match_string_167=charp_substring(self,start_147[i_166],end_148[i_166]);
                list$1charph_push_back(group_strings_165,match_string_167);
            }
            str2_168=block(parent,str_164,group_strings_165);
            list$1charph_push_back(result_144,str2_168);
            if(            offset_145==end_148[0]) {
                offset_145++;
            }
            else {
                offset_145=end_148[0];
            }
            n_155++;
            if(            n_155==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_144;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result119__;
const char* err_169;
int erro_ofs_170;
int options_171;
char* str_172;
struct real_pcre8_or_16* re_173;
struct list$1charph* result_174;
int offset_175;
int ovec_max_176;
int options_180;
int len_181;
int regex_result_182;
int i_183;
int i_184;
char* str_185;
struct list$1charph* match_strings_186;
char* str2_187;
char* str_188;
struct list$1charph* match_strings_189;
int i_190;
char* match_str_191;
char* str2_192;
char* str_193;
struct list$1charph* match_strings_194;
char* str2_195;
struct list$1charph* __result120__;
err_169 = (void*)0;
memset(&erro_ofs_170, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result119__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 576, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    options_171=reg->options;
    str_172=reg->str;
    re_173=reg->re;
    result_174=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 586, "list$1charph"));
    offset_175=0;
    ovec_max_176=16;
    int start_177[ovec_max_176];
    memset(&start_177, 0, sizeof(int)    *(ovec_max_176)    );
    int end_178[ovec_max_176];
    memset(&end_178, 0, sizeof(int)    *(ovec_max_176)    );
    int ovec_value_179[ovec_max_176*3];
    memset(&ovec_value_179, 0, sizeof(int)    *(ovec_max_176*3)    );
    while((_Bool)1) {
        options_180=2097152;
        len_181=strlen(self);
        regex_result_182=pcre_exec(re_173,(struct pcre_extra*)0,self,len_181,offset_175,options_180,ovec_value_179,ovec_max_176*3);
        for(        i_183=0;        i_183<ovec_max_176;        i_183++        ){
            start_177[i_183]=ovec_value_179[i_183*2];
        }
        for(        i_184=0;        i_184<ovec_max_176;        i_184++        ){
            end_178[i_184]=ovec_value_179[i_184*2+1];
        }
        if(        regex_result_182==1) {
            str_185=charp_substring(self,offset_175,start_177[0]);
            match_strings_186=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            str2_187=block(parent,str_185,match_strings_186);
            list$1charph_push_back(result_174,str2_187);
            if(            offset_175==end_178[0]) {
                offset_175++;
            }
            else {
                offset_175=end_178[0];
            }
        }
        else if(        regex_result_182>1) {
            str_188=charp_substring(self,offset_175,start_177[0]);
            if(            offset_175==end_178[0]) {
                offset_175++;
            }
            else {
                offset_175=end_178[0];
            }
            match_strings_189=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 636, "list$1charph"));
            for(            i_190=1;            i_190<regex_result_182;            i_190++            ){
                match_str_191=charp_substring(self,start_177[i_190],end_178[i_190]);
                list$1charph_push_back(match_strings_189,match_str_191);
            }
            str2_192=block(parent,str_188,match_strings_189);
            list$1charph_push_back(result_174,str2_192);
        }
        else {
            break;
        }
    }
    if(    offset_175<charp_length(self)) {
        str_193=charp_substring(self,offset_175,-1);
        match_strings_194=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 655, "list$1charph"));
        str2_195=block(parent,str_193,match_strings_194);
        list$1charph_push_back(result_174,str2_195);
    }
    __result120__ = gComeFunResultObject = __result_obj__ = result_174;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result121__;
const char* err_196;
int erro_ofs_197;
int options_198;
char* str_199;
struct real_pcre8_or_16* re_200;
struct list$1charph* result_201;
int offset_202;
int ovec_max_203;
int n_207;
int options_208;
int len_209;
int regex_result_210;
int i_211;
int i_212;
char* str_213;
struct list$1charph* match_strings_214;
char* str2_215;
char* str_216;
struct list$1charph* match_strings_217;
int i_218;
char* match_str_219;
char* str2_220;
struct list$1charph* __result122__;
err_196 = (void*)0;
memset(&erro_ofs_197, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 666, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    options_198=reg->options;
    str_199=reg->str;
    re_200=reg->re;
    result_201=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 676, "list$1charph"));
    offset_202=0;
    ovec_max_203=16;
    int start_204[ovec_max_203];
    memset(&start_204, 0, sizeof(int)    *(ovec_max_203)    );
    int end_205[ovec_max_203];
    memset(&end_205, 0, sizeof(int)    *(ovec_max_203)    );
    int ovec_value_206[ovec_max_203*3];
    memset(&ovec_value_206, 0, sizeof(int)    *(ovec_max_203*3)    );
    n_207=0;
    while((_Bool)1) {
        options_208=2097152;
        len_209=strlen(self);
        regex_result_210=pcre_exec(re_200,(struct pcre_extra*)0,self,len_209,offset_202,options_208,ovec_value_206,ovec_max_203*3);
        for(        i_211=0;        i_211<ovec_max_203;        i_211++        ){
            start_204[i_211]=ovec_value_206[i_211*2];
        }
        for(        i_212=0;        i_212<ovec_max_203;        i_212++        ){
            end_205[i_212]=ovec_value_206[i_212*2+1];
        }
        if(        regex_result_210==1) {
            str_213=charp_substring(self,offset_202,start_204[0]);
            match_strings_214=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 705, "list$1charph"));
            str2_215=block(parent,str_213,match_strings_214);
            list$1charph_push_back(result_201,str2_215);
            if(            offset_202==end_205[0]) {
                offset_202++;
            }
            else {
                offset_202=end_205[0];
            }
        }
        else if(        regex_result_210>1) {
            str_216=charp_substring(self,offset_202,start_204[0]);
            if(            offset_202==end_205[0]) {
                offset_202++;
            }
            else {
                offset_202=end_205[0];
            }
            match_strings_217=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 728, "list$1charph"));
            for(            i_218=1;            i_218<regex_result_210;            i_218++            ){
                match_str_219=charp_substring(self,start_204[i_218],end_205[i_218]);
                list$1charph_push_back(match_strings_217,match_str_219);
            }
            str2_220=block(parent,str_216,match_strings_217);
            list$1charph_push_back(result_201,str2_220);
        }
        else {
            break;
        }
        n_207++;
        if(        n_207==count) {
            break;
        }
    }
    __result122__ = gComeFunResultObject = __result_obj__ = result_201;
    gComeFunResultObject = (void*)0;
    return __result122__;
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
struct list$1charph* __result123__;
struct list$1charph* result_221;
int offset_222;
int ovec_max_223;
const char* err_227;
int erro_ofs_228;
int options_229;
char* str_230;
struct real_pcre8_or_16* re_231;
int options_232;
int len_233;
int regex_result_234;
int i_235;
int i_236;
char* str_237;
char* str_238;
int i_239;
char* match_string_240;
struct list$1charph* __result124__;
err_227 = (void*)0;
memset(&erro_ofs_228, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result123__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 796, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    result_221=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 799, "list$1charph"));
    offset_222=0;
    ovec_max_223=16;
    int start_224[ovec_max_223];
    memset(&start_224, 0, sizeof(int)    *(ovec_max_223)    );
    int end_225[ovec_max_223];
    memset(&end_225, 0, sizeof(int)    *(ovec_max_223)    );
    int ovec_value_226[ovec_max_223*3];
    memset(&ovec_value_226, 0, sizeof(int)    *(ovec_max_223*3)    );
    options_229=reg->options;
    str_230=reg->str;
    re_231=reg->re;
    while((_Bool)1) {
        options_232=2097152;
        len_233=strlen(self);
        regex_result_234=pcre_exec(re_231,(struct pcre_extra*)0,self,len_233,offset_222,options_232,ovec_value_226,ovec_max_223*3);
        for(        i_235=0;        i_235<ovec_max_223;        i_235++        ){
            start_224[i_235]=ovec_value_226[i_235*2];
        }
        for(        i_236=0;        i_236<ovec_max_223;        i_236++        ){
            end_225[i_236]=ovec_value_226[i_236*2+1];
        }
        if(        regex_result_234==1) {
            str_237=charp_substring(self,start_224[0],end_225[0]);
            list$1charph_push_back(result_221,str_237);
            if(            offset_222==end_225[0]) {
                offset_222++;
            }
            else {
                offset_222=end_225[0];
            }
        }
        else if(        regex_result_234>1) {
            str_238=charp_substring(self,start_224[0],end_225[0]);
            list$1charph_push_back(result_221,str_238);
            if(            offset_222==end_225[0]) {
                offset_222++;
            }
            else {
                offset_222=end_225[0];
            }
            *num_group_string_in_regex=regex_result_234-1;
            for(            i_239=1;            i_239<regex_result_234;            i_239++            ){
                match_string_240=charp_substring(self,start_224[i_239],end_225[i_239]);
                list$1charph_push_back(group_strings,match_string_240);
            }
        }
        else {
            break;
        }
    }
    __result124__ = gComeFunResultObject = __result_obj__ = result_221;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_241;
int len_242;
char* __result125__;
    result_241=__builtin_string(self);
    len_242=strlen(self);
    if(    self[len_242-1]==10) {
        result_241[len_242-1]=0;
    }
    else if(    self[len_242-1]==13) {
        result_241[len_242-1]=0;
    }
    else if(    len_242>2&&self[len_242-2]==13&&self[len_242-1]==10) {
        result_241[len_242-2]=0;
    }
    __result125__ = gComeFunResultObject = __result_obj__ = result_241;
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_243;
char* result_244;
int n_245;
int i_246;
char c_247;
char* __result126__;
    len_243=charp_length(str);
    result_244=(char*)come_calloc(1, sizeof(char)*(1*(len_243*2+1)), "libcomelang-str-gc.c", 893, "char");
    n_245=0;
    for(    i_246=0;    i_246<len_243;    i_246++    ){
        c_247=str[i_246];
        if(        (c_247>=0&&c_247<32)||c_247==127) {
            result_244[n_245++]=94;
            result_244[n_245++]=c_247+65-1;
        }
        else {
            result_244[n_245++]=c_247;
        }
    }
    result_244[n_245]=0;
    __result126__ = gComeFunResultObject = __result_obj__ = result_244;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_248;
char* result_249;
char* __result127__;
    len_248=4*(wcslen(wstr)+1);
    result_249=(char*)come_calloc(1, sizeof(char)*(1*(len_248)), "libcomelang-str-gc.c", 919, "char");
    if(    wcstombs(result_249,wstr,len_248)<0) {
        strncpy(result_249,"",len_248);
    }
    __result127__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result128__;
    __result128__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_250;
unsigned int* __result129__;
unsigned int* __result130__;
unsigned int* sub_str_251;
unsigned int* __result131__;
    len_250=wcslen(str);
    if(    len_250==0) {
        __result129__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    if(    head<0) {
        head+=len_250;
    }
    if(    tail<0) {
        tail+=len_250+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result130__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    tail>=len_250) {
        tail=len_250;
    }
    sub_str_251=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_251,sizeof(unsigned int)*(wstring_length(sub_str_251)+1));
    __result131__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result131__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_252;
    head_252=wcsstr(str,search_str);
    if(    head_252==((void*)0)) {
        return default_value;
    }
    return head_252-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_253;
unsigned int* p_254;
int len2_255;
_Bool result_256;
int i_257;
memset(&i_257, 0, sizeof(int));
    len_253=wcslen(search_str);
    p_254=str+wcslen(str)-len_253;
    while(p_254>=str) {
        len2_255=wcslen(p_254);
        result_256=(_Bool)1;
        for(        i_257=0;        i_257<len_253&&i_257<len2_255;        i_257++        ){
            if(            p_254[i_257]!=search_str[i_257]) {
                result_256=(_Bool)0;
            }
        }
        if(        result_256) {
            return (p_254-str);
        }
        p_254--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_258;
unsigned int* result_259;
int i_260;
unsigned int* __result132__;
    len_258=wcslen(str);
    result_259=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_258+1)), "libcomelang-str-gc.c", 1019, "int");
    for(    i_260=0;    i_260<len_258;    i_260++    ){
        result_259[i_260]=str[len_258-i_260-1];
    }
    result_259[len_258]=0;
    __result132__ = gComeFunResultObject = __result_obj__ = result_259;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_261;
unsigned int* result_262;
int i_263;
unsigned int* __result133__;
    len_261=wcslen(str)*n+1;
    result_262=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_261)), "libcomelang-str-gc.c", 1034, "int");
    result_262[0]=0;
    for(    i_263=0;    i_263<n;    i_263++    ){
        wcscat(result_262,str);
    }
    __result133__ = gComeFunResultObject = __result_obj__ = result_262;
    gComeFunResultObject = (void*)0;
    return __result133__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_264;
unsigned int* result_265;
int n_266;
int i_267;
unsigned int c_268;
unsigned int* __result134__;
    len_264=wchar_tp_length(str);
    result_265=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_264*2+1)), "libcomelang-str-gc.c", 1048, "int");
    n_266=0;
    for(    i_267=0;    i_267<len_264;    i_267++    ){
        c_268=str[i_267];
        if(        (c_268>=0&&c_268<32)||c_268==127) {
            result_265[n_266++]=94;
            result_265[n_266++]=c_268+65-1;
        }
        else {
            result_265[n_266++]=c_268;
        }
    }
    result_265[n_266]=0;
    __result134__ = gComeFunResultObject = __result_obj__ = result_265;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_269;
int ovec_max_270;
const char* err_274;
int erro_ofs_275;
int options_276;
char* str_277;
struct real_pcre8_or_16* re_278;
int n_279;
int options_280;
int len_281;
int regex_result_282;
int i_283;
int i_284;
int i_287;
char* match_string_288;
err_274 = (void*)0;
memset(&erro_ofs_275, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_269=0;
    ovec_max_270=16;
    int start_271[ovec_max_270];
    memset(&start_271, 0, sizeof(int)    *(ovec_max_270)    );
    int end_272[ovec_max_270];
    memset(&end_272, 0, sizeof(int)    *(ovec_max_270)    );
    int ovec_value_273[ovec_max_270*3];
    memset(&ovec_value_273, 0, sizeof(int)    *(ovec_max_270*3)    );
    options_276=reg->options;
    str_277=reg->str;
    re_278=reg->re;
    n_279=0;
    while((_Bool)1) {
        options_280=2097152;
        len_281=strlen(self);
        regex_result_282=pcre_exec(re_278,(struct pcre_extra*)0,self,len_281,offset_269,options_280,ovec_value_273,ovec_max_270*3);
        for(        i_283=0;        i_283<ovec_max_270;        i_283++        ){
            start_271[i_283]=ovec_value_273[i_283*2];
        }
        for(        i_284=0;        i_284<ovec_max_270;        i_284++        ){
            end_272[i_284]=ovec_value_273[i_284*2+1];
        }
        if(        regex_result_282==1||(group_strings==((void*)0)&&regex_result_282>0)) {
            n_279++;
            if(            n_279==count) {
                return (_Bool)1;
            }
            if(            offset_269==end_272[0]) {
                offset_269++;
            }
            else {
                offset_269=end_272[0];
            }
        }
        else if(        regex_result_282>1) {
            n_279++;
            list$1charph_reset(group_strings);
            for(            i_287=1;            i_287<regex_result_282;            i_287++            ){
                match_string_288=charp_substring(self,start_271[i_287],end_272[i_287]);
                list$1charph_push_back(group_strings,match_string_288);
            }
            if(            n_279==count) {
                return (_Bool)1;
            }
            if(            offset_269==end_272[0]) {
                offset_269++;
            }
            else {
                offset_269=end_272[0];
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
struct list_item$1charph* it_285;
struct list_item$1charph* prev_it_286;
struct list$1charph* __result135__;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result135__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

int wchar_tp_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

int wstring_compare(unsigned int* left, unsigned int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return 0;
    }
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(unsigned int left, unsigned int right){
    return left==right;
}

unsigned int* wchar_tp_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result136__;
    __result136__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
unsigned int* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

unsigned int* wchar_tp_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_289;
unsigned int* __result138__;
    result_289=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1219, "int");
    wcscpy(result_289,left);
    wcscat(result_289,right);
    __result138__ = gComeFunResultObject = __result_obj__ = result_289;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
unsigned int* result_290;
unsigned int* __result139__;
    result_290=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1229, "int");
    wcscpy(result_290,left);
    wcscat(result_290,right);
    __result139__ = gComeFunResultObject = __result_obj__ = result_290;
    gComeFunResultObject = (void*)0;
    return __result139__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_291;
    head_291=strstr(str,search_str);
    if(    head_291==((void*)0)) {
        return default_value;
    }
    return head_291-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_292;
int result_296;
int offset_297;
const char* err_298;
int erro_ofs_299;
int options_300;
char* str_301;
struct real_pcre8_or_16* re_302;
int options_303;
int len_304;
int regex_result_305;
int i_306;
int i_307;
err_298 = (void*)0;
memset(&erro_ofs_299, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_292=16;
    int start_293[ovec_max_292];
    memset(&start_293, 0, sizeof(int)    *(ovec_max_292)    );
    int end_294[ovec_max_292];
    memset(&end_294, 0, sizeof(int)    *(ovec_max_292)    );
    int ovec_value_295[ovec_max_292*3];
    memset(&ovec_value_295, 0, sizeof(int)    *(ovec_max_292*3)    );
    result_296=default_value;
    offset_297=0;
    options_300=reg->options;
    str_301=reg->str;
    re_302=reg->re;
    while((_Bool)1) {
        options_303=2097152;
        len_304=strlen(self);
        regex_result_305=pcre_exec(re_302,(struct pcre_extra*)0,self,len_304,offset_297,options_303,ovec_value_295,ovec_max_292*3);
        for(        i_306=0;        i_306<ovec_max_292;        i_306++        ){
            start_293[i_306]=ovec_value_295[i_306*2];
        }
        for(        i_307=0;        i_307<ovec_max_292;        i_307++        ){
            end_294[i_307]=ovec_value_295[i_307*2+1];
        }
        if(        regex_result_305==1||regex_result_305>0) {
            result_296=start_293[0];
            break;
        }
        {
            break;
        }
    }
    return result_296;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_308;
char* __result140__;
char* __result141__;
    len_308=strlen(self);
    if(    strcmp(self,"")==0) {
        __result140__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    if(    index<0) {
        index+=len_308;
    }
    if(    index>=len_308) {
        index=len_308-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result141__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_309;
char* result_310;
int i_311;
char* __result142__;
    len_309=strlen(str)*n+1;
    result_310=(char*)come_calloc(1, sizeof(char)*(1*(len_309)), "libcomelang-str-gc.c", 1330, "char");
    result_310[0]=0;
    for(    i_311=0;    i_311<n;    i_311++    ){
        strcat(result_310,str);
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result143__;
int offset_312;
int ovec_max_313;
const char* err_317;
int erro_ofs_318;
int options_319;
char* str_320;
struct real_pcre8_or_16* re_321;
struct buffer* result_322;
int options_323;
int len_324;
int regex_result_325;
int i_326;
int i_327;
char* str_328;
char* str_329;
char* str_330;
char* __result144__;
err_317 = (void*)0;
memset(&erro_ofs_318, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result143__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    offset_312=0;
    ovec_max_313=16;
    int start_314[ovec_max_313];
    memset(&start_314, 0, sizeof(int)    *(ovec_max_313)    );
    int end_315[ovec_max_313];
    memset(&end_315, 0, sizeof(int)    *(ovec_max_313)    );
    int ovec_value_316[ovec_max_313*3];
    memset(&ovec_value_316, 0, sizeof(int)    *(ovec_max_313*3)    );
    options_319=reg->options;
    str_320=reg->str;
    re_321=reg->re;
    result_322=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1361, "buffer"));
    while((_Bool)1) {
        options_323=2097152;
        len_324=strlen(self);
        regex_result_325=pcre_exec(re_321,(struct pcre_extra*)0,self,len_324,offset_312,options_323,ovec_value_316,ovec_max_313*3);
        for(        i_326=0;        i_326<ovec_max_313;        i_326++        ){
            start_314[i_326]=ovec_value_316[i_326*2];
        }
        for(        i_327=0;        i_327<ovec_max_313;        i_327++        ){
            end_315[i_327]=ovec_value_316[i_327*2+1];
        }
        if(        regex_result_325==1) {
            str_328=charp_substring(self,offset_312,start_314[0]);
            buffer_append_str(result_322,str_328);
            buffer_append_str(result_322,replace);
            if(            offset_312==end_315[0]) {
                offset_312++;
            }
            else {
                offset_312=end_315[0];
            }
            if(            !reg->global) {
                str_329=charp_substring(self,offset_312,-1);
                buffer_append_str(result_322,str_329);
                break;
            }
        }
        else {
            str_330=charp_substring(self,offset_312,-1);
            buffer_append_str(result_322,str_330);
            break;
        }
    }
    __result144__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_322);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result145__;
int offset_331;
int ovec_max_332;
const char* err_336;
int erro_ofs_337;
int options_338;
char* str_339;
struct real_pcre8_or_16* re_340;
struct buffer* result_341;
int n_342;
int options_343;
int len_344;
int regex_result_345;
int i_346;
int i_347;
char* str_348;
char* str_349;
char* str_350;
char* str_351;
char* __result146__;
err_336 = (void*)0;
memset(&erro_ofs_337, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result145__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    offset_331=0;
    ovec_max_332=16;
    int start_333[ovec_max_332];
    memset(&start_333, 0, sizeof(int)    *(ovec_max_332)    );
    int end_334[ovec_max_332];
    memset(&end_334, 0, sizeof(int)    *(ovec_max_332)    );
    int ovec_value_335[ovec_max_332*3];
    memset(&ovec_value_335, 0, sizeof(int)    *(ovec_max_332*3)    );
    options_338=reg->options;
    str_339=reg->str;
    re_340=reg->re;
    result_341=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1427, "buffer"));
    n_342=0;
    while((_Bool)1) {
        options_343=2097152;
        len_344=strlen(self);
        regex_result_345=pcre_exec(re_340,(struct pcre_extra*)0,self,len_344,offset_331,options_343,ovec_value_335,ovec_max_332*3);
        for(        i_346=0;        i_346<ovec_max_332;        i_346++        ){
            start_333[i_346]=ovec_value_335[i_346*2];
        }
        for(        i_347=0;        i_347<ovec_max_332;        i_347++        ){
            end_334[i_347]=ovec_value_335[i_347*2+1];
        }
        if(        regex_result_345==1) {
            n_342++;
            str_348=charp_substring(self,offset_331,start_333[0]);
            buffer_append_str(result_341,str_348);
            buffer_append_str(result_341,replace);
            if(            offset_331==end_334[0]) {
                offset_331++;
            }
            else {
                offset_331=end_334[0];
            }
            if(            !reg->global) {
                str_349=charp_substring(self,offset_331,-1);
                buffer_append_str(result_341,str_349);
                break;
            }
            if(            n_342==count) {
                str_350=charp_substring(self,offset_331,-1);
                buffer_append_str(result_341,str_350);
                break;
            }
        }
        else {
            str_351=charp_substring(self,offset_331,-1);
            buffer_append_str(result_341,str_351);
            break;
        }
    }
    __result146__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_341);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_352;
struct buffer* buf_353;
int i_354;
struct list$1charph* __result147__;
    result_352=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1486, "list$1charph"));
    buf_353=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1488, "buffer"));
    for(    i_354=0;    i_354<charp_length(self);    i_354++    ){
        if(        strstr(self+i_354,str)==self+i_354) {
            list$1charph_push_back(result_352,__builtin_string(buf_353->buf));
            buffer_reset(buf_353);
            i_354+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_353,self[i_354]);
        }
    }
    if(    buffer_length(buf_353)!=0) {
        list$1charph_push_back(result_352,__builtin_string(buf_353->buf));
    }
    __result147__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result148__;
struct list$1charph* result_355;
int offset_356;
int ovec_max_357;
const char* err_361;
int erro_ofs_362;
int options_363;
char* str_364;
struct real_pcre8_or_16* re_365;
int options_366;
int len_367;
int regex_result_368;
int i_369;
int i_370;
char* str_371;
char* str_372;
int i_373;
char* match_string_374;
struct list$1charph* __result149__;
err_361 = (void*)0;
memset(&erro_ofs_362, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result148__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1510, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    result_355=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1512, "list$1charph"));
    offset_356=0;
    ovec_max_357=16;
    int start_358[ovec_max_357];
    memset(&start_358, 0, sizeof(int)    *(ovec_max_357)    );
    int end_359[ovec_max_357];
    memset(&end_359, 0, sizeof(int)    *(ovec_max_357)    );
    int ovec_value_360[ovec_max_357*3];
    memset(&ovec_value_360, 0, sizeof(int)    *(ovec_max_357*3)    );
    options_363=reg->options;
    str_364=reg->str;
    re_365=reg->re;
    while((_Bool)1) {
        options_366=2097152;
        len_367=strlen(self);
        regex_result_368=pcre_exec(re_365,(struct pcre_extra*)0,self,len_367,offset_356,options_366,ovec_value_360,ovec_max_357*3);
        for(        i_369=0;        i_369<ovec_max_357;        i_369++        ){
            start_358[i_369]=ovec_value_360[i_369*2];
        }
        for(        i_370=0;        i_370<ovec_max_357;        i_370++        ){
            end_359[i_370]=ovec_value_360[i_370*2+1];
        }
        if(        regex_result_368==1) {
            str_371=charp_substring(self,start_358[0],end_359[0]);
            list$1charph_push_back(result_355,str_371);
            if(            offset_356==end_359[0]) {
                offset_356++;
            }
            else {
                offset_356=end_359[0];
            }
        }
        else if(        regex_result_368>1) {
            str_372=charp_substring(self,start_358[0],end_359[0]);
            list$1charph_push_back(result_355,str_372);
            if(            offset_356==end_359[0]) {
                offset_356++;
            }
            else {
                offset_356=end_359[0];
            }
            for(            i_373=1;            i_373<regex_result_368;            i_373++            ){
                match_string_374=charp_substring(self,start_358[i_373],end_359[i_373]);
                list$1charph_push_back(result_355,match_string_374);
            }
        }
        else {
            break;
        }
    }
    __result149__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result150__;
const char* err_375;
int erro_ofs_376;
int options_377;
char* str_378;
struct real_pcre8_or_16* re_379;
struct list$1charph* result_380;
int offset_381;
int ovec_max_382;
int options_386;
int len_387;
int regex_result_388;
int i_389;
int i_390;
char* str_391;
char* str_392;
int i_393;
char* match_str_394;
char* str_395;
struct list$1charph* __result151__;
err_375 = (void*)0;
memset(&erro_ofs_376, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result150__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1586, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    options_377=reg->options;
    str_378=reg->str;
    re_379=reg->re;
    result_380=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1596, "list$1charph"));
    offset_381=0;
    ovec_max_382=16;
    int start_383[ovec_max_382];
    memset(&start_383, 0, sizeof(int)    *(ovec_max_382)    );
    int end_384[ovec_max_382];
    memset(&end_384, 0, sizeof(int)    *(ovec_max_382)    );
    int ovec_value_385[ovec_max_382*3];
    memset(&ovec_value_385, 0, sizeof(int)    *(ovec_max_382*3)    );
    while((_Bool)1) {
        options_386=2097152;
        len_387=strlen(self);
        regex_result_388=pcre_exec(re_379,(struct pcre_extra*)0,self,len_387,offset_381,options_386,ovec_value_385,ovec_max_382*3);
        for(        i_389=0;        i_389<ovec_max_382;        i_389++        ){
            start_383[i_389]=ovec_value_385[i_389*2];
        }
        for(        i_390=0;        i_390<ovec_max_382;        i_390++        ){
            end_384[i_390]=ovec_value_385[i_390*2+1];
        }
        if(        regex_result_388==1) {
            str_391=charp_substring(self,offset_381,start_383[0]);
            list$1charph_push_back(result_380,str_391);
            if(            offset_381==end_384[0]) {
                offset_381++;
            }
            else {
                offset_381=end_384[0];
            }
        }
        else if(        regex_result_388>1) {
            str_392=charp_substring(self,offset_381,start_383[0]);
            list$1charph_push_back(result_380,str_392);
            if(            offset_381==end_384[0]) {
                offset_381++;
            }
            else {
                offset_381=end_384[0];
            }
            for(            i_393=1;            i_393<regex_result_388;            i_393++            ){
                match_str_394=charp_substring(self,start_383[i_393],end_384[i_393]);
                list$1charph_push_back(result_380,match_str_394);
            }
        }
        else {
            break;
        }
    }
    if(    offset_381<charp_length(self)) {
        str_395=charp_substring(self,offset_381,-1);
        list$1charph_push_back(result_380,str_395);
    }
    __result151__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_396;
int ovec_max_397;
const char* err_401;
int erro_ofs_402;
int options_403;
char* str_404;
struct real_pcre8_or_16* re_405;
int options_406;
int len_407;
int regex_result_408;
int i_409;
int i_410;
err_401 = (void*)0;
memset(&erro_ofs_402, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_396=0;
    ovec_max_397=16;
    int start_398[ovec_max_397];
    memset(&start_398, 0, sizeof(int)    *(ovec_max_397)    );
    int end_399[ovec_max_397];
    memset(&end_399, 0, sizeof(int)    *(ovec_max_397)    );
    int ovec_value_400[ovec_max_397*3];
    memset(&ovec_value_400, 0, sizeof(int)    *(ovec_max_397*3)    );
    options_403=reg->options;
    str_404=reg->str;
    re_405=reg->re;
    while((_Bool)1) {
        options_406=2097152;
        len_407=strlen(self);
        regex_result_408=pcre_exec(re_405,(struct pcre_extra*)0,self,len_407,offset_396,options_406,ovec_value_400,ovec_max_397*3);
        for(        i_409=0;        i_409<ovec_max_397;        i_409++        ){
            start_398[i_409]=ovec_value_400[i_409*2];
        }
        for(        i_410=0;        i_410<ovec_max_397;        i_410++        ){
            end_399[i_410]=ovec_value_400[i_410*2+1];
        }
        if(        regex_result_408>0) {
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
struct list$1charph* __result152__;
const char* err_411;
int erro_ofs_412;
int options_413;
char* str_414;
struct real_pcre8_or_16* re_415;
struct list$1charph* result_416;
int offset_417;
int ovec_max_418;
int n_422;
int options_423;
int len_424;
int regex_result_425;
int i_426;
int i_427;
char* str_428;
char* str_429;
int i_430;
char* match_str_431;
char* str_432;
struct list$1charph* __result153__;
err_411 = (void*)0;
memset(&erro_ofs_412, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result152__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1714, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    options_413=reg->options;
    str_414=reg->str;
    re_415=reg->re;
    result_416=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1724, "list$1charph"));
    offset_417=0;
    ovec_max_418=16;
    int start_419[ovec_max_418];
    memset(&start_419, 0, sizeof(int)    *(ovec_max_418)    );
    int end_420[ovec_max_418];
    memset(&end_420, 0, sizeof(int)    *(ovec_max_418)    );
    int ovec_value_421[ovec_max_418*3];
    memset(&ovec_value_421, 0, sizeof(int)    *(ovec_max_418*3)    );
    n_422=0;
    while((_Bool)1) {
        options_423=2097152;
        len_424=strlen(self);
        regex_result_425=pcre_exec(re_415,(struct pcre_extra*)0,self,len_424,offset_417,options_423,ovec_value_421,ovec_max_418*3);
        for(        i_426=0;        i_426<ovec_max_418;        i_426++        ){
            start_419[i_426]=ovec_value_421[i_426*2];
        }
        for(        i_427=0;        i_427<ovec_max_418;        i_427++        ){
            end_420[i_427]=ovec_value_421[i_427*2+1];
        }
        if(        regex_result_425==1) {
            str_428=charp_substring(self,offset_417,start_419[0]);
            list$1charph_push_back(result_416,str_428);
            if(            offset_417==end_420[0]) {
                offset_417++;
            }
            else {
                offset_417=end_420[0];
            }
        }
        else if(        regex_result_425>1) {
            str_429=charp_substring(self,offset_417,start_419[0]);
            list$1charph_push_back(result_416,str_429);
            if(            offset_417==end_420[0]) {
                offset_417++;
            }
            else {
                offset_417=end_420[0];
            }
            for(            i_430=1;            i_430<regex_result_425;            i_430++            ){
                match_str_431=charp_substring(self,start_419[i_430],end_420[i_430]);
                list$1charph_push_back(result_416,match_str_431);
            }
        }
        else {
            break;
        }
        n_422++;
        if(        maxsplit==n_422) {
            break;
        }
    }
    if(    offset_417<charp_length(self)) {
        str_432=charp_substring(self,offset_417,-1);
        list$1charph_push_back(result_416,str_432);
    }
    __result153__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result153__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_433;
int erro_ofs_434;
int options_435;
char* str_436;
struct real_pcre8_or_16* re_437;
char* self2_438;
int ovec_max_439;
int result_443;
int offset_444;
int n_445;
int options_446;
int len_447;
int regex_result_448;
int i_449;
int i_450;
err_433 = (void*)0;
memset(&erro_ofs_434, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_435=reg->options;
    str_436=reg->str;
    re_437=reg->re;
    self2_438=charp_reverse(self);
    ovec_max_439=16;
    int start_440[ovec_max_439];
    memset(&start_440, 0, sizeof(int)    *(ovec_max_439)    );
    int end_441[ovec_max_439];
    memset(&end_441, 0, sizeof(int)    *(ovec_max_439)    );
    int ovec_value_442[ovec_max_439*3];
    memset(&ovec_value_442, 0, sizeof(int)    *(ovec_max_439*3)    );
    result_443=default_value;
    offset_444=0;
    n_445=0;
    while((_Bool)1) {
        options_446=2097152;
        len_447=strlen(self2_438);
        regex_result_448=pcre_exec(re_437,(struct pcre_extra*)0,self2_438,len_447,offset_444,options_446,ovec_value_442,ovec_max_439*3);
        for(        i_449=0;        i_449<ovec_max_439;        i_449++        ){
            start_440[i_449]=ovec_value_442[i_449*2];
        }
        for(        i_450=0;        i_450<ovec_max_439;        i_450++        ){
            end_441[i_450]=ovec_value_442[i_450*2+1];
        }
        if(        regex_result_448>0) {
            n_445++;
            if(            offset_444==end_441[0]) {
                offset_444++;
            }
            else {
                offset_444=end_441[0];
            }
            if(            n_445==count) {
                result_443=strlen(self)-end_441[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_443;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_451;
int ovec_max_452;
const char* err_456;
int erro_ofs_457;
int options_458;
char* str_459;
struct real_pcre8_or_16* re_460;
int n_461;
int options_462;
int len_463;
int regex_result_464;
int i_465;
int i_466;
err_456 = (void*)0;
memset(&erro_ofs_457, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_451=0;
    ovec_max_452=16;
    int start_453[ovec_max_452];
    memset(&start_453, 0, sizeof(int)    *(ovec_max_452)    );
    int end_454[ovec_max_452];
    memset(&end_454, 0, sizeof(int)    *(ovec_max_452)    );
    int ovec_value_455[ovec_max_452*3];
    memset(&ovec_value_455, 0, sizeof(int)    *(ovec_max_452*3)    );
    options_458=reg->options;
    str_459=reg->str;
    re_460=reg->re;
    n_461=0;
    while((_Bool)1) {
        options_462=2097152;
        len_463=strlen(self);
        regex_result_464=pcre_exec(re_460,(struct pcre_extra*)0,self,len_463,offset_451,options_462,ovec_value_455,ovec_max_452*3);
        for(        i_465=0;        i_465<ovec_max_452;        i_465++        ){
            start_453[i_465]=ovec_value_455[i_465*2];
        }
        for(        i_466=0;        i_466<ovec_max_452;        i_466++        ){
            end_454[i_466]=ovec_value_455[i_466*2+1];
        }
        if(        regex_result_464>0) {
            n_461++;
            if(            count==n_461) {
                return (_Bool)1;
            }
            if(            offset_451==end_454[0]) {
                offset_451++;
            }
            else {
                offset_451=end_454[0];
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
char* __result154__;
int offset_467;
int ovec_max_468;
const char* err_472;
int erro_ofs_473;
int options_474;
char* str_475;
struct real_pcre8_or_16* re_476;
struct buffer* result_477;
int options_478;
int len_479;
int regex_result_480;
int i_481;
int i_482;
char* str_483;
struct list$1charph* group_strings_484;
char* match_string_485;
char* block_result_486;
char* str_487;
char* str_488;
struct list$1charph* group_strings_489;
int i_490;
char* match_string_491;
char* match_string_492;
char* block_result_493;
char* str_494;
char* str_495;
char* __result155__;
err_472 = (void*)0;
memset(&erro_ofs_473, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    offset_467=0;
    ovec_max_468=16;
    int start_469[ovec_max_468];
    memset(&start_469, 0, sizeof(int)    *(ovec_max_468)    );
    int end_470[ovec_max_468];
    memset(&end_470, 0, sizeof(int)    *(ovec_max_468)    );
    int ovec_value_471[ovec_max_468*3];
    memset(&ovec_value_471, 0, sizeof(int)    *(ovec_max_468*3)    );
    options_474=reg->options;
    str_475=reg->str;
    re_476=reg->re;
    result_477=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1945, "buffer"));
    while((_Bool)1) {
        options_478=2097152;
        len_479=strlen(self);
        regex_result_480=pcre_exec(re_476,(struct pcre_extra*)0,self,len_479,offset_467,options_478,ovec_value_471,ovec_max_468*3);
        for(        i_481=0;        i_481<ovec_max_468;        i_481++        ){
            start_469[i_481]=ovec_value_471[i_481*2];
        }
        for(        i_482=0;        i_482<ovec_max_468;        i_482++        ){
            end_470[i_482]=ovec_value_471[i_482*2+1];
        }
        if(        regex_result_480==1) {
            str_483=charp_substring(self,offset_467,start_469[0]);
            buffer_append_str(result_477,str_483);
            group_strings_484=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1965, "list$1charph"));
            match_string_485=charp_substring(self,start_469[0],end_470[0]);
            list$1charph_push_back(group_strings_484,charp_substring(self,start_469[0],end_470[0]));
            block_result_486=block(parent,match_string_485,group_strings_484);
            buffer_append_str(result_477,block_result_486);
            if(            offset_467==end_470[0]) {
                offset_467++;
            }
            else {
                offset_467=end_470[0];
            }
            if(            !reg->global) {
                str_487=charp_substring(self,offset_467,-1);
                buffer_append_str(result_477,str_487);
                break;
            }
        }
        else if(        regex_result_480>1) {
            str_488=charp_substring(self,offset_467,start_469[0]);
            buffer_append_str(result_477,str_488);
            if(            offset_467==end_470[0]) {
                offset_467++;
            }
            else {
                offset_467=end_470[0];
            }
            group_strings_489=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2000, "list$1charph"));
            for(            i_490=1;            i_490<regex_result_480;            i_490++            ){
                match_string_491=charp_substring(self,start_469[i_490],end_470[i_490]);
                list$1charph_push_back(group_strings_489,match_string_491);
            }
            match_string_492=charp_substring(self,start_469[0],end_470[0]);
            block_result_493=block(parent,match_string_492,group_strings_489);
            buffer_append_str(result_477,block_result_493);
            if(            !reg->global) {
                str_494=charp_substring(self,offset_467,-1);
                buffer_append_str(result_477,str_494);
                break;
            }
        }
        else {
            str_495=charp_substring(self,offset_467,-1);
            buffer_append_str(result_477,str_495);
            break;
        }
    }
    __result155__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_477);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result156__;
int offset_496;
int ovec_max_497;
const char* err_501;
int erro_ofs_502;
int options_503;
char* str_504;
struct real_pcre8_or_16* re_505;
struct buffer* result_506;
int n_507;
int options_508;
int len_509;
int regex_result_510;
int i_511;
int i_512;
char* str_513;
struct list$1charph* group_strings_514;
char* match_string_515;
char* block_result_516;
char* str_517;
char* str_518;
char* str_519;
struct list$1charph* group_strings_520;
int i_521;
char* match_string_522;
char* match_string_523;
char* block_result_524;
char* str_525;
char* str_526;
char* str_527;
char* __result157__;
err_501 = (void*)0;
memset(&erro_ofs_502, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    offset_496=0;
    ovec_max_497=16;
    int start_498[ovec_max_497];
    memset(&start_498, 0, sizeof(int)    *(ovec_max_497)    );
    int end_499[ovec_max_497];
    memset(&end_499, 0, sizeof(int)    *(ovec_max_497)    );
    int ovec_value_500[ovec_max_497*3];
    memset(&ovec_value_500, 0, sizeof(int)    *(ovec_max_497*3)    );
    options_503=reg->options;
    str_504=reg->str;
    re_505=reg->re;
    result_506=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 2049, "buffer"));
    n_507=0;
    while((_Bool)1) {
        options_508=2097152;
        len_509=strlen(self);
        regex_result_510=pcre_exec(re_505,(struct pcre_extra*)0,self,len_509,offset_496,options_508,ovec_value_500,ovec_max_497*3);
        for(        i_511=0;        i_511<ovec_max_497;        i_511++        ){
            start_498[i_511]=ovec_value_500[i_511*2];
        }
        for(        i_512=0;        i_512<ovec_max_497;        i_512++        ){
            end_499[i_512]=ovec_value_500[i_512*2+1];
        }
        if(        regex_result_510==1) {
            n_507++;
            str_513=charp_substring(self,offset_496,start_498[0]);
            buffer_append_str(result_506,str_513);
            group_strings_514=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2072, "list$1charph"));
            list$1charph_push_back(group_strings_514,charp_substring(self,start_498[0],end_499[0]));
            match_string_515=charp_substring(self,start_498[0],end_499[0]);
            block_result_516=block(parent,match_string_515,group_strings_514);
            buffer_append_str(result_506,block_result_516);
            if(            offset_496==end_499[0]) {
                offset_496++;
            }
            else {
                offset_496=end_499[0];
            }
            if(            !reg->global) {
                str_517=charp_substring(self,offset_496,-1);
                buffer_append_str(result_506,str_517);
                break;
            }
            if(            n_507==count) {
                str_518=charp_substring(self,offset_496,-1);
                buffer_append_str(result_506,str_518);
                break;
            }
        }
        else if(        regex_result_510>1) {
            n_507++;
            str_519=charp_substring(self,offset_496,start_498[0]);
            buffer_append_str(result_506,str_519);
            if(            offset_496==end_499[0]) {
                offset_496++;
            }
            else {
                offset_496=end_499[0];
            }
            group_strings_520=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2115, "list$1charph"));
            for(            i_521=1;            i_521<regex_result_510;            i_521++            ){
                match_string_522=charp_substring(self,start_498[i_521],end_499[i_521]);
                list$1charph_push_back(group_strings_520,match_string_522);
            }
            match_string_523=charp_substring(self,start_498[0],end_499[0]);
            block_result_524=block(parent,match_string_523,group_strings_520);
            buffer_append_str(result_506,block_result_524);
            if(            !reg->global) {
                str_525=charp_substring(self,offset_496,-1);
                buffer_append_str(result_506,str_525);
                break;
            }
            if(            n_507==count) {
                str_526=charp_substring(self,offset_496,-1);
                buffer_append_str(result_506,str_526);
                break;
            }
        }
        else {
            str_527=charp_substring(self,offset_496,-1);
            buffer_append_str(result_506,str_527);
            break;
        }
    }
    __result157__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_506);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_528;
unsigned int* p_529;
    result_528=0;
    p_529=value;
    while(*p_529) {
        result_528+=(*p_529);
        p_529++;
    }
    return result_528;
}

_Bool wstring_equals(unsigned int* left, unsigned int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(unsigned int left, unsigned int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(unsigned int value){
    return value;
}

_Bool wchar_t_equals(unsigned int left, unsigned int right){
    return left==right;
}

char* wchar_t_to_string(unsigned int wc){
void* __result_obj__=(void*)0;
char* __result158__;
    __result158__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_530;
char* __result159__;
char* __result160__;
    result_530=__builtin_string(str);
    if(    result_530[string_length(result_530)-1]==10) {
        __result159__ = gComeFunResultObject = __result_obj__ = string_substring(result_530,0,-2);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    __result160__ = gComeFunResultObject = __result_obj__ = result_530;
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result161__;
char* result_531;
char* result2_532;
char* __result162__;
    if(    path==((void*)0)) {
        __result161__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_531=realpath(path,((void*)0));
    result2_532=__builtin_string(result_531);
    free(result_531);
    __result162__ = gComeFunResultObject = __result_obj__ = result2_532;
    gComeFunResultObject = (void*)0;
    return __result162__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result163__;
char* __result164__;
    if(    path==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    __result164__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result164__;
}

unsigned long  int xwcslen(unsigned int* wstr){
unsigned int* p_533;
unsigned long  int len_534;
    p_533=wstr;
    len_534=0;
    while(*p_533) {
        p_533++;
        len_534++;
    }
    return len_534;
}

