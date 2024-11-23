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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX180, int anonymous_var_nameX181, const char** anonymous_var_nameX182, int* anonymous_var_nameX183, const unsigned char* anonymous_var_nameX184);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX185, int anonymous_var_nameX186, const char** anonymous_var_nameX187, int* anonymous_var_nameX188, const unsigned char* anonymous_var_nameX189);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX190, int anonymous_var_nameX191, const char** anonymous_var_nameX192, int* anonymous_var_nameX193, const unsigned char* anonymous_var_nameX194);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX195, int anonymous_var_nameX196, int* anonymous_var_nameX197, const char** anonymous_var_nameX198, int* anonymous_var_nameX199, const unsigned char* anonymous_var_nameX200);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX201, int anonymous_var_nameX202, int* anonymous_var_nameX203, const char** anonymous_var_nameX204, int* anonymous_var_nameX205, const unsigned char* anonymous_var_nameX206);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX207, int anonymous_var_nameX208, int* anonymous_var_nameX209, const char** anonymous_var_nameX210, int* anonymous_var_nameX211, const unsigned char* anonymous_var_nameX212);
int pcre_config(int anonymous_var_nameX213, void* anonymous_var_nameX214);
int pcre16_config(int anonymous_var_nameX215, void* anonymous_var_nameX216);
int pcre32_config(int anonymous_var_nameX217, void* anonymous_var_nameX218);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX219, const char* anonymous_var_nameX220, int* anonymous_var_nameX221, int anonymous_var_nameX222, const char* anonymous_var_nameX223, char* anonymous_var_nameX224, int anonymous_var_nameX225);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX226, const unsigned short int* anonymous_var_nameX227, int* anonymous_var_nameX228, int anonymous_var_nameX229, const unsigned short int* anonymous_var_nameX230, unsigned short int* anonymous_var_nameX231, int anonymous_var_nameX232);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX233, const unsigned int* anonymous_var_nameX234, int* anonymous_var_nameX235, int anonymous_var_nameX236, const unsigned int* anonymous_var_nameX237, unsigned int* anonymous_var_nameX238, int anonymous_var_nameX239);
int pcre_copy_substring(const char* anonymous_var_nameX240, int* anonymous_var_nameX241, int anonymous_var_nameX242, int anonymous_var_nameX243, char* anonymous_var_nameX244, int anonymous_var_nameX245);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX246, int* anonymous_var_nameX247, int anonymous_var_nameX248, int anonymous_var_nameX249, unsigned short int* anonymous_var_nameX250, int anonymous_var_nameX251);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX252, int* anonymous_var_nameX253, int anonymous_var_nameX254, int anonymous_var_nameX255, unsigned int* anonymous_var_nameX256, int anonymous_var_nameX257);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX258, const struct pcre_extra* anonymous_var_nameX259, const char* anonymous_var_nameX260, int anonymous_var_nameX261, int anonymous_var_nameX262, int anonymous_var_nameX263, int* anonymous_var_nameX264, int anonymous_var_nameX265, int* anonymous_var_nameX266, int anonymous_var_nameX267);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX268, const struct pcre16_extra* anonymous_var_nameX269, const unsigned short int* anonymous_var_nameX270, int anonymous_var_nameX271, int anonymous_var_nameX272, int anonymous_var_nameX273, int* anonymous_var_nameX274, int anonymous_var_nameX275, int* anonymous_var_nameX276, int anonymous_var_nameX277);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX278, const struct pcre32_extra* anonymous_var_nameX279, const unsigned int* anonymous_var_nameX280, int anonymous_var_nameX281, int anonymous_var_nameX282, int anonymous_var_nameX283, int* anonymous_var_nameX284, int anonymous_var_nameX285, int* anonymous_var_nameX286, int anonymous_var_nameX287);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX288, const struct pcre_extra* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291, int anonymous_var_nameX292, int anonymous_var_nameX293, int* anonymous_var_nameX294, int anonymous_var_nameX295);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX296, const struct pcre16_extra* anonymous_var_nameX297, const unsigned short int* anonymous_var_nameX298, int anonymous_var_nameX299, int anonymous_var_nameX300, int anonymous_var_nameX301, int* anonymous_var_nameX302, int anonymous_var_nameX303);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX304, const struct pcre32_extra* anonymous_var_nameX305, const unsigned int* anonymous_var_nameX306, int anonymous_var_nameX307, int anonymous_var_nameX308, int anonymous_var_nameX309, int* anonymous_var_nameX310, int anonymous_var_nameX311);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX312, const struct pcre_extra* anonymous_var_nameX313, const char* anonymous_var_nameX314, int anonymous_var_nameX315, int anonymous_var_nameX316, int anonymous_var_nameX317, int* anonymous_var_nameX318, int anonymous_var_nameX319, struct real_pcre_jit_stack* anonymous_var_nameX320);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX321, const struct pcre16_extra* anonymous_var_nameX322, const unsigned short int* anonymous_var_nameX323, int anonymous_var_nameX324, int anonymous_var_nameX325, int anonymous_var_nameX326, int* anonymous_var_nameX327, int anonymous_var_nameX328, struct real_pcre16_jit_stack* anonymous_var_nameX329);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX330, const struct pcre32_extra* anonymous_var_nameX331, const unsigned int* anonymous_var_nameX332, int anonymous_var_nameX333, int anonymous_var_nameX334, int anonymous_var_nameX335, int* anonymous_var_nameX336, int anonymous_var_nameX337, struct real_pcre32_jit_stack* anonymous_var_nameX338);
void pcre_free_substring(const char* anonymous_var_nameX339);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX340);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX341);
void pcre_free_substring_list(const char** anonymous_var_nameX342);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX343);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX344);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX345, const struct pcre_extra* anonymous_var_nameX346, int anonymous_var_nameX347, void* anonymous_var_nameX348);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX349, const struct pcre16_extra* anonymous_var_nameX350, int anonymous_var_nameX351, void* anonymous_var_nameX352);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX353, const struct pcre32_extra* anonymous_var_nameX354, int anonymous_var_nameX355, void* anonymous_var_nameX356);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX357, const char* anonymous_var_nameX358, int* anonymous_var_nameX359, int anonymous_var_nameX360, const char* anonymous_var_nameX361, const char** anonymous_var_nameX362);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX363, const unsigned short int* anonymous_var_nameX364, int* anonymous_var_nameX365, int anonymous_var_nameX366, const unsigned short int* anonymous_var_nameX367, const unsigned short int** anonymous_var_nameX368);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX369, const unsigned int* anonymous_var_nameX370, int* anonymous_var_nameX371, int anonymous_var_nameX372, const unsigned int* anonymous_var_nameX373, const unsigned int** anonymous_var_nameX374);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX375, const char* anonymous_var_nameX376);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX377, const unsigned short int* anonymous_var_nameX378);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX379, const unsigned int* anonymous_var_nameX380);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX381, const char* anonymous_var_nameX382, char** anonymous_var_nameX383, char** anonymous_var_nameX384);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX385, const unsigned short int* anonymous_var_nameX386, unsigned short int** anonymous_var_nameX387, unsigned short int** anonymous_var_nameX388);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX389, const unsigned int* anonymous_var_nameX390, unsigned int** anonymous_var_nameX391, unsigned int** anonymous_var_nameX392);
int pcre_get_substring(const char* anonymous_var_nameX393, int* anonymous_var_nameX394, int anonymous_var_nameX395, int anonymous_var_nameX396, const char** anonymous_var_nameX397);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX398, int* anonymous_var_nameX399, int anonymous_var_nameX400, int anonymous_var_nameX401, const unsigned short int** anonymous_var_nameX402);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX403, int* anonymous_var_nameX404, int anonymous_var_nameX405, int anonymous_var_nameX406, const unsigned int** anonymous_var_nameX407);
int pcre_get_substring_list(const char* anonymous_var_nameX408, int* anonymous_var_nameX409, int anonymous_var_nameX410, const char*** anonymous_var_nameX411);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX412, int* anonymous_var_nameX413, int anonymous_var_nameX414, const unsigned short int*** anonymous_var_nameX415);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX416, int* anonymous_var_nameX417, int anonymous_var_nameX418, const unsigned int*** anonymous_var_nameX419);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX420, int anonymous_var_nameX421);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX422, int anonymous_var_nameX423);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX424, int anonymous_var_nameX425);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX426, int anonymous_var_nameX427, const char** anonymous_var_nameX428);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX429, int anonymous_var_nameX430, const char** anonymous_var_nameX431);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX432, int anonymous_var_nameX433, const char** anonymous_var_nameX434);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX435);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX436);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX437);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX438, struct pcre_extra* anonymous_var_nameX439, const unsigned char* anonymous_var_nameX440);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX441, struct pcre16_extra* anonymous_var_nameX442, const unsigned char* anonymous_var_nameX443);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX444, struct pcre32_extra* anonymous_var_nameX445, const unsigned char* anonymous_var_nameX446);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX447, const unsigned short int* anonymous_var_nameX448, int anonymous_var_nameX449, int* anonymous_var_nameX450, int anonymous_var_nameX451);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX452, const unsigned int* anonymous_var_nameX453, int anonymous_var_nameX454, int* anonymous_var_nameX455, int anonymous_var_nameX456);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX457, int anonymous_var_nameX458);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX459, int anonymous_var_nameX460);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX461, int anonymous_var_nameX462);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX463);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX464);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX465);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX466, struct real_pcre_jit_stack* (*anonymous_var_nameX467)(void*), void* anonymous_var_nameX468);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX469, struct real_pcre16_jit_stack* (*anonymous_var_nameX470)(void*), void* anonymous_var_nameX471);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX472, struct real_pcre32_jit_stack* (*anonymous_var_nameX473)(void*), void* anonymous_var_nameX474);
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
void __FD_CLR_chk(int anonymous_var_nameX492, struct anonymous_typeX43* anonymous_var_nameX493, unsigned long  int anonymous_var_nameX494);
void __FD_SET_chk(int anonymous_var_nameX495, struct anonymous_typeX43* anonymous_var_nameX496, unsigned long  int anonymous_var_nameX497);
int __FD_ISSET_chk(int anonymous_var_nameX498, const struct anonymous_typeX43* anonymous_var_nameX499, unsigned long  int anonymous_var_nameX500);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_8;
struct buffer* __result1__;
    result_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2392, "buffer"))));
    buffer_append(result_8,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_8;
    /*i*/come_call_finalizer3(result_8,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_9;
int i_10;
struct buffer* __result2__;
    result_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2399, "buffer"))));
    for(    i_10=0;    i_10<len;    i_10++    ){
        buffer_append(result_9,self[i_10],strlen(self[i_10]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_9;
    /*i*/come_call_finalizer3(result_9,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_11;
struct buffer* __result3__;
    result_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2408, "buffer"))));
    buffer_append(result_11,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_11;
    /*i*/come_call_finalizer3(result_11,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_12;
struct buffer* __result4__;
    result_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2415, "buffer"))));
    buffer_append(result_12,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_12;
    /*i*/come_call_finalizer3(result_12,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_13;
struct buffer* __result5__;
    result_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2422, "buffer"))));
    buffer_append(result_13,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_13;
    /*i*/come_call_finalizer3(result_13,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_14;
struct buffer* __result6__;
    result_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2429, "buffer"))));
    buffer_append(result_14,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_14;
    /*i*/come_call_finalizer3(result_14,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_15;
struct buffer* __result7__;
    result_15=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2436, "buffer"))));
    buffer_append(result_15,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_15;
    /*i*/come_call_finalizer3(result_15,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2736, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2746, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2751, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2756, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_16;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_16=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2789, "buffer"))));
    buffer_append(buf_16,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2791, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_16))));
    /*i*/come_call_finalizer3(buf_16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_17;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_17=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2796, "buffer"))));
    buffer_append(buf_17,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2798, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_17))));
    /*i*/come_call_finalizer3(buf_17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_18;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_18=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2803, "buffer"))));
    buffer_append(buf_18,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2805, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_18))));
    /*i*/come_call_finalizer3(buf_18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_19;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_19=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2810, "buffer"))));
    buffer_append(buf_19,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2812, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_19))));
    /*i*/come_call_finalizer3(buf_19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_20;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_20=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2817, "buffer"))));
    buffer_append(buf_20,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2819, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_20))));
    /*i*/come_call_finalizer3(buf_20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_21;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_21=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2824, "buffer"))));
    buffer_append(buf_21,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2826, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_21))));
    /*i*/come_call_finalizer3(buf_21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_22;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_22=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2831, "buffer"))));
    buffer_append(buf_22,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2833, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_22))));
    /*i*/come_call_finalizer3(buf_22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2838, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2843, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2848, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2853, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2858, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2863, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2868, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2873, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2878, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2883, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2888, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2893, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2898, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2903, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_72;
int i_73;
    result_72=(_Bool)0;
    for(    i_73=0;    i_73<len;    i_73++    ){
        if(        strncmp(self[i_73],str,strlen(self[i_73]))==0) {
            result_72=(_Bool)1;
            break;
        }
    }
    return result_72;
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
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline unsigned int* wstring_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
unsigned int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value116=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value117 = (void*)0;
struct list$1charph* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value117=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct list$1charph* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value118=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value118,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list$1charph* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value119=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value119,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list$1charph* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value120=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value120,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
struct list$1charph* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value121=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result71__;
    __result71__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=charp_strip(self)));
    /* U11 */__right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value123=string_printable(str)));
    /* U11 */__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static inline unsigned int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
unsigned int* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value124=charp_to_wstring(str)));
    /* U11 */__right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline char* wstring_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=wchar_tp_to_string(wstr)));
    /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline unsigned int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
unsigned int* __result75__;
    __result75__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value127=string_to_wstring(((char*)(__right_value126=xsprintf("%d",self))))));
    /* U11 */__right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static inline int wstring_length(unsigned int* str){
    return wchar_tp_length(str);
}
static inline unsigned int* wstring_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
unsigned int* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value128=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value129 = (void*)0;
unsigned int* __result77__;
    __result77__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value129=wchar_tp_reverse(str)));
    /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static inline unsigned int* wstring_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
unsigned int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value130=wchar_tp_multiply(str,n)));
    /* U11 */__right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline unsigned int* wstring_printable(unsigned int* str){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
unsigned int* __result79__;
    __result79__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value131=wchar_tp_printable(str)));
    /* U11 */__right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value132 = (void*)0;
char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value132=charp_replace(self,index,c)));
    /* U11 */__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
char* __result81__;
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value133=charp_multiply(str,n)));
    /* U11 */__right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=charp_sub(self,reg,replace)));
    /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
char* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value135=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list$1charph* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value136=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct list$1charph* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value137=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
struct list$1charph* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value138=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct list$1charph* __result87__;
    __result87__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value139=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value140 = (void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value140=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value141=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value143=string_chomp(str)));
    /* U11 */__right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

// body function




















static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
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
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
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
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
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
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
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
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
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
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
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
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
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
int i_23;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1char_push_back(self,values[i_23]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_24;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_25;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_26;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_24=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 219, "list_item$1char"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 229, "list_item$1char"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 239, "list_item$1char"))));
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

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_27;
struct list_item$1char* prev_it_28;
    it_27=self->head;
    while(it_27!=((void*)0)) {
        prev_it_28=it_27;
        it_27=it_27->next;
        /*i*/come_call_finalizer3(prev_it_28,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_29;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_29=0;    i_29<num_value;    i_29++    ){
        list$1charp_push_back(self,values[i_29]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_30;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_31;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_32;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_30=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 219, "list_item$1charp"))));
        litem_30->prev=((void*)0);
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail=litem_30;
        self->head=litem_30;
    }
    else if(    self->len==1) {
        litem_31=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 229, "list_item$1charp"))));
        litem_31->prev=self->head;
        litem_31->next=((void*)0);
        litem_31->item=item;
        self->tail=litem_31;
        self->head->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 239, "list_item$1charp"))));
        litem_32->prev=self->tail;
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail->next=litem_32;
        self->tail=litem_32;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_33;
struct list_item$1charp* prev_it_34;
    it_33=self->head;
    while(it_33!=((void*)0)) {
        prev_it_34=it_33;
        it_33=it_33->next;
        /*i*/come_call_finalizer3(prev_it_34,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1short_push_back(self,values[i_35]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_36;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_37;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_38;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_36=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 219, "list_item$1short"))));
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 229, "list_item$1short"))));
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 239, "list_item$1short"))));
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_39;
struct list_item$1short* prev_it_40;
    it_39=self->head;
    while(it_39!=((void*)0)) {
        prev_it_40=it_39;
        it_39=it_39->next;
        /*i*/come_call_finalizer3(prev_it_40,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_41;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_41=0;    i_41<num_value;    i_41++    ){
        list$1int_push_back(self,values[i_41]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_42;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_43;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_44;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_42=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 219, "list_item$1int"))));
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail=litem_42;
        self->head=litem_42;
    }
    else if(    self->len==1) {
        litem_43=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 229, "list_item$1int"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        litem_43->item=item;
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 239, "list_item$1int"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        litem_44->item=item;
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_45;
struct list_item$1int* prev_it_46;
    it_45=self->head;
    while(it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        /*i*/come_call_finalizer3(prev_it_46,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_47;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_47=0;    i_47<num_value;    i_47++    ){
        list$1long_push_back(self,values[i_47]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_48;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_49;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_50;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_48=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 219, "list_item$1long"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1) {
        litem_49=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 229, "list_item$1long"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        litem_49->item=item;
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 239, "list_item$1long"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        litem_50->item=item;
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_51;
struct list_item$1long* prev_it_52;
    it_51=self->head;
    while(it_51!=((void*)0)) {
        prev_it_52=it_51;
        it_51=it_51->next;
        /*i*/come_call_finalizer3(prev_it_52,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_53;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_53=0;    i_53<num_value;    i_53++    ){
        list$1float_push_back(self,values[i_53]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_54;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_55;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_56;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_54=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 219, "list_item$1float"))));
        litem_54->prev=((void*)0);
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail=litem_54;
        self->head=litem_54;
    }
    else if(    self->len==1) {
        litem_55=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 229, "list_item$1float"))));
        litem_55->prev=self->head;
        litem_55->next=((void*)0);
        litem_55->item=item;
        self->tail=litem_55;
        self->head->next=litem_55;
    }
    else {
        litem_56=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 239, "list_item$1float"))));
        litem_56->prev=self->tail;
        litem_56->next=((void*)0);
        litem_56->item=item;
        self->tail->next=litem_56;
        self->tail=litem_56;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_57;
struct list_item$1float* prev_it_58;
    it_57=self->head;
    while(it_57!=((void*)0)) {
        prev_it_58=it_57;
        it_57=it_57->next;
        /*i*/come_call_finalizer3(prev_it_58,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_59;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_59=0;    i_59<num_value;    i_59++    ){
        list$1double_push_back(self,values[i_59]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_60;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_61;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_62;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_60=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 219, "list_item$1double"))));
        litem_60->prev=((void*)0);
        litem_60->next=((void*)0);
        litem_60->item=item;
        self->tail=litem_60;
        self->head=litem_60;
    }
    else if(    self->len==1) {
        litem_61=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 229, "list_item$1double"))));
        litem_61->prev=self->head;
        litem_61->next=((void*)0);
        litem_61->item=item;
        self->tail=litem_61;
        self->head->next=litem_61;
    }
    else {
        litem_62=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 239, "list_item$1double"))));
        litem_62->prev=self->tail;
        litem_62->next=((void*)0);
        litem_62->item=item;
        self->tail->next=litem_62;
        self->tail=litem_62;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_63;
struct list_item$1double* prev_it_64;
    it_63=self->head;
    while(it_63!=((void*)0)) {
        prev_it_64=it_63;
        it_63=it_63->next;
        /*i*/come_call_finalizer3(prev_it_64,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_65;
    if(    0) {
        for(        i_65=0;        i_65<self->len;        i_65++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_66;
    if(    0) {
        for(        i_66=0;        i_66<self->len;        i_66++        ){
            /* U13 */self->items[i_66] = come_decrement_ref_count2(self->items[i_66], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_67;
    if(    0) {
        for(        i_67=0;        i_67<self->len;        i_67++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_68;
    if(    0) {
        for(        i_68=0;        i_68<self->len;        i_68++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_69;
    if(    0) {
        for(        i_69=0;        i_69<self->len;        i_69++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_70;
    if(    0) {
        for(        i_70=0;        i_70<self->len;        i_70++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_71;
    if(    0) {
        for(        i_71=0;        i_71<self->len;        i_71++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


















static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_74;
struct list_item$1charph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
const char* err_76;
int erro_ofs_77;
int options_78;
void* __right_value144 = (void*)0;
char* __dec_obj16;
struct come_regex* __null_value1;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct tuple2$2come_regexphcharph* __result93__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct tuple2$2come_regexphcharph* __result95__;
err_76 = (void*)0;
memset(&erro_ofs_77, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_78=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
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
    self->options=options_78;
    self->re=pcre_compile(str,options_78,&err_76,&erro_ofs_77,((void*)0));
    if(    self->re==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value148=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value145=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value148,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value150=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value150,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj17;
char* __dec_obj18;
struct tuple2$2come_regexphcharph* __result92__;
    __dec_obj17=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj17,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj18=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
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
struct tuple2$2come_regexphvoidp* __result94__;
    __dec_obj21=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj21,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
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
struct come_regex* come_exception_var_b1_79=0;
char* Err_80=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct tuple2$2come_regexphcharph* __result96__;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct tuple2$2come_regexphcharph* __result97__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value152=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_79=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_80=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_80)),    /*f*/come_call_finalizer3(__right_value152,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result96__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value154=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_80))));
        /*i*/come_call_finalizer3(come_exception_var_b1_79,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_80 = come_decrement_ref_count2(Err_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value154,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value156=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_79),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_79,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_80 = come_decrement_ref_count2(Err_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value156,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_81=0;
char* Err_82=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2come_regexphcharph* __result98__;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct tuple2$2come_regexphcharph* __result99__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value158=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_81=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_82=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_82)),    /*f*/come_call_finalizer3(__right_value158,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result98__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value160=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_82))));
        /*i*/come_call_finalizer3(come_exception_var_b2_81,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_82 = come_decrement_ref_count2(Err_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value160,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value162=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_81),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_81,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_82 = come_decrement_ref_count2(Err_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value162,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result100__;
void* __right_value163 = (void*)0;
struct come_regex* result_83;
void* __right_value164 = (void*)0;
char* __dec_obj23;
const char* err_84;
int erro_ofs_85;
struct come_regex* __result101__;
err_84 = (void*)0;
memset(&erro_ofs_85, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_83=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj23=result_83->str;
    result_83->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_83->ignore_case=reg->ignore_case;
    result_83->multiline=reg->multiline;
    result_83->global=reg->global;
    result_83->extended=reg->extended;
    result_83->dotall=reg->dotall;
    result_83->anchored=reg->anchored;
    result_83->dollar_endonly=reg->dollar_endonly;
    result_83->ungreedy=reg->ungreedy;
    result_83->options=reg->options;
    result_83->re=pcre_compile(result_83->str,result_83->options,&err_84,&erro_ofs_85,((void*)0));
    if(    result_83->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_83->str);
        stackframe();
        exit(1);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_83;
    /*i*/come_call_finalizer3(result_83,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result102__;
void* __right_value166 = (void*)0;
char* __result103__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string(reg->str)));
    /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* result_86;
int i_87;
char* __result104__;
    result_86=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_87=0;    i_87<strlen(str);    i_87++    ){
        if(        str[i_87]>=65&&str[i_87]<=90) {
            result_86[i_87]=str[i_87]-65+97;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_86;
    /* U13 */result_86 = come_decrement_ref_count2(result_86, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* result_88;
int i_89;
char* __result105__;
    result_88=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_89=0;    i_89<strlen(str);    i_89++    ){
        if(        str[i_89]>=97&&str[i_89]<=122) {
            result_88[i_89]=str[i_89]-97+65;
        }
    }
    __result105__ = gComeFunResultObject = __result_obj__ = result_88;
    /* U13 */result_88 = come_decrement_ref_count2(result_88, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

unsigned int* wchar_tp_substring(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
unsigned int* __result106__;
int len_90;
void* __right_value170 = (void*)0;
unsigned int* __result107__;
void* __right_value171 = (void*)0;
unsigned int* __result108__;
void* __right_value172 = (void*)0;
unsigned int* __result109__;
void* __right_value173 = (void*)0;
unsigned int* result_91;
unsigned int* __result110__;
    if(    str==((void*)0)) {
        __result106__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value169=__builtin_wstring("")));
        /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    len_90=wcslen(str);
    if(    head<0) {
        head+=len_90;
    }
    if(    tail<0) {
        tail+=len_90+1;
    }
    if(    head>tail) {
        __result107__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value170=__builtin_wstring("")));
        /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_90) {
        tail=len_90;
    }
    if(    head==tail) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value171=__builtin_wstring("")));
        /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(    tail-head+1<1) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value172=__builtin_wstring("")));
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    result_91=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_91,str+head,sizeof(unsigned int)*(tail-head));
    result_91[tail-head]=0;
    __result110__ = gComeFunResultObject = __result_obj__ = result_91;
    /* U13 */result_91 = come_decrement_ref_count2(result_91, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

unsigned int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
unsigned int* __result111__;
int len_92;
void* __right_value174 = (void*)0;
unsigned int* wstr_93;
int ret_94;
unsigned int* __result112__;
    if(    str==((void*)0)) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    len_92=strlen(str);
    wstr_93=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_92+1)), "libcomelang-str.c", 200, "int"));
    ret_94=mbstowcs(wstr_93,str,len_92+1);
    wstr_93[ret_94]=0;
    if(    ret_94<0) {
        wstr_93[0]=0;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = wstr_93;
    /* U13 */wstr_93 = come_decrement_ref_count2(wstr_93, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_95;
int len_96;
int i_97;
int len2_98;
int j_99;
memset(&j_99, 0, sizeof(int));
    n_95=0;
    len_96=strlen(str);
    for(    i_97=0;    i_97<len_96;    i_97++    ){
        len2_98=strlen(search_str);
        for(        j_99=0;        j_99<len2_98;        j_99++        ){
            if(            str[i_97+j_99]!=search_str[j_99]) {
                break;
            }
        }
        if(        j_99==len2_98) {
            n_95++;
            if(            n_95==count) {
                return i_97;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_100;
int result_104;
int offset_105;
const char* err_106;
int erro_ofs_107;
int options_108;
char* str_109;
struct real_pcre8_or_16* re_110;
int n_111;
int options_112;
int len_113;
int regex_result_114;
int i_115;
int i_116;
err_106 = (void*)0;
memset(&erro_ofs_107, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_100=16;
    int start_101[ovec_max_100];
    memset(&start_101, 0, sizeof(int)    *(ovec_max_100)    );
    int end_102[ovec_max_100];
    memset(&end_102, 0, sizeof(int)    *(ovec_max_100)    );
    int ovec_value_103[ovec_max_100*3];
    memset(&ovec_value_103, 0, sizeof(int)    *(ovec_max_100*3)    );
    result_104=default_value;
    offset_105=0;
    options_108=reg->options;
    str_109=reg->str;
    re_110=reg->re;
    n_111=0;
    while((_Bool)1) {
        options_112=2097152;
        len_113=strlen(self);
        regex_result_114=pcre_exec(re_110,(struct pcre_extra*)0,self,len_113,offset_105,options_112,ovec_value_103,ovec_max_100*3);
        for(        i_115=0;        i_115<ovec_max_100;        i_115++        ){
            start_101[i_115]=ovec_value_103[i_115*2];
        }
        for(        i_116=0;        i_116<ovec_max_100;        i_116++        ){
            end_102[i_116]=ovec_value_103[i_116*2+1];
        }
        if(        regex_result_114>0) {
            n_111++;
            if(            offset_105==end_102[0]) {
                offset_105++;
            }
            else {
                offset_105=end_102[0];
            }
            if(            n_111==count) {
                result_104=start_101[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_104;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_117;
char* p_118;
    len_117=strlen(search_str);
    p_118=str+strlen(str)-len_117;
    while(p_118>=str) {
        if(        strncmp(p_118,search_str,len_117)==0) {
            return p_118-str;
        }
        p_118--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_119;
int erro_ofs_120;
int options_121;
char* str_122;
struct real_pcre8_or_16* re_123;
void* __right_value175 = (void*)0;
char* self2_124;
int ovec_max_125;
int result_129;
int offset_130;
int options_131;
int len_132;
int regex_result_133;
int i_134;
int i_135;
int __result113__;
err_119 = (void*)0;
memset(&erro_ofs_120, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_121=reg->options;
    str_122=reg->str;
    re_123=reg->re;
    self2_124=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_125=16;
    int start_126[ovec_max_125];
    memset(&start_126, 0, sizeof(int)    *(ovec_max_125)    );
    int end_127[ovec_max_125];
    memset(&end_127, 0, sizeof(int)    *(ovec_max_125)    );
    int ovec_value_128[ovec_max_125*3];
    memset(&ovec_value_128, 0, sizeof(int)    *(ovec_max_125*3)    );
    result_129=default_value;
    offset_130=0;
    while((_Bool)1) {
        options_131=2097152;
        len_132=strlen(self2_124);
        regex_result_133=pcre_exec(re_123,(struct pcre_extra*)0,self2_124,len_132,offset_130,options_131,ovec_value_128,ovec_max_125*3);
        for(        i_134=0;        i_134<ovec_max_125;        i_134++        ){
            start_126[i_134]=ovec_value_128[i_134*2];
        }
        for(        i_135=0;        i_135<ovec_max_125;        i_135++        ){
            end_127[i_135]=ovec_value_128[i_135*2+1];
        }
        if(        regex_result_133==1||regex_result_133>0) {
            result_129=strlen(self)-1-start_126[0];
            break;
        }
        {
            break;
        }
    }
    __result113__ = result_129;
    /* U13 */self2_124 = come_decrement_ref_count2(self2_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result113__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_136;
char* p_137;
int n_138;
    len_136=strlen(search_str);
    p_137=str+strlen(str)-len_136;
    n_138=0;
    while(p_137>=str) {
        if(        strncmp(p_137,search_str,len_136)==0) {
            n_138++;
            if(            n_138==count) {
                return p_137-str;
            }
        }
        p_137--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1charph* __result115__;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1charph* result_139;
int offset_140;
int ovec_max_141;
const char* err_145;
int erro_ofs_146;
int options_147;
char* str_148;
struct real_pcre8_or_16* re_149;
int options_150;
int len_151;
int regex_result_152;
int i_153;
int i_154;
void* __right_value180 = (void*)0;
char* str_155;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct list$1charph* group_strings_156;
void* __right_value183 = (void*)0;
char* str2_157;
void* __right_value187 = (void*)0;
char* str_161;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* group_strings_162;
int i_163;
void* __right_value190 = (void*)0;
char* match_string_164;
void* __right_value191 = (void*)0;
char* str2_165;
struct list$1charph* __result117__;
err_145 = (void*)0;
memset(&erro_ofs_146, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    result_139=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_140=0;
    ovec_max_141=16;
    int start_142[ovec_max_141];
    memset(&start_142, 0, sizeof(int)    *(ovec_max_141)    );
    int end_143[ovec_max_141];
    memset(&end_143, 0, sizeof(int)    *(ovec_max_141)    );
    int ovec_value_144[ovec_max_141*3];
    memset(&ovec_value_144, 0, sizeof(int)    *(ovec_max_141*3)    );
    options_147=reg->options;
    str_148=reg->str;
    re_149=reg->re;
    while((_Bool)1) {
        options_150=2097152;
        len_151=strlen(self);
        regex_result_152=pcre_exec(re_149,(struct pcre_extra*)0,self,len_151,offset_140,options_150,ovec_value_144,ovec_max_141*3);
        for(        i_153=0;        i_153<ovec_max_141;        i_153++        ){
            start_142[i_153]=ovec_value_144[i_153*2];
        }
        for(        i_154=0;        i_154<ovec_max_141;        i_154++        ){
            end_143[i_154]=ovec_value_144[i_154*2+1];
        }
        if(        regex_result_152==1) {
            str_155=(char*)come_increment_ref_count(charp_substring(self,start_142[0],end_143[0]));
            group_strings_156=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_157=(char*)come_increment_ref_count(block(parent,str_155,group_strings_156));
            list$1charph_push_back(result_139,(char*)come_increment_ref_count(str2_157));
            if(            offset_140==end_143[0]) {
                offset_140++;
            }
            else {
                offset_140=end_143[0];
            }
            /* U13 */str_155 = come_decrement_ref_count2(str_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_156,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_157 = come_decrement_ref_count2(str2_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_152>1) {
            str_161=(char*)come_increment_ref_count(charp_substring(self,start_142[0],end_143[0]));
            group_strings_162=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_163=1;            i_163<regex_result_152;            i_163++            ){
                match_string_164=(char*)come_increment_ref_count(charp_substring(self,start_142[i_163],end_143[i_163]));
                list$1charph_push_back(group_strings_162,(char*)come_increment_ref_count(match_string_164));
                /* U13 */match_string_164 = come_decrement_ref_count2(match_string_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_165=(char*)come_increment_ref_count(block(parent,str_161,group_strings_162));
            list$1charph_push_back(result_139,(char*)come_increment_ref_count(str2_165));
            if(            offset_140==end_143[0]) {
                offset_140++;
            }
            else {
                offset_140=end_143[0];
            }
            /* U13 */str_161 = come_decrement_ref_count2(str_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_162,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_165 = come_decrement_ref_count2(str2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_139;
    /*i*/come_call_finalizer3(result_139,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct list_item$1charph* litem_158;
char* __dec_obj24;
void* __right_value185 = (void*)0;
struct list_item$1charph* litem_159;
char* __dec_obj25;
void* __right_value186 = (void*)0;
struct list_item$1charph* litem_160;
char* __dec_obj26;
struct list$1charph* __result116__;
    if(    self->len==0) {
        litem_158=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 219, "list_item$1charph"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        __dec_obj24=litem_158->item;
        litem_158->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value185=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 229, "list_item$1charph"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        __dec_obj25=litem_159->item;
        litem_159->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value186=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 239, "list_item$1charph"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        __dec_obj26=litem_160->item;
        litem_160->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1charph* __result118__;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1charph* result_166;
int offset_167;
int ovec_max_168;
const char* err_172;
int erro_ofs_173;
int options_174;
char* str_175;
struct real_pcre8_or_16* re_176;
int n_177;
int options_178;
int len_179;
int regex_result_180;
int i_181;
int i_182;
void* __right_value196 = (void*)0;
char* str_183;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1charph* group_strings_184;
void* __right_value199 = (void*)0;
char* str2_185;
void* __right_value200 = (void*)0;
char* str_186;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1charph* group_strings_187;
int i_188;
void* __right_value203 = (void*)0;
char* match_string_189;
void* __right_value204 = (void*)0;
char* str2_190;
struct list$1charph* __result119__;
err_172 = (void*)0;
memset(&erro_ofs_173, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result118__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value193=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value193,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    result_166=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
    offset_167=0;
    ovec_max_168=16;
    int start_169[ovec_max_168];
    memset(&start_169, 0, sizeof(int)    *(ovec_max_168)    );
    int end_170[ovec_max_168];
    memset(&end_170, 0, sizeof(int)    *(ovec_max_168)    );
    int ovec_value_171[ovec_max_168*3];
    memset(&ovec_value_171, 0, sizeof(int)    *(ovec_max_168*3)    );
    options_174=reg->options;
    str_175=reg->str;
    re_176=reg->re;
    n_177=0;
    while((_Bool)1) {
        options_178=2097152;
        len_179=strlen(self);
        regex_result_180=pcre_exec(re_176,(struct pcre_extra*)0,self,len_179,offset_167,options_178,ovec_value_171,ovec_max_168*3);
        for(        i_181=0;        i_181<ovec_max_168;        i_181++        ){
            start_169[i_181]=ovec_value_171[i_181*2];
        }
        for(        i_182=0;        i_182<ovec_max_168;        i_182++        ){
            end_170[i_182]=ovec_value_171[i_182*2+1];
        }
        if(        regex_result_180==1) {
            str_183=(char*)come_increment_ref_count(charp_substring(self,start_169[0],end_170[0]));
            group_strings_184=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_185=(char*)come_increment_ref_count(block(parent,str_183,group_strings_184));
            list$1charph_push_back(result_166,(char*)come_increment_ref_count(str2_185));
            if(            offset_167==end_170[0]) {
                offset_167++;
            }
            else {
                offset_167=end_170[0];
            }
            n_177++;
            if(            n_177==count) {
                /* U13 */str_183 = come_decrement_ref_count2(str_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_184,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_185 = come_decrement_ref_count2(str2_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_183 = come_decrement_ref_count2(str_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_184,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_185 = come_decrement_ref_count2(str2_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_180>1) {
            str_186=(char*)come_increment_ref_count(charp_substring(self,start_169[0],end_170[0]));
            group_strings_187=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_188=1;            i_188<regex_result_180;            i_188++            ){
                match_string_189=(char*)come_increment_ref_count(charp_substring(self,start_169[i_188],end_170[i_188]));
                list$1charph_push_back(group_strings_187,(char*)come_increment_ref_count(match_string_189));
                /* U13 */match_string_189 = come_decrement_ref_count2(match_string_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_190=(char*)come_increment_ref_count(block(parent,str_186,group_strings_187));
            list$1charph_push_back(result_166,(char*)come_increment_ref_count(str2_190));
            if(            offset_167==end_170[0]) {
                offset_167++;
            }
            else {
                offset_167=end_170[0];
            }
            n_177++;
            if(            n_177==count) {
                /* U13 */str_186 = come_decrement_ref_count2(str_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_187,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_190 = come_decrement_ref_count2(str2_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_186 = come_decrement_ref_count2(str_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_187,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_190 = come_decrement_ref_count2(str2_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_166;
    /*i*/come_call_finalizer3(result_166,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1charph* __result120__;
const char* err_191;
int erro_ofs_192;
int options_193;
char* str_194;
struct real_pcre8_or_16* re_195;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1charph* result_196;
int offset_197;
int ovec_max_198;
int options_202;
int len_203;
int regex_result_204;
int i_205;
int i_206;
void* __right_value209 = (void*)0;
char* str_207;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct list$1charph* match_strings_208;
void* __right_value212 = (void*)0;
char* str2_209;
void* __right_value213 = (void*)0;
char* str_210;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct list$1charph* match_strings_211;
int i_212;
void* __right_value216 = (void*)0;
char* match_str_213;
void* __right_value217 = (void*)0;
char* str2_214;
void* __right_value218 = (void*)0;
char* str_215;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1charph* match_strings_216;
void* __right_value221 = (void*)0;
char* str2_217;
struct list$1charph* __result121__;
err_191 = (void*)0;
memset(&erro_ofs_192, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result120__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value206=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value206,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result120__;
    }
    options_193=reg->options;
    str_194=reg->str;
    re_195=reg->re;
    result_196=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_197=0;
    ovec_max_198=16;
    int start_199[ovec_max_198];
    memset(&start_199, 0, sizeof(int)    *(ovec_max_198)    );
    int end_200[ovec_max_198];
    memset(&end_200, 0, sizeof(int)    *(ovec_max_198)    );
    int ovec_value_201[ovec_max_198*3];
    memset(&ovec_value_201, 0, sizeof(int)    *(ovec_max_198*3)    );
    while((_Bool)1) {
        options_202=2097152;
        len_203=strlen(self);
        regex_result_204=pcre_exec(re_195,(struct pcre_extra*)0,self,len_203,offset_197,options_202,ovec_value_201,ovec_max_198*3);
        for(        i_205=0;        i_205<ovec_max_198;        i_205++        ){
            start_199[i_205]=ovec_value_201[i_205*2];
        }
        for(        i_206=0;        i_206<ovec_max_198;        i_206++        ){
            end_200[i_206]=ovec_value_201[i_206*2+1];
        }
        if(        regex_result_204==1) {
            str_207=(char*)come_increment_ref_count(charp_substring(self,offset_197,start_199[0]));
            match_strings_208=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_209=(char*)come_increment_ref_count(block(parent,str_207,match_strings_208));
            list$1charph_push_back(result_196,(char*)come_increment_ref_count(str2_209));
            if(            offset_197==end_200[0]) {
                offset_197++;
            }
            else {
                offset_197=end_200[0];
            }
            /* U13 */str_207 = come_decrement_ref_count2(str_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_209 = come_decrement_ref_count2(str2_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_204>1) {
            str_210=(char*)come_increment_ref_count(charp_substring(self,offset_197,start_199[0]));
            if(            offset_197==end_200[0]) {
                offset_197++;
            }
            else {
                offset_197=end_200[0];
            }
            match_strings_211=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_212=1;            i_212<regex_result_204;            i_212++            ){
                match_str_213=(char*)come_increment_ref_count(charp_substring(self,start_199[i_212],end_200[i_212]));
                list$1charph_push_back(match_strings_211,(char*)come_increment_ref_count(match_str_213));
                /* U13 */match_str_213 = come_decrement_ref_count2(match_str_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_214=(char*)come_increment_ref_count(block(parent,str_210,match_strings_211));
            list$1charph_push_back(result_196,(char*)come_increment_ref_count(str2_214));
            /* U13 */str_210 = come_decrement_ref_count2(str_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_211,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_214 = come_decrement_ref_count2(str2_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_197<charp_length(self)) {
        str_215=(char*)come_increment_ref_count(charp_substring(self,offset_197,-1));
        match_strings_216=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_217=(char*)come_increment_ref_count(block(parent,str_215,match_strings_216));
        list$1charph_push_back(result_196,(char*)come_increment_ref_count(str2_217));
        /* U13 */str_215 = come_decrement_ref_count2(str_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_216,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_217 = come_decrement_ref_count2(str2_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = result_196;
    /*i*/come_call_finalizer3(result_196,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1charph* __result122__;
const char* err_218;
int erro_ofs_219;
int options_220;
char* str_221;
struct real_pcre8_or_16* re_222;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1charph* result_223;
int offset_224;
int ovec_max_225;
int n_229;
int options_230;
int len_231;
int regex_result_232;
int i_233;
int i_234;
void* __right_value226 = (void*)0;
char* str_235;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1charph* match_strings_236;
void* __right_value229 = (void*)0;
char* str2_237;
void* __right_value230 = (void*)0;
char* str_238;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct list$1charph* match_strings_239;
int i_240;
void* __right_value233 = (void*)0;
char* match_str_241;
void* __right_value234 = (void*)0;
char* str2_242;
struct list$1charph* __result123__;
err_218 = (void*)0;
memset(&erro_ofs_219, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result122__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value223=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value223,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    options_220=reg->options;
    str_221=reg->str;
    re_222=reg->re;
    result_223=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_224=0;
    ovec_max_225=16;
    int start_226[ovec_max_225];
    memset(&start_226, 0, sizeof(int)    *(ovec_max_225)    );
    int end_227[ovec_max_225];
    memset(&end_227, 0, sizeof(int)    *(ovec_max_225)    );
    int ovec_value_228[ovec_max_225*3];
    memset(&ovec_value_228, 0, sizeof(int)    *(ovec_max_225*3)    );
    n_229=0;
    while((_Bool)1) {
        options_230=2097152;
        len_231=strlen(self);
        regex_result_232=pcre_exec(re_222,(struct pcre_extra*)0,self,len_231,offset_224,options_230,ovec_value_228,ovec_max_225*3);
        for(        i_233=0;        i_233<ovec_max_225;        i_233++        ){
            start_226[i_233]=ovec_value_228[i_233*2];
        }
        for(        i_234=0;        i_234<ovec_max_225;        i_234++        ){
            end_227[i_234]=ovec_value_228[i_234*2+1];
        }
        if(        regex_result_232==1) {
            str_235=(char*)come_increment_ref_count(charp_substring(self,offset_224,start_226[0]));
            match_strings_236=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_237=(char*)come_increment_ref_count(block(parent,str_235,match_strings_236));
            list$1charph_push_back(result_223,(char*)come_increment_ref_count(str2_237));
            if(            offset_224==end_227[0]) {
                offset_224++;
            }
            else {
                offset_224=end_227[0];
            }
            /* U13 */str_235 = come_decrement_ref_count2(str_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_236,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_237 = come_decrement_ref_count2(str2_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_232>1) {
            str_238=(char*)come_increment_ref_count(charp_substring(self,offset_224,start_226[0]));
            if(            offset_224==end_227[0]) {
                offset_224++;
            }
            else {
                offset_224=end_227[0];
            }
            match_strings_239=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_240=1;            i_240<regex_result_232;            i_240++            ){
                match_str_241=(char*)come_increment_ref_count(charp_substring(self,start_226[i_240],end_227[i_240]));
                list$1charph_push_back(match_strings_239,(char*)come_increment_ref_count(match_str_241));
                /* U13 */match_str_241 = come_decrement_ref_count2(match_str_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_242=(char*)come_increment_ref_count(block(parent,str_238,match_strings_239));
            list$1charph_push_back(result_223,(char*)come_increment_ref_count(str2_242));
            /* U13 */str_238 = come_decrement_ref_count2(str_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_239,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_242 = come_decrement_ref_count2(str2_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_229++;
        if(        n_229==count) {
            break;
        }
    }
    __result123__ = gComeFunResultObject = __result_obj__ = result_223;
    /*i*/come_call_finalizer3(result_223,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1charph* __result124__;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct list$1charph* result_243;
int offset_244;
int ovec_max_245;
const char* err_249;
int erro_ofs_250;
int options_251;
char* str_252;
struct real_pcre8_or_16* re_253;
int options_254;
int len_255;
int regex_result_256;
int i_257;
int i_258;
void* __right_value239 = (void*)0;
char* str_259;
void* __right_value240 = (void*)0;
char* str_260;
int i_261;
void* __right_value241 = (void*)0;
char* match_string_262;
struct list$1charph* __result125__;
err_249 = (void*)0;
memset(&erro_ofs_250, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result124__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value236=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value236,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    result_243=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_244=0;
    ovec_max_245=16;
    int start_246[ovec_max_245];
    memset(&start_246, 0, sizeof(int)    *(ovec_max_245)    );
    int end_247[ovec_max_245];
    memset(&end_247, 0, sizeof(int)    *(ovec_max_245)    );
    int ovec_value_248[ovec_max_245*3];
    memset(&ovec_value_248, 0, sizeof(int)    *(ovec_max_245*3)    );
    options_251=reg->options;
    str_252=reg->str;
    re_253=reg->re;
    while((_Bool)1) {
        options_254=2097152;
        len_255=strlen(self);
        regex_result_256=pcre_exec(re_253,(struct pcre_extra*)0,self,len_255,offset_244,options_254,ovec_value_248,ovec_max_245*3);
        for(        i_257=0;        i_257<ovec_max_245;        i_257++        ){
            start_246[i_257]=ovec_value_248[i_257*2];
        }
        for(        i_258=0;        i_258<ovec_max_245;        i_258++        ){
            end_247[i_258]=ovec_value_248[i_258*2+1];
        }
        if(        regex_result_256==1) {
            str_259=(char*)come_increment_ref_count(charp_substring(self,start_246[0],end_247[0]));
            list$1charph_push_back(result_243,(char*)come_increment_ref_count(str_259));
            if(            offset_244==end_247[0]) {
                offset_244++;
            }
            else {
                offset_244=end_247[0];
            }
            /* U13 */str_259 = come_decrement_ref_count2(str_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_256>1) {
            str_260=(char*)come_increment_ref_count(charp_substring(self,start_246[0],end_247[0]));
            list$1charph_push_back(result_243,(char*)come_increment_ref_count(str_260));
            if(            offset_244==end_247[0]) {
                offset_244++;
            }
            else {
                offset_244=end_247[0];
            }
            *num_group_string_in_regex=regex_result_256-1;
            for(            i_261=1;            i_261<regex_result_256;            i_261++            ){
                match_string_262=(char*)come_increment_ref_count(charp_substring(self,start_246[i_261],end_247[i_261]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_262));
                /* U13 */match_string_262 = come_decrement_ref_count2(match_string_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_260 = come_decrement_ref_count2(str_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result125__ = gComeFunResultObject = __result_obj__ = result_243;
    /*i*/come_call_finalizer3(result_243,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
char* result_263;
int len_264;
char* __result126__;
    result_263=(char*)come_increment_ref_count(__builtin_string(self));
    len_264=strlen(self);
    if(    self[len_264-1]==10) {
        result_263[len_264-1]=0;
    }
    else if(    self[len_264-1]==13) {
        result_263[len_264-1]=0;
    }
    else if(    len_264>2&&self[len_264-2]==13&&self[len_264-1]==10) {
        result_263[len_264-2]=0;
    }
    __result126__ = gComeFunResultObject = __result_obj__ = result_263;
    /* U13 */result_263 = come_decrement_ref_count2(result_263, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_265;
void* __right_value243 = (void*)0;
char* result_266;
int n_267;
int i_268;
char c_269;
char* __result127__;
    len_265=charp_length(str);
    result_266=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_265*2+1)), "libcomelang-str.c", 893, "char"));
    n_267=0;
    for(    i_268=0;    i_268<len_265;    i_268++    ){
        c_269=str[i_268];
        if(        (c_269>=0&&c_269<32)||c_269==127) {
            result_266[n_267++]=94;
            result_266[n_267++]=c_269+65-1;
        }
        else {
            result_266[n_267++]=c_269;
        }
    }
    result_266[n_267]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = result_266;
    /* U13 */result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

char* wchar_tp_to_string(unsigned int* wstr){
void* __result_obj__=(void*)0;
int len_270;
void* __right_value244 = (void*)0;
char* result_271;
char* __result128__;
    len_270=4*(wcslen(wstr)+1);
    result_271=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_270)), "libcomelang-str.c", 919, "char"));
    if(    wcstombs(result_271,wstr,len_270)<0) {
        strncpy(result_271,"",len_270);
    }
    __result128__ = gComeFunResultObject = __result_obj__ = result_271;
    /* U13 */result_271 = come_decrement_ref_count2(result_271, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

unsigned int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
unsigned int* __result129__;
    __result129__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value245=__builtin_wstring(str)));
    /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

int wchar_tp_length(unsigned int* str){
    return wcslen(str);
}

unsigned int* wchar_tp_delete(unsigned int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_272;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
unsigned int* __result130__;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
unsigned int* __result131__;
void* __right_value250 = (void*)0;
unsigned int* sub_str_273;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
unsigned int* __result132__;
    len_272=wcslen(str);
    if(    len_272==0) {
        __result130__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value247=string_to_wstring(((char*)(__right_value246=wchar_tp_to_string(str))))));
        /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    if(    head<0) {
        head+=len_272;
    }
    if(    tail<0) {
        tail+=len_272+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result131__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value249=string_to_wstring(((char*)(__right_value248=wchar_tp_to_string(str))))));
        /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    if(    tail>=len_272) {
        tail=len_272;
    }
    sub_str_273=(unsigned int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_273,sizeof(unsigned int)*(wstring_length(sub_str_273)+1));
    __result132__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value252=string_to_wstring(((char*)(__right_value251=wchar_tp_to_string(str))))));
    /* U13 */sub_str_273 = come_decrement_ref_count2(sub_str_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

int wchar_tp_index(unsigned int* str, unsigned int* search_str, int default_value){
unsigned int* head_274;
    head_274=wcsstr(str,search_str);
    if(    head_274==((void*)0)) {
        return default_value;
    }
    return head_274-str;
}

int wchar_tp_rindex(unsigned int* str, unsigned int* search_str, int default_value){
int len_275;
unsigned int* p_276;
int len2_277;
_Bool result_278;
int i_279;
memset(&i_279, 0, sizeof(int));
    len_275=wcslen(search_str);
    p_276=str+wcslen(str)-len_275;
    while(p_276>=str) {
        len2_277=wcslen(p_276);
        result_278=(_Bool)1;
        for(        i_279=0;        i_279<len_275&&i_279<len2_277;        i_279++        ){
            if(            p_276[i_279]!=search_str[i_279]) {
                result_278=(_Bool)0;
            }
        }
        if(        result_278) {
            return (p_276-str);
        }
        p_276--;
    }
    return default_value;
}

unsigned int* wchar_tp_reverse(unsigned int* str){
void* __result_obj__=(void*)0;
int len_280;
void* __right_value253 = (void*)0;
unsigned int* result_281;
int i_282;
unsigned int* __result133__;
    len_280=wcslen(str);
    result_281=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_280+1)), "libcomelang-str.c", 1019, "int"));
    for(    i_282=0;    i_282<len_280;    i_282++    ){
        result_281[i_282]=str[len_280-i_282-1];
    }
    result_281[len_280]=0;
    __result133__ = gComeFunResultObject = __result_obj__ = result_281;
    /* U13 */result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

unsigned int* wchar_tp_multiply(unsigned int* str, int n){
void* __result_obj__=(void*)0;
int len_283;
void* __right_value254 = (void*)0;
unsigned int* result_284;
int i_285;
unsigned int* __result134__;
    len_283=wcslen(str)*n+1;
    result_284=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_283)), "libcomelang-str.c", 1034, "int"));
    result_284[0]=0;
    for(    i_285=0;    i_285<n;    i_285++    ){
        wcscat(result_284,str);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_284;
    /* U13 */result_284 = come_decrement_ref_count2(result_284, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

unsigned int* wchar_tp_printable(unsigned int* str){
void* __result_obj__=(void*)0;
int len_286;
void* __right_value255 = (void*)0;
unsigned int* result_287;
int n_288;
int i_289;
unsigned int c_290;
unsigned int* __result135__;
    len_286=wchar_tp_length(str);
    result_287=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_286*2+1)), "libcomelang-str.c", 1048, "int"));
    n_288=0;
    for(    i_289=0;    i_289<len_286;    i_289++    ){
        c_290=str[i_289];
        if(        (c_290>=0&&c_290<32)||c_290==127) {
            result_287[n_288++]=94;
            result_287[n_288++]=c_290+65-1;
        }
        else {
            result_287[n_288++]=c_290;
        }
    }
    result_287[n_288]=0;
    __result135__ = gComeFunResultObject = __result_obj__ = result_287;
    /* U13 */result_287 = come_decrement_ref_count2(result_287, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_291;
int ovec_max_292;
const char* err_296;
int erro_ofs_297;
int options_298;
char* str_299;
struct real_pcre8_or_16* re_300;
int n_301;
int options_302;
int len_303;
int regex_result_304;
int i_305;
int i_306;
int i_309;
void* __right_value256 = (void*)0;
char* match_string_310;
err_296 = (void*)0;
memset(&erro_ofs_297, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_291=0;
    ovec_max_292=16;
    int start_293[ovec_max_292];
    memset(&start_293, 0, sizeof(int)    *(ovec_max_292)    );
    int end_294[ovec_max_292];
    memset(&end_294, 0, sizeof(int)    *(ovec_max_292)    );
    int ovec_value_295[ovec_max_292*3];
    memset(&ovec_value_295, 0, sizeof(int)    *(ovec_max_292*3)    );
    options_298=reg->options;
    str_299=reg->str;
    re_300=reg->re;
    n_301=0;
    while((_Bool)1) {
        options_302=2097152;
        len_303=strlen(self);
        regex_result_304=pcre_exec(re_300,(struct pcre_extra*)0,self,len_303,offset_291,options_302,ovec_value_295,ovec_max_292*3);
        for(        i_305=0;        i_305<ovec_max_292;        i_305++        ){
            start_293[i_305]=ovec_value_295[i_305*2];
        }
        for(        i_306=0;        i_306<ovec_max_292;        i_306++        ){
            end_294[i_306]=ovec_value_295[i_306*2+1];
        }
        if(        regex_result_304==1||(group_strings==((void*)0)&&regex_result_304>0)) {
            n_301++;
            if(            n_301==count) {
                return (_Bool)1;
            }
            if(            offset_291==end_294[0]) {
                offset_291++;
            }
            else {
                offset_291=end_294[0];
            }
        }
        else if(        regex_result_304>1) {
            n_301++;
            list$1charph_reset(group_strings);
            for(            i_309=1;            i_309<regex_result_304;            i_309++            ){
                match_string_310=(char*)come_increment_ref_count(charp_substring(self,start_293[i_309],end_294[i_309]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_310));
                /* U13 */match_string_310 = come_decrement_ref_count2(match_string_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_301==count) {
                return (_Bool)1;
            }
            if(            offset_291==end_294[0]) {
                offset_291++;
            }
            else {
                offset_291=end_294[0];
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
struct list_item$1charph* it_307;
struct list_item$1charph* prev_it_308;
struct list$1charph* __result136__;
    it_307=self->head;
    while(it_307!=((void*)0)) {
        prev_it_308=it_307;
        it_307=it_307->next;
        /*i*/come_call_finalizer3(prev_it_308,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
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
void* __right_value257 = (void*)0;
unsigned int* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value257=wchar_tp_multiply(str,n)));
    /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

unsigned int* wstring_operator_mult(unsigned int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
unsigned int* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((unsigned int*)(__right_value258=wchar_tp_multiply(str,n)));
    /* U11 */__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
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
void* __right_value259 = (void*)0;
unsigned int* result_311;
unsigned int* __result139__;
    result_311=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1219, "int"));
    wcscpy(result_311,left);
    wcscat(result_311,right);
    __result139__ = gComeFunResultObject = __result_obj__ = result_311;
    /* U13 */result_311 = come_decrement_ref_count2(result_311, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

unsigned int* wstring_operator_add(unsigned int* left, unsigned int* right){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
unsigned int* result_312;
unsigned int* __result140__;
    result_312=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1229, "int"));
    wcscpy(result_312,left);
    wcscat(result_312,right);
    __result140__ = gComeFunResultObject = __result_obj__ = result_312;
    /* U13 */result_312 = come_decrement_ref_count2(result_312, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_313;
    head_313=strstr(str,search_str);
    if(    head_313==((void*)0)) {
        return default_value;
    }
    return head_313-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_314;
int result_318;
int offset_319;
const char* err_320;
int erro_ofs_321;
int options_322;
char* str_323;
struct real_pcre8_or_16* re_324;
int options_325;
int len_326;
int regex_result_327;
int i_328;
int i_329;
err_320 = (void*)0;
memset(&erro_ofs_321, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_314=16;
    int start_315[ovec_max_314];
    memset(&start_315, 0, sizeof(int)    *(ovec_max_314)    );
    int end_316[ovec_max_314];
    memset(&end_316, 0, sizeof(int)    *(ovec_max_314)    );
    int ovec_value_317[ovec_max_314*3];
    memset(&ovec_value_317, 0, sizeof(int)    *(ovec_max_314*3)    );
    result_318=default_value;
    offset_319=0;
    options_322=reg->options;
    str_323=reg->str;
    re_324=reg->re;
    while((_Bool)1) {
        options_325=2097152;
        len_326=strlen(self);
        regex_result_327=pcre_exec(re_324,(struct pcre_extra*)0,self,len_326,offset_319,options_325,ovec_value_317,ovec_max_314*3);
        for(        i_328=0;        i_328<ovec_max_314;        i_328++        ){
            start_315[i_328]=ovec_value_317[i_328*2];
        }
        for(        i_329=0;        i_329<ovec_max_314;        i_329++        ){
            end_316[i_329]=ovec_value_317[i_329*2+1];
        }
        if(        regex_result_327==1||regex_result_327>0) {
            result_318=start_315[0];
            break;
        }
        {
            break;
        }
    }
    return result_318;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_330;
void* __right_value261 = (void*)0;
char* __result141__;
void* __right_value262 = (void*)0;
char* __result142__;
    len_330=strlen(self);
    if(    strcmp(self,"")==0) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(self)));
        /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    index<0) {
        index+=len_330;
    }
    if(    index>=len_330) {
        index=len_330-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=__builtin_string(self)));
    /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_331;
void* __right_value263 = (void*)0;
char* result_332;
int i_333;
char* __result143__;
    len_331=strlen(str)*n+1;
    result_332=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_331)), "libcomelang-str.c", 1330, "char"));
    result_332[0]=0;
    for(    i_333=0;    i_333<n;    i_333++    ){
        strcat(result_332,str);
    }
    __result143__ = gComeFunResultObject = __result_obj__ = result_332;
    /* U13 */result_332 = come_decrement_ref_count2(result_332, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
char* __result144__;
int offset_334;
int ovec_max_335;
const char* err_339;
int erro_ofs_340;
int options_341;
char* str_342;
struct real_pcre8_or_16* re_343;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct buffer* result_344;
int options_345;
int len_346;
int regex_result_347;
int i_348;
int i_349;
void* __right_value267 = (void*)0;
char* str_350;
void* __right_value268 = (void*)0;
char* str_351;
void* __right_value269 = (void*)0;
char* str_352;
void* __right_value270 = (void*)0;
char* __result145__;
err_339 = (void*)0;
memset(&erro_ofs_340, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value264=__builtin_string(self)));
        /* U11 */__right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    offset_334=0;
    ovec_max_335=16;
    int start_336[ovec_max_335];
    memset(&start_336, 0, sizeof(int)    *(ovec_max_335)    );
    int end_337[ovec_max_335];
    memset(&end_337, 0, sizeof(int)    *(ovec_max_335)    );
    int ovec_value_338[ovec_max_335*3];
    memset(&ovec_value_338, 0, sizeof(int)    *(ovec_max_335*3)    );
    options_341=reg->options;
    str_342=reg->str;
    re_343=reg->re;
    result_344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1361, "buffer"))));
    while((_Bool)1) {
        options_345=2097152;
        len_346=strlen(self);
        regex_result_347=pcre_exec(re_343,(struct pcre_extra*)0,self,len_346,offset_334,options_345,ovec_value_338,ovec_max_335*3);
        for(        i_348=0;        i_348<ovec_max_335;        i_348++        ){
            start_336[i_348]=ovec_value_338[i_348*2];
        }
        for(        i_349=0;        i_349<ovec_max_335;        i_349++        ){
            end_337[i_349]=ovec_value_338[i_349*2+1];
        }
        if(        regex_result_347==1) {
            str_350=(char*)come_increment_ref_count(charp_substring(self,offset_334,start_336[0]));
            buffer_append_str(result_344,str_350);
            buffer_append_str(result_344,replace);
            if(            offset_334==end_337[0]) {
                offset_334++;
            }
            else {
                offset_334=end_337[0];
            }
            if(            !reg->global) {
                str_351=(char*)come_increment_ref_count(charp_substring(self,offset_334,-1));
                buffer_append_str(result_344,str_351);
                /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_350 = come_decrement_ref_count2(str_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_350 = come_decrement_ref_count2(str_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_352=(char*)come_increment_ref_count(charp_substring(self,offset_334,-1));
            buffer_append_str(result_344,str_352);
            /* U13 */str_352 = come_decrement_ref_count2(str_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_352 = come_decrement_ref_count2(str_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=buffer_to_string(result_344)));
    /*i*/come_call_finalizer3(result_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
char* __result146__;
int offset_353;
int ovec_max_354;
const char* err_358;
int erro_ofs_359;
int options_360;
char* str_361;
struct real_pcre8_or_16* re_362;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct buffer* result_363;
int n_364;
int options_365;
int len_366;
int regex_result_367;
int i_368;
int i_369;
void* __right_value274 = (void*)0;
char* str_370;
void* __right_value275 = (void*)0;
char* str_371;
void* __right_value276 = (void*)0;
char* str_372;
void* __right_value277 = (void*)0;
char* str_373;
void* __right_value278 = (void*)0;
char* __result147__;
err_358 = (void*)0;
memset(&erro_ofs_359, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=__builtin_string(self)));
        /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    offset_353=0;
    ovec_max_354=16;
    int start_355[ovec_max_354];
    memset(&start_355, 0, sizeof(int)    *(ovec_max_354)    );
    int end_356[ovec_max_354];
    memset(&end_356, 0, sizeof(int)    *(ovec_max_354)    );
    int ovec_value_357[ovec_max_354*3];
    memset(&ovec_value_357, 0, sizeof(int)    *(ovec_max_354*3)    );
    options_360=reg->options;
    str_361=reg->str;
    re_362=reg->re;
    result_363=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1427, "buffer"))));
    n_364=0;
    while((_Bool)1) {
        options_365=2097152;
        len_366=strlen(self);
        regex_result_367=pcre_exec(re_362,(struct pcre_extra*)0,self,len_366,offset_353,options_365,ovec_value_357,ovec_max_354*3);
        for(        i_368=0;        i_368<ovec_max_354;        i_368++        ){
            start_355[i_368]=ovec_value_357[i_368*2];
        }
        for(        i_369=0;        i_369<ovec_max_354;        i_369++        ){
            end_356[i_369]=ovec_value_357[i_369*2+1];
        }
        if(        regex_result_367==1) {
            n_364++;
            str_370=(char*)come_increment_ref_count(charp_substring(self,offset_353,start_355[0]));
            buffer_append_str(result_363,str_370);
            buffer_append_str(result_363,replace);
            if(            offset_353==end_356[0]) {
                offset_353++;
            }
            else {
                offset_353=end_356[0];
            }
            if(            !reg->global) {
                str_371=(char*)come_increment_ref_count(charp_substring(self,offset_353,-1));
                buffer_append_str(result_363,str_371);
                /* U13 */str_371 = come_decrement_ref_count2(str_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_370 = come_decrement_ref_count2(str_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_371 = come_decrement_ref_count2(str_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_364==count) {
                str_372=(char*)come_increment_ref_count(charp_substring(self,offset_353,-1));
                buffer_append_str(result_363,str_372);
                /* U13 */str_372 = come_decrement_ref_count2(str_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_370 = come_decrement_ref_count2(str_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_372 = come_decrement_ref_count2(str_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_370 = come_decrement_ref_count2(str_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_373=(char*)come_increment_ref_count(charp_substring(self,offset_353,-1));
            buffer_append_str(result_363,str_373);
            /* U13 */str_373 = come_decrement_ref_count2(str_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_373 = come_decrement_ref_count2(str_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value278=buffer_to_string(result_363)));
    /*i*/come_call_finalizer3(result_363,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* result_374;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct buffer* buf_375;
int i_376;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* __result148__;
    result_374=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1486, "list$1charph"))));
    buf_375=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1488, "buffer"))));
    for(    i_376=0;    i_376<charp_length(self);    i_376++    ){
        if(        strstr(self+i_376,str)==self+i_376) {
            list$1charph_push_back(result_374,(char*)come_increment_ref_count(__builtin_string(buf_375->buf)));
            buffer_reset(buf_375);
            i_376+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_375,self[i_376]);
        }
    }
    if(    buffer_length(buf_375)!=0) {
        list$1charph_push_back(result_374,(char*)come_increment_ref_count(__builtin_string(buf_375->buf)));
    }
    __result148__ = gComeFunResultObject = __result_obj__ = result_374;
    /*i*/come_call_finalizer3(result_374,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_375,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1charph* __result149__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1charph* result_377;
int offset_378;
int ovec_max_379;
const char* err_383;
int erro_ofs_384;
int options_385;
char* str_386;
struct real_pcre8_or_16* re_387;
int options_388;
int len_389;
int regex_result_390;
int i_391;
int i_392;
void* __right_value289 = (void*)0;
char* str_393;
void* __right_value290 = (void*)0;
char* str_394;
int i_395;
void* __right_value291 = (void*)0;
char* match_string_396;
struct list$1charph* __result150__;
err_383 = (void*)0;
memset(&erro_ofs_384, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value286=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1510, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value286,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_377=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1512, "list$1charph"))));
    offset_378=0;
    ovec_max_379=16;
    int start_380[ovec_max_379];
    memset(&start_380, 0, sizeof(int)    *(ovec_max_379)    );
    int end_381[ovec_max_379];
    memset(&end_381, 0, sizeof(int)    *(ovec_max_379)    );
    int ovec_value_382[ovec_max_379*3];
    memset(&ovec_value_382, 0, sizeof(int)    *(ovec_max_379*3)    );
    options_385=reg->options;
    str_386=reg->str;
    re_387=reg->re;
    while((_Bool)1) {
        options_388=2097152;
        len_389=strlen(self);
        regex_result_390=pcre_exec(re_387,(struct pcre_extra*)0,self,len_389,offset_378,options_388,ovec_value_382,ovec_max_379*3);
        for(        i_391=0;        i_391<ovec_max_379;        i_391++        ){
            start_380[i_391]=ovec_value_382[i_391*2];
        }
        for(        i_392=0;        i_392<ovec_max_379;        i_392++        ){
            end_381[i_392]=ovec_value_382[i_392*2+1];
        }
        if(        regex_result_390==1) {
            str_393=(char*)come_increment_ref_count(charp_substring(self,start_380[0],end_381[0]));
            list$1charph_push_back(result_377,(char*)come_increment_ref_count(str_393));
            if(            offset_378==end_381[0]) {
                offset_378++;
            }
            else {
                offset_378=end_381[0];
            }
            /* U13 */str_393 = come_decrement_ref_count2(str_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_390>1) {
            str_394=(char*)come_increment_ref_count(charp_substring(self,start_380[0],end_381[0]));
            list$1charph_push_back(result_377,(char*)come_increment_ref_count(str_394));
            if(            offset_378==end_381[0]) {
                offset_378++;
            }
            else {
                offset_378=end_381[0];
            }
            for(            i_395=1;            i_395<regex_result_390;            i_395++            ){
                match_string_396=(char*)come_increment_ref_count(charp_substring(self,start_380[i_395],end_381[i_395]));
                list$1charph_push_back(result_377,(char*)come_increment_ref_count(match_string_396));
                /* U13 */match_string_396 = come_decrement_ref_count2(match_string_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_394 = come_decrement_ref_count2(str_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result150__ = gComeFunResultObject = __result_obj__ = result_377;
    /*i*/come_call_finalizer3(result_377,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1charph* __result151__;
const char* err_397;
int erro_ofs_398;
int options_399;
char* str_400;
struct real_pcre8_or_16* re_401;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1charph* result_402;
int offset_403;
int ovec_max_404;
int options_408;
int len_409;
int regex_result_410;
int i_411;
int i_412;
void* __right_value296 = (void*)0;
char* str_413;
void* __right_value297 = (void*)0;
char* str_414;
int i_415;
void* __right_value298 = (void*)0;
char* match_str_416;
void* __right_value299 = (void*)0;
char* str_417;
struct list$1charph* __result152__;
err_397 = (void*)0;
memset(&erro_ofs_398, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value293=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1586, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value293,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    options_399=reg->options;
    str_400=reg->str;
    re_401=reg->re;
    result_402=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1596, "list$1charph"))));
    offset_403=0;
    ovec_max_404=16;
    int start_405[ovec_max_404];
    memset(&start_405, 0, sizeof(int)    *(ovec_max_404)    );
    int end_406[ovec_max_404];
    memset(&end_406, 0, sizeof(int)    *(ovec_max_404)    );
    int ovec_value_407[ovec_max_404*3];
    memset(&ovec_value_407, 0, sizeof(int)    *(ovec_max_404*3)    );
    while((_Bool)1) {
        options_408=2097152;
        len_409=strlen(self);
        regex_result_410=pcre_exec(re_401,(struct pcre_extra*)0,self,len_409,offset_403,options_408,ovec_value_407,ovec_max_404*3);
        for(        i_411=0;        i_411<ovec_max_404;        i_411++        ){
            start_405[i_411]=ovec_value_407[i_411*2];
        }
        for(        i_412=0;        i_412<ovec_max_404;        i_412++        ){
            end_406[i_412]=ovec_value_407[i_412*2+1];
        }
        if(        regex_result_410==1) {
            str_413=(char*)come_increment_ref_count(charp_substring(self,offset_403,start_405[0]));
            list$1charph_push_back(result_402,(char*)come_increment_ref_count(str_413));
            if(            offset_403==end_406[0]) {
                offset_403++;
            }
            else {
                offset_403=end_406[0];
            }
            /* U13 */str_413 = come_decrement_ref_count2(str_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_410>1) {
            str_414=(char*)come_increment_ref_count(charp_substring(self,offset_403,start_405[0]));
            list$1charph_push_back(result_402,(char*)come_increment_ref_count(str_414));
            if(            offset_403==end_406[0]) {
                offset_403++;
            }
            else {
                offset_403=end_406[0];
            }
            for(            i_415=1;            i_415<regex_result_410;            i_415++            ){
                match_str_416=(char*)come_increment_ref_count(charp_substring(self,start_405[i_415],end_406[i_415]));
                list$1charph_push_back(result_402,(char*)come_increment_ref_count(match_str_416));
                /* U13 */match_str_416 = come_decrement_ref_count2(match_str_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_414 = come_decrement_ref_count2(str_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_403<charp_length(self)) {
        str_417=(char*)come_increment_ref_count(charp_substring(self,offset_403,-1));
        list$1charph_push_back(result_402,(char*)come_increment_ref_count(str_417));
        /* U13 */str_417 = come_decrement_ref_count2(str_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result152__ = gComeFunResultObject = __result_obj__ = result_402;
    /*i*/come_call_finalizer3(result_402,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_418;
int ovec_max_419;
const char* err_423;
int erro_ofs_424;
int options_425;
char* str_426;
struct real_pcre8_or_16* re_427;
int options_428;
int len_429;
int regex_result_430;
int i_431;
int i_432;
err_423 = (void*)0;
memset(&erro_ofs_424, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_418=0;
    ovec_max_419=16;
    int start_420[ovec_max_419];
    memset(&start_420, 0, sizeof(int)    *(ovec_max_419)    );
    int end_421[ovec_max_419];
    memset(&end_421, 0, sizeof(int)    *(ovec_max_419)    );
    int ovec_value_422[ovec_max_419*3];
    memset(&ovec_value_422, 0, sizeof(int)    *(ovec_max_419*3)    );
    options_425=reg->options;
    str_426=reg->str;
    re_427=reg->re;
    while((_Bool)1) {
        options_428=2097152;
        len_429=strlen(self);
        regex_result_430=pcre_exec(re_427,(struct pcre_extra*)0,self,len_429,offset_418,options_428,ovec_value_422,ovec_max_419*3);
        for(        i_431=0;        i_431<ovec_max_419;        i_431++        ){
            start_420[i_431]=ovec_value_422[i_431*2];
        }
        for(        i_432=0;        i_432<ovec_max_419;        i_432++        ){
            end_421[i_432]=ovec_value_422[i_432*2+1];
        }
        if(        regex_result_430>0) {
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
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* __result153__;
const char* err_433;
int erro_ofs_434;
int options_435;
char* str_436;
struct real_pcre8_or_16* re_437;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1charph* result_438;
int offset_439;
int ovec_max_440;
int n_444;
int options_445;
int len_446;
int regex_result_447;
int i_448;
int i_449;
void* __right_value304 = (void*)0;
char* str_450;
void* __right_value305 = (void*)0;
char* str_451;
int i_452;
void* __right_value306 = (void*)0;
char* match_str_453;
void* __right_value307 = (void*)0;
char* str_454;
struct list$1charph* __result154__;
err_433 = (void*)0;
memset(&erro_ofs_434, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result153__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value301=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1714, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    options_435=reg->options;
    str_436=reg->str;
    re_437=reg->re;
    result_438=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1724, "list$1charph"))));
    offset_439=0;
    ovec_max_440=16;
    int start_441[ovec_max_440];
    memset(&start_441, 0, sizeof(int)    *(ovec_max_440)    );
    int end_442[ovec_max_440];
    memset(&end_442, 0, sizeof(int)    *(ovec_max_440)    );
    int ovec_value_443[ovec_max_440*3];
    memset(&ovec_value_443, 0, sizeof(int)    *(ovec_max_440*3)    );
    n_444=0;
    while((_Bool)1) {
        options_445=2097152;
        len_446=strlen(self);
        regex_result_447=pcre_exec(re_437,(struct pcre_extra*)0,self,len_446,offset_439,options_445,ovec_value_443,ovec_max_440*3);
        for(        i_448=0;        i_448<ovec_max_440;        i_448++        ){
            start_441[i_448]=ovec_value_443[i_448*2];
        }
        for(        i_449=0;        i_449<ovec_max_440;        i_449++        ){
            end_442[i_449]=ovec_value_443[i_449*2+1];
        }
        if(        regex_result_447==1) {
            str_450=(char*)come_increment_ref_count(charp_substring(self,offset_439,start_441[0]));
            list$1charph_push_back(result_438,(char*)come_increment_ref_count(str_450));
            if(            offset_439==end_442[0]) {
                offset_439++;
            }
            else {
                offset_439=end_442[0];
            }
            /* U13 */str_450 = come_decrement_ref_count2(str_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_447>1) {
            str_451=(char*)come_increment_ref_count(charp_substring(self,offset_439,start_441[0]));
            list$1charph_push_back(result_438,(char*)come_increment_ref_count(str_451));
            if(            offset_439==end_442[0]) {
                offset_439++;
            }
            else {
                offset_439=end_442[0];
            }
            for(            i_452=1;            i_452<regex_result_447;            i_452++            ){
                match_str_453=(char*)come_increment_ref_count(charp_substring(self,start_441[i_452],end_442[i_452]));
                list$1charph_push_back(result_438,(char*)come_increment_ref_count(match_str_453));
                /* U13 */match_str_453 = come_decrement_ref_count2(match_str_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_451 = come_decrement_ref_count2(str_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_444++;
        if(        maxsplit==n_444) {
            break;
        }
    }
    if(    offset_439<charp_length(self)) {
        str_454=(char*)come_increment_ref_count(charp_substring(self,offset_439,-1));
        list$1charph_push_back(result_438,(char*)come_increment_ref_count(str_454));
        /* U13 */str_454 = come_decrement_ref_count2(str_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result154__ = gComeFunResultObject = __result_obj__ = result_438;
    /*i*/come_call_finalizer3(result_438,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_455;
int erro_ofs_456;
int options_457;
char* str_458;
struct real_pcre8_or_16* re_459;
void* __right_value308 = (void*)0;
char* self2_460;
int ovec_max_461;
int result_465;
int offset_466;
int n_467;
int options_468;
int len_469;
int regex_result_470;
int i_471;
int i_472;
int __result155__;
err_455 = (void*)0;
memset(&erro_ofs_456, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_457=reg->options;
    str_458=reg->str;
    re_459=reg->re;
    self2_460=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_461=16;
    int start_462[ovec_max_461];
    memset(&start_462, 0, sizeof(int)    *(ovec_max_461)    );
    int end_463[ovec_max_461];
    memset(&end_463, 0, sizeof(int)    *(ovec_max_461)    );
    int ovec_value_464[ovec_max_461*3];
    memset(&ovec_value_464, 0, sizeof(int)    *(ovec_max_461*3)    );
    result_465=default_value;
    offset_466=0;
    n_467=0;
    while((_Bool)1) {
        options_468=2097152;
        len_469=strlen(self2_460);
        regex_result_470=pcre_exec(re_459,(struct pcre_extra*)0,self2_460,len_469,offset_466,options_468,ovec_value_464,ovec_max_461*3);
        for(        i_471=0;        i_471<ovec_max_461;        i_471++        ){
            start_462[i_471]=ovec_value_464[i_471*2];
        }
        for(        i_472=0;        i_472<ovec_max_461;        i_472++        ){
            end_463[i_472]=ovec_value_464[i_472*2+1];
        }
        if(        regex_result_470>0) {
            n_467++;
            if(            offset_466==end_463[0]) {
                offset_466++;
            }
            else {
                offset_466=end_463[0];
            }
            if(            n_467==count) {
                result_465=strlen(self)-end_463[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result155__ = result_465;
    /* U13 */self2_460 = come_decrement_ref_count2(self2_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result155__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_473;
int ovec_max_474;
const char* err_478;
int erro_ofs_479;
int options_480;
char* str_481;
struct real_pcre8_or_16* re_482;
int n_483;
int options_484;
int len_485;
int regex_result_486;
int i_487;
int i_488;
err_478 = (void*)0;
memset(&erro_ofs_479, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_473=0;
    ovec_max_474=16;
    int start_475[ovec_max_474];
    memset(&start_475, 0, sizeof(int)    *(ovec_max_474)    );
    int end_476[ovec_max_474];
    memset(&end_476, 0, sizeof(int)    *(ovec_max_474)    );
    int ovec_value_477[ovec_max_474*3];
    memset(&ovec_value_477, 0, sizeof(int)    *(ovec_max_474*3)    );
    options_480=reg->options;
    str_481=reg->str;
    re_482=reg->re;
    n_483=0;
    while((_Bool)1) {
        options_484=2097152;
        len_485=strlen(self);
        regex_result_486=pcre_exec(re_482,(struct pcre_extra*)0,self,len_485,offset_473,options_484,ovec_value_477,ovec_max_474*3);
        for(        i_487=0;        i_487<ovec_max_474;        i_487++        ){
            start_475[i_487]=ovec_value_477[i_487*2];
        }
        for(        i_488=0;        i_488<ovec_max_474;        i_488++        ){
            end_476[i_488]=ovec_value_477[i_488*2+1];
        }
        if(        regex_result_486>0) {
            n_483++;
            if(            count==n_483) {
                return (_Bool)1;
            }
            if(            offset_473==end_476[0]) {
                offset_473++;
            }
            else {
                offset_473=end_476[0];
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
void* __right_value309 = (void*)0;
char* __result156__;
int offset_489;
int ovec_max_490;
const char* err_494;
int erro_ofs_495;
int options_496;
char* str_497;
struct real_pcre8_or_16* re_498;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct buffer* result_499;
int options_500;
int len_501;
int regex_result_502;
int i_503;
int i_504;
void* __right_value312 = (void*)0;
char* str_505;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* group_strings_506;
void* __right_value315 = (void*)0;
char* match_string_507;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* block_result_508;
void* __right_value318 = (void*)0;
char* str_509;
void* __right_value319 = (void*)0;
char* str_510;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1charph* group_strings_511;
int i_512;
void* __right_value322 = (void*)0;
char* match_string_513;
void* __right_value323 = (void*)0;
char* match_string_514;
void* __right_value324 = (void*)0;
char* block_result_515;
void* __right_value325 = (void*)0;
char* str_516;
void* __right_value326 = (void*)0;
char* str_517;
void* __right_value327 = (void*)0;
char* __result157__;
err_494 = (void*)0;
memset(&erro_ofs_495, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result156__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value309=__builtin_string("")));
        /* U11 */__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    offset_489=0;
    ovec_max_490=16;
    int start_491[ovec_max_490];
    memset(&start_491, 0, sizeof(int)    *(ovec_max_490)    );
    int end_492[ovec_max_490];
    memset(&end_492, 0, sizeof(int)    *(ovec_max_490)    );
    int ovec_value_493[ovec_max_490*3];
    memset(&ovec_value_493, 0, sizeof(int)    *(ovec_max_490*3)    );
    options_496=reg->options;
    str_497=reg->str;
    re_498=reg->re;
    result_499=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1945, "buffer"))));
    while((_Bool)1) {
        options_500=2097152;
        len_501=strlen(self);
        regex_result_502=pcre_exec(re_498,(struct pcre_extra*)0,self,len_501,offset_489,options_500,ovec_value_493,ovec_max_490*3);
        for(        i_503=0;        i_503<ovec_max_490;        i_503++        ){
            start_491[i_503]=ovec_value_493[i_503*2];
        }
        for(        i_504=0;        i_504<ovec_max_490;        i_504++        ){
            end_492[i_504]=ovec_value_493[i_504*2+1];
        }
        if(        regex_result_502==1) {
            str_505=(char*)come_increment_ref_count(charp_substring(self,offset_489,start_491[0]));
            buffer_append_str(result_499,str_505);
            group_strings_506=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1965, "list$1charph"))));
            match_string_507=(char*)come_increment_ref_count(charp_substring(self,start_491[0],end_492[0]));
            list$1charph_push_back(group_strings_506,(char*)come_increment_ref_count(charp_substring(self,start_491[0],end_492[0])));
            block_result_508=(char*)come_increment_ref_count(block(parent,match_string_507,group_strings_506));
            buffer_append_str(result_499,block_result_508);
            if(            offset_489==end_492[0]) {
                offset_489++;
            }
            else {
                offset_489=end_492[0];
            }
            if(            !reg->global) {
                str_509=(char*)come_increment_ref_count(charp_substring(self,offset_489,-1));
                buffer_append_str(result_499,str_509);
                /* U13 */str_509 = come_decrement_ref_count2(str_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_505 = come_decrement_ref_count2(str_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_507 = come_decrement_ref_count2(match_string_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_508 = come_decrement_ref_count2(block_result_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_509 = come_decrement_ref_count2(str_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_505 = come_decrement_ref_count2(str_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_507 = come_decrement_ref_count2(match_string_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_508 = come_decrement_ref_count2(block_result_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_502>1) {
            str_510=(char*)come_increment_ref_count(charp_substring(self,offset_489,start_491[0]));
            buffer_append_str(result_499,str_510);
            if(            offset_489==end_492[0]) {
                offset_489++;
            }
            else {
                offset_489=end_492[0];
            }
            group_strings_511=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2000, "list$1charph"))));
            for(            i_512=1;            i_512<regex_result_502;            i_512++            ){
                match_string_513=(char*)come_increment_ref_count(charp_substring(self,start_491[i_512],end_492[i_512]));
                list$1charph_push_back(group_strings_511,(char*)come_increment_ref_count(match_string_513));
                /* U13 */match_string_513 = come_decrement_ref_count2(match_string_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_514=(char*)come_increment_ref_count(charp_substring(self,start_491[0],end_492[0]));
            block_result_515=(char*)come_increment_ref_count(block(parent,match_string_514,group_strings_511));
            buffer_append_str(result_499,block_result_515);
            if(            !reg->global) {
                str_516=(char*)come_increment_ref_count(charp_substring(self,offset_489,-1));
                buffer_append_str(result_499,str_516);
                /* U13 */str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_516 = come_decrement_ref_count2(str_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_510 = come_decrement_ref_count2(str_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_511,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_514 = come_decrement_ref_count2(match_string_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_515 = come_decrement_ref_count2(block_result_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_517=(char*)come_increment_ref_count(charp_substring(self,offset_489,-1));
            buffer_append_str(result_499,str_517);
            /* U13 */str_517 = come_decrement_ref_count2(str_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_517 = come_decrement_ref_count2(str_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value327=buffer_to_string(result_499)));
    /*i*/come_call_finalizer3(result_499,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result158__;
int offset_518;
int ovec_max_519;
const char* err_523;
int erro_ofs_524;
int options_525;
char* str_526;
struct real_pcre8_or_16* re_527;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct buffer* result_528;
int n_529;
int options_530;
int len_531;
int regex_result_532;
int i_533;
int i_534;
void* __right_value331 = (void*)0;
char* str_535;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charph* group_strings_536;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* match_string_537;
void* __right_value336 = (void*)0;
char* block_result_538;
void* __right_value337 = (void*)0;
char* str_539;
void* __right_value338 = (void*)0;
char* str_540;
void* __right_value339 = (void*)0;
char* str_541;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1charph* group_strings_542;
int i_543;
void* __right_value342 = (void*)0;
char* match_string_544;
void* __right_value343 = (void*)0;
char* match_string_545;
void* __right_value344 = (void*)0;
char* block_result_546;
void* __right_value345 = (void*)0;
char* str_547;
void* __right_value346 = (void*)0;
char* str_548;
void* __right_value347 = (void*)0;
char* str_549;
void* __right_value348 = (void*)0;
char* __result159__;
err_523 = (void*)0;
memset(&erro_ofs_524, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("")));
        /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    offset_518=0;
    ovec_max_519=16;
    int start_520[ovec_max_519];
    memset(&start_520, 0, sizeof(int)    *(ovec_max_519)    );
    int end_521[ovec_max_519];
    memset(&end_521, 0, sizeof(int)    *(ovec_max_519)    );
    int ovec_value_522[ovec_max_519*3];
    memset(&ovec_value_522, 0, sizeof(int)    *(ovec_max_519*3)    );
    options_525=reg->options;
    str_526=reg->str;
    re_527=reg->re;
    result_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2049, "buffer"))));
    n_529=0;
    while((_Bool)1) {
        options_530=2097152;
        len_531=strlen(self);
        regex_result_532=pcre_exec(re_527,(struct pcre_extra*)0,self,len_531,offset_518,options_530,ovec_value_522,ovec_max_519*3);
        for(        i_533=0;        i_533<ovec_max_519;        i_533++        ){
            start_520[i_533]=ovec_value_522[i_533*2];
        }
        for(        i_534=0;        i_534<ovec_max_519;        i_534++        ){
            end_521[i_534]=ovec_value_522[i_534*2+1];
        }
        if(        regex_result_532==1) {
            n_529++;
            str_535=(char*)come_increment_ref_count(charp_substring(self,offset_518,start_520[0]));
            buffer_append_str(result_528,str_535);
            group_strings_536=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2072, "list$1charph"))));
            list$1charph_push_back(group_strings_536,(char*)come_increment_ref_count(charp_substring(self,start_520[0],end_521[0])));
            match_string_537=(char*)come_increment_ref_count(charp_substring(self,start_520[0],end_521[0]));
            block_result_538=(char*)come_increment_ref_count(block(parent,match_string_537,group_strings_536));
            buffer_append_str(result_528,block_result_538);
            if(            offset_518==end_521[0]) {
                offset_518++;
            }
            else {
                offset_518=end_521[0];
            }
            if(            !reg->global) {
                str_539=(char*)come_increment_ref_count(charp_substring(self,offset_518,-1));
                buffer_append_str(result_528,str_539);
                /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_537 = come_decrement_ref_count2(match_string_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_538 = come_decrement_ref_count2(block_result_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_529==count) {
                str_540=(char*)come_increment_ref_count(charp_substring(self,offset_518,-1));
                buffer_append_str(result_528,str_540);
                /* U13 */str_540 = come_decrement_ref_count2(str_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_537 = come_decrement_ref_count2(match_string_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_538 = come_decrement_ref_count2(block_result_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_540 = come_decrement_ref_count2(str_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_537 = come_decrement_ref_count2(match_string_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_538 = come_decrement_ref_count2(block_result_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_532>1) {
            n_529++;
            str_541=(char*)come_increment_ref_count(charp_substring(self,offset_518,start_520[0]));
            buffer_append_str(result_528,str_541);
            if(            offset_518==end_521[0]) {
                offset_518++;
            }
            else {
                offset_518=end_521[0];
            }
            group_strings_542=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2115, "list$1charph"))));
            for(            i_543=1;            i_543<regex_result_532;            i_543++            ){
                match_string_544=(char*)come_increment_ref_count(charp_substring(self,start_520[i_543],end_521[i_543]));
                list$1charph_push_back(group_strings_542,(char*)come_increment_ref_count(match_string_544));
                /* U13 */match_string_544 = come_decrement_ref_count2(match_string_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_545=(char*)come_increment_ref_count(charp_substring(self,start_520[0],end_521[0]));
            block_result_546=(char*)come_increment_ref_count(block(parent,match_string_545,group_strings_542));
            buffer_append_str(result_528,block_result_546);
            if(            !reg->global) {
                str_547=(char*)come_increment_ref_count(charp_substring(self,offset_518,-1));
                buffer_append_str(result_528,str_547);
                /* U13 */str_547 = come_decrement_ref_count2(str_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_541 = come_decrement_ref_count2(str_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_542,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_545 = come_decrement_ref_count2(match_string_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_546 = come_decrement_ref_count2(block_result_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_547 = come_decrement_ref_count2(str_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_529==count) {
                str_548=(char*)come_increment_ref_count(charp_substring(self,offset_518,-1));
                buffer_append_str(result_528,str_548);
                /* U13 */str_548 = come_decrement_ref_count2(str_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_541 = come_decrement_ref_count2(str_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_542,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_545 = come_decrement_ref_count2(match_string_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_546 = come_decrement_ref_count2(block_result_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_548 = come_decrement_ref_count2(str_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_541 = come_decrement_ref_count2(str_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_542,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_545 = come_decrement_ref_count2(match_string_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_546 = come_decrement_ref_count2(block_result_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_549=(char*)come_increment_ref_count(charp_substring(self,offset_518,-1));
            buffer_append_str(result_528,str_549);
            /* U13 */str_549 = come_decrement_ref_count2(str_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_549 = come_decrement_ref_count2(str_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value348=buffer_to_string(result_528)));
    /*i*/come_call_finalizer3(result_528,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

unsigned int wchar_tp_get_hash_key(unsigned int* value){
int result_550;
unsigned int* p_551;
    result_550=0;
    p_551=value;
    while(*p_551) {
        result_550+=(*p_551);
        p_551++;
    }
    return result_550;
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
void* __right_value349 = (void*)0;
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=xsprintf("%ls",wc)));
    /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* result_552;
void* __right_value351 = (void*)0;
char* __result161__;
char* __result162__;
    result_552=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_552[string_length(result_552)-1]==10) {
        __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=string_substring(result_552,0,-2)));
        /* U13 */result_552 = come_decrement_ref_count2(result_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_552;
    /* U13 */result_552 = come_decrement_ref_count2(result_552, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result163__;
char* result_553;
void* __right_value353 = (void*)0;
char* result2_554;
char* __result164__;
    if(    path==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("")));
        /* U11 */__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_553=realpath(path,((void*)0));
    result2_554=(char*)come_increment_ref_count(__builtin_string(result_553));
    free(result_553);
    __result164__ = gComeFunResultObject = __result_obj__ = result2_554;
    /* U13 */result2_554 = come_decrement_ref_count2(result2_554, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result165__;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __result166__;
    if(    path==((void*)0)) {
        __result165__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("")));
        /* U11 */__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value356=__builtin_string(dirname(((char*)(__right_value355=__builtin_string(path)))))));
    /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

unsigned long  int xwcslen(unsigned int* wstr){
unsigned int* p_555;
unsigned long  int len_556;
    p_555=wstr;
    len_556=0;
    while(*p_555) {
        p_555++;
        len_556++;
    }
    return len_556;
}

