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
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
int transpile(struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
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
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
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
_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sClass* klass_8;
void* __right_value1 = (void*)0;
struct sType* type_23;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct sClass* generics_class_30;
void* __right_value5 = (void*)0;
_Bool generics_type_name_31;
void* __right_value6 = (void*)0;
_Bool mgenerics_type_name_37;
    klass_8=((struct sClass*)(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,buf)));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    type_23=((struct sType*)(__right_value1=map$2char$phsType$ph_operator_load_element(info->types,buf)));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_class_30=((struct sClass*)(__right_value4=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value3=__builtin_string(buf))))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value4, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    generics_type_name_31=list$1char$ph_contained(info->generics_type_names,((char*)(__right_value5=__builtin_string(buf))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    mgenerics_type_name_37=list$1char$ph_contained(info->method_generics_type_names,((char*)(__right_value6=__builtin_string(buf))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(    gComeC    ) {
        return (type_23&&type_23->mTypedef)||(klass_8&&klass_8->mNumber)||(klass_8&&klass_8->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_30||generics_type_name_31||mgenerics_type_name_37||klass_8||type_23||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||charp_operator_equals(buf,"_task")||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_9;
unsigned int hash_10;
unsigned int it_11;
struct sClass* __result_obj__1;
struct sClass* __result_obj__2;
struct sClass* __result_obj__3;
struct sClass* __result_obj__4;
default_value_9 = (void*)0;
    memset(&default_value_9,0,sizeof(struct sClass*));
    hash_10=string_get_hash_key(((char*)key))%self->size;
    it_11=hash_10;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_11]        ) {
            if(            string_equals(self->keys[it_11],key)            ) {
                __result_obj__1 = (struct sClass*)come_increment_ref_count(self->items[it_11]);
                come_call_finalizer(sClass_finalize, default_value_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__1;
            }
            it_11++;
            if(            it_11>=self->size            ) {
                it_11=0;
            }
            else if(            it_11==hash_10            ) {
                __result_obj__2 = (struct sClass*)come_increment_ref_count(default_value_9);
                come_call_finalizer(sClass_finalize, default_value_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__2;
            }
        }
        else {
            __result_obj__3 = (struct sClass*)come_increment_ref_count(default_value_9);
            come_call_finalizer(sClass_finalize, default_value_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__3;
        }
    }
    __result_obj__4 = (struct sClass*)come_increment_ref_count(default_value_9);
    come_call_finalizer(sClass_finalize, default_value_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__4;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_12;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)    ) {
        prev_it_13=it_12;
        it_12=it_12->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_14;
struct list_item$1sType$ph* prev_it_15;
    it_14=self->head;
    while(    it_14!=((void*)0)    ) {
        prev_it_15=it_14;
        it_14=it_14->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_16;
struct list_item$1sNode$ph* prev_it_17;
    it_16=self->head;
    while(    it_16!=((void*)0)    ) {
        prev_it_17=it_16;
        it_16=it_16->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_18;
struct list_item$1char$ph* prev_it_19;
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        prev_it_19=it_18;
        it_18=it_18->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_20;
unsigned int hash_21;
unsigned int it_22;
struct sClass* __result_obj__5;
struct sClass* __result_obj__6;
struct sClass* __result_obj__7;
struct sClass* __result_obj__8;
default_value_20 = (void*)0;
    memset(&default_value_20,0,sizeof(struct sClass*));
    hash_21=string_get_hash_key(((char*)key))%self->size;
    it_22=hash_21;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_22]        ) {
            if(            string_equals(self->keys[it_22],key)            ) {
                __result_obj__5 = (struct sClass*)come_increment_ref_count(self->items[it_22]);
                come_call_finalizer(sClass_finalize, default_value_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__5;
            }
            it_22++;
            if(            it_22>=self->size            ) {
                it_22=0;
            }
            else if(            it_22==hash_21            ) {
                __result_obj__6 = (struct sClass*)come_increment_ref_count(default_value_20);
                come_call_finalizer(sClass_finalize, default_value_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__6;
            }
        }
        else {
            __result_obj__7 = (struct sClass*)come_increment_ref_count(default_value_20);
            come_call_finalizer(sClass_finalize, default_value_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__7;
        }
    }
    __result_obj__8 = (struct sClass*)come_increment_ref_count(default_value_20);
    come_call_finalizer(sClass_finalize, default_value_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__8;
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_24;
unsigned int hash_25;
unsigned int it_26;
struct sType* __result_obj__9;
struct sType* __result_obj__10;
struct sType* __result_obj__11;
struct sType* __result_obj__12;
default_value_24 = (void*)0;
    memset(&default_value_24,0,sizeof(struct sType*));
    hash_25=string_get_hash_key(((char*)key))%self->size;
    it_26=hash_25;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_26]        ) {
            if(            string_equals(self->keys[it_26],key)            ) {
                __result_obj__9 = (struct sType*)come_increment_ref_count(self->items[it_26]);
                come_call_finalizer(sType_finalize, default_value_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__9;
            }
            it_26++;
            if(            it_26>=self->size            ) {
                it_26=0;
            }
            else if(            it_26==hash_25            ) {
                __result_obj__10 = (struct sType*)come_increment_ref_count(default_value_24);
                come_call_finalizer(sType_finalize, default_value_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__10;
            }
        }
        else {
            __result_obj__11 = (struct sType*)come_increment_ref_count(default_value_24);
            come_call_finalizer(sType_finalize, default_value_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__11;
        }
    }
    __result_obj__12 = (struct sType*)come_increment_ref_count(default_value_24);
    come_call_finalizer(sType_finalize, default_value_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__12;
}

static struct sType* map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_27;
unsigned int hash_28;
unsigned int it_29;
struct sType* __result_obj__13;
struct sType* __result_obj__14;
struct sType* __result_obj__15;
struct sType* __result_obj__16;
default_value_27 = (void*)0;
    memset(&default_value_27,0,sizeof(struct sType*));
    hash_28=string_get_hash_key(((char*)key))%self->size;
    it_29=hash_28;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_29]        ) {
            if(            string_equals(self->keys[it_29],key)            ) {
                __result_obj__13 = (struct sType*)come_increment_ref_count(self->items[it_29]);
                come_call_finalizer(sType_finalize, default_value_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__13;
            }
            it_29++;
            if(            it_29>=self->size            ) {
                it_29=0;
            }
            else if(            it_29==hash_28            ) {
                __result_obj__14 = (struct sType*)come_increment_ref_count(default_value_27);
                come_call_finalizer(sType_finalize, default_value_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__14;
            }
        }
        else {
            __result_obj__15 = (struct sType*)come_increment_ref_count(default_value_27);
            come_call_finalizer(sType_finalize, default_value_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__15;
        }
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(default_value_27);
    come_call_finalizer(sType_finalize, default_value_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char* item){
char* it_34;
    for(    it_34=list$1char$ph_begin(self)    ;    !list$1char$ph_end(self)    ;    it_34=list$1char$ph_next(self)    ){
        if(        string_equals(it_34,item)        ) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_32;
char* __result_obj__17;
char* __result_obj__18;
char* result_33;
char* __result_obj__19;
result_32 = (void*)0;
result_33 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_32,0,sizeof(char*));
        __result_obj__17 = result_32;
        return __result_obj__17;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__18 = self->it->item;
        return __result_obj__18;
    }
    memset(&result_33,0,sizeof(char*));
    __result_obj__19 = result_33;
    return __result_obj__19;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_35;
char* __result_obj__20;
char* __result_obj__21;
char* result_36;
char* __result_obj__22;
result_35 = (void*)0;
result_36 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_35,0,sizeof(char*));
        __result_obj__20 = result_35;
        return __result_obj__20;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__21 = self->it->item;
        return __result_obj__21;
    }
    memset(&result_36,0,sizeof(char*));
    __result_obj__22 = result_36;
    return __result_obj__22;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct sType* type2_38;
struct sType* __dec_obj1;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
struct list$1sType$ph* o2_saved_62;
struct sType* it_65;
_Bool __result_obj__45;
_Bool __result_obj__46;
_Bool __result_obj__47;
_Bool __result_obj__48;
type2_38 = (void*)0;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj1=type2_38,
        type2_38=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj25=type2_38,
        type2_38=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    for(    o2_saved_62=(struct list$1sType$ph*)come_increment_ref_count((type2_38->mGenericsTypes)),it_65=list$1sType$ph_begin((o2_saved_62))    ;    !list$1sType$ph_end((o2_saved_62))    ;    it_65=list$1sType$ph_next((o2_saved_62))    ){
        if(        is_contained_generics_class(it_65,info)        ) {
            __result_obj__45 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__45;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type2_38->mClass->mGenerics    ) {
        __result_obj__46 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__46;
    }
    if(    type2_38->mClass->mMethodGenerics    ) {
        __result_obj__47 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__47;
    }
    __result_obj__48 = (_Bool)0;
    come_call_finalizer(sType_finalize, type2_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__48;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__23;
void* __right_value7 = (void*)0;
struct sType* result_39;
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
struct sType* __result_obj__38;
    if(    self==(void*)0    ) {
        __result_obj__23 = (void*)0;
        return __result_obj__23;
    }
    result_39=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_39->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_39->mOriginalLoadVarType,
        result_39->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_39->mChannelType,
        result_39->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_39->mGenericsTypes,
        result_39->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_39->mNoSolvedGenericsType,
        result_39->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_39->mSizeNum,
        result_39->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_39->mAlignas,
        result_39->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_39->mTupleName,
        result_39->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_39->mAttribute,
        result_39->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_39->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_39->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_39->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_39->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_39->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_39->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_39->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_39->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_39->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_39->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_39->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_39->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_39->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_39->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_39->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_39->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_39->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_39->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_39->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_39->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_39->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_39->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_39->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_39->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj13=result_39->mAsmName,
        result_39->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_39->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_39->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_39->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj17=result_39->mArrayNum,
        result_39->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_39->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_39->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_39->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_39->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_39->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj18=result_39->mOriginalTypeName,
        result_39->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_39->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_39->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_39->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_39->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj19=result_39->mParamTypes,
        result_39->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj23=result_39->mParamNames,
        result_39->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj24=result_39->mResultType,
        result_39->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_39->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_39->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__38 = result_39;
    come_call_finalizer(sType_finalize, result_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__24;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_40;
struct list_item$1sType$ph* it_41;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__27;
    if(    self==((void*)0)    ) {
        __result_obj__24 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__24;
    }
    result_40=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_41=self->head;
    while(    it_41!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_40,(struct sType*)come_increment_ref_count(sType_clone(it_41->item)));
        }
        else {
            list$1sType$ph_add(result_40,(struct sType*)come_increment_ref_count(sType_clone(it_41->item)));
        }
        it_41=it_41->next;
    }
    __result_obj__27 = (struct list$1sType$ph*)come_increment_ref_count(result_40);
    come_call_finalizer(list$1sType$ph$p_finalize, result_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__25;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__25 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_42;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_43;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_44;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__26;
    if(    self->len==0    ) {
        litem_42=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        __dec_obj4=litem_42->item,
        litem_42->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_42;
        self->head=litem_42;
    }
    else if(    self->len==1    ) {
        litem_43=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_43->prev=self->head;
        litem_43->next=((void*)0);
        __dec_obj5=litem_43->item,
        litem_43->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_43;
        self->head->next=litem_43;
    }
    else {
        litem_44=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_44->prev=self->tail;
        litem_44->next=((void*)0);
        __dec_obj6=litem_44->item,
        litem_44->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_44;
        self->tail=litem_44;
    }
    self->len++;
    __result_obj__26 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__26;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_45;
struct list_item$1sType$ph* prev_it_46;
    it_45=self->head;
    while(    it_45!=((void*)0)    ) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__28;
void* __right_value19 = (void*)0;
struct sNode* result_47;
struct sNode* __result_obj__29;
    if(    self==(void*)0    ) {
        __result_obj__28 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__28) ? __result_obj__28 = come_decrement_ref_count(__result_obj__28, ((struct sNode*)__result_obj__28)->finalize, ((struct sNode*)__result_obj__28)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__28;
    }
    result_47=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_47->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_47->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_47->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_47->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_47->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_47->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_47->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_47->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_47->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_47->no_mutex=self->no_mutex;
    }
    __result_obj__29 = (struct sNode*)come_increment_ref_count(result_47);
    ((result_47) ? result_47 = come_decrement_ref_count(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__29) ? __result_obj__29 = come_decrement_ref_count(__result_obj__29, ((struct sNode*)__result_obj__29)->finalize, ((struct sNode*)__result_obj__29)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__29;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__30;
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct list$1sNode$ph* result_48;
struct list_item$1sNode$ph* it_49;
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1sNode$ph* __result_obj__33;
    if(    self==((void*)0)    ) {
        __result_obj__30 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__30;
    }
    result_48=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_49=self->head;
    while(    it_49!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_48,(struct sNode*)come_increment_ref_count(sNode_clone(it_49->item)));
        }
        else {
            list$1sNode$ph_add(result_48,(struct sNode*)come_increment_ref_count(sNode_clone(it_49->item)));
        }
        it_49=it_49->next;
    }
    __result_obj__33 = (struct list$1sNode$ph*)come_increment_ref_count(result_48);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__31;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__31;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_50;
struct sNode* __dec_obj14;
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_51;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_52;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_50=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_50->prev=((void*)0);
        litem_50->next=((void*)0);
        __dec_obj14=litem_50->item,
        litem_50->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_50;
        self->head=litem_50;
    }
    else if(    self->len==1    ) {
        litem_51=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_51->prev=self->head;
        litem_51->next=((void*)0);
        __dec_obj15=litem_51->item,
        litem_51->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_51;
        self->head->next=litem_51;
    }
    else {
        litem_52=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_52->prev=self->tail;
        litem_52->next=((void*)0);
        __dec_obj16=litem_52->item,
        litem_52->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_52;
        self->tail=litem_52;
    }
    self->len++;
    __result_obj__32 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__32;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_53;
struct list_item$1sNode$ph* prev_it_54;
    it_53=self->head;
    while(    it_53!=((void*)0)    ) {
        prev_it_54=it_53;
        it_53=it_53->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__34;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct list$1char$ph* result_55;
struct list_item$1char$ph* it_56;
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct list$1char$ph* __result_obj__37;
    if(    self==((void*)0)    ) {
        __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__34;
    }
    result_55=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_56=self->head;
    while(    it_56!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_55,(char*)come_increment_ref_count((char*)come_memdup(it_56->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_55,(char*)come_increment_ref_count((char*)come_memdup(it_56->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_56=it_56->next;
    }
    __result_obj__37 = (struct list$1char$ph*)come_increment_ref_count(result_55);
    come_call_finalizer(list$1char$ph$p_finalize, result_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_57;
char* __dec_obj20;
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_58;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_59;
char* __dec_obj22;
struct list$1char$ph* __result_obj__36;
    if(    self->len==0    ) {
        litem_57=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_57->prev=((void*)0);
        litem_57->next=((void*)0);
        __dec_obj20=litem_57->item,
        litem_57->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_57;
        self->head=litem_57;
    }
    else if(    self->len==1    ) {
        litem_58=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_58->prev=self->head;
        litem_58->next=((void*)0);
        __dec_obj21=litem_58->item,
        litem_58->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_58;
        self->head->next=litem_58;
    }
    else {
        litem_59=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_59->prev=self->tail;
        litem_59->next=((void*)0);
        __dec_obj22=litem_59->item,
        litem_59->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_59;
        self->tail=litem_59;
    }
    self->len++;
    __result_obj__36 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__36;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_60;
struct list_item$1char$ph* prev_it_61;
    it_60=self->head;
    while(    it_60!=((void*)0)    ) {
        prev_it_61=it_60;
        it_60=it_60->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_63;
struct sType* __result_obj__39;
struct sType* __result_obj__40;
struct sType* result_64;
struct sType* __result_obj__41;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_63,0,sizeof(struct sType*));
        __result_obj__39 = result_63;
        return __result_obj__39;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_64,0,sizeof(struct sType*));
    __result_obj__41 = result_64;
    return __result_obj__41;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_66;
struct sType* __result_obj__42;
struct sType* __result_obj__43;
struct sType* result_67;
struct sType* __result_obj__44;
result_66 = (void*)0;
result_67 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_66,0,sizeof(struct sType*));
        __result_obj__42 = result_66;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_67,0,sizeof(struct sType*));
    __result_obj__44 = result_67;
    return __result_obj__44;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct list$1sType$ph* param_types_68;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct list$1char$ph* param_names_69;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char$ph* param_default_parametors_70;
_Bool var_args_71;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sType* type__72;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
_Bool void_param_73;
char* p_74;
int sline_75;
void* __right_value55 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_76=0;
char* param_name_77=0;
_Bool err_78=0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__50;
void* __right_value58 = (void*)0;
struct sType* param_type2_79;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
char* p_86;
_Bool no_comma_87;
void* __right_value67 = (void*)0;
struct sNode* node_88;
char* p2_89;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__53;
    param_types_68=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 82, "struct list$1sType$ph*"))));
    param_names_69=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 83, "struct list$1char$ph*"))));
    param_default_parametors_70=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05type.c", 84, "struct list$1char$ph*"))));
    var_args_71=(_Bool)0;
    if(    in_constructor_    ) {
        list$1char$ph_add(param_names_69,(char*)come_increment_ref_count(xsprintf("self")));
        type__72=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        type__72->mHeap=(_Bool)1;
        list$1sType$ph_add(param_types_68,(struct sType*)come_increment_ref_count(type__72));
        list$1char$ph_add(param_default_parametors_70,((void*)0));
        come_call_finalizer(sType_finalize, type__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->in_class    ) {
        list$1char$ph_add(param_names_69,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(param_types_68,(struct sType*)come_increment_ref_count(sType_clone(info->class_type)));
        list$1char$ph_add(param_default_parametors_70,((void*)0));
    }
    expected_next_character(40,info);
    void_param_73=(_Bool)0;
    {
        p_74=info->p;
        sline_75=info->sline;
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                void_param_73=(_Bool)1;
            }
        }
        info->p=p_74;
        info->sline=sline_75;
    }
    if(    void_param_73    ) {
        if(        parsecmp("void",info)        ) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value55=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_76=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_77=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_78=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_78            ) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__50 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value57=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 146, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer(sType_finalize, param_type_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (param_name_77 = come_decrement_ref_count(param_name_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__50;
            }
            param_type2_79=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_76),(struct sType*)come_increment_ref_count(info->generics_type),info));
            list$1sType$ph_push_back(param_types_68,(struct sType*)come_increment_ref_count(sType_clone(param_type2_79)));
            list$1char$ph_push_back(param_names_69,(char*)come_increment_ref_count((char*)come_memdup(param_name_77, "05type.c", 152, "char*")));
            if(            *info->p==61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_86=info->p;
                no_comma_87=info->no_comma;
                info->no_comma=(_Bool)1;
                node_88=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_87;
                p2_89=info->p;
                char buf_90[p2_89-p_86+1];
                memset(&buf_90, 0, sizeof(char)                *(p2_89-p_86+1)                );
                memcpy(buf_90,p_86,p2_89-p_86);
                buf_90[p2_89-p_86]=0;
                list$1char$ph_push_back(param_default_parametors_70,(char*)come_increment_ref_count(__builtin_string(buf_90)));
                ((node_88) ? node_88 = come_decrement_ref_count(node_88, ((struct sNode*)node_88)->finalize, ((struct sNode*)node_88)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(param_default_parametors_70,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                parsecmp("...",info)                ) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_71=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name_77 = come_decrement_ref_count(param_name_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (param_name_77 = come_decrement_ref_count(param_name_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (param_name_77 = come_decrement_ref_count(param_name_77, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    __result_obj__53 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value70=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc_v2(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 204, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types_68),(struct list$1char$ph*)come_increment_ref_count(param_names_69),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_70),var_args_71))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj26;
struct list$1char$ph* __dec_obj27;
struct list$1char$ph* __dec_obj28;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__49;
    __dec_obj26=self->v1,
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj27=self->v2,
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj28=self->v3,
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->v4=v4;
    __result_obj__49 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value59 = (void*)0;
struct list_item$1sType$ph* litem_80;
struct sType* __dec_obj29;
void* __right_value60 = (void*)0;
struct list_item$1sType$ph* litem_81;
struct sType* __dec_obj30;
void* __right_value61 = (void*)0;
struct list_item$1sType$ph* litem_82;
struct sType* __dec_obj31;
struct list$1sType$ph* __result_obj__51;
    if(    self->len==0    ) {
        litem_80=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value59=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sType$ph*"))));
        litem_80->prev=((void*)0);
        litem_80->next=((void*)0);
        __dec_obj29=litem_80->item,
        litem_80->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_80;
        self->head=litem_80;
    }
    else if(    self->len==1    ) {
        litem_81=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value60=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sType$ph*"))));
        litem_81->prev=self->head;
        litem_81->next=((void*)0);
        __dec_obj30=litem_81->item,
        litem_81->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_81;
        self->head->next=litem_81;
    }
    else {
        litem_82=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value61=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sType$ph*"))));
        litem_82->prev=self->tail;
        litem_82->next=((void*)0);
        __dec_obj31=litem_82->item,
        litem_82->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_82;
        self->tail=litem_82;
    }
    self->len++;
    __result_obj__51 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__51;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_83;
char* __dec_obj32;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_84;
char* __dec_obj33;
void* __right_value65 = (void*)0;
struct list_item$1char$ph* litem_85;
char* __dec_obj34;
struct list$1char$ph* __result_obj__52;
    if(    self->len==0    ) {
        litem_83=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj32=litem_83->item,
        litem_83->item=(char*)come_increment_ref_count(item);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1    ) {
        litem_84=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj33=litem_84->item,
        litem_84->item=(char*)come_increment_ref_count(item);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value65=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj34=litem_85->item,
        litem_85->item=(char*)come_increment_ref_count(item);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result_obj__52 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__52;
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value71 = (void*)0;
struct sType* left_type2_91;
void* __right_value72 = (void*)0;
struct sType* right_type2_92;
struct sType* left_no_solved_generics_type_93;
struct sType* right_no_solved_generics_type_94;
struct sClass* left_class_95;
struct sClass* right_class_96;
_Bool parent_class_97;
void* __right_value73 = (void*)0;
_Bool __result_obj__54;
_Bool __result_obj__55;
struct sClass* klass_98;
_Bool flag__99;
void* __right_value74 = (void*)0;
_Bool __result_obj__56;
_Bool __result_obj__57;
_Bool __result_obj__58;
void* __right_value75 = (void*)0;
char* left_type3_100;
void* __right_value76 = (void*)0;
char* __dec_obj35;
void* __right_value77 = (void*)0;
struct sType* __dec_obj36;
void* __right_value78 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__59;
void* __right_value79 = (void*)0;
char* left_type3_101;
void* __right_value80 = (void*)0;
char* __dec_obj38;
void* __right_value81 = (void*)0;
struct sType* __dec_obj39;
void* __right_value82 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__60;
_Bool __result_obj__61;
_Bool __result_obj__62;
int i_102;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
_Bool __result_obj__67;
_Bool __result_obj__68;
void* __right_value85 = (void*)0;
char* left_type3_109;
void* __right_value86 = (void*)0;
char* __dec_obj41;
void* __right_value87 = (void*)0;
struct sType* __dec_obj42;
void* __right_value88 = (void*)0;
struct sType* __dec_obj43;
_Bool __result_obj__69;
void* __right_value89 = (void*)0;
char* left_type3_110;
void* __right_value90 = (void*)0;
char* __dec_obj44;
void* __right_value91 = (void*)0;
struct sType* __dec_obj45;
void* __right_value92 = (void*)0;
struct sType* __dec_obj46;
_Bool __result_obj__70;
void* __right_value93 = (void*)0;
char* __dec_obj47;
void* __right_value94 = (void*)0;
struct sType* __dec_obj48;
void* __right_value95 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__71;
void* __right_value96 = (void*)0;
char* left_type3_111;
void* __right_value97 = (void*)0;
char* __dec_obj50;
void* __right_value98 = (void*)0;
struct sType* __dec_obj51;
void* __right_value99 = (void*)0;
struct sType* __dec_obj52;
_Bool __result_obj__72;
void* __right_value100 = (void*)0;
char* left_type3_112;
void* __right_value101 = (void*)0;
char* __dec_obj53;
void* __right_value102 = (void*)0;
struct sType* __dec_obj54;
void* __right_value103 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__73;
_Bool __result_obj__74;
_Bool __result_obj__75;
_Bool __result_obj__76;
_Bool __result_obj__77;
_Bool __result_obj__78;
_Bool __result_obj__79;
_Bool __result_obj__80;
_Bool __result_obj__81;
_Bool __result_obj__82;
_Bool __result_obj__83;
_Bool __result_obj__84;
_Bool __result_obj__85;
_Bool __result_obj__86;
_Bool __result_obj__87;
_Bool __result_obj__88;
_Bool __result_obj__89;
_Bool __result_obj__90;
void* __right_value104 = (void*)0;
char* tmp_113;
void* __right_value105 = (void*)0;
char* __dec_obj56;
void* __right_value106 = (void*)0;
struct sType* __dec_obj57;
void* __right_value107 = (void*)0;
struct sType* __dec_obj58;
_Bool __result_obj__91;
_Bool __result_obj__92;
_Bool __result_obj__93;
_Bool __result_obj__94;
void* __right_value108 = (void*)0;
char* tmp_114;
void* __right_value109 = (void*)0;
char* __dec_obj59;
void* __right_value110 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__95;
_Bool __result_obj__96;
int i_115;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
_Bool __result_obj__97;
    left_type2_91=(struct sType*)come_increment_ref_count(sType_clone(left_type));
    right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_93=((void*)0);
    if(    left_type2_91->mNoSolvedGenericsType    ) {
        left_no_solved_generics_type_93=left_type2_91->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_94=((void*)0);
    if(    right_type2_92->mNoSolvedGenericsType    ) {
        right_no_solved_generics_type_94=right_type2_92->mNoSolvedGenericsType;
    }
    left_class_95=left_type2_91->mClass;
    right_class_96=right_type2_92->mClass;
    parent_class_97=(_Bool)0;
    if(    string_operator_not_equals(left_class_95->mName,right_class_96->mName)    ) {
        while(        left_class_95&&right_class_96        ) {
            if(            string_operator_equals(left_class_95->mName,right_class_96->mName)            ) {
                parent_class_97=(_Bool)1;
            }
            if(            right_class_96->mParentClassName            ) {
                right_class_96=((struct sClass*)(__right_value73=map$2char$phsClass$ph_operator_load_element(info->classes,right_class_96->mParentClassName)));
                come_call_finalizer(sClass_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                right_class_96=((void*)0);
            }
        }
    }
    if(    pointer_massive    ) {
        if(        left_type2_91->mPointerNum>0&&right_type->mPointerNum==0        ) {
            if(            string_operator_equals(left_type2_91->mClass->mName,"lambda")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__54 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__54;
            }
        }
        else if(        left_type2_91->mPointerNum==0&&right_type->mPointerNum>0        ) {
            if(            list$1sNode$ph_length(left_type2_91->mArrayNum)>0            ) {
            }
            else if(            string_operator_equals(left_type2_91->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__55 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__55;
            }
        }
        else if(        left_type2_91->mPointerNum>0&&right_type->mPointerNum>0        ) {
            klass_98=right_type->mClass;
            flag__99=(_Bool)0;
            while(            klass_98            ) {
                if(                string_operator_equals(klass_98->mName,left_type2_91->mClass->mName)                ) {
                    flag__99=(_Bool)1;
                }
                if(                klass_98->mParentClassName                ) {
                    klass_98=((struct sClass*)(__right_value74=map$2char$phsClass$ph_operator_load_element(info->classes,klass_98->mParentClassName)));
                    come_call_finalizer(sClass_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    klass_98=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_91->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_91->mClass->mName,"lambda")            ) {
            }
            else if(            left_type2_91->mException            ) {
            }
            else if(            left_no_solved_generics_type_93&&right_no_solved_generics_type_94&&(list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes)>0||list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes)>0)            ) {
            }
            else if(            strlen(left_type2_91->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_91->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))            ) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")            ) {
            }
            else if(            string_operator_not_equals(left_type2_91->mClass->mName,right_type->mClass->mName)&&!flag__99            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                    info->err_num++;
                    __result_obj__56 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__56;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_93&&right_no_solved_generics_type_94    ) {
        if(        strlen(left_type2_91->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_91->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__57 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__57;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_91->mPointerNum>0        ) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mNumber&&left_type2_91->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
                    info->err_num++;
                    __result_obj__58 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__58;
                }
            }
            else {
                left_type3_100=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj35=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_100,come_value->c_value));
                __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj36=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj37=right_type2_92,
                right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (left_type3_100 = come_decrement_ref_count(left_type3_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mFloat&&left_type2_91->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
                    info->err_num++;
                    __result_obj__59 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__59;
                }
            }
            else {
                left_type3_101=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj38=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_101,come_value->c_value));
                __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj39=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj40=right_type2_92,
                right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (left_type3_101 = come_decrement_ref_count(left_type3_101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)&&left_type2_91->mPointerNum==right_type2_92->mPointerNum        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"void")&&left_type2_91->mPointerNum>0&&string_operator_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)&&(left_type2_91->mPointerNum!=right_type2_92->mPointerNum||left_type2_91->mHeap!=right_type2_92->mHeap)        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)&&(left_type2_91->mPointerNum!=right_type2_92->mPointerNum||left_type2_91->mHeap!=right_type2_92->mHeap)        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_91->mClass->mName);
            printf("right type class_name %s\n",right_type2_92->mClass->mName);
            printf("left type pointernum %d\n",left_type2_91->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_91->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
            info->err_num++;
            __result_obj__60 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__60;
        }
        else if(        list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes)>0        ) {
            if(            (string_operator_equals(left_no_solved_generics_type_93->mClass->mName,"void")&&left_no_solved_generics_type_93->mPointerNum>0&&right_no_solved_generics_type_94->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_94->mClass->mName,"void")&&right_no_solved_generics_type_94->mPointerNum>0&&left_no_solved_generics_type_93->mPointerNum>0)            ) {
            }
            else {
                if(                list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes)!=list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
                        info->err_num++;
                        __result_obj__61 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__61;
                    }
                    __result_obj__62 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__62;
                }
                for(                i_102=0                ;                i_102<list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes)                ;                i_102++                ){
                    check_assign_type(msg,((struct sType*)(__right_value83=list$1sType$ph_operator_load_element(left_no_solved_generics_type_93->mGenericsTypes,i_102))),((struct sType*)(__right_value84=list$1sType$ph_operator_load_element(right_no_solved_generics_type_94->mGenericsTypes,i_102))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    come_call_finalizer(sType_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_93,right_no_solved_generics_type_94,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
            }
        }
    }
    else if(    strlen(left_type2_91->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_91->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)    ) {
        if(        print_err_msg        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__67 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__67;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mNumber&&left_type2_91->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
                info->err_num++;
                __result_obj__68 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__68;
            }
        }
        else {
            left_type3_109=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj41=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_109,come_value->c_value));
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj42=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj43=right_type2_92,
            right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_109 = come_decrement_ref_count(left_type3_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mFloat&&left_type2_91->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(left_no_solved_generics_type_93->mGenericsTypes),left_no_solved_generics_type_93->mClass->mName,left_type2_91->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph_length(right_no_solved_generics_type_94->mGenericsTypes),right_no_solved_generics_type_94->mClass->mName,right_type2_92->mClass->mName);
                info->err_num++;
                __result_obj__69 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__69;
            }
        }
        else {
            left_type3_110=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj44=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_110,come_value->c_value));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj45=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj46=right_type2_92,
            right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_110 = come_decrement_ref_count(left_type3_110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    left_type2_91->mHeap&&!right_type2_92->mHeap&&left_type2_91->mPointerNum>0&&right_type2_92->mPointerNum>0&&string_operator_not_equals(right_type2_92->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_91->mMultipleTypes&&!right_type->mMultipleTypes    ) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum,left_type2_91->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum,right_type2_92->mHeap);
        info->err_num++;
        __result_obj__70 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__70;
    }
    else if(    parent_class_97&&left_type2_91->mPointerNum==1&&right_type->mPointerNum==1    ) {
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_91->mClass->mName,come_value->c_value));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj48=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj49=right_type2_92,
        right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mNumber&&left_type2_91->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__71 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__71;
            }
        }
        else {
            left_type3_111=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj50=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_111,come_value->c_value));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj51=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj52=right_type2_92,
            right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_111 = come_decrement_ref_count(left_type3_111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_91->mClass->mFloat&&left_type2_91->mPointerNum==0    ) {
        if(        pointer_massive        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__72 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__72;
            }
        }
        else {
            left_type3_112=(char*)come_increment_ref_count(make_type_name_string(left_type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj53=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_112,come_value->c_value));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj54=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj55=right_type2_92,
            right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (left_type3_112 = come_decrement_ref_count(left_type3_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)&&left_type2_91->mPointerNum>0&&right_type2_92->mPointerNum>0&&!right_type2_92->mAllocaValue    ) {
        if(        left_type2_91->mHeap&&!right_type2_92->mHeap        ) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum,left_type2_91->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum,right_type2_92->mHeap);
            info->err_num++;
            __result_obj__73 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__73;
        }
    }
    else if(    check_no_pointer    ) {
        if(        left_type2_91->mPointerNum>0        ) {
            if(            right_type2_92->mPointerNum>0            ) {
                if(                string_operator_equals(left_type2_91->mClass->mName,"void")||string_operator_equals(right_type2_92->mClass->mName,"void")                ) {
                }
                else if(                string_operator_equals(left_type2_91->mClass->mName,"va_list")||string_operator_equals(right_type2_92->mClass->mName,"va_list")                ) {
                }
                else if(                string_operator_not_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)                ) {
                    if(                    print_err_msg                    ) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                        info->err_num++;
                        __result_obj__74 = (_Bool)0;
                        come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__74;
                    }
                    __result_obj__75 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__75;
                }
            }
            else if(            right_type->mPointerNum==0            ) {
            }
            else {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                    info->err_num++;
                    __result_obj__76 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__76;
                }
                __result_obj__77 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__77;
            }
        }
        else if(        left_type2_91->mPointerNum==0&&right_type2_92->mPointerNum>0        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__78 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__78;
            }
            __result_obj__79 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__79;
        }
        else if(        left_type2_91->mPointerNum>0&&right_type2_92->mPointerNum==0&&string_operator_equals(right_type2_92->mClass->mName,"lambda")&&string_operator_equals(left_type2_91->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_not_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__80 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__80;
            }
            __result_obj__81 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__81;
        }
    }
    else if(    string_operator_equals(left_type2_91->mClass->mName,"char")&&left_type2_91->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_92->mClass->mName,"char")&&right_type2_92->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_92->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"va_list")||string_operator_equals(right_type2_92->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__82 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__82;
            }
            __result_obj__83 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__83;
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"void")&&right_type2_92->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__84 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__84;
            }
            __result_obj__85 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__85;
        }
        else if(        string_operator_not_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)&&!(left_type2_91->mPointerNum>0&&right_type2_92->mPointerNum==0)        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__86 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__86;
            }
            __result_obj__87 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__87;
        }
    }
    else if(    string_operator_equals(left_type2_91->mClass->mName,"void")&&left_type2_91->mPointerNum==1    ) {
        if(        string_operator_equals(right_type2_92->mClass->mName,"void")&&right_type2_92->mPointerNum==1        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_92->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"va_list")||string_operator_equals(right_type2_92->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"lambda")        ) {
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"void")&&right_type2_92->mPointerNum>0        ) {
        }
        else if(        string_operator_equals(right_type2_92->mClass->mName,"void")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__88 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__88;
            }
            __result_obj__89 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__89;
        }
        else if(        right_type2_92->mPointerNum==0        ) {
            if(            pointer_massive            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                    info->err_num++;
                    __result_obj__90 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__90;
                }
            }
            else {
                tmp_113=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj56=come_value->c_value,
                come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_113, "05type.c", 686, "char*"));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj57=come_value->type,
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj58=right_type2_92,
                right_type2_92=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
                come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (tmp_113 = come_decrement_ref_count(tmp_113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    else if(    left_type2_91->mPointerNum>0||(left_type2_91->mPointerNum==0&&left_type2_91->mClass->mStruct)    ) {
        if(        right_type2_92->mPointerNum>0||(right_type2_92->mPointerNum==0&&right_type2_92->mClass->mStruct)        ) {
            if(            string_operator_equals(left_type2_91->mClass->mName,"void")||string_operator_equals(right_type2_92->mClass->mName,"void")            ) {
            }
            else if(            string_operator_equals(left_type2_91->mClass->mName,"va_list")||string_operator_equals(right_type2_92->mClass->mName,"va_list")            ) {
            }
            else if(            string_operator_not_equals(left_type2_91->mClass->mName,right_type2_92->mClass->mName)            ) {
                if(                print_err_msg                ) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                    info->err_num++;
                    __result_obj__91 = (_Bool)0;
                    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__91;
                }
                __result_obj__92 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__92;
            }
            else if(            int_operator_not_equals(left_type2_91->mPointerNum,right_type2_92->mPointerNum)            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
            }
            else if(            list$1sNode$ph_length(right_type2_92->mArrayNum)>0            ) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum,list$1sNode$ph_length(left_type2_91->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum,list$1sNode$ph_length(right_type2_92->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"void")||string_operator_equals(right_type2_92->mClass->mName,"void")        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"va_list")||string_operator_equals(right_type2_92->mClass->mName,"va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_92->mClass->mName,"__builtin_va_list")        ) {
        }
        else if(        string_operator_equals(left_type2_91->mClass->mName,"lambda")&&string_operator_equals(right_type2_92->mClass->mName,"lambda")        ) {
        }
        else if(        left_type2_91->mPointerNum>0&&right_type2_92->mPointerNum==0&&string_operator_equals(right_type2_92->mClass->mName,"lambda")&&string_operator_equals(left_type2_91->mClass->mName,"lambda")        ) {
            if(            print_err_msg            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__93 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__93;
            }
            __result_obj__94 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__94;
        }
        else if(        left_type2_91->mPointerNum>0&&!(string_operator_equals(right_type2_92->mClass->mName,"lambda")&&string_operator_equals(left_type2_91->mClass->mName,"lambda"))&&right_type2_92->mPointerNum==0        ) {
            tmp_114=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj59=come_value->c_value,
            come_value->c_value=(char*)come_increment_ref_count((char*)come_memdup(tmp_114, "05type.c", 742, "char*"));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj60=come_value->type,
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type2_91));
            come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __result_obj__95 = (_Bool)1;
            (tmp_114 = come_decrement_ref_count(tmp_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__95;
            (tmp_114 = come_decrement_ref_count(tmp_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        list$1sType$ph_length(left_type2_91->mGenericsTypes)>0        ) {
            if(            list$1sType$ph_length(left_type2_91->mGenericsTypes)!=list$1sType$ph_length(right_type2_92->mGenericsTypes)            ) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_91->mClass->mName,left_type2_91->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_92->mClass->mName,right_type2_92->mPointerNum);
                info->err_num++;
                __result_obj__96 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__96;
            }
            for(            i_115=0            ;            i_115<list$1sType$ph_length(left_type2_91->mGenericsTypes)            ;            i_115++            ){
                check_assign_type(msg,((struct sType*)(__right_value111=list$1sType$ph_operator_load_element(left_type2_91->mGenericsTypes,i_115))),((struct sType*)(__right_value112=list$1sType$ph_operator_load_element(right_type2_92->mGenericsTypes,i_115))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info);
                come_call_finalizer(sType_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    __result_obj__97 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, right_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__97;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_103;
int i_104;
struct sType* __result_obj__63;
struct sType* default_value_105;
struct sType* __result_obj__64;
default_value_105 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_103=self->head;
    i_104=0;
    while(    it_103!=((void*)0)    ) {
        if(        position==i_104        ) {
            __result_obj__63 = (struct sType*)come_increment_ref_count(it_103->item);
            come_call_finalizer(sType_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__63;
        }
        it_103=it_103->next;
        i_104++;
    }
    memset(&default_value_105,0,sizeof(struct sType*));
    __result_obj__64 = (struct sType*)come_increment_ref_count(default_value_105);
    come_call_finalizer(sType_finalize, default_value_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_106;
int i_107;
struct sType* __result_obj__65;
struct sType* default_value_108;
struct sType* __result_obj__66;
default_value_108 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_106=self->head;
    i_107=0;
    while(    it_106!=((void*)0)    ) {
        if(        position==i_107        ) {
            __result_obj__65 = (struct sType*)come_increment_ref_count(it_106->item);
            come_call_finalizer(sType_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__65;
        }
        it_106=it_106->next;
        i_107++;
    }
    memset(&default_value_108,0,sizeof(struct sType*));
    __result_obj__66 = (struct sType*)come_increment_ref_count(default_value_108);
    come_call_finalizer(sType_finalize, default_value_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value113 = (void*)0;
struct sType* result_type_116;
char* var_name_117;
char* p_118;
int sline_119;
void* __right_value114 = (void*)0;
char* word_120;
_Bool between_brace_121;
char* p_122;
int sline_123;
void* __right_value115 = (void*)0;
char* word_124;
void* __right_value116 = (void*)0;
char* __dec_obj61;
void* __right_value117 = (void*)0;
char* __dec_obj62;
_Bool no_comma_126;
void* __right_value118 = (void*)0;
struct sNode* node_127;
struct sNode* __dec_obj63;
char* p_128;
int sline_129;
void* __right_value119 = (void*)0;
char* word_130;
void* __right_value120 = (void*)0;
struct sNode* node_131;
void* __right_value124 = (void*)0;
char* attribute_135;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
char* __dec_obj67;
char* __dec_obj68;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__100;
    result_type_116=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first    ) {
        result_type_116->mPointerNum=result_type_116->mTypedefOriginalPointerNum;
    }
    var_name_117=((void*)0);
    {
        p_118=info->p;
        sline_119=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            word_120=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_120,"const")||string_operator_equals(word_120,"__restrict")||string_operator_equals(word_120,"restrict")||string_operator_equals(word_120,"__user")||string_operator_equals(word_120,"volatile")||string_operator_equals(word_120,"_Nonnull")||string_operator_equals(word_120,"_Nullable")||string_operator_equals(word_120,"_Null_unspecified")||string_operator_equals(word_120,"__user")||string_operator_equals(word_120,"_Addr")            ) {
            }
            else {
                info->p=p_118;
                info->sline=sline_119;
            }
            (word_120 = come_decrement_ref_count(word_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            info->p=p_118;
            info->sline=sline_119;
        }
    }
    between_brace_121=(_Bool)0;
    {
        p_122=info->p;
        sline_123=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_124=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_124,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        between_brace_121=(_Bool)1;
                    }
                }
                (word_124 = come_decrement_ref_count(word_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_122;
        info->sline=sline_123;
    }
    parse_sharp_v5(info);
    while(    *info->p==42    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_116->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_121&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95    ) {
        __dec_obj61=var_name_117,
        var_name_117=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        static int num_anonymous_var_name_125=0;
        num_anonymous_var_name_125++;
        __dec_obj62=var_name_117,
        var_name_117=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_125));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    between_brace_121&&*info->p==41    ) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58    ) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_126=info->no_comma;
        info->no_comma=(_Bool)1;
        node_127=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_126;
        __dec_obj63=result_type_116->mSizeNum,
        result_type_116->mSizeNum=(struct sNode*)come_increment_ref_count(node_127);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        ((node_127) ? node_127 = come_decrement_ref_count(node_127, ((struct sNode*)node_127)->finalize, ((struct sNode*)node_127)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_128=info->p;
            sline_129=info->sline;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_130=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_130,"const")||string_operator_equals(word_130,"__restrict")||string_operator_equals(word_130,"restrict")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"volatile")||string_operator_equals(word_130,"_Nonnull")||string_operator_equals(word_130,"_Nullable")||string_operator_equals(word_130,"_Null_unspecified")||string_operator_equals(word_130,"__user")||string_operator_equals(word_130,"_Addr")                ) {
                }
                else {
                    info->p=p_128;
                    info->sline=sline_129;
                }
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                info->p=p_128;
                info->sline=sline_129;
            }
        }
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_116->mArrayPointerType=(_Bool)1;
            result_type_116->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_131=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(result_type_116->mArrayNum,(struct sNode*)come_increment_ref_count(node_131));
        parse_sharp_v5(info);
        result_type_116->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_131) ? node_131 = come_decrement_ref_count(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    attribute_135=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_135,"")    ) {
        if(        result_type_116->mAttribute        ) {
            __dec_obj67=result_type_116->mAttribute,
            result_type_116->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value126=string_operator_add(result_type_116->mAttribute," "))),attribute_135));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            __dec_obj68=result_type_116->mAttribute,
            result_type_116->mAttribute=(char*)come_increment_ref_count(attribute_135);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value128=parse_attribute(info,(_Bool)0)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__100 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value130=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 924, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_116),(char*)come_increment_ref_count(var_name_117)))));
    come_call_finalizer(sType_finalize, base_type_name, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_117 = come_decrement_ref_count(var_name_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (attribute_135 = come_decrement_ref_count(attribute_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value130, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value121 = (void*)0;
struct list_item$1sNode$ph* litem_132;
struct sNode* __dec_obj64;
void* __right_value122 = (void*)0;
struct list_item$1sNode$ph* litem_133;
struct sNode* __dec_obj65;
void* __right_value123 = (void*)0;
struct list_item$1sNode$ph* litem_134;
struct sNode* __dec_obj66;
struct list$1sNode$ph* __result_obj__98;
    if(    self->len==0    ) {
        litem_132=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value121=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sNode$ph*"))));
        litem_132->prev=((void*)0);
        litem_132->next=((void*)0);
        __dec_obj64=litem_132->item,
        litem_132->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_132;
        self->head=litem_132;
    }
    else if(    self->len==1    ) {
        litem_133=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value122=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sNode$ph*"))));
        litem_133->prev=self->head;
        litem_133->next=((void*)0);
        __dec_obj65=litem_133->item,
        litem_133->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_133;
        self->head->next=litem_133;
    }
    else {
        litem_134=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value123=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sNode$ph*"))));
        litem_134->prev=self->tail;
        litem_134->next=((void*)0);
        __dec_obj66=litem_134->item,
        litem_134->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_134;
        self->tail=litem_134;
    }
    self->len++;
    __result_obj__98 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__98;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj69;
char* __dec_obj70;
struct tuple2$2sType$phchar$ph* __result_obj__99;
    __dec_obj69=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj70=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__99 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_136;
int sline_137;
void* __right_value131 = (void*)0;
char* word_138;
int nest_139;
    p_136=info->p;
    sline_137=info->sline;
    if(    xisalpha(*info->p)||*info->p==95    ) {
        word_138=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_138,"__attribute")||string_operator_equals(word_138,"__attribute__"))&&*info->p==40        ) {
            nest_139=0;
            while(            1            ) {
                if(                *info->p==40                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_139++;
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_139--;
                    if(                    nest_139==0                    ) {
                        break;
                    }
                }
                else if(                *info->p==0                ) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_138,"const")||string_operator_equals(word_138,"__restrict")||string_operator_equals(word_138,"restrict")||string_operator_equals(word_138,"__user")||string_operator_equals(word_138,"volatile")||string_operator_equals(word_138,"_Nonnull")||string_operator_equals(word_138,"_Nullable")||string_operator_equals(word_138,"__nonnull")||string_operator_equals(word_138,"_Null_unspecified")||string_operator_equals(word_138,"__user")||string_operator_equals(word_138,"_Addr")||string_operator_equals(word_138,"__noreturn")||string_operator_equals(word_138,"_noreturn")||string_operator_equals(word_138,"_Noreturn")        ) {
        }
        else {
            info->p=p_136;
            info->sline=sline_137;
        }
        (word_138 = come_decrement_ref_count(word_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->p=p_136;
        info->sline=sline_137;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_140;
void* __right_value132 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* type_141=0;
char* name_142=0;
_Bool err_143=0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__102;
    no_output_err_140=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value132=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_141=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_142=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_143=multiple_assign_var2->v3;
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_140;
    __result_obj__102 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value134=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 981, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_141),(char*)come_increment_ref_count(name_142),err_143))));
    come_call_finalizer(sType_finalize, type_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_142 = come_decrement_ref_count(name_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj71;
char* __dec_obj72;
struct tuple3$3sType$phchar$phbool$* __result_obj__101;
    __dec_obj71=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj72=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v3=v3;
    __result_obj__101 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_144;
int head_sline_145;
void* __right_value135 = (void*)0;
char* type_name_146;
_Bool record__147;
_Bool exception__148;
_Bool constant_149;
_Bool static__150;
_Bool volatile__151;
_Bool register__152;
_Bool unsigned__153;
_Bool long__154;
_Bool long_long_155;
_Bool short__156;
_Bool restrict__157;
_Bool struct__158;
_Bool union__159;
_Bool enum__160;
_Bool no_heap_161;
_Bool extern__162;
_Bool inline__163;
_Bool uniq__164;
_Bool tuple__165;
_Bool immutable__166;
_Bool task__167;
struct sNode* alignas__168;
_Bool anonymous_type_169;
_Bool anonymous_name_170;
_Bool atomic__171;
_Bool object_interface_172;
void* __right_value136 = (void*)0;
char* __dec_obj73;
void* __right_value137 = (void*)0;
char* __dec_obj74;
void* __right_value138 = (void*)0;
char* __dec_obj75;
int brace_num_173;
void* __right_value139 = (void*)0;
char* __dec_obj76;
int brace_num_174;
void* __right_value140 = (void*)0;
char* __dec_obj77;
void* __right_value141 = (void*)0;
char* __dec_obj78;
void* __right_value142 = (void*)0;
char* __dec_obj79;
void* __right_value143 = (void*)0;
char* __dec_obj80;
void* __right_value144 = (void*)0;
char* __dec_obj81;
void* __right_value145 = (void*)0;
struct sNode* exp_175;
struct sNode* __dec_obj82;
void* __right_value146 = (void*)0;
char* __dec_obj83;
void* __right_value147 = (void*)0;
char* __dec_obj84;
void* __right_value148 = (void*)0;
char* __dec_obj85;
void* __right_value149 = (void*)0;
char* __dec_obj86;
void* __right_value150 = (void*)0;
char* __dec_obj87;
void* __right_value151 = (void*)0;
char* __dec_obj88;
void* __right_value152 = (void*)0;
char* __dec_obj89;
void* __right_value153 = (void*)0;
char* __dec_obj90;
void* __right_value154 = (void*)0;
char* __dec_obj91;
void* __right_value155 = (void*)0;
char* __dec_obj92;
void* __right_value156 = (void*)0;
char* __dec_obj93;
char* p_176;
int sline_177;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
char* __dec_obj94;
void* __right_value159 = (void*)0;
char* __dec_obj95;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* __dec_obj96;
char* p_178;
int sline_179;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__103;
char* p_180;
int sline_181;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__104;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sNode* node_182;
_Bool Value_183;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__105;
char* p_184;
int sline_185;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __dec_obj97;
void* __right_value176 = (void*)0;
char* __dec_obj98;
void* __right_value177 = (void*)0;
char* __dec_obj99;
char* p_186;
int sline_187;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__106;
void* __right_value181 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* type_188=0;
char* name_189=0;
_Bool err_190=0;
char* p_191;
int sline_192;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__107;
void* __right_value186 = (void*)0;
char* __dec_obj100;
void* __right_value187 = (void*)0;
char* __dec_obj101;
void* __right_value188 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_193=0;
char* name_194=0;
_Bool err_195=0;
char* p_196;
int sline_197;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__108;
char* p_198;
int sline_199;
void* __right_value192 = (void*)0;
char* __dec_obj102;
void* __right_value193 = (void*)0;
char* __dec_obj103;
void* __right_value194 = (void*)0;
char* __dec_obj104;
void* __right_value195 = (void*)0;
char* __dec_obj105;
void* __right_value196 = (void*)0;
char* __dec_obj106;
void* __right_value197 = (void*)0;
char* __dec_obj107;
void* __right_value198 = (void*)0;
char* __dec_obj108;
char* p_200;
int sline_201;
void* __right_value199 = (void*)0;
char* __dec_obj109;
char* p_202;
int sline_203;
void* __right_value200 = (void*)0;
char* __dec_obj110;
void* __right_value201 = (void*)0;
char* __dec_obj111;
void* __right_value202 = (void*)0;
char* __dec_obj112;
char* p_204;
int sline_205;
void* __right_value203 = (void*)0;
char* __dec_obj113;
void* __right_value204 = (void*)0;
char* __dec_obj114;
void* __right_value205 = (void*)0;
char* __dec_obj115;
void* __right_value206 = (void*)0;
char* __dec_obj116;
void* __right_value207 = (void*)0;
char* __dec_obj117;
void* __right_value208 = (void*)0;
char* __dec_obj118;
void* __right_value209 = (void*)0;
char* __dec_obj119;
void* __right_value210 = (void*)0;
char* __dec_obj120;
void* __right_value211 = (void*)0;
char* __dec_obj121;
void* __right_value212 = (void*)0;
char* __dec_obj122;
void* __right_value213 = (void*)0;
char* __dec_obj123;
char* p_206;
int sline_207;
void* __right_value214 = (void*)0;
char* __dec_obj124;
void* __right_value215 = (void*)0;
char* __dec_obj125;
void* __right_value216 = (void*)0;
char* attribute_208;
int pointer_num_209;
_Bool heap_210;
_Bool refference_211;
_Bool no_refference_212;
_Bool channel_213;
_Bool any_class_214;
_Bool vtable_215;
_Bool deffer__216;
char* tuple_name_217;
void* __right_value217 = (void*)0;
char* __dec_obj126;
_Bool lambda_flag_218;
char* pX_219;
int slineX_220;
void* __right_value218 = (void*)0;
struct sType* type_221;
char* var_name_222;
_Bool function_pointer_flag_223;
char* p_224;
int sline_225;
void* __right_value219 = (void*)0;
char* word_226;
_Bool var_name_between_brace_227;
char* p_228;
int sline_229;
void* __right_value220 = (void*)0;
char* word_230;
void* __right_value221 = (void*)0;
char* __dec_obj127;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sNode* node_232;
_Bool Value_233;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__109;
int pointer_num_234;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sType* __dec_obj128;
void* __right_value230 = (void*)0;
char* __dec_obj129;
void* __right_value231 = (void*)0;
struct sNode* node_235;
_Bool Value_236;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__110;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj130;
void* __right_value237 = (void*)0;
char* __dec_obj131;
void* __right_value238 = (void*)0;
struct sNode* node_237;
_Bool Value_238;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__111;
int pointer_num_239;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj132;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__112;
void* __right_value247 = (void*)0;
char* attribute_240;
char* __dec_obj133;
void* __right_value248 = (void*)0;
char* __dec_obj134;
void* __right_value249 = (void*)0;
char* __dec_obj135;
void* __right_value250 = (void*)0;
char* __dec_obj136;
void* __right_value251 = (void*)0;
char* __dec_obj137;
_Bool no_comma_243;
void* __right_value252 = (void*)0;
struct sNode* node_244;
struct sNode* __dec_obj138;
void* __right_value253 = (void*)0;
char* attribute2_245;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
struct sType* result_type_246;
void* __right_value257 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sType* __dec_obj141;
void* __right_value260 = (void*)0;
int i_247;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct sType* __dec_obj142;
int i_254;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* __dec_obj143;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sType* __dec_obj144;
struct sNode* __dec_obj145;
void* __right_value274 = (void*)0;
char* __dec_obj146;
void* __right_value275 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var5 = (void*)0;
struct list$1sType$ph* param_types_255=0;
struct list$1char$ph* param_names_256=0;
struct list$1char$ph* param_default_parametors_257=0;
_Bool var_args_258=0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj147;
struct sType* __dec_obj148;
struct list$1sType$ph* __dec_obj149;
struct list$1char$ph* __dec_obj150;
int function_pointer_num_259;
struct sType* result_type_260;
void* __right_value279 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sType* __dec_obj151;
void* __right_value282 = (void*)0;
int i_261;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sType* __dec_obj152;
int i_262;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj153;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj154;
struct sNode* __dec_obj155;
void* __right_value296 = (void*)0;
char* __dec_obj156;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__117;
void* __right_value299 = (void*)0;
char* __dec_obj157;
_Bool function_pointer_array_264;
int function_pointer_array_num_265;
int n_266;
void* __right_value300 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var6 = (void*)0;
struct list$1sType$ph* param_types_267=0;
struct list$1char$ph* param_names_268=0;
struct list$1char$ph* param_default_parametors_269=0;
_Bool var_args_270=0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __dec_obj158;
void* __right_value304 = (void*)0;
struct sType* __dec_obj159;
struct list$1sType$ph* __dec_obj160;
struct list$1char$ph* __dec_obj161;
void* __right_value305 = (void*)0;
struct sNode* exp_271;
_Bool Value_272;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__118;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_273;
void* __right_value310 = (void*)0;
struct sType* __dec_obj162;
void* __right_value311 = (void*)0;
char* attribute_274;
char* __dec_obj163;
void* __right_value312 = (void*)0;
char* __dec_obj164;
void* __right_value313 = (void*)0;
char* __dec_obj165;
void* __right_value314 = (void*)0;
char* __dec_obj166;
void* __right_value315 = (void*)0;
char* __dec_obj167;
_Bool no_comma_277;
void* __right_value316 = (void*)0;
struct sNode* node_278;
struct sNode* __dec_obj168;
void* __right_value317 = (void*)0;
char* attribute2_279;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* __dec_obj169;
char* __dec_obj170;
void* __right_value321 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj171;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj172;
struct sNode* __dec_obj173;
char* __dec_obj174;
int i_280;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj175;
struct sNode* __dec_obj176;
char* __dec_obj177;
int i_281;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
_Bool _condtional_value_X9;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj178;
struct sNode* __dec_obj179;
char* __dec_obj180;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__119;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj181;
void* __right_value344 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* generics_type_282=0;
char* var_name_283=0;
_Bool err_284=0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__120;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__121;
void* __right_value350 = (void*)0;
struct sType* __dec_obj182;
void* __right_value351 = (void*)0;
char* new_name_285;
struct sNode* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
void* __right_value352 = (void*)0;
struct sClass* klass_286;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sClass* klass_324;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* __dec_obj186;
struct sNode* __dec_obj187;
char* __dec_obj188;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sType$ph* types_325;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type2_326=0;
char* name_327=0;
_Bool err_328=0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__137;
void* __right_value376 = (void*)0;
int num_tuples_329;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj189;
struct list$1sType$ph* o2_saved_330;
struct sType* it_331;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* __dec_obj190;
void* __right_value382 = (void*)0;
char* new_name_332;
char* __dec_obj191;
void* __right_value383 = (void*)0;
char* attribute_333;
char* __dec_obj192;
void* __right_value384 = (void*)0;
char* __dec_obj193;
void* __right_value385 = (void*)0;
char* __dec_obj194;
void* __right_value386 = (void*)0;
char* __dec_obj195;
void* __right_value387 = (void*)0;
char* __dec_obj196;
_Bool no_comma_336;
void* __right_value388 = (void*)0;
struct sNode* node_337;
struct sNode* __dec_obj197;
void* __right_value389 = (void*)0;
char* attribute2_338;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __dec_obj198;
char* __dec_obj199;
void* __right_value393 = (void*)0;
struct sNode* node_339;
void* __right_value394 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var9 = (void*)0;
char* asm_name_340=0;
char* attribute2_341=0;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value395 = (void*)0;
struct sType* type_before_342;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj202;
void* __right_value399 = (void*)0;
struct sNode* __list_values1___343[1];
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1sNode$ph* __dec_obj203;
struct sType* __dec_obj204;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* type2_345;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* type3_351;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* type4_352;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__141;
char* __dec_obj206;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__142;
type_221 = (void*)0;
var_name_222 = (void*)0;
result_type_246 = (void*)0;
result_type_260 = (void*)0;
    head_144=info->p;
    head_sline_145=info->sline;
    info->define_struct=(_Bool)0;
    type_name_146=(char*)come_increment_ref_count(parse_word(info));
    record__147=(_Bool)0;
    exception__148=(_Bool)0;
    constant_149=(_Bool)0;
    static__150=(_Bool)0;
    volatile__151=(_Bool)0;
    register__152=(_Bool)0;
    unsigned__153=(_Bool)0;
    long__154=(_Bool)0;
    long_long_155=(_Bool)0;
    short__156=(_Bool)0;
    restrict__157=(_Bool)0;
    struct__158=(_Bool)0;
    union__159=(_Bool)0;
    enum__160=(_Bool)0;
    no_heap_161=(_Bool)0;
    extern__162=(_Bool)0;
    inline__163=(_Bool)0;
    uniq__164=(_Bool)0;
    tuple__165=(_Bool)0;
    immutable__166=(_Bool)0;
    task__167=(_Bool)0;
    alignas__168=((void*)0);
    anonymous_type_169=(_Bool)0;
    anonymous_name_170=(_Bool)0;
    atomic__171=(_Bool)0;
    object_interface_172=(_Bool)0;
    while(    (_Bool)1    ) {
        if(        string_operator_equals(type_name_146,"object")&&*info->p==58        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_172=(_Bool)1;
            __dec_obj73=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_Atomic")        ) {
            if(            *info->p==40            ) {
                expected_next_character(40,info);
            }
            __dec_obj74=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            atomic__171=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_146,"__extension__")        ) {
            __dec_obj75=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"__attribute__")        ) {
            if(            *info->p==40            ) {
                brace_num_173=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_173++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_173--;
                        if(                        brace_num_173==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj76=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"__declspec")        ) {
            if(            *info->p==40            ) {
                brace_num_174=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_174++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_174--;
                        if(                        brace_num_174==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj77=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_Noreturn")        ) {
            __dec_obj78=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"__noreturn")        ) {
            __dec_obj79=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_Nullable")        ) {
            __dec_obj80=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_noreturn")        ) {
            __dec_obj81=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_Alignas")        ) {
            expected_next_character(40,info);
            exp_175=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj82=alignas__168,
            alignas__168=(struct sNode*)come_increment_ref_count(exp_175);
            (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            expected_next_character(41,info);
            __dec_obj83=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            ((exp_175) ? exp_175 = come_decrement_ref_count(exp_175, ((struct sNode*)exp_175)->finalize, ((struct sNode*)exp_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_146,"const")        ) {
            constant_149=(_Bool)1;
            __dec_obj84=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"immutable")        ) {
            immutable__166=(_Bool)1;
            __dec_obj85=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_task")        ) {
            task__167=(_Bool)1;
            __dec_obj86=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"static")        ) {
            static__150=(_Bool)1;
            __dec_obj87=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"uniq")        ) {
            uniq__164=(_Bool)1;
            __dec_obj88=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"record")        ) {
            record__147=(_Bool)1;
            __dec_obj89=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"exception")        ) {
            exception__148=(_Bool)1;
            __dec_obj90=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"extern")        ) {
            extern__162=(_Bool)1;
            __dec_obj91=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"inline")||string_operator_equals(type_name_146,"__inline")||string_operator_equals(type_name_146,"__inline__")||string_operator_equals(type_name_146,"__always_inline")||string_operator_equals(type_name_146,"__forceinline")        ) {
            inline__163=(_Bool)1;
            __dec_obj92=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"volatile")        ) {
            volatile__151=(_Bool)1;
            __dec_obj93=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"struct")        ) {
            struct__158=(_Bool)1;
            if(            *info->p==123            ) {
                p_176=info->p;
                sline_177=info->sline;
                ((char*)(__right_value157=skip_block(info,(_Bool)0)));
                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    anonymous_name_170=(_Bool)1;
                    anonymous_type_169=(_Bool)1;
                    __dec_obj94=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_176;
                    info->sline=sline_177;
                    break;
                }
                else {
                    anonymous_type_169=(_Bool)1;
                    __dec_obj95=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_176;
                    info->sline=sline_177;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62            ) {
                (void)((char*)(__right_value160=parse_struct_attribute(info)));
                (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                __dec_obj96=type_name_146,
                type_name_146=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60                ) {
                    p_178=info->p;
                    sline_179=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123                            ) {
                            }
                            else {
                                info->p=p_178;
                                info->sline=sline_179;
                            }
                            break;
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value162=err_msg(info,"invalid struct definition")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value162, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __result_obj__103 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value164=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1224, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value164, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__103;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123                ) {
                    p_180=info->p;
                    sline_181=info->sline;
                    ((char*)(__right_value165=skip_block(info,(_Bool)0)));
                    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (void)((char*)(__right_value166=parse_struct_attribute(info)));
                    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    if(                    *info->p==59                    ) {
                        info->p=head_144;
                        info->sline=head_sline_145;
                        info->define_struct=(_Bool)1;
                        __result_obj__104 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value168=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1244, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value168, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                        return __result_obj__104;
                    }
                    else {
                        info->p=p_180;
                        info->sline=sline_181;
                        node_182=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_146),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_183=node_compile(node_182,info);
                        if(                        !Value_183                        ) {
                            __result_obj__105 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value172=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1256, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_182) ? node_182 = come_decrement_ref_count(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value172, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__105;
                        }
                        else {
                        }
                        ((node_182) ? node_182 = come_decrement_ref_count(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        break;
                        ((node_182) ? node_182 = come_decrement_ref_count(node_182, ((struct sNode*)node_182)->finalize, ((struct sNode*)node_182)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_146,"union")        ) {
            union__159=(_Bool)1;
            if(            *info->p==123            ) {
                p_184=info->p;
                sline_185=info->sline;
                ((char*)(__right_value173=skip_block(info,(_Bool)0)));
                (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value174=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_144;
                    info->sline=head_sline_145;
                    info->define_struct=(_Bool)0;
                    anonymous_type_169=(_Bool)1;
                    __dec_obj97=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_184;
                    info->sline=sline_185;
                    break;
                }
                else {
                    anonymous_type_169=(_Bool)1;
                    __dec_obj98=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_184;
                    info->sline=sline_185;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj99=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_186=info->p;
                sline_187=info->sline;
                ((char*)(__right_value178=skip_block(info,(_Bool)0)));
                (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_144;
                    info->sline=head_sline_145;
                    info->define_struct=(_Bool)1;
                    __result_obj__106 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value180=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1313, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value180, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__106;
                }
                else {
                    anonymous_type_169=(_Bool)1;
                    info->p=p_186;
                    info->sline=sline_187;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_146,"enum")        ) {
            enum__160=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value181=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_188=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_189=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_190=multiple_assign_var3->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_189 = come_decrement_ref_count(name_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_191=info->p;
                sline_192=info->sline;
                ((char*)(__right_value182=skip_block(info,(_Bool)0)));
                (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0                ) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value183=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                *info->p==59                ) {
                    info->p=head_144;
                    info->sline=head_sline_145;
                    info->define_struct=(_Bool)1;
                    __result_obj__107 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value185=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1351, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__107;
                }
                else {
                    anonymous_type_169=(_Bool)1;
                    __dec_obj100=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_191;
                    info->sline=sline_192;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj101=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value188=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_193=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_194=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_195=multiple_assign_var4->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value188, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_194 = come_decrement_ref_count(name_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123            ) {
                p_196=info->p;
                sline_197=info->sline;
                ((char*)(__right_value189=skip_block(info,(_Bool)0)));
                (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                *info->p==59                ) {
                    info->p=head_144;
                    info->sline=head_sline_145;
                    info->define_struct=(_Bool)1;
                    __result_obj__108 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value191=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1387, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__108;
                }
                else {
                    anonymous_type_169=(_Bool)1;
                    info->p=p_196;
                    info->sline=sline_197;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_146,"long")        ) {
            {
                p_198=info->p;
                sline_199=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)                ) {
                    info->p=p_198;
                    info->sline=sline_199;
                    __dec_obj102=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    break;
                }
                else {
                    __dec_obj103=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    if(                    string_operator_equals(type_name_146,"unsigned")                    ) {
                        __dec_obj104=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(type_name_146,"int")                        ) {
                            long__154=(_Bool)1;
                            unsigned__153=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_146,"signed")                    ) {
                        __dec_obj105=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(type_name_146,"int")                        ) {
                            long__154=(_Bool)1;
                            unsigned__153=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_146,"long")                    ) {
                        p_198=info->p;
                        sline_199=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            long_long_155=(_Bool)1;
                            __dec_obj106=type_name_146,
                            type_name_146=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        else {
                            long__154=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_146,"int")                        ) {
                            long_long_155=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_146,info)                        ) {
                            __dec_obj107=type_name_146,
                            type_name_146=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            long_long_155=(_Bool)1;
                            info->p=p_198;
                            info->sline=sline_199;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_146,info)                    ) {
                        if(                        long__154                        ) {
                            long_long_155=(_Bool)1;
                            long__154=(_Bool)0;
                        }
                        else {
                            long__154=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_198;
                        info->sline=sline_199;
                        __dec_obj108=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_146,"unsigned")        ) {
            unsigned__153=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95            ) {
                p_200=info->p;
                sline_201=info->sline;
                __dec_obj109=type_name_146,
                type_name_146=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(type_name_146,"short")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_202=info->p;
                        sline_203=info->sline;
                        __dec_obj110=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        is_type_name(type_name_146,info)                        ) {
                            short__156=(_Bool)1;
                        }
                        else {
                            short__156=(_Bool)1;
                            __dec_obj111=type_name_146,
                            type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            info->p=p_202;
                            info->sline=sline_203;
                        }
                    }
                    else {
                        short__156=(_Bool)1;
                        __dec_obj112=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_146,"long")                ) {
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        p_204=info->p;
                        sline_205=info->sline;
                        __dec_obj113=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        is_type_name(type_name_146,info)                        ) {
                            long__154=(_Bool)1;
                        }
                        else {
                            long__154=(_Bool)1;
                            __dec_obj114=type_name_146,
                            type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            info->p=p_204;
                            info->sline=sline_205;
                        }
                    }
                    else {
                        long__154=(_Bool)1;
                        __dec_obj115=type_name_146,
                        type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_146,info)                ) {
                    __dec_obj116=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_200;
                    info->sline=sline_201;
                    break;
                }
            }
            else {
                __dec_obj117=type_name_146,
                type_name_146=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_146,"signed")||string_operator_equals(type_name_146,"__signed__")        ) {
            unsigned__153=(_Bool)0;
            __dec_obj118=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"register")        ) {
            register__152=(_Bool)1;
            __dec_obj119=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"restrict")        ) {
            restrict__157=(_Bool)1;
            __dec_obj120=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"_Addr")        ) {
            __dec_obj121=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"__restrict")        ) {
            restrict__157=(_Bool)1;
            __dec_obj122=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        string_operator_equals(type_name_146,"tup")        ) {
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj123=type_name_146,
            type_name_146=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__165=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_146,"short")        ) {
            short__156=(_Bool)0;
            if(            *info->p==58            ) {
                break;
            }
            else if(            xisalnum(*info->p)            ) {
                p_206=info->p;
                sline_207=info->sline;
                __dec_obj124=type_name_146,
                type_name_146=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(type_name_146,"int")                ) {
                    short__156=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_146,"short")                ) {
                    short__156=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_146,info)                ) {
                    info->p=p_206;
                    info->sline=sline_207;
                }
                else {
                    __dec_obj125=type_name_146,
                    type_name_146=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    info->p=p_206;
                    info->sline=sline_207;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_208=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_209=0;
    heap_210=(_Bool)0;
    refference_211=(_Bool)0;
    no_refference_212=(_Bool)0;
    channel_213=(_Bool)0;
    any_class_214=(_Bool)0;
    vtable_215=(_Bool)0;
    deffer__216=(_Bool)0;
    while(    1    ) {
        if(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_209++;
        }
        else if(        *info->p==126        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            deffer__216=(_Bool)1;
        }
        else if(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_210=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64        ) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_213=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_217=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__165    ) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj126=tuple_name_217,
        tuple_name_217=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    atomic__171&&*info->p==41    ) {
        expected_next_character(41,info);
    }
    lambda_flag_218=(_Bool)0;
    {
        pX_219=info->p;
        slineX_220=info->sline;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            (void)((char*)(__right_value218=parse_word(info)));
            (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            *info->p==40&&info->in_typedef            ) {
                lambda_flag_218=(_Bool)1;
            }
        }
        info->p=pX_219;
        info->sline=slineX_220;
    }
    function_pointer_flag_223=(_Bool)0;
    {
        p_224=info->p;
        sline_225=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94            ) {
                function_pointer_flag_223=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95            ) {
                word_226=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40                    ) {
                        function_pointer_flag_223=(_Bool)1;
                    }
                }
                (word_226 = come_decrement_ref_count(word_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_224;
        info->sline=sline_225;
    }
    var_name_between_brace_227=(_Bool)0;
    {
        p_228=info->p;
        sline_229=info->sline;
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_230=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_230,info)                ) {
                }
                else if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40                    ) {
                        var_name_between_brace_227=(_Bool)1;
                    }
                }
                (word_230 = come_decrement_ref_count(word_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_228;
        info->sline=sline_229;
    }
    if(    anonymous_type_169&&*info->p==123    ) {
        static int anonymous_num_231=0;
        if(        struct__158        ) {
            if(            string_operator_equals(type_name_146,"")            ) {
                __dec_obj127=type_name_146,
                type_name_146=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_231));
                __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_232=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_146),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_233=node_compile(node_232,info);
            if(            !Value_233            ) {
                ((struct tuple2$2int$bool$*)(__right_value224=err_msg(info,"parse_struct is failed")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__109 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value226=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1794, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_232) ? node_232 = come_decrement_ref_count(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value226, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__109;
            }
            else {
            }
            pointer_num_234=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_234++;
            }
            __dec_obj128=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1807, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_221->mPointerNum=pointer_num_234;
            ((node_232) ? node_232 = come_decrement_ref_count(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        enum__160        ) {
            if(            string_operator_equals(type_name_146,"")            ) {
                __dec_obj129=type_name_146,
                type_name_146=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_231));
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_235=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_146),info));
            if(            !info->no_output_err            ) {
                Value_236=node_compile(node_235,info);
                if(                !Value_236                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__110 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value233=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1821, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__110;
                }
                else {
                }
            }
            __dec_obj130=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1825, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        union__159        ) {
            if(            string_operator_equals(type_name_146,"")            ) {
                __dec_obj131=type_name_146,
                type_name_146=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_231));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            node_237=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_146),info));
            Value_238=node_compile(node_237,info);
            if(            !Value_238            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__111 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value240=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1837, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value240, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__111;
            }
            else {
            }
            pointer_num_239=0;
            while(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_239++;
            }
            __dec_obj132=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1851, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_221->mPointerNum=pointer_num_239;
            ((node_237) ? node_237 = come_decrement_ref_count(node_237, ((struct sNode*)node_237)->finalize, ((struct sNode*)node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value244=err_msg(info,"unexpected { character")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__112 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value246=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1857, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value246, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__112;
        }
        attribute_240=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_240,"")        ) {
            __dec_obj133=type_221->mAttribute,
            type_221->mAttribute=(char*)come_increment_ref_count(attribute_240);
            __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_227&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj134=var_name_222,
                var_name_222=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_170            ) {
                static int num_anonymous_var_name_241=0;
                num_anonymous_var_name_241++;
                __dec_obj135=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_241));
                __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj136=var_name_222,
                var_name_222=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_242=0;
                num_anonymous_var_name_242++;
                __dec_obj137=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_242));
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_227&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_243=info->no_comma;
                info->no_comma=(_Bool)1;
                node_244=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_243;
                __dec_obj138=type_221->mSizeNum,
                type_221->mSizeNum=(struct sNode*)come_increment_ref_count(node_244);
                (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_244) ? node_244 = come_decrement_ref_count(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_245=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_240,"")&&string_operator_not_equals(attribute2_245,"")            ) {
                __dec_obj139=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value255=string_operator_add(attribute_240," "))),attribute2_245));
                __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_245,"")            ) {
                __dec_obj140=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(attribute2_245);
                __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_245 = come_decrement_ref_count(attribute2_245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (attribute_240 = come_decrement_ref_count(attribute_240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    lambda_flag_218    ) {
        if(        (_condtional_value_X1=(((struct sType*)(__right_value257=map$2char$phsType$ph_operator_load_element(info->types,type_name_146))))),        come_call_finalizer(sType_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X1        ) {
            __dec_obj141=result_type_246,
            result_type_246=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value258=map$2char$phsType$ph_operator_load_element(info->types,type_name_146)))));
            come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            result_type_246->mClass=((struct sClass*)(__right_value260=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_246->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value260, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_146)        ) {
            for(            i_247=0            ;            i_247<list$1char$ph_length(info->generics_type_names)            ;            i_247++            ){
                if(                (_condtional_value_X2=(string_operator_equals(((char*)(__right_value262=list$1char$ph_operator_load_element(info->generics_type_names,i_247))),type_name_146))),                (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X2                ) {
                    __dec_obj142=result_type_246,
                    result_type_246=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1925, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_247)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_146)        ) {
            for(            i_254=0            ;            i_254<list$1char$ph_length(info->method_generics_type_names)            ;            i_254++            ){
                if(                (_condtional_value_X3=(string_operator_equals(((char*)(__right_value267=list$1char$ph_operator_load_element(info->method_generics_type_names,i_254))),type_name_146))),                (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X3                ) {
                    __dec_obj143=result_type_246,
                    result_type_246=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1932, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_254)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else {
            __dec_obj144=result_type_246,
            result_type_246=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1937, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        result_type_246->mAtomic=result_type_246->mAtomic||atomic__171;
        result_type_246->mConstant=result_type_246->mConstant||constant_149;
        result_type_246->mImmutable=result_type_246->mImmutable||immutable__166;
        result_type_246->mTask=result_type_246->mTask||task__167;
        __dec_obj145=result_type_246->mAlignas,
        result_type_246->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        result_type_246->mRegister=register__152;
        result_type_246->mUnsigned=result_type_246->mUnsigned||unsigned__153;
        result_type_246->mVolatile=volatile__151;
        result_type_246->mRecord=result_type_246->mRecord||record__147;
        result_type_246->mUniq=result_type_246->mUniq||uniq__164;
        result_type_246->mStatic=(result_type_246->mStatic||static__150)&&!result_type_246->mUniq;
        result_type_246->mException=result_type_246->mException||exception__148;
        result_type_246->mExtern=result_type_246->mExtern||extern__162;
        result_type_246->mInline=result_type_246->mInline||inline__163;
        result_type_246->mRestrict=result_type_246->mRestrict||restrict__157;
        result_type_246->mLongLong=result_type_246->mLongLong||long_long_155;
        result_type_246->mLong=result_type_246->mLong||long__154;
        result_type_246->mShort=result_type_246->mShort||short__156;
        result_type_246->mPointerNum=pointer_num_209;
        result_type_246->mHeap=result_type_246->mHeap||heap_210;
        result_type_246->mChannel=result_type_246->mChannel||channel_213;
        result_type_246->mDefferRightValue=result_type_246->mDefferRightValue||deffer__216;
        __dec_obj146=var_name_222,
        var_name_222=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value275=parse_params(info,(_Bool)0)));
        param_types_255=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_256=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_257=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_258=multiple_assign_var5->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj147=type_221,
        type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 1967, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj148=type_221->mResultType,
        type_221->mResultType=(struct sType*)come_increment_ref_count(result_type_246);
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj149=type_221->mParamTypes,
        type_221->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_255);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj149,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj150=type_221->mParamNames,
        type_221->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_256);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_221->mVarArgs=var_args_258;
        type_221->mExtern=extern__162;
        come_call_finalizer(sType_finalize, result_type_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    function_pointer_flag_223    ) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_259=0;
        while(        *info->p==42||*info->p==94        ) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_259++;
        }
        skip_pointer_attribute(info);
        if(        (_condtional_value_X4=(((struct sType*)(__right_value279=map$2char$phsType$ph_operator_load_element(info->types,type_name_146))))),        come_call_finalizer(sType_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X4        ) {
            __dec_obj151=result_type_260,
            result_type_260=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value280=map$2char$phsType$ph_operator_load_element(info->types,type_name_146)))));
            come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            result_type_260->mClass=((struct sClass*)(__right_value282=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_260->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value282, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_146)        ) {
            for(            i_261=0            ;            i_261<list$1char$ph_length(info->generics_type_names)            ;            i_261++            ){
                if(                (_condtional_value_X5=(string_operator_equals(((char*)(__right_value284=list$1char$ph_operator_load_element(info->generics_type_names,i_261))),type_name_146))),                (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X5                ) {
                    __dec_obj152=result_type_260,
                    result_type_260=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2000, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_261)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_146)        ) {
            for(            i_262=0            ;            i_262<list$1char$ph_length(info->method_generics_type_names)            ;            i_262++            ){
                if(                (_condtional_value_X6=(string_operator_equals(((char*)(__right_value289=list$1char$ph_operator_load_element(info->method_generics_type_names,i_262))),type_name_146))),                (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X6                ) {
                    __dec_obj153=result_type_260,
                    result_type_260=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2007, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_262)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
        }
        else {
            __dec_obj154=result_type_260,
            result_type_260=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2012, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        result_type_260->mConstant=result_type_260->mConstant||constant_149;
        result_type_260->mImmutable=result_type_260->mImmutable||immutable__166;
        result_type_260->mTask=result_type_260->mTask||task__167;
        result_type_260->mAtomic=result_type_260->mAtomic||atomic__171;
        __dec_obj155=result_type_260->mAlignas,
        result_type_260->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        result_type_260->mRegister=register__152;
        result_type_260->mUnsigned=result_type_260->mUnsigned||unsigned__153;
        result_type_260->mVolatile=volatile__151;
        result_type_260->mUniq=result_type_260->mUniq||uniq__164;
        result_type_260->mStatic=(result_type_260->mStatic||static__150)&&!result_type_260->mUniq;
        result_type_260->mRecord=result_type_260->mRecord||record__147;
        result_type_260->mException=result_type_260->mException||exception__148;
        result_type_260->mExtern=result_type_260->mExtern||extern__162;
        result_type_260->mInline=result_type_260->mInline||inline__163;
        result_type_260->mRestrict=result_type_260->mRestrict||restrict__157;
        result_type_260->mLongLong=result_type_260->mLongLong||long_long_155;
        result_type_260->mLong=result_type_260->mLong||long__154;
        result_type_260->mShort=result_type_260->mShort||short__156;
        result_type_260->mPointerNum+=pointer_num_209;
        result_type_260->mHeap=result_type_260->mHeap||heap_210;
        result_type_260->mChannel=result_type_260->mChannel||channel_213;
        result_type_260->mDefferRightValue=result_type_260->mDefferRightValue||deffer__216;
        if(        xisalnum(*info->p)||*info->p==95        ) {
            __dec_obj156=var_name_222,
            var_name_222=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                __result_obj__117 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value298=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2041, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(result_type_260),(char*)come_increment_ref_count(var_name_222),(_Bool)0))));
                come_call_finalizer(sType_finalize, result_type_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value298, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__117;
            }
        }
        else {
            static int num_anonymous_var_name_263=0;
            num_anonymous_var_name_263++;
            __dec_obj157=var_name_222,
            var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_263));
            __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        function_pointer_array_264=(_Bool)0;
        function_pointer_array_num_265=0;
        if(        *info->p==91        ) {
            info->p++;
            skip_spaces_and_lf(info);
            n_266=0;
            while(            xisdigit(*info->p)            ) {
                n_266=n_266*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_265=n_266;
            if(            *info->p==93            ) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_264=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value300=parse_params(info,(_Bool)0)));
        param_types_267=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_268=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_269=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_270=multiple_assign_var6->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value300, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj158=type_221,
        type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2073, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj159=type_221->mResultType,
        type_221->mResultType=(struct sType*)come_increment_ref_count(sType_clone(result_type_260));
        come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj160=type_221->mParamTypes,
        type_221->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_267);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj161=type_221->mParamNames,
        type_221->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_268);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj161,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_221->mVarArgs=var_args_270;
        type_221->mExtern=extern__162;
        if(        function_pointer_array_264        ) {
            type_221->mLambdaArray=(_Bool)1;
            type_221->mLambdaArrayNum=function_pointer_array_num_265;
        }
        type_221->mFunctionPointerNum=function_pointer_num_259;
        come_call_finalizer(sType_finalize, result_type_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    string_operator_equals(type_name_146,"__typeof__")&&*info->p==40    ) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_271=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_272=node_compile(exp_271,info);
        if(        !Value_272        ) {
            ((struct tuple2$2int$bool$*)(__right_value306=err_msg(info,"invalid __typeof__ expression")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__118 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value308=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2097, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            ((exp_271) ? exp_271 = come_decrement_ref_count(exp_271, ((struct sNode*)exp_271)->finalize, ((struct sNode*)exp_271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__118;
        }
        else {
        }
        come_value_273=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj162=type_221,
        type_221=(struct sType*)come_increment_ref_count(sType_clone(come_value_273->type));
        come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        attribute_274=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_274,"")        ) {
            __dec_obj163=type_221->mAttribute,
            type_221->mAttribute=(char*)come_increment_ref_count(attribute_274);
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_227&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj164=var_name_222,
                var_name_222=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_170            ) {
                static int num_anonymous_var_name_275=0;
                num_anonymous_var_name_275++;
                __dec_obj165=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_275));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj166=var_name_222,
                var_name_222=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_276=0;
                num_anonymous_var_name_276++;
                __dec_obj167=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_276));
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_227&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_277=info->no_comma;
                info->no_comma=(_Bool)1;
                node_278=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_277;
                __dec_obj168=type_221->mSizeNum,
                type_221->mSizeNum=(struct sNode*)come_increment_ref_count(node_278);
                (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_278) ? node_278 = come_decrement_ref_count(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_279=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_274,"")&&string_operator_not_equals(attribute2_279,"")            ) {
                __dec_obj169=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value319=string_operator_add(attribute_274," "))),attribute2_279));
                __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_279,"")            ) {
                __dec_obj170=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(attribute2_279);
                __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_279 = come_decrement_ref_count(attribute2_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        ((exp_271) ? exp_271 = come_decrement_ref_count(exp_271, ((struct sNode*)exp_271)->finalize, ((struct sNode*)exp_271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_274 = come_decrement_ref_count(attribute_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        if(        (_condtional_value_X7=(((struct sType*)(__right_value321=map$2char$phsType$ph_operator_load_element(info->types,type_name_146))))),        come_call_finalizer(sType_finalize, __right_value321, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X7        ) {
            __dec_obj171=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value322=map$2char$phsType$ph_operator_load_element(info->types,type_name_146)))));
            come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            type_221->mTypedefOriginalPointerNum=type_221->mPointerNum;
            type_221->mClass=((struct sClass*)(__right_value324=map$2char$phsClass$ph_operator_load_element(info->classes,type_221->mClass->mName)));
            come_call_finalizer(sClass_finalize, __right_value324, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj172=type_221->mOriginalTypeName,
            type_221->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_146));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            type_221->mOriginalTypeNamePointerNum=pointer_num_209;
            type_221->mOriginalTypeNameHeap=heap_210;
            type_221->mConstant=type_221->mConstant||constant_149;
            type_221->mImmutable=type_221->mImmutable||immutable__166;
            type_221->mTask=type_221->mTask||task__167;
            type_221->mAtomic=type_221->mAtomic||atomic__171;
            __dec_obj173=type_221->mAlignas,
            type_221->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_221->mRegister=register__152;
            type_221->mUnsigned=type_221->mUnsigned||unsigned__153;
            type_221->mVolatile=volatile__151;
            type_221->mUniq=type_221->mUniq||uniq__164;
            type_221->mStatic=(type_221->mStatic||static__150)&&!type_221->mUniq;
            type_221->mRecord=type_221->mRecord||record__147;
            type_221->mException=type_221->mException||exception__148;
            type_221->mExtern=type_221->mExtern||extern__162;
            type_221->mInline=type_221->mInline||inline__163;
            type_221->mRestrict=type_221->mRestrict||restrict__157;
            type_221->mLongLong=type_221->mLongLong||long_long_155;
            type_221->mLong=type_221->mLong||long__154;
            type_221->mShort=type_221->mShort||short__156;
            type_221->mPointerNum+=pointer_num_209;
            type_221->mHeap=type_221->mHeap||heap_210;
            type_221->mChannel=type_221->mChannel||channel_213;
            type_221->mDefferRightValue=type_221->mDefferRightValue||deffer__216;
            __dec_obj174=type_221->mTupleName,
            type_221->mTupleName=(char*)come_increment_ref_count(tuple_name_217);
            __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->generics_type_names,type_name_146)        ) {
            for(            i_280=0            ;            i_280<list$1char$ph_length(info->generics_type_names)            ;            i_280++            ){
                if(                (_condtional_value_X8=(string_operator_equals(((char*)(__right_value327=list$1char$ph_operator_load_element(info->generics_type_names,i_280))),type_name_146))),                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X8                ) {
                    __dec_obj175=type_221,
                    type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2196, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type%d",i_280)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            type_221->mConstant=type_221->mConstant||constant_149;
            type_221->mImmutable=type_221->mImmutable||immutable__166;
            type_221->mTask=type_221->mTask||task__167;
            type_221->mAtomic=type_221->mAtomic||atomic__171;
            __dec_obj176=type_221->mAlignas,
            type_221->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_221->mRegister=register__152;
            type_221->mUnsigned=type_221->mUnsigned||unsigned__153;
            type_221->mVolatile=volatile__151;
            type_221->mUniq=type_221->mUniq||uniq__164;
            type_221->mStatic=(type_221->mStatic||static__150)&&!type_221->mUniq;
            type_221->mRecord=type_221->mRecord||record__147;
            type_221->mException=type_221->mException||exception__148;
            type_221->mExtern=type_221->mExtern||extern__162;
            type_221->mInline=type_221->mInline||inline__163;
            type_221->mRestrict=type_221->mRestrict||restrict__157;
            type_221->mLongLong=type_221->mLongLong||long_long_155;
            type_221->mLong=type_221->mLong||long__154;
            type_221->mShort=type_221->mShort||short__156;
            type_221->mPointerNum+=pointer_num_209;
            type_221->mHeap=type_221->mHeap||heap_210;
            type_221->mChannel=type_221->mChannel||channel_213;
            type_221->mDefferRightValue=type_221->mDefferRightValue||deffer__216;
            __dec_obj177=type_221->mTupleName,
            type_221->mTupleName=(char*)come_increment_ref_count(tuple_name_217);
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        list$1char$ph_contained(info->method_generics_type_names,type_name_146)        ) {
            for(            i_281=0            ;            i_281<list$1char$ph_length(info->method_generics_type_names)            ;            i_281++            ){
                if(                (_condtional_value_X9=(string_operator_equals(((char*)(__right_value332=list$1char$ph_operator_load_element(info->method_generics_type_names,i_281))),type_name_146))),                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                _condtional_value_X9                ) {
                    __dec_obj178=type_221,
                    type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2227, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__mgenerics_type%d",i_281)),(_Bool)0,info));
                    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            type_221->mConstant=type_221->mConstant||constant_149;
            type_221->mImmutable=type_221->mImmutable||immutable__166;
            type_221->mTask=type_221->mTask||task__167;
            type_221->mAtomic=type_221->mAtomic||atomic__171;
            __dec_obj179=type_221->mAlignas,
            type_221->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_221->mRegister=register__152;
            type_221->mUnsigned=type_221->mUnsigned||unsigned__153;
            type_221->mVolatile=volatile__151;
            type_221->mUniq=type_221->mUniq||uniq__164;
            type_221->mStatic=(type_221->mStatic||static__150)&&!type_221->mUniq;
            type_221->mRecord=type_221->mRecord||record__147;
            type_221->mException=type_221->mException||exception__148;
            type_221->mExtern=type_221->mExtern||extern__162;
            type_221->mInline=type_221->mInline||inline__163;
            type_221->mRestrict=type_221->mRestrict||restrict__157;
            type_221->mLongLong=type_221->mLongLong||long_long_155;
            type_221->mLong=type_221->mLong||long__154;
            type_221->mShort=type_221->mShort||short__156;
            type_221->mPointerNum+=pointer_num_209;
            type_221->mHeap=type_221->mHeap||heap_210;
            type_221->mChannel=type_221->mChannel||channel_213;
            type_221->mDefferRightValue=type_221->mDefferRightValue||deffer__216;
            __dec_obj180=type_221->mTupleName,
            type_221->mTupleName=(char*)come_increment_ref_count(tuple_name_217);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_condtional_value_X10=(((struct sClass*)(__right_value338=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char*)(__right_value337=__builtin_string(type_name_146))))))==((void*)0))),            (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
            come_call_finalizer(sClass_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X10            ) {
                __result_obj__119 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value340=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2261, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value340, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__119;
            }
            __dec_obj181=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2264, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            while(            (_Bool)1            ) {
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value344=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_282=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_283=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_284=multiple_assign_var7->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_284                ) {
                    __result_obj__120 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value346=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2270, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_283 = come_decrement_ref_count(var_name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value346, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__120;
                }
                list$1sType$ph_push_back(type_221->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_282));
                if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_283 = come_decrement_ref_count(var_name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                else {
                    ((struct tuple2$2int$bool$*)(__right_value347=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__121 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value349=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2287, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_283 = come_decrement_ref_count(var_name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value349, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__121;
                }
                come_call_finalizer(sType_finalize, generics_type_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (var_name_283 = come_decrement_ref_count(var_name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            is_contained_generics_class(type_221,info)            ) {
                __dec_obj182=type_221,
                type_221=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_221),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_221),(struct sType*)come_increment_ref_count(type_221),info)                ) {
                    new_name_285=(char*)come_increment_ref_count(create_generics_name(type_221,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_285);
                    exit(7);
                    (new_name_285 = come_decrement_ref_count(new_name_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            type_221->mConstant=type_221->mConstant||constant_149;
            type_221->mImmutable=type_221->mImmutable||immutable__166;
            type_221->mTask=type_221->mTask||task__167;
            type_221->mAtomic=type_221->mAtomic||atomic__171;
            __dec_obj183=type_221->mAlignas,
            type_221->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_221->mRegister=register__152;
            type_221->mUnsigned=type_221->mUnsigned||unsigned__153;
            type_221->mVolatile=volatile__151;
            type_221->mUniq=type_221->mUniq||uniq__164;
            type_221->mStatic=(type_221->mStatic||static__150)&&!type_221->mUniq;
            type_221->mRecord=type_221->mRecord||record__147;
            type_221->mException=type_221->mException||exception__148;
            type_221->mExtern=type_221->mExtern||extern__162;
            type_221->mInline=type_221->mInline||inline__163;
            type_221->mRestrict=type_221->mRestrict||restrict__157;
            type_221->mLongLong=type_221->mLongLong||long_long_155;
            type_221->mLong=type_221->mLong||long__154;
            type_221->mShort=type_221->mShort||short__156;
            type_221->mPointerNum+=pointer_num_209;
            type_221->mHeap=type_221->mHeap||heap_210;
            type_221->mChannel=type_221->mChannel||channel_213;
            type_221->mDefferRightValue=type_221->mDefferRightValue||deffer__216;
            __dec_obj184=type_221->mTupleName,
            type_221->mTupleName=(char*)come_increment_ref_count(tuple_name_217);
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj185=type_name_146,
            type_name_146=(char*)come_increment_ref_count(type_221->mClass->mName);
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            if(            struct__158            ) {
                klass_286=((struct sClass*)(__right_value352=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_146)));
                come_call_finalizer(sClass_finalize, __right_value352, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_286==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_146)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2334, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            if(            union__159            ) {
                klass_324=((struct sClass*)(__right_value362=map$2char$phsClass$ph_operator_load_element(info->classes,type_name_146)));
                come_call_finalizer(sClass_finalize, __right_value362, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                klass_324==((void*)0)&&*info->p!=60                ) {
                    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_146)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc_v2(1, sizeof(struct sClass)*(1), "05type.c", 2341, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,info)));
                }
            }
            __dec_obj186=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2345, "struct sType*")),(char*)come_increment_ref_count(__builtin_string(type_name_146)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_221->mConstant=type_221->mConstant||constant_149;
            type_221->mImmutable=type_221->mImmutable||immutable__166;
            type_221->mTask=type_221->mTask||task__167;
            type_221->mAtomic=type_221->mAtomic||atomic__171;
            __dec_obj187=type_221->mAlignas,
            type_221->mAlignas=(struct sNode*)come_increment_ref_count(alignas__168);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            type_221->mRegister=register__152;
            type_221->mUnsigned=type_221->mUnsigned||unsigned__153;
            type_221->mVolatile=volatile__151;
            type_221->mUniq=type_221->mUniq||uniq__164;
            type_221->mStatic=(type_221->mStatic||static__150)&&!type_221->mUniq;
            type_221->mRecord=type_221->mRecord||record__147;
            type_221->mException=type_221->mException||exception__148;
            type_221->mExtern=type_221->mExtern||extern__162;
            type_221->mInline=type_221->mInline||inline__163;
            type_221->mRestrict=type_221->mRestrict||restrict__157;
            type_221->mLongLong=type_221->mLongLong||long_long_155;
            type_221->mLong=type_221->mLong||long__154;
            type_221->mShort=type_221->mShort||short__156;
            type_221->mPointerNum+=pointer_num_209;
            type_221->mHeap=type_221->mHeap||heap_210;
            type_221->mChannel=type_221->mChannel||channel_213;
            type_221->mDefferRightValue=type_221->mDefferRightValue||deffer__216;
            __dec_obj188=type_221->mTupleName,
            type_221->mTupleName=(char*)come_increment_ref_count(tuple_name_217);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_221->mPointerNum++;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_221->mHeap=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_221->mDefferRightValue=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            *info->p==38            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_221->mNoHeap=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63            ) {
                info->p++;
                if(                *info->p==63                ) {
                    info->p++;
                    type_221->mGuardValue=(_Bool)1;
                }
                else {
                    type_221->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_221->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(        1        ) {
            if(            *info->p==42            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_221->mPointerNum++;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_221->mHeap=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126            ) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_221->mDefferRightValue=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mDefferRightValue=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64            ) {
                info->p++;
                skip_spaces_and_lf(info);
                type_221->mChannel=(_Bool)1;
                if(                type_221->mNoSolvedGenericsType                ) {
                    type_221->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44        ) {
            types_325=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2490, "struct list$1sType$ph*"))));
            list$1sType$ph_push_back(types_325,(struct sType*)come_increment_ref_count(sType_clone(type_221)));
            while(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value373=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_326=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_327=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_328=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value373, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_328                ) {
                    __result_obj__137 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value375=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2501, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, type2_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_327 = come_decrement_ref_count(name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value375, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__137;
                }
                list$1sType$ph_push_back(types_325,(struct sType*)come_increment_ref_count(sType_clone(type2_326)));
                come_call_finalizer(sType_finalize, type2_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_327 = come_decrement_ref_count(name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_329=list$1sType$ph_length(types_325);
            __dec_obj189=type_221,
            type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2514, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_329)),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            type_221->mPointerNum++;
            type_221->mHeap=(_Bool)1;
            for(            o2_saved_330=(struct list$1sType$ph*)come_increment_ref_count((types_325)),it_331=list$1sType$ph_begin((o2_saved_330))            ;            !list$1sType$ph_end((o2_saved_330))            ;            it_331=list$1sType$ph_next((o2_saved_330))            ){
                list$1sType$ph_push_back(type_221->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value380=sType_clone(it_331))))));
                come_call_finalizer(sType_finalize, __right_value380, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            while(            1            ) {
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_221->mPointerNum++;
                    if(                    type_221->mNoSolvedGenericsType                    ) {
                        type_221->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_221->mHeap=(_Bool)1;
                    if(                    type_221->mNoSolvedGenericsType                    ) {
                        type_221->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_221->mChannel=(_Bool)1;
                    if(                    type_221->mNoSolvedGenericsType                    ) {
                        type_221->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_221,info)            ) {
                __dec_obj190=type_221,
                type_221=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type_221),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            else {
                if(                !output_generics_struct((struct sType*)come_increment_ref_count(type_221),(struct sType*)come_increment_ref_count(type_221),info)                ) {
                    new_name_332=(char*)come_increment_ref_count(create_generics_name(type_221,info));
                    printf("output generics is failed(%s)\n",new_name_332);
                    exit(9);
                    (new_name_332 = come_decrement_ref_count(new_name_332, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            type_221->mMultipleTypes=(_Bool)1;
            __dec_obj191=type_name_146,
            type_name_146=(char*)come_increment_ref_count(type_221->mClass->mName);
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        attribute_333=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_333,"")        ) {
            __dec_obj192=type_221->mAttribute,
            type_221->mAttribute=(char*)come_increment_ref_count(attribute_333);
            __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        if(        parse_variable_name        ) {
            if(            var_name_between_brace_227&&*info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                __dec_obj193=var_name_222,
                var_name_222=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            anonymous_name_170            ) {
                static int num_anonymous_var_name_334=0;
                num_anonymous_var_name_334++;
                __dec_obj194=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_334));
                __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj195=var_name_222,
                var_name_222=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                static int num_anonymous_var_name_335=0;
                num_anonymous_var_name_335++;
                __dec_obj196=var_name_222,
                var_name_222=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_335));
                __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            if(            var_name_between_brace_227&&*info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_336=info->no_comma;
                info->no_comma=(_Bool)1;
                node_337=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_336;
                __dec_obj197=type_221->mSizeNum,
                type_221->mSizeNum=(struct sNode*)come_increment_ref_count(node_337);
                (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                ((node_337) ? node_337 = come_decrement_ref_count(node_337, ((struct sNode*)node_337)->finalize, ((struct sNode*)node_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            attribute2_338=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_333,"")&&string_operator_not_equals(attribute2_338,"")            ) {
                __dec_obj198=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value391=string_operator_add(attribute_333," "))),attribute2_338));
                __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_338,"")            ) {
                __dec_obj199=type_221->mAttribute,
                type_221->mAttribute=(char*)come_increment_ref_count(attribute2_338);
                __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            (attribute2_338 = come_decrement_ref_count(attribute2_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        (attribute_333 = come_decrement_ref_count(attribute_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(    *info->p==91    ) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93        ) {
            info->p++;
            skip_spaces_and_lf(info);
            type_221->mArrayPointerType=(_Bool)1;
            type_221->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_339=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph_push_back(type_221->mArrayNum,(struct sNode*)come_increment_ref_count(node_339));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_339) ? node_339 = come_decrement_ref_count(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value394=parse_attribute(info,(_Bool)0)));
    asm_name_340=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_341=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value394, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    string_operator_not_equals(attribute2_341,"")    ) {
        __dec_obj200=type_221->mAttribute,
        type_221->mAttribute=(char*)come_increment_ref_count(attribute2_341);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __dec_obj201=type_221->mAsmName,
    type_221->mAsmName=(char*)come_increment_ref_count(asm_name_340);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    parse_sharp_v5(info);
    if(    type_221->mChannel    ) {
        type_before_342=(struct sType*)come_increment_ref_count(sType_clone(type_221));
        __dec_obj202=type_221,
        type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2667, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj203=type_221->mArrayNum,
        type_221->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___343[0]=((struct sNode*)(__right_value399=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2668, "struct list$1sNode$ph")),1,__list_values1___343)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj203,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        ((__right_value399) ? __right_value399 = come_decrement_ref_count(__right_value399, ((struct sNode*)__right_value399)->finalize, ((struct sNode*)__right_value399)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        __dec_obj204=type_221->mChannelType,
        type_221->mChannelType=(struct sType*)come_increment_ref_count(type_before_342);
        come_call_finalizer(sType_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type_221->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    type_221->mException    ) {
        type2_345=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2673, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type2_345->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2674, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value407, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_operator_store_element(type2_345->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2675, "struct sType*")),(char*)come_increment_ref_count(xsprintf("__generics_type1")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value413, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_345->mPointerNum=1;
        type2_345->mHeap=(_Bool)1;
        type3_351=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2679, "struct sType*")),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph_operator_store_element(type3_351->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_221));
        list$1sType$ph_operator_store_element(type3_351->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05type.c", 2681, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info)));
        come_call_finalizer(sType_finalize, __right_value422, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type4_352=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type2_345),(struct sType*)come_increment_ref_count(type3_351),info));
        type4_352->mException=(_Bool)1;
        type4_352->mUniq=type_221->mUniq;
        __result_obj__141 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value428=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2688, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type4_352),(char*)come_increment_ref_count(var_name_222),(_Bool)1))));
        come_call_finalizer(sType_finalize, type2_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type3_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type4_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (asm_name_340 = come_decrement_ref_count(asm_name_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute2_341 = come_decrement_ref_count(attribute2_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value428, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__141;
        come_call_finalizer(sType_finalize, type2_345, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type3_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type4_352, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_not_equals(attribute_208,"")    ) {
        __dec_obj206=type_221->mAttribute,
        type_221->mAttribute=(char*)come_increment_ref_count(attribute_208);
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__142 = (struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value430=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2695, "struct tuple3$3sType$phchar$phbool$")),(struct sType*)come_increment_ref_count(type_221),(char*)come_increment_ref_count(var_name_222),(_Bool)1))));
    (type_name_146 = come_decrement_ref_count(type_name_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((alignas__168) ? alignas__168 = come_decrement_ref_count(alignas__168, ((struct sNode*)alignas__168)->finalize, ((struct sNode*)alignas__168)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (attribute_208 = come_decrement_ref_count(attribute_208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (tuple_name_217 = come_decrement_ref_count(tuple_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_222 = come_decrement_ref_count(var_name_222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (asm_name_340 = come_decrement_ref_count(asm_name_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (attribute2_341 = come_decrement_ref_count(attribute2_341, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value430, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_248;
int i_249;
char* __result_obj__113;
char* default_value_250;
char* __result_obj__114;
default_value_250 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_248=self->head;
    i_249=0;
    while(    it_248!=((void*)0)    ) {
        if(        position==i_249        ) {
            __result_obj__113 = (char*)come_increment_ref_count(it_248->item);
            (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__113;
        }
        it_248=it_248->next;
        i_249++;
    }
    memset(&default_value_250,0,sizeof(char*));
    __result_obj__114 = (char*)come_increment_ref_count(default_value_250);
    (default_value_250 = come_decrement_ref_count(default_value_250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_251;
int i_252;
char* __result_obj__115;
char* default_value_253;
char* __result_obj__116;
default_value_253 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_251=self->head;
    i_252=0;
    while(    it_251!=((void*)0)    ) {
        if(        position==i_252        ) {
            __result_obj__115 = (char*)come_increment_ref_count(it_251->item);
            (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__115;
        }
        it_251=it_251->next;
        i_252++;
    }
    memset(&default_value_253,0,sizeof(char*));
    __result_obj__116 = (char*)come_increment_ref_count(default_value_253);
    (default_value_253 = come_decrement_ref_count(default_value_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_304;
unsigned int it_305;
_Bool same_key_exist_322;
char* it2_323;
struct map$2char$phsClass$ph* __result_obj__136;
    if(    self->len*10>=self->size    ) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_304=string_get_hash_key(((char*)key))%self->size;
    it_305=hash_304;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_305]        ) {
            if(            string_equals(self->keys[it_305],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_305]);
                    (self->keys[it_305] = come_decrement_ref_count(self->keys[it_305], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_305]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_305]);
                    self->keys[it_305]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sClass_finalize, self->items[it_305], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_305]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_305]=item;
                }
                break;
            }
            it_305++;
            if(            it_305>=self->size            ) {
                it_305=0;
            }
            else if(            it_305==hash_304            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_305]=(_Bool)1;
            if(            1            ) {
                self->keys[it_305]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_305]=key;
            }
            if(            1            ) {
                self->items[it_305]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_305]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_322=(_Bool)0;
    for(    it2_323=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_323=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_323,key)        ) {
            same_key_exist_322=(_Bool)1;
        }
    }
    if(    !same_key_exist_322    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__136 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_287;
void* __right_value353 = (void*)0;
char** keys_288;
void* __right_value354 = (void*)0;
struct sClass** items_289;
void* __right_value355 = (void*)0;
_Bool* item_existance_290;
int len_291;
char* it_294;
struct sClass* default_value_297;
void* __right_value356 = (void*)0;
struct sClass* it2_298;
unsigned int hash_301;
int n_302;
struct sClass* default_value_303;
void* __right_value357 = (void*)0;
default_value_297 = (void*)0;
default_value_303 = (void*)0;
    size_287=self->size*10;
    keys_288=(char**)come_increment_ref_count(((char**)(__right_value353=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_287)), "/usr/local/include/comelang.h", 2163, "char**"))));
    items_289=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value354=(struct sClass**)come_calloc_v2(1, sizeof(struct sClass*)*(1*(size_287)), "/usr/local/include/comelang.h", 2164, "struct sClass**"))));
    item_existance_290=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value355=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_287)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_291=0;
    for(    it_294=map$2char$phsClass$ph_begin(self)    ;    !map$2char$phsClass$ph_end(self)    ;    it_294=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_297,0,sizeof(struct sClass*));
        it2_298=((struct sClass*)(__right_value356=map$2char$phsClass$ph_at(self,it_294,(struct sClass*)come_increment_ref_count(default_value_297))));
        come_call_finalizer(sClass_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_301=string_get_hash_key(((char*)it_294))%size_287;
        n_302=hash_301;
        while(        (_Bool)1        ) {
            if(            item_existance_290[n_302]            ) {
                n_302++;
                if(                n_302>=size_287                ) {
                    n_302=0;
                }
                else if(                n_302==hash_301                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_290[n_302]=(_Bool)1;
                keys_288[n_302]=it_294;
                items_289[n_302]=((struct sClass*)(__right_value357=map$2char$phsClass$ph_at(self,it_294,(struct sClass*)come_increment_ref_count(default_value_303))));
                come_call_finalizer(sClass_finalize, __right_value357, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_291++;
                come_call_finalizer(sClass_finalize, default_value_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_288;
    self->items=items_289;
    self->item_existance=item_existance_290;
    self->size=size_287;
    self->len=len_291;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_292;
char* __result_obj__122;
char* __result_obj__123;
char* result_293;
char* __result_obj__124;
result_292 = (void*)0;
result_293 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_292,0,sizeof(char*));
        __result_obj__122 = result_292;
        return __result_obj__122;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__123 = self->key_list->it->item;
        return __result_obj__123;
    }
    memset(&result_293,0,sizeof(char*));
    __result_obj__124 = result_293;
    return __result_obj__124;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_295;
char* __result_obj__125;
char* __result_obj__126;
char* result_296;
char* __result_obj__127;
result_295 = (void*)0;
result_296 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_295,0,sizeof(char*));
        __result_obj__125 = result_295;
        return __result_obj__125;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__126 = self->key_list->it->item;
        return __result_obj__126;
    }
    memset(&result_296,0,sizeof(char*));
    __result_obj__127 = result_296;
    return __result_obj__127;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_299;
unsigned int it_300;
struct sClass* __result_obj__128;
struct sClass* __result_obj__129;
struct sClass* __result_obj__130;
struct sClass* __result_obj__131;
    hash_299=string_get_hash_key(((char*)key))%self->size;
    it_300=hash_299;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_300]        ) {
            if(            string_equals(self->keys[it_300],key)            ) {
                __result_obj__128 = (struct sClass*)come_increment_ref_count(self->items[it_300]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__128;
            }
            it_300++;
            if(            it_300>=self->size            ) {
                it_300=0;
            }
            else if(            it_300==hash_299            ) {
                __result_obj__129 = (struct sClass*)come_increment_ref_count(default_value);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__129;
            }
        }
        else {
            __result_obj__130 = (struct sClass*)come_increment_ref_count(default_value);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__130;
        }
    }
    __result_obj__131 = (struct sClass*)come_increment_ref_count(default_value);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_306;
struct list_item$1char$ph* it_307;
struct list$1char$ph* __result_obj__135;
    it2_306=0;
    it_307=self->head;
    while(    it_307!=((void*)0)    ) {
        if(        string_equals(it_307->item,item)        ) {
            list$1char$ph_delete(self,it2_306,it2_306+1);
            break;
        }
        it2_306++;
        it_307=it_307->next;
    }
    __result_obj__135 = self;
    return __result_obj__135;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_308;
struct list$1char$ph* __result_obj__132;
struct list_item$1char$ph* it_311;
int i_312;
struct list_item$1char$ph* prev_it_313;
struct list_item$1char$ph* it_314;
int i_315;
struct list_item$1char$ph* prev_it_316;
struct list_item$1char$ph* it_317;
struct list_item$1char$ph* head_prev_it_318;
struct list_item$1char$ph* tail_it_319;
int i_320;
struct list_item$1char$ph* prev_it_321;
struct list$1char$ph* __result_obj__134;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_308=tail;
        tail=head;
        head=tmp_308;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__132 = self;
        return __result_obj__132;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_311=self->head;
        i_312=0;
        while(        it_311!=((void*)0)        ) {
            if(            i_312<tail            ) {
                prev_it_313=it_311;
                it_311=it_311->next;
                i_312++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_312==tail            ) {
                self->head=it_311;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_311=it_311->next;
                i_312++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_314=self->head;
        i_315=0;
        while(        it_314!=((void*)0)        ) {
            if(            i_315==head            ) {
                self->tail=it_314->prev;
                self->tail->next=((void*)0);
            }
            if(            i_315>=head            ) {
                prev_it_316=it_314;
                it_314=it_314->next;
                i_315++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_314=it_314->next;
                i_315++;
            }
        }
    }
    else {
        it_317=self->head;
        head_prev_it_318=((void*)0);
        tail_it_319=((void*)0);
        i_320=0;
        while(        it_317!=((void*)0)        ) {
            if(            i_320==head            ) {
                head_prev_it_318=it_317->prev;
            }
            if(            i_320==tail            ) {
                tail_it_319=it_317;
            }
            if(            i_320>=head&&i_320<tail            ) {
                prev_it_321=it_317;
                it_317=it_317->next;
                i_320++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_321, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_317=it_317->next;
                i_320++;
            }
        }
        if(        head_prev_it_318!=((void*)0)        ) {
            head_prev_it_318->next=tail_it_319;
        }
        if(        tail_it_319!=((void*)0)        ) {
            tail_it_319->prev=head_prev_it_318;
        }
    }
    __result_obj__134 = self;
    return __result_obj__134;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_309;
struct list_item$1char$ph* prev_it_310;
struct list$1char$ph* __result_obj__133;
    it_309=self->head;
    while(    it_309!=((void*)0)    ) {
        prev_it_310=it_309;
        it_309=it_309->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__133 = self;
    return __result_obj__133;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_344;
struct list$1sNode$ph* __result_obj__138;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_344=0    ;    i_344<num_value    ;    i_344++    ){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i_344]));
    }
    __result_obj__138 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_346;
int i_347;
struct sType* default_value_348;
struct list$1sType$ph* __result_obj__139;
struct list_item$1sType$ph* it_349;
int i_350;
struct sType* __dec_obj205;
struct list$1sType$ph* __result_obj__140;
default_value_348 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_346=self->len;
        for(        i_347=0        ;        i_347<position-len_346        ;        i_347++        ){
            memset(&default_value_348,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_348));
            come_call_finalizer(sType_finalize, default_value_348, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__139 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__139;
    }
    it_349=self->head;
    i_350=0;
    while(    it_349!=((void*)0)    ) {
        if(        position==i_350        ) {
            __dec_obj205=it_349->item,
            it_349->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_349=it_349->next;
        i_350++;
    }
    __result_obj__140 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__140;
}

