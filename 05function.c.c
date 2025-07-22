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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
char* get_none_generics_name(char* class_name);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSemicolonNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__1 = (struct sSemicolonNode*)come_increment_ref_count(self);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string("sSemicolonNode"))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value2 = (void*)0;
struct sLambdaNode* __result_obj__3;
    ((struct sNodeBase*)(__right_value2=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value2, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mFun=fun;
    __result_obj__3 = (struct sLambdaNode*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLambdaNode_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value3 = (void*)0;
char* __result_obj__4;
    __result_obj__4 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string("sLambdaNode"))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__4 = come_decrement_ref_count(__result_obj__4, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__4;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_8;
int block_level_9;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct CVALUE* come_value_10;
void* __right_value6 = (void*)0;
char* __dec_obj1;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
_Bool __result_obj__22;
    come_fun_8=info->come_fun;
    info->come_fun=self->mFun;
    block_level_9=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock    ) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_9;
    come_value_10=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj1=come_value_10->c_value,
    come_value_10->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj25=come_value_10->type,
    come_value_10->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_10->var=((void*)0);
    add_come_last_code(info,"%s",come_value_10->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_10));
    info->come_fun=come_fun_8;
    __result_obj__22 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
void* __right_value7 = (void*)0;
struct sType* result_17;
void* __right_value8 = (void*)0;
struct sType* __dec_obj2;
void* __right_value9 = (void*)0;
struct sType* __dec_obj3;
void* __right_value17 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value18 = (void*)0;
struct sType* __dec_obj8;
void* __right_value20 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value21 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value22 = (void*)0;
char* __dec_obj11;
void* __right_value23 = (void*)0;
char* __dec_obj12;
void* __right_value24 = (void*)0;
char* __dec_obj13;
void* __right_value32 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value33 = (void*)0;
char* __dec_obj18;
void* __right_value34 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value42 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value43 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__20;
    if(    self==(void*)0    ) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__5;
    }
    result_17=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_17->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_17->mOriginalLoadVarType,
        result_17->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_17->mChannelType,
        result_17->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_17->mGenericsTypes,
        result_17->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_17->mNoSolvedGenericsType,
        result_17->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_17->mSizeNum,
        result_17->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_17->mAlignas,
        result_17->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_17->mTupleName,
        result_17->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_17->mAttribute,
        result_17->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_17->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_17->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_17->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_17->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_17->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_17->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_17->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_17->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_17->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_17->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_17->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_17->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_17->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_17->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_17->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_17->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_17->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_17->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_17->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_17->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_17->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_17->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_17->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_17->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_17->mAsmName,
        result_17->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_17->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_17->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_17->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_17->mArrayNum,
        result_17->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_17->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_17->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_17->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_17->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_17->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_17->mOriginalTypeName,
        result_17->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_17->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_17->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_17->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_17->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_17->mParamTypes,
        result_17->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_17->mParamNames,
        result_17->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_17->mResultType,
        result_17->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_17->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_17->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result_17);
    come_call_finalizer(sType_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
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
struct list_item$1sType$ph* it_11;
struct list_item$1sType$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_13;
struct list_item$1sNode$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_18;
struct list_item$1sType$ph* it_19;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)    ) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__6;
    }
    result_18=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_19=self->head;
    while(    it_19!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_18,(struct sType*)come_increment_ref_count(sType_clone(it_19->item)));
        }
        else {
            list$1sType$ph_add(result_18,(struct sType*)come_increment_ref_count(sType_clone(it_19->item)));
        }
        it_19=it_19->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result_18);
    come_call_finalizer(list$1sType$ph$p_finalize, result_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_22;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0    ) {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        __dec_obj4=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1    ) {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj5=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj6=litem_22->item,
        litem_22->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__8 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_23;
struct list_item$1sType$ph* prev_it_24;
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        prev_it_24=it_23;
        it_23=it_23->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value19 = (void*)0;
struct sNode* result_25;
struct sNode* __result_obj__11;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__10;
    }
    result_25=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_25->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_25->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_25->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_25->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_25->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_25->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_25->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_25->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_25->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_25->no_mutex=self->no_mutex;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result_25);
    ((result_25) ? result_25 = come_decrement_ref_count(result_25, ((struct sNode*)result_25)->finalize, ((struct sNode*)result_25)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* result_26;
struct list_item$1sNode$ph* it_27;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_26=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_27=self->head;
    while(    it_27!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_26,(struct sNode*)come_increment_ref_count(sNode_clone(it_27->item)));
        }
        else {
            list$1sNode$ph_add(result_26,(struct sNode*)come_increment_ref_count(sNode_clone(it_27->item)));
        }
        it_27=it_27->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result_26);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj14;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_30;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        __dec_obj14=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1    ) {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        __dec_obj15=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        __dec_obj16=litem_30->item,
        litem_30->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_31;
struct list_item$1sNode$ph* prev_it_32;
    it_31=self->head;
    while(    it_31!=((void*)0)    ) {
        prev_it_32=it_31;
        it_31=it_31->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* result_33;
struct list_item$1char$ph* it_34;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result_33=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_34=self->head;
    while(    it_34!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_33,(char*)come_increment_ref_count((char*)come_memdup(it_34->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_33,(char*)come_increment_ref_count((char*)come_memdup(it_34->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_34=it_34->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result_33);
    come_call_finalizer(list$1char$ph$p_finalize, result_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj20;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_37;
char* __dec_obj22;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_35->prev=((void*)0);
        litem_35->next=((void*)0);
        __dec_obj20=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head=litem_35;
    }
    else if(    self->len==1    ) {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_36->prev=self->head;
        litem_36->next=((void*)0);
        __dec_obj21=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_36;
        self->head->next=litem_36;
    }
    else {
        litem_37=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_37->prev=self->tail;
        litem_37->next=((void*)0);
        __dec_obj22=litem_37->item,
        litem_37->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_37;
        self->tail=litem_37;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_38;
struct list_item$1char$ph* prev_it_39;
    it_38=self->head;
    while(    it_38!=((void*)0)    ) {
        prev_it_39=it_38;
        it_38=it_38->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value45 = (void*)0;
struct list_item$1CVALUE$ph* litem_40;
struct CVALUE* __dec_obj26;
void* __right_value46 = (void*)0;
struct list_item$1CVALUE$ph* litem_41;
struct CVALUE* __dec_obj27;
void* __right_value47 = (void*)0;
struct list_item$1CVALUE$ph* litem_42;
struct CVALUE* __dec_obj28;
struct list$1CVALUE$ph* __result_obj__21;
    if(    self->len==0    ) {
        litem_40=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value45=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        __dec_obj26=litem_40->item,
        litem_40->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1    ) {
        litem_41=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value46=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj27=litem_41->item,
        litem_41->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value47=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj28=litem_42->item,
        litem_42->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result_obj__21 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__21;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value48 = (void*)0;
struct sFun* __dec_obj29;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value48=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value49 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value49=__builtin_string("sFunNode"))));
    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_43;
int block_level_44;
void* __right_value50 = (void*)0;
    come_fun_43=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock    ) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_44=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_44;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value50=xsprintf("come_heap_final();\n"))));
            (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    info->come_fun=come_fun_43;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sBlock* result_45;
int sline_top_46;
int block_level_47;
char* p_saved_48;
int sline_saved_49;
char* sname_saved_50;
void* __right_value53 = (void*)0;
char* __dec_obj30;
char* __dec_obj31;
struct map$2char$phchar$ph* __dec_obj32;
char* p_53;
int sline_54;
void* __right_value54 = (void*)0;
char* sname_55;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
char* module_name_56;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$ph* params_57;
void* __right_value59 = (void*)0;
char* word_58;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
char* __dec_obj33;
void* __right_value63 = (void*)0;
char* __dec_obj34;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value67 = (void*)0;
struct sBlock* __result_obj__33;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct sClassModule* module_65;
void* __right_value71 = (void*)0;
struct sBlock* __result_obj__34;
void* __right_value72 = (void*)0;
void* __right_value78 = (void*)0;
struct map$2char$phchar$ph* __dec_obj36;
int i_71;
struct list$1char$ph* o2_saved_72;
char* it_75;
void* __right_value79 = (void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
char* __dec_obj40;
void* __right_value94 = (void*)0;
struct sNode* node_124;
void* __right_value95 = (void*)0;
char* __dec_obj41;
void* __right_value96 = (void*)0;
struct sBlock* __result_obj__63;
_Bool omit_semicolon_128;
void* __right_value100 = (void*)0;
char* __dec_obj45;
char* head_143;
void* __right_value101 = (void*)0;
struct sNode* value_144;
char* tail_145;
void* __right_value102 = (void*)0;
struct sNode* __dec_obj46;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct sNode* node_147;
void* __right_value105 = (void*)0;
char* __dec_obj47;
struct sNode* node_148;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value110 = (void*)0;
struct sNode* __dec_obj49;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value112 = (void*)0;
struct sBlock* __result_obj__70;
_Bool omit_semicolon_150;
char* p_151;
char* head_152;
void* __right_value113 = (void*)0;
char* source_153;
void* __right_value114 = (void*)0;
struct sNode* node_154;
void* __right_value115 = (void*)0;
struct sBlock* __result_obj__71;
struct sBlock* __result_obj__72;
node_148 = (void*)0;
    result_45=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
    sline_top_46=info->sline_top;
    info->sline_top=info->sline;
    block_level_47=info->block_level;
    if(    !no_block_level    ) {
        info->block_level++;
    }
    if(    *info->p==123    ) {
        p_saved_48=((void*)0);
        sline_saved_49=0;
        sname_saved_50=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            p_saved_48            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved_48;
                    info->sline=sline_saved_49;
                    __dec_obj30=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_50));
                    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved_48=((void*)0);
                    sline_saved_49=0;
                    __dec_obj31=sname_saved_50,
                    sname_saved_50=((void*)0);
                    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj32=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_53=info->p;
            sline_54=info->sline;
            sname_55=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123            ) {
                info->sline_top=sline_54;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0            ) {
                ((char*)(__right_value55=parse_word(info)));
                (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name_56=(char*)come_increment_ref_count(parse_word(info));
                params_57=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        word_58=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_57,(char*)come_increment_ref_count(word_58));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value60=err_msg(info,"invalid source end")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_58 = come_decrement_ref_count(word_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        (word_58 = come_decrement_ref_count(word_58, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_48=info->p;
                sline_saved_49=info->sline;
                __dec_obj33=sname_saved_50,
                sname_saved_50=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj34=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_56));
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(                (_condtional_value_X1=(((struct sClassModule*)(__right_value66=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value65=__builtin_string(module_name_56))))))==((void*)0))),                (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                come_call_finalizer(sClassModule_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X1                ) {
                    ((struct tuple2$2int$bool$*)(__right_value67=err_msg(info,"module not found")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_56 = come_decrement_ref_count(module_name_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_50 = come_decrement_ref_count(sname_saved_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__33;
                }
                module_65=((struct sClassModule*)(__right_value70=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value69=__builtin_string(module_name_56))))));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                list$1char$ph_length(module_65->mParams)!=list$1char$ph_length(params_57)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value71=err_msg(info,"invalid parametor number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_56 = come_decrement_ref_count(module_name_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_50 = come_decrement_ref_count(sname_saved_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__34;
                }
                __dec_obj36=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i_71=0;
                for(                o2_saved_72=(struct list$1char$ph*)come_increment_ref_count((module_65->mParams)),it_75=list$1char$ph_begin((o2_saved_72))                ;                !list$1char$ph_end((o2_saved_72))                ;                it_75=list$1char$ph_next((o2_saved_72))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_75)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value91=list$1char$ph_operator_load_element(params_57,i_71))))));
                    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i_71++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module_65->mText;
                info->sline=module_65->mSLine;
                __dec_obj40=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_65->mSName));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name_56 = come_decrement_ref_count(module_name_56, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            node_124=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj41=info->sname,
            info->sname=(char*)come_increment_ref_count(node_124->sname(node_124->_protocol_obj));
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=node_124->sline(node_124->_protocol_obj);
            if(            node_124==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value96=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
                (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (sname_saved_50 = come_decrement_ref_count(sname_saved_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__63;
            }
            list$1sNode$ph_push_back(result_45->mNodes,(struct sNode*)come_increment_ref_count(node_124));
            parse_sharp_v5(info);
            if(            node_124->terminated(node_124->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_128=(_Bool)1;
            if(            node_124->terminated(node_124->_protocol_obj)            ) {
                omit_semicolon_128=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_128=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                result_45->mOmitSemicolon=omit_semicolon_128;
                if(                omit_semicolon_128&&in_function                ) {
                    list$1sNode$ph_delete(result_45->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_53;
                    info->sline=sline_54;
                    __dec_obj45=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_55));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    head_143=info->p;
                    value_144=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_145=info->p;
                    __dec_obj46=value_144,
                    value_144=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_144),info));
                    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    char buf_146[tail_145-head_143+1];
                    memset(&buf_146, 0, sizeof(char)                    *(tail_145-head_143+1)                    );
                    memcpy(buf_146,head_143,tail_145-head_143);
                    buf_146[tail_145-head_143]=0;
                    expected_next_character(125,info);
                    node_147=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_144),(char*)come_increment_ref_count(__builtin_string(buf_146)),info));
                    list$1sNode$ph_push_back(result_45->mNodes,(struct sNode*)come_increment_ref_count(node_147));
                    ((value_144) ? value_144 = come_decrement_ref_count(value_144, ((struct sNode*)value_144)->finalize, ((struct sNode*)value_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_147) ? node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                    ((value_144) ? value_144 = come_decrement_ref_count(value_144, ((struct sNode*)value_144)->finalize, ((struct sNode*)value_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_147) ? node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
            }
            (sname_55 = come_decrement_ref_count(sname_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_124) ? node_124 = come_decrement_ref_count(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        if(        p_saved_48        ) {
            if(            info->p==0            ) {
                info->p=p_saved_48;
                info->sline=sline_saved_49;
                __dec_obj47=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_50));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved_48=((void*)0);
                sline_saved_49=0;
            }
        }
        (sname_saved_50 = come_decrement_ref_count(sname_saved_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value107=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj49=node_148,
            node_148=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1sNode$ph_push_back(result_45->mNodes,(struct sNode*)come_increment_ref_count(node_148));
        }
        else {
            __dec_obj50=node_148,
            node_148=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_148==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value112=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
                ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            parse_sharp_v5(info);
            if(            node_148->terminated(node_148->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_150=(_Bool)1;
            if(            node_148->terminated(node_148->_protocol_obj)            ) {
                omit_semicolon_150=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_150=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_45->mOmitSemicolon=omit_semicolon_150;
            list$1sNode$ph_push_back(result_45->mNodes,(struct sNode*)come_increment_ref_count(node_148));
        }
        ((node_148) ? node_148 = come_decrement_ref_count(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    return_self_at_last    ) {
        p_151=info->p;
        head_152=info->head;
        source_153=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_153;
        info->head=source_153;
        node_154=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_154==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value115=err_msg(info,"Invalid expression")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value115, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
            (source_153 = come_decrement_ref_count(source_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__71;
        }
        list$1sNode$ph_push_back(result_45->mNodes,(struct sNode*)come_increment_ref_count(node_154));
        info->p=p_151;
        info->head=head_152;
        (source_153 = come_decrement_ref_count(source_153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_154) ? node_154 = come_decrement_ref_count(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->block_level=block_level_47;
    __result_obj__72 = (struct sBlock*)come_increment_ref_count(result_45);
    come_call_finalizer(sBlock_finalize, result_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_51;
int i_52;
    for(    i_51=0    ;    i_51<self->size    ;    i_51++    ){
        if(        self->item_existance[i_51]        ) {
            if(            1            ) {
                (self->items[i_51] = come_decrement_ref_count(self->items[i_51], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_52=0    ;    i_52<self->size    ;    i_52++    ){
        if(        self->item_existance[i_52]        ) {
            if(            1            ) {
                (self->keys[i_52] = come_decrement_ref_count(self->keys[i_52], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_59;
unsigned int hash_60;
unsigned int it_61;
struct sClassModule* __result_obj__25;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value_59 = (void*)0;
    memset(&default_value_59,0,sizeof(struct sClassModule*));
    hash_60=string_get_hash_key(((char*)key))%self->size;
    it_61=hash_60;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_61]        ) {
            if(            string_equals(self->keys[it_61],key)            ) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it_61]);
                come_call_finalizer(sClassModule_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_61++;
            if(            it_61>=self->size            ) {
                it_61=0;
            }
            else if(            it_61==hash_60            ) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value_59);
                come_call_finalizer(sClassModule_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value_59);
            come_call_finalizer(sClassModule_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value_59);
    come_call_finalizer(sClassModule_finalize, default_value_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_62;
unsigned int hash_63;
unsigned int it_64;
struct sClassModule* __result_obj__29;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value_62 = (void*)0;
    memset(&default_value_62,0,sizeof(struct sClassModule*));
    hash_63=string_get_hash_key(((char*)key))%self->size;
    it_64=hash_63;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_64]        ) {
            if(            string_equals(self->keys[it_64],key)            ) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it_64]);
                come_call_finalizer(sClassModule_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__29;
            }
            it_64++;
            if(            it_64>=self->size            ) {
                it_64=0;
            }
            else if(            it_64==hash_63            ) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value_62);
                come_call_finalizer(sClassModule_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value_62);
            come_call_finalizer(sClassModule_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value_62);
    come_call_finalizer(sClassModule_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
int i_66;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$ph* __dec_obj35;
struct map$2char$phchar$ph* __result_obj__36;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value73=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value74=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value75=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_66=0    ;    i_66<128    ;    i_66++    ){
        self->item_existance[i_66]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj35=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__36 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_67;
struct list_item$1char$p* prev_it_68;
    it_67=self->head;
    while(    it_67!=((void*)0)    ) {
        prev_it_68=it_67;
        it_67=it_67->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_69;
int i_70;
    for(    i_69=0    ;    i_69<self->size    ;    i_69++    ){
        if(        self->item_existance[i_69]        ) {
            if(            1            ) {
                (self->items[i_69] = come_decrement_ref_count(self->items[i_69], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_70=0    ;    i_70<self->size    ;    i_70++    ){
        if(        self->item_existance[i_70]        ) {
            if(            1            ) {
                (self->keys[i_70] = come_decrement_ref_count(self->keys[i_70], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_73;
char* __result_obj__37;
char* __result_obj__38;
char* result_74;
char* __result_obj__39;
result_73 = (void*)0;
result_74 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_73,0,sizeof(char*));
        __result_obj__37 = result_73;
        return __result_obj__37;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_74,0,sizeof(char*));
    __result_obj__39 = result_74;
    return __result_obj__39;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_76;
char* __result_obj__40;
char* __result_obj__41;
char* result_77;
char* __result_obj__42;
result_76 = (void*)0;
result_77 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_76,0,sizeof(char*));
        __result_obj__40 = result_76;
        return __result_obj__40;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_77,0,sizeof(char*));
    __result_obj__42 = result_77;
    return __result_obj__42;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_95;
unsigned int it_96;
_Bool same_key_exist_113;
char* it2_114;
struct map$2char$phchar$ph* __result_obj__58;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_95=string_get_hash_key(((char*)key))%self->size;
    it_96=hash_95;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_96]        ) {
            if(            string_equals(self->keys[it_96],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_96]);
                    (self->keys[it_96] = come_decrement_ref_count(self->keys[it_96], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_96]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_96]);
                    self->keys[it_96]=key;
                }
                if(                1                ) {
                    (self->items[it_96] = come_decrement_ref_count(self->items[it_96], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_96]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_96]=item;
                }
                break;
            }
            it_96++;
            if(            it_96>=self->size            ) {
                it_96=0;
            }
            else if(            it_96==hash_95            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_96]=(_Bool)1;
            if(            1            ) {
                self->keys[it_96]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_96]=key;
            }
            if(            1            ) {
                self->items[it_96]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_96]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_113=(_Bool)0;
    for(    it2_114=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_114=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_114,key)        ) {
            same_key_exist_113=(_Bool)1;
        }
    }
    if(    !same_key_exist_113    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__58 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_78;
void* __right_value80 = (void*)0;
char** keys_79;
void* __right_value81 = (void*)0;
char** items_80;
void* __right_value82 = (void*)0;
_Bool* item_existance_81;
int len_82;
char* it_85;
char* default_value_88;
void* __right_value83 = (void*)0;
char* it2_89;
unsigned int hash_92;
int n_93;
char* default_value_94;
void* __right_value84 = (void*)0;
default_value_88 = (void*)0;
default_value_94 = (void*)0;
    size_78=self->size*10;
    keys_79=(char**)come_increment_ref_count(((char**)(__right_value80=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_78)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_80=(char**)come_increment_ref_count(((char**)(__right_value81=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_78)), "/usr/local/include/comelang.h", 2164, "char**"))));
    item_existance_81=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value82=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_78)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_82=0;
    for(    it_85=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_85=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_88,0,sizeof(char*));
        it2_89=((char*)(__right_value83=map$2char$phchar$ph_at(self,it_85,(char*)come_increment_ref_count(default_value_88))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_92=string_get_hash_key(((char*)it_85))%size_78;
        n_93=hash_92;
        while(        (_Bool)1        ) {
            if(            item_existance_81[n_93]            ) {
                n_93++;
                if(                n_93>=size_78                ) {
                    n_93=0;
                }
                else if(                n_93==hash_92                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_81[n_93]=(_Bool)1;
                keys_79[n_93]=it_85;
                items_80[n_93]=((char*)(__right_value84=map$2char$phchar$ph_at(self,it_85,(char*)come_increment_ref_count(default_value_94))));
                (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_82++;
                (default_value_94 = come_decrement_ref_count(default_value_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_94 = come_decrement_ref_count(default_value_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_88 = come_decrement_ref_count(default_value_88, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_79;
    self->items=items_80;
    self->item_existance=item_existance_81;
    self->size=size_78;
    self->len=len_82;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_83;
char* __result_obj__43;
char* __result_obj__44;
char* result_84;
char* __result_obj__45;
result_83 = (void*)0;
result_84 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_83,0,sizeof(char*));
        __result_obj__43 = result_83;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_84,0,sizeof(char*));
    __result_obj__45 = result_84;
    return __result_obj__45;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_86;
char* __result_obj__46;
char* __result_obj__47;
char* result_87;
char* __result_obj__48;
result_86 = (void*)0;
result_87 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_86,0,sizeof(char*));
        __result_obj__46 = result_86;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_87,0,sizeof(char*));
    __result_obj__48 = result_87;
    return __result_obj__48;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_90;
unsigned int it_91;
char* __result_obj__49;
char* __result_obj__50;
char* __result_obj__51;
char* __result_obj__52;
    hash_90=string_get_hash_key(((char*)key))%self->size;
    it_91=hash_90;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_91]        ) {
            if(            string_equals(self->keys[it_91],key)            ) {
                __result_obj__49 = (char*)come_increment_ref_count(self->items[it_91]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__49;
            }
            it_91++;
            if(            it_91>=self->size            ) {
                it_91=0;
            }
            else if(            it_91==hash_90            ) {
                __result_obj__50 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__50;
            }
        }
        else {
            __result_obj__51 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__51;
        }
    }
    __result_obj__52 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_97;
struct list_item$1char$ph* it_98;
struct list$1char$ph* __result_obj__56;
    it2_97=0;
    it_98=self->head;
    while(    it_98!=((void*)0)    ) {
        if(        string_equals(it_98->item,item)        ) {
            list$1char$ph_delete(self,it2_97,it2_97+1);
            break;
        }
        it2_97++;
        it_98=it_98->next;
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_99;
struct list$1char$ph* __result_obj__53;
struct list_item$1char$ph* it_102;
int i_103;
struct list_item$1char$ph* prev_it_104;
struct list_item$1char$ph* it_105;
int i_106;
struct list_item$1char$ph* prev_it_107;
struct list_item$1char$ph* it_108;
struct list_item$1char$ph* head_prev_it_109;
struct list_item$1char$ph* tail_it_110;
int i_111;
struct list_item$1char$ph* prev_it_112;
struct list$1char$ph* __result_obj__55;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_99=tail;
        tail=head;
        head=tmp_99;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_102=self->head;
        i_103=0;
        while(        it_102!=((void*)0)        ) {
            if(            i_103<tail            ) {
                prev_it_104=it_102;
                it_102=it_102->next;
                i_103++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_103==tail            ) {
                self->head=it_102;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_102=it_102->next;
                i_103++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_105=self->head;
        i_106=0;
        while(        it_105!=((void*)0)        ) {
            if(            i_106==head            ) {
                self->tail=it_105->prev;
                self->tail->next=((void*)0);
            }
            if(            i_106>=head            ) {
                prev_it_107=it_105;
                it_105=it_105->next;
                i_106++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_105=it_105->next;
                i_106++;
            }
        }
    }
    else {
        it_108=self->head;
        head_prev_it_109=((void*)0);
        tail_it_110=((void*)0);
        i_111=0;
        while(        it_108!=((void*)0)        ) {
            if(            i_111==head            ) {
                head_prev_it_109=it_108->prev;
            }
            if(            i_111==tail            ) {
                tail_it_110=it_108;
            }
            if(            i_111>=head&&i_111<tail            ) {
                prev_it_112=it_108;
                it_108=it_108->next;
                i_111++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_108=it_108->next;
                i_111++;
            }
        }
        if(        head_prev_it_109!=((void*)0)        ) {
            head_prev_it_109->next=tail_it_110;
        }
        if(        tail_it_110!=((void*)0)        ) {
            tail_it_110->prev=head_prev_it_109;
        }
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_100;
struct list_item$1char$ph* prev_it_101;
struct list$1char$ph* __result_obj__54;
    it_100=self->head;
    while(    it_100!=((void*)0)    ) {
        prev_it_101=it_100;
        it_100=it_100->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value85 = (void*)0;
struct list_item$1char$ph* litem_115;
char* __dec_obj37;
void* __right_value86 = (void*)0;
struct list_item$1char$ph* litem_116;
char* __dec_obj38;
void* __right_value87 = (void*)0;
struct list_item$1char$ph* litem_117;
char* __dec_obj39;
struct list$1char$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_115=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value85=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        __dec_obj37=litem_115->item,
        litem_115->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_115;
        self->head=litem_115;
    }
    else if(    self->len==1    ) {
        litem_116=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value86=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_116->prev=self->head;
        litem_116->next=((void*)0);
        __dec_obj38=litem_116->item,
        litem_116->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_116;
        self->head->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value87=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_117->prev=self->tail;
        litem_117->next=((void*)0);
        __dec_obj39=litem_117->item,
        litem_117->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_117;
        self->tail=litem_117;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_118;
int i_119;
char* __result_obj__59;
char* default_value_120;
char* __result_obj__60;
default_value_120 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_118=self->head;
    i_119=0;
    while(    it_118!=((void*)0)    ) {
        if(        position==i_119        ) {
            __result_obj__59 = (char*)come_increment_ref_count(it_118->item);
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__59;
        }
        it_118=it_118->next;
        i_119++;
    }
    memset(&default_value_120,0,sizeof(char*));
    __result_obj__60 = (char*)come_increment_ref_count(default_value_120);
    (default_value_120 = come_decrement_ref_count(default_value_120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_121;
int i_122;
char* __result_obj__61;
char* default_value_123;
char* __result_obj__62;
default_value_123 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_121=self->head;
    i_122=0;
    while(    it_121!=((void*)0)    ) {
        if(        position==i_122        ) {
            __result_obj__61 = (char*)come_increment_ref_count(it_121->item);
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
        it_121=it_121->next;
        i_122++;
    }
    memset(&default_value_123,0,sizeof(char*));
    __result_obj__62 = (char*)come_increment_ref_count(default_value_123);
    (default_value_123 = come_decrement_ref_count(default_value_123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value97 = (void*)0;
struct list_item$1sNode$ph* litem_125;
struct sNode* __dec_obj42;
void* __right_value98 = (void*)0;
struct list_item$1sNode$ph* litem_126;
struct sNode* __dec_obj43;
void* __right_value99 = (void*)0;
struct list_item$1sNode$ph* litem_127;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__64;
    if(    self->len==0    ) {
        litem_125=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value97=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sNode$ph*"))));
        litem_125->prev=((void*)0);
        litem_125->next=((void*)0);
        __dec_obj42=litem_125->item,
        litem_125->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_125;
        self->head=litem_125;
    }
    else if(    self->len==1    ) {
        litem_126=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value98=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sNode$ph*"))));
        litem_126->prev=self->head;
        litem_126->next=((void*)0);
        __dec_obj43=litem_126->item,
        litem_126->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_126;
        self->head->next=litem_126;
    }
    else {
        litem_127=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value99=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sNode$ph*"))));
        litem_127->prev=self->tail;
        litem_127->next=((void*)0);
        __dec_obj44=litem_127->item,
        litem_127->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_127;
        self->tail=litem_127;
    }
    self->len++;
    __result_obj__64 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_129;
struct list$1sNode$ph* __result_obj__65;
struct list_item$1sNode$ph* it_132;
int i_133;
struct list_item$1sNode$ph* prev_it_134;
struct list_item$1sNode$ph* it_135;
int i_136;
struct list_item$1sNode$ph* prev_it_137;
struct list_item$1sNode$ph* it_138;
struct list_item$1sNode$ph* head_prev_it_139;
struct list_item$1sNode$ph* tail_it_140;
int i_141;
struct list_item$1sNode$ph* prev_it_142;
struct list$1sNode$ph* __result_obj__67;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_129=tail;
        tail=head;
        head=tmp_129;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__65 = self;
        return __result_obj__65;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_132=self->head;
        i_133=0;
        while(        it_132!=((void*)0)        ) {
            if(            i_133<tail            ) {
                prev_it_134=it_132;
                it_132=it_132->next;
                i_133++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_133==tail            ) {
                self->head=it_132;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_132=it_132->next;
                i_133++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_135=self->head;
        i_136=0;
        while(        it_135!=((void*)0)        ) {
            if(            i_136==head            ) {
                self->tail=it_135->prev;
                self->tail->next=((void*)0);
            }
            if(            i_136>=head            ) {
                prev_it_137=it_135;
                it_135=it_135->next;
                i_136++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_135=it_135->next;
                i_136++;
            }
        }
    }
    else {
        it_138=self->head;
        head_prev_it_139=((void*)0);
        tail_it_140=((void*)0);
        i_141=0;
        while(        it_138!=((void*)0)        ) {
            if(            i_141==head            ) {
                head_prev_it_139=it_138->prev;
            }
            if(            i_141==tail            ) {
                tail_it_140=it_138;
            }
            if(            i_141>=head&&i_141<tail            ) {
                prev_it_142=it_138;
                it_138=it_138->next;
                i_141++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_138=it_138->next;
                i_141++;
            }
        }
        if(        head_prev_it_139!=((void*)0)        ) {
            head_prev_it_139->next=tail_it_140;
        }
        if(        tail_it_140!=((void*)0)        ) {
            tail_it_140->prev=head_prev_it_139;
        }
    }
    __result_obj__67 = self;
    return __result_obj__67;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* prev_it_131;
struct list$1sNode$ph* __result_obj__66;
    it_130=self->head;
    while(    it_130!=((void*)0)    ) {
        prev_it_131=it_130;
        it_130=it_130->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__68;
void* __right_value108 = (void*)0;
struct sSemicolonNode* result_149;
void* __right_value109 = (void*)0;
char* __dec_obj48;
struct sSemicolonNode* __result_obj__69;
    if(    self==(void*)0    ) {
        __result_obj__68 = (void*)0;
        return __result_obj__68;
    }
    result_149=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)    ) {
        result_149->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj48=result_149->sname,
        result_149->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_149->sline_real=self->sline_real;
    }
    __result_obj__69 = result_149;
    come_call_finalizer(sSemicolonNode_finalize, result_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_155;
struct sVarTable* old_table_156;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct sVarTable* __dec_obj51;
struct sVarTable* current_loop_vtable_157;
int i_158;
struct list$1char$ph* o2_saved_159;
char* name_160;
void* __right_value118 = (void*)0;
struct sType* type_161;
void* __right_value119 = (void*)0;
int block_level_168;
int i_169;
struct list$1sNode$ph* o2_saved_170;
struct sNode* node_173;
struct list$1sRightValueObject$ph* right_value_objects_176;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
int stack_num_before_181;
int sline_182;
void* __right_value122 = (void*)0;
char* sname_183;
void* __right_value123 = (void*)0;
char* __dec_obj55;
_Bool interrupts_184;
_Bool Value_185;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_186;
void* __right_value130 = (void*)0;
struct CVALUE* come_value2_187;
void* __right_value131 = (void*)0;
char* __dec_obj60;
void* __right_value132 = (void*)0;
struct CVALUE* come_value2_189;
struct sVar* var__190;
void* __right_value133 = (void*)0;
struct CVALUE* come_value3_191;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sType* __dec_obj61;
void* __right_value136 = (void*)0;
char* c_value_192;
void* __right_value137 = (void*)0;
char* __dec_obj62;
void* __right_value138 = (void*)0;
char* __dec_obj63;
void* __right_value139 = (void*)0;
char* __dec_obj64;
_Bool Value_193;
void* __right_value140 = (void*)0;
char* __dec_obj65;
struct list$1sRightValueObject$ph* __dec_obj66;
void* __if_result__0_196 = (void*)0;
struct list$1sVar$ph* o2_saved_197;
struct sVar* it_200;
void* __right_value141 = (void*)0;
struct list$1sVar$ph* __dec_obj67;
memset(&i_158, 0, sizeof(int));
memset(&i_169, 0, sizeof(int));
    if(    info->output_header_file    ) {
        return 0;
    }
    inhibits_output_code_155=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_156=info->lv_table;
    if(    !no_var_table    ) {
        __dec_obj51=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table_156));
        come_call_finalizer(sVarTable_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_157=info->current_loop_vtable;
    if(    loop_block    ) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names    ) {
        for(        o2_saved_159=(param_names),name_160=list$1char$ph_begin((o2_saved_159))        ;        !list$1char$ph_end((o2_saved_159))        ;        name_160=list$1char$ph_next((o2_saved_159))        ){
            type_161=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_158));
            type_161->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_160,(struct sType*)come_increment_ref_count(sType_clone(type_161)),info,(_Bool)1,(_Bool)0);
            i_158++;
            come_call_finalizer(sType_finalize, type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    block_level_168=info->block_level;
    if(    !no_var_table    ) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0    ) {
    }
    else {
        for(        o2_saved_170=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_173=list$1sNode$ph_begin((o2_saved_170))        ;        !list$1sNode$ph_end((o2_saved_170))        ;        node_173=list$1sNode$ph_next((o2_saved_170))        ){
            right_value_objects_176=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj52=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj53=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj54=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            stack_num_before_181=list$1CVALUE$ph_length(info->stack);
            sline_182=info->sline;
            sname_183=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_173->sline(node_173->_protocol_obj);
            __dec_obj55=info->sname,
            info->sname=(char*)come_increment_ref_count(node_173->sname(node_173->_protocol_obj));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            interrupts_184=(_Bool)0;
            if(            i_169==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon            ) {
                Value_185=node_compile(node_173,info);
                if(                !Value_185                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_181+1                ) {
                    come_value_186=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_186->type->mClass->mName,"void")&&come_value_186->type->mPointerNum==0                    ) {
                        come_value2_187=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_186));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_187));
                        __dec_obj60=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_187->c_value));
                        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        come_value2_189=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_186));
                        var__190=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__190                        ) {
                            come_value3_191=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 477, "struct CVALUE*"));
                            if(                            var__190->mType->mClass=="void"&&var__190->mType->mPointerNum==1                            ) {
                                check_assign_type("invalid if result value",var__190->mType,((struct sType*)(__right_value134=sType_clone(come_value_186->type))),come_value3_191,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                come_call_finalizer(sType_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                            __dec_obj61=var__190->mType,
                            var__190->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_186->type));
                            come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            if(                            come_value_186->type->mHeap                            ) {
                                c_value_192=(char*)come_increment_ref_count(increment_ref_count_object(come_value_186->type,come_value_186->c_value,info));
                                __dec_obj62=come_value2_189->c_value,
                                come_value2_189->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__190->mCValueName,c_value_192));
                                __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                                (c_value_192 = come_decrement_ref_count(c_value_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            }
                            else {
                                __dec_obj63=come_value2_189->c_value,
                                come_value2_189->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__190->mCValueName,come_value_186->c_value));
                                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                            come_call_finalizer(CVALUE_finalize, come_value3_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_189));
                        __dec_obj64=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_189->c_value));
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    come_call_finalizer(CVALUE_finalize, come_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            else {
                Value_193=node_compile(node_173,info);
                if(                !Value_193                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_182;
            __dec_obj65=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_183));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            comma            ) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_181);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects            ) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj66=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_176);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            i_169++;
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_183 = come_decrement_ref_count(sname_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code    ) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_168==0        ) {
            for(            o2_saved_197=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_200=list$1sVar$ph_begin((o2_saved_197))            ;            !list$1sVar$ph_end((o2_saved_197))            ;            it_200=list$1sVar$ph_next((o2_saved_197))            ){
                free_object((struct sType*)come_increment_ref_count(sType_clone(it_200->mType)),it_200->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj67=info->match_it_var,
            __if_result__0_196=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->lv_table=old_table_156;
    info->block_level=block_level_168;
    if(    string_operator_equals(info->come_fun->mName,"main")    ) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_157;
    info->inhibits_output_code=inhibits_output_code_155;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_162;
int i_163;
struct sType* __result_obj__73;
struct sType* default_value_164;
struct sType* __result_obj__74;
default_value_164 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_162=self->head;
    i_163=0;
    while(    it_162!=((void*)0)    ) {
        if(        position==i_163        ) {
            __result_obj__73 = (struct sType*)come_increment_ref_count(it_162->item);
            come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__73;
        }
        it_162=it_162->next;
        i_163++;
    }
    memset(&default_value_164,0,sizeof(struct sType*));
    __result_obj__74 = (struct sType*)come_increment_ref_count(default_value_164);
    come_call_finalizer(sType_finalize, default_value_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_165;
int i_166;
struct sType* __result_obj__75;
struct sType* default_value_167;
struct sType* __result_obj__76;
default_value_167 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(    it_165!=((void*)0)    ) {
        if(        position==i_166        ) {
            __result_obj__75 = (struct sType*)come_increment_ref_count(it_165->item);
            come_call_finalizer(sType_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__75;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sType*));
    __result_obj__76 = (struct sType*)come_increment_ref_count(default_value_167);
    come_call_finalizer(sType_finalize, default_value_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_171;
struct sNode* __result_obj__77;
struct sNode* __result_obj__78;
struct sNode* result_172;
struct sNode* __result_obj__79;
result_171 = (void*)0;
result_172 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_171,0,sizeof(struct sNode*));
        __result_obj__77 = result_171;
        return __result_obj__77;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__78 = self->it->item;
        return __result_obj__78;
    }
    memset(&result_172,0,sizeof(struct sNode*));
    __result_obj__79 = result_172;
    return __result_obj__79;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_174;
struct sNode* __result_obj__80;
struct sNode* __result_obj__81;
struct sNode* result_175;
struct sNode* __result_obj__82;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_174,0,sizeof(struct sNode*));
        __result_obj__80 = result_174;
        return __result_obj__80;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__81 = self->it->item;
        return __result_obj__81;
    }
    memset(&result_175,0,sizeof(struct sNode*));
    __result_obj__82 = result_175;
    return __result_obj__82;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_177;
struct list_item$1sRightValueObject$ph* prev_it_178;
    it_177=self->head;
    while(    it_177!=((void*)0)    ) {
        prev_it_178=it_177;
        it_177=it_177->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)    ) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)    ) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_179;
struct list_item$1sRightValueObject$ph* prev_it_180;
    it_179=self->head;
    while(    it_179!=((void*)0)    ) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__84;
void* __right_value125 = (void*)0;
struct CVALUE* result_188;
void* __right_value126 = (void*)0;
char* __dec_obj56;
void* __right_value127 = (void*)0;
struct sType* __dec_obj57;
void* __right_value128 = (void*)0;
char* __dec_obj58;
void* __right_value129 = (void*)0;
char* __dec_obj59;
struct CVALUE* __result_obj__85;
    if(    self==(void*)0    ) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result_188=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj56=result_188->c_value,
        result_188->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj57=result_188->type,
        result_188->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_188->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_188->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj58=result_188->c_value_without_right_value_objects,
        result_188->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj59=result_188->c_value_without_cast_object_value,
        result_188->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(result_188);
    come_call_finalizer(CVALUE_finalize, result_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_194;
struct list_item$1sRightValueObject$ph* prev_it_195;
struct list$1sRightValueObject$ph* __result_obj__86;
    it_194=self->head;
    while(    it_194!=((void*)0)    ) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_198;
struct sVar* __result_obj__87;
struct sVar* __result_obj__88;
struct sVar* result_199;
struct sVar* __result_obj__89;
result_198 = (void*)0;
result_199 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_198,0,sizeof(struct sVar*));
        __result_obj__87 = result_198;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_199,0,sizeof(struct sVar*));
    __result_obj__89 = result_199;
    return __result_obj__89;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_201;
struct sVar* __result_obj__90;
struct sVar* __result_obj__91;
struct sVar* result_202;
struct sVar* __result_obj__92;
result_201 = (void*)0;
result_202 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_201,0,sizeof(struct sVar*));
        __result_obj__90 = result_201;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_202,0,sizeof(struct sVar*));
    __result_obj__92 = result_202;
    return __result_obj__92;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_203;
struct list_item$1sVar$ph* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sVar$ph* it_205;
struct list_item$1sVar$ph* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top    ) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top    ) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head_207;
_Bool dquort_208;
_Bool squort_209;
int sline_210;
int nest_211;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
char* tail_212;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_213;
void* __right_value152 = (void*)0;
char* __result_obj__93;
    head_207=info->p;
    if(    *info->p==123    ) {
        info->p++;
        dquort_208=(_Bool)0;
        squort_209=(_Bool)0;
        sline_210=0;
        nest_211=0;
        while(        1        ) {
            if(            dquort_208            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value142=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value142, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34                ) {
                    info->p++;
                    dquort_208=!dquort_208;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value143=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value144=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            squort_209            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value145=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39                ) {
                    info->p++;
                    squort_209=!squort_209;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value146=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value147=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_210)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39            ) {
                sline_210=info->sline;
                info->p++;
                squort_209=!squort_209;
            }
            else if(            *info->p==34            ) {
                sline_210=info->sline;
                info->p++;
                dquort_208=!dquort_208;
            }
            else if(            *info->p==35            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123            ) {
                info->p++;
                nest_211++;
            }
            else if(            *info->p==125            ) {
                info->p++;
                if(                nest_211==0                ) {
                    break;
                }
                nest_211--;
            }
            else if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value148=err_msg(info,"The block requires } character for closing block")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
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
    else {
        ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"Require block. This is %c",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(1);
    }
    tail_212=info->p;
    buf_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 704, "struct buffer*"))));
    buffer_append(buf_213,head_207,tail_212-head_207-1);
    if(    return_self_at_last    ) {
        buffer_append_str(buf_213,"return self; }");
    }
    else {
        buffer_append_str(buf_213,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value152=buffer_to_string(buf_213))));
    come_call_finalizer(buffer_finalize, buf_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* asm_fun_name_214;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct buffer* result_215;
char* head_216;
int brace_num_217;
char* tail_218;
char* head_219;
int brace_num_220;
char* tail_221;
char* head_222;
char* tail_223;
char* head_224;
char* tail_225;
int len_226;
_Bool in_dquort_227;
int brace_num_228;
char* head_229;
char* tail_230;
char* head_231;
char* tail_232;
char* head_233;
char* tail_234;
char* head_235;
int nest_236;
char* tail_237;
char* head_238;
int nest_239;
char* tail_240;
char* head_241;
int nest_242;
char* tail_243;
char* head_244;
int nest_245;
char* tail_246;
char* head_247;
int nest_248;
char* tail_249;
char* head_250;
char* tail_251;
char* head_252;
char* tail_253;
char* head_254;
char* tail_255;
char* head_256;
char* tail_257;
char* head_258;
char* tail_259;
char* head_260;
int brace_num_261;
char* tail_262;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__95;
    asm_fun_name_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 722, "struct buffer*"))));
    result_215=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 723, "struct buffer*"))));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute__",info)        ) {
            head_216=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_217=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_217++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_217--;
                        if(                        brace_num_217==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_218=info->p;
            buffer_append(result_215,head_216,tail_218-head_216);
        }
        else if(        parsecmp("__declspec",info)        ) {
            head_219=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_220=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_220++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_220--;
                        if(                        brace_num_220==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_221=info->p;
            buffer_append(result_215,head_219,tail_221-head_219);
        }
        else if(        parsecmp("_Noreturn",info)        ) {
            head_222=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_223=info->p;
            buffer_append(result_215,head_222,tail_223-head_222);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            head_224=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_225=info->p;
            buffer_append(result_215,head_224,tail_225-head_224);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_226=0;
            if(            *info->p==40            ) {
                in_dquort_227=(_Bool)0;
                brace_num_228=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_227=!in_dquort_227;
                    }
                    else if(                    in_dquort_227                    ) {
                        buffer_append_char(asm_fun_name_214,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_228++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_228--;
                        if(                        brace_num_228==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute_pure__",info)        ) {
            head_229=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_230=info->p;
            buffer_append(result_215,head_229,tail_230-head_229);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            head_231=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_232=info->p;
            buffer_append(result_215,head_231,tail_232-head_231);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            head_233=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_234=info->p;
            buffer_append(result_215,head_233,tail_234-head_233);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            head_235=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_236=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_236++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_236--;
                        if(                        nest_236==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_237=info->p;
            buffer_append(result_215,head_235,tail_237-head_235);
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            head_238=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_239=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_239++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_239--;
                        if(                        nest_239==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_240=info->p;
            buffer_append(result_215,head_238,tail_240-head_238);
        }
        else if(        parsecmp("__nonnull",info)        ) {
            head_241=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_242=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_242++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_242--;
                        if(                        nest_242==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_243=info->p;
            buffer_append(result_215,head_241,tail_243-head_241);
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            head_244=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_245=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_245++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_245--;
                        if(                        nest_245==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_246=info->p;
            buffer_append(result_215,head_244,tail_246-head_244);
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            head_247=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_248=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_248++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_248--;
                        if(                        nest_248==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_249=info->p;
            buffer_append(result_215,head_247,tail_249-head_247);
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            head_250=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_251=info->p;
            buffer_append(result_215,head_250,tail_251-head_250);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            head_252=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_253=info->p;
            buffer_append(result_215,head_252,tail_253-head_252);
        }
        else if(        parsecmp("__wur",info)        ) {
            head_254=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_255=info->p;
            buffer_append(result_215,head_254,tail_255-head_254);
        }
        else if(        parsecmp("__pure2",info)        ) {
            head_256=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_257=info->p;
            buffer_append(result_215,head_256,tail_257-head_256);
        }
        else if(        parsecmp("__pure",info)        ) {
            head_258=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_259=info->p;
            buffer_append(result_215,head_258,tail_259-head_258);
        }
        else if(        parsecmp("__asm",info)        ) {
            head_260=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_261=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_261++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_261--;
                        if(                        brace_num_261==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_262=info->p;
            buffer_append(result_215,head_260,tail_262-head_260);
        }
        else {
            break;
        }
    }
    __result_obj__95 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value160=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1137, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_214)),(char*)come_increment_ref_count(buffer_to_string(result_215))))));
    come_call_finalizer(buffer_finalize, asm_fun_name_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, result_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj68;
char* __dec_obj69;
struct tuple2$2char$phchar$ph* __result_obj__94;
    __dec_obj68=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj69=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__94 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* asm_fun_name_263;
void* __right_value163 = (void*)0;
char* attribute_264;
int nest_265;
int nest_266;
int nest_267;
int nest_268;
int nest_269;
void* __right_value164 = (void*)0;
char* __dec_obj70;
int len_270;
_Bool in_dquort_271;
int brace_num_272;
int brace_num_273;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__96;
    asm_fun_name_263=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1142, "struct buffer*"))));
    attribute_264=(char*)come_increment_ref_count(xsprintf(""));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute_pure__",info)        ) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_265=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_265++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_265--;
                        if(                        nest_265==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_266=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_266++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_266--;
                        if(                        nest_266==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__nonnull",info)        ) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_267=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_267++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_267--;
                        if(                        nest_267==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_268=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_268++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_268--;
                        if(                        nest_268==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_269=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_269++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_269--;
                        if(                        nest_269==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__wur",info)        ) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure2",info)        ) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure",info)        ) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute__",info)        ) {
            __dec_obj70=attribute_264,
            attribute_264=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_270=0;
            if(            *info->p==40            ) {
                in_dquort_271=(_Bool)0;
                brace_num_272=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_271=!in_dquort_271;
                    }
                    else if(                    in_dquort_271                    ) {
                        buffer_append_char(asm_fun_name_263,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_272++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_272--;
                        if(                        brace_num_272==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__asm",info)        ) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_273=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_273++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_273--;
                        if(                        brace_num_273==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__96 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value167=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1411, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_263)),(char*)come_increment_ref_count(attribute_264)))));
    come_call_finalizer(buffer_finalize, asm_fun_name_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (attribute_264 = come_decrement_ref_count(attribute_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value167, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value168 = (void*)0;
char* __dec_obj71;
char* head_274;
int head_sline_275;
void* __right_value169 = (void*)0;
char* buf_276;
void* __right_value170 = (void*)0;
struct sNode* node_277;
_Bool Value_278;
    while(    *info->p    ) {
        __dec_obj71=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1417, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        head_274=info->p;
        head_sline_275=info->sline;
        buf_276=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        node_277=(struct sNode*)come_increment_ref_count(top_level_v99(buf_276,head_274,head_sline_275,info));
        parse_sharp_v5(info);
        while(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_277!=((void*)0)        ) {
            Value_278=node_compile(node_277,info);
            if(            !Value_278            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_277) ? node_277 = come_decrement_ref_count(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_277) ? node_277 = come_decrement_ref_count(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value171 = (void*)0;
char* name_279;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sType* result_type_280;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1sType$ph* param_types_281;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct list$1char$ph* param_names_282;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct list$1char$ph* param_default_parametors_283;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sFun* fun_284;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
char* name_306;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* result_type_307;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* param_types_308;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* param_names_309;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct list$1char$ph* param_default_parametors_310;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sFun* fun_311;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
char* name_312;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* result_type_313;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* __list_values1___314[3];
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1sType$ph* param_types_319;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
char* __list_values2___320[3];
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1char$ph* param_names_322;
char* __list_values3___323[3];
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1char$ph* param_default_parametors_324;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sFun* fun_325;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* name_326;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sType* result_type_327;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* __list_values4___328[3];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sType$ph* param_types_329;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __list_values5___330[3];
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1char$ph* param_names_331;
char* __list_values6___332[3];
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1char$ph* param_default_parametors_333;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sFun* fun_334;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* name_335;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sType* result_type_336;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sType* __list_values7___337[3];
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sType$ph* param_types_338;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* __list_values8___339[3];
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1char$ph* param_names_340;
char* __list_values9___341[3];
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1char$ph* param_default_parametors_342;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sFun* fun_343;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
char* name_344;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_345;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __list_values10___346[3];
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct list$1sType$ph* param_types_347;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __list_values11___348[3];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1char$ph* param_names_349;
char* __list_values12___350[3];
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1char$ph* param_default_parametors_351;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sFun* fun_352;
void* __right_value316 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_279=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_280=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1467, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_281=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1468, "struct list$1sType$ph*"))));
        param_names_282=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1469, "struct list$1char$ph*"))));
        param_default_parametors_283=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1470, "struct list$1char$ph*"))));
        fun_284=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1471, "struct sFun*")),(char*)come_increment_ref_count(name_279),(struct sType*)come_increment_ref_count(result_type_280),(struct list$1sType$ph*)come_increment_ref_count(param_types_281),(struct list$1char$ph*)come_increment_ref_count(param_names_282),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_283),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_279)),(struct sFun*)come_increment_ref_count(fun_284));
        (name_279 = come_decrement_ref_count(name_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_306=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_307=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1480, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_308=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1481, "struct list$1sType$ph*"))));
        param_names_309=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1482, "struct list$1char$ph*"))));
        param_default_parametors_310=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1483, "struct list$1char$ph*"))));
        fun_311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1484, "struct sFun*")),(char*)come_increment_ref_count(name_306),(struct sType*)come_increment_ref_count(result_type_307),(struct list$1sType$ph*)come_increment_ref_count(param_types_308),(struct list$1char$ph*)come_increment_ref_count(param_names_309),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_310),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_306)),(struct sFun*)come_increment_ref_count(fun_311));
        (name_306 = come_decrement_ref_count(name_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_307, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_308, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_309, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_311, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_312=(char*)come_increment_ref_count(__builtin_string("strtol"));
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1493, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        param_types_319=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___314[0]=((struct sType*)(__right_value212=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___314[1]=((struct sType*)(__right_value215=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values1___314[2]=((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1494, "struct list$1sType$ph")),3,__list_values1___314)));
        come_call_finalizer(sType_finalize, __right_value212, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value218, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_322=(struct list$1char$ph*)come_increment_ref_count((__list_values2___320[0]=((char*)(__right_value224=xsprintf("arg1"))),
__list_values2___320[1]=((char*)(__right_value225=xsprintf("arg2"))),
__list_values2___320[2]=((char*)(__right_value226=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1495, "struct list$1char$ph")),3,__list_values2___320)));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_324=(struct list$1char$ph*)come_increment_ref_count((__list_values3___323[0]=(char*)((void*)0),
__list_values3___323[1]=(char*)((void*)0),
__list_values3___323[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1496, "struct list$1char$ph")),3,__list_values3___323)));
        fun_325=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1497, "struct sFun*")),(char*)come_increment_ref_count(name_312),(struct sType*)come_increment_ref_count(result_type_313),(struct list$1sType$ph*)come_increment_ref_count(param_types_319),(struct list$1char$ph*)come_increment_ref_count(param_names_322),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_324),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_312)),(struct sFun*)come_increment_ref_count(fun_325));
        (name_312 = come_decrement_ref_count(name_312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_319, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_322, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_324, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_326=(char*)come_increment_ref_count(__builtin_string("strtoul"));
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1506, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_327->mUnsigned=(_Bool)1;
        param_types_329=(struct list$1sType$ph*)come_increment_ref_count((__list_values4___328[0]=((struct sType*)(__right_value242=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values4___328[1]=((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values4___328[2]=((struct sType*)(__right_value248=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1508, "struct list$1sType$ph")),3,__list_values4___328)));
        come_call_finalizer(sType_finalize, __right_value242, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value248, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_331=(struct list$1char$ph*)come_increment_ref_count((__list_values5___330[0]=((char*)(__right_value251=xsprintf("arg1"))),
__list_values5___330[1]=((char*)(__right_value252=xsprintf("arg2"))),
__list_values5___330[2]=((char*)(__right_value253=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1509, "struct list$1char$ph")),3,__list_values5___330)));
        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_333=(struct list$1char$ph*)come_increment_ref_count((__list_values6___332[0]=(char*)((void*)0),
__list_values6___332[1]=(char*)((void*)0),
__list_values6___332[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1510, "struct list$1char$ph")),3,__list_values6___332)));
        fun_334=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1511, "struct sFun*")),(char*)come_increment_ref_count(name_326),(struct sType*)come_increment_ref_count(result_type_327),(struct list$1sType$ph*)come_increment_ref_count(param_types_329),(struct list$1char$ph*)come_increment_ref_count(param_names_331),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_333),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_326)),(struct sFun*)come_increment_ref_count(fun_334));
        (name_326 = come_decrement_ref_count(name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_327, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_329, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_331, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_333, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_335=(char*)come_increment_ref_count(__builtin_string("strtoull"));
        result_type_336=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1520, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_336->mUnsigned=(_Bool)1;
        result_type_336->mLong=(_Bool)1;
        param_types_338=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___337[0]=((struct sType*)(__right_value269=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values7___337[1]=((struct sType*)(__right_value272=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values7___337[2]=((struct sType*)(__right_value275=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph")),3,__list_values7___337)));
        come_call_finalizer(sType_finalize, __right_value269, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value272, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_340=(struct list$1char$ph*)come_increment_ref_count((__list_values8___339[0]=((char*)(__right_value278=xsprintf("arg1"))),
__list_values8___339[1]=((char*)(__right_value279=xsprintf("arg2"))),
__list_values8___339[2]=((char*)(__right_value280=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph")),3,__list_values8___339)));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_342=(struct list$1char$ph*)come_increment_ref_count((__list_values9___341[0]=(char*)((void*)0),
__list_values9___341[1]=(char*)((void*)0),
__list_values9___341[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph")),3,__list_values9___341)));
        fun_343=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1526, "struct sFun*")),(char*)come_increment_ref_count(name_335),(struct sType*)come_increment_ref_count(result_type_336),(struct list$1sType$ph*)come_increment_ref_count(param_types_338),(struct list$1char$ph*)come_increment_ref_count(param_names_340),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_342),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_335)),(struct sFun*)come_increment_ref_count(fun_343));
        (name_335 = come_decrement_ref_count(name_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_336, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_340, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_344=(char*)come_increment_ref_count(__builtin_string("strtoll"));
        result_type_345=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_345->mLong=(_Bool)1;
        param_types_347=(struct list$1sType$ph*)come_increment_ref_count((__list_values10___346[0]=((struct sType*)(__right_value296=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values10___346[1]=((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values10___346[2]=((struct sType*)(__right_value302=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1537, "struct list$1sType$ph")),3,__list_values10___346)));
        come_call_finalizer(sType_finalize, __right_value296, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value299, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value302, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_349=(struct list$1char$ph*)come_increment_ref_count((__list_values11___348[0]=((char*)(__right_value305=xsprintf("arg1"))),
__list_values11___348[1]=((char*)(__right_value306=xsprintf("arg2"))),
__list_values11___348[2]=((char*)(__right_value307=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1538, "struct list$1char$ph")),3,__list_values11___348)));
        (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_351=(struct list$1char$ph*)come_increment_ref_count((__list_values12___350[0]=(char*)((void*)0),
__list_values12___350[1]=(char*)((void*)0),
__list_values12___350[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1539, "struct list$1char$ph")),3,__list_values12___350)));
        fun_352=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1540, "struct sFun*")),(char*)come_increment_ref_count(name_344),(struct sType*)come_increment_ref_count(result_type_345),(struct list$1sType$ph*)come_increment_ref_count(param_types_347),(struct list$1char$ph*)come_increment_ref_count(param_names_349),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_351),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_344)),(struct sFun*)come_increment_ref_count(fun_352));
        (name_344 = come_decrement_ref_count(name_344, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_347, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_302;
unsigned int it_303;
_Bool same_key_exist_304;
char* it2_305;
struct map$2char$phsFun$ph* __result_obj__107;
    if(    self->len*10>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_302=string_get_hash_key(((char*)key))%self->size;
    it_303=hash_302;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_303]        ) {
            if(            string_equals(self->keys[it_303],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_303]);
                    (self->keys[it_303] = come_decrement_ref_count(self->keys[it_303], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_303]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_303]);
                    self->keys[it_303]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_303], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_303]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_303]=item;
                }
                break;
            }
            it_303++;
            if(            it_303>=self->size            ) {
                it_303=0;
            }
            else if(            it_303==hash_302            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_303]=(_Bool)1;
            if(            1            ) {
                self->keys[it_303]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_303]=key;
            }
            if(            1            ) {
                self->items[it_303]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_303]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_304=(_Bool)0;
    for(    it2_305=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_305=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_305,key)        ) {
            same_key_exist_304=(_Bool)1;
        }
    }
    if(    !same_key_exist_304    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__107 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__107;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_285;
void* __right_value185 = (void*)0;
char** keys_286;
void* __right_value186 = (void*)0;
struct sFun** items_287;
void* __right_value187 = (void*)0;
_Bool* item_existance_288;
int len_289;
char* it_292;
struct sFun* default_value_295;
void* __right_value188 = (void*)0;
struct sFun* it2_296;
unsigned int hash_299;
int n_300;
struct sFun* default_value_301;
void* __right_value189 = (void*)0;
default_value_295 = (void*)0;
default_value_301 = (void*)0;
    size_285=self->size*10;
    keys_286=(char**)come_increment_ref_count(((char**)(__right_value185=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_285)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_287=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value186=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_285)), "/usr/local/include/comelang.h", 2164, "struct sFun**"))));
    item_existance_288=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value187=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_285)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_289=0;
    for(    it_292=map$2char$phsFun$ph_begin(self)    ;    !map$2char$phsFun$ph_end(self)    ;    it_292=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_295,0,sizeof(struct sFun*));
        it2_296=((struct sFun*)(__right_value188=map$2char$phsFun$ph_at(self,it_292,(struct sFun*)come_increment_ref_count(default_value_295))));
        come_call_finalizer(sFun_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_299=string_get_hash_key(((char*)it_292))%size_285;
        n_300=hash_299;
        while(        (_Bool)1        ) {
            if(            item_existance_288[n_300]            ) {
                n_300++;
                if(                n_300>=size_285                ) {
                    n_300=0;
                }
                else if(                n_300==hash_299                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_288[n_300]=(_Bool)1;
                keys_286[n_300]=it_292;
                items_287[n_300]=((struct sFun*)(__right_value189=map$2char$phsFun$ph_at(self,it_292,(struct sFun*)come_increment_ref_count(default_value_301))));
                come_call_finalizer(sFun_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_289++;
                come_call_finalizer(sFun_finalize, default_value_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_286;
    self->items=items_287;
    self->item_existance=item_existance_288;
    self->size=size_285;
    self->len=len_289;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_290;
char* __result_obj__97;
char* __result_obj__98;
char* result_291;
char* __result_obj__99;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_290,0,sizeof(char*));
        __result_obj__97 = result_290;
        return __result_obj__97;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__98 = self->key_list->it->item;
        return __result_obj__98;
    }
    memset(&result_291,0,sizeof(char*));
    __result_obj__99 = result_291;
    return __result_obj__99;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_293;
char* __result_obj__100;
char* __result_obj__101;
char* result_294;
char* __result_obj__102;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_293,0,sizeof(char*));
        __result_obj__100 = result_293;
        return __result_obj__100;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__101 = self->key_list->it->item;
        return __result_obj__101;
    }
    memset(&result_294,0,sizeof(char*));
    __result_obj__102 = result_294;
    return __result_obj__102;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_297;
unsigned int it_298;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
struct sFun* __result_obj__106;
    hash_297=string_get_hash_key(((char*)key))%self->size;
    it_298=hash_297;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_298]        ) {
            if(            string_equals(self->keys[it_298],key)            ) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(self->items[it_298]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__103;
            }
            it_298++;
            if(            it_298>=self->size            ) {
                it_298=0;
            }
            else if(            it_298==hash_297            ) {
                __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__104;
            }
        }
        else {
            __result_obj__105 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__105;
        }
    }
    __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_315;
struct list$1sType$ph* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_315=0    ;    i_315<num_value    ;    i_315++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_315]));
    }
    __result_obj__109 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value219 = (void*)0;
struct list_item$1sType$ph* litem_316;
struct sType* __dec_obj72;
void* __right_value220 = (void*)0;
struct list_item$1sType$ph* litem_317;
struct sType* __dec_obj73;
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_318;
struct sType* __dec_obj74;
struct list$1sType$ph* __result_obj__108;
    if(    self->len==0    ) {
        litem_316=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value219=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sType$ph*"))));
        litem_316->prev=((void*)0);
        litem_316->next=((void*)0);
        __dec_obj72=litem_316->item,
        litem_316->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_316;
        self->head=litem_316;
    }
    else if(    self->len==1    ) {
        litem_317=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value220=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sType$ph*"))));
        litem_317->prev=self->head;
        litem_317->next=((void*)0);
        __dec_obj73=litem_317->item,
        litem_317->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_317;
        self->head->next=litem_317;
    }
    else {
        litem_318=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sType$ph*"))));
        litem_318->prev=self->tail;
        litem_318->next=((void*)0);
        __dec_obj74=litem_318->item,
        litem_318->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_318;
        self->tail=litem_318;
    }
    self->len++;
    __result_obj__108 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_321;
struct list$1char$ph* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_321=0    ;    i_321<num_value    ;    i_321++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_321]));
    }
    __result_obj__110 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_353;
_Bool is_type_name_flag_354;
int sline_355;
_Bool define_struct_nobody_356;
char* p_357;
int sline_358;
void* __right_value317 = (void*)0;
char* word_359;
_Bool uniq_class_360;
char* p_361;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* buf2_362;
_Bool define_function_pointer_result_function_363;
_Bool define_variable_between_brace_364;
char* p_365;
void* __right_value320 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type_366=0;
char* fun_name_367=0;
_Bool err_368=0;
void* __right_value321 = (void*)0;
char* word_369;
_Bool define_function_flag_370;
char* p_371;
void* __right_value322 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_372=0;
char* fun_name_373=0;
_Bool err_374=0;
char* word_375;
void* __right_value323 = (void*)0;
char* __dec_obj75;
void* __right_value324 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value325 = (void*)0;
char* __dec_obj78;
_Bool define_variable_376;
char* p_377;
void* __right_value326 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_378=0;
char* fun_name_379=0;
_Bool err_380=0;
void* __right_value327 = (void*)0;
char* word_381;
void* __right_value328 = (void*)0;
char* word_382;
char* p_383;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* word_384;
void* __right_value332 = (void*)0;
char* __dec_obj79;
void* __right_value333 = (void*)0;
char* buf2_385;
void* __right_value334 = (void*)0;
struct sNode* __result_obj__111;
void* __right_value335 = (void*)0;
char* word_386;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* word_387;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* node_388;
struct sNode* __result_obj__112;
void* __right_value340 = (void*)0;
struct sNode* __result_obj__113;
char* header_head_389;
void* __right_value341 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_390=0;
char* fun_name_391=0;
_Bool err_392=0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct list$1sType$ph* param_types_393;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1char$ph* param_names_394;
void* __right_value346 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type_395=0;
char* param_name_396=0;
_Bool err_397=0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1sType$ph* param_types2_399;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct list$1char$ph* param_names2_400;
void* __right_value355 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_401=0;
char* param_name_402=0;
_Bool err_403=0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
char* header_tail_405;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* result_type2_406;
struct sType* __dec_obj80;
void* __right_value363 = (void*)0;
struct list$1sType$ph* __dec_obj81;
void* __right_value364 = (void*)0;
struct list$1char$ph* __dec_obj82;
_Bool var_args_407;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1char$ph* param_default_parametors_408;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sFun* fun_409;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value425 = (void*)0;
struct sNode* result_410;
struct sNode* __result_obj__138;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* node_446;
struct sNode* __result_obj__139;
void* __right_value428 = (void*)0;
struct sNode* node_447;
struct sNode* __result_obj__140;
void* __right_value429 = (void*)0;
struct sNode* node_448;
char* source_tail_449;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* header_450;
struct sNode* __result_obj__141;
void* __right_value432 = (void*)0;
char* buf2_451;
void* __right_value433 = (void*)0;
struct sNode* __result_obj__142;
    info->in_top_level=(_Bool)1;
    source_head_353=info->p;
    is_type_name_flag_354=is_type_name(buf,info);
    sline_355=info->sline;
    define_struct_nobody_356=(_Bool)0;
    {
        p_357=info->p;
        sline_358=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_359=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59                ) {
                    define_struct_nobody_356=(_Bool)1;
                }
                (word_359 = come_decrement_ref_count(word_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_358;
    }
    uniq_class_360=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")    ) {
        p_361=info->p;
        info->p=head;
        (void)((char*)(__right_value318=parse_word(info)));
        (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            buf2_362=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2_362,"class")            ) {
                uniq_class_360=(_Bool)1;
            }
            (buf2_362 = come_decrement_ref_count(buf2_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_361;
        info->sline=sline_355;
    }
    define_function_pointer_result_function_363=(_Bool)0;
    define_variable_between_brace_364=(_Bool)0;
    if(    is_type_name_flag_354&&!uniq_class_360    ) {
        p_365=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value320=backtrace_parse_type((_Bool)0,info)));
            result_type_366=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_367=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_368=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value320, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42                ) {
                    define_function_pointer_result_function_363=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_369=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_369,info)&&*info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                            }
                            else {
                                define_variable_between_brace_364=(_Bool)1;
                            }
                        }
                        (word_369 = come_decrement_ref_count(word_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type_366, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_367 = come_decrement_ref_count(fun_name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_355;
    }
    define_function_flag_370=(_Bool)0;
    if(    is_type_name_flag_354&&!define_function_pointer_result_function_363&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class_360    ) {
        p_371=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value322=backtrace_parse_type((_Bool)0,info)));
            result_type_372=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_373=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_374=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_372, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_373 = come_decrement_ref_count(fun_name_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        !info->define_struct        ) {
            info->define_struct=(_Bool)0;
            word_375=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj75=word_375,
                word_375=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(word_375,"extern")                ) {
                    __dec_obj76=word_375,
                    word_375=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj77=word_375,
                word_375=((void*)0);
                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_375            ) {
                if(                is_type_name(word_375,info)                ) {
                    while(                    *info->p==42                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93                    ) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __dec_obj78=word_375,
                        word_375=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                }
                if(                strlen(word_375)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                ) {
                    if(                    is_type_name_flag_354                    ) {
                        define_function_flag_370=(_Bool)1;
                    }
                }
            }
            (word_375 = come_decrement_ref_count(word_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_371;
        info->sline=sline_355;
    }
    define_variable_376=(_Bool)1;
    if(    is_type_name_flag_354&&!define_function_pointer_result_function_363&&!uniq_class_360    ) {
        p_377=info->p;
        info->p=head;
        if(        !is_type_name_flag_354        ) {
            define_variable_376=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value326=backtrace_parse_type((_Bool)0,info)));
            result_type_378=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_379=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_380=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value326, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_381=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                                define_variable_376=(_Bool)1;
                            }
                        }
                        (word_381 = come_decrement_ref_count(word_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_382=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_382,info)&&*info->p!=40                        ) {
                            define_variable_376=(_Bool)1;
                        }
                    }
                    (word_382 = come_decrement_ref_count(word_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_378, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_379 = come_decrement_ref_count(fun_name_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_376=(_Bool)0;
        }
        else if(        define_variable_376        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_376=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_376=(_Bool)0;
            }
        }
        info->p=p_377;
        info->sline=sline_355;
    }
    else {
        define_variable_376=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_363    ) {
        p_383=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")        ) {
            ((char*)(__right_value329=parse_struct_attribute(info)));
            (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                ((char*)(__right_value330=parse_word(info)));
                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_384=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj79=word_384,
                        word_384=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(word_384,"extends")                        ) {
                            define_variable_376=(_Bool)0;
                        }
                    }
                    (word_384 = come_decrement_ref_count(word_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_376=(_Bool)0;
        }
        else if(        define_variable_376        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_376=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_376=(_Bool)0;
            }
        }
        info->p=p_383;
        info->sline=sline_355;
    }
    if(    uniq_class_360    ) {
        info->p=head;
        info->sline=sline_355;
        buf2_385=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value334=top_level_v98(buf2_385,head,head_sline,info))));
        (buf2_385 = come_decrement_ref_count(buf2_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value334) ? __right_value334 = come_decrement_ref_count(__right_value334, ((struct sNode*)__right_value334)->finalize, ((struct sNode*)__right_value334)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__111;
        (buf2_385 = come_decrement_ref_count(buf2_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")    ) {
        word_386=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1            ) {
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value336=err_msg(info,"unexpected source end")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value336, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    word_387=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_387, "05function.c", 1862, "char*")));
                    (word_387 = come_decrement_ref_count(word_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            node_388=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__112 = (struct sNode*)come_increment_ref_count(node_388);
            ((node_388) ? node_388 = come_decrement_ref_count(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (word_386 = come_decrement_ref_count(word_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__112;
            ((node_388) ? node_388 = come_decrement_ref_count(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (word_386 = come_decrement_ref_count(word_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123    ) {
    }
    else if(    define_struct_nobody_356    ) {
    }
    else if(    define_variable_between_brace_364    ) {
        info->p=head;
        info->sline=sline_355;
        __result_obj__113 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value340=parse_global_variable(info))));
        ((__right_value340) ? __right_value340 = come_decrement_ref_count(__right_value340, ((struct sNode*)__right_value340)->finalize, ((struct sNode*)__right_value340)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__113;
    }
    else if(    define_function_pointer_result_function_363    ) {
        header_head_389=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value341=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_390=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_391=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_392=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value341, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_393=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1891, "struct list$1sType$ph*"))));
            param_names_394=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1892, "struct list$1char$ph*"))));
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1                ) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value346=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_395=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_396=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_397=multiple_assign_var5->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_397                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value347=err_msg(info,"parse_type is failed")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types_393,(struct sType*)come_increment_ref_count(param_type_395));
                    static int num_function_pointer_result_var_name_a_398=0;
                    list$1char$ph_push_back(param_names_394,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_398)));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        (void)((char*)(__right_value349=parse_word(info)));
                        (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type_395, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_396 = come_decrement_ref_count(param_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value350=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value350, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type_395, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name_396 = come_decrement_ref_count(param_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_399=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1938, "struct list$1sType$ph*"))));
                param_names2_400=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1939, "struct list$1char$ph*"))));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1                    ) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value355=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_401=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_402=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_403=multiple_assign_var6->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value355, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        !err_403                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value356=err_msg(info,"parse_type is failed")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2_399,(struct sType*)come_increment_ref_count(param_type_401));
                        static int num_function_pointer_result_var_name_b_404=0;
                        list$1char$ph_push_back(param_names2_400,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_404)));
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            (void)((char*)(__right_value358=parse_word(info)));
                            (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        }
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_401, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (param_name_402 = come_decrement_ref_count(param_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value359=err_msg(info,"require , or ) (2)")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value359, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_401, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_402 = come_decrement_ref_count(param_name_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                header_tail_405=info->p;
                result_type2_406=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1981, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj80=result_type2_406->mResultType,
                result_type2_406->mResultType=(struct sType*)come_increment_ref_count(result_type_390);
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj81=result_type2_406->mParamTypes,
                result_type2_406->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_399));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj82=result_type2_406->mParamNames,
                result_type2_406->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_400));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                result_type2_406->mVarArgs=(_Bool)0;
                result_type2_406->mStatic=(_Bool)0;
                var_args_407=(_Bool)0;
                param_default_parametors_408=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1991, "struct list$1char$ph*"))));
                fun_409=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1993, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_391)),(struct sType*)come_increment_ref_count(result_type2_406),(struct list$1sType$ph*)come_increment_ref_count(param_types_393),(struct list$1char$ph*)come_increment_ref_count(param_names_394),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_408),(_Bool)1,var_args_407,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_391)),(struct sFun*)come_increment_ref_count(fun_409));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2005, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value374=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2005, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_409),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
                result_410=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer(sFunNode_finalize, __right_value374, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__138 = (struct sNode*)come_increment_ref_count(result_410);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_408, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_409, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_410) ? result_410 = come_decrement_ref_count(result_410, ((struct sNode*)result_410)->finalize, ((struct sNode*)result_410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_393, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names_394, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_391 = come_decrement_ref_count(fun_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__138;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_408, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_409, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_410) ? result_410 = come_decrement_ref_count(result_410, ((struct sNode*)result_410)->finalize, ((struct sNode*)result_410)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value426=err_msg(info,"require (")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value426, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_393, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_394, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_390, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_391 = come_decrement_ref_count(fun_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")    ) {
        info->p=head;
        info->sline=sline_355;
        node_446=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__139 = (struct sNode*)come_increment_ref_count(node_446);
        ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__139;
        ((node_446) ? node_446 = come_decrement_ref_count(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_function_flag_370    ) {
        info->p=head;
        info->sline=sline_355;
        node_447=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__140 = (struct sNode*)come_increment_ref_count(node_447);
        ((node_447) ? node_447 = come_decrement_ref_count(node_447, ((struct sNode*)node_447)->finalize, ((struct sNode*)node_447)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__140;
        ((node_447) ? node_447 = come_decrement_ref_count(node_447, ((struct sNode*)node_447)->finalize, ((struct sNode*)node_447)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_variable_376    ) {
        info->p=head;
        info->sline=sline_355;
        node_448=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_449=info->p;
        header_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2039, "struct buffer*"))));
        buffer_append(header_450,source_head_353,source_tail_449-source_head_353);
        __result_obj__141 = (struct sNode*)come_increment_ref_count(node_448);
        ((node_448) ? node_448 = come_decrement_ref_count(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_450, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__141;
        ((node_448) ? node_448 = come_decrement_ref_count(node_448, ((struct sNode*)node_448)->finalize, ((struct sNode*)node_448)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_450, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->p=head;
    info->sline=sline_355;
    buf2_451=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value433=top_level_v98(buf2_451,head,head_sline,info))));
    (buf2_451 = come_decrement_ref_count(buf2_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__right_value433) ? __right_value433 = come_decrement_ref_count(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__142;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__114;
void* __right_value375 = (void*)0;
struct sFunNode* result_411;
void* __right_value376 = (void*)0;
char* __dec_obj83;
void* __right_value424 = (void*)0;
struct sFun* __dec_obj108;
struct sFunNode* __result_obj__137;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_411=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)    ) {
        result_411->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj83=result_411->sname,
        result_411->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_411->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        __dec_obj108=result_411->mFun,
        result_411->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__137 = result_411;
    come_call_finalizer(sFunNode_finalize, result_411, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__115;
void* __right_value377 = (void*)0;
struct sFun* result_412;
void* __right_value378 = (void*)0;
char* __dec_obj84;
void* __right_value379 = (void*)0;
struct sType* __dec_obj85;
void* __right_value380 = (void*)0;
struct list$1sType$ph* __dec_obj86;
void* __right_value381 = (void*)0;
struct list$1char$ph* __dec_obj87;
void* __right_value382 = (void*)0;
struct list$1char$ph* __dec_obj88;
void* __right_value383 = (void*)0;
struct sType* __dec_obj89;
void* __right_value415 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value416 = (void*)0;
char* __dec_obj100;
void* __right_value417 = (void*)0;
char* __dec_obj101;
void* __right_value418 = (void*)0;
struct buffer* __dec_obj102;
void* __right_value419 = (void*)0;
struct buffer* __dec_obj103;
void* __right_value420 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value421 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value422 = (void*)0;
char* __dec_obj106;
void* __right_value423 = (void*)0;
char* __dec_obj107;
struct sFun* __result_obj__136;
    if(    self==(void*)0    ) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result_412=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj84=result_412->mName,
        result_412->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj85=result_412->mResultType,
        result_412->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj86=result_412->mParamTypes,
        result_412->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj87=result_412->mParamNames,
        result_412->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        __dec_obj88=result_412->mParamDefaultParametors,
        result_412->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        __dec_obj89=result_412->mLambdaType,
        result_412->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        __dec_obj99=result_412->mBlock,
        result_412->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        __dec_obj100=result_412->mTextBlock,
        result_412->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 11, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        __dec_obj101=result_412->mTextBlockSName,
        result_412->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 12, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_412->mTextBlockSline=self->mTextBlockSline;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        __dec_obj102=result_412->mSource,
        result_412->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        __dec_obj103=result_412->mSourceHead,
        result_412->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        __dec_obj104=result_412->mSourceHead2,
        result_412->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        __dec_obj105=result_412->mSourceDefer,
        result_412->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_412->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_412->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_412->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_412->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)    ) {
        result_412->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)    ) {
        result_412->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_412->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)    ) {
        result_412->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj106=result_412->mAttribute,
        result_412->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 26, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        __dec_obj107=result_412->mFunAttribute,
        result_412->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 27, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_412->mGenericsFun=self->mGenericsFun;
    }
    if(    self!=((void*)0)    ) {
        result_412->mImmutable=self->mImmutable;
    }
    __result_obj__136 = (struct sFun*)come_increment_ref_count(result_412);
    come_call_finalizer(sFun_finalize, result_412, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__116;
void* __right_value384 = (void*)0;
struct sBlock* result_413;
void* __right_value385 = (void*)0;
struct list$1sNode$ph* __dec_obj90;
void* __right_value414 = (void*)0;
struct sVarTable* __dec_obj98;
struct sBlock* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__116;
    }
    result_413=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj90=result_413->mNodes,
        result_413->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj98=result_413->mVarTable,
        result_413->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_413->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__135 = (struct sBlock*)come_increment_ref_count(result_413);
    come_call_finalizer(sBlock_finalize, result_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__117;
void* __right_value386 = (void*)0;
struct sVarTable* result_414;
void* __right_value413 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj97;
struct sVarTable* __result_obj__134;
    if(    self==(void*)0    ) {
        __result_obj__117 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__117;
    }
    result_414=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj97=result_414->mVars,
        result_414->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_414->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_414->mParent=self->mParent;
    }
    __result_obj__134 = (struct sVarTable*)come_increment_ref_count(result_414);
    come_call_finalizer(sVarTable_finalize, result_414, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__118;
void* __right_value387 = (void*)0;
void* __right_value393 = (void*)0;
struct map$2char$phsVar$ph* result_418;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1char$ph* __dec_obj92;
char* it_421;
struct sVar* default_value_424;
void* __right_value396 = (void*)0;
struct sVar* it2_427;
void* __right_value402 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__133;
default_value_424 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__118;
    }
    result_418=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1995, "struct map$2char$phsVar$ph*"))));
    __dec_obj92=result_418->key_list,
    result_418->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1997, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_421=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_421=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_424,0,sizeof(struct sVar*));
        it2_427=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_421,(struct sVar*)come_increment_ref_count(default_value_424)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_418,(char*)come_increment_ref_count((char*)come_memdup(it_421, "/usr/local/include/comelang.h", 2006, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_427)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_418,(char*)come_increment_ref_count((char*)come_memdup(it_421, "/usr/local/include/comelang.h", 2009, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_427)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_418,(char*)come_increment_ref_count(it_421),(struct sVar*)come_increment_ref_count(sVar_clone(it2_427)));
        }
        else {
            map$2char$phsVar$ph_put(result_418,(char*)come_increment_ref_count(it_421),(struct sVar*)come_increment_ref_count(sVar_clone(it2_427)));
        }
        come_call_finalizer(sVar_finalize, default_value_424, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_427, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__133 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_418);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_415;
int i_416;
    for(    i_415=0    ;    i_415<self->size    ;    i_415++    ){
        if(        self->item_existance[i_415]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_415], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_416=0    ;    i_416<self->size    ;    i_416++    ){
        if(        self->item_existance[i_416]        ) {
            if(            1            ) {
                (self->keys[i_416] = come_decrement_ref_count(self->keys[i_416], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
int i_417;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1char$ph* __dec_obj91;
struct map$2char$phsVar$ph* __result_obj__119;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value388=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value389=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value390=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_417=0    ;    i_417<128    ;    i_417++    ){
        self->item_existance[i_417]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj91=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__119 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_419;
char* __result_obj__120;
char* __result_obj__121;
char* result_420;
char* __result_obj__122;
result_419 = (void*)0;
result_420 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_419,0,sizeof(char*));
        __result_obj__120 = result_419;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_420,0,sizeof(char*));
    __result_obj__122 = result_420;
    return __result_obj__122;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_422;
char* __result_obj__123;
char* __result_obj__124;
char* result_423;
char* __result_obj__125;
result_422 = (void*)0;
result_423 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_422,0,sizeof(char*));
        __result_obj__123 = result_422;
        return __result_obj__123;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__124 = self->key_list->it->item;
        return __result_obj__124;
    }
    memset(&result_423,0,sizeof(char*));
    __result_obj__125 = result_423;
    return __result_obj__125;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_425;
unsigned int it_426;
struct sVar* __result_obj__126;
struct sVar* __result_obj__127;
struct sVar* __result_obj__128;
struct sVar* __result_obj__129;
    hash_425=string_get_hash_key(((char*)key))%self->size;
    it_426=hash_425;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_426]        ) {
            if(            string_equals(self->keys[it_426],key)            ) {
                __result_obj__126 = (struct sVar*)come_increment_ref_count(self->items[it_426]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__126;
            }
            it_426++;
            if(            it_426>=self->size            ) {
                it_426=0;
            }
            else if(            it_426==hash_425            ) {
                __result_obj__127 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_439;
int it_440;
_Bool same_key_exist_441;
char* it2_442;
struct map$2char$phsVar$ph* __result_obj__130;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_439=string_get_hash_key(((char*)key))%self->size;
    it_440=hash_439;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_440]        ) {
            if(            string_equals(self->keys[it_440],key)            ) {
                if(                1                ) {
                    (self->keys[it_440] = come_decrement_ref_count(self->keys[it_440], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_440]);
                    self->keys[it_440]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_440]);
                    self->keys[it_440]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_440], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_440]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_440]=item;
                }
                break;
            }
            it_440++;
            if(            it_440>=self->size            ) {
                it_440=0;
            }
            else if(            it_440==hash_439            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_440]=(_Bool)1;
            if(            1            ) {
                self->keys[it_440]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_440]=key;
            }
            if(            1            ) {
                self->items[it_440]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_440]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_441=(_Bool)0;
    for(    it2_442=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_442=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_442,key)        ) {
            same_key_exist_441=(_Bool)1;
        }
    }
    if(    !same_key_exist_441    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__130 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__130;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_428;
void* __right_value397 = (void*)0;
char** keys_429;
void* __right_value398 = (void*)0;
struct sVar** items_430;
void* __right_value399 = (void*)0;
_Bool* item_existance_431;
int len_432;
char* it_433;
struct sVar* default_value_434;
void* __right_value400 = (void*)0;
struct sVar* it2_435;
unsigned int hash_436;
int n_437;
struct sVar* default_value_438;
void* __right_value401 = (void*)0;
default_value_434 = (void*)0;
default_value_438 = (void*)0;
    size_428=self->size*10;
    keys_429=(char**)come_increment_ref_count(((char**)(__right_value397=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_428)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_430=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value398=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_428)), "/usr/local/include/comelang.h", 2164, "struct sVar**"))));
    item_existance_431=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value399=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_428)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_432=0;
    for(    it_433=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_433=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_434,0,sizeof(struct sVar*));
        it2_435=((struct sVar*)(__right_value400=map$2char$phsVar$ph_at(self,it_433,(struct sVar*)come_increment_ref_count(default_value_434))));
        come_call_finalizer(sVar_finalize, __right_value400, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_436=string_get_hash_key(((char*)it_433))%size_428;
        n_437=hash_436;
        while(        (_Bool)1        ) {
            if(            item_existance_431[n_437]            ) {
                n_437++;
                if(                n_437>=size_428                ) {
                    n_437=0;
                }
                else if(                n_437==hash_436                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_431[n_437]=(_Bool)1;
                keys_429[n_437]=it_433;
                items_430[n_437]=((struct sVar*)(__right_value401=map$2char$phsVar$ph_at(self,it_433,(struct sVar*)come_increment_ref_count(default_value_438))));
                come_call_finalizer(sVar_finalize, __right_value401, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_432++;
                come_call_finalizer(sVar_finalize, default_value_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_434, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_429;
    self->items=items_430;
    self->item_existance=item_existance_431;
    self->size=size_428;
    self->len=len_432;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__131;
void* __right_value403 = (void*)0;
struct sVar* result_443;
void* __right_value404 = (void*)0;
char* __dec_obj93;
void* __right_value405 = (void*)0;
char* __dec_obj94;
void* __right_value406 = (void*)0;
struct sType* __dec_obj95;
void* __right_value407 = (void*)0;
char* __dec_obj96;
struct sVar* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__131;
    }
    result_443=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj93=result_443->mName,
        result_443->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj94=result_443->mCValueName,
        result_443->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj95=result_443->mType,
        result_443->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_443->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_443->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_443->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_443->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj96=result_443->mFunName,
        result_443->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__132 = (struct sVar*)come_increment_ref_count(result_443);
    come_call_finalizer(sVar_finalize, result_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_444;
int i_445;
    for(    i_444=0    ;    i_444<self->size    ;    i_444++    ){
        if(        self->item_existance[i_444]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_444], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_445=0    ;    i_445<self->size    ;    i_445++    ){
        if(        self->item_existance[i_445]        ) {
            if(            1            ) {
                (self->keys[i_445] = come_decrement_ref_count(self->keys[i_445], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_452;
int caller_line_453;
char* caller_sname_454;
_Bool comma_instead_of_semicolon_455;
char* last_code_456;
char* __dec_obj109;
char* last_code2_457;
char* __dec_obj110;
void* __right_value434 = (void*)0;
char* sname_top_458;
int sline_top_459;
struct sType* __dec_obj111;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sFun* funX_460;
void* __right_value438 = (void*)0;
char* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__152;
void* __right_value441 = (void*)0;
struct sType* result_type_467;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sType$ph* param_types_468;
struct list$1sType$ph* o2_saved_469;
struct sType* it_472;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* param_type_475;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1char$ph* param_names_476;
void* __right_value448 = (void*)0;
struct list$1char$ph* param_default_parametors_477;
char* p_478;
int sline_479;
char* sname_480;
char* head_481;
struct buffer* source_482;
void* __right_value449 = (void*)0;
struct buffer* __dec_obj116;
struct sType* generics_type_saved_483;
struct sType* __dec_obj117;
void* __right_value450 = (void*)0;
struct sType* __dec_obj118;
struct list$1char$ph* method_generics_type_names_484;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1char$ph* __dec_obj119;
struct list$1char$ph* o2_saved_485;
char* it_486;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1char$ph* __dec_obj120;
char* __dec_obj121;
void* __right_value455 = (void*)0;
struct sBlock* block_487;
struct buffer* __dec_obj122;
char* __dec_obj123;
_Bool const_fun_488;
_Bool var_args_489;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sFun* fun_490;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value463 = (void*)0;
struct sNode* node_491;
_Bool in_generics_fun_492;
_Bool Value_493;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__159;
struct sType* __dec_obj124;
struct list$1char$ph* __dec_obj125;
void* __right_value467 = (void*)0;
char* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__160;
    caller_fun_452=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_453=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_454=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_455=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_456=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj109=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_457=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj110=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_458=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_459=info->sline;
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj111=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    funX_460=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value436=__builtin_string(fun_name)))));
    (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value436 = come_decrement_ref_count(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(    funX_460    ) {
        __dec_obj112=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_458));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_459;
        __dec_obj113=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_456);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj114=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_457);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_452;
        info->caller_line=caller_line_453;
        info->caller_sname=caller_sname_454;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_455;
        __result_obj__152 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value440=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2088, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_456 = come_decrement_ref_count(last_code_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_457 = come_decrement_ref_count(last_code2_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_458 = come_decrement_ref_count(sname_top_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value440, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__152;
    }
    result_type_467=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(generics_fun->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
    param_types_468=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2093, "struct list$1sType$ph*"))));
    for(    o2_saved_469=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_472=list$1sType$ph_begin((o2_saved_469))    ;    !list$1sType$ph_end((o2_saved_469))    ;    it_472=list$1sType$ph_next((o2_saved_469))    ){
        param_type_475=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_472)),(struct sType*)come_increment_ref_count(generics_type),info));
        list$1sType$ph_add(param_types_468,(struct sType*)come_increment_ref_count(sType_clone(param_type_475)));
        come_call_finalizer(sType_finalize, param_type_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_469, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_476=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_477=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_478=info->p;
    sline_479=info->sline;
    sname_480=(char*)come_increment_ref_count(info->sname);
    head_481=info->head;
    source_482=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj116=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_483=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj117=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj118=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    method_generics_type_names_484=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj119=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2121, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_485=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_486=list$1char$ph_begin((o2_saved_485))    ;    !list$1char$ph_end((o2_saved_485))    ;    it_486=list$1char$ph_next((o2_saved_485))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_486, "05function.c", 2123, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_485, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj120=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj121=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_487=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_481;
    __dec_obj122=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_482);
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_478;
    info->sline=sline_479;
    __dec_obj123=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_480);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_467->mInline=(_Bool)0;
    result_type_467->mStatic=(_Bool)0;
    result_type_467->mUniq=(_Bool)0;
    const_fun_488=generics_fun->mConstFun;
    var_args_489=generics_fun->mVarArgs;
    fun_490=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2147, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_467),(struct list$1sType$ph*)come_increment_ref_count(param_types_468),(struct list$1char$ph*)come_increment_ref_count(param_names_476),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_477),(_Bool)0,var_args_489,(struct sBlock*)come_increment_ref_count(block_487),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_488,((void*)0),((void*)0),0,(_Bool)0));
    fun_490->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_490));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2156, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value462=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2156, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_490),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_491=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunNode_finalize, __right_value462, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    in_generics_fun_492=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_493=node_compile(node_491,info);
    if(    !Value_493    ) {
        __result_obj__159 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value466=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2161, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_456 = come_decrement_ref_count(last_code_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_457 = come_decrement_ref_count(last_code2_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_458 = come_decrement_ref_count(sname_top_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_477, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_480 = come_decrement_ref_count(sname_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_484, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_487, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_490, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_491) ? node_491 = come_decrement_ref_count(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value466, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__159;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_492;
    __dec_obj124=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_483);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj125=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_484);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj126=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_458));
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_459;
    __dec_obj127=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_456);
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj128=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_457);
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_452;
    info->caller_line=caller_line_453;
    info->caller_sname=caller_sname_454;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_455;
    __result_obj__160 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value470=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2181, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_456 = come_decrement_ref_count(last_code_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_457 = come_decrement_ref_count(last_code2_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_458 = come_decrement_ref_count(sname_top_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, funX_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_477, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_480 = come_decrement_ref_count(sname_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_484, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_487, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_490, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_491) ? node_491 = come_decrement_ref_count(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value470, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_461;
unsigned int hash_462;
unsigned int it_463;
struct sFun* __result_obj__143;
struct sFun* __result_obj__144;
struct sFun* __result_obj__145;
struct sFun* __result_obj__146;
default_value_461 = (void*)0;
    memset(&default_value_461,0,sizeof(struct sFun*));
    hash_462=string_get_hash_key(((char*)key))%self->size;
    it_463=hash_462;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_463]        ) {
            if(            string_equals(self->keys[it_463],key)            ) {
                __result_obj__143 = (struct sFun*)come_increment_ref_count(self->items[it_463]);
                come_call_finalizer(sFun_finalize, default_value_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__143;
            }
            it_463++;
            if(            it_463>=self->size            ) {
                it_463=0;
            }
            else if(            it_463==hash_462            ) {
                __result_obj__144 = (struct sFun*)come_increment_ref_count(default_value_461);
                come_call_finalizer(sFun_finalize, default_value_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sFun*)come_increment_ref_count(default_value_461);
            come_call_finalizer(sFun_finalize, default_value_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sFun*)come_increment_ref_count(default_value_461);
    come_call_finalizer(sFun_finalize, default_value_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_464;
unsigned int hash_465;
unsigned int it_466;
struct sFun* __result_obj__147;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
struct sFun* __result_obj__150;
default_value_464 = (void*)0;
    memset(&default_value_464,0,sizeof(struct sFun*));
    hash_465=string_get_hash_key(((char*)key))%self->size;
    it_466=hash_465;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_466]        ) {
            if(            string_equals(self->keys[it_466],key)            ) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(self->items[it_466]);
                come_call_finalizer(sFun_finalize, default_value_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__147;
            }
            it_466++;
            if(            it_466>=self->size            ) {
                it_466=0;
            }
            else if(            it_466==hash_465            ) {
                __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value_464);
                come_call_finalizer(sFun_finalize, default_value_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__148;
            }
        }
        else {
            __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value_464);
            come_call_finalizer(sFun_finalize, default_value_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__149;
        }
    }
    __result_obj__150 = (struct sFun*)come_increment_ref_count(default_value_464);
    come_call_finalizer(sFun_finalize, default_value_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj115;
struct tuple2$2char$phbool$* __result_obj__151;
    __dec_obj115=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__151 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_470;
struct sType* __result_obj__153;
struct sType* __result_obj__154;
struct sType* result_471;
struct sType* __result_obj__155;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_470,0,sizeof(struct sType*));
        __result_obj__153 = result_470;
        return __result_obj__153;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__154 = self->it->item;
        return __result_obj__154;
    }
    memset(&result_471,0,sizeof(struct sType*));
    __result_obj__155 = result_471;
    return __result_obj__155;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_473;
struct sType* __result_obj__156;
struct sType* __result_obj__157;
struct sType* result_474;
struct sType* __result_obj__158;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_473,0,sizeof(struct sType*));
        __result_obj__156 = result_473;
        return __result_obj__156;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_474,0,sizeof(struct sType*));
    __result_obj__158 = result_474;
    return __result_obj__158;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_494;
int caller_line_495;
char* caller_sname_496;
_Bool comma_instead_of_semicolon_497;
char* last_code_498;
char* __dec_obj129;
char* last_code2_499;
char* __dec_obj130;
void* __right_value471 = (void*)0;
char* sname_top_500;
int sline_top_501;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sFun* funX_502;
void* __right_value475 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
_Bool __result_obj__161;
void* __right_value476 = (void*)0;
struct sType* result_type_503;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1sType$ph* param_types_504;
struct list$1sType$ph* o2_saved_505;
struct sType* it_506;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* param_type_507;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1char$ph* param_names_508;
void* __right_value483 = (void*)0;
struct list$1char$ph* param_default_parametors_509;
char* p_510;
int sline_511;
char* sname_512;
char* head_513;
struct buffer* source_514;
void* __right_value484 = (void*)0;
struct buffer* __dec_obj134;
struct list$1char$ph* method_generics_type_names_515;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_516;
char* it_517;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value489 = (void*)0;
struct sBlock* block_518;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_519;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sFun* fun_520;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value498 = (void*)0;
struct sNode* node_521;
_Bool Value_522;
void* __if_result__1_523 = (void*)0;
_Bool __result_obj__162;
struct list$1char$ph* __dec_obj140;
void* __right_value499 = (void*)0;
char* __dec_obj141;
char* __dec_obj142;
char* __dec_obj143;
_Bool __result_obj__163;
    caller_fun_494=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_495=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_496=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_497=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_498=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_499=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_500=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_501=info->sline;
    funX_502=((struct sFun*)(__right_value474=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value473=__builtin_string(fun_name))))));
    (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value474, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    funX_502    ) {
        __dec_obj131=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_500));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_501;
        __dec_obj132=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_498);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj133=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_499);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_494;
        info->caller_line=caller_line_495;
        info->caller_sname=caller_sname_496;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_497;
        __result_obj__161 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_498 = come_decrement_ref_count(last_code_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_499 = come_decrement_ref_count(last_code2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_500 = come_decrement_ref_count(sname_top_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    result_type_503=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_504=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2220, "struct list$1sType$ph*"))));
    for(    o2_saved_505=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_506=list$1sType$ph_begin((o2_saved_505))    ;    !list$1sType$ph_end((o2_saved_505))    ;    it_506=list$1sType$ph_next((o2_saved_505))    ){
        param_type_507=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value479=sType_clone(it_506))),info));
        come_call_finalizer(sType_finalize, __right_value479, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_add(param_types_504,(struct sType*)come_increment_ref_count(sType_clone(param_type_507)));
        come_call_finalizer(sType_finalize, param_type_507, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_508=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_509=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_510=info->p;
    sline_511=info->sline;
    sname_512=(char*)come_increment_ref_count(info->sname);
    head_513=info->head;
    source_514=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj134=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_515=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2242, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_516=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_517=list$1char$ph_begin((o2_saved_516))    ;    !list$1char$ph_end((o2_saved_516))    ;    it_517=list$1char$ph_next((o2_saved_516))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_517, "05function.c", 2244, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_518=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_513;
    __dec_obj138=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_514);
    come_call_finalizer(buffer_finalize, __dec_obj138,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_510;
    info->sline=sline_511;
    __dec_obj139=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_512);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_503->mInline=(_Bool)0;
    result_type_503->mStatic=(_Bool)0;
    result_type_503->mUniq=(_Bool)0;
    var_args_519=generics_fun->mVarArgs;
    fun_520=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2266, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_503),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_504)),(struct list$1char$ph*)come_increment_ref_count(param_names_508),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_509),(_Bool)0,var_args_519,(struct sBlock*)come_increment_ref_count(block_518),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun_520->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_520));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2274, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value497=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2274, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_520),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_521=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value497, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_522=node_compile(node_521,info);
    if(    !Value_522    ) {
        __result_obj__162 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_498 = come_decrement_ref_count(last_code_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_499 = come_decrement_ref_count(last_code2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_500 = come_decrement_ref_count(sname_top_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_503, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_504, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_508, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_512 = come_decrement_ref_count(sname_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_514, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_515, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_520, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__162;
    }
    else {
        __if_result__1_523=(void*)(Value_522);
;
    }
    __dec_obj140=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_515);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj141=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_500));
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_501;
    __dec_obj142=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_498);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj143=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_499);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_494;
    info->caller_line=caller_line_495;
    info->caller_sname=caller_sname_496;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_497;
    __result_obj__163 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code_498 = come_decrement_ref_count(last_code_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_499 = come_decrement_ref_count(last_code2_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_500 = come_decrement_ref_count(sname_top_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_503, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_504, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_508, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_512 = come_decrement_ref_count(sname_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_514, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_515, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_520, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_521) ? node_521 = come_decrement_ref_count(node_521, ((struct sNode*)node_521)->finalize, ((struct sNode*)node_521)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__163;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_524;
char* source_head_525;
void* __right_value500 = (void*)0;
char* attribute_526;
struct sType* result_type_527;
char* var_name_528;
_Bool constructor__529;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj144;
void* __right_value503 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2_530=0;
char* var_name2_531=0;
_Bool err_532=0;
struct sType* __dec_obj145;
char* __dec_obj146;
_Bool method_definition_533;
char* p_534;
int sline_535;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct buffer* buf2_536;
char* fun_name_537;
char* base_fun_name_538;
struct sType* obj_type2_539;
void* __right_value506 = (void*)0;
char* __dec_obj147;
void* __right_value507 = (void*)0;
char* __dec_obj148;
void* __right_value508 = (void*)0;
struct sType* __dec_obj149;
void* __right_value509 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type_540=0;
char* name_541=0;
_Bool err_542=0;
void* __right_value510 = (void*)0;
char* __dec_obj150;
void* __right_value511 = (void*)0;
char* __dec_obj151;
void* __right_value512 = (void*)0;
struct sType* __dec_obj152;
void* __right_value513 = (void*)0;
char* __dec_obj153;
void* __right_value514 = (void*)0;
char* __dec_obj154;
void* __right_value515 = (void*)0;
struct sType* __dec_obj155;
void* __right_value516 = (void*)0;
char* __dec_obj156;
void* __right_value517 = (void*)0;
char* __dec_obj157;
void* __right_value518 = (void*)0;
struct sType* __dec_obj158;
void* __right_value519 = (void*)0;
char* __dec_obj159;
void* __right_value520 = (void*)0;
char* __dec_obj160;
void* __right_value521 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types_543=0;
struct list$1char$ph* param_names_544=0;
struct list$1char$ph* param_default_parametors_545=0;
_Bool var_args_546=0;
char* header_tail_547;
void* __right_value522 = (void*)0;
_Bool const_fun_548;
int version_549;
int n_550;
void* __right_value523 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun_551=0;
char* fun_attribute_552=0;
void* __right_value524 = (void*)0;
char* __dec_obj161;
_Bool in_top_level_553;
void* __right_value525 = (void*)0;
struct sBlock* block_554;
void* __right_value526 = (void*)0;
char* fun_name_556;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sFun* fun_557;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sFun* fun2_558;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value540 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value541 = (void*)0;
char* none_generics_name_560;
void* __right_value542 = (void*)0;
char* generics_sname_561;
int generics_sline_562;
void* __right_value543 = (void*)0;
char* block_563;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sGenericsFun* fun_564;
void* __right_value550 = (void*)0;
char* fun_name3_565;
void* __right_value556 = (void*)0;
struct sNode* __result_obj__178;
void* __right_value557 = (void*)0;
char* generics_sname_587;
int generics_sline_588;
void* __right_value558 = (void*)0;
char* block_589;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sGenericsFun* fun_590;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* __result_obj__179;
char* source_tail_591;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* new_fun_name_592;
void* __right_value569 = (void*)0;
char* __dec_obj163;
_Bool static_fun_593;
_Bool inline_fun_594;
_Bool uniq_fun_595;
void* __right_value570 = (void*)0;
char* generics_sname_596;
int generics_sline_597;
void* __right_value571 = (void*)0;
char* block_598;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_599;
void* __right_value575 = (void*)0;
char* header_600;
void* __right_value576 = (void*)0;
char* id_601;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value583 = (void*)0;
struct sNode* __result_obj__180;
void* __right_value584 = (void*)0;
struct sBlock* block_602;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* fun_603;
void* __right_value589 = (void*)0;
char* header_604;
void* __right_value590 = (void*)0;
char* id_605;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value596 = (void*)0;
char* new_fun_name_606;
void* __right_value597 = (void*)0;
char* __dec_obj164;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sFun* fun_607;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
char* header_608;
void* __right_value603 = (void*)0;
char* id_609;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__182;
void* __right_value607 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_610=0;
char* fun_attribute2_611=0;
void* __right_value608 = (void*)0;
char* __dec_obj165;
void* __right_value609 = (void*)0;
char* __dec_obj166;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sFun* fun_612;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* header_613;
void* __right_value615 = (void*)0;
char* id_614;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value618 = (void*)0;
struct sNode* __result_obj__183;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__184;
fun_name_537 = (void*)0;
    header_head_524=info->p;
    source_head_525=info->p;
    attribute_526=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_527=((void*)0);
    var_name_528=((void*)0);
    constructor__529=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0    ) {
        ((char*)(__right_value501=parse_word(info)));
        (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        __dec_obj144=result_type_527,
        result_type_527=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_527->mHeap=(_Bool)1;
        constructor__529=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value503=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_530=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_531=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_532=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value503, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj145=result_type_527,
        result_type_527=(struct sType*)come_increment_ref_count(result_type2_530);
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj146=var_name_528,
        var_name_528=(char*)come_increment_ref_count(var_name2_531);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        !err_532        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name2_531 = come_decrement_ref_count(var_name2_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    method_definition_533=(_Bool)0;
    {
        p_534=info->p;
        sline_535=info->sline;
        buf2_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2335, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95        ) {
            buffer_append_char(buf2_536,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_536)>0&&*info->p==58&&*(info->p+1)==58        ) {
            method_definition_533=(_Bool)1;
        }
        info->p=p_534;
        info->sline=sline_535;
        come_call_finalizer(buffer_finalize, buf2_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    base_fun_name_538=((void*)0);
    obj_type2_539=((void*)0);
    if(    constructor__529    ) {
        __dec_obj147=base_fun_name_538,
        base_fun_name_538=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj148=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_538,info,(_Bool)1));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj149=obj_type2_539,
        obj_type2_539=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    method_definition_533    ) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value509=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_540=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_541=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_542=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value509, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_542        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj150=base_fun_name_538,
        base_fun_name_538=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj151=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(create_method_name(obj_type_540,(_Bool)0,base_fun_name_538,info,(_Bool)1));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj152=obj_type2_539,
        obj_type2_539=(struct sType*)come_increment_ref_count(sType_clone(obj_type_540));
        come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_541 = come_decrement_ref_count(name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    info->impl_type    ) {
        __dec_obj153=base_fun_name_538,
        base_fun_name_538=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj154=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_538,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj155=obj_type2_539,
        obj_type2_539=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->class_type    ) {
        __dec_obj156=base_fun_name_538,
        base_fun_name_538=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj157=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_538,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj158=obj_type2_539,
        obj_type2_539=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj159=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj160=base_fun_name_538,
        base_fun_name_538=(char*)come_increment_ref_count(__builtin_string(fun_name_537));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_538,"initialize")    ) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value521=parse_params(info,constructor__529)));
    param_types_543=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_544=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_545=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_546=multiple_assign_var9->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value521, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    header_tail_547=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_538,"initialize")    ) {
        info->in_class=(_Bool)1;
    }
    if(    result_type_527->mImmutable    ) {
        if(        method_definition_533||info->impl_type||info->class_type        ) {
            if(            list$1sType$ph_length(param_types_543)>0            ) {
                ((struct sType*)(__right_value522=list$1sType$ph_operator_load_element(param_types_543,0)))->mImmutable=(_Bool)1;
                come_call_finalizer(sType_finalize, __right_value522, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    const_fun_548=(_Bool)0;
    version_549=0;
    if(    parsecmp("version",info)    ) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_550=0;
        while(        xisdigit(*info->p)        ) {
            n_550=n_550*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_549=n_550;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value523=parse_function_attribute(info)));
    asm_fun_551=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute_552=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value523, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    string_operator_not_equals(asm_fun_551,"")    ) {
        __dec_obj161=fun_name_537,
        fun_name_537=(char*)come_increment_ref_count(__builtin_string(asm_fun_551));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    in_top_level_553=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_538,"lambda")    ) {
        block_554=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_555=0;
        lambda_num_555++;
        fun_name_556=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_555));
        result_type_527->mInline=(_Bool)0;
        result_type_527->mStatic=(_Bool)0;
        result_type_527->mUniq=(_Bool)0;
        fun_557=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2464, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_556)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),(_Bool)0,var_args_546,(struct sBlock*)come_increment_ref_count(block_554),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_548,((void*)0),((void*)0),0,(_Bool)0));
        fun2_558=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value533=__builtin_string(fun_name_556)))));
        (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_556)),(struct sFun*)come_increment_ref_count(fun_557));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2474, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value537=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2474, "struct sLambdaNode*")),fun_557,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value540=_inf_value5)));
        come_call_finalizer(sBlock_finalize, block_554, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_556 = come_decrement_ref_count(fun_name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_558, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value537, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value540) ? __right_value540 = come_decrement_ref_count(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
        come_call_finalizer(sBlock_finalize, block_554, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_556 = come_decrement_ref_count(fun_name_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_558, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0    ) {
        none_generics_name_560=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_561=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_562=info->sline;
        block_563=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_564=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2484, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value545=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value546=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),var_args_546,(char*)come_increment_ref_count(block_563),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_561)),generics_sline_562,const_fun_548));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value545, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value546, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fun_name3_565=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_560,base_fun_name_538));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_565)),(struct sGenericsFun*)come_increment_ref_count(fun_564));
        __result_obj__178 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_560 = come_decrement_ref_count(none_generics_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_561 = come_decrement_ref_count(generics_sname_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_563 = come_decrement_ref_count(block_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_564, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_565 = come_decrement_ref_count(fun_name3_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__178;
        (none_generics_name_560 = come_decrement_ref_count(none_generics_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_561 = come_decrement_ref_count(generics_sname_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_563 = come_decrement_ref_count(block_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_564, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_565 = come_decrement_ref_count(fun_name3_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0    ) {
        generics_sname_587=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_588=info->sline;
        block_589=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_590=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2498, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value560=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value561=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),var_args_546,(char*)come_increment_ref_count(block_589),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_587)),generics_sline_588,const_fun_548));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value560, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value561, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        method_definition_533        ) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sGenericsFun*)come_increment_ref_count(fun_590));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_538)),(struct sGenericsFun*)come_increment_ref_count(fun_590));
        }
        __result_obj__179 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_587 = come_decrement_ref_count(generics_sname_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_589 = come_decrement_ref_count(block_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__179;
        (generics_sname_587 = come_decrement_ref_count(generics_sname_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_589 = come_decrement_ref_count(block_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==123    ) {
        source_tail_591=info->p-1;
        if(        version_549>0        ) {
            new_fun_name_592=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value567=__builtin_string(fun_name_537))),version_549));
            (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj163=fun_name_537,
            fun_name_537=(char*)come_increment_ref_count(__builtin_string(new_fun_name_592));
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_592 = come_decrement_ref_count(new_fun_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        static_fun_593=(_Bool)0;
        if(        result_type_527->mStatic        ) {
            result_type_527->mStatic=(_Bool)0;
            result_type_527->mUniq=(_Bool)0;
            static_fun_593=(_Bool)1;
        }
        inline_fun_594=(_Bool)0;
        if(        result_type_527->mInline        ) {
            result_type_527->mInline=(_Bool)0;
            result_type_527->mUniq=(_Bool)0;
            inline_fun_594=(_Bool)1;
        }
        uniq_fun_595=(_Bool)0;
        if(        result_type_527->mUniq        ) {
            result_type_527->mUniq=(_Bool)0;
            result_type_527->mInline=(_Bool)0;
            result_type_527->mStatic=(_Bool)0;
            uniq_fun_595=(_Bool)1;
        }
        if(        result_type_527->mUniq        ) {
            result_type_527->mUniq=(_Bool)0;
            result_type_527->mInline=(_Bool)0;
            result_type_527->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq        ) {
            uniq_fun_595=(_Bool)1;
        }
        if(        uniq_fun_595        ) {
            generics_sname_596=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_597=info->sline;
            block_598=(char*)come_increment_ref_count(skip_block(info,constructor__529));
            fun_599=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2553, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),(_Bool)0,var_args_546,((void*)0),static_fun_593,info,inline_fun_594,uniq_fun_595,(_Bool)0,(char*)come_increment_ref_count(attribute_526),(char*)come_increment_ref_count(fun_attribute_552),const_fun_548,(char*)come_increment_ref_count(block_598),(char*)come_increment_ref_count(generics_sname_596),generics_sline_597,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_527->mStatic&&!info->no_output_come_code                ) {
                    header_600=(char*)come_increment_ref_count(make_come_header_function(fun_599,(char*)come_increment_ref_count(base_fun_name_538),(struct sType*)come_increment_ref_count(obj_type2_539),version_549,info));
                    id_601=(char*)come_increment_ref_count(__builtin_string(fun_name_537));
                    add_come_code_at_come_header(info,id_601,"%s",header_600);
                    (header_600 = come_decrement_ref_count(header_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_601 = come_decrement_ref_count(id_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_599));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_599));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_599));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_599));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2581, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value582=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2581, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_599),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__180 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value583=_inf_value6)));
            (generics_sname_596 = come_decrement_ref_count(generics_sname_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_598 = come_decrement_ref_count(block_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value583) ? __right_value583 = come_decrement_ref_count(__right_value583, ((struct sNode*)__right_value583)->finalize, ((struct sNode*)__right_value583)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__180;
            (generics_sname_596 = come_decrement_ref_count(generics_sname_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_598 = come_decrement_ref_count(block_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            block_602=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__529,(_Bool)1));
            fun_603=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2586, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),(_Bool)0,var_args_546,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_602)),static_fun_593,info,inline_fun_594,uniq_fun_595,(_Bool)0,(char*)come_increment_ref_count(attribute_526),(char*)come_increment_ref_count(fun_attribute_552),const_fun_548,((void*)0),((void*)0),0,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_527->mStatic&&!info->no_output_come_code                ) {
                    header_604=(char*)come_increment_ref_count(make_come_header_function(fun_603,(char*)come_increment_ref_count(base_fun_name_538),(struct sType*)come_increment_ref_count(obj_type2_539),version_549,info));
                    id_605=(char*)come_increment_ref_count(__builtin_string(fun_name_537));
                    add_come_code_at_come_header(info,id_605,"%s",header_604);
                    (header_604 = come_decrement_ref_count(header_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_605 = come_decrement_ref_count(id_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_603));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_603));
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2612, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value594=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2612, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_603),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value595=_inf_value7)));
            come_call_finalizer(sBlock_finalize, block_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value594, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__181;
            come_call_finalizer(sBlock_finalize, block_602, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_603, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59    ) {
        if(        version_549>0        ) {
            new_fun_name_606=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_537,version_549));
            __dec_obj164=fun_name_537,
            fun_name_537=(char*)come_increment_ref_count(__builtin_string(new_fun_name_606));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_606 = come_decrement_ref_count(new_fun_name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_527->mStatic=(_Bool)0;
            result_type_527->mUniq=(_Bool)0;
            result_type_527->mInline=(_Bool)0;
            fun_607=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2629, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),(_Bool)1,var_args_546,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_526),(char*)come_increment_ref_count(fun_attribute_552),const_fun_548,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_607));
            if(            info->output_header_file            ) {
                if(                !result_type_527->mStatic&&!info->no_output_come_code                ) {
                    header_608=(char*)come_increment_ref_count(make_come_header_function(fun_607,(char*)come_increment_ref_count(base_fun_name_538),(struct sType*)come_increment_ref_count(obj_type2_539),version_549,info));
                    id_609=(char*)come_increment_ref_count(__builtin_string(fun_name_537));
                    add_come_code_at_come_header(info,id_609,"%s",header_608);
                    (header_608 = come_decrement_ref_count(header_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_609 = come_decrement_ref_count(id_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2649, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2649, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_607),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__182 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value8)));
            come_call_finalizer(sFun_finalize, fun_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value605, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__182;
            come_call_finalizer(sFun_finalize, fun_607, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value607=parse_function_attribute(info)));
            asm_fun_610=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2_611=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value607, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            string_operator_not_equals(asm_fun_610,"")            ) {
                __dec_obj165=fun_name_537,
                fun_name_537=(char*)come_increment_ref_count(__builtin_string(asm_fun_610));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            __dec_obj166=fun_attribute_552,
            fun_attribute_552=(char*)come_increment_ref_count(string_operator_add(fun_attribute_552,fun_attribute2_611));
            __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            result_type_527->mStatic=(_Bool)0;
            result_type_527->mUniq=(_Bool)0;
            result_type_527->mInline=(_Bool)0;
            fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2664, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sType*)come_increment_ref_count(result_type_527),(struct list$1sType$ph*)come_increment_ref_count(param_types_543),(struct list$1char$ph*)come_increment_ref_count(param_names_544),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_545),(_Bool)1,var_args_546,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_526),(char*)come_increment_ref_count(fun_attribute_552),const_fun_548,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_537)),(struct sFun*)come_increment_ref_count(fun_612));
            if(            info->output_header_file            ) {
                if(                !result_type_527->mStatic&&!info->no_output_come_code                ) {
                    header_613=(char*)come_increment_ref_count(make_come_header_function(fun_612,(char*)come_increment_ref_count(base_fun_name_538),(struct sType*)come_increment_ref_count(obj_type2_539),version_549,info));
                    id_614=(char*)come_increment_ref_count(__builtin_string(fun_name_537));
                    add_come_code_at_come_header(info,id_614,"%s",header_613);
                    (header_613 = come_decrement_ref_count(header_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_614 = come_decrement_ref_count(id_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2685, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value617=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2685, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_612),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value618=_inf_value9)));
            (asm_fun_610 = come_decrement_ref_count(asm_fun_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_611 = come_decrement_ref_count(fun_attribute2_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_612, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value617, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value618) ? __right_value618 = come_decrement_ref_count(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__183;
            (asm_fun_610 = come_decrement_ref_count(asm_fun_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_611 = come_decrement_ref_count(fun_attribute2_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_612, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value619=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value619, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_553;
    __result_obj__184 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_526 = come_decrement_ref_count(attribute_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_528 = come_decrement_ref_count(var_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name_537 = come_decrement_ref_count(fun_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (base_fun_name_538 = come_decrement_ref_count(base_fun_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_543, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_544, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (asm_fun_551 = come_decrement_ref_count(asm_fun_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_attribute_552 = come_decrement_ref_count(fun_attribute_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__184;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__164;
void* __right_value538 = (void*)0;
struct sLambdaNode* result_559;
void* __right_value539 = (void*)0;
char* __dec_obj162;
struct sLambdaNode* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_559=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)    ) {
        result_559->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj162=result_559->sname,
        result_559->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_559->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_559->mFun=self->mFun;
    }
    __result_obj__165 = result_559;
    come_call_finalizer(sLambdaNode_finalize, result_559, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_583;
unsigned int it_584;
_Bool same_key_exist_585;
char* it2_586;
struct map$2char$phsGenericsFun$ph* __result_obj__177;
    if(    self->len*10>=self->size    ) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_583=string_get_hash_key(((char*)key))%self->size;
    it_584=hash_583;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_584]        ) {
            if(            string_equals(self->keys[it_584],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    (self->keys[it_584] = come_decrement_ref_count(self->keys[it_584], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_584]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    self->keys[it_584]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it_584], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_584]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_584]=item;
                }
                break;
            }
            it_584++;
            if(            it_584>=self->size            ) {
                it_584=0;
            }
            else if(            it_584==hash_583            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_584]=(_Bool)1;
            if(            1            ) {
                self->keys[it_584]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_584]=key;
            }
            if(            1            ) {
                self->items[it_584]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_584]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_585=(_Bool)0;
    for(    it2_586=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_586=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_586,key)        ) {
            same_key_exist_585=(_Bool)1;
        }
    }
    if(    !same_key_exist_585    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__177 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__177;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_566;
void* __right_value551 = (void*)0;
char** keys_567;
void* __right_value552 = (void*)0;
struct sGenericsFun** items_568;
void* __right_value553 = (void*)0;
_Bool* item_existance_569;
int len_570;
char* it_573;
struct sGenericsFun* default_value_576;
void* __right_value554 = (void*)0;
struct sGenericsFun* it2_577;
unsigned int hash_580;
int n_581;
struct sGenericsFun* default_value_582;
void* __right_value555 = (void*)0;
default_value_576 = (void*)0;
default_value_582 = (void*)0;
    size_566=self->size*10;
    keys_567=(char**)come_increment_ref_count(((char**)(__right_value551=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_566)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_568=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value552=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_566)), "/usr/local/include/comelang.h", 2164, "struct sGenericsFun**"))));
    item_existance_569=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value553=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_566)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_570=0;
    for(    it_573=map$2char$phsGenericsFun$ph_begin(self)    ;    !map$2char$phsGenericsFun$ph_end(self)    ;    it_573=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_576,0,sizeof(struct sGenericsFun*));
        it2_577=((struct sGenericsFun*)(__right_value554=map$2char$phsGenericsFun$ph_at(self,it_573,(struct sGenericsFun*)come_increment_ref_count(default_value_576))));
        come_call_finalizer(sGenericsFun_finalize, __right_value554, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_580=string_get_hash_key(((char*)it_573))%size_566;
        n_581=hash_580;
        while(        (_Bool)1        ) {
            if(            item_existance_569[n_581]            ) {
                n_581++;
                if(                n_581>=size_566                ) {
                    n_581=0;
                }
                else if(                n_581==hash_580                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_569[n_581]=(_Bool)1;
                keys_567[n_581]=it_573;
                items_568[n_581]=((struct sGenericsFun*)(__right_value555=map$2char$phsGenericsFun$ph_at(self,it_573,(struct sGenericsFun*)come_increment_ref_count(default_value_582))));
                come_call_finalizer(sGenericsFun_finalize, __right_value555, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_570++;
                come_call_finalizer(sGenericsFun_finalize, default_value_582, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_582, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value_576, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_567;
    self->items=items_568;
    self->item_existance=item_existance_569;
    self->size=size_566;
    self->len=len_570;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_571;
char* __result_obj__167;
char* __result_obj__168;
char* result_572;
char* __result_obj__169;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_571,0,sizeof(char*));
        __result_obj__167 = result_571;
        return __result_obj__167;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__168 = self->key_list->it->item;
        return __result_obj__168;
    }
    memset(&result_572,0,sizeof(char*));
    __result_obj__169 = result_572;
    return __result_obj__169;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_574;
char* __result_obj__170;
char* __result_obj__171;
char* result_575;
char* __result_obj__172;
result_574 = (void*)0;
result_575 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_574,0,sizeof(char*));
        __result_obj__170 = result_574;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_575,0,sizeof(char*));
    __result_obj__172 = result_575;
    return __result_obj__172;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_578;
unsigned int it_579;
struct sGenericsFun* __result_obj__173;
struct sGenericsFun* __result_obj__174;
struct sGenericsFun* __result_obj__175;
struct sGenericsFun* __result_obj__176;
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_579]        ) {
            if(            string_equals(self->keys[it_579],key)            ) {
                __result_obj__173 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_579]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__173;
            }
            it_579++;
            if(            it_579>=self->size            ) {
                it_579=0;
            }
            else if(            it_579==hash_578            ) {
                __result_obj__174 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__176;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_615;
char* __dec_obj167;
char* last_code2_616;
char* __dec_obj168;
_Bool comma_instead_of_semicolon_617;
struct sClass* current_stack_frame_struct_618;
char* real_fun_name_619;
struct sFun* finalizer_620;
void* __right_value620 = (void*)0;
struct sType* type_before_621;
void* __right_value621 = (void*)0;
struct sType* type2_622;
void* __right_value622 = (void*)0;
char* fun_name2_623;
struct sType* __dec_obj169;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
char* none_generics_name_624;
void* __right_value625 = (void*)0;
char* generics_fun_name_625;
void* __right_value626 = (void*)0;
struct sGenericsFun* generics_fun_626;
void* __right_value627 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_633=0;
_Bool err_634=0;
void* __right_value628 = (void*)0;
char* __dec_obj170;
int i_635;
void* __right_value629 = (void*)0;
char* new_fun_name_636;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __dec_obj171;
void* __right_value632 = (void*)0;
char* __dec_obj172;
struct sType* __dec_obj173;
void* __right_value633 = (void*)0;
char* __dec_obj174;
void* __right_value634 = (void*)0;
char* user_real_fun_name_637;
void* __right_value635 = (void*)0;
struct sFun* user_finalizer_638;
void* __right_value636 = (void*)0;
struct sType* type2_639;
struct sType* __dec_obj175;
struct sClass* klass_640;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* source_641;
void* __right_value639 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_650;
struct tuple2$2char$phsType$ph* it_653;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_656=0;
struct sType* field_type_657=0;
char* p_660;
int sline_661;
char* sname_662;
char* head_663;
struct buffer* source3_664;
struct buffer* __dec_obj176;
void* __right_value640 = (void*)0;
char* __dec_obj177;
void* __right_value641 = (void*)0;
struct sBlock* block_665;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* result_type_666;
void* __right_value645 = (void*)0;
char* name_667;
void* __right_value646 = (void*)0;
struct sType* self_type_668;
struct sType* __list_values13___670[1];
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sType$ph* param_types_669;
void* __right_value649 = (void*)0;
char* __list_values14___671[1];
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1char$ph* param_names_672;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1char$ph* param_default_parametors_673;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* fun2_674;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* fun_675;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value664 = (void*)0;
struct sNode* node_676;
_Bool Value_677;
struct buffer* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__208;
memset(&i_635, 0, sizeof(int));
    last_code_615=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj167=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_616=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj168=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_617=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_618=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_619=((void*)0);
    finalizer_620=((void*)0);
    type_before_621=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_622=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_622->mHeap=(_Bool)0;
    fun_name2_623=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj169=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj169,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        finalizer_620=((struct sFun*)(__right_value623=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_623)));
        come_call_finalizer(sFun_finalize, __right_value623, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        finalizer_620==((void*)0)        ) {
            none_generics_name_624=(char*)come_increment_ref_count(get_none_generics_name(type2_622->mClass->mName));
            generics_fun_name_625=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_624,fun_name));
            generics_fun_626=((struct sGenericsFun*)(__right_value626=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_625)));
            come_call_finalizer(sGenericsFun_finalize, __right_value626, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_626            ) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value627=create_generics_fun((char*)come_increment_ref_count(fun_name2_623),generics_fun_626,(struct sType*)come_increment_ref_count(type),info)));
                name_633=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err_634=multiple_assign_var12->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value627, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_634                ) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_620=((struct sFun*)(__right_value628=map$2char$phsFun$ph_operator_load_element(info->funcs,name_633)));
                come_call_finalizer(sFun_finalize, __right_value628, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_633 = come_decrement_ref_count(name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_624 = come_decrement_ref_count(none_generics_name_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_625 = come_decrement_ref_count(generics_fun_name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __dec_obj170=real_fun_name_619,
        real_fun_name_619=(char*)come_increment_ref_count(fun_name2_623);
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        for(        i_635=128-1        ;        i_635>=1        ;        i_635--        ){
            new_fun_name_636=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_623,i_635));
            finalizer_620=((struct sFun*)(__right_value630=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_636)));
            come_call_finalizer(sFun_finalize, __right_value630, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_620            ) {
                __dec_obj171=fun_name2_623,
                fun_name2_623=(char*)come_increment_ref_count(__builtin_string(new_fun_name_636));
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_636 = come_decrement_ref_count(new_fun_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_636 = come_decrement_ref_count(new_fun_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_620==((void*)0)        ) {
            finalizer_620=((struct sFun*)(__right_value632=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_623)));
            come_call_finalizer(sFun_finalize, __right_value632, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj172=real_fun_name_619,
        real_fun_name_619=(char*)come_increment_ref_count(fun_name2_623);
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    finalizer_620==((void*)0)    ) {
        __dec_obj173=type,
        type=(struct sType*)come_increment_ref_count(type_before_621);
        come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj174=real_fun_name_619,
        real_fun_name_619=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        user_real_fun_name_637=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_638=((struct sFun*)(__right_value635=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_637)));
        come_call_finalizer(sFun_finalize, __right_value635, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_639=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        __dec_obj175=type,
        type=(struct sType*)come_increment_ref_count(type2_639);
        come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        klass_640=type->mClass;
        if(        type->mPointerNum>0&&klass_640->mStruct||type->mAllocaValue        ) {
            source_641=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2785, "struct buffer*"))));
            buffer_append_char(source_641,123);
            klass_640=((struct sClass*)(__right_value639=map$2char$phsClass$ph_operator_load_element(info->classes,klass_640->mName)));
            come_call_finalizer(sClass_finalize, __right_value639, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_650=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_640->mFields)),it_653=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_650))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_650))            ;            it_653=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_650))            ){
                multiple_assign_var13=it_653;
                name_656=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_657=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                field_type_657->mHeap                ) {
                    char source2_658[1024];
                    memset(&source2_658, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_658,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_656,name_656,name_656,name_656);
                    buffer_append_str(source_641,source2_658);
                }
                else if(                field_type_657->mChannel                ) {
                    char source2_659[1024];
                    memset(&source2_659, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_659,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_656,name_656);
                    buffer_append_str(source_641,source2_659);
                    snprintf(source2_659,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_656,name_656);
                    buffer_append_str(source_641,source2_659);
                }
                (name_656 = come_decrement_ref_count(name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_657, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_650, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            buffer_append_char(source_641,125);
            p_660=info->p;
            sline_661=info->sline;
            sname_662=(char*)come_increment_ref_count(info->sname);
            head_663=info->head;
            source3_664=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj176=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_641);
            come_call_finalizer(buffer_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=source_641->buf;
            info->head=source_641->buf;
            __dec_obj177=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_619));
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=0;
            block_665=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_666=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_667=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_619, "05function.c", 2837, "char*"));
            self_type_668=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_668->mHeap=(_Bool)0;
            if(            self_type_668->mPointerNum==0            ) {
                self_type_668->mPointerNum=1;
            }
            if(            self_type_668->mPointerNum>1            ) {
                self_type_668->mPointerNum=1;
            }
            param_types_669=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___670[0]=self_type_668,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2846, "struct list$1sType$ph")),1,__list_values13___670)));
            param_names_672=(struct list$1char$ph*)come_increment_ref_count((__list_values14___671[0]=((char*)(__right_value649=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2847, "struct list$1char$ph")),1,__list_values14___671)));
            (__right_value649 = come_decrement_ref_count(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_default_parametors_673=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2848, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_673,((void*)0));
            result_type_666->mStatic=(_Bool)0;
            result_type_666->mUniq=(_Bool)0;
            result_type_666->mInline=(_Bool)0;
            fun2_674=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value655=__builtin_string(name_667)))));
            (__right_value654 = come_decrement_ref_count(__right_value654, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            fun2_674==((void*)0)||fun2_674->mExternal            ) {
                fun_675=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2857, "struct sFun*")),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_666),(struct list$1sType$ph*)come_increment_ref_count(param_types_669),(struct list$1char$ph*)come_increment_ref_count(param_names_672),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_673),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_665),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun_675->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(fun_675));
                finalizer_620=fun_675;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2868, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value663=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2868, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_675),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sFunNode_finalize;
                _inf_value10->clone=(void*)sFunNode_clone;
                _inf_value10->compile=(void*)sFunNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sFunNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                node_676=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sFunNode_finalize, __right_value663, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                Value_677=node_compile(node_676,info);
                if(                !Value_677                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer(sFun_finalize, fun_675, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_676) ? node_676 = come_decrement_ref_count(node_676, ((struct sNode*)node_676)->finalize, ((struct sNode*)node_676)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                finalizer_620=fun2_674;
            }
            __dec_obj178=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_664);
            come_call_finalizer(buffer_finalize, __dec_obj178,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=p_660;
            info->head=head_663;
            info->sline=sline_661;
            __dec_obj179=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_662);
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source_641, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_662 = come_decrement_ref_count(sname_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source3_664, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, block_665, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_666, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_667 = come_decrement_ref_count(name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, self_type_668, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_669, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_672, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_673, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun2_674, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (user_real_fun_name_637 = come_decrement_ref_count(user_real_fun_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_618;
    __dec_obj180=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_615);
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj181=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_616);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_617;
    __result_obj__208 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value666=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2893, "struct tuple2$2sFun$pchar$ph")),finalizer_620,(char*)come_increment_ref_count(real_fun_name_619)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_615 = come_decrement_ref_count(last_code_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_616 = come_decrement_ref_count(last_code2_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_619 = come_decrement_ref_count(real_fun_name_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_623 = come_decrement_ref_count(fun_name2_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value666, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_627;
unsigned int hash_628;
unsigned int it_629;
struct sGenericsFun* __result_obj__185;
struct sGenericsFun* __result_obj__186;
struct sGenericsFun* __result_obj__187;
struct sGenericsFun* __result_obj__188;
default_value_627 = (void*)0;
    memset(&default_value_627,0,sizeof(struct sGenericsFun*));
    hash_628=string_get_hash_key(((char*)key))%self->size;
    it_629=hash_628;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_629]        ) {
            if(            string_equals(self->keys[it_629],key)            ) {
                __result_obj__185 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_629]);
                come_call_finalizer(sGenericsFun_finalize, default_value_627, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__185;
            }
            it_629++;
            if(            it_629>=self->size            ) {
                it_629=0;
            }
            else if(            it_629==hash_628            ) {
                __result_obj__186 = (struct sGenericsFun*)come_increment_ref_count(default_value_627);
                come_call_finalizer(sGenericsFun_finalize, default_value_627, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sGenericsFun*)come_increment_ref_count(default_value_627);
            come_call_finalizer(sGenericsFun_finalize, default_value_627, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sGenericsFun*)come_increment_ref_count(default_value_627);
    come_call_finalizer(sGenericsFun_finalize, default_value_627, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__188;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_630;
unsigned int hash_631;
unsigned int it_632;
struct sGenericsFun* __result_obj__189;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
struct sGenericsFun* __result_obj__192;
default_value_630 = (void*)0;
    memset(&default_value_630,0,sizeof(struct sGenericsFun*));
    hash_631=string_get_hash_key(((char*)key))%self->size;
    it_632=hash_631;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_632]        ) {
            if(            string_equals(self->keys[it_632],key)            ) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_632]);
                come_call_finalizer(sGenericsFun_finalize, default_value_630, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__189;
            }
            it_632++;
            if(            it_632>=self->size            ) {
                it_632=0;
            }
            else if(            it_632==hash_631            ) {
                __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value_630);
                come_call_finalizer(sGenericsFun_finalize, default_value_630, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value_630);
            come_call_finalizer(sGenericsFun_finalize, default_value_630, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(default_value_630);
    come_call_finalizer(sGenericsFun_finalize, default_value_630, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__192;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_642;
unsigned int hash_643;
unsigned int it_644;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
struct sClass* __result_obj__195;
struct sClass* __result_obj__196;
default_value_642 = (void*)0;
    memset(&default_value_642,0,sizeof(struct sClass*));
    hash_643=string_get_hash_key(((char*)key))%self->size;
    it_644=hash_643;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_644]        ) {
            if(            string_equals(self->keys[it_644],key)            ) {
                __result_obj__193 = (struct sClass*)come_increment_ref_count(self->items[it_644]);
                come_call_finalizer(sClass_finalize, default_value_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__193;
            }
            it_644++;
            if(            it_644>=self->size            ) {
                it_644=0;
            }
            else if(            it_644==hash_643            ) {
                __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value_642);
                come_call_finalizer(sClass_finalize, default_value_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__194;
            }
        }
        else {
            __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value_642);
            come_call_finalizer(sClass_finalize, default_value_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__195;
        }
    }
    __result_obj__196 = (struct sClass*)come_increment_ref_count(default_value_642);
    come_call_finalizer(sClass_finalize, default_value_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_645;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_646;
    it_645=self->head;
    while(    it_645!=((void*)0)    ) {
        prev_it_646=it_645;
        it_645=it_645->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_646, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_647;
unsigned int hash_648;
unsigned int it_649;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
struct sClass* __result_obj__200;
default_value_647 = (void*)0;
    memset(&default_value_647,0,sizeof(struct sClass*));
    hash_648=string_get_hash_key(((char*)key))%self->size;
    it_649=hash_648;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_649]        ) {
            if(            string_equals(self->keys[it_649],key)            ) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(self->items[it_649]);
                come_call_finalizer(sClass_finalize, default_value_647, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__197;
            }
            it_649++;
            if(            it_649>=self->size            ) {
                it_649=0;
            }
            else if(            it_649==hash_648            ) {
                __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value_647);
                come_call_finalizer(sClass_finalize, default_value_647, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__198;
            }
        }
        else {
            __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value_647);
            come_call_finalizer(sClass_finalize, default_value_647, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__199;
        }
    }
    __result_obj__200 = (struct sClass*)come_increment_ref_count(default_value_647);
    come_call_finalizer(sClass_finalize, default_value_647, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__200;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_651;
struct tuple2$2char$phsType$ph* __result_obj__201;
struct tuple2$2char$phsType$ph* __result_obj__202;
struct tuple2$2char$phsType$ph* result_652;
struct tuple2$2char$phsType$ph* __result_obj__203;
result_651 = (void*)0;
result_652 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_651,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__201 = result_651;
        return __result_obj__201;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_652,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__203 = result_652;
    return __result_obj__203;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_654;
struct tuple2$2char$phsType$ph* __result_obj__204;
struct tuple2$2char$phsType$ph* __result_obj__205;
struct tuple2$2char$phsType$ph* result_655;
struct tuple2$2char$phsType$ph* __result_obj__206;
result_654 = (void*)0;
result_655 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_654,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__204 = result_654;
        return __result_obj__204;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_655,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__206 = result_655;
    return __result_obj__206;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj182;
struct tuple2$2sFun$pchar$ph* __result_obj__207;
    self->v1=v1;
    __dec_obj182=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__207 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__207;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_678;
char* __dec_obj183;
char* last_code2_679;
char* __dec_obj184;
_Bool comma_instead_of_semicolon_680;
struct sClass* current_stack_frame_struct_681;
struct sFun* equaler_682;
void* __right_value667 = (void*)0;
char* real_fun_name_683;
void* __right_value668 = (void*)0;
struct sType* type2_684;
struct sType* __dec_obj185;
struct sClass* klass_685;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* source_686;
char* name_687;
void* __right_value671 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_689;
struct tuple2$2char$phsType$ph* it_690;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_691=0;
struct sType* field_type_692=0;
char* p_694;
int sline_695;
char* sname_696;
char* head_697;
struct buffer* source3_698;
struct buffer* __dec_obj186;
void* __right_value672 = (void*)0;
char* __dec_obj187;
void* __right_value673 = (void*)0;
struct sBlock* block_699;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sType* result_type_700;
void* __right_value677 = (void*)0;
char* name_701;
void* __right_value678 = (void*)0;
struct sType* left_type_702;
void* __right_value679 = (void*)0;
struct sType* right_type_703;
struct sType* __list_values15___705[2];
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1sType$ph* param_types_704;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __list_values16___706[2];
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1char$ph* param_names_707;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1char$ph* param_default_parametors_708;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* fun2_709;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sFun* fun_710;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value698 = (void*)0;
struct sNode* node_711;
_Bool Value_712;
void* __right_value699 = (void*)0;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__209;
    last_code_678=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj183=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_679=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj184=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_680=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_681=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_682=((void*)0);
    real_fun_name_683=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_684=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj185=type,
    type=(struct sType*)come_increment_ref_count(type2_684);
    come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_685=type->mClass;
    if(    type->mPointerNum>0&&!klass_685->mNumber    ) {
        source_686=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2919, "struct buffer*"))));
        buffer_append_char(source_686,123);
        if(        klass_685->mProtocol        ) {
            name_687="_protocol_obj";
            char source2_688[1024];
            memset(&source2_688, 0, sizeof(char)            *(1024)            );
            snprintf(source2_688,1024,"return left.%s.equals(right.%s);\n",name_687,name_687);
            buffer_append_str(source_686,source2_688);
        }
        else {
            klass_685=((struct sClass*)(__right_value671=map$2char$phsClass$ph_operator_load_element(info->classes,klass_685->mName)));
            come_call_finalizer(sClass_finalize, __right_value671, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_689=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_685->mFields)),it_690=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_689))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_689))            ;            it_690=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_689))            ){
                multiple_assign_var14=it_690;
                name_691=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_692=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_693[1024];
                memset(&source2_693, 0, sizeof(char)                *(1024)                );
                snprintf(source2_693,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_691,name_691,name_691);
                buffer_append_str(source_686,source2_693);
                (name_691 = come_decrement_ref_count(name_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_692, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_689, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_686,"return true;");
        buffer_append_char(source_686,125);
        p_694=info->p;
        sline_695=info->sline;
        sname_696=(char*)come_increment_ref_count(info->sname);
        head_697=info->head;
        source3_698=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj186=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_686);
        come_call_finalizer(buffer_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_686->buf;
        info->head=source_686->buf;
        __dec_obj187=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_683));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_699=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_700=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2959, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_701=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_683, "05function.c", 2960, "char*"));
        left_type_702=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_702->mHeap=(_Bool)0;
        right_type_703=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_703->mHeap=(_Bool)0;
        param_types_704=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___705[0]=left_type_702,
__list_values15___705[1]=right_type_703,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2965, "struct list$1sType$ph")),2,__list_values15___705)));
        param_names_707=(struct list$1char$ph*)come_increment_ref_count((__list_values16___706[0]=((char*)(__right_value682=__builtin_string("left"))),
__list_values16___706[1]=((char*)(__right_value683=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2966, "struct list$1char$ph")),2,__list_values16___706)));
        (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_708=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2967, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_708,((void*)0));
        list$1char$ph_push_back(param_default_parametors_708,((void*)0));
        result_type_700->mStatic=(_Bool)0;
        result_type_700->mUniq=(_Bool)0;
        result_type_700->mInline=(_Bool)0;
        fun2_709=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value689=__builtin_string(name_701)))));
        (__right_value688 = come_decrement_ref_count(__right_value688, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_709==((void*)0)||fun2_709->mExternal        ) {
            fun_710=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2977, "struct sFun*")),(char*)come_increment_ref_count(name_701),(struct sType*)come_increment_ref_count(result_type_700),(struct list$1sType$ph*)come_increment_ref_count(param_types_704),(struct list$1char$ph*)come_increment_ref_count(param_names_707),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_708),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_699),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_710->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_701)),(struct sFun*)come_increment_ref_count(fun_710));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2986, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value697=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2986, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_710),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            node_711=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer(sFunNode_finalize, __right_value697, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_712=node_compile(node_711,info);
            if(            !Value_712            ) {
                ((struct tuple2$2int$bool$*)(__right_value699=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value699, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_682=fun_710;
            come_call_finalizer(sFun_finalize, fun_710, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_711) ? node_711 = come_decrement_ref_count(node_711, ((struct sNode*)node_711)->finalize, ((struct sNode*)node_711)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_682=fun2_709;
        }
        __dec_obj188=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_698);
        come_call_finalizer(buffer_finalize, __dec_obj188,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_694;
        info->head=head_697;
        info->sline=sline_695;
        __dec_obj189=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_696);
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_686, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_696 = come_decrement_ref_count(sname_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_698, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_699, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_700, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_701 = come_decrement_ref_count(name_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_702, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_703, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_704, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_707, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_708, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_709, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_681;
    __dec_obj190=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_678);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj191=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_679);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_680;
    __result_obj__209 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value701=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3012, "struct tuple2$2sFun$pchar$ph")),equaler_682,(char*)come_increment_ref_count(real_fun_name_683)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_678 = come_decrement_ref_count(last_code_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_679 = come_decrement_ref_count(last_code2_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_683 = come_decrement_ref_count(real_fun_name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_684, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value701, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__209;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_713;
char* __dec_obj192;
char* last_code2_714;
char* __dec_obj193;
_Bool comma_instead_of_semicolon_715;
struct sClass* current_stack_frame_struct_716;
struct sFun* equaler_717;
void* __right_value702 = (void*)0;
char* real_fun_name_718;
void* __right_value703 = (void*)0;
struct sType* type2_719;
struct sType* __dec_obj194;
struct sClass* klass_720;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* source_721;
char* name_722;
int i_725;
void* __right_value706 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_726;
struct tuple2$2char$phsType$ph* it_727;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_728=0;
struct sType* field_type_729=0;
char* p_733;
int sline_734;
char* sname_735;
char* head_736;
struct buffer* source3_737;
struct buffer* __dec_obj195;
void* __right_value707 = (void*)0;
char* __dec_obj196;
void* __right_value708 = (void*)0;
struct sBlock* block_738;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sType* result_type_739;
void* __right_value712 = (void*)0;
char* name_740;
void* __right_value713 = (void*)0;
struct sType* left_type_741;
void* __right_value714 = (void*)0;
struct sType* right_type_742;
struct sType* __list_values17___744[2];
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1sType$ph* param_types_743;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* __list_values18___745[2];
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1char$ph* param_names_746;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1char$ph* param_default_parametors_747;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sFun* fun2_748;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun_749;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value733 = (void*)0;
struct sNode* node_750;
_Bool Value_751;
void* __right_value734 = (void*)0;
struct buffer* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__210;
    last_code_713=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj192=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_714=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj193=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_715=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_716=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_717=((void*)0);
    real_fun_name_718=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_719=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj194=type,
    type=(struct sType*)come_increment_ref_count(type2_719);
    come_call_finalizer(sType_finalize, __dec_obj194,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_720=type->mClass;
    if(    type->mPointerNum>0&&!klass_720->mNumber    ) {
        source_721=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3037, "struct buffer*"))));
        buffer_append_char(source_721,123);
        if(        klass_720->mProtocol        ) {
            name_722="_protocol_obj";
            char source2_723[1024];
            memset(&source2_723, 0, sizeof(char)            *(1024)            );
            snprintf(source2_723,1024,"return left.%s !== right.%s;\n",name_722,name_722);
            buffer_append_str(source_721,source2_723);
        }
        else {
            char source2_724[1024];
            memset(&source2_724, 0, sizeof(char)            *(1024)            );
            snprintf(source2_724,1024,"return !(");
            buffer_append_str(source_721,source2_724);
            snprintf(source2_724,1024,"( ");
            buffer_append_str(source_721,source2_724);
            i_725=0;
            klass_720=((struct sClass*)(__right_value706=map$2char$phsClass$ph_operator_load_element(info->classes,klass_720->mName)));
            come_call_finalizer(sClass_finalize, __right_value706, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_726=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_720->mFields)),it_727=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_726))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_726))            ;            it_727=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_726))            ){
                multiple_assign_var15=it_727;
                name_728=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_729=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_730[1024];
                memset(&source2_730, 0, sizeof(char)                *(1024)                );
                snprintf(source2_730,1024,"(left.%s === right.%s)",name_728,name_728,name_728);
                buffer_append_str(source_721,source2_730);
                if(                i_725==list$1tuple2$2char$phsType$ph$ph_length(klass_720->mFields)-1                ) {
                    char source2_731[1024];
                    memset(&source2_731, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_731,1024,"));");
                    buffer_append_str(source_721,source2_731);
                }
                else {
                    char source2_732[1024];
                    memset(&source2_732, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_732,1024," && ");
                    buffer_append_str(source_721,source2_732);
                }
                i_725++;
                (name_728 = come_decrement_ref_count(name_728, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_729, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_726, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_721,125);
        p_733=info->p;
        sline_734=info->sline;
        sname_735=(char*)come_increment_ref_count(info->sname);
        head_736=info->head;
        source3_737=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj195=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_721);
        come_call_finalizer(buffer_finalize, __dec_obj195,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_721->buf;
        info->head=source_721->buf;
        __dec_obj196=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_718));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_738=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_739=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3097, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_740=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_718, "05function.c", 3098, "char*"));
        left_type_741=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_741->mHeap=(_Bool)0;
        right_type_742=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_742->mHeap=(_Bool)0;
        param_types_743=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___744[0]=left_type_741,
__list_values17___744[1]=right_type_742,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3103, "struct list$1sType$ph")),2,__list_values17___744)));
        param_names_746=(struct list$1char$ph*)come_increment_ref_count((__list_values18___745[0]=((char*)(__right_value717=__builtin_string("left"))),
__list_values18___745[1]=((char*)(__right_value718=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3104, "struct list$1char$ph")),2,__list_values18___745)));
        (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_747=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3105, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_747,((void*)0));
        list$1char$ph_push_back(param_default_parametors_747,((void*)0));
        result_type_739->mStatic=(_Bool)0;
        result_type_739->mUniq=(_Bool)0;
        result_type_739->mInline=(_Bool)0;
        fun2_748=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value724=__builtin_string(name_740)))));
        (__right_value723 = come_decrement_ref_count(__right_value723, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value724 = come_decrement_ref_count(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_748==((void*)0)||fun2_748->mExternal        ) {
            fun_749=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3115, "struct sFun*")),(char*)come_increment_ref_count(name_740),(struct sType*)come_increment_ref_count(result_type_739),(struct list$1sType$ph*)come_increment_ref_count(param_types_743),(struct list$1char$ph*)come_increment_ref_count(param_names_746),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_747),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_738),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_749->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_740)),(struct sFun*)come_increment_ref_count(fun_749));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3124, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value732=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3124, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_749),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            node_750=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value732, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_751=node_compile(node_750,info);
            if(            !Value_751            ) {
                ((struct tuple2$2int$bool$*)(__right_value734=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value734, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_717=fun_749;
            come_call_finalizer(sFun_finalize, fun_749, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_750) ? node_750 = come_decrement_ref_count(node_750, ((struct sNode*)node_750)->finalize, ((struct sNode*)node_750)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_717=fun2_748;
        }
        __dec_obj197=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_737);
        come_call_finalizer(buffer_finalize, __dec_obj197,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_733;
        info->head=head_736;
        info->sline=sline_734;
        __dec_obj198=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_735);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_721, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_735 = come_decrement_ref_count(sname_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_737, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_738, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_739, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_740 = come_decrement_ref_count(name_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_741, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_742, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_743, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_746, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_747, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_748, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_716;
    __dec_obj199=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_713);
    __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj200=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_714);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_715;
    __result_obj__210 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value736=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3150, "struct tuple2$2sFun$pchar$ph")),equaler_717,(char*)come_increment_ref_count(real_fun_name_718)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_713 = come_decrement_ref_count(last_code_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_714 = come_decrement_ref_count(last_code2_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_718 = come_decrement_ref_count(real_fun_name_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_719, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value736, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_752;
char* __dec_obj201;
char* last_code2_753;
char* __dec_obj202;
_Bool comma_instead_of_semicolon_754;
struct sClass* current_stack_frame_struct_755;
struct sFun* equaler_756;
void* __right_value737 = (void*)0;
char* real_fun_name_757;
void* __right_value738 = (void*)0;
struct sType* type2_758;
struct sType* __dec_obj203;
struct sClass* klass_759;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct buffer* source_760;
char* name_761;
int i_764;
void* __right_value741 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_765;
struct tuple2$2char$phsType$ph* it_766;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_767=0;
struct sType* field_type_768=0;
char* p_772;
int sline_773;
char* sname_774;
char* head_775;
struct buffer* source3_776;
struct buffer* __dec_obj204;
void* __right_value742 = (void*)0;
char* __dec_obj205;
void* __right_value743 = (void*)0;
struct sBlock* block_777;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sType* result_type_778;
void* __right_value747 = (void*)0;
char* name_779;
void* __right_value748 = (void*)0;
struct sType* left_type_780;
void* __right_value749 = (void*)0;
struct sType* right_type_781;
struct sType* __list_values19___783[2];
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1sType$ph* param_types_782;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
char* __list_values20___784[2];
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1char$ph* param_names_785;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1char$ph* param_default_parametors_786;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun2_787;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sFun* fun_788;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value768 = (void*)0;
struct sNode* node_789;
_Bool Value_790;
void* __right_value769 = (void*)0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__211;
    last_code_752=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj201=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_753=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj202=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_754=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_755=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_756=((void*)0);
    real_fun_name_757=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_758=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj203=type,
    type=(struct sType*)come_increment_ref_count(type2_758);
    come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_759=type->mClass;
    if(    type->mPointerNum>0&&!klass_759->mNumber    ) {
        source_760=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3175, "struct buffer*"))));
        buffer_append_char(source_760,123);
        if(        klass_759->mProtocol        ) {
            name_761="_protocol_obj";
            char source2_762[1024];
            memset(&source2_762, 0, sizeof(char)            *(1024)            );
            snprintf(source2_762,1024,"return !left.%s.equals(right.%s);\n",name_761,name_761);
            buffer_append_str(source_760,source2_762);
        }
        else {
            char source2_763[1024];
            memset(&source2_763, 0, sizeof(char)            *(1024)            );
            snprintf(source2_763,1024,"return !(");
            buffer_append_str(source_760,source2_763);
            i_764=0;
            klass_759=((struct sClass*)(__right_value741=map$2char$phsClass$ph_operator_load_element(info->classes,klass_759->mName)));
            come_call_finalizer(sClass_finalize, __right_value741, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_765=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_759->mFields)),it_766=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_765))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_765))            ;            it_766=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_765))            ){
                multiple_assign_var16=it_766;
                name_767=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_768=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_769[1024];
                memset(&source2_769, 0, sizeof(char)                *(1024)                );
                snprintf(source2_769,1024,"left.%s.equals(right.%s)",name_767,name_767);
                buffer_append_str(source_760,source2_769);
                if(                i_764==list$1tuple2$2char$phsType$ph$ph_length(klass_759->mFields)-1                ) {
                    char source2_770[1024];
                    memset(&source2_770, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_770,1024,");");
                    buffer_append_str(source_760,source2_770);
                }
                else {
                    char source2_771[1024];
                    memset(&source2_771, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_771,1024," && ");
                    buffer_append_str(source_760,source2_771);
                }
                i_764++;
                (name_767 = come_decrement_ref_count(name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_768, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_765, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_760,125);
        p_772=info->p;
        sline_773=info->sline;
        sname_774=(char*)come_increment_ref_count(info->sname);
        head_775=info->head;
        source3_776=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_760);
        come_call_finalizer(buffer_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_760->buf;
        info->head=source_760->buf;
        __dec_obj205=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_757));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_777=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_778=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3232, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_779=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_757, "05function.c", 3233, "char*"));
        left_type_780=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_780->mHeap=(_Bool)0;
        right_type_781=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_781->mHeap=(_Bool)0;
        param_types_782=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___783[0]=left_type_780,
__list_values19___783[1]=right_type_781,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3238, "struct list$1sType$ph")),2,__list_values19___783)));
        param_names_785=(struct list$1char$ph*)come_increment_ref_count((__list_values20___784[0]=((char*)(__right_value752=__builtin_string("left"))),
__list_values20___784[1]=((char*)(__right_value753=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3239, "struct list$1char$ph")),2,__list_values20___784)));
        (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_786=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3240, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_786,((void*)0));
        list$1char$ph_push_back(param_default_parametors_786,((void*)0));
        result_type_778->mStatic=(_Bool)0;
        result_type_778->mUniq=(_Bool)0;
        result_type_778->mInline=(_Bool)0;
        fun2_787=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value759=__builtin_string(name_779)))));
        (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_787==((void*)0)||fun2_787->mExternal        ) {
            fun_788=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3250, "struct sFun*")),(char*)come_increment_ref_count(name_779),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_782),(struct list$1char$ph*)come_increment_ref_count(param_names_785),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_786),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_777),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_788->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_779)),(struct sFun*)come_increment_ref_count(fun_788));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3259, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3259, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_788),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            node_789=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value767, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_790=node_compile(node_789,info);
            if(            !Value_790            ) {
                ((struct tuple2$2int$bool$*)(__right_value769=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value769, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_756=fun_788;
            come_call_finalizer(sFun_finalize, fun_788, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_789) ? node_789 = come_decrement_ref_count(node_789, ((struct sNode*)node_789)->finalize, ((struct sNode*)node_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_756=fun2_787;
        }
        __dec_obj206=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_776);
        come_call_finalizer(buffer_finalize, __dec_obj206,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_772;
        info->head=head_775;
        info->sline=sline_773;
        __dec_obj207=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_774);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_760, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_774 = come_decrement_ref_count(sname_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_776, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_777, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_778, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_779 = come_decrement_ref_count(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_780, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_781, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_782, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_785, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_786, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_787, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_755;
    __dec_obj208=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_752);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj209=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_753);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_754;
    __result_obj__211 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value771=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3285, "struct tuple2$2sFun$pchar$ph")),equaler_756,(char*)come_increment_ref_count(real_fun_name_757)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_752 = come_decrement_ref_count(last_code_752, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_753 = come_decrement_ref_count(last_code2_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_757 = come_decrement_ref_count(real_fun_name_757, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_758, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value771, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_791;
char* __dec_obj210;
char* last_code2_792;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_793;
struct sClass* current_stack_frame_struct_794;
struct sFun* equaler_795;
void* __right_value772 = (void*)0;
char* real_fun_name_796;
void* __right_value773 = (void*)0;
struct sType* type2_797;
struct sType* __dec_obj212;
struct sClass* klass_798;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct buffer* source_799;
char* name_800;
void* __right_value776 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_803;
struct tuple2$2char$phsType$ph* it_804;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_805=0;
struct sType* field_type_806=0;
char* p_808;
int sline_809;
char* sname_810;
char* head_811;
struct buffer* source3_812;
struct buffer* __dec_obj213;
void* __right_value777 = (void*)0;
char* __dec_obj214;
void* __right_value778 = (void*)0;
struct sBlock* block_813;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sType* result_type_814;
void* __right_value782 = (void*)0;
char* name_815;
void* __right_value783 = (void*)0;
struct sType* left_type_816;
void* __right_value784 = (void*)0;
struct sType* right_type_817;
struct sType* __list_values21___819[2];
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1sType$ph* param_types_818;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
char* __list_values22___820[2];
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1char$ph* param_names_821;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1char$ph* param_default_parametors_822;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun2_823;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sFun* fun_824;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value803 = (void*)0;
struct sNode* node_825;
_Bool Value_826;
void* __right_value804 = (void*)0;
struct buffer* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
    last_code_791=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_792=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_793=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_794=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_795=((void*)0);
    real_fun_name_796=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_797=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj212=type,
    type=(struct sType*)come_increment_ref_count(type2_797);
    come_call_finalizer(sType_finalize, __dec_obj212,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_798=type->mClass;
    if(    type->mPointerNum>0&&!klass_798->mNumber    ) {
        source_799=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3310, "struct buffer*"))));
        buffer_append_char(source_799,123);
        if(        klass_798->mProtocol        ) {
            name_800="_protocol_obj";
            char source2_801[1024];
            memset(&source2_801, 0, sizeof(char)            *(1024)            );
            snprintf(source2_801,1024,"return left.%s === right.%s;\n",name_800,name_800);
            buffer_append_str(source_799,source2_801);
        }
        else {
            char source2_802[1024];
            memset(&source2_802, 0, sizeof(char)            *(1024)            );
            klass_798=((struct sClass*)(__right_value776=map$2char$phsClass$ph_operator_load_element(info->classes,klass_798->mName)));
            come_call_finalizer(sClass_finalize, __right_value776, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_803=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_798->mFields)),it_804=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_803))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_803))            ;            it_804=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_803))            ){
                multiple_assign_var17=it_804;
                name_805=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_806=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_807[1024];
                memset(&source2_807, 0, sizeof(char)                *(1024)                );
                snprintf(source2_807,1024,"if(left.%s !== right.%s) { return false; }\n",name_805,name_805,name_805);
                buffer_append_str(source_799,source2_807);
                (name_805 = come_decrement_ref_count(name_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_806, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_803, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_799,"return true;\n");
        buffer_append_char(source_799,125);
        p_808=info->p;
        sline_809=info->sline;
        sname_810=(char*)come_increment_ref_count(info->sname);
        head_811=info->head;
        source3_812=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj213=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_799);
        come_call_finalizer(buffer_finalize, __dec_obj213,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_799->buf;
        info->head=source_799->buf;
        __dec_obj214=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_796));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_813=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_814=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3352, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_815=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_796, "05function.c", 3353, "char*"));
        left_type_816=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_816->mHeap=(_Bool)0;
        right_type_817=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_817->mHeap=(_Bool)0;
        param_types_818=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___819[0]=left_type_816,
__list_values21___819[1]=right_type_817,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3358, "struct list$1sType$ph")),2,__list_values21___819)));
        param_names_821=(struct list$1char$ph*)come_increment_ref_count((__list_values22___820[0]=((char*)(__right_value787=__builtin_string("left"))),
__list_values22___820[1]=((char*)(__right_value788=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3359, "struct list$1char$ph")),2,__list_values22___820)));
        (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_822=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3360, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_822,((void*)0));
        list$1char$ph_push_back(param_default_parametors_822,((void*)0));
        result_type_814->mStatic=(_Bool)0;
        result_type_814->mUniq=(_Bool)0;
        result_type_814->mInline=(_Bool)0;
        fun2_823=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value794=__builtin_string(name_815)))));
        (__right_value793 = come_decrement_ref_count(__right_value793, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_823==((void*)0)||fun2_823->mExternal        ) {
            fun_824=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3370, "struct sFun*")),(char*)come_increment_ref_count(name_815),(struct sType*)come_increment_ref_count(result_type_814),(struct list$1sType$ph*)come_increment_ref_count(param_types_818),(struct list$1char$ph*)come_increment_ref_count(param_names_821),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_822),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_813),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_824->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_815)),(struct sFun*)come_increment_ref_count(fun_824));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3379, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value802=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3379, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_824),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            node_825=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value802, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_826=node_compile(node_825,info);
            if(            !Value_826            ) {
                ((struct tuple2$2int$bool$*)(__right_value804=err_msg(info,"compiling error(X)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value804, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_795=fun_824;
            come_call_finalizer(sFun_finalize, fun_824, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_825) ? node_825 = come_decrement_ref_count(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_795=fun2_823;
        }
        __dec_obj215=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_812);
        come_call_finalizer(buffer_finalize, __dec_obj215,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_808;
        info->head=head_811;
        info->sline=sline_809;
        __dec_obj216=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_810);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_799, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_810 = come_decrement_ref_count(sname_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_812, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_813, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_814, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_815 = come_decrement_ref_count(name_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_816, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_817, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_818, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_821, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_822, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_823, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_794;
    __dec_obj217=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_791);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj218=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_792);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_793;
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value806=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3405, "struct tuple2$2sFun$pchar$ph")),equaler_795,(char*)come_increment_ref_count(real_fun_name_796)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_791 = come_decrement_ref_count(last_code_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_792 = come_decrement_ref_count(last_code2_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_796 = come_decrement_ref_count(real_fun_name_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_797, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value806, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
char* last_code_827;
char* __dec_obj219;
char* last_code2_828;
char* __dec_obj220;
_Bool comma_instead_of_semicolon_829;
struct sClass* current_stack_frame_struct_830;
struct sFun* cloner_831;
void* __right_value809 = (void*)0;
char* real_fun_name_832;
void* __right_value810 = (void*)0;
struct sType* type2_833;
struct sType* __dec_obj221;
struct sClass* klass_834;
char* fun_name2_835;
void* __right_value811 = (void*)0;
char* none_generics_name_836;
void* __right_value812 = (void*)0;
struct sType* obj_type_837;
void* __right_value813 = (void*)0;
char* __dec_obj222;
void* __right_value814 = (void*)0;
char* fun_name3_838;
void* __right_value815 = (void*)0;
struct sGenericsFun* generics_fun_839;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name_840=0;
_Bool err_841=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
char* __dec_obj223;
void* __right_value822 = (void*)0;
char* __dec_obj224;
int i_842;
void* __right_value823 = (void*)0;
char* new_fun_name_843;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
char* __dec_obj225;
void* __right_value826 = (void*)0;
char* __dec_obj226;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct buffer* source_844;
void* __right_value829 = (void*)0;
char* name_845;
void* __right_value830 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_847;
struct tuple2$2char$phsType$ph* it_848;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_849=0;
struct sType* field_type_850=0;
void* __right_value831 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_853;
struct tuple2$2char$phsType$ph* it_854;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_855=0;
struct sType* field_type_856=0;
void* __right_value832 = (void*)0;
char* user_real_fun_name_860;
void* __right_value833 = (void*)0;
struct sFun* user_cloner_861;
char* p_862;
int sline_863;
char* sname_864;
struct buffer* source3_865;
char* head_866;
struct buffer* __dec_obj227;
void* __right_value834 = (void*)0;
char* __dec_obj228;
void* __right_value835 = (void*)0;
struct sBlock* block_867;
void* __right_value836 = (void*)0;
struct sType* result_type_868;
void* __right_value837 = (void*)0;
char* name_869;
void* __right_value838 = (void*)0;
struct sType* self_type_870;
struct sType* __list_values23___872[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sType$ph* param_types_871;
void* __right_value841 = (void*)0;
char* __list_values24___873[1];
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1char$ph* param_names_874;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1char$ph* param_default_parametors_875;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sFun* fun2_876;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sFun* fun_877;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value856 = (void*)0;
struct sNode* node_878;
_Bool Value_879;
void* __right_value857 = (void*)0;
char* __dec_obj229;
struct buffer* __dec_obj230;
char* __dec_obj231;
char* __dec_obj232;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
fun_name2_835 = (void*)0;
memset(&i_842, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")    ) {
        __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value808=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3411, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value808, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__213;
    }
    last_code_827=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj219=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_828=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj220=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_829=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_830=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_831=((void*)0);
    real_fun_name_832=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_833=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj221=type,
    type=(struct sType*)come_increment_ref_count(type2_833);
    come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_834=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_836=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_837=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj222=fun_name2_835,
        fun_name2_835=(char*)come_increment_ref_count(create_method_name(obj_type_837,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_838=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_836,fun_name));
        generics_fun_839=((struct sGenericsFun*)(__right_value815=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_838,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value815, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_839        ) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value817=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_835)),generics_fun_839,(struct sType*)come_increment_ref_count(obj_type_837),info)));
            name_840=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err_841=multiple_assign_var18->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value817, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_841            ) {
                if(                string_operator_equals(type->mClass->mName,"void")                ) {
                    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value819=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3451, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_840 = come_decrement_ref_count(name_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (none_generics_name_836 = come_decrement_ref_count(none_generics_name_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type_837, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name3_838 = come_decrement_ref_count(fun_name3_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (last_code_827 = come_decrement_ref_count(last_code_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (last_code2_828 = come_decrement_ref_count(last_code2_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (real_fun_name_832 = come_decrement_ref_count(real_fun_name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2_833, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name2_835 = come_decrement_ref_count(fun_name2_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value819, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__214;
                }
            }
            cloner_831=((struct sFun*)(__right_value820=map$2char$phsFun$ph_operator_load_element(info->funcs,name_840)));
            come_call_finalizer(sFun_finalize, __right_value820, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_840 = come_decrement_ref_count(name_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_831=((struct sFun*)(__right_value821=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_835)));
            come_call_finalizer(sFun_finalize, __right_value821, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj223=real_fun_name_832,
        real_fun_name_832=(char*)come_increment_ref_count(fun_name2_835);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (none_generics_name_836 = come_decrement_ref_count(none_generics_name_836, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_837, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_838 = come_decrement_ref_count(fun_name3_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj224=fun_name2_835,
        fun_name2_835=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_842=128-1        ;        i_842>=1        ;        i_842--        ){
            new_fun_name_843=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_835,i_842));
            cloner_831=((struct sFun*)(__right_value824=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_843)));
            come_call_finalizer(sFun_finalize, __right_value824, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_831            ) {
                __dec_obj225=fun_name2_835,
                fun_name2_835=(char*)come_increment_ref_count(__builtin_string(new_fun_name_843));
                __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_843 = come_decrement_ref_count(new_fun_name_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_843 = come_decrement_ref_count(new_fun_name_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_831==((void*)0)        ) {
            cloner_831=((struct sFun*)(__right_value826=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_835)));
            come_call_finalizer(sFun_finalize, __right_value826, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj226=real_fun_name_832,
        real_fun_name_832=(char*)come_increment_ref_count(fun_name2_835);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    cloner_831==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0    ) {
        source_844=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3486, "struct buffer*"))));
        buffer_append_str(source_844,"{\n");
        buffer_append_str(source_844,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_844,"var result = new %s;\n",((char*)(__right_value829=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value829 = come_decrement_ref_count(__right_value829, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        klass_834->mProtocol        ) {
            name_845="_protocol_obj";
            char source2_846[1024];
            memset(&source2_846, 0, sizeof(char)            *(1024)            );
            snprintf(source2_846,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_844,source2_846);
            klass_834=((struct sClass*)(__right_value830=map$2char$phsClass$ph_operator_load_element(info->classes,klass_834->mName)));
            come_call_finalizer(sClass_finalize, __right_value830, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_847=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_834->mFields)),it_848=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_847))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_847))            ;            it_848=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_847))            ){
                multiple_assign_var19=it_848;
                name_849=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_850=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                string_operator_equals(name_849,"_protocol_obj")                ) {
                }
                else if(                list$1sNode$ph_length(field_type_850->mArrayNum)>0                ) {
                    char source2_851[1024];
                    memset(&source2_851, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_851,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_849,name_849,name_849);
                    buffer_append_str(source_844,source2_851);
                }
                else {
                    char source2_852[1024];
                    memset(&source2_852, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_852,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_849,name_849);
                    buffer_append_str(source_844,source2_852);
                }
                (name_849 = come_decrement_ref_count(name_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_850, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_847, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            klass_834=((struct sClass*)(__right_value831=map$2char$phsClass$ph_operator_load_element(info->classes,klass_834->mName)));
            come_call_finalizer(sClass_finalize, __right_value831, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_853=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_834->mFields)),it_854=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_853))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_853))            ;            it_854=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_853))            ){
                multiple_assign_var20=it_854;
                name_855=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_856=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                field_type_856->mHeap                ) {
                    char source2_857[1024];
                    memset(&source2_857, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_857,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_855,name_855,name_855);
                    buffer_append_str(source_844,source2_857);
                }
                else if(                list$1sNode$ph_length(field_type_856->mArrayNum)>0                ) {
                    char source2_858[1024];
                    memset(&source2_858, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_858,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_855,name_855,name_855);
                    buffer_append_str(source_844,source2_858);
                }
                else {
                    char source2_859[1024];
                    memset(&source2_859, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_859,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_855,name_855);
                    buffer_append_str(source_844,source2_859);
                }
                (name_855 = come_decrement_ref_count(name_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_856, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_853, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        user_real_fun_name_860=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_861=((struct sFun*)(__right_value833=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_860)));
        come_call_finalizer(sFun_finalize, __right_value833, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source_844,"return result;");
        buffer_append_char(source_844,125);
        p_862=info->p;
        sline_863=info->sline;
        sname_864=(char*)come_increment_ref_count(info->sname);
        source3_865=(struct buffer*)come_increment_ref_count(info->source);
        head_866=info->head;
        __dec_obj227=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_844);
        come_call_finalizer(buffer_finalize, __dec_obj227,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj228=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_832));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_867=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_868=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_869=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_832, "05function.c", 3576, "char*"));
        self_type_870=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_870->mHeap=(_Bool)0;
        param_types_871=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___872[0]=self_type_870,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3579, "struct list$1sType$ph")),1,__list_values23___872)));
        param_names_874=(struct list$1char$ph*)come_increment_ref_count((__list_values24___873[0]=((char*)(__right_value841=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3580, "struct list$1char$ph")),1,__list_values24___873)));
        (__right_value841 = come_decrement_ref_count(__right_value841, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_875=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3581, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_875,((void*)0));
        result_type_868->mStatic=(_Bool)0;
        result_type_868->mUniq=(_Bool)0;
        result_type_868->mInline=(_Bool)0;
        fun2_876=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value847=__builtin_string(name_869)))));
        (__right_value846 = come_decrement_ref_count(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_876==((void*)0)||fun2_876->mExternal        ) {
            fun_877=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3591, "struct sFun*")),(char*)come_increment_ref_count(name_869),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1sType$ph*)come_increment_ref_count(param_types_871),(struct list$1char$ph*)come_increment_ref_count(param_names_874),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_875),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_867),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_877->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_869)),(struct sFun*)come_increment_ref_count(fun_877));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3600, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value855=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3600, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_877),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            node_878=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value855, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_879=node_compile(node_878,info);
            if(            !Value_879            ) {
                ((struct tuple2$2int$bool$*)(__right_value857=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value857, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            cloner_831=fun_877;
            come_call_finalizer(sFun_finalize, fun_877, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_878) ? node_878 = come_decrement_ref_count(node_878, ((struct sNode*)node_878)->finalize, ((struct sNode*)node_878)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            cloner_831=fun2_876;
        }
        __dec_obj229=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_864);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_863;
        __dec_obj230=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_865);
        come_call_finalizer(buffer_finalize, __dec_obj230,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_862;
        info->head=head_866;
        info->sline=sline_863;
        come_call_finalizer(buffer_finalize, source_844, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (user_real_fun_name_860 = come_decrement_ref_count(user_real_fun_name_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_864 = come_decrement_ref_count(sname_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_865, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_867, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_868, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_869 = come_decrement_ref_count(name_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_870, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_871, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_874, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_875, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_876, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_830;
    __dec_obj231=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_827);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj232=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_828);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_829;
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value859=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3628, "struct tuple2$2sFun$pchar$ph")),cloner_831,(char*)come_increment_ref_count(real_fun_name_832)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_827 = come_decrement_ref_count(last_code_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_828 = come_decrement_ref_count(last_code2_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_832 = come_decrement_ref_count(real_fun_name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_833, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_835 = come_decrement_ref_count(fun_name2_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value859, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_914;
char* __dec_obj242;
char* last_code2_915;
char* __dec_obj243;
_Bool comma_instead_of_semicolon_916;
struct sClass* current_stack_frame_struct_917;
struct sFun* to_string_fun_918;
void* __right_value893 = (void*)0;
char* real_fun_name_919;
void* __right_value894 = (void*)0;
struct sType* type_before_920;
void* __right_value895 = (void*)0;
struct sType* type2_921;
struct sType* __dec_obj244;
struct sClass* klass_922;
struct sType* __dec_obj245;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
char* none_generics_name_923;
void* __right_value898 = (void*)0;
char* generics_fun_name_924;
void* __right_value899 = (void*)0;
struct sGenericsFun* generics_fun_925;
void* __right_value900 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name_926=0;
_Bool err_927=0;
void* __right_value901 = (void*)0;
int i_928;
void* __right_value902 = (void*)0;
char* new_fun_name_929;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
char* __dec_obj246;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct buffer* source_930;
int i_931;
void* __right_value908 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_932;
struct tuple2$2char$phsType$ph* it_933;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_934=0;
struct sType* field_type_935=0;
char* p_939;
int sline_940;
char* sname_941;
struct buffer* source3_942;
char* head_943;
struct buffer* __dec_obj247;
void* __right_value909 = (void*)0;
char* __dec_obj248;
void* __right_value910 = (void*)0;
struct sBlock* block_944;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sType* result_type_945;
void* __right_value914 = (void*)0;
char* name_946;
void* __right_value915 = (void*)0;
struct sType* self_type_947;
void* __right_value916 = (void*)0;
struct sType* __dec_obj249;
struct sType* __list_values27___949[1];
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1sType$ph* param_types_948;
void* __right_value919 = (void*)0;
char* __list_values28___950[1];
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct list$1char$ph* param_names_951;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct list$1char$ph* param_default_parametors_952;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sFun* fun2_953;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_954;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value934 = (void*)0;
struct sNode* node_955;
_Bool Value_956;
void* __right_value935 = (void*)0;
char* __dec_obj250;
struct buffer* __dec_obj251;
char* __dec_obj252;
char* __dec_obj253;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
memset(&i_928, 0, sizeof(int));
    last_code_914=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj242=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_915=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj243=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_916=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_917=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_918=((void*)0);
    real_fun_name_919=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_920=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_921=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj244=type,
    type=(struct sType*)come_increment_ref_count(type2_921);
    come_call_finalizer(sType_finalize, __dec_obj244,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_922=type->mClass;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj245=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj245,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        to_string_fun_918=((struct sFun*)(__right_value896=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_919)));
        come_call_finalizer(sFun_finalize, __right_value896, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        to_string_fun_918==((void*)0)        ) {
            none_generics_name_923=(char*)come_increment_ref_count(get_none_generics_name(type2_921->mClass->mName));
            generics_fun_name_924=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_923,fun_name));
            generics_fun_925=((struct sGenericsFun*)(__right_value899=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_924)));
            come_call_finalizer(sGenericsFun_finalize, __right_value899, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_925            ) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value900=create_generics_fun((char*)come_increment_ref_count(real_fun_name_919),generics_fun_925,(struct sType*)come_increment_ref_count(type),info)));
                name_926=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err_927=multiple_assign_var22->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value900, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_927                ) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_918=((struct sFun*)(__right_value901=map$2char$phsFun$ph_operator_load_element(info->funcs,name_926)));
                come_call_finalizer(sFun_finalize, __right_value901, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_926 = come_decrement_ref_count(name_926, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_923 = come_decrement_ref_count(none_generics_name_923, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_924 = come_decrement_ref_count(generics_fun_name_924, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_928=128-1        ;        i_928>=1        ;        i_928--        ){
            new_fun_name_929=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_919,i_928));
            to_string_fun_918=((struct sFun*)(__right_value903=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_929)));
            come_call_finalizer(sFun_finalize, __right_value903, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            to_string_fun_918            ) {
                __dec_obj246=real_fun_name_919,
                real_fun_name_919=(char*)come_increment_ref_count(__builtin_string(new_fun_name_929));
                __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_929 = come_decrement_ref_count(new_fun_name_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_929 = come_decrement_ref_count(new_fun_name_929, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        to_string_fun_918==((void*)0)        ) {
            to_string_fun_918=((struct sFun*)(__right_value905=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_919)));
            come_call_finalizer(sFun_finalize, __right_value905, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    to_string_fun_918==((void*)0)&&type->mPointerNum>0&&!klass_922->mNumber    ) {
        source_930=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3837, "struct buffer*"))));
        buffer_append_str(source_930,"{\n");
        buffer_append_str(source_930,"var result = new buffer();\n");
        buffer_append_format(source_930,"result.append_str(\"%s {\");\n",klass_922->mName);
        i_931=0;
        klass_922=((struct sClass*)(__right_value908=map$2char$phsClass$ph_operator_load_element(info->classes,klass_922->mName)));
        come_call_finalizer(sClass_finalize, __right_value908, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_932=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_922->mFields)),it_933=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_932))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_932))        ;        it_933=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_932))        ){
            multiple_assign_var23=it_933;
            name_934=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type_935=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            string_operator_equals(field_type_935->mClass->mName,"lambda")            ) {
                char source2_936[1024];
                memset(&source2_936, 0, sizeof(char)                *(1024)                );
                snprintf(source2_936,1024,"result.append_str(\"%s:\");\n",name_934);
                buffer_append_str(source_930,source2_936);
                snprintf(source2_936,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_930,source2_936);
            }
            else if(            i_931==list$1tuple2$2char$phsType$ph$ph_length(klass_922->mFields)-1            ) {
                char source2_937[1024];
                memset(&source2_937, 0, sizeof(char)                *(1024)                );
                snprintf(source2_937,1024,"result.append_str(\"%s:\");\n",name_934);
                buffer_append_str(source_930,source2_937);
                snprintf(source2_937,1024,"result.append_str(self.%s.to_string());\n",name_934);
                buffer_append_str(source_930,source2_937);
            }
            else {
                char source2_938[1024];
                memset(&source2_938, 0, sizeof(char)                *(1024)                );
                snprintf(source2_938,1024,"result.append_str(\"%s:\");\n",name_934);
                buffer_append_str(source_930,source2_938);
                snprintf(source2_938,1024,"result.append_str(self.%s.to_string());\n",name_934);
                buffer_append_str(source_930,source2_938);
                snprintf(source2_938,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_930,source2_938);
            }
            i_931++;
            (name_934 = come_decrement_ref_count(name_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_935, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_932, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(source_930,"result.append_str(\"}\");\n");
        buffer_append_format(source_930,"return result.to_string();\n");
        buffer_append_char(source_930,125);
        p_939=info->p;
        sline_940=info->sline;
        sname_941=(char*)come_increment_ref_count(info->sname);
        source3_942=(struct buffer*)come_increment_ref_count(info->source);
        head_943=info->head;
        __dec_obj247=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_930);
        come_call_finalizer(buffer_finalize, __dec_obj247,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj248=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_919));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_944=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_945=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3906, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_945->mHeap=(_Bool)1;
        name_946=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_919, "05function.c", 3908, "char*"));
        self_type_947=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj249=self_type_947,
        self_type_947=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj249,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self_type_947->mHeap=(_Bool)0;
        param_types_948=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___949[0]=self_type_947,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3913, "struct list$1sType$ph")),1,__list_values27___949)));
        param_names_951=(struct list$1char$ph*)come_increment_ref_count((__list_values28___950[0]=((char*)(__right_value919=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3914, "struct list$1char$ph")),1,__list_values28___950)));
        (__right_value919 = come_decrement_ref_count(__right_value919, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_952=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3915, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_952,((void*)0));
        result_type_945->mStatic=(_Bool)0;
        result_type_945->mUniq=(_Bool)0;
        result_type_945->mInline=(_Bool)0;
        fun2_953=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value925=__builtin_string(name_946)))));
        (__right_value924 = come_decrement_ref_count(__right_value924, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value925 = come_decrement_ref_count(__right_value925, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_953==((void*)0)||fun2_953->mExternal        ) {
            fun_954=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3924, "struct sFun*")),(char*)come_increment_ref_count(name_946),(struct sType*)come_increment_ref_count(result_type_945),(struct list$1sType$ph*)come_increment_ref_count(param_types_948),(struct list$1char$ph*)come_increment_ref_count(param_names_951),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_952),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_944),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_954->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_946)),(struct sFun*)come_increment_ref_count(fun_954));
            to_string_fun_918=fun_954;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3935, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value933=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3935, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_954),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            node_955=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer(sFunNode_finalize, __right_value933, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_956=node_compile(node_955,info);
            if(            !Value_956            ) {
                ((struct tuple2$2int$bool$*)(__right_value935=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value935, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_954, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_955) ? node_955 = come_decrement_ref_count(node_955, ((struct sNode*)node_955)->finalize, ((struct sNode*)node_955)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            to_string_fun_918=fun2_953;
        }
        __dec_obj250=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_941);
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_940;
        __dec_obj251=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_942);
        come_call_finalizer(buffer_finalize, __dec_obj251,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_939;
        info->head=head_943;
        info->sline=sline_940;
        come_call_finalizer(buffer_finalize, source_930, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_941 = come_decrement_ref_count(sname_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_942, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_944, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_945, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_946 = come_decrement_ref_count(name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_947, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_948, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_951, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_952, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_953, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_917;
    __dec_obj252=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_914);
    __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj253=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_915);
    __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_916;
    __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value937=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3961, "struct tuple2$2sFun$pchar$ph")),to_string_fun_918,(char*)come_increment_ref_count(real_fun_name_919)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_914 = come_decrement_ref_count(last_code_914, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_915 = come_decrement_ref_count(last_code2_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_919 = come_decrement_ref_count(real_fun_name_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_920, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_921, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value937, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__217;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_957;
char* __dec_obj254;
char* last_code2_958;
char* __dec_obj255;
_Bool comma_instead_of_semicolon_959;
struct sClass* current_stack_frame_struct_960;
struct sFun* get_hash_key_fun_961;
void* __right_value938 = (void*)0;
char* real_fun_name_962;
void* __right_value939 = (void*)0;
struct sType* type2_963;
struct sType* __dec_obj256;
struct sClass* klass_964;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
char* none_generics_name_965;
void* __right_value942 = (void*)0;
char* generics_fun_name_966;
void* __right_value943 = (void*)0;
struct sGenericsFun* generics_fun_967;
void* __right_value944 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name_968=0;
_Bool err_969=0;
void* __right_value945 = (void*)0;
int i_970;
void* __right_value946 = (void*)0;
char* new_fun_name_971;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
char* __dec_obj257;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct buffer* source_972;
int i_973;
void* __right_value952 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_974;
struct tuple2$2char$phsType$ph* it_975;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_976=0;
struct sType* field_type_977=0;
char* p_979;
int sline_980;
char* sname_981;
struct buffer* source3_982;
char* head_983;
struct buffer* __dec_obj258;
void* __right_value953 = (void*)0;
char* __dec_obj259;
void* __right_value954 = (void*)0;
struct sBlock* block_984;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sType* result_type_985;
void* __right_value958 = (void*)0;
char* name_986;
void* __right_value959 = (void*)0;
struct sType* self_type_987;
struct sType* __list_values29___989[1];
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct list$1sType$ph* param_types_988;
void* __right_value962 = (void*)0;
char* __list_values30___990[1];
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1char$ph* param_names_991;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct list$1char$ph* param_default_parametors_992;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sFun* fun2_993;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sFun* fun_994;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
void* __right_value977 = (void*)0;
struct sNode* node_995;
_Bool Value_996;
void* __right_value978 = (void*)0;
char* __dec_obj260;
struct buffer* __dec_obj261;
char* __dec_obj262;
char* __dec_obj263;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
memset(&i_970, 0, sizeof(int));
    last_code_957=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj254=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_958=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj255=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_959=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_960=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_961=((void*)0);
    real_fun_name_962=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_963=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj256=type,
    type=(struct sType*)come_increment_ref_count(type2_963);
    come_call_finalizer(sType_finalize, __dec_obj256,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_964=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        get_hash_key_fun_961=((struct sFun*)(__right_value940=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_962)));
        come_call_finalizer(sFun_finalize, __right_value940, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        get_hash_key_fun_961==((void*)0)        ) {
            none_generics_name_965=(char*)come_increment_ref_count(get_none_generics_name(type2_963->mClass->mName));
            generics_fun_name_966=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_965,fun_name));
            generics_fun_967=((struct sGenericsFun*)(__right_value943=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_966)));
            come_call_finalizer(sGenericsFun_finalize, __right_value943, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_967            ) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value944=create_generics_fun((char*)come_increment_ref_count(real_fun_name_962),generics_fun_967,(struct sType*)come_increment_ref_count(type),info)));
                name_968=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err_969=multiple_assign_var24->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value944, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_969                ) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_961=((struct sFun*)(__right_value945=map$2char$phsFun$ph_operator_load_element(info->funcs,name_968)));
                come_call_finalizer(sFun_finalize, __right_value945, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_968 = come_decrement_ref_count(name_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_965 = come_decrement_ref_count(none_generics_name_965, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_966 = come_decrement_ref_count(generics_fun_name_966, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_970=128-1        ;        i_970>=1        ;        i_970--        ){
            new_fun_name_971=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_962,i_970));
            get_hash_key_fun_961=((struct sFun*)(__right_value947=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_971)));
            come_call_finalizer(sFun_finalize, __right_value947, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            get_hash_key_fun_961            ) {
                __dec_obj257=real_fun_name_962,
                real_fun_name_962=(char*)come_increment_ref_count(__builtin_string(new_fun_name_971));
                __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_971 = come_decrement_ref_count(new_fun_name_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_971 = come_decrement_ref_count(new_fun_name_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        get_hash_key_fun_961==((void*)0)        ) {
            get_hash_key_fun_961=((struct sFun*)(__right_value949=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_962)));
            come_call_finalizer(sFun_finalize, __right_value949, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    get_hash_key_fun_961==((void*)0)&&type->mPointerNum>0&&!klass_964->mNumber&&!klass_964->mProtocol    ) {
        source_972=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 4031, "struct buffer*"))));
        buffer_append_str(source_972,"{\n");
        buffer_append_str(source_972,"unsigned int result = 0;\n");
        i_973=0;
        klass_964=((struct sClass*)(__right_value952=map$2char$phsClass$ph_operator_load_element(info->classes,klass_964->mName)));
        come_call_finalizer(sClass_finalize, __right_value952, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_974=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_964->mFields)),it_975=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_974))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_974))        ;        it_975=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_974))        ){
            multiple_assign_var25=it_975;
            name_976=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type_977=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2_978[1024];
            memset(&source2_978, 0, sizeof(char)            *(1024)            );
            snprintf(source2_978,1024,"result += ((int)self.%s).get_hash_key();\n",name_976);
            buffer_append_str(source_972,source2_978);
            i_973++;
            (name_976 = come_decrement_ref_count(name_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_977, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_974, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source_972,"return result;\n");
        buffer_append_char(source_972,125);
        p_979=info->p;
        sline_980=info->sline;
        sname_981=(char*)come_increment_ref_count(info->sname);
        source3_982=(struct buffer*)come_increment_ref_count(info->source);
        head_983=info->head;
        __dec_obj258=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_972);
        come_call_finalizer(buffer_finalize, __dec_obj258,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj259=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_962));
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_984=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_985=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 4068, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_985->mUnsigned=(_Bool)1;
        name_986=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_962, "05function.c", 4070, "char*"));
        self_type_987=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_987->mHeap=(_Bool)0;
        param_types_988=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___989[0]=self_type_987,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4073, "struct list$1sType$ph")),1,__list_values29___989)));
        param_names_991=(struct list$1char$ph*)come_increment_ref_count((__list_values30___990[0]=((char*)(__right_value962=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4074, "struct list$1char$ph")),1,__list_values30___990)));
        (__right_value962 = come_decrement_ref_count(__right_value962, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_992=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4075, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_992,((void*)0));
        result_type_985->mStatic=(_Bool)0;
        result_type_985->mUniq=(_Bool)0;
        result_type_985->mInline=(_Bool)0;
        fun2_993=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value968=__builtin_string(name_986)))));
        (__right_value967 = come_decrement_ref_count(__right_value967, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value968 = come_decrement_ref_count(__right_value968, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_993==((void*)0)||fun2_993->mExternal        ) {
            fun_994=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4084, "struct sFun*")),(char*)come_increment_ref_count(name_986),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_988),(struct list$1char$ph*)come_increment_ref_count(param_names_991),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_992),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_984),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_994->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_986)),(struct sFun*)come_increment_ref_count(fun_994));
            get_hash_key_fun_961=fun_994;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4095, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value976=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4095, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_994),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            node_995=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value976, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_996=node_compile(node_995,info);
            if(            !Value_996            ) {
                ((struct tuple2$2int$bool$*)(__right_value978=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value978, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_994, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_995) ? node_995 = come_decrement_ref_count(node_995, ((struct sNode*)node_995)->finalize, ((struct sNode*)node_995)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_961=fun2_993;
        }
        __dec_obj260=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_981);
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_980;
        __dec_obj261=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_982);
        come_call_finalizer(buffer_finalize, __dec_obj261,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_979;
        info->head=head_983;
        info->sline=sline_980;
        come_call_finalizer(buffer_finalize, source_972, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_981 = come_decrement_ref_count(sname_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_982, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_984, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_985, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_986 = come_decrement_ref_count(name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_987, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_988, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_991, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_992, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_993, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_960;
    __dec_obj262=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_957);
    __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj263=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_958);
    __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_959;
    __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value980=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4121, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_961,(char*)come_increment_ref_count(real_fun_name_962)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_957 = come_decrement_ref_count(last_code_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_958 = come_decrement_ref_count(last_code2_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_962 = come_decrement_ref_count(real_fun_name_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_963, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value980, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__218;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun_997;
int caller_line_998;
char* caller_sname_999;
_Bool comma_instead_of_semicolon_1000;
char* last_code_1001;
char* __dec_obj264;
char* last_code2_1002;
char* __dec_obj265;
void* __right_value981 = (void*)0;
char* sname_top_1003;
int sline_top_1004;
struct sType* result_type_1005;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct list$1sType$ph* param_types_1006;
struct list$1sType$ph* o2_saved_1007;
struct sType* it_1008;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct list$1char$ph* param_names_1009;
void* __right_value986 = (void*)0;
struct list$1char$ph* param_default_parametors_1010;
char* p_1011;
int sline_1012;
char* sname_1013;
char* head_1014;
struct buffer* source_1015;
void* __right_value987 = (void*)0;
struct buffer* __dec_obj266;
char* __dec_obj267;
void* __right_value988 = (void*)0;
struct sBlock* block_1016;
struct buffer* __dec_obj268;
char* __dec_obj269;
_Bool const_fun_1017;
_Bool var_args_1018;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct sFun* fun2_1019;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
void* __right_value995 = (void*)0;
struct sNode* node_1020;
_Bool Value_1021;
struct sFun* __result_obj__219;
void* __right_value996 = (void*)0;
char* __dec_obj270;
char* __dec_obj271;
char* __dec_obj272;
struct sFun* __result_obj__220;
    caller_fun_997=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_998=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_999=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_1000=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_1001=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj264=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_1002=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj265=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_1003=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_1004=info->sline;
    result_type_1005=(struct sType*)come_increment_ref_count(fun->mResultType);
    param_types_1006=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4145, "struct list$1sType$ph*"))));
    for(    o2_saved_1007=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_1008=list$1sType$ph_begin((o2_saved_1007))    ;    !list$1sType$ph_end((o2_saved_1007))    ;    it_1008=list$1sType$ph_next((o2_saved_1007))    ){
        list$1sType$ph_add(param_types_1006,(struct sType*)come_increment_ref_count(sType_clone(it_1008)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_1007, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_1009=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors_1010=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p_1011=info->p;
    sline_1012=info->sline;
    sname_1013=(char*)come_increment_ref_count(info->sname);
    head_1014=info->head;
    source_1015=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj266=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj266,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj267=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_1016=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_1014;
    __dec_obj268=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_1015);
    come_call_finalizer(buffer_finalize, __dec_obj268,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_1011;
    info->sline=sline_1012;
    __dec_obj269=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_1013);
    __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_1005->mInline=(_Bool)0;
    result_type_1005->mStatic=(_Bool)0;
    result_type_1005->mUniq=(_Bool)0;
    const_fun_1017=fun->mConstFun;
    var_args_1018=fun->mVarArgs;
    fun2_1019=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4181, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type_1005),(struct list$1sType$ph*)come_increment_ref_count(param_types_1006),(struct list$1char$ph*)come_increment_ref_count(param_names_1009),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1010),(_Bool)0,var_args_1018,(struct sBlock*)come_increment_ref_count(block_1016),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_1017,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4186, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value994=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4186, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2_1019),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sFunNode_finalize;
    _inf_value19->clone=(void*)sFunNode_clone;
    _inf_value19->compile=(void*)sFunNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sFunNode_kind;
    _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
    node_1020=(struct sNode*)come_increment_ref_count(_inf_value19);
    come_call_finalizer(sFunNode_finalize, __right_value994, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_1021=node_compile(node_1020,info);
    if(    !Value_1021    ) {
        __result_obj__219 = (void*)come_increment_ref_count(((void*)0));
        (last_code_1001 = come_decrement_ref_count(last_code_1001, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_1002 = come_decrement_ref_count(last_code2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_1003 = come_decrement_ref_count(sname_top_1003, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_1005, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_1006, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_1009, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1010, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_1013 = come_decrement_ref_count(sname_1013, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_1015, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_1016, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_1019, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_1020) ? node_1020 = come_decrement_ref_count(node_1020, ((struct sNode*)node_1020)->finalize, ((struct sNode*)node_1020)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__219;
    }
    else {
    }
    __dec_obj270=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_1003));
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_1004;
    __dec_obj271=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1001);
    __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj272=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1002);
    __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_997;
    info->caller_line=caller_line_998;
    info->caller_sname=caller_sname_999;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1000;
    __result_obj__220 = (struct sFun*)come_increment_ref_count(fun2_1019);
    (last_code_1001 = come_decrement_ref_count(last_code_1001, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_1002 = come_decrement_ref_count(last_code2_1002, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_1003 = come_decrement_ref_count(sname_top_1003, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_1005, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_1006, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_1009, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1010, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_1013 = come_decrement_ref_count(sname_1013, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_1015, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_1016, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun2_1019, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node_1020) ? node_1020 = come_decrement_ref_count(node_1020, ((struct sNode*)node_1020)->finalize, ((struct sNode*)node_1020)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__220;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj273;
char* result_1022;
struct list$1CVALUE$ph* stack_saved_1023;
struct list$1sRightValueObject$ph* right_value_objects_1024;
struct sClass* klass_1025;
char* class_name_1026;
char* fun_name_1027;
void* __right_value997 = (void*)0;
struct sType* type2_1028;
struct sFun* cloner_1029;
char* fun_name2_1030;
void* __right_value998 = (void*)0;
char* none_generics_name_1031;
void* __right_value999 = (void*)0;
struct sType* obj_type_1032;
void* __right_value1000 = (void*)0;
char* __dec_obj274;
void* __right_value1001 = (void*)0;
char* fun_name3_1033;
void* __right_value1002 = (void*)0;
struct sGenericsFun* generics_fun_1034;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var26 = (void*)0;
char* name_1035=0;
_Bool err_1036=0;
_Bool __result_obj__221;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
char* __dec_obj275;
int i_1039;
void* __right_value1008 = (void*)0;
char* new_fun_name_1040;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* __dec_obj276;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var27 = (void*)0;
struct sFun* fun_1041=0;
char* new_fun_name_1042=0;
char* __dec_obj277;
struct list$1sRightValueObject$ph* __dec_obj278;
struct list$1CVALUE$ph* __dec_obj279;
_Bool __result_obj__222;
fun_name2_1030 = (void*)0;
memset(&i_1039, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj273=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj273,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1022=((void*)0);
    stack_saved_1023=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1024=info->right_value_objects;
    klass_1025=type->mClass;
    class_name_1026=klass_1025->mName;
    fun_name_1027="equals";
    type2_1028=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1028->mHeap=(_Bool)0;
    cloner_1029=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1031=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1032=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj274=fun_name2_1030,
        fun_name2_1030=(char*)come_increment_ref_count(create_method_name(obj_type_1032,(_Bool)0,fun_name_1027,info,(_Bool)1));
        __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1033=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1031,fun_name_1027));
        generics_fun_1034=((struct sGenericsFun*)(__right_value1002=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1033,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1002, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1034        ) {
            multiple_assign_var26=((struct tuple2$2char$phbool$*)(__right_value1004=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1030)),generics_fun_1034,(struct sType*)come_increment_ref_count(obj_type_1032),info)));
            name_1035=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            err_1036=multiple_assign_var26->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1004, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1036            ) {
                __result_obj__221 = (_Bool)0;
                (name_1035 = come_decrement_ref_count(name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1031 = come_decrement_ref_count(none_generics_name_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1032, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1033 = come_decrement_ref_count(fun_name3_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1022 = come_decrement_ref_count(result_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1023, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1028, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1030 = come_decrement_ref_count(fun_name2_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__221;
            }
            else {
                cloner_1029=((struct sFun*)(__right_value1005=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1035)));
                come_call_finalizer(sFun_finalize, __right_value1005, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (name_1035 = come_decrement_ref_count(name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1029=((struct sFun*)(__right_value1006=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1030)));
            come_call_finalizer(sFun_finalize, __right_value1006, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1031 = come_decrement_ref_count(none_generics_name_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1032, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1033 = come_decrement_ref_count(fun_name3_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj275=fun_name2_1030,
        fun_name2_1030=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1027,info,(_Bool)1));
        __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1039=128-1        ;        i_1039>=1        ;        i_1039--        ){
            new_fun_name_1040=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1030,i_1039));
            cloner_1029=((struct sFun*)(__right_value1009=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1040)));
            come_call_finalizer(sFun_finalize, __right_value1009, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1029            ) {
                __dec_obj276=fun_name2_1030,
                fun_name2_1030=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1040));
                __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1040 = come_decrement_ref_count(new_fun_name_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1040 = come_decrement_ref_count(new_fun_name_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1029==((void*)0)        ) {
            cloner_1029=((struct sFun*)(__right_value1011=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1030)));
            come_call_finalizer(sFun_finalize, __right_value1011, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1029==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var27=((struct tuple2$2sFun$pchar$ph*)(__right_value1012=create_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1027,info)));
        fun_1041=multiple_assign_var27->v1;
        new_fun_name_1042=(char*)come_increment_ref_count(multiple_assign_var27->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1012, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj277=fun_name2_1030,
        fun_name2_1030=(char*)come_increment_ref_count(new_fun_name_1042);
        __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1029=fun_1041;
        (new_fun_name_1042 = come_decrement_ref_count(new_fun_name_1042, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj278=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1024);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj278,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj279=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1023);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj279,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__222 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1022 = come_decrement_ref_count(result_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1023, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1028, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1030 = come_decrement_ref_count(fun_name2_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__222;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1037;
struct list_item$1CVALUE$ph* prev_it_1038;
    it_1037=self->head;
    while(    it_1037!=((void*)0)    ) {
        prev_it_1038=it_1037;
        it_1037=it_1037->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1038, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1043;
struct list_item$1CVALUE$ph* prev_it_1044;
    it_1043=self->head;
    while(    it_1043!=((void*)0)    ) {
        prev_it_1044=it_1043;
        it_1043=it_1043->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1044, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj280;
char* result_1045;
struct list$1CVALUE$ph* stack_saved_1046;
struct list$1sRightValueObject$ph* right_value_objects_1047;
struct sClass* klass_1048;
char* class_name_1049;
char* fun_name_1050;
void* __right_value1013 = (void*)0;
struct sType* type2_1051;
struct sFun* cloner_1052;
char* fun_name2_1053;
void* __right_value1014 = (void*)0;
char* none_generics_name_1054;
void* __right_value1015 = (void*)0;
struct sType* obj_type_1055;
void* __right_value1016 = (void*)0;
char* __dec_obj281;
void* __right_value1017 = (void*)0;
char* fun_name3_1056;
void* __right_value1018 = (void*)0;
struct sGenericsFun* generics_fun_1057;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var28 = (void*)0;
char* name_1058=0;
_Bool err_1059=0;
_Bool __result_obj__223;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
char* __dec_obj282;
int i_1060;
void* __right_value1024 = (void*)0;
char* new_fun_name_1061;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
char* __dec_obj283;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var29 = (void*)0;
struct sFun* fun_1062=0;
char* new_fun_name_1063=0;
char* __dec_obj284;
struct list$1sRightValueObject$ph* __dec_obj285;
struct list$1CVALUE$ph* __dec_obj286;
_Bool __result_obj__224;
fun_name2_1053 = (void*)0;
memset(&i_1060, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj280=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj280,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1045=((void*)0);
    stack_saved_1046=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1047=info->right_value_objects;
    klass_1048=type->mClass;
    class_name_1049=klass_1048->mName;
    fun_name_1050="operator_equals";
    type2_1051=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1051->mHeap=(_Bool)0;
    cloner_1052=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1054=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1055=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj281=fun_name2_1053,
        fun_name2_1053=(char*)come_increment_ref_count(create_method_name(obj_type_1055,(_Bool)0,fun_name_1050,info,(_Bool)1));
        __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1056=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1054,fun_name_1050));
        generics_fun_1057=((struct sGenericsFun*)(__right_value1018=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1056,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1018, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1057        ) {
            multiple_assign_var28=((struct tuple2$2char$phbool$*)(__right_value1020=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1053)),generics_fun_1057,(struct sType*)come_increment_ref_count(obj_type_1055),info)));
            name_1058=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            err_1059=multiple_assign_var28->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1020, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1059            ) {
                __result_obj__223 = (_Bool)0;
                (name_1058 = come_decrement_ref_count(name_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1054 = come_decrement_ref_count(none_generics_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1055, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1056 = come_decrement_ref_count(fun_name3_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1045 = come_decrement_ref_count(result_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1046, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1051, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1053 = come_decrement_ref_count(fun_name2_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__223;
            }
            cloner_1052=((struct sFun*)(__right_value1021=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1058)));
            come_call_finalizer(sFun_finalize, __right_value1021, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1058 = come_decrement_ref_count(name_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1052=((struct sFun*)(__right_value1022=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1053)));
            come_call_finalizer(sFun_finalize, __right_value1022, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1054 = come_decrement_ref_count(none_generics_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1055, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1056 = come_decrement_ref_count(fun_name3_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj282=fun_name2_1053,
        fun_name2_1053=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1050,info,(_Bool)1));
        __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1060=128-1        ;        i_1060>=1        ;        i_1060--        ){
            new_fun_name_1061=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1053,i_1060));
            cloner_1052=((struct sFun*)(__right_value1025=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1061)));
            come_call_finalizer(sFun_finalize, __right_value1025, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1052            ) {
                __dec_obj283=fun_name2_1053,
                fun_name2_1053=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1061));
                __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1061 = come_decrement_ref_count(new_fun_name_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1061 = come_decrement_ref_count(new_fun_name_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1052==((void*)0)        ) {
            cloner_1052=((struct sFun*)(__right_value1027=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1053)));
            come_call_finalizer(sFun_finalize, __right_value1027, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1052==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var29=((struct tuple2$2sFun$pchar$ph*)(__right_value1028=create_operator_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1050,info)));
        fun_1062=multiple_assign_var29->v1;
        new_fun_name_1063=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1028, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj284=fun_name2_1053,
        fun_name2_1053=(char*)come_increment_ref_count(new_fun_name_1063);
        __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1052=fun_1062;
        (new_fun_name_1063 = come_decrement_ref_count(new_fun_name_1063, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj285=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1047);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj285,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj286=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1046);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj286,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__224 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1045 = come_decrement_ref_count(result_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1046, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1051, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1053 = come_decrement_ref_count(fun_name2_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__224;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj287;
char* result_1064;
struct list$1CVALUE$ph* stack_saved_1065;
struct list$1sRightValueObject$ph* right_value_objects_1066;
struct sClass* klass_1067;
char* class_name_1068;
char* fun_name_1069;
void* __right_value1029 = (void*)0;
struct sType* type2_1070;
struct sFun* cloner_1071;
char* fun_name2_1072;
void* __right_value1030 = (void*)0;
char* none_generics_name_1073;
void* __right_value1031 = (void*)0;
struct sType* obj_type_1074;
void* __right_value1032 = (void*)0;
char* __dec_obj288;
void* __right_value1033 = (void*)0;
char* fun_name3_1075;
void* __right_value1034 = (void*)0;
struct sGenericsFun* generics_fun_1076;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var30 = (void*)0;
char* name_1077=0;
_Bool err_1078=0;
_Bool __result_obj__225;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
char* __dec_obj289;
int i_1079;
void* __right_value1040 = (void*)0;
char* new_fun_name_1080;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
char* __dec_obj290;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var31 = (void*)0;
struct sFun* fun_1081=0;
char* new_fun_name_1082=0;
char* __dec_obj291;
struct list$1sRightValueObject$ph* __dec_obj292;
struct list$1CVALUE$ph* __dec_obj293;
_Bool __result_obj__226;
fun_name2_1072 = (void*)0;
memset(&i_1079, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj287=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj287,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1064=((void*)0);
    stack_saved_1065=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1066=info->right_value_objects;
    klass_1067=type->mClass;
    class_name_1068=klass_1067->mName;
    fun_name_1069="operator_not_equals";
    type2_1070=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1070->mHeap=(_Bool)0;
    cloner_1071=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1073=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1074=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj288=fun_name2_1072,
        fun_name2_1072=(char*)come_increment_ref_count(create_method_name(obj_type_1074,(_Bool)0,fun_name_1069,info,(_Bool)1));
        __dec_obj288 = come_decrement_ref_count(__dec_obj288, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1075=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1073,fun_name_1069));
        generics_fun_1076=((struct sGenericsFun*)(__right_value1034=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1075,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1034, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1076        ) {
            multiple_assign_var30=((struct tuple2$2char$phbool$*)(__right_value1036=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1072)),generics_fun_1076,(struct sType*)come_increment_ref_count(obj_type_1074),info)));
            name_1077=(char*)come_increment_ref_count(multiple_assign_var30->v1);
            err_1078=multiple_assign_var30->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1036, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1078            ) {
                __result_obj__225 = (_Bool)0;
                (name_1077 = come_decrement_ref_count(name_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1073 = come_decrement_ref_count(none_generics_name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1074, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1075 = come_decrement_ref_count(fun_name3_1075, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1064 = come_decrement_ref_count(result_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1065, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1070, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1072 = come_decrement_ref_count(fun_name2_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__225;
            }
            cloner_1071=((struct sFun*)(__right_value1037=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1077)));
            come_call_finalizer(sFun_finalize, __right_value1037, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1077 = come_decrement_ref_count(name_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1071=((struct sFun*)(__right_value1038=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1072)));
            come_call_finalizer(sFun_finalize, __right_value1038, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1073 = come_decrement_ref_count(none_generics_name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1074, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1075 = come_decrement_ref_count(fun_name3_1075, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj289=fun_name2_1072,
        fun_name2_1072=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1069,info,(_Bool)1));
        __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1079=128-1        ;        i_1079>=1        ;        i_1079--        ){
            new_fun_name_1080=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1072,i_1079));
            cloner_1071=((struct sFun*)(__right_value1041=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1080)));
            come_call_finalizer(sFun_finalize, __right_value1041, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1071            ) {
                __dec_obj290=fun_name2_1072,
                fun_name2_1072=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1080));
                __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1080 = come_decrement_ref_count(new_fun_name_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1080 = come_decrement_ref_count(new_fun_name_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1071==((void*)0)        ) {
            cloner_1071=((struct sFun*)(__right_value1043=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1072)));
            come_call_finalizer(sFun_finalize, __right_value1043, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1071==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var31=((struct tuple2$2sFun$pchar$ph*)(__right_value1044=create_operator_not_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1069,info)));
        fun_1081=multiple_assign_var31->v1;
        new_fun_name_1082=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1044, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj291=fun_name2_1072,
        fun_name2_1072=(char*)come_increment_ref_count(new_fun_name_1082);
        __dec_obj291 = come_decrement_ref_count(__dec_obj291, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1071=fun_1081;
        (new_fun_name_1082 = come_decrement_ref_count(new_fun_name_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj292=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1066);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj292,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj293=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1065);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj293,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__226 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1064 = come_decrement_ref_count(result_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1065, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1070, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1072 = come_decrement_ref_count(fun_name2_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__226;
}

