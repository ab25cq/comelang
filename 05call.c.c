/// previous struct definition ///
struct __locale_t;

struct __sFILE;

struct __timezone_t;

struct sigevent;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef unsigned int wchar_t;

struct anonymous_typeX1
{
    long long __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
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

typedef long long __s64;

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

typedef long long __kernel_loff_t;

typedef long __kernel_old_time_t;

typedef long __kernel_time_t;

typedef long long __kernel_time64_t;

typedef long __kernel_clock_t;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef __int128 __s128 __attribute__((aligned(16)));

typedef unsigned __int128 __u128 __attribute__((aligned(16)));

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

extern struct __sFILE* stdin __attribute__((__availability__(android,strict,introduced=23 )));
extern struct __sFILE* stdout __attribute__((__availability__(android,strict,introduced=23 )));
extern struct __sFILE* stderr __attribute__((__availability__(android,strict,introduced=23 )));
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

extern const char* _ctype_;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct __kernel_timespec
{
    long long tv_sec;
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
    long long tv_sec;
    long long tv_usec;
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

struct sigcontext
{
    unsigned long  long fault_address;
    unsigned long  long regs[31];
    unsigned long  long sp;
    unsigned long  long pc;
    unsigned long  long pstate;
    unsigned char __reserved[4096] __attribute__((__aligned__(16)));
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

extern const char* sys_siglist[(64+1)];
extern const char* sys_signame[(64+1)];
typedef unsigned long  int fd_mask;

struct anonymous_typeX43
{
    unsigned long  int fds_bits[1024/(8*sizeof(unsigned long  int))];
};

typedef struct anonymous_typeX43 fd_set;

typedef struct __timezone_t* timezone_t;

extern char* tzname[];
extern int daylight;
extern long  int timezone;
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

enum :unsigned long  int { BIONIC_MULTIBYTE_RESULT_ILLEGAL_SEQUENCE=(18446744073709551615UL),
BIONIC_MULTIBYTE_RESULT_INCOMPLETE_SEQUENCE=(18446744073709551614UL),
BIONIC_MULTIBYTE_RESULT_NO_BYTES_CONSUMED=(18446744073709551613UL)
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

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
extern _Bool gComeBareMetal;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
    _Bool (*no_mutex)(void*);
};

struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
};

struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    _Bool mUniq;
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char* mParentClassName;
    char* mAttribute;
};

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mTask;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    _Bool mDefferRightValue;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    _Bool mComma;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char* mAttribute;
    char* mFunAttribute;
    _Bool mGenericsFun;
    _Bool mImmutable;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable* mVarTable;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType* mType;
    char* mVarName;
    char* mFunName;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType* mObjType;
    char* mObjValue;
    struct sVar* mObjVar;
    _Bool mNoFree;
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    _Bool define_struct;
    _Bool in_typedef;
    _Bool in_loop;
    char* output_file_name;
    struct sVarTable* current_loop_vtable;
    _Bool verbose;
    _Bool output_header_file;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass* defining_class;
    _Bool array_initializer;
    _Bool struct_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    char* if_result_var_name;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef unsigned int nfds_t;

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNode$ph* exps;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

// source head

// header function
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
struct anonymous_typeX12 lldiv(long long __numerator, long long __denominator);
const char* getprogname();
void setprogname(const char* __name);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(unsigned int* __dst, const char* __src, unsigned long  int __n);
int mbtowc(unsigned int* __wc_ptr, const char* __s, unsigned long  int __n);
int wctomb(char* __dst, unsigned int __wc);
unsigned long  int wcstombs(char* __dst, const unsigned int* __src, unsigned long  int __n);
int abs(int __x);
long labs(long __x);
long long llabs(long long __x);
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
void __FD_CLR_chk(int anonymous_var_nameX45, struct anonymous_typeX43* anonymous_var_nameX46, unsigned long  int anonymous_var_nameX47);
void __FD_SET_chk(int anonymous_var_nameX48, struct anonymous_typeX43* anonymous_var_nameX49, unsigned long  int anonymous_var_nameX50);
int __FD_ISSET_chk(int anonymous_var_nameX51, const struct anonymous_typeX43* anonymous_var_nameX52, unsigned long  int anonymous_var_nameX53);
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xiswascii(unsigned int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
void FILE_on_drop(struct __sFILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE* f);
int assert_v2(int exp);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline, _Bool immutable_);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
_Bool sNodeBase_no_mutex(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
void transpile_conditional_with_free_right_object_value(struct CVALUE* condtional_value, struct sInfo* info);
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info, _Bool original_type_name);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info, _Bool come_type);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
struct sNode* reverse_node(struct sNode* value, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
void output_struct(struct sClass* klass, struct sInfo* info);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_union(char* type_name, struct sInfo* info);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_enum(char* type_name, struct sInfo* info);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* __fds, unsigned int __count, int __timeout_ms);
int ppoll(struct pollfd* __fds, unsigned int __count, const struct timespec* __timeout, const struct anonymous_typeX13* __mask);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
// uniq global variable
// inline function
static inline int android_get_device_api_level(){
int api_level_1;
    char value_0[92]={0};
    if(    __system_property_get("ro.build.version.sdk",value_0)<1    ) {
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
static inline int ffsll(long long __n){
    return __builtin_ffsll(__n);
}
static inline char* ctermid(char* s){
    if(    s==0    ) {
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
    for(    i_4=0    ;    i_4<100    ;    i_4++    ){
        r_5=arc4random();
        if(        asprintf(&path_3,"/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u",p_2,r_5)==-1        ) {
            return ((void*)0);
        }
        fd_6=open(path_3,2|64|128|131072,384);
        if(        fd_6>=0        ) {
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
static inline int isalpha(int __ch){
    return (__ch>=65&&__ch<=90)||(__ch>=97&&__ch<=122);
}
static inline int isblank(int __ch){
    return __ch==32||__ch==9;
}
static inline int iscntrl(int __ch){
    return (((unsigned int)(__ch))<32)||__ch==127;
}
static inline int isdigit(int __ch){
    return (__ch>=48&&__ch<=57);
}
static inline int isgraph(int __ch){
    return (__ch>=33&&__ch<=126);
}
static inline int islower(int __ch){
    return (__ch>=97&&__ch<=122);
}
static inline int isprint(int __ch){
    return (__ch>=32&&__ch<=126);
}
static inline int isspace(int __ch){
    return __ch==32||(__ch>=9&&__ch<=13);
}
static inline int isupper(int __ch){
    return (__ch>=65&&__ch<=90);
}
static inline int isxdigit(int __ch){
    return (__ch>=48&&__ch<=57)||(__ch>=97&&__ch<=102)||(__ch>=65&&__ch<=70);
}
static inline int isalnum(int __ch){
    return isalpha(__ch)||isdigit(__ch);
}
static inline int ispunct(int __ch){
    return isgraph(__ch)&&!isalnum(__ch);
}
static inline int _tolower(int __ch){
    return __ch|32;
}
static inline int tolower(int __ch){
    if(    __ch>=65&&__ch<=90    ) {
        return _tolower(__ch);
    }
    return __ch;
}
static inline int _toupper(int __ch){
    return __ch^32;
}
static inline int toupper(int __ch){
    if(    __ch>=97&&__ch<=122    ) {
        return _toupper(__ch);
    }
    return __ch;
}
static inline int isascii(int __ch){
    return ((unsigned int)(__ch))<128;
}
static inline int toascii(int __ch){
    return __ch&127;
}
static inline int isalnum_l(int __ch, struct __locale_t* __l){
    return isalnum(__ch);
}
static inline int isalpha_l(int __ch, struct __locale_t* __l){
    return isalpha(__ch);
}
static inline int isblank_l(int __ch, struct __locale_t* __l){
    return isblank(__ch);
}
static inline int iscntrl_l(int __ch, struct __locale_t* __l){
    return iscntrl(__ch);
}
static inline int isdigit_l(int __ch, struct __locale_t* __l){
    return isdigit(__ch);
}
static inline int isgraph_l(int __ch, struct __locale_t* __l){
    return isgraph(__ch);
}
static inline int islower_l(int __ch, struct __locale_t* __l){
    return islower(__ch);
}
static inline int isprint_l(int __ch, struct __locale_t* __l){
    return isprint(__ch);
}
static inline int ispunct_l(int __ch, struct __locale_t* __l){
    return ispunct(__ch);
}
static inline int isspace_l(int __ch, struct __locale_t* __l){
    return isspace(__ch);
}
static inline int isupper_l(int __ch, struct __locale_t* __l){
    return isupper(__ch);
}
static inline int isxdigit_l(int __ch, struct __locale_t* __l){
    return isxdigit(__ch);
}
static inline int tolower_l(int __ch, struct __locale_t* __l){
    return tolower(__ch);
}
static inline int toupper_l(int __ch, struct __locale_t* __l){
    return toupper(__ch);
}

// body function
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value1 = (void*)0;
char* __dec_obj2;
struct sReturnNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj2=self->value_source,
    self->value_source=(char*)come_increment_ref_count((char*)come_memdup(value_source, "05call.c", 13, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__1 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __right_value2 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string("sReturnNode"))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_8;
void* __right_value40 = (void*)0;
struct sType* result_type_9;
void* __right_value41 = (void*)0;
struct sType* result_type2_39;
struct sType* result_type3_40;
_Bool Value_41;
_Bool __result_obj__19;
void* __right_value42 = (void*)0;
struct CVALUE* come_value_42;
void* __right_value43 = (void*)0;
struct sType* come_value_type_43;
void* __right_value44 = (void*)0;
struct sType* __dec_obj26;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
char* type_name_45;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
void* __if_result__0_46 = (void*)0;
struct list$1sVar$ph* o2_saved_47;
struct sVar* it_50;
void* __right_value55 = (void*)0;
struct list$1sVar$ph* __dec_obj27;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct sFun* come_fun_57;
void* __if_result__1_58 = (void*)0;
struct list$1sVar$ph* o2_saved_59;
struct sVar* it_60;
void* __right_value61 = (void*)0;
struct list$1sVar$ph* __dec_obj28;
void* __right_value62 = (void*)0;
    if(    self->value    ) {
        come_fun_8=info->come_fun;
        result_type_9=(struct sType*)come_increment_ref_count(sType_clone(come_fun_8->mResultType));
        result_type2_39=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_9),(struct sType*)come_increment_ref_count(info->generics_type),info));
        result_type3_40=result_type2_39->mNoSolvedGenericsType;
        if(        result_type2_39->mNoSolvedGenericsType        ) {
            result_type3_40=result_type2_39->mNoSolvedGenericsType;
        }
        else {
            result_type3_40=result_type2_39;
        }
        Value_41=node_compile(self->value,info);
        if(        !Value_41        ) {
            __result_obj__19 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__19;
        }
        else {
        }
        come_value_42=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_43=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_42->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj26=info->function_result_type,
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_42->type));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        gComeC        ) {
            add_come_code(info,"return %s;\n",come_value_42->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_8->mBlock,info,come_value_42->var,(_Bool)0)&&!existance_free_right_value_objects(info)        ) {
            add_come_code(info,"return %s;\n",come_value_42->c_value);
        }
        else {
            static int result_num_44=0;
            result_num_44++;
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value47=make_define_var(result_type2_39,((char*)(__right_value46=xsprintf("__result_obj__\%s",((char*)(__right_value45=int_to_string(result_num_44)))))),(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            !info->come_fun->mNoResultType            ) {
                if(                !gComeC||!(strlen(result_type2_39->mClass->mName)>strlen("tuple")&&memcmp(result_type2_39->mClass->mName,"tuple",strlen("tuple"))==0)                ) {
                    check_assign_type("result type",result_type2_39,come_value_type_43,come_value_42,(_Bool)0,(_Bool)1,(_Bool)1,info);
                }
                if(                result_type2_39->mHeap                ) {
                    type_name_45=(char*)come_increment_ref_count(make_type_name_string(come_value_42->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    add_come_code(info,((char*)(__right_value50=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char*)(__right_value49=int_to_string(result_num_44)))))),type_name_45,come_value_42->c_value);
                    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_45 = come_decrement_ref_count(type_name_45, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value52=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value51=int_to_string(result_num_44)))))),come_value_42->c_value);
                    (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value54=xsprintf("__result_obj__\%s = %%s;\n",((char*)(__right_value53=int_to_string(result_num_44)))))),come_value_42->c_value);
                (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_8->mBlock,info,come_value_42->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1            ) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var                ) {
                    for(                    o2_saved_47=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_50=list$1sVar$ph_begin((o2_saved_47))                    ;                    !list$1sVar$ph_end((o2_saved_47))                    ;                    it_50=list$1sVar$ph_next((o2_saved_47))                    ){
                        free_object((struct sType*)come_increment_ref_count(sType_clone(it_50->mType)),it_50->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    __dec_obj27=info->match_it_var,
                    __if_result__0_46=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")            ) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value56=xsprintf("come_heap_final();\n"))));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            result_type2_39->mHeap            ) {
                free_object((struct sType*)come_increment_ref_count(result_type2_39),((char*)(__right_value58=xsprintf("__result_obj__\%s",((char*)(__right_value57=int_to_string(result_num_44)))))),(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0);
                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            add_come_code(info,((char*)(__right_value60=xsprintf("return __result_obj__\%s;\n",((char*)(__right_value59=int_to_string(result_num_44)))))));
            (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        come_fun_57=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_57->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1        ) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var            ) {
                for(                o2_saved_59=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_60=list$1sVar$ph_begin((o2_saved_59))                ;                !list$1sVar$ph_end((o2_saved_59))                ;                it_60=list$1sVar$ph_next((o2_saved_59))                ){
                    free_object((struct sType*)come_increment_ref_count(sType_clone(it_60->mType)),it_60->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                __dec_obj28=info->match_it_var,
                __if_result__1_58=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__1_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value62=xsprintf("come_heap_final();\n"))));
            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        (self->value_source = come_decrement_ref_count(self->value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__3;
void* __right_value3 = (void*)0;
struct sType* result_16;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value5 = (void*)0;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj8;
void* __right_value14 = (void*)0;
struct sType* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value19 = (void*)0;
char* __dec_obj13;
void* __right_value20 = (void*)0;
char* __dec_obj14;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
void* __right_value29 = (void*)0;
char* __dec_obj19;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj20;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj24;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
struct sType* __result_obj__18;
    if(    self==(void*)0    ) {
        __result_obj__3 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__3;
    }
    result_16=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_16->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj3=result_16->mOriginalLoadVarType,
        result_16->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj4=result_16->mChannelType,
        result_16->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj8=result_16->mGenericsTypes,
        result_16->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj9=result_16->mNoSolvedGenericsType,
        result_16->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj10=result_16->mSizeNum,
        result_16->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj11=result_16->mAlignas,
        result_16->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj12=result_16->mTupleName,
        result_16->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj13=result_16->mAttribute,
        result_16->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_16->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_16->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_16->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_16->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_16->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_16->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_16->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_16->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_16->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj14=result_16->mAsmName,
        result_16->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_16->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj18=result_16->mArrayNum,
        result_16->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj19=result_16->mOriginalTypeName,
        result_16->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj20=result_16->mParamTypes,
        result_16->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj24=result_16->mParamNames,
        result_16->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj25=result_16->mResultType,
        result_16->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_16->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__18 = (struct sType*)come_increment_ref_count(result_16);
    come_call_finalizer(sType_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_10;
struct list_item$1sType$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)    ) {
        prev_it_11=it_10;
        it_10=it_10->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_12;
struct list_item$1sNode$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_14;
struct list_item$1char$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__4;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_17;
struct list_item$1sType$ph* it_18;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result_17=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        else {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(result_17);
    come_call_finalizer(list$1sType$ph$p_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj6;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj7;
struct list$1sType$ph* __result_obj__6;
    if(    self->len==0    ) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj5=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1    ) {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj6=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj7=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__6 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__6;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_22;
struct list_item$1sType$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        prev_it_23=it_22;
        it_22=it_22->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__8;
void* __right_value15 = (void*)0;
struct sNode* result_24;
struct sNode* __result_obj__9;
    if(    self==(void*)0    ) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__8) ? __result_obj__8 = come_decrement_ref_count(__result_obj__8, ((struct sNode*)__result_obj__8)->finalize, ((struct sNode*)__result_obj__8)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__8;
    }
    result_24=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_24->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_24->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_24->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_24->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_24->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_24->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_24->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_24->no_mutex=self->no_mutex;
    }
    __result_obj__9 = (struct sNode*)come_increment_ref_count(result_24);
    ((result_24) ? result_24 = come_decrement_ref_count(result_24, ((struct sNode*)result_24)->finalize, ((struct sNode*)result_24)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__9) ? __result_obj__9 = come_decrement_ref_count(__result_obj__9, ((struct sNode*)__result_obj__9)->finalize, ((struct sNode*)__result_obj__9)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__10;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_25;
struct list_item$1sNode$ph* it_26;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__13;
    if(    self==((void*)0)    ) {
        __result_obj__10 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__10;
    }
    result_25=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        else {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        it_26=it_26->next;
    }
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(result_25);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__11;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__12;
    if(    self->len==0    ) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj15=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1    ) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj16=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj17=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__12 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__12;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_30;
struct list_item$1sNode$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        prev_it_31=it_30;
        it_30=it_30->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__14;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_32;
struct list_item$1char$ph* it_33;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__17;
    if(    self==((void*)0)    ) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result_32=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_33=it_33->next;
    }
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(result_32);
    come_call_finalizer(list$1char$ph$p_finalize, result_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj23;
struct list$1char$ph* __result_obj__16;
    if(    self->len==0    ) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj21=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1    ) {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj22=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj23=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__16 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__16;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_37;
struct list_item$1char$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_48;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
struct sVar* result_49;
struct sVar* __result_obj__22;
result_48 = (void*)0;
result_49 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_48,0,sizeof(struct sVar*));
        __result_obj__20 = result_48;
        return __result_obj__20;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_49,0,sizeof(struct sVar*));
    __result_obj__22 = result_49;
    return __result_obj__22;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_51;
struct sVar* __result_obj__23;
struct sVar* __result_obj__24;
struct sVar* result_52;
struct sVar* __result_obj__25;
result_51 = (void*)0;
result_52 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_51,0,sizeof(struct sVar*));
        __result_obj__23 = result_51;
        return __result_obj__23;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__24 = self->it->item;
        return __result_obj__24;
    }
    memset(&result_52,0,sizeof(struct sVar*));
    __result_obj__25 = result_52;
    return __result_obj__25;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_53;
struct list_item$1sVar$ph* prev_it_54;
    it_53=self->head;
    while(    it_53!=((void*)0)    ) {
        prev_it_54=it_53;
        it_53=it_53->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_55;
struct list_item$1sVar$ph* prev_it_56;
    it_55=self->head;
    while(    it_55!=((void*)0)    ) {
        prev_it_56=it_55;
        it_55=it_55->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __right_value63 = (void*)0;
char* __dec_obj29;
struct sOutputNode* __result_obj__26;
    ((struct sNodeBase*)(__right_value63=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->contents,
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__26 = (struct sOutputNode*)come_increment_ref_count(self);
    come_call_finalizer(sOutputNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sOutputNode_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __right_value64 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string("sOutputNode"))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__27;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        (self->contents = come_decrement_ref_count(self->contents, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNode$ph* exps, struct sInfo* info){
void* __right_value65 = (void*)0;
char* __dec_obj30;
struct list$1sNode$ph* __dec_obj31;
struct sInlineAssembler* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->source,
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj31=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__28 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __right_value66 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string("sInlineAssembler"))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__29;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_61;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct CVALUE* come_value_62;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_63;
char* p_64;
_Bool dquort_65;
int num_exp_66;
void* __right_value71 = (void*)0;
struct sNode* node_67;
_Bool Value_74;
_Bool __result_obj__34;
void* __right_value72 = (void*)0;
struct CVALUE* come_value_75;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
char* __dec_obj32;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sType* __dec_obj33;
_Bool __result_obj__36;
    source_61=(char*)come_increment_ref_count(self->source);
    come_value_62=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 177, "struct CVALUE*"))));
    buf_63=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 179, "struct buffer*"))));
    p_64=source_61;
    while(    *p_64!=40    ) {
        buffer_append_char(buf_63,*p_64);
        p_64++;
    }
    if(    *p_64==40    ) {
        buffer_append_char(buf_63,*p_64);
        p_64++;
        while(        *p_64==32||*p_64==9||*p_64==10        ) {
            buffer_append_char(buf_63,*p_64);
            p_64++;
        }
    }
    dquort_65=(_Bool)0;
    num_exp_66=0;
    while(    *p_64    ) {
        if(        *p_64==34        ) {
            buffer_append_char(buf_63,*p_64);
            p_64++;
            dquort_65=!dquort_65;
        }
        else if(        dquort_65        ) {
            buffer_append_char(buf_63,*p_64);
            p_64++;
        }
        else if(        *p_64==40        ) {
            buffer_append_char(buf_63,*p_64);
            p_64++;
            node_67=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(self->exps,num_exp_66++));
            Value_74=node_compile(node_67,info);
            if(            !Value_74            ) {
                __result_obj__34 = (_Bool)0;
                ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (source_61 = come_decrement_ref_count(source_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__34;
            }
            else {
            }
            come_value_75=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(buf_63,come_value_75->c_value);
            if(            *p_64==41            ) {
                buffer_append_char(buf_63,*p_64);
                p_64++;
            }
            ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            buffer_append_char(buf_63,*p_64);
            p_64++;
        }
    }
    __dec_obj32=come_value_62->c_value,
    come_value_62->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value74=buffer_to_string(buf_63)))));
    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    __dec_obj33=come_value_62->type,
    come_value_62->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 236, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_62->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_62));
    add_come_last_code(info,"%s",come_value_62->c_value);
    __result_obj__36 = (_Bool)1;
    (source_61 = come_decrement_ref_count(source_61, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        (self->source = come_decrement_ref_count(self->source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_68;
int i_69;
struct sNode* __result_obj__30;
struct sNode* default_value_70;
struct sNode* __result_obj__31;
default_value_70 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_68=self->head;
    i_69=0;
    while(    it_68!=((void*)0)    ) {
        if(        position==i_69        ) {
            __result_obj__30 = (struct sNode*)come_increment_ref_count(it_68->item);
            ((__result_obj__30) ? __result_obj__30 = come_decrement_ref_count(__result_obj__30, ((struct sNode*)__result_obj__30)->finalize, ((struct sNode*)__result_obj__30)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__30;
        }
        it_68=it_68->next;
        i_69++;
    }
    memset(&default_value_70,0,sizeof(struct sNode*));
    __result_obj__31 = (struct sNode*)come_increment_ref_count(default_value_70);
    ((default_value_70) ? default_value_70 = come_decrement_ref_count(default_value_70, ((struct sNode*)default_value_70)->finalize, ((struct sNode*)default_value_70)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__31) ? __result_obj__31 = come_decrement_ref_count(__result_obj__31, ((struct sNode*)__result_obj__31)->finalize, ((struct sNode*)__result_obj__31)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__31;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_71;
int i_72;
struct sNode* __result_obj__32;
struct sNode* default_value_73;
struct sNode* __result_obj__33;
default_value_73 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_71=self->head;
    i_72=0;
    while(    it_71!=((void*)0)    ) {
        if(        position==i_72        ) {
            __result_obj__32 = (struct sNode*)come_increment_ref_count(it_71->item);
            ((__result_obj__32) ? __result_obj__32 = come_decrement_ref_count(__result_obj__32, ((struct sNode*)__result_obj__32)->finalize, ((struct sNode*)__result_obj__32)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__32;
        }
        it_71=it_71->next;
        i_72++;
    }
    memset(&default_value_73,0,sizeof(struct sNode*));
    __result_obj__33 = (struct sNode*)come_increment_ref_count(default_value_73);
    ((default_value_73) ? default_value_73 = come_decrement_ref_count(default_value_73, ((struct sNode*)default_value_73)->finalize, ((struct sNode*)default_value_73)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__33) ? __result_obj__33 = come_decrement_ref_count(__result_obj__33, ((struct sNode*)__result_obj__33)->finalize, ((struct sNode*)__result_obj__33)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__33;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value79 = (void*)0;
struct list_item$1CVALUE$ph* litem_76;
struct CVALUE* __dec_obj34;
void* __right_value80 = (void*)0;
struct list_item$1CVALUE$ph* litem_77;
struct CVALUE* __dec_obj35;
void* __right_value81 = (void*)0;
struct list_item$1CVALUE$ph* litem_78;
struct CVALUE* __dec_obj36;
struct list$1CVALUE$ph* __result_obj__35;
    if(    self->len==0    ) {
        litem_76=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value79=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_76->prev=((void*)0);
        litem_76->next=((void*)0);
        __dec_obj34=litem_76->item,
        litem_76->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_76;
        self->head=litem_76;
    }
    else if(    self->len==1    ) {
        litem_77=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value80=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_77->prev=self->head;
        litem_77->next=((void*)0);
        __dec_obj35=litem_77->item,
        litem_77->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_77;
        self->head->next=litem_77;
    }
    else {
        litem_78=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value81=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_78->prev=self->tail;
        litem_78->next=((void*)0);
        __dec_obj36=litem_78->item,
        litem_78->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_78;
        self->tail=litem_78;
    }
    self->len++;
    __result_obj__35 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__35;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __right_value82 = (void*)0;
struct sLineNode* __result_obj__37;
    ((struct sNodeBase*)(__right_value82=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__37 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLineNode_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

char* sLineNode_kind(struct sLineNode* self){
void* __right_value83 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string("sLineNode"))));
    (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct CVALUE* come_value_79;
void* __right_value86 = (void*)0;
char* __dec_obj37;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct sType* __dec_obj38;
_Bool __result_obj__39;
    come_value_79=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 261, "struct CVALUE*"))));
    __dec_obj37=come_value_79->c_value,
    come_value_79->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj38=come_value_79->type,
    come_value_79->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 264, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_79->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
    add_come_last_code(info,"%s",come_value_79->c_value);
    __result_obj__39 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

static void sLineNode_finalize(struct sLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __right_value90 = (void*)0;
struct sSNameNode* __result_obj__40;
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__40 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSNameNode_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __right_value91 = (void*)0;
char* __result_obj__41;
    __result_obj__41 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string("sSNameNode"))));
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__41;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct CVALUE* come_value_80;
void* __right_value94 = (void*)0;
char* __dec_obj39;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__42;
    come_value_80=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 289, "struct CVALUE*"))));
    __dec_obj39=come_value_80->c_value,
    come_value_80->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj40=come_value_80->type,
    come_value_80->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 292, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_80->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    add_come_last_code(info,"%s",come_value_80->c_value);
    __result_obj__42 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void sSNameNode_finalize(struct sSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __right_value98 = (void*)0;
struct sFuncNode* __result_obj__43;
    ((struct sNodeBase*)(__right_value98=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value98, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__43 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFuncNode_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __right_value99 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string("sFuncNode"))));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_81;
void* __right_value102 = (void*)0;
char* __dec_obj41;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sType* __dec_obj42;
_Bool __result_obj__45;
    come_value_81=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 317, "struct CVALUE*"))));
    __dec_obj41=come_value_81->c_value,
    come_value_81->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj42=come_value_81->type,
    come_value_81->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 320, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_81->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_81));
    add_come_last_code(info,"%s",come_value_81->c_value);
    __result_obj__45 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__45;
}

static void sFuncNode_finalize(struct sFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __right_value106 = (void*)0;
struct sWildCard* __result_obj__46;
    ((struct sNodeBase*)(__right_value106=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__46 = (struct sWildCard*)come_increment_ref_count(self);
    come_call_finalizer(sWildCard_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sWildCard_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

char* sWildCard_kind(struct sWildCard* self){
void* __right_value107 = (void*)0;
char* __result_obj__47;
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("sWildCard"))));
    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
struct sNode* value_node_82;
_Bool Value_83;
_Bool __result_obj__48;
_Bool __result_obj__49;
    value_node_82=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value108=xsprintf("Value"))),info));
    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    Value_83=node_compile(value_node_82,info);
    if(    !Value_83    ) {
        __result_obj__48 = (_Bool)0;
        ((value_node_82) ? value_node_82 = come_decrement_ref_count(value_node_82, ((struct sNode*)value_node_82)->finalize, ((struct sNode*)value_node_82)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__48;
    }
    else {
    }
    __result_obj__49 = (_Bool)1;
    ((value_node_82) ? value_node_82 = come_decrement_ref_count(value_node_82, ((struct sNode*)value_node_82)->finalize, ((struct sNode*)value_node_82)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__49;
}

static void sWildCard_finalize(struct sWildCard* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value110 = (void*)0;
struct sCallerFuncNode* __result_obj__50;
    ((struct sNodeBase*)(__right_value110=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__50 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __right_value111 = (void*)0;
char* __result_obj__51;
    __result_obj__51 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string("sCallerFuncNode"))));
    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__51;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct CVALUE* come_value_84;
void* __right_value114 = (void*)0;
char* __dec_obj43;
void* __right_value115 = (void*)0;
char* __dec_obj44;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__52;
    come_value_84=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 369, "struct CVALUE*"))));
    if(    info->caller_fun    ) {
        __dec_obj43=come_value_84->c_value,
        come_value_84->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        __dec_obj44=come_value_84->c_value,
        come_value_84->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj45=come_value_84->type,
    come_value_84->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 377, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_84->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    add_come_last_code(info,"%s",come_value_84->c_value);
    __result_obj__52 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
struct sCallerLineNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__53 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct CVALUE* come_value_85;
void* __right_value122 = (void*)0;
char* __dec_obj46;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__54;
    come_value_85=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 398, "struct CVALUE*"))));
    __dec_obj46=come_value_85->c_value,
    come_value_85->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj47=come_value_85->type,
    come_value_85->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 401, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_85->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
    add_come_last_code(info,"%s",come_value_85->c_value);
    __result_obj__54 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __right_value126 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string("sCallerLineNode"))));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value127 = (void*)0;
struct sCallerSNameNode* __result_obj__56;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__56 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct CVALUE* come_value_86;
void* __right_value130 = (void*)0;
char* __dec_obj48;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__57;
    come_value_86=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 426, "struct CVALUE*"))));
    __dec_obj48=come_value_86->c_value,
    come_value_86->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj49=come_value_86->type,
    come_value_86->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 429, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_86->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_86));
    add_come_last_code(info,"%s",come_value_86->c_value);
    __result_obj__57 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __right_value134 = (void*)0;
char* __result_obj__58;
    __result_obj__58 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sCallerSNameNode"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__58 = come_decrement_ref_count(__result_obj__58, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __dec_obj50;
void* __right_value147 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj56;
struct list$1sType$ph* __dec_obj57;
struct buffer* __dec_obj58;
struct sFunCallNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value135=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj50=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj56=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj57=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj58=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __result_obj__65 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __right_value148 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string("sFunCallNode"))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_97;
struct list$1tuple2$2char$phsNode$ph$ph* params_98;
struct buffer* method_block_99;
int method_block_sline_100;
struct sVar* var__101;
struct sType* lambda_type_102;
void* __right_value149 = (void*)0;
_Bool __result_obj__67;
void* __right_value150 = (void*)0;
struct sType* result_type_103;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1CVALUE$ph* come_params_104;
void* __right_value153 = (void*)0;
_Bool __result_obj__69;
int i_107;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_108;
struct tuple2$2char$phsNode$ph* it_111;
struct tuple2$2char$phsNode$ph* multiple_assign_var1 = (void*)0;
char* label_114=0;
struct sNode* node_115=0;
_Bool Value_116;
_Bool __result_obj__76;
void* __right_value154 = (void*)0;
struct CVALUE* come_value_117;
void* __right_value155 = (void*)0;
struct sType* __dec_obj59;
void* __right_value156 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct buffer* buf_124;
int j_125;
struct list$1CVALUE$ph* o2_saved_126;
struct CVALUE* it_129;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value167 = (void*)0;
char* __dec_obj60;
void* __right_value168 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__87;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sGenericsFun* generics_fun_133;
_Bool method_generics_136;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1sType$ph* method_generics_types_137;
void* __right_value173 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_138=0;
struct sGenericsFun* gfun_139=0;
char* generics_fun_name_140;
void* __right_value174 = (void*)0;
struct sFun* fun_141;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1CVALUE$ph* come_params_144;
void* __right_value177 = (void*)0;
struct sFun* fun_145;
_Bool no_output_come_code_146;
_Bool __result_obj__96;
void* __right_value178 = (void*)0;
struct CVALUE* method_block_node_147;
void* __right_value179 = (void*)0;
struct sType* method_block_lambda_type_154;
void* __right_value180 = (void*)0;
struct sType* method_block_result_type_155;
void* __right_value181 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_156;
struct sType* generics_fun_method_block_result_type_157;
int method_generics_num_158;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
int n_167;
struct list$1sType$ph* o2_saved_168;
struct sType* it_171;
int method_generics_num_174;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1CVALUE$ph* come_params_175;
int i_176;
struct sType* result_type_177;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_178;
struct tuple2$2char$phsNode$ph* it_179;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* label_180=0;
struct sNode* node_181=0;
_Bool Value_182;
_Bool __result_obj__110;
void* __right_value193 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value194 = (void*)0;
struct sType* __dec_obj66;
int method_generics_num_187;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
int n_188;
struct list$1sType$ph* o2_saved_189;
struct sType* it_190;
int method_generics_num_191;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_210=0;
struct sGenericsFun* gfun_211=0;
char* __dec_obj70;
void* __right_value205 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5 = (void*)0;
char* name_212=0;
struct sGenericsFun* gfun_213=0;
char* __dec_obj71;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1CVALUE$ph* come_params_214;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_215;
struct tuple2$2char$phsNode$ph* it_216;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* label_217=0;
struct sNode* node_218=0;
_Bool Value_219;
_Bool __result_obj__117;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_220;
void* __right_value209 = (void*)0;
struct sType* __dec_obj72;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct buffer* buf_221;
int j_222;
struct list$1CVALUE$ph* o2_saved_223;
struct CVALUE* it_224;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_225;
void* __right_value214 = (void*)0;
char* __dec_obj73;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sType* __dec_obj74;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj75;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sType* __dec_obj76;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj77;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sType* __dec_obj78;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sType* __dec_obj79;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __dec_obj80;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* __dec_obj81;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __dec_obj82;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* __dec_obj83;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj84;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* __dec_obj85;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* __dec_obj86;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* __dec_obj87;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj88;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj89;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj90;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj91;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sType* __dec_obj92;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj93;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __dec_obj94;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj95;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __dec_obj96;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj97;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* __dec_obj98;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sType* __dec_obj99;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sType* __dec_obj100;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj101;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj102;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj103;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj104;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj105;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj106;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj107;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj108;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj109;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj110;
_Bool __result_obj__118;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1CVALUE$ph* come_params_226;
int i_227;
struct sType* result_type_228;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_229;
struct tuple2$2char$phsNode$ph* it_230;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_231=0;
struct sNode* node_232=0;
_Bool Value_233;
_Bool __result_obj__119;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_234;
void* __right_value320 = (void*)0;
struct sType* __dec_obj111;
struct sType* __dec_obj112;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct buffer* buf_235;
int j_236;
struct list$1CVALUE$ph* o2_saved_237;
struct CVALUE* it_238;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value325 = (void*)0;
char* __dec_obj113;
struct sType* __dec_obj114;
_Bool __result_obj__120;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1CVALUE$ph* come_params_240;
int i_241;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_242;
struct tuple2$2char$phsNode$ph* it_243;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_244=0;
struct sNode* node_245=0;
_Bool Value_246;
_Bool __result_obj__121;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_247;
void* __right_value329 = (void*)0;
struct sType* __dec_obj115;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* buf_248;
int j_249;
struct list$1CVALUE$ph* o2_saved_250;
struct CVALUE* it_251;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* result_type_252;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_253;
void* __right_value337 = (void*)0;
char* __dec_obj116;
struct sType* __dec_obj117;
_Bool __result_obj__122;
void* __right_value338 = (void*)0;
char* __dec_obj118;
void* __right_value339 = (void*)0;
char* __dec_obj119;
char* p_254;
int version_255;
char* p2_256;
int i_258;
void* __right_value340 = (void*)0;
char* new_fun_name_259;
void* __right_value341 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value342 = (void*)0;
char* __dec_obj120;
void* __right_value343 = (void*)0;
char* new_fun_name_266;
void* __right_value344 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value345 = (void*)0;
char* __dec_obj121;
void* __right_value346 = (void*)0;
_Bool __result_obj__131;
int i_267;
void* __right_value347 = (void*)0;
char* new_fun_name_268;
void* __right_value348 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value349 = (void*)0;
char* __dec_obj122;
void* __right_value350 = (void*)0;
struct sFun* fun_269;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1CVALUE$ph* come_params_270;
int i_271;
struct sType* result_type_272;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_273;
struct tuple2$2char$phsNode$ph* it_274;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_275=0;
struct sNode* node_276=0;
_Bool Value_277;
_Bool __result_obj__132;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_278;
void* __right_value354 = (void*)0;
struct sType* __dec_obj123;
struct sType* __dec_obj124;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct buffer* buf_279;
int j_280;
struct list$1CVALUE$ph* o2_saved_281;
struct CVALUE* it_282;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_283;
void* __right_value359 = (void*)0;
char* __dec_obj125;
struct sType* __dec_obj126;
_Bool __result_obj__133;
void* __right_value360 = (void*)0;
struct sType* result_type_284;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1sType$ph* param_types_285;
struct list$1sType$ph* o2_saved_286;
struct sType* it_287;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* it2_288;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* __dec_obj127;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1CVALUE$ph* come_params_289;
int i_290;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_291;
struct tuple2$2char$phsNode$ph* it_292;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_293=0;
struct sNode* node_294=0;
_Bool Value_295;
_Bool __result_obj__134;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_296;
void* __right_value370 = (void*)0;
struct sType* __dec_obj128;
int n_297;
struct list$1char$ph* o2_saved_298;
char* it_301;
void* __right_value371 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value378 = (void*)0;
int i_309;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_310;
struct tuple2$2char$phsNode$ph* it_311;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_312=0;
struct sNode* node_313=0;
_Bool Value_314;
_Bool __result_obj__143;
void* __right_value379 = (void*)0;
struct CVALUE* come_value_315;
void* __right_value380 = (void*)0;
struct sType* __dec_obj130;
void* __right_value381 = (void*)0;
_Bool _condtional_value_X8;
_Bool Value_316;
_Bool __result_obj__144;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value383 = (void*)0;
struct sType* __dec_obj131;
void* __right_value384 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value385 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* default_param_318;
void* __right_value396 = (void*)0;
char* param_name_325;
void* __right_value397 = (void*)0;
_Bool _condtional_value_X13;
struct buffer* source_326;
char* p_327;
char* head_328;
int sline_329;
void* __right_value398 = (void*)0;
struct buffer* __dec_obj132;
void* __right_value399 = (void*)0;
struct sNode* node_330;
_Bool Value_331;
_Bool __result_obj__149;
struct buffer* __dec_obj133;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_332;
void* __right_value401 = (void*)0;
struct sType* __dec_obj134;
void* __right_value402 = (void*)0;
_Bool _condtional_value_X14;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
_Bool _condtional_value_X15;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
_Bool _condtional_value_X16;
void* __right_value411 = (void*)0;
_Bool __result_obj__150;
void* __right_value412 = (void*)0;
_Bool __result_obj__151;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value417 = (void*)0;
struct sNode* current_stack_frame_node_333;
_Bool Value_335;
_Bool __result_obj__154;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_336;
void* __right_value419 = (void*)0;
struct sType* __dec_obj136;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* method_block2_337;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* method_block_type_338;
void* __right_value424 = (void*)0;
char* class_name_339;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sClass* current_stack_frame_struct_348;
void* __right_value427 = (void*)0;
int num_method_block_349;
void* __right_value428 = (void*)0;
_Bool __result_obj__163;
void* __right_value429 = (void*)0;
struct sType* result_type_350;
void* __right_value430 = (void*)0;
struct sType* result_type2_351;
void* __right_value431 = (void*)0;
struct list$1sType$ph* param_types_352;
struct list$1char$ph* param_names_353;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* all_alhabet_sname_354;
char* p_355;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1sType$ph* o2_saved_356;
struct sType* it_357;
struct sType* param_type_358;
void* __right_value436 = (void*)0;
char* param_name_359;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* param_name_360;
void* __right_value439 = (void*)0;
struct sType* param_type2_361;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* param_name_362;
void* __right_value442 = (void*)0;
struct sType* param_type2_363;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* source3_364;
char* p_365;
char* head_366;
int sline_367;
struct buffer* __dec_obj137;
void* __right_value445 = (void*)0;
struct sNode* node_368;
_Bool Value_369;
_Bool __result_obj__164;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* method_block_name_370;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value2_371;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sFun* fun2_372;
void* __right_value452 = (void*)0;
_Bool __result_obj__165;
struct sType* method_block_type2_373;
void* __right_value453 = (void*)0;
char* __dec_obj138;
void* __right_value454 = (void*)0;
struct sType* __dec_obj139;
struct buffer* __dec_obj140;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct buffer* buf_374;
void* __right_value457 = (void*)0;
char* __dec_obj141;
void* __right_value458 = (void*)0;
char* __dec_obj142;
void* __right_value459 = (void*)0;
char* __dec_obj143;
int j_375;
struct list$1CVALUE$ph* o2_saved_376;
struct CVALUE* it_377;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* come_value_378;
void* __right_value462 = (void*)0;
char* __dec_obj144;
void* __right_value463 = (void*)0;
struct sType* __dec_obj145;
void* __right_value464 = (void*)0;
char* __dec_obj146;
_Bool __result_obj__166;
memset(&i_258, 0, sizeof(int));
    fun_name_97=(char*)come_increment_ref_count(self->fun_name);
    params_98=self->params;
    method_block_99=self->method_block;
    method_block_sline_100=self->method_block_sline;
    var__101=get_variable_from_table(info->lv_table,fun_name_97);
    if(    var__101==((void*)0)    ) {
        var__101=get_variable_from_table(info->gv_table,fun_name_97);
    }
    if(    var__101    ) {
        lambda_type_102=var__101->mType;
        if(        string_operator_not_equals(lambda_type_102->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"%s is not lambda, can't call",fun_name_97)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__67 = (_Bool)1;
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__67;
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_102->mResultType));
        result_type_103->mStatic=(_Bool)0;
        come_params_104=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 499, "struct list$1CVALUE$ph*"))));
        if(        list$1sType$ph_length(lambda_type_102->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_98)&&!lambda_type_102->mVarArgs        ) {
            ((struct tuple2$2int$bool$*)(__right_value153=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_97,list$1sType$ph_length(lambda_type_102->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_98))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__69 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__69;
        }
        i_107=0;
        for(        o2_saved_108=(params_98),it_111=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_108))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_108))        ;        it_111=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_108))        ){
            multiple_assign_var1=it_111;
            label_114=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_115=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_116=node_compile(node_115,info);
            if(            !Value_116            ) {
                __result_obj__76 = (_Bool)0;
                (label_114 = come_decrement_ref_count(label_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__76;
            }
            else {
            }
            come_value_117=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj59=come_value_117->type,
            come_value_117->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_117->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X1=(lambda_type_102->mVarArgs&&((struct sType*)(__right_value156=list$1sType$ph_operator_load_element(lambda_type_102->mParamTypes,i_107)))==((void*)0))),            come_call_finalizer(sType_finalize, __right_value156, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
            }
            else {
                check_assign_type(((char*)(__right_value159=xsprintf("\%s calling param #\%s",((char*)(__right_value157=string_to_string(fun_name_97))),((char*)(__right_value158=int_to_string(i_107)))))),((struct sType*)(__right_value160=list$1sType$ph_operator_load_element(lambda_type_102->mParamTypes,i_107))),come_value_117->type,come_value_117,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X2=(((struct sType*)(__right_value161=list$1sType$ph_operator_load_element(lambda_type_102->mParamTypes,i_107)))->mHeap&&come_value_117->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X2                ) {
                    std_move(((struct sType*)(__right_value162=list$1sType$ph_operator_load_element(lambda_type_102->mParamTypes,i_107))),come_value_117->type,come_value_117,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(come_params_104,(struct CVALUE*)come_increment_ref_count(come_value_117));
            i_107++;
            (label_114 = come_decrement_ref_count(label_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 534, "struct buffer*"))));
        buffer_append_str(buf_124,var__101->mCValueName);
        buffer_append_str(buf_124,"(");
        j_125=0;
        for(        o2_saved_126=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_104)),it_129=list$1CVALUE$ph_begin((o2_saved_126))        ;        !list$1CVALUE$ph_end((o2_saved_126))        ;        it_129=list$1CVALUE$ph_next((o2_saved_126))        ){
            buffer_append_str(buf_124,it_129->c_value);
            if(            j_125!=list$1CVALUE$ph_length(come_params_104)-1            ) {
                buffer_append_str(buf_124,",");
            }
            j_125++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_124,")");
        come_value_132=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "struct CVALUE*"))));
        __dec_obj60=come_value_132->c_value,
        come_value_132->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_124));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj61=come_value_132->type,
        come_value_132->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_103));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_132->type->mStatic=(_Bool)0;
        come_value_132->var=((void*)0);
        if(        lambda_type_102->mResultType->mHeap        ) {
            append_object_to_right_values(come_value_132,(struct sType*)come_increment_ref_count(lambda_type_102->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_132->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        info->calling_fun=((void*)0);
        __result_obj__87 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__87;
        come_call_finalizer(sType_finalize, result_type_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    generics_fun_133=((struct sGenericsFun*)(__right_value170=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char*)(__right_value169=__builtin_string(fun_name_97))),((void*)0))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, __right_value170, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics_136=(_Bool)0;
    if(    generics_fun_133    ) {
        method_generics_136=list$1char$ph_length(generics_fun_133->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sType$ph_length(self->method_generics_types)>0||method_generics_136    ) {
        if(        list$1sType$ph_length(self->method_generics_types)==0        ) {
            method_generics_types_137=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 576, "struct list$1sType$ph*"))));
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value173=make_method_generics_function((char*)come_increment_ref_count(fun_name_97),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_137),info)));
            name_138=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_139=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value173, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            generics_fun_name_140=(char*)come_increment_ref_count(name_138);
            fun_141=((struct sFun*)(__right_value174=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_140,((void*)0))));
            come_call_finalizer(sFun_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            method_block_99            ) {
                come_params_144=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 583, "struct list$1CVALUE$ph*"))));
                fun_145=((struct sFun*)(__right_value177=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_140,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value177, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                no_output_come_code_146=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_99,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_144),fun_145,fun_name_97,method_block_sline_100,info,(_Bool)1)                ) {
                    __result_obj__96 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_140 = come_decrement_ref_count(generics_fun_name_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__96;
                }
                info->no_output_come_code=no_output_come_code_146;
                method_block_node_147=((struct CVALUE*)(__right_value178=list$1CVALUE$ph_operator_load_element(come_params_144,-1)));
                come_call_finalizer(CVALUE_finalize, __right_value178, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                method_block_lambda_type_154=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_147->type));
                method_block_result_type_155=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_156=((struct sType*)(__right_value181=list$1sType$ph_operator_load_element(generics_fun_133->mParamTypes,-1)));
                come_call_finalizer(sType_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_method_block_result_type_157=generics_fun_method_block_lambda_type_156->mResultType;
                if(                generics_fun_method_block_result_type_157->mClass->mMethodGenerics                ) {
                    method_generics_num_158=generics_fun_method_block_result_type_157->mClass->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(method_generics_types_137,method_generics_num_158,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_155)));
                    come_call_finalizer(sType_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n_167=0;
                for(                o2_saved_168=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_156->mParamTypes)),it_171=list$1sType$ph_begin((o2_saved_168))                ;                !list$1sType$ph_end((o2_saved_168))                ;                it_171=list$1sType$ph_next((o2_saved_168))                ){
                    if(                    it_171->mClass->mMethodGenerics                    ) {
                        method_generics_num_174=it_171->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(method_generics_types_137,method_generics_num_174,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value189=list$1sType$ph_operator_load_element(method_block_lambda_type_154->mParamTypes,n_167))))));
                        come_call_finalizer(sType_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n_167++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_params_175=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 615, "struct list$1CVALUE$ph*"))));
            i_176=0;
            result_type_177=((void*)0);
            for(            o2_saved_178=(params_98),it_179=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_178))            ;            !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_178))            ;            it_179=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_178))            ){
                multiple_assign_var3=it_179;
                label_180=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_181=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_182=node_compile(node_181,info);
                if(                !Value_182                ) {
                    __result_obj__110 = (_Bool)0;
                    (label_180 = come_decrement_ref_count(label_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_181) ? node_181 = come_decrement_ref_count(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (generics_fun_name_140 = come_decrement_ref_count(generics_fun_name_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    return __result_obj__110;
                }
                else {
                }
                come_value_183=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj66=come_value_183->type,
                come_value_183->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_183->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                list$1CVALUE$ph_add(come_params_175,(struct CVALUE*)come_increment_ref_count(come_value_183));
                (label_180 = come_decrement_ref_count(label_180, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_181) ? node_181 = come_decrement_ref_count(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            generics_fun_133->mResultType->mClass->mMethodGenerics            ) {
                method_generics_num_187=generics_fun_133->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type                ) {
                    list$1sType$ph_operator_store_element(method_generics_types_137,method_generics_num_187,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    come_call_finalizer(sType_finalize, __right_value198, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            n_188=0;
            for(            o2_saved_189=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_133->mParamTypes)),it_190=list$1sType$ph_begin((o2_saved_189))            ;            !list$1sType$ph_end((o2_saved_189))            ;            it_190=list$1sType$ph_next((o2_saved_189))            ){
                if(                it_190->mClass->mMethodGenerics                ) {
                    method_generics_num_191=it_190->mClass->mMethodGenericsNum;
                    if(                    n_188<list$1CVALUE$ph_length(come_params_175)                    ) {
                        list$1sType$ph_operator_store_element(method_generics_types_137,method_generics_num_191,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value202=list$1CVALUE$ph_operator_load_element(come_params_175,n_188)))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value202, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                }
                n_188++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_140);
            (name_138 = come_decrement_ref_count(name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value204=make_method_generics_function((char*)come_increment_ref_count(fun_name_97),(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_137),info)));
            name_210=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_211=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj70=fun_name_97,
            fun_name_97=(char*)come_increment_ref_count(name_210);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (generics_fun_name_140 = come_decrement_ref_count(generics_fun_name_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_210 = come_decrement_ref_count(name_210, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value205=make_method_generics_function((char*)come_increment_ref_count(fun_name_97),(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types),info)));
            name_212=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_213=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value205, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj71=fun_name_97,
            fun_name_97=(char*)come_increment_ref_count(name_212);
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    string_operator_equals(fun_name_97,"__builtin_memmove")||string_operator_equals(fun_name_97,"__builtin_memset")||string_operator_equals(fun_name_97,"__builtin_ffs")||string_operator_equals(fun_name_97,"__builtin_ffsl")||string_operator_equals(fun_name_97,"__builtin_ffsll")||string_operator_equals(fun_name_97,"__builtin_bswap16")||string_operator_equals(fun_name_97,"__builtin_bswap32")||string_operator_equals(fun_name_97,"__builtin_bswap64")||string_operator_equals(fun_name_97,"__builtin_constant_p")||string_operator_equals(fun_name_97,"__builtin_expect")||string_operator_equals(fun_name_97,"__builtin___memset_chk")||string_operator_equals(fun_name_97,"__builtin_object_size")||string_operator_equals(fun_name_97,"__builtin___memcpy_chk")||string_operator_equals(fun_name_97,"__builtin___strncpy_chk")||string_operator_equals(fun_name_97,"__builtin___strncat_chk")||string_operator_equals(fun_name_97,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_97,"__builtin_strrchr")||string_operator_equals(fun_name_97,"__builtin_clz")||string_operator_equals(fun_name_97,"__dsb")||string_operator_equals(fun_name_97,"__isb")||string_operator_equals(fun_name_97,"__dmb")||(strlen(fun_name_97)==strlen("__builtin_arm_")&&memcmp(fun_name_97,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_97,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_97,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_97,"__c11_atomic_store")||string_operator_equals(fun_name_97,"__c11_atomic_load")||string_operator_equals(fun_name_97,"__c11_atomic_exchange")||string_operator_equals(fun_name_97,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_97,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_97,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_97,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_97,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_97,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_97,"__c11_atomic_fetch_xor")    ) {
        come_params_214=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 690, "struct list$1CVALUE$ph*"))));
        for(        o2_saved_215=(params_98),it_216=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_215))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_215))        ;        it_216=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_215))        ){
            multiple_assign_var6=it_216;
            label_217=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_218=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_219=node_compile(node_218,info);
            if(            !Value_219            ) {
                __result_obj__117 = (_Bool)0;
                (label_217 = come_decrement_ref_count(label_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__117;
            }
            else {
            }
            come_value_220=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj72=come_value_220->type,
            come_value_220->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_220->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_push_back(come_params_214,(struct CVALUE*)come_increment_ref_count(come_value_220));
            (label_217 = come_decrement_ref_count(label_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_218) ? node_218 = come_decrement_ref_count(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 705, "struct buffer*"))));
        buffer_append_str(buf_221,fun_name_97);
        buffer_append_str(buf_221,"(");
        j_222=0;
        for(        o2_saved_223=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_214)),it_224=list$1CVALUE$ph_begin((o2_saved_223))        ;        !list$1CVALUE$ph_end((o2_saved_223))        ;        it_224=list$1CVALUE$ph_next((o2_saved_223))        ){
            buffer_append_str(buf_221,it_224->c_value);
            if(            j_222!=list$1CVALUE$ph_length(come_params_214)-1            ) {
                buffer_append_str(buf_221,",");
            }
            j_222++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_221,")");
        come_value_225=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 722, "struct CVALUE*"))));
        __dec_obj73=come_value_225->c_value,
        come_value_225->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_221));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(fun_name_97,"__builtin_memmove")||string_operator_equals(fun_name_97,"__builtin_memset")        ) {
            __dec_obj74=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 726, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_ffs")        ) {
            __dec_obj75=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 729, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_ffsl")        ) {
            __dec_obj76=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 732, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_ffsll")        ) {
            __dec_obj77=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 735, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_bswap16")        ) {
            __dec_obj78=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("short")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_bswap32")        ) {
            __dec_obj79=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 741, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_bswap64")        ) {
            __dec_obj80=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 744, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_constant_p")        ) {
            __dec_obj81=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 747, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_expect")        ) {
            __dec_obj82=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 750, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin___memset_chk")        ) {
            __dec_obj83=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 753, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_object_size")        ) {
            __dec_obj84=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 757, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin___memcpy_chk")        ) {
            __dec_obj85=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 760, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_97,"__builtin___strncpy_chk")        ) {
            __dec_obj86=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_97,"__builtin___strncat_chk")        ) {
            __dec_obj87=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 768, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_strrchr")        ) {
            __dec_obj88=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 772, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_97,"__builtin___vsnprintf_chk")        ) {
            __dec_obj89=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 776, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_clz")        ) {
            __dec_obj90=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 779, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_thread_fence")        ) {
            __dec_obj91=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 782, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_signal_fence")        ) {
            __dec_obj92=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_exchange")        ) {
            __dec_obj93=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value272=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_exchange_strong")        ) {
            __dec_obj94=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value274=list$1CVALUE$ph_operator_load_element(come_params_214,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value274, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_exchange_weak")        ) {
            __dec_obj95=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value276=list$1CVALUE$ph_operator_load_element(come_params_214,2)))->type));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_store")        ) {
            __dec_obj96=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 797, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_load")        ) {
            __dec_obj97=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value281=list$1CVALUE$ph_operator_load_element(come_params_214,0)))->type));
            come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value281, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_value_225->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_fetch_add")        ) {
            __dec_obj98=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value283=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_fetch_sub")        ) {
            __dec_obj99=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value285=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value285, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_fetch_and")        ) {
            __dec_obj100=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value287=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_fetch_or")        ) {
            __dec_obj101=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value289=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__c11_atomic_fetch_xor")        ) {
            __dec_obj102=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value291=list$1CVALUE$ph_operator_load_element(come_params_214,1)))->type));
            come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__dsb")        ) {
            __dec_obj103=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 819, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__isb")        ) {
            __dec_obj104=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 822, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__dmb")        ) {
            __dec_obj105=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 825, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_arm_cdp")        ) {
            __dec_obj106=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 828, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_arm_ldc")        ) {
            __dec_obj107=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 831, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_arm_stc")        ) {
            __dec_obj108=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 834, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_arm_stcl")        ) {
            __dec_obj109=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 837, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(fun_name_97,"__builtin_arm_ldcl")        ) {
            __dec_obj110=come_value_225->type,
            come_value_225->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 840, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_225->var=((void*)0);
        add_come_last_code(info,"%s",come_value_225->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        __result_obj__118 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__118;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"__builtin_va_arg")    ) {
        come_params_226=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 852, "struct list$1CVALUE$ph*"))));
        i_227=0;
        result_type_228=((void*)0);
        for(        o2_saved_229=(params_98),it_230=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_229))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_229))        ;        it_230=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_229))        ){
            multiple_assign_var7=it_230;
            label_231=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_232=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_233=node_compile(node_232,info);
            if(            !Value_233            ) {
                __result_obj__119 = (_Bool)0;
                (label_231 = come_decrement_ref_count(label_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_232) ? node_232 = come_decrement_ref_count(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__119;
            }
            else {
            }
            come_value_234=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj111=come_value_234->type,
            come_value_234->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_234->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value_234));
            __dec_obj112=result_type_228,
            result_type_228=(struct sType*)come_increment_ref_count(come_value_234->type);
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_231 = come_decrement_ref_count(label_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_232) ? node_232 = come_decrement_ref_count(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_235=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 872, "struct buffer*"))));
        buffer_append_str(buf_235,fun_name_97);
        buffer_append_str(buf_235,"(");
        j_236=0;
        for(        o2_saved_237=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_226)),it_238=list$1CVALUE$ph_begin((o2_saved_237))        ;        !list$1CVALUE$ph_end((o2_saved_237))        ;        it_238=list$1CVALUE$ph_next((o2_saved_237))        ){
            buffer_append_str(buf_235,it_238->c_value);
            if(            j_236!=list$1CVALUE$ph_length(come_params_226)-1            ) {
                buffer_append_str(buf_235,",");
            }
            j_236++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_235,")");
        come_value_239=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 889, "struct CVALUE*"))));
        __dec_obj113=come_value_239->c_value,
        come_value_239->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_235));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=come_value_239->type,
        come_value_239->type=(struct sType*)come_increment_ref_count(result_type_228);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_239->var=((void*)0);
        add_come_last_code(info,"%s",come_value_239->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
        __result_obj__120 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__120;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"__builtin_va_copy")    ) {
        come_params_240=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 901, "struct list$1CVALUE$ph*"))));
        i_241=0;
        for(        o2_saved_242=(params_98),it_243=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_242))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_242))        ;        it_243=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_242))        ){
            multiple_assign_var8=it_243;
            label_244=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_245=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_246=node_compile(node_245,info);
            if(            !Value_246            ) {
                __result_obj__121 = (_Bool)0;
                (label_244 = come_decrement_ref_count(label_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_245) ? node_245 = come_decrement_ref_count(node_245, ((struct sNode*)node_245)->finalize, ((struct sNode*)node_245)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__121;
            }
            else {
            }
            come_value_247=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj115=come_value_247->type,
            come_value_247->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_247->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_240,(struct CVALUE*)come_increment_ref_count(come_value_247));
            (label_244 = come_decrement_ref_count(label_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_245) ? node_245 = come_decrement_ref_count(node_245, ((struct sNode*)node_245)->finalize, ((struct sNode*)node_245)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_248=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 918, "struct buffer*"))));
        buffer_append_str(buf_248,fun_name_97);
        buffer_append_str(buf_248,"(");
        j_249=0;
        for(        o2_saved_250=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_240)),it_251=list$1CVALUE$ph_begin((o2_saved_250))        ;        !list$1CVALUE$ph_end((o2_saved_250))        ;        it_251=list$1CVALUE$ph_next((o2_saved_250))        ){
            buffer_append_str(buf_248,it_251->c_value);
            if(            j_249!=list$1CVALUE$ph_length(come_params_240)-1            ) {
                buffer_append_str(buf_248,",");
            }
            j_249++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_248,")");
        result_type_252=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 935, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_value_253=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 937, "struct CVALUE*"))));
        __dec_obj116=come_value_253->c_value,
        come_value_253->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_248));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj117=come_value_253->type,
        come_value_253->type=(struct sType*)come_increment_ref_count(result_type_252);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_253->var=((void*)0);
        add_come_last_code(info,"%s",come_value_253->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
        __result_obj__122 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__122;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(fun_name_97,"string")    ) {
        __dec_obj118=fun_name_97,
        fun_name_97=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"wstring")    ) {
        __dec_obj119=fun_name_97,
        fun_name_97=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"inherit")    ) {
        p_254=info->come_fun->mName;
        version_255=0;
        while(        *p_254        ) {
            if(            *p_254==95&&*(p_254+1)==118&&xisdigit(*(p_254+2))            ) {
                p2_256=p_254+2;
                version_255=0;
                while(                xisdigit(*p2_256)                ) {
                    version_255=version_255*10+(*p2_256-48);
                    p2_256++;
                }
                break;
            }
            else {
                p_254++;
            }
        }
        char real_fun_name_257[2048];
        memset(&real_fun_name_257, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_257,info->come_fun->mName,p_254-info->come_fun->mName);
        real_fun_name_257[p_254-info->come_fun->mName]=0;
        for(        i_258=version_255-1        ;        i_258>=1        ;        i_258--        ){
            new_fun_name_259=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_257,i_258));
            if(            (_condtional_value_X3=(((struct sFun*)(__right_value341=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_259))))),            come_call_finalizer(sFun_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X3            ) {
                __dec_obj120=fun_name_97,
                fun_name_97=(char*)come_increment_ref_count(__builtin_string(new_fun_name_259));
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_259 = come_decrement_ref_count(new_fun_name_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        i_258==0        ) {
            new_fun_name_266=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_257));
            if(            (_condtional_value_X4=(((struct sFun*)(__right_value344=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_266))))),            come_call_finalizer(sFun_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X4            ) {
                __dec_obj121=fun_name_97,
                fun_name_97=(char*)come_increment_ref_count(__builtin_string(new_fun_name_266));
                __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            string_operator_equals(fun_name_97,info->come_fun->mName)            ) {
                ((struct tuple2$2int$bool$*)(__right_value346=err_msg(info,"invalid inherit")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__131 = (_Bool)1;
                (new_fun_name_266 = come_decrement_ref_count(new_fun_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__131;
            }
            (new_fun_name_266 = come_decrement_ref_count(new_fun_name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_267=128        ;        i_267>=1        ;        i_267--        ){
            new_fun_name_268=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_97,i_267));
            if(            (_condtional_value_X5=(((struct sFun*)(__right_value348=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_268))))),            come_call_finalizer(sFun_finalize, __right_value348, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X5            ) {
                __dec_obj122=fun_name_97,
                fun_name_97=(char*)come_increment_ref_count(__builtin_string(new_fun_name_268));
                __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_268 = come_decrement_ref_count(new_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_268 = come_decrement_ref_count(new_fun_name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    fun_269=((struct sFun*)(__right_value350=map$2char$phsFun$ph_at(info->funcs,fun_name_97,((void*)0))));
    come_call_finalizer(sFun_finalize, __right_value350, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun_269==((void*)0)    ) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_97);
        come_params_270=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1018, "struct list$1CVALUE$ph*"))));
        i_271=0;
        result_type_272=((void*)0);
        for(        o2_saved_273=(params_98),it_274=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_273))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_273))        ;        it_274=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_273))        ){
            multiple_assign_var9=it_274;
            label_275=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            node_276=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_277=node_compile(node_276,info);
            if(            !Value_277            ) {
                __result_obj__132 = (_Bool)0;
                (label_275 = come_decrement_ref_count(label_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__132;
            }
            else {
            }
            come_value_278=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj123=come_value_278->type,
            come_value_278->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_278->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            list$1CVALUE$ph_add(come_params_270,(struct CVALUE*)come_increment_ref_count(come_value_278));
            __dec_obj124=result_type_272,
            result_type_272=(struct sType*)come_increment_ref_count(come_value_278->type);
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (label_275 = come_decrement_ref_count(label_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buf_279=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1038, "struct buffer*"))));
        buffer_append_str(buf_279,fun_name_97);
        buffer_append_str(buf_279,"(");
        j_280=0;
        for(        o2_saved_281=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_270)),it_282=list$1CVALUE$ph_begin((o2_saved_281))        ;        !list$1CVALUE$ph_end((o2_saved_281))        ;        it_282=list$1CVALUE$ph_next((o2_saved_281))        ){
            buffer_append_str(buf_279,it_282->c_value);
            if(            j_280!=list$1CVALUE$ph_length(come_params_270)-1            ) {
                buffer_append_str(buf_279,",");
            }
            j_280++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_279,")");
        come_value_283=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1055, "struct CVALUE*"))));
        __dec_obj125=come_value_283->c_value,
        come_value_283->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_279));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj126=come_value_283->type,
        come_value_283->type=(struct sType*)come_increment_ref_count(result_type_272);
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_283->var=((void*)0);
        add_come_last_code(info,"%s",come_value_283->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_283));
        __result_obj__133 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__133;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    result_type_284=(struct sType*)come_increment_ref_count(sType_clone(fun_269->mResultType));
    result_type_284->mStatic=(_Bool)0;
    param_types_285=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1070, "struct list$1sType$ph*"))));
    for(    o2_saved_286=(struct list$1sType$ph*)come_increment_ref_count((fun_269->mParamTypes)),it_287=list$1sType$ph_begin((o2_saved_286))    ;    !list$1sType$ph_end((o2_saved_286))    ;    it_287=list$1sType$ph_next((o2_saved_286))    ){
        it2_288=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_287)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        list$1sType$ph_push_back(param_types_285,(struct sType*)come_increment_ref_count(sType_clone(it2_288)));
        come_call_finalizer(sType_finalize, it2_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj127=result_type_284,
    result_type_284=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_284),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_params_289=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1078, "struct list$1CVALUE$ph*"))));
    for(    i_290=0    ;    i_290<list$1sType$ph_length(fun_269->mParamTypes)-(((method_block_99)?(2):(0)))    ;    i_290++    ){
        list$1CVALUE$ph_add(come_params_289,((void*)0));
    }
    for(    o2_saved_291=(params_98),it_292=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_291))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_291))    ;    it_292=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_291))    ){
        multiple_assign_var10=it_292;
        label_293=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_294=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_269->mVarArgs||string_operator_equals(fun_name_97,"__builtin_va_start")        ) {
        }
        else if(        label_293        ) {
            Value_295=node_compile(node_294,info);
            if(            !Value_295            ) {
                __result_obj__134 = (_Bool)0;
                (label_293 = come_decrement_ref_count(label_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_294) ? node_294 = come_decrement_ref_count(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__134;
            }
            else {
            }
            come_value_296=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj128=come_value_296->type,
            come_value_296->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_296->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            n_297=0;
            for(            o2_saved_298=(struct list$1char$ph*)come_increment_ref_count((fun_269->mParamNames)),it_301=list$1char$ph_begin((o2_saved_298))            ;            !list$1char$ph_end((o2_saved_298))            ;            it_301=list$1char$ph_next((o2_saved_298))            ){
                if(                string_operator_equals(label_293,it_301)                ) {
                    break;
                }
                n_297++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X6=(((struct sType*)(__right_value371=list$1sType$ph_operator_load_element(param_types_285,n_297))))),            come_call_finalizer(sType_finalize, __right_value371, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X6            ) {
                check_assign_type(((char*)(__right_value374=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value372=string_to_string(fun_name_97))),((char*)(__right_value373=int_to_string(n_297)))))),((struct sType*)(__right_value375=list$1sType$ph_operator_load_element(param_types_285,n_297))),come_value_296->type,come_value_296,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value375, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X7=(((struct sType*)(__right_value376=list$1sType$ph_operator_load_element(param_types_285,n_297)))&&((struct sType*)(__right_value377=list$1sType$ph_operator_load_element(param_types_285,n_297)))->mHeap&&come_value_296->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value376, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value377, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X7            ) {
                std_move(((struct sType*)(__right_value378=list$1sType$ph_operator_load_element(param_types_285,n_297))),come_value_296->type,come_value_296,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value378, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_289,n_297,(struct CVALUE*)come_increment_ref_count(come_value_296));
            come_call_finalizer(CVALUE_finalize, come_value_296, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_293 = come_decrement_ref_count(label_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_294) ? node_294 = come_decrement_ref_count(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    i_309=0;
    for(    o2_saved_310=(params_98),it_311=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_310))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_310))    ;    it_311=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_310))    ){
        multiple_assign_var11=it_311;
        label_312=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_313=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        fun_269->mVarArgs||string_operator_equals(fun_name_97,"__builtin_va_start")        ) {
            Value_314=node_compile(node_313,info);
            if(            !Value_314            ) {
                __result_obj__143 = (_Bool)0;
                (label_312 = come_decrement_ref_count(label_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_313) ? node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__143;
            }
            else {
            }
            come_value_315=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj130=come_value_315->type,
            come_value_315->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_315->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X8=(((struct CVALUE*)(__right_value381=list$1CVALUE$ph_operator_load_element(come_params_289,i_309)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value381, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X8                ) {
                    break;
                }
                else {
                    i_309++;
                }
            }
            list$1CVALUE$ph_replace(come_params_289,i_309,(struct CVALUE*)come_increment_ref_count(come_value_315));
            i_309++;
            come_call_finalizer(CVALUE_finalize, come_value_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        label_312        ) {
        }
        else {
            Value_316=node_compile(node_313,info);
            if(            !Value_316            ) {
                __result_obj__144 = (_Bool)0;
                (label_312 = come_decrement_ref_count(label_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_313) ? node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__144;
            }
            else {
            }
            come_value_317=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj131=come_value_317->type,
            come_value_317->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_317->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
            come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                if(                (_condtional_value_X9=(((struct CVALUE*)(__right_value384=list$1CVALUE$ph_operator_load_element(come_params_289,i_309)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value384, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X9                ) {
                    break;
                }
                else {
                    i_309++;
                }
            }
            if(            (_condtional_value_X10=(((struct sType*)(__right_value385=list$1sType$ph_operator_load_element(param_types_285,i_309))))),            come_call_finalizer(sType_finalize, __right_value385, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X10            ) {
                check_assign_type(((char*)(__right_value388=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value386=string_to_string(fun_name_97))),((char*)(__right_value387=int_to_string(i_309)))))),((struct sType*)(__right_value389=list$1sType$ph_operator_load_element(param_types_285,i_309))),come_value_317->type,come_value_317,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value389, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X11=(((struct sType*)(__right_value390=list$1sType$ph_operator_load_element(param_types_285,i_309)))&&((struct sType*)(__right_value391=list$1sType$ph_operator_load_element(param_types_285,i_309)))->mHeap&&come_value_317->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value390, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value391, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X11            ) {
                std_move(((struct sType*)(__right_value392=list$1sType$ph_operator_load_element(param_types_285,i_309))),come_value_317->type,come_value_317,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value392, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            list$1CVALUE$ph_replace(come_params_289,i_309,(struct CVALUE*)come_increment_ref_count(come_value_317));
            i_309++;
            come_call_finalizer(CVALUE_finalize, come_value_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (label_312 = come_decrement_ref_count(label_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_313) ? node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    (_Bool)1    ) {
        if(        (_condtional_value_X12=(((struct CVALUE*)(__right_value393=list$1CVALUE$ph_operator_load_element(come_params_289,i_309)))==((void*)0))),        come_call_finalizer(CVALUE_finalize, __right_value393, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X12        ) {
            break;
        }
        else {
            i_309++;
        }
    }
    if(    list$1tuple2$2char$phsNode$ph$ph_length(params_98)<list$1sType$ph_length(fun_269->mParamTypes)    ) {
        for(        ;        i_309<list$1sType$ph_length(fun_269->mParamTypes)-(((method_block_99)?(2):(0)))        ;        i_309++        ){
            default_param_318=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value394=list$1char$ph_operator_load_element(fun_269->mParamDefaultParametors,i_309))), "05call.c", 1187, "char*"));
            (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_name_325=((char*)(__right_value396=list$1char$ph_operator_load_element(fun_269->mParamNames,i_309)));
            (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            (_condtional_value_X13=(default_param_318&&string_operator_not_equals(default_param_318,"")&&((struct CVALUE*)(__right_value397=list$1CVALUE$ph_operator_load_element(come_params_289,i_309)))==((void*)0))),            come_call_finalizer(CVALUE_finalize, __right_value397, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X13            ) {
                source_326=(struct buffer*)come_increment_ref_count(info->source);
                p_327=info->p;
                head_328=info->head;
                sline_329=info->sline;
                __dec_obj132=info->source,
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_318));
                come_call_finalizer(buffer_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_330=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_331=node_compile(node_330,info);
                if(                !Value_331                ) {
                    __result_obj__149 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_330) ? node_330 = come_decrement_ref_count(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (default_param_318 = come_decrement_ref_count(default_param_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__149;
                }
                else {
                }
                __dec_obj133=info->source,
                info->source=(struct buffer*)come_increment_ref_count(source_326);
                come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                info->p=p_327;
                info->head=head_328;
                info->sline=sline_329;
                come_value_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj134=come_value_332->type,
                come_value_332->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_332->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X14=(((struct sType*)(__right_value402=list$1sType$ph_operator_load_element(param_types_285,i_309))))),                come_call_finalizer(sType_finalize, __right_value402, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X14                ) {
                    check_assign_type(((char*)(__right_value405=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value403=string_to_string(fun_name_97))),((char*)(__right_value404=int_to_string(i_309)))))),((struct sType*)(__right_value406=list$1sType$ph_operator_load_element(param_types_285,i_309))),come_value_332->type,come_value_332,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value406, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X15=(((struct sType*)(__right_value407=list$1sType$ph_operator_load_element(param_types_285,i_309)))&&((struct sType*)(__right_value408=list$1sType$ph_operator_load_element(param_types_285,i_309)))->mHeap&&come_value_332->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value407, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value408, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X15                ) {
                    std_move(((struct sType*)(__right_value409=list$1sType$ph_operator_load_element(param_types_285,i_309))),come_value_332->type,come_value_332,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value409, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_289,i_309,(struct CVALUE*)come_increment_ref_count(come_value_332));
                come_call_finalizer(buffer_finalize, source_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_330) ? node_330 = come_decrement_ref_count(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                (_condtional_value_X16=(((struct CVALUE*)(__right_value410=list$1CVALUE$ph_operator_load_element(come_params_289,i_309)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value410, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X16                ) {
                    ((struct tuple2$2int$bool$*)(__right_value411=err_msg(info,"require parametor(%s)(1) %d",fun_269->mName,i_309)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value411, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__150 = (_Bool)1;
                    (default_param_318 = come_decrement_ref_count(default_param_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__150;
                }
            }
            (default_param_318 = come_decrement_ref_count(default_param_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    if(    list$1sType$ph_length(fun_269->mParamTypes)-(((method_block_99)?(2):(0)))!=list$1CVALUE$ph_length(come_params_289)&&!fun_269->mVarArgs&&string_operator_not_equals(fun_name_97,"__builtin_va_start")&&string_operator_not_equals(fun_name_97,"__builtin_va_end")    ) {
        ((struct tuple2$2int$bool$*)(__right_value412=err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_97,list$1sType$ph_length(fun_269->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_98))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value412, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__151 = (_Bool)1;
        (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__151;
    }
    if(    method_block_99    ) {
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1239, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value414=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1239, "struct sCurrentNode*")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode_finalize;
        _inf_value1->clone=(void*)sCurrentNode_clone;
        _inf_value1->compile=(void*)sCurrentNode_compile;
        _inf_value1->sline=(void*)sCurrentNode_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode_kind;
        _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
        current_stack_frame_node_333=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sCurrentNode_finalize, __right_value414, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        Value_335=node_compile(current_stack_frame_node_333,info);
        if(        !Value_335        ) {
            __result_obj__154 = (_Bool)0;
            ((current_stack_frame_node_333) ? current_stack_frame_node_333 = come_decrement_ref_count(current_stack_frame_node_333, ((struct sNode*)current_stack_frame_node_333)->finalize, ((struct sNode*)current_stack_frame_node_333)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__154;
        }
        else {
        }
        come_value_336=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj136=come_value_336->type,
        come_value_336->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_336->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(come_params_289,(struct CVALUE*)come_increment_ref_count(come_value_336));
        method_block2_337=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1249, "struct buffer*"))));
        method_block_type_338=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value422=list$1sType$ph_operator_load_element(fun_269->mParamTypes,-1)))));
        come_call_finalizer(sType_finalize, __right_value422, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        class_name_339=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)(__right_value425=list$1sType$ph_operator_load_element(method_block_type_338->mParamTypes,0)))->mClass=((struct sClass*)(__right_value426=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_339)));
        come_call_finalizer(sType_finalize, __right_value425, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, __right_value426, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        current_stack_frame_struct_348=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value427=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_339)));
        come_call_finalizer(sClass_finalize, __right_value427, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->num_method_block++;
        num_method_block_349=info->num_method_block;
        if(        string_operator_not_equals(method_block_type_338->mClass->mName,"lambda")        ) {
            ((struct tuple2$2int$bool$*)(__right_value428=err_msg(info,"This function does not have method block(%s)",fun_name_97)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value428, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__163 = (_Bool)1;
            ((current_stack_frame_node_333) ? current_stack_frame_node_333 = come_decrement_ref_count(current_stack_frame_node_333, ((struct sNode*)current_stack_frame_node_333)->finalize, ((struct sNode*)current_stack_frame_node_333)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_339 = come_decrement_ref_count(class_name_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__163;
        }
        result_type_350=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_338->mResultType));
        result_type_350->mStatic=(_Bool)0;
        result_type2_351=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_350),(struct sType*)come_increment_ref_count(info->generics_type),info));
        param_types_352=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type_338->mParamTypes));
        param_names_353=method_block_type_338->mParamNames;
        all_alhabet_sname_354=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1273, "struct buffer*"))));
        {
            p_355=info->sname;
            while(            *p_355            ) {
                if(                xisalnum(*p_355)                ) {
                    buffer_append_char(all_alhabet_sname_354,*p_355++);
                }
                else {
                    p_355++;
                }
            }
        }
        buffer_append_format(method_block2_337,"%s fun_block%d_%s(",((char*)(__right_value434=make_come_type_name_string(result_type2_351,info,(_Bool)0))),num_method_block_349,((char*)(__right_value435=buffer_to_string(all_alhabet_sname_354))));
        (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        i_309=0;
        for(        o2_saved_356=(struct list$1sType$ph*)come_increment_ref_count((param_types_352)),it_357=list$1sType$ph_begin((o2_saved_356))        ;        !list$1sType$ph_end((o2_saved_356))        ;        it_357=list$1sType$ph_next((o2_saved_356))        ){
            param_type_358=(struct sType*)come_increment_ref_count(it_357);
            if(            i_309==0            ) {
                param_name_359=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_337,"%s",((char*)(__right_value437=make_define_var(param_type_358,param_name_359,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_359 = come_decrement_ref_count(param_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            i_309==1            ) {
                param_name_360=(char*)come_increment_ref_count(xsprintf("it"));
                param_type2_361=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_358),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2_337,"%s",((char*)(__right_value440=make_define_var(param_type2_361,param_name_360,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_360 = come_decrement_ref_count(param_name_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                param_name_362=(char*)come_increment_ref_count(xsprintf("it%d",i_309));
                param_type2_363=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_358),(struct sType*)come_increment_ref_count(info->generics_type),info));
                buffer_append_format(method_block2_337,"%s",((char*)(__right_value443=make_define_var(param_type2_363,param_name_362,(_Bool)0,(_Bool)1,info,(_Bool)1))));
                (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (param_name_362 = come_decrement_ref_count(param_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            i_309!=list$1sType$ph_length(param_types_352)-1            ) {
                buffer_append_str(method_block2_337,",");
            }
            i_309++;
            come_call_finalizer(sType_finalize, param_type_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(method_block2_337,")\n");
        buffer_append_str(method_block2_337,((char*)(__right_value444=buffer_to_string(method_block_99))));
        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        source3_364=(struct buffer*)come_increment_ref_count(info->source);
        p_365=info->p;
        head_366=info->head;
        sline_367=info->sline;
        __dec_obj137=info->source,
        info->source=(struct buffer*)come_increment_ref_count(method_block2_337);
        come_call_finalizer(buffer_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_100;
        node_368=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_369=node_compile(node_368,info);
        if(        !Value_369        ) {
            __result_obj__164 = (_Bool)0;
            ((current_stack_frame_node_333) ? current_stack_frame_node_333 = come_decrement_ref_count(current_stack_frame_node_333, ((struct sNode*)current_stack_frame_node_333)->finalize, ((struct sNode*)current_stack_frame_node_333)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_339 = come_decrement_ref_count(class_name_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_350, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_368) ? node_368 = come_decrement_ref_count(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__164;
        }
        else {
        }
        method_block_name_370=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block_349,((char*)(__right_value446=buffer_to_string(all_alhabet_sname_354)))));
        (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value2_371=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1340, "struct CVALUE*"))));
        fun2_372=((struct sFun*)(__right_value451=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value450=__builtin_string(method_block_name_370))),((void*)0))));
        (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun2_372==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value452=err_msg(info,"method block function not found(%s)",method_block_name_370)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value452, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__165 = (_Bool)1;
            ((current_stack_frame_node_333) ? current_stack_frame_node_333 = come_decrement_ref_count(current_stack_frame_node_333, ((struct sNode*)current_stack_frame_node_333)->finalize, ((struct sNode*)current_stack_frame_node_333)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (class_name_339 = come_decrement_ref_count(class_name_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_350, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source3_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_368) ? node_368 = come_decrement_ref_count(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (method_block_name_370 = come_decrement_ref_count(method_block_name_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2_371, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__165;
        }
        method_block_type2_373=fun2_372->mLambdaType;
        __dec_obj138=come_value2_371->c_value,
        come_value2_371->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_370));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj139=come_value2_371->type,
        come_value2_371->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_373));
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_371->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_289,(struct CVALUE*)come_increment_ref_count(come_value2_371));
        __dec_obj140=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_364);
        come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_365;
        info->head=head_366;
        info->sline=sline_367;
        info->current_stack_frame_struct=current_stack_frame_struct_348;
        ((current_stack_frame_node_333) ? current_stack_frame_node_333 = come_decrement_ref_count(current_stack_frame_node_333, ((struct sNode*)current_stack_frame_node_333)->finalize, ((struct sNode*)current_stack_frame_node_333)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_339 = come_decrement_ref_count(class_name_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_350, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_368) ? node_368 = come_decrement_ref_count(node_368, ((struct sNode*)node_368)->finalize, ((struct sNode*)node_368)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name_370 = come_decrement_ref_count(method_block_name_370, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_371, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_374=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1365, "struct buffer*"))));
    if(    string_operator_equals(fun_name_97,"__isoc23_strtoll")    ) {
        __dec_obj141=fun_name_97,
        fun_name_97=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"__isoc23_strtoul")    ) {
        __dec_obj142=fun_name_97,
        fun_name_97=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(fun_name_97,"__isoc23_strtoull")    ) {
        __dec_obj143=fun_name_97,
        fun_name_97=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    buffer_append_str(buf_374,fun_name_97);
    buffer_append_str(buf_374,"(");
    j_375=0;
    for(    o2_saved_376=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_289)),it_377=list$1CVALUE$ph_begin((o2_saved_376))    ;    !list$1CVALUE$ph_end((o2_saved_376))    ;    it_377=list$1CVALUE$ph_next((o2_saved_376))    ){
        buffer_append_str(buf_374,it_377->c_value);
        if(        j_375!=list$1CVALUE$ph_length(come_params_289)-1        ) {
            buffer_append_str(buf_374,",");
        }
        j_375++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_376, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_374,")");
    come_value_378=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1392, "struct CVALUE*"))));
    __dec_obj144=come_value_378->c_value,
    come_value_378->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_374));
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj145=come_value_378->type,
    come_value_378->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_284));
    come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_378->type->mStatic=(_Bool)0;
    come_value_378->type->mImmutable=(_Bool)0;
    come_value_378->var=((void*)0);
    if(    fun_269->mResultType->mHeap    ) {
        append_object_to_right_values(come_value_378,(struct sType*)come_increment_ref_count(result_type_284),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_calloc_v2")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")&&string_operator_not_equals(info->come_fun->mName,"come_free_v2")    ) {
        if(        string_operator_not_equals(fun_name_97,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_97,"null_check")&&string_operator_not_equals(fun_name_97,"come_push_stackframe")&&string_operator_not_equals(fun_name_97,"come_push_stackframe_v2")&&string_operator_not_equals(fun_name_97,"come_pop_stackframe")&&string_operator_not_equals(fun_name_97,"come_pop_stackframe_v2")        ) {
            __dec_obj146=come_value_378->c_value,
            come_value_378->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_378->c_value,come_value_378->type,info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    add_come_last_code(info,"%s",come_value_378->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_378));
    info->calling_fun=fun_269;
    __result_obj__166 = (_Bool)1;
    (fun_name_97 = come_decrement_ref_count(fun_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_374, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__59;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_89;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_90;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_89=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_90=self->head;
    while(    it_90!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_89,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_90->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_89,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_90->item)));
        }
        it_90=it_90->next;
    }
    __result_obj__64 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_89);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_87;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_88;
    it_87=self->head;
    while(    it_87!=((void*)0)    ) {
        prev_it_88=it_87;
        it_87=it_87->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__60;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value139 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_91;
struct tuple2$2char$phsNode$ph* __dec_obj51;
void* __right_value140 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_92;
struct tuple2$2char$phsNode$ph* __dec_obj52;
void* __right_value141 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_93;
struct tuple2$2char$phsNode$ph* __dec_obj53;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__61;
    if(    self->len==0    ) {
        litem_91=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value139=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj51=litem_91->item,
        litem_91->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1    ) {
        litem_92=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value140=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj52=litem_92->item,
        litem_92->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value141=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj53=litem_93->item,
        litem_93->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result_obj__61 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__62;
void* __right_value142 = (void*)0;
struct tuple2$2char$phsNode$ph* result_94;
void* __right_value143 = (void*)0;
char* __dec_obj54;
void* __right_value144 = (void*)0;
struct sNode* __dec_obj55;
struct tuple2$2char$phsNode$ph* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__62;
    }
    result_94=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj54=result_94->v1,
        result_94->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj55=result_94->v2,
        result_94->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__63 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_94);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_95;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_96;
    it_95=self->head;
    while(    it_95!=((void*)0)    ) {
        prev_it_96=it_95;
        it_95=it_95->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__68 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_105;
struct list_item$1CVALUE$ph* prev_it_106;
    it_105=self->head;
    while(    it_105!=((void*)0)    ) {
        prev_it_106=it_105;
        it_105=it_105->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_109;
struct tuple2$2char$phsNode$ph* __result_obj__70;
struct tuple2$2char$phsNode$ph* __result_obj__71;
struct tuple2$2char$phsNode$ph* result_110;
struct tuple2$2char$phsNode$ph* __result_obj__72;
result_109 = (void*)0;
result_110 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_109,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__70 = result_109;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_110,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__72 = result_110;
    return __result_obj__72;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_112;
struct tuple2$2char$phsNode$ph* __result_obj__73;
struct tuple2$2char$phsNode$ph* __result_obj__74;
struct tuple2$2char$phsNode$ph* result_113;
struct tuple2$2char$phsNode$ph* __result_obj__75;
result_112 = (void*)0;
result_113 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_112,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__73 = result_112;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_113,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__75 = result_113;
    return __result_obj__75;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_118;
int i_119;
struct sType* __result_obj__77;
struct sType* default_value_120;
struct sType* __result_obj__78;
default_value_120 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_118=self->head;
    i_119=0;
    while(    it_118!=((void*)0)    ) {
        if(        position==i_119        ) {
            __result_obj__77 = (struct sType*)come_increment_ref_count(it_118->item);
            come_call_finalizer(sType_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__77;
        }
        it_118=it_118->next;
        i_119++;
    }
    memset(&default_value_120,0,sizeof(struct sType*));
    __result_obj__78 = (struct sType*)come_increment_ref_count(default_value_120);
    come_call_finalizer(sType_finalize, default_value_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_121;
int i_122;
struct sType* __result_obj__79;
struct sType* default_value_123;
struct sType* __result_obj__80;
default_value_123 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_121=self->head;
    i_122=0;
    while(    it_121!=((void*)0)    ) {
        if(        position==i_122        ) {
            __result_obj__79 = (struct sType*)come_increment_ref_count(it_121->item);
            come_call_finalizer(sType_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
        it_121=it_121->next;
        i_122++;
    }
    memset(&default_value_123,0,sizeof(struct sType*));
    __result_obj__80 = (struct sType*)come_increment_ref_count(default_value_123);
    come_call_finalizer(sType_finalize, default_value_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_127;
struct CVALUE* __result_obj__81;
struct CVALUE* __result_obj__82;
struct CVALUE* result_128;
struct CVALUE* __result_obj__83;
result_127 = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_127,0,sizeof(struct CVALUE*));
        __result_obj__81 = result_127;
        return __result_obj__81;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__82 = self->it->item;
        return __result_obj__82;
    }
    memset(&result_128,0,sizeof(struct CVALUE*));
    __result_obj__83 = result_128;
    return __result_obj__83;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_130;
struct CVALUE* __result_obj__84;
struct CVALUE* __result_obj__85;
struct CVALUE* result_131;
struct CVALUE* __result_obj__86;
result_130 = (void*)0;
result_131 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_130,0,sizeof(struct CVALUE*));
        __result_obj__84 = result_130;
        return __result_obj__84;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__85 = self->it->item;
        return __result_obj__85;
    }
    memset(&result_131,0,sizeof(struct CVALUE*));
    __result_obj__86 = result_131;
    return __result_obj__86;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_134;
unsigned int it_135;
struct sGenericsFun* __result_obj__88;
struct sGenericsFun* __result_obj__89;
struct sGenericsFun* __result_obj__90;
struct sGenericsFun* __result_obj__91;
    hash_134=string_get_hash_key(((char*)key))%self->size;
    it_135=hash_134;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_135]        ) {
            if(            string_equals(self->keys[it_135],key)            ) {
                __result_obj__88 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_135]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__88;
            }
            it_135++;
            if(            it_135>=self->size            ) {
                it_135=0;
            }
            else if(            it_135==hash_134            ) {
                __result_obj__89 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__89;
            }
        }
        else {
            __result_obj__90 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__90;
        }
    }
    __result_obj__91 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)    ) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_142;
unsigned int it_143;
struct sFun* __result_obj__92;
struct sFun* __result_obj__93;
struct sFun* __result_obj__94;
struct sFun* __result_obj__95;
    hash_142=string_get_hash_key(((char*)key))%self->size;
    it_143=hash_142;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_143]        ) {
            if(            string_equals(self->keys[it_143],key)            ) {
                __result_obj__92 = (struct sFun*)come_increment_ref_count(self->items[it_143]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__92;
            }
            it_143++;
            if(            it_143>=self->size            ) {
                it_143=0;
            }
            else if(            it_143==hash_142            ) {
                __result_obj__93 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__93;
            }
        }
        else {
            __result_obj__94 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__94;
        }
    }
    __result_obj__95 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->mSourceDefer, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_148;
int i_149;
struct CVALUE* __result_obj__97;
struct CVALUE* default_value_150;
struct CVALUE* __result_obj__98;
default_value_150 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_148=self->head;
    i_149=0;
    while(    it_148!=((void*)0)    ) {
        if(        position==i_149        ) {
            __result_obj__97 = (struct CVALUE*)come_increment_ref_count(it_148->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__97;
        }
        it_148=it_148->next;
        i_149++;
    }
    memset(&default_value_150,0,sizeof(struct CVALUE*));
    __result_obj__98 = (struct CVALUE*)come_increment_ref_count(default_value_150);
    come_call_finalizer(CVALUE_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_151;
int i_152;
struct CVALUE* __result_obj__99;
struct CVALUE* default_value_153;
struct CVALUE* __result_obj__100;
default_value_153 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_151=self->head;
    i_152=0;
    while(    it_151!=((void*)0)    ) {
        if(        position==i_152        ) {
            __result_obj__99 = (struct CVALUE*)come_increment_ref_count(it_151->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__99;
        }
        it_151=it_151->next;
        i_152++;
    }
    memset(&default_value_153,0,sizeof(struct CVALUE*));
    __result_obj__100 = (struct CVALUE*)come_increment_ref_count(default_value_153);
    come_call_finalizer(CVALUE_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_159;
int i_160;
struct sType* default_value_161;
struct list$1sType$ph* __result_obj__102;
struct list_item$1sType$ph* it_165;
int i_166;
struct sType* __dec_obj65;
struct list$1sType$ph* __result_obj__103;
default_value_161 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_159=self->len;
        for(        i_160=0        ;        i_160<position-len_159        ;        i_160++        ){
            memset(&default_value_161,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_161));
            come_call_finalizer(sType_finalize, default_value_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__102 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__102;
    }
    it_165=self->head;
    i_166=0;
    while(    it_165!=((void*)0)    ) {
        if(        position==i_166        ) {
            __dec_obj65=it_165->item,
            it_165->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_165=it_165->next;
        i_166++;
    }
    __result_obj__103 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value182 = (void*)0;
struct list_item$1sType$ph* litem_162;
struct sType* __dec_obj62;
void* __right_value183 = (void*)0;
struct list_item$1sType$ph* litem_163;
struct sType* __dec_obj63;
void* __right_value184 = (void*)0;
struct list_item$1sType$ph* litem_164;
struct sType* __dec_obj64;
struct list$1sType$ph* __result_obj__101;
    if(    self->len==0    ) {
        litem_162=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value182=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sType$ph*"))));
        litem_162->prev=((void*)0);
        litem_162->next=((void*)0);
        __dec_obj62=litem_162->item,
        litem_162->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_162;
        self->head=litem_162;
    }
    else if(    self->len==1    ) {
        litem_163=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value183=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sType$ph*"))));
        litem_163->prev=self->head;
        litem_163->next=((void*)0);
        __dec_obj63=litem_163->item,
        litem_163->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_163;
        self->head->next=litem_163;
    }
    else {
        litem_164=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value184=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sType$ph*"))));
        litem_164->prev=self->tail;
        litem_164->next=((void*)0);
        __dec_obj64=litem_164->item,
        litem_164->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_164;
        self->tail=litem_164;
    }
    self->len++;
    __result_obj__101 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_169;
struct sType* __result_obj__104;
struct sType* __result_obj__105;
struct sType* result_170;
struct sType* __result_obj__106;
result_169 = (void*)0;
result_170 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_169,0,sizeof(struct sType*));
        __result_obj__104 = result_169;
        return __result_obj__104;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__105 = self->it->item;
        return __result_obj__105;
    }
    memset(&result_170,0,sizeof(struct sType*));
    __result_obj__106 = result_170;
    return __result_obj__106;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_172;
struct sType* __result_obj__107;
struct sType* __result_obj__108;
struct sType* result_173;
struct sType* __result_obj__109;
result_172 = (void*)0;
result_173 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_172,0,sizeof(struct sType*));
        __result_obj__107 = result_172;
        return __result_obj__107;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__108 = self->it->item;
        return __result_obj__108;
    }
    memset(&result_173,0,sizeof(struct sType*));
    __result_obj__109 = result_173;
    return __result_obj__109;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value195 = (void*)0;
struct list_item$1CVALUE$ph* litem_184;
struct CVALUE* __dec_obj67;
void* __right_value196 = (void*)0;
struct list_item$1CVALUE$ph* litem_185;
struct CVALUE* __dec_obj68;
void* __right_value197 = (void*)0;
struct list_item$1CVALUE$ph* litem_186;
struct CVALUE* __dec_obj69;
struct list$1CVALUE$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_184=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value195=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1CVALUE$ph*"))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        __dec_obj67=litem_184->item,
        litem_184->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1    ) {
        litem_185=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value196=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1CVALUE$ph*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        __dec_obj68=litem_185->item,
        litem_185->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value197=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1CVALUE$ph*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        __dec_obj69=litem_186->item,
        litem_186->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__111 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_192;
unsigned int it_193;
struct map$2char$phsFun$ph* __result_obj__116;
    hash_192=string_get_hash_key(((char*)key))%self->size;
    it_193=hash_192;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_193]        ) {
            if(            string_equals(self->keys[it_193],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_193]);
                self->item_existance[it_193]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_193] = come_decrement_ref_count(self->keys[it_193], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_193]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_193], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_193]=((void*)0);
                self->len--;
                break;
            }
            it_193++;
            if(            it_193>=self->size            ) {
                it_193=0;
            }
            else if(            it_193==hash_192            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__116 = self;
    return __result_obj__116;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_194;
struct list_item$1char$ph* it_195;
struct list$1char$ph* __result_obj__115;
    it2_194=0;
    it_195=self->head;
    while(    it_195!=((void*)0)    ) {
        if(        string_equals(it_195->item,item)        ) {
            list$1char$ph_delete(self,it2_194,it2_194+1);
            break;
        }
        it2_194++;
        it_195=it_195->next;
    }
    __result_obj__115 = self;
    return __result_obj__115;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_196;
struct list$1char$ph* __result_obj__112;
struct list_item$1char$ph* it_199;
int i_200;
struct list_item$1char$ph* prev_it_201;
struct list_item$1char$ph* it_202;
int i_203;
struct list_item$1char$ph* prev_it_204;
struct list_item$1char$ph* it_205;
struct list_item$1char$ph* head_prev_it_206;
struct list_item$1char$ph* tail_it_207;
int i_208;
struct list_item$1char$ph* prev_it_209;
struct list$1char$ph* __result_obj__114;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_196=tail;
        tail=head;
        head=tmp_196;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__112 = self;
        return __result_obj__112;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_199=self->head;
        i_200=0;
        while(        it_199!=((void*)0)        ) {
            if(            i_200<tail            ) {
                prev_it_201=it_199;
                it_199=it_199->next;
                i_200++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_200==tail            ) {
                self->head=it_199;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_199=it_199->next;
                i_200++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_202=self->head;
        i_203=0;
        while(        it_202!=((void*)0)        ) {
            if(            i_203==head            ) {
                self->tail=it_202->prev;
                self->tail->next=((void*)0);
            }
            if(            i_203>=head            ) {
                prev_it_204=it_202;
                it_202=it_202->next;
                i_203++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_202=it_202->next;
                i_203++;
            }
        }
    }
    else {
        it_205=self->head;
        head_prev_it_206=((void*)0);
        tail_it_207=((void*)0);
        i_208=0;
        while(        it_205!=((void*)0)        ) {
            if(            i_208==head            ) {
                head_prev_it_206=it_205->prev;
            }
            if(            i_208==tail            ) {
                tail_it_207=it_205;
            }
            if(            i_208>=head&&i_208<tail            ) {
                prev_it_209=it_205;
                it_205=it_205->next;
                i_208++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_205=it_205->next;
                i_208++;
            }
        }
        if(        head_prev_it_206!=((void*)0)        ) {
            head_prev_it_206->next=tail_it_207;
        }
        if(        tail_it_207!=((void*)0)        ) {
            tail_it_207->prev=head_prev_it_206;
        }
    }
    __result_obj__114 = self;
    return __result_obj__114;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_197;
struct list_item$1char$ph* prev_it_198;
struct list$1char$ph* __result_obj__113;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__113 = self;
    return __result_obj__113;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_260;
unsigned int hash_261;
unsigned int it_262;
struct sFun* __result_obj__123;
struct sFun* __result_obj__124;
struct sFun* __result_obj__125;
struct sFun* __result_obj__126;
default_value_260 = (void*)0;
    memset(&default_value_260,0,sizeof(struct sFun*));
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_262]        ) {
            if(            string_equals(self->keys[it_262],key)            ) {
                __result_obj__123 = (struct sFun*)come_increment_ref_count(self->items[it_262]);
                come_call_finalizer(sFun_finalize, default_value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__123;
            }
            it_262++;
            if(            it_262>=self->size            ) {
                it_262=0;
            }
            else if(            it_262==hash_261            ) {
                __result_obj__124 = (struct sFun*)come_increment_ref_count(default_value_260);
                come_call_finalizer(sFun_finalize, default_value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__124;
            }
        }
        else {
            __result_obj__125 = (struct sFun*)come_increment_ref_count(default_value_260);
            come_call_finalizer(sFun_finalize, default_value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__125;
        }
    }
    __result_obj__126 = (struct sFun*)come_increment_ref_count(default_value_260);
    come_call_finalizer(sFun_finalize, default_value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_263;
unsigned int hash_264;
unsigned int it_265;
struct sFun* __result_obj__127;
struct sFun* __result_obj__128;
struct sFun* __result_obj__129;
struct sFun* __result_obj__130;
default_value_263 = (void*)0;
    memset(&default_value_263,0,sizeof(struct sFun*));
    hash_264=string_get_hash_key(((char*)key))%self->size;
    it_265=hash_264;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_265]        ) {
            if(            string_equals(self->keys[it_265],key)            ) {
                __result_obj__127 = (struct sFun*)come_increment_ref_count(self->items[it_265]);
                come_call_finalizer(sFun_finalize, default_value_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
            it_265++;
            if(            it_265>=self->size            ) {
                it_265=0;
            }
            else if(            it_265==hash_264            ) {
                __result_obj__128 = (struct sFun*)come_increment_ref_count(default_value_263);
                come_call_finalizer(sFun_finalize, default_value_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__128;
            }
        }
        else {
            __result_obj__129 = (struct sFun*)come_increment_ref_count(default_value_263);
            come_call_finalizer(sFun_finalize, default_value_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__129;
        }
    }
    __result_obj__130 = (struct sFun*)come_increment_ref_count(default_value_263);
    come_call_finalizer(sFun_finalize, default_value_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_299;
char* __result_obj__135;
char* __result_obj__136;
char* result_300;
char* __result_obj__137;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_299,0,sizeof(char*));
        __result_obj__135 = result_299;
        return __result_obj__135;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__136 = self->it->item;
        return __result_obj__136;
    }
    memset(&result_300,0,sizeof(char*));
    __result_obj__137 = result_300;
    return __result_obj__137;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_302;
char* __result_obj__138;
char* __result_obj__139;
char* result_303;
char* __result_obj__140;
result_302 = (void*)0;
result_303 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_302,0,sizeof(char*));
        __result_obj__138 = result_302;
        return __result_obj__138;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__139 = self->it->item;
        return __result_obj__139;
    }
    memset(&result_303,0,sizeof(char*));
    __result_obj__140 = result_303;
    return __result_obj__140;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_304;
int i_305;
struct CVALUE* default_value_306;
struct list$1CVALUE$ph* __result_obj__141;
struct list_item$1CVALUE$ph* it_307;
int i_308;
struct CVALUE* __dec_obj129;
struct list$1CVALUE$ph* __result_obj__142;
default_value_306 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_304=self->len;
        for(        i_305=0        ;        i_305<position-len_304        ;        i_305++        ){
            memset(&default_value_306,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_306));
            come_call_finalizer(CVALUE_finalize, default_value_306, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__141 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__141;
    }
    it_307=self->head;
    i_308=0;
    while(    it_307!=((void*)0)    ) {
        if(        position==i_308        ) {
            __dec_obj129=it_307->item,
            it_307->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj129,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_307=it_307->next;
        i_308++;
    }
    __result_obj__142 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__142;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_319;
int i_320;
char* __result_obj__145;
char* default_value_321;
char* __result_obj__146;
default_value_321 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_319=self->head;
    i_320=0;
    while(    it_319!=((void*)0)    ) {
        if(        position==i_320        ) {
            __result_obj__145 = (char*)come_increment_ref_count(it_319->item);
            (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__145;
        }
        it_319=it_319->next;
        i_320++;
    }
    memset(&default_value_321,0,sizeof(char*));
    __result_obj__146 = (char*)come_increment_ref_count(default_value_321);
    (default_value_321 = come_decrement_ref_count(default_value_321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_322;
int i_323;
char* __result_obj__147;
char* default_value_324;
char* __result_obj__148;
default_value_324 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_322=self->head;
    i_323=0;
    while(    it_322!=((void*)0)    ) {
        if(        position==i_323        ) {
            __result_obj__147 = (char*)come_increment_ref_count(it_322->item);
            (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__147;
        }
        it_322=it_322->next;
        i_323++;
    }
    memset(&default_value_324,0,sizeof(char*));
    __result_obj__148 = (char*)come_increment_ref_count(default_value_324);
    (default_value_324 = come_decrement_ref_count(default_value_324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__152;
void* __right_value415 = (void*)0;
struct sCurrentNode* result_334;
void* __right_value416 = (void*)0;
char* __dec_obj135;
struct sCurrentNode* __result_obj__153;
    if(    self==(void*)0    ) {
        __result_obj__152 = (void*)0;
        return __result_obj__152;
    }
    result_334=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result_334->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj135=result_334->sname,
        result_334->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_334->sline_real=self->sline_real;
    }
    __result_obj__153 = result_334;
    come_call_finalizer(sCurrentNode_finalize, result_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_340;
unsigned int hash_341;
unsigned int it_342;
struct sClass* __result_obj__155;
struct sClass* __result_obj__156;
struct sClass* __result_obj__157;
struct sClass* __result_obj__158;
default_value_340 = (void*)0;
    memset(&default_value_340,0,sizeof(struct sClass*));
    hash_341=string_get_hash_key(((char*)key))%self->size;
    it_342=hash_341;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_342]        ) {
            if(            string_equals(self->keys[it_342],key)            ) {
                __result_obj__155 = (struct sClass*)come_increment_ref_count(self->items[it_342]);
                come_call_finalizer(sClass_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__155;
            }
            it_342++;
            if(            it_342>=self->size            ) {
                it_342=0;
            }
            else if(            it_342==hash_341            ) {
                __result_obj__156 = (struct sClass*)come_increment_ref_count(default_value_340);
                come_call_finalizer(sClass_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__156;
            }
        }
        else {
            __result_obj__157 = (struct sClass*)come_increment_ref_count(default_value_340);
            come_call_finalizer(sClass_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__157;
        }
    }
    __result_obj__158 = (struct sClass*)come_increment_ref_count(default_value_340);
    come_call_finalizer(sClass_finalize, default_value_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)    ) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_343;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_344;
    it_343=self->head;
    while(    it_343!=((void*)0)    ) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_345;
unsigned int hash_346;
unsigned int it_347;
struct sClass* __result_obj__159;
struct sClass* __result_obj__160;
struct sClass* __result_obj__161;
struct sClass* __result_obj__162;
default_value_345 = (void*)0;
    memset(&default_value_345,0,sizeof(struct sClass*));
    hash_346=string_get_hash_key(((char*)key))%self->size;
    it_347=hash_346;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_347]        ) {
            if(            string_equals(self->keys[it_347],key)            ) {
                __result_obj__159 = (struct sClass*)come_increment_ref_count(self->items[it_347]);
                come_call_finalizer(sClass_finalize, default_value_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__159;
            }
            it_347++;
            if(            it_347>=self->size            ) {
                it_347=0;
            }
            else if(            it_347==hash_346            ) {
                __result_obj__160 = (struct sClass*)come_increment_ref_count(default_value_345);
                come_call_finalizer(sClass_finalize, default_value_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__160;
            }
        }
        else {
            __result_obj__161 = (struct sClass*)come_increment_ref_count(default_value_345);
            come_call_finalizer(sClass_finalize, default_value_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__161;
        }
    }
    __result_obj__162 = (struct sClass*)come_increment_ref_count(default_value_345);
    come_call_finalizer(sClass_finalize, default_value_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __right_value465 = (void*)0;
struct buffer* __dec_obj147;
struct sComeCallNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value465=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value465, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj147=self->come_block,
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->come_block_sline=come_block_sline;
    __result_obj__167 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComeCallNode_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __right_value466 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value466=__builtin_string("sComeCallNode"))));
    (__right_value466 = come_decrement_ref_count(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_379;
struct buffer* come_block_380;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUE$ph* come_params_381;
void* __right_value469 = (void*)0;
char* var_name_383;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* type__384;
void* __right_value473 = (void*)0;
_Bool __result_obj__173;
void* __right_value474 = (void*)0;
struct sNode* var_node_387;
_Bool Value_388;
_Bool __result_obj__174;
void* __right_value475 = (void*)0;
struct CVALUE* thread_var_value_389;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value478 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value479 = (void*)0;
struct sNode* null_node_391;
_Bool Value_392;
_Bool __result_obj__175;
void* __right_value480 = (void*)0;
struct CVALUE* __dec_obj150;
void* __right_value481 = (void*)0;
struct sType* __dec_obj151;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode* _inf_obj_value2;
void* __right_value484 = (void*)0;
struct sNode* current_stack_frame_node_393;
_Bool Value_394;
_Bool __result_obj__176;
void* __right_value485 = (void*)0;
struct CVALUE* current_stack_frame_value_395;
void* __right_value486 = (void*)0;
char* fun_name_396;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct buffer* come_block2_397;
void* __right_value489 = (void*)0;
char* class_name_398;
void* __right_value490 = (void*)0;
struct sClass* current_stack_frame_struct_399;
void* __right_value491 = (void*)0;
struct buffer* source3_400;
char* p_401;
char* head_402;
int sline_403;
struct buffer* __dec_obj152;
void* __right_value492 = (void*)0;
struct sNode* node_404;
_Bool in_method_block_405;
_Bool Value_406;
_Bool __result_obj__177;
struct buffer* __dec_obj153;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* fun_value_407;
void* __right_value495 = (void*)0;
char* __dec_obj154;
struct sType* __dec_obj155;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct buffer* buf_408;
void* __right_value498 = (void*)0;
char* fun_name_409;
int j_410;
struct list$1CVALUE$ph* o2_saved_411;
struct CVALUE* it_412;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value501 = (void*)0;
char* __dec_obj156;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* type_414;
void* __right_value505 = (void*)0;
struct sType* __dec_obj157;
_Bool __result_obj__178;
    come_block_sline_379=self->come_block_sline;
    come_block_380=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_381=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1444, "struct list$1CVALUE$ph*"))));
    static int thread_num_382=0;
    thread_num_382++;
    var_name_383=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_382));
    type__384=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value471=map$2char$phsType$ph_at(info->types,((char*)(__right_value470=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value471, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type__384==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value473=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value473, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__173 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__173;
    }
    var_node_387=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_383),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__384),(_Bool)1,((void*)0),info,(_Bool)0));
    Value_388=node_compile(var_node_387,info);
    if(    !Value_388    ) {
        __result_obj__174 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_387) ? var_node_387 = come_decrement_ref_count(var_node_387, ((struct sNode*)var_node_387)->finalize, ((struct sNode*)var_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__174;
    }
    else {
    }
    thread_var_value_389=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1466, "struct CVALUE*"))));
    __dec_obj148=come_value_390->c_value,
    come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_389->c_value));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj149=come_value_390->type,
    come_value_390->type=(struct sType*)come_increment_ref_count(thread_var_value_389->type);
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params_381,(struct CVALUE*)come_increment_ref_count(come_value_390));
    null_node_391=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_392=node_compile(null_node_391,info);
    if(    !Value_392    ) {
        __result_obj__175 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_387) ? var_node_387 = come_decrement_ref_count(var_node_387, ((struct sNode*)var_node_387)->finalize, ((struct sNode*)var_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_391) ? null_node_391 = come_decrement_ref_count(null_node_391, ((struct sNode*)null_node_391)->finalize, ((struct sNode*)null_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__175;
    }
    else {
    }
    __dec_obj150=come_value_390,
    come_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj151=come_value_390->type,
    come_value_390->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_390->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1CVALUE$ph_push_back(come_params_381,(struct CVALUE*)come_increment_ref_count(come_value_390));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1485, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value483=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "05call.c", 1485, "struct sCurrentNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode_finalize;
    _inf_value2->clone=(void*)sCurrentNode_clone;
    _inf_value2->compile=(void*)sCurrentNode_compile;
    _inf_value2->sline=(void*)sCurrentNode_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    current_stack_frame_node_393=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sCurrentNode_finalize, __right_value483, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_394=node_compile(current_stack_frame_node_393,info);
    if(    !Value_394    ) {
        __result_obj__176 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_387) ? var_node_387 = come_decrement_ref_count(var_node_387, ((struct sNode*)var_node_387)->finalize, ((struct sNode*)var_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_391) ? null_node_391 = come_decrement_ref_count(null_node_391, ((struct sNode*)null_node_391)->finalize, ((struct sNode*)null_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_393) ? current_stack_frame_node_393 = come_decrement_ref_count(current_stack_frame_node_393, ((struct sNode*)current_stack_frame_node_393)->finalize, ((struct sNode*)current_stack_frame_node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__176;
    }
    else {
    }
    current_stack_frame_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name_396=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_382));
    come_block2_397=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1495, "struct buffer*"))));
    class_name_398=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_397,"void* %s(%s* parent)\n",fun_name_396,class_name_398);
    buffer_append_str(come_block2_397,((char*)(__right_value490=buffer_to_string(come_block_380))));
    (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    current_stack_frame_struct_399=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value491=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_398)));
    come_call_finalizer(sClass_finalize, __right_value491, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    source3_400=(struct buffer*)come_increment_ref_count(info->source);
    p_401=info->p;
    head_402=info->head;
    sline_403=info->sline;
    __dec_obj152=info->source,
    info->source=(struct buffer*)come_increment_ref_count(come_block2_397);
    come_call_finalizer(buffer_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_379;
    node_404=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_405=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_406=node_compile(node_404,info);
    if(    !Value_406    ) {
        __result_obj__177 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((var_node_387) ? var_node_387 = come_decrement_ref_count(var_node_387, ((struct sNode*)var_node_387)->finalize, ((struct sNode*)var_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((null_node_391) ? null_node_391 = come_decrement_ref_count(null_node_391, ((struct sNode*)null_node_391)->finalize, ((struct sNode*)null_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((current_stack_frame_node_393) ? current_stack_frame_node_393 = come_decrement_ref_count(current_stack_frame_node_393, ((struct sNode*)current_stack_frame_node_393)->finalize, ((struct sNode*)current_stack_frame_node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value_395, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_396 = come_decrement_ref_count(fun_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_404) ? node_404 = come_decrement_ref_count(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__177;
    }
    else {
    }
    info->in_method_block=in_method_block_405;
    __dec_obj153=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_400);
    come_call_finalizer(buffer_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_401;
    info->head=head_402;
    info->sline=sline_403;
    info->current_stack_frame_struct=current_stack_frame_struct_399;
    fun_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1532, "struct CVALUE*"))));
    __dec_obj154=fun_value_407->c_value,
    fun_value_407->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_396));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj155=come_value_390->type,
    come_value_390->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUE$ph_add(come_params_381,(struct CVALUE*)come_increment_ref_count(fun_value_407));
    list$1CVALUE$ph_add(come_params_381,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_395));
    buf_408=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1542, "struct buffer*"))));
    (fun_name_396 = come_decrement_ref_count(fun_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    fun_name_409=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_408,"(");
    buffer_append_str(buf_408,fun_name_409);
    buffer_append_str(buf_408,"(");
    j_410=0;
    for(    o2_saved_411=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_381)),it_412=list$1CVALUE$ph_begin((o2_saved_411))    ;    !list$1CVALUE$ph_end((o2_saved_411))    ;    it_412=list$1CVALUE$ph_next((o2_saved_411))    ){
        buffer_append_str(buf_408,it_412->c_value);
        if(        j_410!=list$1CVALUE$ph_length(come_params_381)-1        ) {
            buffer_append_str(buf_408,",");
        }
        j_410++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_411, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_408,")");
    buffer_append_str(buf_408,", ");
    buffer_append_str(buf_408,thread_var_value_389->c_value);
    buffer_append_str(buf_408,")");
    come_call_finalizer(CVALUE_finalize, come_value_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1565, "struct CVALUE*"))));
    __dec_obj156=come_value_413->c_value,
    come_value_413->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_408));
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    type_414=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value503=map$2char$phsType$ph_at(info->types,((char*)(__right_value502=xsprintf("pthread_t"))),((void*)0))))));
    (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, __right_value503, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type_414==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value505=err_msg(info,"pthread_t is not defined")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value505, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj157=come_value_413->type,
    come_value_413->type=(struct sType*)come_increment_ref_count(type_414);
    come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_413->var=((void*)0);
    add_come_last_code(info,"%s",come_value_413->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
    __result_obj__178 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_381, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_383 = come_decrement_ref_count(var_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type__384, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((var_node_387) ? var_node_387 = come_decrement_ref_count(var_node_387, ((struct sNode*)var_node_387)->finalize, ((struct sNode*)var_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value_389, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((null_node_391) ? null_node_391 = come_decrement_ref_count(null_node_391, ((struct sNode*)null_node_391)->finalize, ((struct sNode*)null_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((current_stack_frame_node_393) ? current_stack_frame_node_393 = come_decrement_ref_count(current_stack_frame_node_393, ((struct sNode*)current_stack_frame_node_393)->finalize, ((struct sNode*)current_stack_frame_node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value_395, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source3_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_404) ? node_404 = come_decrement_ref_count(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value_407, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_408, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name_409 = come_decrement_ref_count(fun_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_414, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__178;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->come_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_385;
unsigned int it_386;
struct sType* __result_obj__169;
struct sType* __result_obj__170;
struct sType* __result_obj__171;
struct sType* __result_obj__172;
    hash_385=string_get_hash_key(((char*)key))%self->size;
    it_386=hash_385;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_386]        ) {
            if(            string_equals(self->keys[it_386],key)            ) {
                __result_obj__169 = (struct sType*)come_increment_ref_count(self->items[it_386]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__169;
            }
            it_386++;
            if(            it_386>=self->size            ) {
                it_386=0;
            }
            else if(            it_386==hash_385            ) {
                __result_obj__170 = (struct sType*)come_increment_ref_count(default_value);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__170;
            }
        }
        else {
            __result_obj__171 = (struct sType*)come_increment_ref_count(default_value);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__171;
        }
    }
    __result_obj__172 = (struct sType*)come_increment_ref_count(default_value);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __right_value506 = (void*)0;
struct sNode* __dec_obj158;
struct sComeJoinNode* __result_obj__179;
    ((struct sNodeBase*)(__right_value506=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value506, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj158=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__179 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__179;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __right_value507 = (void*)0;
char* __result_obj__180;
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value507=__builtin_string("sComeJoinNode"))));
    (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_415;
_Bool Value_416;
_Bool __result_obj__181;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct buffer* buf_418;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value513 = (void*)0;
char* __dec_obj159;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj160;
_Bool __result_obj__182;
    node_415=(struct sNode*)come_increment_ref_count(self->node);
    Value_416=node_compile(node_415,info);
    if(    !Value_416    ) {
        __result_obj__181 = (_Bool)0;
        ((node_415) ? node_415 = come_decrement_ref_count(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__181;
    }
    else {
    }
    come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    buf_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1612, "struct buffer*"))));
    buffer_append_str(buf_418,"pthread_join(");
    buffer_append_str(buf_418,come_value_417->c_value);
    buffer_append_str(buf_418,", 0)");
    come_call_finalizer(CVALUE_finalize, come_value_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1617, "struct CVALUE*"))));
    __dec_obj159=come_value_419->c_value,
    come_value_419->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_418));
    __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj160=come_value_419->type,
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 1619, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_419->var=((void*)0);
    add_come_last_code(info,"%s",come_value_419->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    __result_obj__182 = (_Bool)1;
    ((node_415) ? node_415 = come_decrement_ref_count(node_415, ((struct sNode*)node_415)->finalize, ((struct sNode*)node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_419, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__182;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __right_value517 = (void*)0;
struct list$1sNode$ph* __dec_obj161;
struct list$1sBlock$ph* __dec_obj162;
struct sBlock* __dec_obj163;
struct sComePollNode* __result_obj__183;
    ((struct sNodeBase*)(__right_value517=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value517, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj161=self->vars,
    self->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj162=self->blocks,
    self->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj163=self->else_block,
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj163,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->time_out=time_out;
    __result_obj__183 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sComePollNode_finalize, __result_obj__183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__183;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __right_value518 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value518=__builtin_string("sComePollNode"))));
    (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNode$ph* vars_424;
struct list$1sBlock$ph* blocks_425;
int time_out_426;
int n_428;
struct list$1sNode$ph* o2_saved_429;
struct sNode* it_432;
_Bool Value_435;
_Bool __result_obj__191;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_436;
int n_437;
struct list$1sNode$ph* o2_saved_438;
struct sNode* it_439;
void* __right_value520 = (void*)0;
_Bool __result_obj__196;
    vars_424=(struct list$1sNode$ph*)come_increment_ref_count(self->vars);
    blocks_425=(struct list$1sBlock$ph*)come_increment_ref_count(self->blocks);
    time_out_426=self->time_out;
    static int var_num_427=0;
    var_num_427++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_427,list$1sNode$ph_length(vars_424));
    n_428=0;
    for(    o2_saved_429=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_432=list$1sNode$ph_begin((o2_saved_429))    ;    !list$1sNode$ph_end((o2_saved_429))    ;    it_432=list$1sNode$ph_next((o2_saved_429))    ){
        Value_435=node_compile(it_432,info);
        if(        !Value_435        ) {
            __result_obj__191 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_424, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_425, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__191;
        }
        else {
        }
        come_value_436=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_427,n_428,come_value_436->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_427,n_428,1);
        n_428++;
        come_call_finalizer(CVALUE_finalize, come_value_436, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_429, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_427,var_num_427,list$1sNode$ph_length(vars_424),time_out_426);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_427);
    n_437=0;
    for(    o2_saved_438=(struct list$1sNode$ph*)come_increment_ref_count((self->vars)),it_439=list$1sNode$ph_begin((o2_saved_438))    ;    !list$1sNode$ph_end((o2_saved_438))    ;    it_439=list$1sNode$ph_next((o2_saved_438))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_427,n_437,1);
        transpile_block(((struct sBlock*)(__right_value520=list$1sBlock$ph_operator_load_element(blocks_425,n_437))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value520, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        add_come_code(info,"}\n");
        n_437++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_427);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__196 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars_424, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_425, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__196;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_420;
struct list_item$1sBlock$ph* prev_it_421;
    it_420=self->head;
    while(    it_420!=((void*)0)    ) {
        prev_it_421=it_420;
        it_420=it_420->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_421, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->vars, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->blocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->else_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_422;
struct list_item$1sBlock$ph* prev_it_423;
    it_422=self->head;
    while(    it_422!=((void*)0)    ) {
        prev_it_423=it_422;
        it_422=it_422->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_423, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_430;
struct sNode* __result_obj__185;
struct sNode* __result_obj__186;
struct sNode* result_431;
struct sNode* __result_obj__187;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_430,0,sizeof(struct sNode*));
        __result_obj__185 = result_430;
        return __result_obj__185;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__186 = self->it->item;
        return __result_obj__186;
    }
    memset(&result_431,0,sizeof(struct sNode*));
    __result_obj__187 = result_431;
    return __result_obj__187;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_433;
struct sNode* __result_obj__188;
struct sNode* __result_obj__189;
struct sNode* result_434;
struct sNode* __result_obj__190;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_433,0,sizeof(struct sNode*));
        __result_obj__188 = result_433;
        return __result_obj__188;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__189 = self->it->item;
        return __result_obj__189;
    }
    memset(&result_434,0,sizeof(struct sNode*));
    __result_obj__190 = result_434;
    return __result_obj__190;
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_440;
int i_441;
struct sBlock* __result_obj__192;
struct sBlock* default_value_442;
struct sBlock* __result_obj__193;
default_value_442 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_440=self->head;
    i_441=0;
    while(    it_440!=((void*)0)    ) {
        if(        position==i_441        ) {
            __result_obj__192 = (struct sBlock*)come_increment_ref_count(it_440->item);
            come_call_finalizer(sBlock_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__192;
        }
        it_440=it_440->next;
        i_441++;
    }
    memset(&default_value_442,0,sizeof(struct sBlock*));
    __result_obj__193 = (struct sBlock*)come_increment_ref_count(default_value_442);
    come_call_finalizer(sBlock_finalize, default_value_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__193;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_443;
int i_444;
struct sBlock* __result_obj__194;
struct sBlock* default_value_445;
struct sBlock* __result_obj__195;
default_value_445 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_443=self->head;
    i_444=0;
    while(    it_443!=((void*)0)    ) {
        if(        position==i_444        ) {
            __result_obj__194 = (struct sBlock*)come_increment_ref_count(it_443->item);
            come_call_finalizer(sBlock_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__194;
        }
        it_443=it_443->next;
        i_444++;
    }
    memset(&default_value_445,0,sizeof(struct sBlock*));
    __result_obj__195 = (struct sBlock*)come_increment_ref_count(default_value_445);
    come_call_finalizer(sBlock_finalize, default_value_445, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__195;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo* info){
void* __right_value521 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value522 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj165;
struct sLambdaCall* __result_obj__197;
    ((struct sNodeBase*)(__right_value521=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value521, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj164=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj165=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj165,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__197 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLambdaCall_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__197;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __right_value523 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value523=__builtin_string("sLambdaCall"))));
    (__right_value523 = come_decrement_ref_count(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__198;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_446;
struct list$1tuple2$2char$phsNode$ph$ph* params_447;
_Bool Value_448;
_Bool __result_obj__199;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_449;
struct sType* lambda_type_450;
void* __right_value525 = (void*)0;
_Bool __result_obj__200;
void* __right_value526 = (void*)0;
struct sType* result_type_451;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1CVALUE$ph* come_params_452;
void* __right_value529 = (void*)0;
_Bool __result_obj__201;
int i_453;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_454;
struct tuple2$2char$phsNode$ph* it_455;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_456=0;
struct sNode* node_457=0;
_Bool Value_458;
_Bool __result_obj__202;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value531 = (void*)0;
struct sType* __dec_obj166;
void* __right_value532 = (void*)0;
_Bool _condtional_value_X17;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
_Bool _condtional_value_X18;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct buffer* buf_460;
int j_461;
struct list$1CVALUE$ph* o2_saved_462;
struct CVALUE* it_463;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value2_464;
void* __right_value542 = (void*)0;
char* __dec_obj167;
void* __right_value543 = (void*)0;
struct sType* __dec_obj168;
_Bool __result_obj__203;
    node_446=(struct sNode*)come_increment_ref_count(self->node);
    params_447=self->params;
    Value_448=node_compile(node_446,info);
    if(    !Value_448    ) {
        __result_obj__199 = (_Bool)0;
        ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__199;
    }
    else {
    }
    come_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type_450=come_value_449->type;
    if(    lambda_type_450->mResultType==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value525=err_msg(info,"invalid lambda type")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value525, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__200 = (_Bool)1;
        ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__200;
    }
    result_type_451=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_450->mResultType));
    result_type_451->mStatic=(_Bool)0;
    come_params_452=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "05call.c", 1736, "struct list$1CVALUE$ph*"))));
    if(    list$1sType$ph_length(lambda_type_450->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params_447)&&!lambda_type_450->mVarArgs    ) {
        ((struct tuple2$2int$bool$*)(__right_value529=err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(lambda_type_450->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params_447))));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value529, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__201 = (_Bool)1;
        ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__201;
    }
    i_453=0;
    for(    o2_saved_454=(params_447),it_455=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_454))    ;    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_454))    ;    it_455=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_454))    ){
        multiple_assign_var12=it_455;
        label_456=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        node_457=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        Value_458=node_compile(node_457,info);
        if(        !Value_458        ) {
            __result_obj__202 = (_Bool)0;
            (label_456 = come_decrement_ref_count(label_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_457) ? node_457 = come_decrement_ref_count(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__202;
        }
        else {
        }
        come_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj166=come_value_459->type,
        come_value_459->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_459->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        if(        (_condtional_value_X17=(lambda_type_450->mVarArgs&&((struct sType*)(__right_value532=list$1sType$ph_operator_load_element(lambda_type_450->mParamTypes,i_453)))==((void*)0))),        come_call_finalizer(sType_finalize, __right_value532, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X17        ) {
        }
        else {
            check_assign_type(((char*)(__right_value534=xsprintf("calling param #\%s",((char*)(__right_value533=int_to_string(i_453)))))),((struct sType*)(__right_value535=list$1sType$ph_operator_load_element(lambda_type_450->mParamTypes,i_453))),come_value_459->type,come_value_459,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value535, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            (_condtional_value_X18=(((struct sType*)(__right_value536=list$1sType$ph_operator_load_element(lambda_type_450->mParamTypes,i_453)))->mHeap&&come_value_459->type->mHeap)),            come_call_finalizer(sType_finalize, __right_value536, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X18            ) {
                std_move(((struct sType*)(__right_value537=list$1sType$ph_operator_load_element(lambda_type_450->mParamTypes,i_453))),come_value_459->type,come_value_459,info,(_Bool)1);
                come_call_finalizer(sType_finalize, __right_value537, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(come_params_452,(struct CVALUE*)come_increment_ref_count(come_value_459));
        i_453++;
        (label_456 = come_decrement_ref_count(label_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_457) ? node_457 = come_decrement_ref_count(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buf_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1768, "struct buffer*"))));
    buffer_append_str(buf_460,"(");
    buffer_append_str(buf_460,come_value_449->c_value);
    buffer_append_str(buf_460,")");
    buffer_append_str(buf_460,"(");
    j_461=0;
    for(    o2_saved_462=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_452)),it_463=list$1CVALUE$ph_begin((o2_saved_462))    ;    !list$1CVALUE$ph_end((o2_saved_462))    ;    it_463=list$1CVALUE$ph_next((o2_saved_462))    ){
        buffer_append_str(buf_460,it_463->c_value);
        if(        j_461!=list$1CVALUE$ph_length(come_params_452)-1        ) {
            buffer_append_str(buf_460,",");
        }
        j_461++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_462, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    buffer_append_str(buf_460,")");
    come_value2_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1787, "struct CVALUE*"))));
    __dec_obj167=come_value2_464->c_value,
    come_value2_464->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_460));
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    if(    lambda_type_450->mResultType->mHeap    ) {
        append_object_to_right_values(come_value2_464,(struct sType*)come_increment_ref_count(lambda_type_450->mResultType),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj168=come_value2_464->type,
    come_value2_464->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_451));
    come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_464->type->mStatic=(_Bool)0;
    come_value2_464->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_464->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_464));
    __result_obj__203 = (_Bool)1;
    ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, buf_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__203;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __right_value544 = (void*)0;
struct sType* __dec_obj169;
struct sVarArgTypeName* __result_obj__204;
    ((struct sNodeBase*)(__right_value544=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value544, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj169=self->type,
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__204 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__204;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __right_value545 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sVarArgTypeName"))));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_465;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value548 = (void*)0;
char* __dec_obj170;
struct sType* __dec_obj171;
_Bool __result_obj__206;
    type_465=(struct sType*)come_increment_ref_count(self->type);
    come_value_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05call.c", 1824, "struct CVALUE*"))));
    __dec_obj170=come_value_466->c_value,
    come_value_466->c_value=(char*)come_increment_ref_count(make_type_name_string(type_465,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj171=come_value_466->type,
    come_value_466->type=(struct sType*)come_increment_ref_count(type_465);
    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_466->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_466));
    __result_obj__206 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_465, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_466, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__206;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sType$ph* method_generics_types_467;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type_468=0;
char* name_469=0;
_Bool err_470=0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_471;
_Bool _va_arg_472;
char* p_473;
int sline_474;
_Bool err_flag_475;
void* __right_value557 = (void*)0;
char* label_476;
void* __right_value558 = (void*)0;
char* __dec_obj172;
char* __dec_obj173;
_Bool no_comma_477;
_Bool in_fun_param_478;
void* __right_value559 = (void*)0;
struct sNode* node_479;
void* __right_value560 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct buffer* method_block_483;
int method_block_sline_484;
char* head_485;
void* __right_value566 = (void*)0;
char* tail_486;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* __dec_obj180;
int len_487;
void* __right_value569 = (void*)0;
char* mem_488;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value578 = (void*)0;
struct sNode* node_489;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj186;
struct sNode* __result_obj__211;
    method_generics_types_467=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05call.c", 1838, "struct list$1sType$ph*"))));
    if(    *info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value551=err_msg(info,"unexpected source end")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value551, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value552=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_468=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_469=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_470=multiple_assign_var13->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value552, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_470                ) {
                    ((struct tuple2$2int$bool$*)(__right_value553=err_msg(info,"invalid method generics paramtor type")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value553, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_467,(struct sType*)come_increment_ref_count(sType_clone(type_468)));
                come_call_finalizer(sType_finalize, type_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_471=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 1876, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    _va_arg_472=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")    ) {
        info->va_arg=(_Bool)1;
    }
    while(    (_Bool)1    ) {
        if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_473=info->p;
        sline_474=info->sline;
        err_flag_475=(_Bool)0;
        label_476=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            __dec_obj172=label_476,
            label_476=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            err_flag_475=(_Bool)1;
        }
        if(        err_flag_475==(_Bool)1&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj173=label_476,
            label_476=((void*)0);
            __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->p=p_473;
            info->sline=sline_474;
        }
        no_comma_477=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_478=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_479=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj174=node_479,
        node_479=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_479),info));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        info->no_comma=no_comma_477;
        info->in_fun_param=in_fun_param_478;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params_471,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 1924, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_476),(struct sNode*)come_increment_ref_count(node_479))));
        parse_sharp_v5(info);
        if(        *info->p==44        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (label_476 = come_decrement_ref_count(label_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_479) ? node_479 = come_decrement_ref_count(node_479, ((struct sNode*)node_479)->finalize, ((struct sNode*)node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (label_476 = come_decrement_ref_count(label_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_479) ? node_479 = come_decrement_ref_count(node_479, ((struct sNode*)node_479)->finalize, ((struct sNode*)node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->va_arg=_va_arg_472;
    parse_sharp_v5(info);
    method_block_483=((void*)0);
    method_block_sline_484=0;
    if(    *info->p==123    ) {
        head_485=info->p;
        method_block_sline_484=info->sline;
        ((char*)(__right_value566=skip_block(info,(_Bool)0)));
        (__right_value566 = come_decrement_ref_count(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail_486=info->p;
        __dec_obj180=method_block_483,
        method_block_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 1954, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj180,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len_487=tail_486-head_485;
        mem_488=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_487+1)), "05call.c", 1957, "char*"));
        memcpy(mem_488,head_485,len_487);
        mem_488[len_487]=0;
        buffer_append_str(method_block_483,mem_488);
        buffer_append_str(method_block_483,"\n");
        (mem_488 = come_decrement_ref_count(mem_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1967, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value571=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1967, "struct sFunCallNode*")),fun_name,params_471,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_467),(struct buffer*)come_increment_ref_count(method_block_483),method_block_sline_484,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_489=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunCallNode_finalize, __right_value571, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj186=node_489,
    node_489=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_489),info));
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    parse_sharp_v5(info);
    __result_obj__211 = (struct sNode*)come_increment_ref_count(node_489);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_471, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_489) ? node_489 = come_decrement_ref_count(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__211) ? __result_obj__211 = come_decrement_ref_count(__result_obj__211, ((struct sNode*)__result_obj__211)->finalize, ((struct sNode*)__result_obj__211)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__211;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value561 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_480;
struct tuple2$2char$phsNode$ph* __dec_obj175;
void* __right_value562 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_481;
struct tuple2$2char$phsNode$ph* __dec_obj176;
void* __right_value563 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_482;
struct tuple2$2char$phsNode$ph* __dec_obj177;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__207;
    if(    self->len==0    ) {
        litem_480=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value561=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_480->prev=((void*)0);
        litem_480->next=((void*)0);
        __dec_obj175=litem_480->item,
        litem_480->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_480;
        self->head=litem_480;
    }
    else if(    self->len==1    ) {
        litem_481=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value562=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_481->prev=self->head;
        litem_481->next=((void*)0);
        __dec_obj176=litem_481->item,
        litem_481->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_481;
        self->head->next=litem_481;
    }
    else {
        litem_482=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value563=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_482->prev=self->tail;
        litem_482->next=((void*)0);
        __dec_obj177=litem_482->item,
        litem_482->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj177,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_482;
        self->tail=litem_482;
    }
    self->len++;
    __result_obj__207 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__207;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj178;
struct sNode* __dec_obj179;
struct tuple2$2char$phsNode$ph* __result_obj__208;
    __dec_obj178=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj179=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__208 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
struct sFunCallNode* __result_obj__209;
void* __right_value572 = (void*)0;
struct sFunCallNode* result_490;
void* __right_value573 = (void*)0;
char* __dec_obj181;
void* __right_value574 = (void*)0;
char* __dec_obj182;
void* __right_value575 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj183;
void* __right_value576 = (void*)0;
struct list$1sType$ph* __dec_obj184;
void* __right_value577 = (void*)0;
struct buffer* __dec_obj185;
struct sFunCallNode* __result_obj__210;
    if(    self==(void*)0    ) {
        __result_obj__209 = (void*)0;
        return __result_obj__209;
    }
    result_490=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc_v2(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*"));
    if(    self!=((void*)0)    ) {
        result_490->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj181=result_490->sname,
        result_490->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunCallNode_clone", 5, "char*"));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_490->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __dec_obj182=result_490->fun_name,
        result_490->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sFunCallNode_clone", 7, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj183=result_490->params,
        result_490->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj183,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __dec_obj184=result_490->method_generics_types,
        result_490->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj184,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __dec_obj185=result_490->method_block,
        result_490->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj185,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_490->method_block_sline=self->method_block_sline;
    }
    __result_obj__210 = result_490;
    come_call_finalizer(sFunCallNode_finalize, result_490, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __right_value580 = (void*)0;
struct sNode* __result_obj__212;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    ((struct tuple2$2int$bool$*)(__right_value580=err_msg(info,"invalid character(1)(%d)(%c)",*info->p,*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value580, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    stackframe_v2();
    exit(3);
    __result_obj__212 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__212) ? __result_obj__212 = come_decrement_ref_count(__result_obj__212, ((struct sNode*)__result_obj__212)->finalize, ((struct sNode*)__result_obj__212)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__212;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value4;
struct sReturnNode* _inf_obj_value4;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__215;
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 1990, "struct sNode");
    _inf_obj_value4=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value582=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 1990, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sReturnNode_finalize;
    _inf_value4->clone=(void*)sReturnNode_clone;
    _inf_value4->compile=(void*)sReturnNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sReturnNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__215 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value587=_inf_value4)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (value_source = come_decrement_ref_count(value_source, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sReturnNode_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__215;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
struct sReturnNode* __result_obj__213;
void* __right_value583 = (void*)0;
struct sReturnNode* result_491;
void* __right_value584 = (void*)0;
char* __dec_obj187;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value586 = (void*)0;
char* __dec_obj189;
struct sReturnNode* __result_obj__214;
    if(    self==(void*)0    ) {
        __result_obj__213 = (void*)0;
        return __result_obj__213;
    }
    result_491=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*"));
    if(    self!=((void*)0)    ) {
        result_491->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj187=result_491->sname,
        result_491->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReturnNode_clone", 5, "char*"));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_491->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)    ) {
        __dec_obj188=result_491->value,
        result_491->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)    ) {
        __dec_obj189=result_491->value_source,
        result_491->value_source=(char*)come_increment_ref_count((char*)come_memdup(self->value_source, "sReturnNode_clone", 8, "char*"));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__214 = result_491;
    come_call_finalizer(sReturnNode_finalize, result_491, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__214;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value591 = (void*)0;
struct sNode* __result_obj__216;
char* head_492;
void* __right_value592 = (void*)0;
struct sNode* value_493;
char* tail_494;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value597 = (void*)0;
struct sNode* __result_obj__217;
int nest_496;
char* head_497;
int head_sline_498;
int sline_real_499;
void* __right_value598 = (void*)0;
char* buf_500;
_Bool is_type_name__501;
_Bool is_special_word_503;
_Bool define_function_pointer_flag_504;
void* __right_value599 = (void*)0;
_Bool lambda_flag_505;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
char* word2_506;
_Bool fun_name_with_type_name_507;
void* __right_value602 = (void*)0;
char* word2_508;
_Bool call_method_generics_fun_call_509;
void* __right_value603 = (void*)0;
char* __dec_obj191;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _condtional_value_X19;
int nest_516;
_Bool inline_asm_517;
void* __right_value610 = (void*)0;
char* __dec_obj192;
void* __right_value611 = (void*)0;
char* __dec_obj193;
void* __right_value612 = (void*)0;
char* __dec_obj194;
void* __right_value613 = (void*)0;
struct sNode* node_518;
struct sNode* __result_obj__226;
_Bool no_comma_519;
void* __right_value614 = (void*)0;
struct sNode* exp_520;
void* __right_value615 = (void*)0;
struct sNode* exp2_521;
void* __right_value616 = (void*)0;
struct sNode* __result_obj__227;
void* __right_value617 = (void*)0;
char* block_text_522;
char* contents_523;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* _inf_value7;
struct sOutputNode* _inf_obj_value7;
void* __right_value623 = (void*)0;
struct sNode* __result_obj__230;
void* __right_value624 = (void*)0;
struct sNode* node_525;
struct sNode* __result_obj__231;
void* __right_value625 = (void*)0;
struct sNode* node_526;
struct sNode* __result_obj__232;
struct buffer* come_block_527;
int come_block_sline_528;
char* head_529;
void* __right_value626 = (void*)0;
char* tail_530;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct buffer* __dec_obj197;
int len_531;
void* __right_value629 = (void*)0;
char* mem_532;
char* head_533;
_Bool no_output_come_code_534;
void* __right_value630 = (void*)0;
char* tail_535;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* __dec_obj198;
int len_536;
void* __right_value633 = (void*)0;
char* mem_537;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value639 = (void*)0;
struct sNode* node_538;
struct sNode* __result_obj__235;
struct buffer* come_block_540;
int come_block_sline_541;
void* __right_value640 = (void*)0;
struct sNode* node_542;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value646 = (void*)0;
struct sNode* __result_obj__238;
int time_out_544;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sNode$ph* vars_545;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sBlock$ph* blocks_546;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sBlock* else_block_547;
void* __right_value653 = (void*)0;
struct sBlock* __dec_obj203;
void* __right_value654 = (void*)0;
struct sNode* var_name_548;
void* __right_value655 = (void*)0;
struct sBlock* block_549;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value708 = (void*)0;
struct sNode* __result_obj__269;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value713 = (void*)0;
struct sNode* __result_obj__272;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value718 = (void*)0;
struct sNode* __result_obj__275;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value723 = (void*)0;
struct sNode* __result_obj__278;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value728 = (void*)0;
struct sNode* __result_obj__281;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value733 = (void*)0;
struct sNode* __result_obj__284;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value738 = (void*)0;
struct sNode* __result_obj__287;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value743 = (void*)0;
struct sNode* __result_obj__290;
void* __right_value744 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_603=0;
char* name_604=0;
_Bool err_605=0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value750 = (void*)0;
struct sNode* __result_obj__293;
void* __right_value751 = (void*)0;
struct sNode* node_607;
struct sNode* __result_obj__294;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct buffer* buf2_608;
void* __right_value754 = (void*)0;
char* word_609;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1sNode$ph* exps_610;
void* __right_value757 = (void*)0;
struct sNode* exp_611;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value766 = (void*)0;
struct sNode* __result_obj__297;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* fun_name_613;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sType* type_614;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sClass* klass_621;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sType* __dec_obj235;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
char* buf2_622;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* node_623;
struct sNode* __result_obj__306;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* fun_name_624;
void* __right_value785 = (void*)0;
char* buf2_625;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* node_626;
struct sNode* __result_obj__307;
void* __right_value788 = (void*)0;
struct sNode* node_627;
struct sNode* __result_obj__308;
void* __right_value789 = (void*)0;
struct sNode* node_628;
struct sNode* __result_obj__309;
void* __right_value790 = (void*)0;
struct sNode* node_629;
struct sNode* __result_obj__310;
void* __right_value791 = (void*)0;
struct sNode* node_630;
struct sNode* __result_obj__311;
void* __right_value792 = (void*)0;
struct sNode* __result_obj__312;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)    ) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59        ) {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2003, "struct sNode");
            _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value590=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2003, "struct sReturnNode*")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sReturnNode_finalize;
            _inf_value5->clone=(void*)sReturnNode_clone;
            _inf_value5->compile=(void*)sReturnNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sReturnNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__216 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value591=_inf_value5)));
            come_call_finalizer(sReturnNode_finalize, __right_value590, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value591) ? __right_value591 = come_decrement_ref_count(__right_value591, ((struct sNode*)__right_value591)->finalize, ((struct sNode*)__right_value591)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__216;
        }
        else {
            head_492=info->p;
            value_493=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_494=info->p;
            __dec_obj190=value_493,
            value_493=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_493),info));
            (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            char buf_495[tail_494-head_492+1];
            memset(&buf_495, 0, sizeof(char)            *(tail_494-head_492+1)            );
            memcpy(buf_495,head_492,tail_494-head_492);
            buf_495[tail_494-head_492]=0;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2015, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value596=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc_v2(1, sizeof(struct sReturnNode)*(1), "05call.c", 2015, "struct sReturnNode*")),(struct sNode*)come_increment_ref_count(value_493),(char*)come_increment_ref_count(__builtin_string(buf_495)),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__217 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value597=_inf_value6)));
            ((value_493) ? value_493 = come_decrement_ref_count(value_493, ((struct sNode*)value_493)->finalize, ((struct sNode*)value_493)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value596, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value597) ? __right_value597 = come_decrement_ref_count(__right_value597, ((struct sNode*)__right_value597)->finalize, ((struct sNode*)__right_value597)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__217) ? __result_obj__217 = come_decrement_ref_count(__result_obj__217, ((struct sNode*)__result_obj__217)->finalize, ((struct sNode*)__result_obj__217)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__217;
            ((value_493) ? value_493 = come_decrement_ref_count(value_493, ((struct sNode*)value_493)->finalize, ((struct sNode*)value_493)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42    ) {
        nest_496=0;
        while(        1        ) {
            if(            *info->p==47&&*(info->p+1)==42            ) {
                info->p+=2;
                nest_496++;
            }
            else if(            *info->p==42&&*(info->p+1)==47            ) {
                info->p+=2;
                nest_496--;
                if(                nest_496==0                ) {
                    break;
                }
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47    ) {
        info->p+=2;
        while(        1        ) {
            if(            *info->p==10            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0            ) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))    ) {
        head_497=info->p;
        head_sline_498=info->sline;
        sline_real_499=info->sline_real;
        info->sline_real=info->sline;
        buf_500=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__501=is_type_name(buf_500,info);
        static char* is_special_word_array_502[22]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic","borrow","dupe","clone"};
        is_special_word_503=charppa_contained(is_special_word_array_502,22,buf_500);
        define_function_pointer_flag_504=(_Bool)0;
        if(        !is_special_word_503&&*info->p==40&&*(info->p+1)!=42        ) {
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value599=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value599, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_504=(_Bool)1;
                }
            }
            info->p=head_497;
            info->sline=head_sline_498;
        }
        lambda_flag_505=(_Bool)0;
        if(        !is_special_word_503&&is_type_name__501        ) {
            info->p=head_497;
            info->sline=head_sline_498;
            ((struct tuple3$3sType$phchar$phbool$*)(__right_value600=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value600, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            word2_506=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_506,"lambda")            ) {
                lambda_flag_505=(_Bool)1;
            }
            info->p=head_497;
            info->sline=head_sline_498;
            (word2_506 = come_decrement_ref_count(word2_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        fun_name_with_type_name_507=(_Bool)0;
        if(        !is_special_word_503        ) {
            info->p=head_497;
            info->sline=head_sline_498;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word2_508=(char*)come_increment_ref_count(parse_word(info));
                (word2_508 = come_decrement_ref_count(word2_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    fun_name_with_type_name_507=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_497;
            info->sline=head_sline_498;
        }
        call_method_generics_fun_call_509=(_Bool)0;
        {
            info->p=head_497;
            info->sline=head_sline_498;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj191=buf_500,
                buf_500=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            (_condtional_value_X19=(!is_type_name(buf_500,info)&&((struct sVar*)(__right_value606=map$2char$phsVar$ph_operator_load_element(info->lv_table->mVars,((char*)(__right_value605=__builtin_string(buf_500))))))==((void*)0)&&((struct sVar*)(__right_value609=map$2char$phsVar$ph_operator_load_element(info->gv_table->mVars,((char*)(__right_value608=__builtin_string(buf_500))))))==((void*)0)&&*info->p==60)),            (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value605 = come_decrement_ref_count(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value606, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            (__right_value607 = come_decrement_ref_count(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value608 = come_decrement_ref_count(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sVar_finalize, __right_value609, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X19            ) {
                nest_516=0;
                while(                *info->p                ) {
                    if(                    *info->p==60                    ) {
                        info->p++;
                        nest_516++;
                    }
                    else if(                    *info->p==62                    ) {
                        info->p++;
                        if(                        nest_516==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40                ) {
                    call_method_generics_fun_call_509=(_Bool)1;
                }
            }
            info->p=head_497;
            info->sline=head_sline_498;
        }
        inline_asm_517=(_Bool)0;
        {
            info->p=head_497;
            info->sline=head_sline_498;
            __dec_obj192=buf_500,
            buf_500=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            string_operator_equals(buf_500,"asm")||string_operator_equals(buf_500,"__asm")||string_operator_equals(buf_500,"__asm__")            ) {
                if(                *info->p==40                ) {
                    inline_asm_517=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj193=buf_500,
                        buf_500=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        *info->p==40                        ) {
                            inline_asm_517=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_497;
            info->sline=head_sline_498;
        }
        parse_sharp_v5(info);
        __dec_obj194=buf_500,
        buf_500=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_505        ) {
            info->p=head_497;
            info->sline=head_sline_498;
            node_518=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_499;
            __result_obj__226 = (struct sNode*)come_increment_ref_count(node_518);
            ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__226) ? __result_obj__226 = come_decrement_ref_count(__result_obj__226, ((struct sNode*)__result_obj__226)->finalize, ((struct sNode*)__result_obj__226)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__226;
            ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        (string_operator_equals(buf_500,"_Static_assert")||string_operator_equals(buf_500,"static_assert"))&&*info->p==40        ) {
            expected_next_character(40,info);
            no_comma_519=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_520=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_519;
            expected_next_character(44,info);
            exp2_521=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result_obj__227 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value616=static_assert_node((struct sNode*)come_increment_ref_count(exp_520),(struct sNode*)come_increment_ref_count(exp2_521),info))));
            ((exp_520) ? exp_520 = come_decrement_ref_count(exp_520, ((struct sNode*)exp_520)->finalize, ((struct sNode*)exp_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_521) ? exp2_521 = come_decrement_ref_count(exp2_521, ((struct sNode*)exp2_521)->finalize, ((struct sNode*)exp2_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__right_value616) ? __right_value616 = come_decrement_ref_count(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__227;
            ((exp_520) ? exp_520 = come_decrement_ref_count(exp_520, ((struct sNode*)exp_520)->finalize, ((struct sNode*)exp_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((exp2_521) ? exp2_521 = come_decrement_ref_count(exp2_521, ((struct sNode*)exp2_521)->finalize, ((struct sNode*)exp2_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(buf_500,"output")&&*info->p==123        ) {
            block_text_522=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
            contents_523=(char*)come_increment_ref_count(block_text_522);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2253, "struct sNode");
            _inf_obj_value7=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value619=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "05call.c", 2253, "struct sOutputNode*")),(char*)come_increment_ref_count(contents_523),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sOutputNode_finalize;
            _inf_value7->clone=(void*)sOutputNode_clone;
            _inf_value7->compile=(void*)sOutputNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sOutputNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__230 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value623=_inf_value7)));
            (block_text_522 = come_decrement_ref_count(block_text_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_523 = come_decrement_ref_count(contents_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sOutputNode_finalize, __right_value619, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value623) ? __right_value623 = come_decrement_ref_count(__right_value623, ((struct sNode*)__right_value623)->finalize, ((struct sNode*)__right_value623)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__230;
            (block_text_522 = come_decrement_ref_count(block_text_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (contents_523 = come_decrement_ref_count(contents_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_500,"extern")        ) {
            node_525=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__231 = (struct sNode*)come_increment_ref_count(node_525);
            ((node_525) ? node_525 = come_decrement_ref_count(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__231) ? __result_obj__231 = come_decrement_ref_count(__result_obj__231, ((struct sNode*)__result_obj__231)->finalize, ((struct sNode*)__result_obj__231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__231;
            ((node_525) ? node_525 = come_decrement_ref_count(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !gComeC&&(string_operator_equals(buf_500,"string")||string_operator_equals(buf_500,"wstring"))&&*info->p==40        ) {
            node_526=(struct sNode*)come_increment_ref_count(parse_function_call(buf_500,info,(_Bool)0));
            info->sline_real=sline_real_499;
            __result_obj__232 = (struct sNode*)come_increment_ref_count(node_526);
            ((node_526) ? node_526 = come_decrement_ref_count(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__232) ? __result_obj__232 = come_decrement_ref_count(__result_obj__232, ((struct sNode*)__result_obj__232)->finalize, ((struct sNode*)__result_obj__232)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__232;
            ((node_526) ? node_526 = come_decrement_ref_count(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_500,"come")        ) {
            come_block_527=((void*)0);
            come_block_sline_528=0;
            if(            *info->p==123            ) {
                head_529=info->p;
                come_block_sline_528=info->sline;
                ((char*)(__right_value626=skip_block(info,(_Bool)0)));
                (__right_value626 = come_decrement_ref_count(__right_value626, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                tail_530=info->p;
                __dec_obj197=come_block_527,
                come_block_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2278, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj197,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_531=tail_530-head_529;
                mem_532=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_531+1)), "05call.c", 2281, "char*"));
                memcpy(mem_532,head_529,len_531);
                mem_532[len_531]=0;
                buffer_append_str(come_block_527,mem_532);
                buffer_append_str(come_block_527,"\n");
                (mem_532 = come_decrement_ref_count(mem_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                head_533=info->p;
                come_block_sline_528=info->sline;
                no_output_come_code_534=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value630=expression_v13(info)));
                ((__right_value630) ? __right_value630 = come_decrement_ref_count(__right_value630, ((struct sNode*)__right_value630)->finalize, ((struct sNode*)__right_value630)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                info->no_output_come_code=no_output_come_code_534;
                tail_535=info->p;
                __dec_obj198=come_block_527,
                come_block_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2299, "struct buffer*"))));
                come_call_finalizer(buffer_finalize, __dec_obj198,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                len_536=tail_535-head_533;
                mem_537=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_536+1)), "05call.c", 2302, "char*"));
                memcpy(mem_537,head_533,len_536);
                mem_537[len_536]=0;
                buffer_append_str(come_block_527,"{");
                buffer_append_str(come_block_527,mem_537);
                buffer_append_str(come_block_527,"; }");
                buffer_append_str(come_block_527,"return (void*)0;\n}");
                buffer_append_str(come_block_527,"\n");
                (mem_537 = come_decrement_ref_count(mem_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2313, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value635=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2313, "struct sComeCallNode*")),(struct buffer*)come_increment_ref_count(come_block_527),come_block_sline_528,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            node_538=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer(sComeCallNode_finalize, __right_value635, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_499;
            __result_obj__235 = (struct sNode*)come_increment_ref_count(node_538);
            come_call_finalizer(buffer_finalize, come_block_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_538) ? node_538 = come_decrement_ref_count(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__235) ? __result_obj__235 = come_decrement_ref_count(__result_obj__235, ((struct sNode*)__result_obj__235)->finalize, ((struct sNode*)__result_obj__235)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__235;
            come_call_finalizer(buffer_finalize, come_block_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_538) ? node_538 = come_decrement_ref_count(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_500,"come_join")&&*info->p==40        ) {
            come_block_540=((void*)0);
            come_block_sline_541=0;
            expected_next_character(40,info);
            node_542=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_499;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2327, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value642=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2327, "struct sComeJoinNode*")),(struct sNode*)come_increment_ref_count(node_542),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__238 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value646=_inf_value9)));
            come_call_finalizer(buffer_finalize, come_block_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value642, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value646) ? __right_value646 = come_decrement_ref_count(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__238) ? __result_obj__238 = come_decrement_ref_count(__result_obj__238, ((struct sNode*)__result_obj__238)->finalize, ((struct sNode*)__result_obj__238)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__238;
            come_call_finalizer(buffer_finalize, come_block_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        gComePthread&&string_operator_equals(buf_500,"come_poll")&&(*info->p==40||*info->p==123)        ) {
            time_out_544=1;
            if(            *info->p==40            ) {
                info->p++;
                while(                xisdigit(*info->p)                ) {
                    time_out_544=time_out_544*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_545=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2345, "struct list$1sNode$ph*"))));
            blocks_546=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "05call.c", 2346, "struct list$1sBlock$ph*"))));
            else_block_547=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05call.c", 2347, "struct sBlock*"))));
            while(            1            ) {
                if(                memcmp(info->p,"else",strlen("else"))==0                ) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj203=else_block_547,
                    else_block_547=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(                    *info->p==125                    ) {
                        break;
                    }
                }
                else {
                    var_name_548=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_549=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(vars_545,(struct sNode*)come_increment_ref_count(var_name_548));
                    list$1sBlock$ph_add(blocks_546,(struct sBlock*)come_increment_ref_count(block_549));
                    if(                    *info->p==125                    ) {
                        ((var_name_548) ? var_name_548 = come_decrement_ref_count(var_name_548, ((struct sNode*)var_name_548)->finalize, ((struct sNode*)var_name_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    ((var_name_548) ? var_name_548 = come_decrement_ref_count(var_name_548, ((struct sNode*)var_name_548)->finalize, ((struct sNode*)var_name_548)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_499;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2377, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value660=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "05call.c", 2377, "struct sComePollNode*")),(struct list$1sNode$ph*)come_increment_ref_count(vars_545),(struct list$1sBlock$ph*)come_increment_ref_count(blocks_546),(struct sBlock*)come_increment_ref_count(else_block_547),time_out_544,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__269 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value708=_inf_value10)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value660, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value708) ? __right_value708 = come_decrement_ref_count(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__269) ? __result_obj__269 = come_decrement_ref_count(__result_obj__269, ((struct sNode*)__result_obj__269)->finalize, ((struct sNode*)__result_obj__269)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__269;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(buf_500,"__func__")||string_operator_equals(buf_500,"__FUNCTION__")        ) {
            info->sline_real=sline_real_499;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2382, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value710=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "05call.c", 2382, "struct sFuncNode*")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__272 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value713=_inf_value11)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value710, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value713) ? __right_value713 = come_decrement_ref_count(__right_value713, ((struct sNode*)__right_value713)->finalize, ((struct sNode*)__right_value713)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__272) ? __result_obj__272 = come_decrement_ref_count(__result_obj__272, ((struct sNode*)__result_obj__272)->finalize, ((struct sNode*)__result_obj__272)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__272;
        }
        else if(        !gComeC&&string_operator_equals(buf_500,"wildcard")        ) {
            info->sline_real=sline_real_499;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2386, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value715=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "05call.c", 2386, "struct sWildCard*")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__275 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value718=_inf_value12)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sWildCard_finalize, __right_value715, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value718) ? __right_value718 = come_decrement_ref_count(__right_value718, ((struct sNode*)__right_value718)->finalize, ((struct sNode*)__right_value718)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__275) ? __result_obj__275 = come_decrement_ref_count(__result_obj__275, ((struct sNode*)__result_obj__275)->finalize, ((struct sNode*)__result_obj__275)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__275;
        }
        else if(        string_operator_equals(buf_500,"__line__")||string_operator_equals(buf_500,"__LINE__")        ) {
            info->sline_real=sline_real_499;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2390, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value720=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "05call.c", 2390, "struct sLineNode*")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__278 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value723=_inf_value13)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value720, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value723) ? __right_value723 = come_decrement_ref_count(__right_value723, ((struct sNode*)__right_value723)->finalize, ((struct sNode*)__right_value723)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__278;
        }
        else if(        string_operator_equals(buf_500,"__sname__")        ) {
            info->sline_real=sline_real_499;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2394, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value725=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "05call.c", 2394, "struct sSNameNode*")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__281 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value728=_inf_value14)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value725, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value728) ? __right_value728 = come_decrement_ref_count(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__281) ? __result_obj__281 = come_decrement_ref_count(__result_obj__281, ((struct sNode*)__result_obj__281)->finalize, ((struct sNode*)__result_obj__281)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__281;
        }
        else if(        string_operator_equals(buf_500,"__caller_func__")        ) {
            info->sline_real=sline_real_499;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2398, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value730=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2398, "struct sCallerFuncNode*")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__284 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value733=_inf_value15)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value730, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value733) ? __right_value733 = come_decrement_ref_count(__right_value733, ((struct sNode*)__right_value733)->finalize, ((struct sNode*)__right_value733)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__284;
        }
        else if(        string_operator_equals(buf_500,"__caller_line__")        ) {
            info->sline_real=sline_real_499;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2402, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value735=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2402, "struct sCallerLineNode*")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__287 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value738=_inf_value16)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value735, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value738) ? __right_value738 = come_decrement_ref_count(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__287;
        }
        else if(        string_operator_equals(buf_500,"__caller_sname__")        ) {
            info->sline_real=sline_real_499;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2406, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value740=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2406, "struct sCallerSNameNode*")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__290 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value743=_inf_value17)));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value740, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value743) ? __right_value743 = come_decrement_ref_count(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__290) ? __result_obj__290 = come_decrement_ref_count(__result_obj__290, ((struct sNode*)__result_obj__290)->finalize, ((struct sNode*)__result_obj__290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__290;
        }
        else if(        info->va_arg&&is_type_name(buf_500,info)        ) {
            info->p=head_497;
            info->sline=head_sline_498;
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value744=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_603=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_604=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_605=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value744, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            info->sline_real=sline_real_499;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2415, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value746=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2415, "struct sVarArgTypeName*")),(struct sType*)come_increment_ref_count(type_603),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__293 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value750=_inf_value18)));
            come_call_finalizer(sType_finalize, type_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_604 = come_decrement_ref_count(name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value746, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value750) ? __right_value750 = come_decrement_ref_count(__right_value750, ((struct sNode*)__right_value750)->finalize, ((struct sNode*)__right_value750)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__293) ? __result_obj__293 = come_decrement_ref_count(__result_obj__293, ((struct sNode*)__result_obj__293)->finalize, ((struct sNode*)__result_obj__293)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__293;
            come_call_finalizer(sType_finalize, type_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_604 = come_decrement_ref_count(name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        string_operator_equals(buf_500,"sizeof")||string_operator_equals(buf_500,"_Alignof")||string_operator_equals(buf_500,"_Alignas")||string_operator_equals(buf_500,"__alignof__")        ) {
            node_607=(struct sNode*)come_increment_ref_count(string_node_v21(buf_500,head_497,head_sline_498,info));
            info->sline_real=sline_real_499;
            __result_obj__294 = (struct sNode*)come_increment_ref_count(node_607);
            ((node_607) ? node_607 = come_decrement_ref_count(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__294;
            ((node_607) ? node_607 = come_decrement_ref_count(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        inline_asm_517        ) {
            buf2_608=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2424, "struct buffer*"))));
            if(            *info->p!=40            ) {
                word_609=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_608,word_609);
                (word_609 = come_decrement_ref_count(word_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_608,40);
            exps_610=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05call.c", 2435, "struct list$1sNode$ph*"))));
            while(            (_Bool)1            ) {
                if(                *info->p==40                ) {
                    buffer_append_char(buf2_608,40);
                    info->p++;
                    exp_611=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_add(exps_610,(struct sNode*)come_increment_ref_count(exp_611));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_608,41);
                    ((exp_611) ? exp_611 = come_decrement_ref_count(exp_611, ((struct sNode*)exp_611)->finalize, ((struct sNode*)exp_611)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else if(                *info->p==41                ) {
                    buffer_append_char(buf2_608,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10                ) {
                    info->sline++;
                    buffer_append_char(buf2_608,*info->p);
                    info->p++;
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value758=err_msg(info,"invalid source end at inline assembler")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value758, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_608,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_499;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2472, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value761=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2472, "struct sInlineAssembler*")),(char*)come_increment_ref_count(buffer_to_string(buf2_608)),(struct list$1sNode$ph*)come_increment_ref_count(exps_610),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__297 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value766=_inf_value19)));
            come_call_finalizer(buffer_finalize, buf2_608, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value761, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value766) ? __right_value766 = come_decrement_ref_count(__right_value766, ((struct sNode*)__right_value766)->finalize, ((struct sNode*)__right_value766)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__297;
            come_call_finalizer(buffer_finalize, buf2_608, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps_610, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        fun_name_with_type_name_507        ) {
            fun_name_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2475, "struct buffer*"))));
            buffer_append_str(fun_name_613,buf_500);
            type_614=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value771=map$2char$phsType$ph_operator_load_element(info->types,((char*)(__right_value770=buffer_to_string(fun_name_613))))))));
            (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value770 = come_decrement_ref_count(__right_value770, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, __right_value771, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            type_614==((void*)0)            ) {
                klass_621=((struct sClass*)(__right_value775=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value774=buffer_to_string(fun_name_613))))));
                (__right_value773 = come_decrement_ref_count(__right_value773, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value774 = come_decrement_ref_count(__right_value774, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClass_finalize, __right_value775, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_621                ) {
                    __dec_obj235=type_614,
                    type_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05call.c", 2485, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(buf_500)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value779=err_msg(info,"null type(%s)",buf_500)));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value779, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
            }
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_614->mClass->mStruct==(_Bool)0                ) {
                    buffer_append_str(fun_name_613,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_613,"_");
            buf2_622=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_613,buf2_622);
            node_623=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value781=buffer_to_string(fun_name_613))),info,(_Bool)0));
            (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_499;
            __result_obj__306 = (struct sNode*)come_increment_ref_count(node_623);
            come_call_finalizer(buffer_finalize, fun_name_613, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_614, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_622 = come_decrement_ref_count(buf2_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_623) ? node_623 = come_decrement_ref_count(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__306;
            come_call_finalizer(buffer_finalize, fun_name_613, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_614, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_622 = come_decrement_ref_count(buf2_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_623) ? node_623 = come_decrement_ref_count(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==58&&*(info->p+1)==58        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_624=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2520, "struct buffer*"))));
            buffer_append_str(fun_name_624,buf_500);
            buffer_append_str(fun_name_624,"_");
            buf2_625=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_624,buf2_625);
            node_626=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value786=buffer_to_string(fun_name_624))),info,(_Bool)0));
            (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            info->sline_real=sline_real_499;
            __result_obj__307 = (struct sNode*)come_increment_ref_count(node_626);
            come_call_finalizer(buffer_finalize, fun_name_624, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_625 = come_decrement_ref_count(buf2_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_626) ? node_626 = come_decrement_ref_count(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__307;
            come_call_finalizer(buffer_finalize, fun_name_624, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (buf2_625 = come_decrement_ref_count(buf2_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_626) ? node_626 = come_decrement_ref_count(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        call_method_generics_fun_call_509        ) {
            node_627=(struct sNode*)come_increment_ref_count(parse_function_call(buf_500,info,(_Bool)0));
            info->sline_real=sline_real_499;
            __result_obj__308 = (struct sNode*)come_increment_ref_count(node_627);
            ((node_627) ? node_627 = come_decrement_ref_count(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__308) ? __result_obj__308 = come_decrement_ref_count(__result_obj__308, ((struct sNode*)__result_obj__308)->finalize, ((struct sNode*)__result_obj__308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__308;
            ((node_627) ? node_627 = come_decrement_ref_count(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !is_special_word_503&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__501)        ) {
            node_628=(struct sNode*)come_increment_ref_count(parse_function_call(buf_500,info,(_Bool)0));
            info->sline_real=sline_real_499;
            __result_obj__309 = (struct sNode*)come_increment_ref_count(node_628);
            ((node_628) ? node_628 = come_decrement_ref_count(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__309;
            ((node_628) ? node_628 = come_decrement_ref_count(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            node_629=(struct sNode*)come_increment_ref_count(string_node_v21(buf_500,head_497,head_sline_498,info));
            info->sline_real=sline_real_499;
            __result_obj__310 = (struct sNode*)come_increment_ref_count(node_629);
            ((node_629) ? node_629 = come_decrement_ref_count(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__310;
            ((node_629) ? node_629 = come_decrement_ref_count(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (buf_500 = come_decrement_ref_count(buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        node_630=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result_obj__311 = (struct sNode*)come_increment_ref_count(node_630);
        ((node_630) ? node_630 = come_decrement_ref_count(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__311) ? __result_obj__311 = come_decrement_ref_count(__result_obj__311, ((struct sNode*)__result_obj__311)->finalize, ((struct sNode*)__result_obj__311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__311;
        ((node_630) ? node_630 = come_decrement_ref_count(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    ((struct tuple2$2int$bool$*)(__right_value792=err_msg(info,"unexpected operator(%c)",*info->p)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value792, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__312 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__312) ? __result_obj__312 = come_decrement_ref_count(__result_obj__312, ((struct sNode*)__result_obj__312)->finalize, ((struct sNode*)__result_obj__312)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__312;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_510;
unsigned int hash_511;
unsigned int it_512;
struct sVar* __result_obj__218;
struct sVar* __result_obj__219;
struct sVar* __result_obj__220;
struct sVar* __result_obj__221;
default_value_510 = (void*)0;
    memset(&default_value_510,0,sizeof(struct sVar*));
    hash_511=string_get_hash_key(((char*)key))%self->size;
    it_512=hash_511;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_512]        ) {
            if(            string_equals(self->keys[it_512],key)            ) {
                __result_obj__218 = (struct sVar*)come_increment_ref_count(self->items[it_512]);
                come_call_finalizer(sVar_finalize, default_value_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__218;
            }
            it_512++;
            if(            it_512>=self->size            ) {
                it_512=0;
            }
            else if(            it_512==hash_511            ) {
                __result_obj__219 = (struct sVar*)come_increment_ref_count(default_value_510);
                come_call_finalizer(sVar_finalize, default_value_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__219;
            }
        }
        else {
            __result_obj__220 = (struct sVar*)come_increment_ref_count(default_value_510);
            come_call_finalizer(sVar_finalize, default_value_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__220;
        }
    }
    __result_obj__221 = (struct sVar*)come_increment_ref_count(default_value_510);
    come_call_finalizer(sVar_finalize, default_value_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__221;
}

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_513;
unsigned int hash_514;
unsigned int it_515;
struct sVar* __result_obj__222;
struct sVar* __result_obj__223;
struct sVar* __result_obj__224;
struct sVar* __result_obj__225;
default_value_513 = (void*)0;
    memset(&default_value_513,0,sizeof(struct sVar*));
    hash_514=string_get_hash_key(((char*)key))%self->size;
    it_515=hash_514;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_515]        ) {
            if(            string_equals(self->keys[it_515],key)            ) {
                __result_obj__222 = (struct sVar*)come_increment_ref_count(self->items[it_515]);
                come_call_finalizer(sVar_finalize, default_value_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__222;
            }
            it_515++;
            if(            it_515>=self->size            ) {
                it_515=0;
            }
            else if(            it_515==hash_514            ) {
                __result_obj__223 = (struct sVar*)come_increment_ref_count(default_value_513);
                come_call_finalizer(sVar_finalize, default_value_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__223;
            }
        }
        else {
            __result_obj__224 = (struct sVar*)come_increment_ref_count(default_value_513);
            come_call_finalizer(sVar_finalize, default_value_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__224, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__224;
        }
    }
    __result_obj__225 = (struct sVar*)come_increment_ref_count(default_value_513);
    come_call_finalizer(sVar_finalize, default_value_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__225;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
struct sOutputNode* __result_obj__228;
void* __right_value620 = (void*)0;
struct sOutputNode* result_524;
void* __right_value621 = (void*)0;
char* __dec_obj195;
void* __right_value622 = (void*)0;
char* __dec_obj196;
struct sOutputNode* __result_obj__229;
    if(    self==(void*)0    ) {
        __result_obj__228 = (void*)0;
        return __result_obj__228;
    }
    result_524=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc_v2(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*"));
    if(    self!=((void*)0)    ) {
        result_524->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj195=result_524->sname,
        result_524->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOutputNode_clone", 5, "char*"));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_524->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)    ) {
        __dec_obj196=result_524->contents,
        result_524->contents=(char*)come_increment_ref_count((char*)come_memdup(self->contents, "sOutputNode_clone", 7, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__229 = result_524;
    come_call_finalizer(sOutputNode_finalize, result_524, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__229;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
struct sComeCallNode* __result_obj__233;
void* __right_value636 = (void*)0;
struct sComeCallNode* result_539;
void* __right_value637 = (void*)0;
char* __dec_obj199;
void* __right_value638 = (void*)0;
struct buffer* __dec_obj200;
struct sComeCallNode* __result_obj__234;
    if(    self==(void*)0    ) {
        __result_obj__233 = (void*)0;
        return __result_obj__233;
    }
    result_539=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc_v2(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*"));
    if(    self!=((void*)0)    ) {
        result_539->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj199=result_539->sname,
        result_539->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeCallNode_clone", 5, "char*"));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_539->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)    ) {
        __dec_obj200=result_539->come_block,
        result_539->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj200,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_539->come_block_sline=self->come_block_sline;
    }
    __result_obj__234 = result_539;
    come_call_finalizer(sComeCallNode_finalize, result_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__234;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
struct sComeJoinNode* __result_obj__236;
void* __right_value643 = (void*)0;
struct sComeJoinNode* result_543;
void* __right_value644 = (void*)0;
char* __dec_obj201;
void* __right_value645 = (void*)0;
struct sNode* __dec_obj202;
struct sComeJoinNode* __result_obj__237;
    if(    self==(void*)0    ) {
        __result_obj__236 = (void*)0;
        return __result_obj__236;
    }
    result_543=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc_v2(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*"));
    if(    self!=((void*)0)    ) {
        result_543->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj201=result_543->sname,
        result_543->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComeJoinNode_clone", 5, "char*"));
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_543->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj202=result_543->node,
        result_543->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__237 = result_543;
    come_call_finalizer(sComeJoinNode_finalize, result_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__237;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__239;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__239;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value656 = (void*)0;
struct list_item$1sBlock$ph* litem_550;
struct sBlock* __dec_obj204;
void* __right_value657 = (void*)0;
struct list_item$1sBlock$ph* litem_551;
struct sBlock* __dec_obj205;
void* __right_value658 = (void*)0;
struct list_item$1sBlock$ph* litem_552;
struct sBlock* __dec_obj206;
struct list$1sBlock$ph* __result_obj__240;
    if(    self->len==0    ) {
        litem_550=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value656=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sBlock$ph*"))));
        litem_550->prev=((void*)0);
        litem_550->next=((void*)0);
        __dec_obj204=litem_550->item,
        litem_550->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_550;
        self->head=litem_550;
    }
    else if(    self->len==1    ) {
        litem_551=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value657=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sBlock$ph*"))));
        litem_551->prev=self->head;
        litem_551->next=((void*)0);
        __dec_obj205=litem_551->item,
        litem_551->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_551;
        self->head->next=litem_551;
    }
    else {
        litem_552=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value658=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sBlock$ph*"))));
        litem_552->prev=self->tail;
        litem_552->next=((void*)0);
        __dec_obj206=litem_552->item,
        litem_552->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_552;
        self->tail=litem_552;
    }
    self->len++;
    __result_obj__240 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__240;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
struct sComePollNode* __result_obj__241;
void* __right_value661 = (void*)0;
struct sComePollNode* result_553;
void* __right_value662 = (void*)0;
char* __dec_obj207;
void* __right_value663 = (void*)0;
struct list$1sNode$ph* __dec_obj208;
void* __right_value706 = (void*)0;
struct list$1sBlock$ph* __dec_obj221;
void* __right_value707 = (void*)0;
struct sBlock* __dec_obj222;
struct sComePollNode* __result_obj__268;
    if(    self==(void*)0    ) {
        __result_obj__241 = (void*)0;
        return __result_obj__241;
    }
    result_553=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc_v2(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*"));
    if(    self!=((void*)0)    ) {
        result_553->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj207=result_553->sname,
        result_553->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sComePollNode_clone", 5, "char*"));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_553->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)    ) {
        __dec_obj208=result_553->vars,
        result_553->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)    ) {
        __dec_obj221=result_553->blocks,
        result_553->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj221,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)    ) {
        __dec_obj222=result_553->else_block,
        result_553->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj222,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_553->time_out=self->time_out;
    }
    __result_obj__268 = result_553;
    come_call_finalizer(sComePollNode_finalize, result_553, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__268;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__242;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1sBlock$ph* result_554;
struct list_item$1sBlock$ph* it_555;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1sBlock$ph* __result_obj__267;
    if(    self==((void*)0)    ) {
        __result_obj__242 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__242;
    }
    result_554=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sBlock$ph*"))));
    it_555=self->head;
    while(    it_555!=((void*)0)    ) {
        if(        1        ) {
            list$1sBlock$ph_add(result_554,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_555->item)));
        }
        else {
            list$1sBlock$ph_add(result_554,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_555->item)));
        }
        it_555=it_555->next;
    }
    __result_obj__267 = (struct list$1sBlock$ph*)come_increment_ref_count(result_554);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result_554, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__267;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__243;
void* __right_value666 = (void*)0;
struct sBlock* result_556;
void* __right_value671 = (void*)0;
struct list$1sNode$ph* __dec_obj209;
void* __right_value703 = (void*)0;
struct sVarTable* __dec_obj220;
struct sBlock* __result_obj__266;
    if(    self==(void*)0    ) {
        __result_obj__243 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__243;
    }
    result_556=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj209=result_556->mNodes,
        result_556->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj220=result_556->mVarTable,
        result_556->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj220,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_556->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__266 = (struct sBlock*)come_increment_ref_count(result_556);
    come_call_finalizer(sBlock_finalize, result_556, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__266;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__244;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1sNode$ph* result_557;
struct list_item$1sNode$ph* it_558;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sNode$ph* __result_obj__245;
    if(    self==((void*)0)    ) {
        __result_obj__244 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__244;
    }
    result_557=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_558=self->head;
    while(    it_558!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_557,(struct sNode*)come_increment_ref_count(sNode_clone(it_558->item)));
        }
        else {
            list$1sNode$ph_add(result_557,(struct sNode*)come_increment_ref_count(sNode_clone(it_558->item)));
        }
        it_558=it_558->next;
    }
    __result_obj__245 = (struct list$1sNode$ph*)come_increment_ref_count(result_557);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__245;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__246;
void* __right_value672 = (void*)0;
struct sVarTable* result_559;
void* __right_value702 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj219;
struct sVarTable* __result_obj__265;
    if(    self==(void*)0    ) {
        __result_obj__246 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__246;
    }
    result_559=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj219=result_559->mVars,
        result_559->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj219,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_559->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_559->mParent=self->mParent;
    }
    __result_obj__265 = (struct sVarTable*)come_increment_ref_count(result_559);
    come_call_finalizer(sVarTable_finalize, result_559, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__265;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__247;
void* __right_value673 = (void*)0;
void* __right_value679 = (void*)0;
struct map$2char$phsVar$ph* result_565;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1char$ph* __dec_obj211;
char* it_568;
struct sVar* default_value_571;
void* __right_value682 = (void*)0;
struct sVar* it2_574;
void* __right_value691 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__264;
default_value_571 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__247 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__247;
    }
    result_565=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1995, "struct map$2char$phsVar$ph*"))));
    __dec_obj211=result_565->key_list,
    result_565->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1997, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj211,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_568=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_568=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_571,0,sizeof(struct sVar*));
        it2_574=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_568,(struct sVar*)come_increment_ref_count(default_value_571)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_565,(char*)come_increment_ref_count((char*)come_memdup(it_568, "/usr/local/include/comelang.h", 2006, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_574)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_565,(char*)come_increment_ref_count((char*)come_memdup(it_568, "/usr/local/include/comelang.h", 2009, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_574)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_565,(char*)come_increment_ref_count(it_568),(struct sVar*)come_increment_ref_count(sVar_clone(it2_574)));
        }
        else {
            map$2char$phsVar$ph_put(result_565,(char*)come_increment_ref_count(it_568),(struct sVar*)come_increment_ref_count(sVar_clone(it2_574)));
        }
        come_call_finalizer(sVar_finalize, default_value_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_574, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__264 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_565);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_565, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__264;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_560;
int i_561;
    for(    i_560=0    ;    i_560<self->size    ;    i_560++    ){
        if(        self->item_existance[i_560]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_560], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_561=0    ;    i_561<self->size    ;    i_561++    ){
        if(        self->item_existance[i_561]        ) {
            if(            1            ) {
                (self->keys[i_561] = come_decrement_ref_count(self->keys[i_561], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
int i_562;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1char$ph* __dec_obj210;
struct map$2char$phsVar$ph* __result_obj__249;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value674=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value675=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value676=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_562=0    ;    i_562<128    ;    i_562++    ){
        self->item_existance[i_562]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj210=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj210,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__249 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__249;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__248;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__248 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__248;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_563;
struct list_item$1char$p* prev_it_564;
    it_563=self->head;
    while(    it_563!=((void*)0)    ) {
        prev_it_564=it_563;
        it_563=it_563->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_564, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_566;
char* __result_obj__250;
char* __result_obj__251;
char* result_567;
char* __result_obj__252;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_566,0,sizeof(char*));
        __result_obj__250 = result_566;
        return __result_obj__250;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__251 = self->key_list->it->item;
        return __result_obj__251;
    }
    memset(&result_567,0,sizeof(char*));
    __result_obj__252 = result_567;
    return __result_obj__252;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_569;
char* __result_obj__253;
char* __result_obj__254;
char* result_570;
char* __result_obj__255;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_569,0,sizeof(char*));
        __result_obj__253 = result_569;
        return __result_obj__253;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__254 = self->key_list->it->item;
        return __result_obj__254;
    }
    memset(&result_570,0,sizeof(char*));
    __result_obj__255 = result_570;
    return __result_obj__255;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_572;
unsigned int it_573;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
struct sVar* __result_obj__258;
struct sVar* __result_obj__259;
    hash_572=string_get_hash_key(((char*)key))%self->size;
    it_573=hash_572;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_573]        ) {
            if(            string_equals(self->keys[it_573],key)            ) {
                __result_obj__256 = (struct sVar*)come_increment_ref_count(self->items[it_573]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__256;
            }
            it_573++;
            if(            it_573>=self->size            ) {
                it_573=0;
            }
            else if(            it_573==hash_572            ) {
                __result_obj__257 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__259;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_586;
int it_587;
_Bool same_key_exist_588;
char* it2_589;
struct map$2char$phsVar$ph* __result_obj__261;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_586=string_get_hash_key(((char*)key))%self->size;
    it_587=hash_586;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_587]        ) {
            if(            string_equals(self->keys[it_587],key)            ) {
                if(                1                ) {
                    (self->keys[it_587] = come_decrement_ref_count(self->keys[it_587], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_587]);
                    self->keys[it_587]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_587]);
                    self->keys[it_587]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_587], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_587]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_587]=item;
                }
                break;
            }
            it_587++;
            if(            it_587>=self->size            ) {
                it_587=0;
            }
            else if(            it_587==hash_586            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_587]=(_Bool)1;
            if(            1            ) {
                self->keys[it_587]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_587]=key;
            }
            if(            1            ) {
                self->items[it_587]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_587]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_588=(_Bool)0;
    for(    it2_589=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_589=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_589,key)        ) {
            same_key_exist_588=(_Bool)1;
        }
    }
    if(    !same_key_exist_588    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__261 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__261;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_575;
void* __right_value683 = (void*)0;
char** keys_576;
void* __right_value684 = (void*)0;
struct sVar** items_577;
void* __right_value685 = (void*)0;
_Bool* item_existance_578;
int len_579;
char* it_580;
struct sVar* default_value_581;
void* __right_value686 = (void*)0;
struct sVar* it2_582;
unsigned int hash_583;
int n_584;
struct sVar* default_value_585;
void* __right_value687 = (void*)0;
default_value_581 = (void*)0;
default_value_585 = (void*)0;
    size_575=self->size*10;
    keys_576=(char**)come_increment_ref_count(((char**)(__right_value683=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_575)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_577=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value684=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_575)), "/usr/local/include/comelang.h", 2164, "struct sVar**"))));
    item_existance_578=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value685=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_575)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_579=0;
    for(    it_580=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_580=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_581,0,sizeof(struct sVar*));
        it2_582=((struct sVar*)(__right_value686=map$2char$phsVar$ph_at(self,it_580,(struct sVar*)come_increment_ref_count(default_value_581))));
        come_call_finalizer(sVar_finalize, __right_value686, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_583=string_get_hash_key(((char*)it_580))%size_575;
        n_584=hash_583;
        while(        (_Bool)1        ) {
            if(            item_existance_578[n_584]            ) {
                n_584++;
                if(                n_584>=size_575                ) {
                    n_584=0;
                }
                else if(                n_584==hash_583                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_578[n_584]=(_Bool)1;
                keys_576[n_584]=it_580;
                items_577[n_584]=((struct sVar*)(__right_value687=map$2char$phsVar$ph_at(self,it_580,(struct sVar*)come_increment_ref_count(default_value_585))));
                come_call_finalizer(sVar_finalize, __right_value687, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_579++;
                come_call_finalizer(sVar_finalize, default_value_585, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_585, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_576;
    self->items=items_577;
    self->item_existance=item_existance_578;
    self->size=size_575;
    self->len=len_579;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value688 = (void*)0;
struct list_item$1char$ph* litem_590;
char* __dec_obj212;
void* __right_value689 = (void*)0;
struct list_item$1char$ph* litem_591;
char* __dec_obj213;
void* __right_value690 = (void*)0;
struct list_item$1char$ph* litem_592;
char* __dec_obj214;
struct list$1char$ph* __result_obj__260;
    if(    self->len==0    ) {
        litem_590=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value688=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_590->prev=((void*)0);
        litem_590->next=((void*)0);
        __dec_obj212=litem_590->item,
        litem_590->item=(char*)come_increment_ref_count(item);
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_590;
        self->head=litem_590;
    }
    else if(    self->len==1    ) {
        litem_591=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value689=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_591->prev=self->head;
        litem_591->next=((void*)0);
        __dec_obj213=litem_591->item,
        litem_591->item=(char*)come_increment_ref_count(item);
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_591;
        self->head->next=litem_591;
    }
    else {
        litem_592=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value690=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_592->prev=self->tail;
        litem_592->next=((void*)0);
        __dec_obj214=litem_592->item,
        litem_592->item=(char*)come_increment_ref_count(item);
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_592;
        self->tail=litem_592;
    }
    self->len++;
    __result_obj__260 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__260;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__262;
void* __right_value692 = (void*)0;
struct sVar* result_593;
void* __right_value693 = (void*)0;
char* __dec_obj215;
void* __right_value694 = (void*)0;
char* __dec_obj216;
void* __right_value695 = (void*)0;
struct sType* __dec_obj217;
void* __right_value696 = (void*)0;
char* __dec_obj218;
struct sVar* __result_obj__263;
    if(    self==(void*)0    ) {
        __result_obj__262 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__262, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__262;
    }
    result_593=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj215=result_593->mName,
        result_593->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj216=result_593->mCValueName,
        result_593->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj217=result_593->mType,
        result_593->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj217,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_593->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_593->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_593->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_593->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj218=result_593->mFunName,
        result_593->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__263 = (struct sVar*)come_increment_ref_count(result_593);
    come_call_finalizer(sVar_finalize, result_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__263;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_594;
int i_595;
    for(    i_594=0    ;    i_594<self->size    ;    i_594++    ){
        if(        self->item_existance[i_594]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_594], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_595=0    ;    i_595<self->size    ;    i_595++    ){
        if(        self->item_existance[i_595]        ) {
            if(            1            ) {
                (self->keys[i_595] = come_decrement_ref_count(self->keys[i_595], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
struct sFuncNode* __result_obj__270;
void* __right_value711 = (void*)0;
struct sFuncNode* result_596;
void* __right_value712 = (void*)0;
char* __dec_obj223;
struct sFuncNode* __result_obj__271;
    if(    self==(void*)0    ) {
        __result_obj__270 = (void*)0;
        return __result_obj__270;
    }
    result_596=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc_v2(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_596->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj223=result_596->sname,
        result_596->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFuncNode_clone", 5, "char*"));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_596->sline_real=self->sline_real;
    }
    __result_obj__271 = result_596;
    come_call_finalizer(sFuncNode_finalize, result_596, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__271;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
struct sWildCard* __result_obj__273;
void* __right_value716 = (void*)0;
struct sWildCard* result_597;
void* __right_value717 = (void*)0;
char* __dec_obj224;
struct sWildCard* __result_obj__274;
    if(    self==(void*)0    ) {
        __result_obj__273 = (void*)0;
        return __result_obj__273;
    }
    result_597=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc_v2(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*"));
    if(    self!=((void*)0)    ) {
        result_597->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj224=result_597->sname,
        result_597->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWildCard_clone", 5, "char*"));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_597->sline_real=self->sline_real;
    }
    __result_obj__274 = result_597;
    come_call_finalizer(sWildCard_finalize, result_597, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__274;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
struct sLineNode* __result_obj__276;
void* __right_value721 = (void*)0;
struct sLineNode* result_598;
void* __right_value722 = (void*)0;
char* __dec_obj225;
struct sLineNode* __result_obj__277;
    if(    self==(void*)0    ) {
        __result_obj__276 = (void*)0;
        return __result_obj__276;
    }
    result_598=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc_v2(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*"));
    if(    self!=((void*)0)    ) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj225=result_598->sname,
        result_598->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLineNode_clone", 5, "char*"));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_598->sline_real=self->sline_real;
    }
    __result_obj__277 = result_598;
    come_call_finalizer(sLineNode_finalize, result_598, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__277;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
struct sSNameNode* __result_obj__279;
void* __right_value726 = (void*)0;
struct sSNameNode* result_599;
void* __right_value727 = (void*)0;
char* __dec_obj226;
struct sSNameNode* __result_obj__280;
    if(    self==(void*)0    ) {
        __result_obj__279 = (void*)0;
        return __result_obj__279;
    }
    result_599=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc_v2(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_599->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj226=result_599->sname,
        result_599->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSNameNode_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_599->sline_real=self->sline_real;
    }
    __result_obj__280 = result_599;
    come_call_finalizer(sSNameNode_finalize, result_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__280;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
struct sCallerFuncNode* __result_obj__282;
void* __right_value731 = (void*)0;
struct sCallerFuncNode* result_600;
void* __right_value732 = (void*)0;
char* __dec_obj227;
struct sCallerFuncNode* __result_obj__283;
    if(    self==(void*)0    ) {
        __result_obj__282 = (void*)0;
        return __result_obj__282;
    }
    result_600=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc_v2(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*"));
    if(    self!=((void*)0)    ) {
        result_600->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj227=result_600->sname,
        result_600->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerFuncNode_clone", 5, "char*"));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_600->sline_real=self->sline_real;
    }
    __result_obj__283 = result_600;
    come_call_finalizer(sCallerFuncNode_finalize, result_600, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__283;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
struct sCallerLineNode* __result_obj__285;
void* __right_value736 = (void*)0;
struct sCallerLineNode* result_601;
void* __right_value737 = (void*)0;
char* __dec_obj228;
struct sCallerLineNode* __result_obj__286;
    if(    self==(void*)0    ) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result_601=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc_v2(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*"));
    if(    self!=((void*)0)    ) {
        result_601->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj228=result_601->sname,
        result_601->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerLineNode_clone", 5, "char*"));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_601->sline_real=self->sline_real;
    }
    __result_obj__286 = result_601;
    come_call_finalizer(sCallerLineNode_finalize, result_601, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__286;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
struct sCallerSNameNode* __result_obj__288;
void* __right_value741 = (void*)0;
struct sCallerSNameNode* result_602;
void* __right_value742 = (void*)0;
char* __dec_obj229;
struct sCallerSNameNode* __result_obj__289;
    if(    self==(void*)0    ) {
        __result_obj__288 = (void*)0;
        return __result_obj__288;
    }
    result_602=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc_v2(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*"));
    if(    self!=((void*)0)    ) {
        result_602->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj229=result_602->sname,
        result_602->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCallerSNameNode_clone", 5, "char*"));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_602->sline_real=self->sline_real;
    }
    __result_obj__289 = result_602;
    come_call_finalizer(sCallerSNameNode_finalize, result_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__289;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
struct sVarArgTypeName* __result_obj__291;
void* __right_value747 = (void*)0;
struct sVarArgTypeName* result_606;
void* __right_value748 = (void*)0;
char* __dec_obj230;
void* __right_value749 = (void*)0;
struct sType* __dec_obj231;
struct sVarArgTypeName* __result_obj__292;
    if(    self==(void*)0    ) {
        __result_obj__291 = (void*)0;
        return __result_obj__291;
    }
    result_606=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc_v2(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*"));
    if(    self!=((void*)0)    ) {
        result_606->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj230=result_606->sname,
        result_606->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sVarArgTypeName_clone", 5, "char*"));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_606->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj231=result_606->type,
        result_606->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj231,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__292 = result_606;
    come_call_finalizer(sVarArgTypeName_finalize, result_606, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__292;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
struct sInlineAssembler* __result_obj__295;
void* __right_value762 = (void*)0;
struct sInlineAssembler* result_612;
void* __right_value763 = (void*)0;
char* __dec_obj232;
void* __right_value764 = (void*)0;
char* __dec_obj233;
void* __right_value765 = (void*)0;
struct list$1sNode$ph* __dec_obj234;
struct sInlineAssembler* __result_obj__296;
    if(    self==(void*)0    ) {
        __result_obj__295 = (void*)0;
        return __result_obj__295;
    }
    result_612=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc_v2(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*"));
    if(    self!=((void*)0)    ) {
        result_612->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj232=result_612->sname,
        result_612->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sInlineAssembler_clone", 5, "char*"));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_612->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)    ) {
        __dec_obj233=result_612->source,
        result_612->source=(char*)come_increment_ref_count((char*)come_memdup(self->source, "sInlineAssembler_clone", 7, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)    ) {
        __dec_obj234=result_612->exps,
        result_612->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj234,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__296 = result_612;
    come_call_finalizer(sInlineAssembler_finalize, result_612, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__296;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_615;
unsigned int hash_616;
unsigned int it_617;
struct sType* __result_obj__298;
struct sType* __result_obj__299;
struct sType* __result_obj__300;
struct sType* __result_obj__301;
default_value_615 = (void*)0;
    memset(&default_value_615,0,sizeof(struct sType*));
    hash_616=string_get_hash_key(((char*)key))%self->size;
    it_617=hash_616;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_617]        ) {
            if(            string_equals(self->keys[it_617],key)            ) {
                __result_obj__298 = (struct sType*)come_increment_ref_count(self->items[it_617]);
                come_call_finalizer(sType_finalize, default_value_615, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__298;
            }
            it_617++;
            if(            it_617>=self->size            ) {
                it_617=0;
            }
            else if(            it_617==hash_616            ) {
                __result_obj__299 = (struct sType*)come_increment_ref_count(default_value_615);
                come_call_finalizer(sType_finalize, default_value_615, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__299;
            }
        }
        else {
            __result_obj__300 = (struct sType*)come_increment_ref_count(default_value_615);
            come_call_finalizer(sType_finalize, default_value_615, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__300;
        }
    }
    __result_obj__301 = (struct sType*)come_increment_ref_count(default_value_615);
    come_call_finalizer(sType_finalize, default_value_615, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__301;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_618;
unsigned int hash_619;
unsigned int it_620;
struct sType* __result_obj__302;
struct sType* __result_obj__303;
struct sType* __result_obj__304;
struct sType* __result_obj__305;
default_value_618 = (void*)0;
    memset(&default_value_618,0,sizeof(struct sType*));
    hash_619=string_get_hash_key(((char*)key))%self->size;
    it_620=hash_619;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_620]        ) {
            if(            string_equals(self->keys[it_620],key)            ) {
                __result_obj__302 = (struct sType*)come_increment_ref_count(self->items[it_620]);
                come_call_finalizer(sType_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__302;
            }
            it_620++;
            if(            it_620>=self->size            ) {
                it_620=0;
            }
            else if(            it_620==hash_619            ) {
                __result_obj__303 = (struct sType*)come_increment_ref_count(default_value_618);
                come_call_finalizer(sType_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__303;
            }
        }
        else {
            __result_obj__304 = (struct sType*)come_increment_ref_count(default_value_618);
            come_call_finalizer(sType_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__304;
        }
    }
    __result_obj__305 = (struct sType*)come_increment_ref_count(default_value_618);
    come_call_finalizer(sType_finalize, default_value_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__305;
}

struct sNode* expression_v5(struct sInfo* info){
void* __right_value793 = (void*)0;
struct sNode* __result_obj__313;
    __result_obj__313 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value793=expression_node_v99(info))));
    ((__right_value793) ? __right_value793 = come_decrement_ref_count(__right_value793, ((struct sNode*)__right_value793)->finalize, ((struct sNode*)__right_value793)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__313;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* __dec_obj236;
struct sNode* __result_obj__314;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* __dec_obj237;
struct sNode* __result_obj__315;
struct sNode* __result_obj__316;
    if(    parsecmp("or",info)    ) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj236=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__314 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__314;
    }
    else if(    parsecmp("and",info)    ) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj237=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        __result_obj__315 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__315;
    }
    __result_obj__316 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__316;
}

struct sNode* statment(struct sInfo* info){
void* __right_value798 = (void*)0;
struct sNode* node_631;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj238;
struct sNode* __result_obj__317;
    node_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj238=node_631,
    node_631=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_631),info));
    (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__317 = (struct sNode*)come_increment_ref_count(node_631);
    ((node_631) ? node_631 = come_decrement_ref_count(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__317;
}

char* get_none_generics_name(char* class_name){
char* p_632;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
char* __result_obj__318;
void* __right_value802 = (void*)0;
char* __result_obj__319;
    p_632=class_name;
    while(    *p_632    ) {
        if(        *p_632==36        ) {
            __result_obj__318 = (char*)come_increment_ref_count(((char*)(__right_value801=charp_substring(((char*)(__right_value800=__builtin_string(class_name))),0,p_632-class_name))));
            (__right_value800 = come_decrement_ref_count(__right_value800, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value801 = come_decrement_ref_count(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__318 = come_decrement_ref_count(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__318;
        }
        else {
            p_632++;
        }
    }
    __result_obj__319 = (char*)come_increment_ref_count(((char*)(__right_value802=__builtin_string(class_name))));
    (__right_value802 = come_decrement_ref_count(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__319;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct buffer* buf_633;
struct sClass* klass_634;
char* class_name_635;
int i_636;
void* __right_value805 = (void*)0;
struct sType* type_637;
void* __right_value806 = (void*)0;
char* type_name_638;
int i_639;
void* __right_value807 = (void*)0;
char* __result_obj__320;
    buf_633=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2620, "struct buffer*"))));
    klass_634=generics_type->mClass;
    class_name_635=klass_634->mName;
    buffer_append_str(buf_633,class_name_635);
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)>0    ) {
        buffer_append_char(buf_633,36);
        buffer_append_char(buf_633,list$1sType$ph_length(generics_type->mGenericsTypes)+48);
        for(        i_636=0        ;        i_636<list$1sType$ph_length(generics_type->mGenericsTypes)        ;        i_636++        ){
            type_637=((struct sType*)(__right_value805=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,i_636)));
            come_call_finalizer(sType_finalize, __right_value805, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_name_638=(char*)come_increment_ref_count(create_generics_name(type_637,info));
            buffer_append_str(buf_633,type_name_638);
            buffer_append_char(buf_633,36);
            for(            i_639=0            ;            i_639<type_637->mPointerNum            ;            i_639++            ){
                buffer_append_char(buf_633,112);
            }
            if(            type_637->mHeap            ) {
                buffer_append_str(buf_633,"h");
            }
            (type_name_638 = come_decrement_ref_count(type_name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__320 = (char*)come_increment_ref_count(((char*)(__right_value807=buffer_to_string(buf_633))));
    come_call_finalizer(buffer_finalize, buf_633, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value807 = come_decrement_ref_count(__right_value807, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__320;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_640;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct buffer* buf_641;
void* __right_value810 = (void*)0;
char* __dec_obj239;
void* __right_value811 = (void*)0;
char* __dec_obj240;
int i_642;
void* __right_value812 = (void*)0;
char* __dec_obj241;
void* __right_value813 = (void*)0;
char* __dec_obj242;
void* __right_value814 = (void*)0;
char* __dec_obj243;
int i_643;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
char* __result_obj__321;
struct_name_640 = (void*)0;
    buf_641=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2655, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj239=struct_name_640,
        struct_name_640=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_640,"_Bool")        ) {
            __dec_obj240=struct_name_640,
            struct_name_640=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_641,"$");
            }
            for(            i_642=0            ;            i_642<obj_type->mOriginalTypeNamePointerNum            ;            i_642++            ){
                buffer_append_str(buf_641,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj241=struct_name_640,
        struct_name_640=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_640,"_Bool")        ) {
            __dec_obj242=struct_name_640,
            struct_name_640=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj243=struct_name_640,
        struct_name_640=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_641,"$");
        }
        for(        i_643=0        ;        i_643<obj_type->mPointerNum        ;        i_643++        ){
            buffer_append_str(buf_641,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_641,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_641,"pa");
    }
    __result_obj__321 = (char*)come_increment_ref_count(((char*)(__right_value816=xsprintf("%s%s_%s",struct_name_640,((char*)(__right_value815=buffer_to_string(buf_641))),fun_name))));
    (struct_name_640 = come_decrement_ref_count(struct_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_641, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value815 = come_decrement_ref_count(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value816 = come_decrement_ref_count(__right_value816, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__321 = come_decrement_ref_count(__result_obj__321, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__321;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_644;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* buf_645;
void* __right_value819 = (void*)0;
char* __dec_obj244;
void* __right_value820 = (void*)0;
char* __dec_obj245;
void* __right_value821 = (void*)0;
char* __dec_obj246;
int i_646;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
char* __result_obj__322;
struct_name_644 = (void*)0;
    buf_645=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2702, "struct buffer*"))));
    if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj244=struct_name_644,
        struct_name_644=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_644,"_Bool")        ) {
            __dec_obj245=struct_name_644,
            struct_name_644=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj246=struct_name_644,
        struct_name_644=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_645,"$");
        }
        for(        i_646=0        ;        i_646<obj_type->mPointerNum        ;        i_646++        ){
            buffer_append_str(buf_645,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_645,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_645,"pa");
    }
    __result_obj__322 = (char*)come_increment_ref_count(((char*)(__right_value823=xsprintf("%s%s_%s",struct_name_644,((char*)(__right_value822=buffer_to_string(buf_645))),fun_name))));
    (struct_name_644 = come_decrement_ref_count(struct_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_645, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value822 = come_decrement_ref_count(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value823 = come_decrement_ref_count(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__322 = come_decrement_ref_count(__result_obj__322, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__322;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
char* struct_name_647;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct buffer* buf_648;
void* __right_value826 = (void*)0;
char* __dec_obj247;
void* __right_value827 = (void*)0;
char* __dec_obj248;
int i_649;
void* __right_value828 = (void*)0;
char* __dec_obj249;
void* __right_value829 = (void*)0;
char* __dec_obj250;
void* __right_value830 = (void*)0;
char* __dec_obj251;
int i_650;
void* __right_value831 = (void*)0;
int len_652;
void* __right_value832 = (void*)0;
char* __result_obj__323;
struct_name_647 = (void*)0;
    buf_648=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05call.c", 2734, "struct buffer*"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")    ) {
        __dec_obj247=struct_name_647,
        struct_name_647=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_647,"_Bool")        ) {
            __dec_obj248=struct_name_647,
            struct_name_647=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        !obj_type->mClass->mStruct        ) {
            if(            list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mOriginalTypeNamePointerNum>0            ) {
                buffer_append_str(buf_648,"$");
            }
            for(            i_649=0            ;            i_649<obj_type->mOriginalTypeNamePointerNum            ;            i_649++            ){
                buffer_append_str(buf_648,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct||obj_type->mClass->mProtocol    ) {
        __dec_obj249=struct_name_647,
        struct_name_647=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        string_operator_equals(struct_name_647,"_Bool")        ) {
            __dec_obj250=struct_name_647,
            struct_name_647=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj251=struct_name_647,
        struct_name_647=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        list$1sType$ph_length(obj_type->mGenericsTypes)>0&&obj_type->mPointerNum>0        ) {
            buffer_append_str(buf_648,"$");
        }
        for(        i_650=0        ;        i_650<obj_type->mPointerNum        ;        i_650++        ){
            buffer_append_str(buf_648,"p");
        }
    }
    if(    obj_type->mArrayPointerType    ) {
        buffer_append_str(buf_648,"a");
    }
    if(    !array_equal_pointer&&list$1sNode$ph_length(obj_type->mArrayNum)>0    ) {
        buffer_append_str(buf_648,"pa");
    }
    char none_method_name_651[charp_length(fun_name)+1];
    memset(&none_method_name_651, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_652=string_length(struct_name_647)+string_length(((char*)(__right_value831=buffer_to_string(buf_648))));
    (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    memcpy(none_method_name_651,fun_name+len_652+1,charp_length(fun_name)-len_652-1);
    none_method_name_651[charp_length(fun_name)-len_652-1]=0;
    __result_obj__323 = (char*)come_increment_ref_count(((char*)(__right_value832=__builtin_string(none_method_name_651))));
    (struct_name_647 = come_decrement_ref_count(struct_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_648, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value832 = come_decrement_ref_count(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__323 = come_decrement_ref_count(__result_obj__323, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__323;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value833 = (void*)0;
char* struct_name_653;
void* __right_value834 = (void*)0;
char* __dec_obj252;
void* __right_value835 = (void*)0;
char* __result_obj__324;
    struct_name_653=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    if(    string_operator_equals(struct_name_653,"_Bool")    ) {
        __dec_obj252=struct_name_653,
        struct_name_653=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__324 = (char*)come_increment_ref_count(((char*)(__right_value835=xsprintf("%s_%s",struct_name_653,fun_name))));
    (struct_name_653 = come_decrement_ref_count(struct_name_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value835 = come_decrement_ref_count(__right_value835, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__324 = come_decrement_ref_count(__result_obj__324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__324;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value836 = (void*)0;
struct sNode* __result_obj__325;
    ((struct tuple2$2int$bool$*)(__right_value836=err_msg(info,"unexpected word(%s)(2)",buf)));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value836, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__325 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__325;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_654;
char* p_655;
int sline_656;
_Bool err_flag_657;
void* __right_value839 = (void*)0;
char* label_658;
void* __right_value840 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
_Bool no_comma_659;
_Bool in_fun_param_660;
void* __right_value841 = (void*)0;
struct sNode* node_661;
void* __right_value842 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value851 = (void*)0;
struct sNode* __result_obj__328;
struct sNode* __result_obj__329;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_654=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "05call.c", 2812, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_655=info->p;
            sline_656=info->sline;
            err_flag_657=(_Bool)0;
            label_658=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj253=label_658,
                label_658=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag_657=(_Bool)1;
            }
            if(            err_flag_657==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj254=label_658,
                label_658=((void*)0);
                __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p_655;
                info->sline=sline_656;
            }
            no_comma_659=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_660=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_661=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj255=node_661,
            node_661=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_661),info));
            (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->no_comma=no_comma_659;
            info->in_fun_param=in_fun_param_660;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_654,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "05call.c", 2855, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_658),(struct sNode*)come_increment_ref_count(node_661))));
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_658 = come_decrement_ref_count(label_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_661) ? node_661 = come_decrement_ref_count(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label_658 = come_decrement_ref_count(label_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_661) ? node_661 = come_decrement_ref_count(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05call.c", 2873, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value846=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2873, "struct sLambdaCall*")),(struct sNode*)come_increment_ref_count(node),params_654,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__328 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value851=_inf_value20)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_654, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value846, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value851) ? __right_value851 = come_decrement_ref_count(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__328;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_654, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __result_obj__329 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__329;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
struct sLambdaCall* __result_obj__326;
void* __right_value847 = (void*)0;
struct sLambdaCall* result_662;
void* __right_value848 = (void*)0;
char* __dec_obj256;
void* __right_value849 = (void*)0;
struct sNode* __dec_obj257;
void* __right_value850 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj258;
struct sLambdaCall* __result_obj__327;
    if(    self==(void*)0    ) {
        __result_obj__326 = (void*)0;
        return __result_obj__326;
    }
    result_662=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc_v2(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*"));
    if(    self!=((void*)0)    ) {
        result_662->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj256=result_662->sname,
        result_662->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaCall_clone", 5, "char*"));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_662->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)    ) {
        __dec_obj257=result_662->node,
        result_662->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj258=result_662->params,
        result_662->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj258,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__327 = result_662;
    come_call_finalizer(sLambdaCall_finalize, result_662, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__327;
}

