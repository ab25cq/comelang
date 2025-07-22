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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value37 = (void*)0;
struct sType* generics_type_8;
struct sType* __dec_obj24;
struct sType* __dec_obj25;
struct sClass* klass_38;
char* class_name_39;
void* __right_value38 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1 = (void*)0;
char* fun_name2_40=0;
struct sFun* operator_fun_41=0;
struct sGenericsFun* generics_fun_42=0;
_Bool result_43;
struct sNode* obj_44;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_45;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct sNode* node_51;
_Bool Value_52;
_Bool __result_obj__20;
    generics_type_8=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_8->mNoSolvedGenericsType    ) {
        __dec_obj24=generics_type_8,
        generics_type_8=(struct sType*)come_increment_ref_count(generics_type_8->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj25=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    klass_38=type->mClass;
    class_name_39=klass_38->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value38=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2_40=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_41=multiple_assign_var1->v2;
    generics_fun_42=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_43=(_Bool)0;
    if(    operator_fun_41&&(list$1sType$ph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))    ) {
        obj_44=(struct sNode*)come_increment_ref_count(left_node);
        params_45=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "13op.c", 22, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 25, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_51=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_44),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_45),((void*)0),0,((void*)0),info,(_Bool)0));
        Value_52=node_compile(node_51,info);
        if(        Value_52        ) {
            result_43=(_Bool)1;
        }
        else {
        }
        ((obj_44) ? obj_44 = come_decrement_ref_count(obj_44, ((struct sNode*)obj_44)->finalize, ((struct sNode*)obj_44)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_51) ? node_51 = come_decrement_ref_count(node_51, ((struct sNode*)node_51)->finalize, ((struct sNode*)node_51)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__20 = result_43;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_40 = come_decrement_ref_count(fun_name2_40, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value0 = (void*)0;
struct sType* result_15;
void* __right_value1 = (void*)0;
struct sType* __dec_obj1;
void* __right_value2 = (void*)0;
struct sType* __dec_obj2;
void* __right_value10 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value11 = (void*)0;
struct sType* __dec_obj7;
void* __right_value13 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value14 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value15 = (void*)0;
char* __dec_obj10;
void* __right_value16 = (void*)0;
char* __dec_obj11;
void* __right_value17 = (void*)0;
char* __dec_obj12;
void* __right_value25 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value26 = (void*)0;
char* __dec_obj17;
void* __right_value27 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value35 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value36 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__1;
    }
    result_15=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_15->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_15->mOriginalLoadVarType,
        result_15->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_15->mChannelType,
        result_15->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_15->mGenericsTypes,
        result_15->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_15->mNoSolvedGenericsType,
        result_15->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_15->mSizeNum,
        result_15->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_15->mAlignas,
        result_15->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_15->mTupleName,
        result_15->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_15->mAttribute,
        result_15->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_15->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_15->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_15->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_15->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_15->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_15->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_15->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_15->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_15->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_15->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_15->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_15->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_15->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_15->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_15->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_15->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_15->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_15->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_15->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_15->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_15->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_15->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_15->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_15->mAsmName,
        result_15->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_15->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_15->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_15->mArrayNum,
        result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_15->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_15->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_15->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_15->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_15->mOriginalTypeName,
        result_15->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_15->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_15->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_15->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_15->mParamTypes,
        result_15->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_15->mParamNames,
        result_15->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_15->mResultType,
        result_15->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_15->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_15->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_15);
    come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
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
struct list_item$1sType$ph* it_9;
struct list_item$1sType$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_11;
struct list_item$1sNode$ph* prev_it_12;
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        prev_it_12=it_11;
        it_11=it_11->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_13;
struct list_item$1char$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct list$1sType$ph* result_16;
struct list_item$1sType$ph* it_17;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_16=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_16,(struct sType*)come_increment_ref_count(sType_clone(it_17->item)));
        }
        else {
            list$1sType$ph_add(result_16,(struct sType*)come_increment_ref_count(sType_clone(it_17->item)));
        }
        it_17=it_17->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_16);
    come_call_finalizer(list$1sType$ph$p_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value5 = (void*)0;
struct list_item$1sType$ph* litem_18;
struct sType* __dec_obj3;
void* __right_value6 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj4;
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_18=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value5=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj3=litem_18->item,
        litem_18->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1    ) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value6=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj4=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj5=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_21;
struct list_item$1sType$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)    ) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value12 = (void*)0;
struct sNode* result_23;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_23=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_23->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_23->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_23->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_23->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_23->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_23->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_23->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_23->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_23->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_23->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_23);
    ((result_23) ? result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct list$1sNode$ph* result_24;
struct list_item$1sNode$ph* it_25;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_24=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_24,(struct sNode*)come_increment_ref_count(sNode_clone(it_25->item)));
        }
        else {
            list$1sNode$ph_add(result_24,(struct sNode*)come_increment_ref_count(sNode_clone(it_25->item)));
        }
        it_25=it_25->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_24);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value20 = (void*)0;
struct list_item$1sNode$ph* litem_26;
struct sNode* __dec_obj13;
void* __right_value21 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj14;
void* __right_value22 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_26=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value20=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj13=litem_26->item,
        litem_26->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1    ) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value21=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj14=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value22=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj15=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_29;
struct list_item$1sNode$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)    ) {
        prev_it_30=it_29;
        it_29=it_29->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct list$1char$ph* result_31;
struct list_item$1char$ph* it_32;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_31=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_32=self->head;
    while(    it_32!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_31,(char*)come_increment_ref_count((char*)come_memdup(it_32->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_31,(char*)come_increment_ref_count((char*)come_memdup(it_32->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_32=it_32->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_31);
    come_call_finalizer(list$1char$ph$p_finalize, result_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_33;
char* __dec_obj19;
void* __right_value31 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj20;
void* __right_value32 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_33=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_33->prev=((void*)0);
        litem_33->next=((void*)0);
        __dec_obj19=litem_33->item,
        litem_33->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head=litem_33;
    }
    else if(    self->len==1    ) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value31=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj20=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value32=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj21=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_36;
struct list_item$1char$ph* prev_it_37;
    it_36=self->head;
    while(    it_36!=((void*)0)    ) {
        prev_it_37=it_36;
        it_36=it_36->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_46;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_47;
    it_46=self->head;
    while(    it_46!=((void*)0)    ) {
        prev_it_47=it_46;
        it_46=it_46->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value41 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_48;
struct tuple2$2char$phsNode$ph* __dec_obj26;
void* __right_value42 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_49;
struct tuple2$2char$phsNode$ph* __dec_obj27;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_50;
struct tuple2$2char$phsNode$ph* __dec_obj28;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_48=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        __dec_obj26=litem_48->item,
        litem_48->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1    ) {
        litem_49=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        __dec_obj27=litem_49->item,
        litem_49->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        __dec_obj28=litem_50->item,
        litem_50->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj29;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj29=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__19 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2void$psNode$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
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

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __right_value49 = (void*)0;
struct sNullNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value49=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__21 = (struct sNullNode*)come_increment_ref_count(self);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sNullNode_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

char* sNullNode_kind(struct sNullNode* self){
void* __right_value50 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value50=__builtin_string("sNullNode"))));
    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__22;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct CVALUE* come_value_53;
void* __right_value53 = (void*)0;
char* __dec_obj30;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct sType* __dec_obj31;
_Bool __result_obj__24;
    come_value_53=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 51, "struct CVALUE*"))));
    __dec_obj30=come_value_53->c_value,
    come_value_53->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj31=come_value_53->type,
    come_value_53->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 54, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_53->var=((void*)0);
    add_come_last_code(info,"%s",come_value_53->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
    __result_obj__24 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__24;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sNullNode_finalize(struct sNullNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value57 = (void*)0;
struct list_item$1CVALUE$ph* litem_54;
struct CVALUE* __dec_obj32;
void* __right_value58 = (void*)0;
struct list_item$1CVALUE$ph* litem_55;
struct CVALUE* __dec_obj33;
void* __right_value59 = (void*)0;
struct list_item$1CVALUE$ph* litem_56;
struct CVALUE* __dec_obj34;
struct list$1CVALUE$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem_54=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value57=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_54->prev=((void*)0);
        litem_54->next=((void*)0);
        __dec_obj32=litem_54->item,
        litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_54;
        self->head=litem_54;
    }
    else if(    self->len==1    ) {
        litem_55=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value58=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_55->prev=self->head;
        litem_55->next=((void*)0);
        __dec_obj33=litem_55->item,
        litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_55;
        self->head->next=litem_55;
    }
    else {
        litem_56=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value59=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_56->prev=self->tail;
        litem_56->next=((void*)0);
        __dec_obj34=litem_56->item,
        litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_56;
        self->tail=litem_56;
    }
    self->len++;
    __result_obj__23 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
}

struct sNode* create_null_node(struct sInfo* info){
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value64 = (void*)0;
struct sNode* __result_obj__27;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 67, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value61=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 67, "struct sNullNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__27 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value64=_inf_value1)));
    come_call_finalizer(sNullNode_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value64) ? __right_value64 = come_decrement_ref_count(__right_value64, ((struct sNode*)__right_value64)->finalize, ((struct sNode*)__right_value64)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__27) ? __result_obj__27 = come_decrement_ref_count(__result_obj__27, ((struct sNode*)__result_obj__27)->finalize, ((struct sNode*)__result_obj__27)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__27;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
struct sNullNode* __result_obj__25;
void* __right_value62 = (void*)0;
struct sNullNode* result_57;
void* __right_value63 = (void*)0;
char* __dec_obj35;
struct sNullNode* __result_obj__26;
    if(    self==(void*)0    ) {
        __result_obj__25 = (void*)0;
        return __result_obj__25;
    }
    result_57=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*"));
    if(    self!=((void*)0)    ) {
        result_57->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj35=result_57->sname,
        result_57->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullNode_clone", 5, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_57->sline_real=self->sline_real;
    }
    __result_obj__26 = result_57;
    come_call_finalizer(sNullNode_finalize, result_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct sNode* __dec_obj36;
void* __right_value67 = (void*)0;
struct sNode* __dec_obj37;
struct sAddNode* __result_obj__28;
    ((struct sNodeBase*)(__right_value65=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj36=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj37=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__28 = (struct sAddNode*)come_increment_ref_count(self);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAddNode_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

char* sAddNode_kind(struct sAddNode* self){
void* __right_value68 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value68=__builtin_string("sAddNode"))));
    (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__29;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_58;
_Bool Value_59;
_Bool __result_obj__30;
void* __right_value69 = (void*)0;
struct CVALUE* left_value_60;
struct sNode* right_node_61;
_Bool Value_62;
_Bool __result_obj__31;
void* __right_value70 = (void*)0;
struct CVALUE* right_value_63;
struct sType* type_64;
char* fun_name_65;
_Bool calling_fun_66;
void* __right_value71 = (void*)0;
struct sType* result_type_67;
void* __right_value72 = (void*)0;
struct sType* __dec_obj38;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct CVALUE* come_value_68;
void* __right_value75 = (void*)0;
char* __dec_obj39;
void* __right_value76 = (void*)0;
struct sType* __dec_obj40;
_Bool __result_obj__32;
memset(&calling_fun_66, 0, sizeof(_Bool));
    left_node_58=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_59=node_compile(left_node_58,info);
    if(    !Value_59    ) {
        __result_obj__30 = (_Bool)0;
        ((left_node_58) ? left_node_58 = come_decrement_ref_count(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__30;
    }
    else {
    }
    left_value_60=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_61=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_62=node_compile(right_node_61,info);
    if(    !Value_62    ) {
        __result_obj__31 = (_Bool)0;
        ((left_node_58) ? left_node_58 = come_decrement_ref_count(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_61) ? right_node_61 = come_decrement_ref_count(right_node_61, ((struct sNode*)right_node_61)->finalize, ((struct sNode*)right_node_61)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__31;
    }
    else {
    }
    right_value_63=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_64=(struct sType*)come_increment_ref_count(left_value_60->type);
    fun_name_65="operator_add";
    if(    self->mQuote    ) {
        calling_fun_66=(_Bool)0;
    }
    else {
        calling_fun_66=operator_overload_fun((struct sType*)come_increment_ref_count(type_64),fun_name_65,(struct sNode*)come_increment_ref_count(left_node_58),(struct sNode*)come_increment_ref_count(right_node_61),(struct CVALUE*)come_increment_ref_count(left_value_60),(struct CVALUE*)come_increment_ref_count(right_value_63),(_Bool)0,info);
    }
    if(    !calling_fun_66    ) {
        result_type_67=(struct sType*)come_increment_ref_count(sType_clone(left_value_60->type));
        if(        right_value_63->type->mPointerNum>0        ) {
            __dec_obj38=result_type_67,
            result_type_67=(struct sType*)come_increment_ref_count(sType_clone(right_value_63->type));
            come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_68=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 122, "struct CVALUE*"))));
        __dec_obj39=come_value_68->c_value,
        come_value_68->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_60->c_value,right_value_63->c_value));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj40=come_value_68->type,
        come_value_68->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_67));
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_68->type->mHeap=(_Bool)0;
        come_value_68->var=((void*)0);
        add_come_last_code(info,"%s",come_value_68->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
        come_call_finalizer(sType_finalize, result_type_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__32 = (_Bool)1;
    ((left_node_58) ? left_node_58 = come_decrement_ref_count(left_node_58, ((struct sNode*)left_node_58)->finalize, ((struct sNode*)left_node_58)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_61) ? right_node_61 = come_decrement_ref_count(right_node_61, ((struct sNode*)right_node_61)->finalize, ((struct sNode*)right_node_61)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

static void sAddNode_finalize(struct sAddNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value79 = (void*)0;
struct sNode* __dec_obj42;
struct sSubNode* __result_obj__33;
    ((struct sNodeBase*)(__right_value77=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj41=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj42=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__33 = (struct sSubNode*)come_increment_ref_count(self);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sSubNode_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
}

char* sSubNode_kind(struct sSubNode* self){
void* __right_value80 = (void*)0;
char* __result_obj__34;
    __result_obj__34 = (char*)come_increment_ref_count(((char*)(__right_value80=__builtin_string("sSubNode"))));
    (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__34 = come_decrement_ref_count(__result_obj__34, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__34;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_69;
_Bool Value_70;
_Bool __result_obj__35;
void* __right_value81 = (void*)0;
struct CVALUE* left_value_71;
struct sNode* right_node_72;
_Bool Value_73;
_Bool __result_obj__36;
void* __right_value82 = (void*)0;
struct CVALUE* right_value_74;
struct sType* type_75;
char* fun_name_76;
_Bool calling_fun_77;
void* __right_value83 = (void*)0;
struct sType* result_type_78;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct sType* __dec_obj43;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct CVALUE* come_value_79;
void* __right_value89 = (void*)0;
char* __dec_obj44;
void* __right_value90 = (void*)0;
struct sType* __dec_obj45;
_Bool __result_obj__37;
memset(&calling_fun_77, 0, sizeof(_Bool));
    left_node_69=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_70=node_compile(left_node_69,info);
    if(    !Value_70    ) {
        __result_obj__35 = (_Bool)0;
        ((left_node_69) ? left_node_69 = come_decrement_ref_count(left_node_69, ((struct sNode*)left_node_69)->finalize, ((struct sNode*)left_node_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__35;
    }
    else {
    }
    left_value_71=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_72=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_73=node_compile(right_node_72,info);
    if(    !Value_73    ) {
        __result_obj__36 = (_Bool)0;
        ((left_node_69) ? left_node_69 = come_decrement_ref_count(left_node_69, ((struct sNode*)left_node_69)->finalize, ((struct sNode*)left_node_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_72) ? right_node_72 = come_decrement_ref_count(right_node_72, ((struct sNode*)right_node_72)->finalize, ((struct sNode*)right_node_72)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__36;
    }
    else {
    }
    right_value_74=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_75=(struct sType*)come_increment_ref_count(left_value_71->type);
    fun_name_76="operator_sub";
    if(    self->mQuote    ) {
        calling_fun_77=(_Bool)0;
    }
    else {
        calling_fun_77=operator_overload_fun((struct sType*)come_increment_ref_count(type_75),fun_name_76,(struct sNode*)come_increment_ref_count(left_node_69),(struct sNode*)come_increment_ref_count(right_node_72),(struct CVALUE*)come_increment_ref_count(left_value_71),(struct CVALUE*)come_increment_ref_count(right_value_74),(_Bool)0,info);
    }
    if(    !calling_fun_77    ) {
        result_type_78=(struct sType*)come_increment_ref_count(sType_clone(left_value_71->type));
        if(        left_value_71->type->mPointerNum>0&&right_value_74->type->mPointerNum>0        ) {
            __dec_obj43=result_type_78,
            result_type_78=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 187, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_value_79=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 190, "struct CVALUE*"))));
        __dec_obj44=come_value_79->c_value,
        come_value_79->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_71->c_value,right_value_74->c_value));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj45=come_value_79->type,
        come_value_79->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_78));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_79->type->mHeap=(_Bool)0;
        come_value_79->var=((void*)0);
        add_come_last_code(info,"%s",come_value_79->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_79));
        come_call_finalizer(sType_finalize, result_type_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__37 = (_Bool)1;
    ((left_node_69) ? left_node_69 = come_decrement_ref_count(left_node_69, ((struct sNode*)left_node_69)->finalize, ((struct sNode*)left_node_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_72) ? right_node_72 = come_decrement_ref_count(right_node_72, ((struct sNode*)right_node_72)->finalize, ((struct sNode*)right_node_72)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__37;
}

static void sSubNode_finalize(struct sSubNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct sNode* __dec_obj46;
void* __right_value93 = (void*)0;
struct sNode* __dec_obj47;
struct sMultNode* __result_obj__38;
    ((struct sNodeBase*)(__right_value91=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj46=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj47=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__38 = (struct sMultNode*)come_increment_ref_count(self);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMultNode_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
}

char* sMultNode_kind(struct sMultNode* self){
void* __right_value94 = (void*)0;
char* __result_obj__39;
    __result_obj__39 = (char*)come_increment_ref_count(((char*)(__right_value94=__builtin_string("sMultNode"))));
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__39 = come_decrement_ref_count(__result_obj__39, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__39;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_80;
_Bool Value_81;
_Bool __result_obj__40;
void* __right_value95 = (void*)0;
struct CVALUE* left_value_82;
struct sNode* right_node_83;
_Bool Value_84;
_Bool __result_obj__41;
void* __right_value96 = (void*)0;
struct CVALUE* right_value_85;
struct sType* type_86;
char* fun_name_87;
_Bool calling_fun_88;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct CVALUE* come_value_89;
void* __right_value99 = (void*)0;
char* __dec_obj48;
void* __right_value100 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__42;
memset(&calling_fun_88, 0, sizeof(_Bool));
    left_node_80=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_81=node_compile(left_node_80,info);
    if(    !Value_81    ) {
        __result_obj__40 = (_Bool)0;
        ((left_node_80) ? left_node_80 = come_decrement_ref_count(left_node_80, ((struct sNode*)left_node_80)->finalize, ((struct sNode*)left_node_80)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__40;
    }
    else {
    }
    left_value_82=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_83=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_84=node_compile(right_node_83,info);
    if(    !Value_84    ) {
        __result_obj__41 = (_Bool)0;
        ((left_node_80) ? left_node_80 = come_decrement_ref_count(left_node_80, ((struct sNode*)left_node_80)->finalize, ((struct sNode*)left_node_80)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_83) ? right_node_83 = come_decrement_ref_count(right_node_83, ((struct sNode*)right_node_83)->finalize, ((struct sNode*)right_node_83)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__41;
    }
    else {
    }
    right_value_85=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_86=(struct sType*)come_increment_ref_count(left_value_82->type);
    fun_name_87="operator_mult";
    if(    self->mQuote    ) {
        calling_fun_88=(_Bool)0;
    }
    else {
        calling_fun_88=operator_overload_fun((struct sType*)come_increment_ref_count(type_86),fun_name_87,(struct sNode*)come_increment_ref_count(left_node_80),(struct sNode*)come_increment_ref_count(right_node_83),(struct CVALUE*)come_increment_ref_count(left_value_82),(struct CVALUE*)come_increment_ref_count(right_value_85),(_Bool)0,info);
    }
    if(    !calling_fun_88    ) {
        come_value_89=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 253, "struct CVALUE*"))));
        __dec_obj48=come_value_89->c_value,
        come_value_89->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_82->c_value,right_value_85->c_value));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj49=come_value_89->type,
        come_value_89->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_82->type));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_89->type->mHeap=(_Bool)0;
        come_value_89->var=((void*)0);
        add_come_last_code(info,"%s",come_value_89->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
        come_call_finalizer(CVALUE_finalize, come_value_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__42 = (_Bool)1;
    ((left_node_80) ? left_node_80 = come_decrement_ref_count(left_node_80, ((struct sNode*)left_node_80)->finalize, ((struct sNode*)left_node_80)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_83) ? right_node_83 = come_decrement_ref_count(right_node_83, ((struct sNode*)right_node_83)->finalize, ((struct sNode*)right_node_83)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void sMultNode_finalize(struct sMultNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value103 = (void*)0;
struct sNode* __dec_obj51;
struct sDivNode* __result_obj__43;
    ((struct sNodeBase*)(__right_value101=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value101, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj50=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj51=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__43 = (struct sDivNode*)come_increment_ref_count(self);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sDivNode_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

char* sDivNode_kind(struct sDivNode* self){
void* __right_value104 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string("sDivNode"))));
    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_90;
_Bool Value_91;
_Bool __result_obj__45;
void* __right_value105 = (void*)0;
struct CVALUE* left_value_92;
struct sNode* right_node_93;
_Bool Value_94;
_Bool __result_obj__46;
void* __right_value106 = (void*)0;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct CVALUE* come_value_99;
void* __right_value109 = (void*)0;
char* __dec_obj52;
void* __right_value110 = (void*)0;
struct sType* __dec_obj53;
_Bool __result_obj__47;
memset(&calling_fun_98, 0, sizeof(_Bool));
    left_node_90=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_91=node_compile(left_node_90,info);
    if(    !Value_91    ) {
        __result_obj__45 = (_Bool)0;
        ((left_node_90) ? left_node_90 = come_decrement_ref_count(left_node_90, ((struct sNode*)left_node_90)->finalize, ((struct sNode*)left_node_90)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__45;
    }
    else {
    }
    left_value_92=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_93=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_94=node_compile(right_node_93,info);
    if(    !Value_94    ) {
        __result_obj__46 = (_Bool)0;
        ((left_node_90) ? left_node_90 = come_decrement_ref_count(left_node_90, ((struct sNode*)left_node_90)->finalize, ((struct sNode*)left_node_90)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_93) ? right_node_93 = come_decrement_ref_count(right_node_93, ((struct sNode*)right_node_93)->finalize, ((struct sNode*)right_node_93)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__46;
    }
    else {
    }
    right_value_95=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_96=(struct sType*)come_increment_ref_count(left_value_92->type);
    fun_name_97="operator_div";
    if(    self->mQuote    ) {
        calling_fun_98=(_Bool)0;
    }
    else {
        calling_fun_98=operator_overload_fun((struct sType*)come_increment_ref_count(type_96),fun_name_97,(struct sNode*)come_increment_ref_count(left_node_90),(struct sNode*)come_increment_ref_count(right_node_93),(struct CVALUE*)come_increment_ref_count(left_value_92),(struct CVALUE*)come_increment_ref_count(right_value_95),(_Bool)0,info);
    }
    if(    !calling_fun_98    ) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 316, "struct CVALUE*"))));
        __dec_obj52=come_value_99->c_value,
        come_value_99->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_92->c_value,right_value_95->c_value));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj53=come_value_99->type,
        come_value_99->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_92->type));
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_99->type->mHeap=(_Bool)0;
        come_value_99->var=((void*)0);
        add_come_last_code(info,"%s",come_value_99->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
        come_call_finalizer(CVALUE_finalize, come_value_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__47 = (_Bool)1;
    ((left_node_90) ? left_node_90 = come_decrement_ref_count(left_node_90, ((struct sNode*)left_node_90)->finalize, ((struct sNode*)left_node_90)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_93) ? right_node_93 = come_decrement_ref_count(right_node_93, ((struct sNode*)right_node_93)->finalize, ((struct sNode*)right_node_93)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__47;
}

static void sDivNode_finalize(struct sDivNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj54;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj55;
struct sModNode* __result_obj__48;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj54=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj55=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__48 = (struct sModNode*)come_increment_ref_count(self);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sModNode_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

char* sModNode_kind(struct sModNode* self){
void* __right_value114 = (void*)0;
char* __result_obj__49;
    __result_obj__49 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string("sModNode"))));
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__49;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_100;
_Bool Value_101;
_Bool __result_obj__50;
void* __right_value115 = (void*)0;
struct CVALUE* left_value_102;
struct sNode* right_node_103;
_Bool Value_104;
_Bool __result_obj__51;
void* __right_value116 = (void*)0;
struct CVALUE* right_value_105;
struct sType* type_106;
char* fun_name_107;
_Bool calling_fun_108;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct CVALUE* come_value_109;
void* __right_value119 = (void*)0;
char* __dec_obj56;
void* __right_value120 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__52;
memset(&calling_fun_108, 0, sizeof(_Bool));
    left_node_100=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_101=node_compile(left_node_100,info);
    if(    !Value_101    ) {
        __result_obj__50 = (_Bool)0;
        ((left_node_100) ? left_node_100 = come_decrement_ref_count(left_node_100, ((struct sNode*)left_node_100)->finalize, ((struct sNode*)left_node_100)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__50;
    }
    else {
    }
    left_value_102=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_103=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_104=node_compile(right_node_103,info);
    if(    !Value_104    ) {
        __result_obj__51 = (_Bool)0;
        ((left_node_100) ? left_node_100 = come_decrement_ref_count(left_node_100, ((struct sNode*)left_node_100)->finalize, ((struct sNode*)left_node_100)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_103) ? right_node_103 = come_decrement_ref_count(right_node_103, ((struct sNode*)right_node_103)->finalize, ((struct sNode*)right_node_103)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__51;
    }
    else {
    }
    right_value_105=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_106=(struct sType*)come_increment_ref_count(left_value_102->type);
    fun_name_107="operator_mod";
    if(    self->mQuote    ) {
        calling_fun_108=(_Bool)0;
    }
    else {
        calling_fun_108=operator_overload_fun((struct sType*)come_increment_ref_count(type_106),fun_name_107,(struct sNode*)come_increment_ref_count(left_node_100),(struct sNode*)come_increment_ref_count(right_node_103),(struct CVALUE*)come_increment_ref_count(left_value_102),(struct CVALUE*)come_increment_ref_count(right_value_105),(_Bool)0,info);
    }
    if(    !calling_fun_108    ) {
        come_value_109=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 379, "struct CVALUE*"))));
        __dec_obj56=come_value_109->c_value,
        come_value_109->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_102->c_value,right_value_105->c_value));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj57=come_value_109->type,
        come_value_109->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_102->type));
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_109->type->mHeap=(_Bool)0;
        come_value_109->var=((void*)0);
        add_come_last_code(info,"%s",come_value_109->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
        come_call_finalizer(CVALUE_finalize, come_value_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__52 = (_Bool)1;
    ((left_node_100) ? left_node_100 = come_decrement_ref_count(left_node_100, ((struct sNode*)left_node_100)->finalize, ((struct sNode*)left_node_100)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_103) ? right_node_103 = come_decrement_ref_count(right_node_103, ((struct sNode*)right_node_103)->finalize, ((struct sNode*)right_node_103)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static void sModNode_finalize(struct sModNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value123 = (void*)0;
struct sNode* __dec_obj59;
struct sLShiftNode* __result_obj__53;
    ((struct sNodeBase*)(__right_value121=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj58=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj59=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__53 = (struct sLShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLShiftNode_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __right_value124 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string("sLShiftNode"))));
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_110;
_Bool Value_111;
_Bool __result_obj__55;
void* __right_value125 = (void*)0;
struct CVALUE* left_value_112;
struct sNode* right_node_113;
_Bool Value_114;
_Bool __result_obj__56;
void* __right_value126 = (void*)0;
struct CVALUE* right_value_115;
struct sType* type_116;
char* fun_name_117;
_Bool calling_fun_118;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct CVALUE* come_value_119;
void* __right_value129 = (void*)0;
char* __dec_obj60;
void* __right_value130 = (void*)0;
struct sType* __dec_obj61;
_Bool __result_obj__57;
memset(&calling_fun_118, 0, sizeof(_Bool));
    left_node_110=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_111=node_compile(left_node_110,info);
    if(    !Value_111    ) {
        __result_obj__55 = (_Bool)0;
        ((left_node_110) ? left_node_110 = come_decrement_ref_count(left_node_110, ((struct sNode*)left_node_110)->finalize, ((struct sNode*)left_node_110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__55;
    }
    else {
    }
    left_value_112=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_113=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_114=node_compile(right_node_113,info);
    if(    !Value_114    ) {
        __result_obj__56 = (_Bool)0;
        ((left_node_110) ? left_node_110 = come_decrement_ref_count(left_node_110, ((struct sNode*)left_node_110)->finalize, ((struct sNode*)left_node_110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_113) ? right_node_113 = come_decrement_ref_count(right_node_113, ((struct sNode*)right_node_113)->finalize, ((struct sNode*)right_node_113)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__56;
    }
    else {
    }
    right_value_115=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_116=(struct sType*)come_increment_ref_count(left_value_112->type);
    fun_name_117="operator_lshift";
    if(    self->mQuote    ) {
        calling_fun_118=(_Bool)0;
    }
    else {
        calling_fun_118=operator_overload_fun((struct sType*)come_increment_ref_count(type_116),fun_name_117,(struct sNode*)come_increment_ref_count(left_node_110),(struct sNode*)come_increment_ref_count(right_node_113),(struct CVALUE*)come_increment_ref_count(left_value_112),(struct CVALUE*)come_increment_ref_count(right_value_115),(_Bool)0,info);
    }
    if(    !calling_fun_118    ) {
        come_value_119=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 443, "struct CVALUE*"))));
        __dec_obj60=come_value_119->c_value,
        come_value_119->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_112->c_value,right_value_115->c_value));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj61=come_value_119->type,
        come_value_119->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_112->type));
        come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_119->type->mHeap=(_Bool)0;
        come_value_119->var=((void*)0);
        add_come_last_code(info,"%s",come_value_119->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
        come_call_finalizer(CVALUE_finalize, come_value_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__57 = (_Bool)1;
    ((left_node_110) ? left_node_110 = come_decrement_ref_count(left_node_110, ((struct sNode*)left_node_110)->finalize, ((struct sNode*)left_node_110)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_113) ? right_node_113 = come_decrement_ref_count(right_node_113, ((struct sNode*)right_node_113)->finalize, ((struct sNode*)right_node_113)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value133 = (void*)0;
struct sNode* __dec_obj63;
struct sRShiftNode* __result_obj__58;
    ((struct sNodeBase*)(__right_value131=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj62=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj63=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__58 = (struct sRShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sRShiftNode_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __right_value134 = (void*)0;
char* __result_obj__59;
    __result_obj__59 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sRShiftNode"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__59;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_120;
_Bool Value_121;
_Bool __result_obj__60;
void* __right_value135 = (void*)0;
struct CVALUE* left_value_122;
struct sNode* right_node_123;
_Bool Value_124;
_Bool __result_obj__61;
void* __right_value136 = (void*)0;
struct CVALUE* right_value_125;
struct sType* type_126;
char* fun_name_127;
_Bool calling_fun_128;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct CVALUE* come_value_129;
void* __right_value139 = (void*)0;
char* __dec_obj64;
void* __right_value140 = (void*)0;
struct sType* __dec_obj65;
_Bool __result_obj__62;
memset(&calling_fun_128, 0, sizeof(_Bool));
    left_node_120=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_121=node_compile(left_node_120,info);
    if(    !Value_121    ) {
        __result_obj__60 = (_Bool)0;
        ((left_node_120) ? left_node_120 = come_decrement_ref_count(left_node_120, ((struct sNode*)left_node_120)->finalize, ((struct sNode*)left_node_120)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__60;
    }
    else {
    }
    left_value_122=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_123=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_124=node_compile(right_node_123,info);
    if(    !Value_124    ) {
        __result_obj__61 = (_Bool)0;
        ((left_node_120) ? left_node_120 = come_decrement_ref_count(left_node_120, ((struct sNode*)left_node_120)->finalize, ((struct sNode*)left_node_120)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_123) ? right_node_123 = come_decrement_ref_count(right_node_123, ((struct sNode*)right_node_123)->finalize, ((struct sNode*)right_node_123)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__61;
    }
    else {
    }
    right_value_125=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_126=(struct sType*)come_increment_ref_count(left_value_122->type);
    fun_name_127="operator_rshift";
    if(    self->mQuote    ) {
        calling_fun_128=(_Bool)0;
    }
    else {
        calling_fun_128=operator_overload_fun((struct sType*)come_increment_ref_count(type_126),fun_name_127,(struct sNode*)come_increment_ref_count(left_node_120),(struct sNode*)come_increment_ref_count(right_node_123),(struct CVALUE*)come_increment_ref_count(left_value_122),(struct CVALUE*)come_increment_ref_count(right_value_125),(_Bool)0,info);
    }
    if(    !calling_fun_128    ) {
        come_value_129=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 506, "struct CVALUE*"))));
        __dec_obj64=come_value_129->c_value,
        come_value_129->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_122->c_value,right_value_125->c_value));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj65=come_value_129->type,
        come_value_129->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_122->type));
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_129->type->mHeap=(_Bool)0;
        come_value_129->var=((void*)0);
        add_come_last_code(info,"%s",come_value_129->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
        come_call_finalizer(CVALUE_finalize, come_value_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__62 = (_Bool)1;
    ((left_node_120) ? left_node_120 = come_decrement_ref_count(left_node_120, ((struct sNode*)left_node_120)->finalize, ((struct sNode*)left_node_120)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_123) ? right_node_123 = come_decrement_ref_count(right_node_123, ((struct sNode*)right_node_123)->finalize, ((struct sNode*)right_node_123)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__62;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value143 = (void*)0;
struct sNode* __dec_obj67;
struct sGtEqNode* __result_obj__63;
    ((struct sNodeBase*)(__right_value141=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value141, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj66=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj67=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__63 = (struct sGtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGtEqNode_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __right_value144 = (void*)0;
char* __result_obj__64;
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string("sGtEqNode"))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_130;
_Bool Value_131;
_Bool __result_obj__65;
void* __right_value145 = (void*)0;
struct CVALUE* left_value_132;
struct sNode* right_node_133;
_Bool Value_134;
_Bool __result_obj__66;
void* __right_value146 = (void*)0;
struct CVALUE* right_value_135;
struct sType* type_136;
char* fun_name_137;
_Bool calling_fun_138;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct CVALUE* come_value_139;
void* __right_value149 = (void*)0;
char* __dec_obj68;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct sType* __dec_obj69;
_Bool __result_obj__67;
memset(&calling_fun_138, 0, sizeof(_Bool));
    left_node_130=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_131=node_compile(left_node_130,info);
    if(    !Value_131    ) {
        __result_obj__65 = (_Bool)0;
        ((left_node_130) ? left_node_130 = come_decrement_ref_count(left_node_130, ((struct sNode*)left_node_130)->finalize, ((struct sNode*)left_node_130)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__65;
    }
    else {
    }
    left_value_132=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_133=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_134=node_compile(right_node_133,info);
    if(    !Value_134    ) {
        __result_obj__66 = (_Bool)0;
        ((left_node_130) ? left_node_130 = come_decrement_ref_count(left_node_130, ((struct sNode*)left_node_130)->finalize, ((struct sNode*)left_node_130)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_133) ? right_node_133 = come_decrement_ref_count(right_node_133, ((struct sNode*)right_node_133)->finalize, ((struct sNode*)right_node_133)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__66;
    }
    else {
    }
    right_value_135=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_136=(struct sType*)come_increment_ref_count(left_value_132->type);
    fun_name_137="operator_gteq";
    if(    self->mQuote    ) {
        calling_fun_138=(_Bool)0;
    }
    else {
        calling_fun_138=operator_overload_fun((struct sType*)come_increment_ref_count(type_136),fun_name_137,(struct sNode*)come_increment_ref_count(left_node_130),(struct sNode*)come_increment_ref_count(right_node_133),(struct CVALUE*)come_increment_ref_count(left_value_132),(struct CVALUE*)come_increment_ref_count(right_value_135),(_Bool)0,info);
    }
    if(    !calling_fun_138    ) {
        come_value_139=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 569, "struct CVALUE*"))));
        __dec_obj68=come_value_139->c_value,
        come_value_139->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_132->c_value,right_value_135->c_value));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj69=come_value_139->type,
        come_value_139->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 572, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_139->var=((void*)0);
        add_come_last_code(info,"%s",come_value_139->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
        come_call_finalizer(CVALUE_finalize, come_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__67 = (_Bool)1;
    ((left_node_130) ? left_node_130 = come_decrement_ref_count(left_node_130, ((struct sNode*)left_node_130)->finalize, ((struct sNode*)left_node_130)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_133) ? right_node_133 = come_decrement_ref_count(right_node_133, ((struct sNode*)right_node_133)->finalize, ((struct sNode*)right_node_133)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__67;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value155 = (void*)0;
struct sNode* __dec_obj71;
struct sLtEqNode* __result_obj__68;
    ((struct sNodeBase*)(__right_value153=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value153, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj70=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj71=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__68 = (struct sLtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtEqNode_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __right_value156 = (void*)0;
char* __result_obj__69;
    __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("sLtEqNode"))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__69;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_140;
_Bool Value_141;
_Bool __result_obj__70;
void* __right_value157 = (void*)0;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
_Bool Value_144;
_Bool __result_obj__71;
void* __right_value158 = (void*)0;
struct CVALUE* right_value_145;
struct sType* type_146;
char* fun_name_147;
_Bool calling_fun_148;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct CVALUE* come_value_149;
void* __right_value161 = (void*)0;
char* __dec_obj72;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct sType* __dec_obj73;
_Bool __result_obj__72;
memset(&calling_fun_148, 0, sizeof(_Bool));
    left_node_140=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_141=node_compile(left_node_140,info);
    if(    !Value_141    ) {
        __result_obj__70 = (_Bool)0;
        ((left_node_140) ? left_node_140 = come_decrement_ref_count(left_node_140, ((struct sNode*)left_node_140)->finalize, ((struct sNode*)left_node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__70;
    }
    else {
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_143=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_144=node_compile(right_node_143,info);
    if(    !Value_144    ) {
        __result_obj__71 = (_Bool)0;
        ((left_node_140) ? left_node_140 = come_decrement_ref_count(left_node_140, ((struct sNode*)left_node_140)->finalize, ((struct sNode*)left_node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_143) ? right_node_143 = come_decrement_ref_count(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__71;
    }
    else {
    }
    right_value_145=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_146=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_147="operator_lteq";
    if(    self->mQuote    ) {
        calling_fun_148=(_Bool)0;
    }
    else {
        calling_fun_148=operator_overload_fun((struct sType*)come_increment_ref_count(type_146),fun_name_147,(struct sNode*)come_increment_ref_count(left_node_140),(struct sNode*)come_increment_ref_count(right_node_143),(struct CVALUE*)come_increment_ref_count(left_value_142),(struct CVALUE*)come_increment_ref_count(right_value_145),(_Bool)0,info);
    }
    if(    !calling_fun_148    ) {
        come_value_149=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 631, "struct CVALUE*"))));
        __dec_obj72=come_value_149->c_value,
        come_value_149->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_142->c_value,right_value_145->c_value));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj73=come_value_149->type,
        come_value_149->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 634, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_149->var=((void*)0);
        add_come_last_code(info,"%s",come_value_149->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
        come_call_finalizer(CVALUE_finalize, come_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__72 = (_Bool)1;
    ((left_node_140) ? left_node_140 = come_decrement_ref_count(left_node_140, ((struct sNode*)left_node_140)->finalize, ((struct sNode*)left_node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_143) ? right_node_143 = come_decrement_ref_count(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__72;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj75;
struct sLtNode* __result_obj__73;
    ((struct sNodeBase*)(__right_value165=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value165, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj74=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj75=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__73 = (struct sLtNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtNode_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

char* sLtNode_kind(struct sLtNode* self){
void* __right_value168 = (void*)0;
char* __result_obj__74;
    __result_obj__74 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string("sLtNode"))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__74 = come_decrement_ref_count(__result_obj__74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__74;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_150;
_Bool Value_151;
_Bool __result_obj__75;
void* __right_value169 = (void*)0;
struct CVALUE* left_value_152;
struct sNode* right_node_153;
_Bool Value_154;
_Bool __result_obj__76;
void* __right_value170 = (void*)0;
struct CVALUE* right_value_155;
struct sType* type_156;
char* fun_name_157;
_Bool calling_fun_158;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct CVALUE* come_value_159;
void* __right_value173 = (void*)0;
char* __dec_obj76;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct sType* __dec_obj77;
_Bool __result_obj__77;
memset(&calling_fun_158, 0, sizeof(_Bool));
    left_node_150=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_151=node_compile(left_node_150,info);
    if(    !Value_151    ) {
        __result_obj__75 = (_Bool)0;
        ((left_node_150) ? left_node_150 = come_decrement_ref_count(left_node_150, ((struct sNode*)left_node_150)->finalize, ((struct sNode*)left_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__75;
    }
    else {
    }
    left_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_153=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_154=node_compile(right_node_153,info);
    if(    !Value_154    ) {
        __result_obj__76 = (_Bool)0;
        ((left_node_150) ? left_node_150 = come_decrement_ref_count(left_node_150, ((struct sNode*)left_node_150)->finalize, ((struct sNode*)left_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_153) ? right_node_153 = come_decrement_ref_count(right_node_153, ((struct sNode*)right_node_153)->finalize, ((struct sNode*)right_node_153)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__76;
    }
    else {
    }
    right_value_155=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_156=(struct sType*)come_increment_ref_count(left_value_152->type);
    fun_name_157="operator_lt";
    if(    self->mQuote    ) {
        calling_fun_158=(_Bool)0;
    }
    else {
        calling_fun_158=operator_overload_fun((struct sType*)come_increment_ref_count(type_156),fun_name_157,(struct sNode*)come_increment_ref_count(left_node_150),(struct sNode*)come_increment_ref_count(right_node_153),(struct CVALUE*)come_increment_ref_count(left_value_152),(struct CVALUE*)come_increment_ref_count(right_value_155),(_Bool)0,info);
    }
    if(    !calling_fun_158    ) {
        come_value_159=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 693, "struct CVALUE*"))));
        __dec_obj76=come_value_159->c_value,
        come_value_159->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_152->c_value,right_value_155->c_value));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj77=come_value_159->type,
        come_value_159->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 696, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_159->var=((void*)0);
        add_come_last_code(info,"%s",come_value_159->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__77 = (_Bool)1;
    ((left_node_150) ? left_node_150 = come_decrement_ref_count(left_node_150, ((struct sNode*)left_node_150)->finalize, ((struct sNode*)left_node_150)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_153) ? right_node_153 = come_decrement_ref_count(right_node_153, ((struct sNode*)right_node_153)->finalize, ((struct sNode*)right_node_153)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__77;
}

static void sLtNode_finalize(struct sLtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value179 = (void*)0;
struct sNode* __dec_obj79;
struct sGtNode* __result_obj__78;
    ((struct sNodeBase*)(__right_value177=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value177, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj78=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj79=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__78 = (struct sGtNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sGtNode_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

char* sGtNode_kind(struct sGtNode* self){
void* __right_value180 = (void*)0;
char* __result_obj__79;
    __result_obj__79 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string("sGtNode"))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__79;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_160;
_Bool Value_161;
_Bool __result_obj__80;
void* __right_value181 = (void*)0;
struct CVALUE* left_value_162;
struct sNode* right_node_163;
_Bool Value_164;
_Bool __result_obj__81;
void* __right_value182 = (void*)0;
struct CVALUE* right_value_165;
struct sType* type_166;
char* fun_name_167;
_Bool calling_fun_168;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct CVALUE* come_value_169;
void* __right_value185 = (void*)0;
char* __dec_obj80;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__82;
memset(&calling_fun_168, 0, sizeof(_Bool));
    left_node_160=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_161=node_compile(left_node_160,info);
    if(    !Value_161    ) {
        __result_obj__80 = (_Bool)0;
        ((left_node_160) ? left_node_160 = come_decrement_ref_count(left_node_160, ((struct sNode*)left_node_160)->finalize, ((struct sNode*)left_node_160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__80;
    }
    else {
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_163=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_164=node_compile(right_node_163,info);
    if(    !Value_164    ) {
        __result_obj__81 = (_Bool)0;
        ((left_node_160) ? left_node_160 = come_decrement_ref_count(left_node_160, ((struct sNode*)left_node_160)->finalize, ((struct sNode*)left_node_160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_163) ? right_node_163 = come_decrement_ref_count(right_node_163, ((struct sNode*)right_node_163)->finalize, ((struct sNode*)right_node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__81;
    }
    else {
    }
    right_value_165=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_166=(struct sType*)come_increment_ref_count(left_value_162->type);
    fun_name_167="operator_gt";
    if(    self->mQuote    ) {
        calling_fun_168=(_Bool)0;
    }
    else {
        calling_fun_168=operator_overload_fun((struct sType*)come_increment_ref_count(type_166),fun_name_167,(struct sNode*)come_increment_ref_count(left_node_160),(struct sNode*)come_increment_ref_count(right_node_163),(struct CVALUE*)come_increment_ref_count(left_value_162),(struct CVALUE*)come_increment_ref_count(right_value_165),(_Bool)0,info);
    }
    if(    !calling_fun_168    ) {
        come_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 755, "struct CVALUE*"))));
        __dec_obj80=come_value_169->c_value,
        come_value_169->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_162->c_value,right_value_165->c_value));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj81=come_value_169->type,
        come_value_169->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 758, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_169->var=((void*)0);
        add_come_last_code(info,"%s",come_value_169->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
        come_call_finalizer(CVALUE_finalize, come_value_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__82 = (_Bool)1;
    ((left_node_160) ? left_node_160 = come_decrement_ref_count(left_node_160, ((struct sNode*)left_node_160)->finalize, ((struct sNode*)left_node_160)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_163) ? right_node_163 = come_decrement_ref_count(right_node_163, ((struct sNode*)right_node_163)->finalize, ((struct sNode*)right_node_163)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__82;
}

static void sGtNode_finalize(struct sGtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value191 = (void*)0;
struct sNode* __dec_obj83;
struct sEqNode* __result_obj__83;
    ((struct sNodeBase*)(__right_value189=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj82=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj83=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__83 = (struct sEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sEqNode_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

char* sEqNode_kind(struct sEqNode* self){
void* __right_value192 = (void*)0;
char* __result_obj__84;
    __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string("sEqNode"))));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__84;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_170;
_Bool Value_171;
void* __right_value193 = (void*)0;
struct CVALUE* left_value_172;
struct sNode* right_node_173;
_Bool Value_174;
_Bool __result_obj__85;
void* __right_value194 = (void*)0;
struct CVALUE* right_value_175;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct CVALUE* come_value_176;
void* __right_value197 = (void*)0;
char* __dec_obj84;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sType* __dec_obj85;
_Bool __result_obj__86;
    left_node_170=self->mLeft;
    Value_171=node_compile(left_node_170,info);
    if(    !Value_171    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_172=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_173=self->mRight;
    Value_174=node_compile(right_node_173,info);
    if(    !Value_174    ) {
        __result_obj__85 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__85;
    }
    else {
    }
    right_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_176=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 805, "struct CVALUE*"))));
    __dec_obj84=come_value_176->c_value,
    come_value_176->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_172->c_value,right_value_175->c_value));
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj85=come_value_176->type,
    come_value_176->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 808, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_176->var=((void*)0);
    add_come_last_code(info,"%s",come_value_176->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_176));
    __result_obj__86 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__86;
}

static void sEqNode_finalize(struct sEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj86;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj87;
struct sNotEqNode* __result_obj__87;
    ((struct sNodeBase*)(__right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj86=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj86 ? __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj87=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__87 = (struct sNotEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNotEqNode_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __right_value204 = (void*)0;
char* __result_obj__88;
    __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string("sNotEqNode"))));
    (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__88;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_177;
_Bool Value_178;
void* __right_value205 = (void*)0;
struct CVALUE* left_value_179;
struct sNode* right_node_180;
_Bool Value_181;
_Bool __result_obj__89;
void* __right_value206 = (void*)0;
struct CVALUE* right_value_182;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value209 = (void*)0;
char* __dec_obj88;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__90;
    left_node_177=self->mLeft;
    Value_178=node_compile(left_node_177,info);
    if(    !Value_178    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_179=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_180=self->mRight;
    Value_181=node_compile(right_node_180,info);
    if(    !Value_181    ) {
        __result_obj__89 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__89;
    }
    else {
    }
    right_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 854, "struct CVALUE*"))));
    __dec_obj88=come_value_183->c_value,
    come_value_183->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_179->c_value,right_value_182->c_value));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj89=come_value_183->type,
    come_value_183->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 857, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_183->var=((void*)0);
    add_come_last_code(info,"%s",come_value_183->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
    __result_obj__90 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__90;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value215 = (void*)0;
struct sNode* __dec_obj91;
struct sEq2Node* __result_obj__91;
    ((struct sNodeBase*)(__right_value213=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value213, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj90=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj91=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__91 = (struct sEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sEq2Node_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __right_value216 = (void*)0;
char* __result_obj__92;
    __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("sEq2Node"))));
    (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_184;
_Bool Value_185;
_Bool __result_obj__93;
void* __right_value217 = (void*)0;
struct CVALUE* left_value_186;
struct sNode* right_node_187;
_Bool Value_188;
_Bool __result_obj__94;
void* __right_value218 = (void*)0;
struct CVALUE* right_value_189;
struct sType* type_190;
char* fun_name_191;
_Bool calling_fun_192;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct CVALUE* come_value_193;
void* __right_value221 = (void*)0;
char* __dec_obj92;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__95;
memset(&calling_fun_192, 0, sizeof(_Bool));
    left_node_184=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_185=node_compile(left_node_184,info);
    if(    !Value_185    ) {
        __result_obj__93 = (_Bool)0;
        ((left_node_184) ? left_node_184 = come_decrement_ref_count(left_node_184, ((struct sNode*)left_node_184)->finalize, ((struct sNode*)left_node_184)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__93;
    }
    else {
    }
    left_value_186=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_187=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_188=node_compile(right_node_187,info);
    if(    !Value_188    ) {
        __result_obj__94 = (_Bool)0;
        ((left_node_184) ? left_node_184 = come_decrement_ref_count(left_node_184, ((struct sNode*)left_node_184)->finalize, ((struct sNode*)left_node_184)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_187) ? right_node_187 = come_decrement_ref_count(right_node_187, ((struct sNode*)right_node_187)->finalize, ((struct sNode*)right_node_187)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__94;
    }
    else {
    }
    right_value_189=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_190=(struct sType*)come_increment_ref_count(left_value_186->type);
    fun_name_191="operator_equals";
    if(    self->mQuote    ) {
        calling_fun_192=(_Bool)0;
    }
    else {
        calling_fun_192=operator_overload_fun((struct sType*)come_increment_ref_count(type_190),fun_name_191,(struct sNode*)come_increment_ref_count(left_node_184),(struct sNode*)come_increment_ref_count(right_node_187),(struct CVALUE*)come_increment_ref_count(left_value_186),(struct CVALUE*)come_increment_ref_count(right_value_189),(_Bool)0,info);
    }
    if(    !calling_fun_192    ) {
        come_value_193=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 916, "struct CVALUE*"))));
        __dec_obj92=come_value_193->c_value,
        come_value_193->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_186->c_value,right_value_189->c_value));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj93=come_value_193->type,
        come_value_193->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 919, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_193->var=((void*)0);
        add_come_last_code(info,"%s",come_value_193->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
        come_call_finalizer(CVALUE_finalize, come_value_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__95 = (_Bool)1;
    ((left_node_184) ? left_node_184 = come_decrement_ref_count(left_node_184, ((struct sNode*)left_node_184)->finalize, ((struct sNode*)left_node_184)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_187) ? right_node_187 = come_decrement_ref_count(right_node_187, ((struct sNode*)right_node_187)->finalize, ((struct sNode*)right_node_187)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__95;
}

static void sEq2Node_finalize(struct sEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sNode* __dec_obj94;
void* __right_value227 = (void*)0;
struct sNode* __dec_obj95;
struct sNotEq2Node* __result_obj__96;
    ((struct sNodeBase*)(__right_value225=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value225, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj94=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj95=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__96 = (struct sNotEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __right_value228 = (void*)0;
char* __result_obj__97;
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string("sNotEq2Node"))));
    (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__97;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_194;
_Bool Value_195;
_Bool __result_obj__98;
void* __right_value229 = (void*)0;
struct CVALUE* left_value_196;
struct sNode* right_node_197;
_Bool Value_198;
_Bool __result_obj__99;
void* __right_value230 = (void*)0;
struct CVALUE* right_value_199;
struct sType* type_200;
char* fun_name_201;
_Bool calling_fun_202;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct CVALUE* come_value_203;
void* __right_value233 = (void*)0;
char* __dec_obj96;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__100;
memset(&calling_fun_202, 0, sizeof(_Bool));
    left_node_194=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_195=node_compile(left_node_194,info);
    if(    !Value_195    ) {
        __result_obj__98 = (_Bool)0;
        ((left_node_194) ? left_node_194 = come_decrement_ref_count(left_node_194, ((struct sNode*)left_node_194)->finalize, ((struct sNode*)left_node_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__98;
    }
    else {
    }
    left_value_196=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_197=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_198=node_compile(right_node_197,info);
    if(    !Value_198    ) {
        __result_obj__99 = (_Bool)0;
        ((left_node_194) ? left_node_194 = come_decrement_ref_count(left_node_194, ((struct sNode*)left_node_194)->finalize, ((struct sNode*)left_node_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_197) ? right_node_197 = come_decrement_ref_count(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__99;
    }
    else {
    }
    right_value_199=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_200=(struct sType*)come_increment_ref_count(left_value_196->type);
    fun_name_201="operator_not_equals";
    if(    self->mQuote    ) {
        calling_fun_202=(_Bool)0;
    }
    else {
        calling_fun_202=operator_overload_fun((struct sType*)come_increment_ref_count(type_200),fun_name_201,(struct sNode*)come_increment_ref_count(left_node_194),(struct sNode*)come_increment_ref_count(right_node_197),(struct CVALUE*)come_increment_ref_count(left_value_196),(struct CVALUE*)come_increment_ref_count(right_value_199),(_Bool)0,info);
    }
    if(    !calling_fun_202    ) {
        come_value_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 978, "struct CVALUE*"))));
        __dec_obj96=come_value_203->c_value,
        come_value_203->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_196->c_value,right_value_199->c_value));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj97=come_value_203->type,
        come_value_203->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 981, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_203->var=((void*)0);
        add_come_last_code(info,"%s",come_value_203->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
        come_call_finalizer(CVALUE_finalize, come_value_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__100 = (_Bool)1;
    ((left_node_194) ? left_node_194 = come_decrement_ref_count(left_node_194, ((struct sNode*)left_node_194)->finalize, ((struct sNode*)left_node_194)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_197) ? right_node_197 = come_decrement_ref_count(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__100;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sNode* __dec_obj98;
void* __right_value239 = (void*)0;
struct sNode* __dec_obj99;
struct sAndNode* __result_obj__101;
    ((struct sNodeBase*)(__right_value237=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value237, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj98=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj99=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__101 = (struct sAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndNode_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

char* sAndNode_kind(struct sAndNode* self){
void* __right_value240 = (void*)0;
char* __result_obj__102;
    __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value240=__builtin_string("sAndNode"))));
    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__102;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_204;
_Bool Value_205;
_Bool __result_obj__103;
void* __right_value241 = (void*)0;
struct CVALUE* left_value_206;
struct sNode* right_node_207;
_Bool Value_208;
_Bool __result_obj__104;
void* __right_value242 = (void*)0;
struct CVALUE* right_value_209;
struct sType* type_210;
char* fun_name_211;
_Bool calling_fun_212;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_213;
void* __right_value245 = (void*)0;
char* __dec_obj100;
void* __right_value246 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__105;
memset(&calling_fun_212, 0, sizeof(_Bool));
    left_node_204=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_205=node_compile(left_node_204,info);
    if(    !Value_205    ) {
        __result_obj__103 = (_Bool)0;
        ((left_node_204) ? left_node_204 = come_decrement_ref_count(left_node_204, ((struct sNode*)left_node_204)->finalize, ((struct sNode*)left_node_204)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__103;
    }
    else {
    }
    left_value_206=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_207=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_208=node_compile(right_node_207,info);
    if(    !Value_208    ) {
        __result_obj__104 = (_Bool)0;
        ((left_node_204) ? left_node_204 = come_decrement_ref_count(left_node_204, ((struct sNode*)left_node_204)->finalize, ((struct sNode*)left_node_204)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_207) ? right_node_207 = come_decrement_ref_count(right_node_207, ((struct sNode*)right_node_207)->finalize, ((struct sNode*)right_node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__104;
    }
    else {
    }
    right_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_210=(struct sType*)come_increment_ref_count(left_value_206->type);
    fun_name_211="operator_and";
    if(    self->mQuote    ) {
        calling_fun_212=(_Bool)0;
    }
    else {
        calling_fun_212=operator_overload_fun((struct sType*)come_increment_ref_count(type_210),fun_name_211,(struct sNode*)come_increment_ref_count(left_node_204),(struct sNode*)come_increment_ref_count(right_node_207),(struct CVALUE*)come_increment_ref_count(left_value_206),(struct CVALUE*)come_increment_ref_count(right_value_209),(_Bool)0,info);
    }
    if(    !calling_fun_212    ) {
        come_value_213=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1041, "struct CVALUE*"))));
        __dec_obj100=come_value_213->c_value,
        come_value_213->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_206->c_value,right_value_209->c_value));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj101=come_value_213->type,
        come_value_213->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_206->type));
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_213->type->mHeap=(_Bool)0;
        come_value_213->var=((void*)0);
        add_come_last_code(info,"%s",come_value_213->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
        come_call_finalizer(CVALUE_finalize, come_value_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__105 = (_Bool)1;
    ((left_node_204) ? left_node_204 = come_decrement_ref_count(left_node_204, ((struct sNode*)left_node_204)->finalize, ((struct sNode*)left_node_204)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_207) ? right_node_207 = come_decrement_ref_count(right_node_207, ((struct sNode*)right_node_207)->finalize, ((struct sNode*)right_node_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__105;
}

static void sAndNode_finalize(struct sAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sNode* __dec_obj102;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj103;
struct sXOrNode* __result_obj__106;
    ((struct sNodeBase*)(__right_value247=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value247, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj102=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj103=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__106 = (struct sXOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sXOrNode_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __right_value250 = (void*)0;
char* __result_obj__107;
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value250=__builtin_string("sXOrNode"))));
    (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_214;
_Bool Value_215;
_Bool __result_obj__108;
void* __right_value251 = (void*)0;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool Value_218;
_Bool __result_obj__109;
void* __right_value252 = (void*)0;
struct CVALUE* right_value_219;
struct sType* type_220;
char* fun_name_221;
_Bool calling_fun_222;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_223;
void* __right_value255 = (void*)0;
char* __dec_obj104;
void* __right_value256 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__110;
memset(&calling_fun_222, 0, sizeof(_Bool));
    left_node_214=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_215=node_compile(left_node_214,info);
    if(    !Value_215    ) {
        __result_obj__108 = (_Bool)0;
        ((left_node_214) ? left_node_214 = come_decrement_ref_count(left_node_214, ((struct sNode*)left_node_214)->finalize, ((struct sNode*)left_node_214)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__108;
    }
    else {
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_217=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_218=node_compile(right_node_217,info);
    if(    !Value_218    ) {
        __result_obj__109 = (_Bool)0;
        ((left_node_214) ? left_node_214 = come_decrement_ref_count(left_node_214, ((struct sNode*)left_node_214)->finalize, ((struct sNode*)left_node_214)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_217) ? right_node_217 = come_decrement_ref_count(right_node_217, ((struct sNode*)right_node_217)->finalize, ((struct sNode*)right_node_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__109;
    }
    else {
    }
    right_value_219=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_220=(struct sType*)come_increment_ref_count(left_value_216->type);
    fun_name_221="operator_xor";
    if(    self->mQuote    ) {
        calling_fun_222=(_Bool)0;
    }
    else {
        calling_fun_222=operator_overload_fun((struct sType*)come_increment_ref_count(type_220),fun_name_221,(struct sNode*)come_increment_ref_count(left_node_214),(struct sNode*)come_increment_ref_count(right_node_217),(struct CVALUE*)come_increment_ref_count(left_value_216),(struct CVALUE*)come_increment_ref_count(right_value_219),(_Bool)0,info);
    }
    if(    !calling_fun_222    ) {
        come_value_223=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1104, "struct CVALUE*"))));
        __dec_obj104=come_value_223->c_value,
        come_value_223->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_216->c_value,right_value_219->c_value));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj105=come_value_223->type,
        come_value_223->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_216->type));
        come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_223->type->mHeap=(_Bool)0;
        come_value_223->var=((void*)0);
        add_come_last_code(info,"%s",come_value_223->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_223));
        come_call_finalizer(CVALUE_finalize, come_value_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__110 = (_Bool)1;
    ((left_node_214) ? left_node_214 = come_decrement_ref_count(left_node_214, ((struct sNode*)left_node_214)->finalize, ((struct sNode*)left_node_214)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_217) ? right_node_217 = come_decrement_ref_count(right_node_217, ((struct sNode*)right_node_217)->finalize, ((struct sNode*)right_node_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__110;
}

static void sXOrNode_finalize(struct sXOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value259 = (void*)0;
struct sNode* __dec_obj107;
struct sOrNode* __result_obj__111;
    ((struct sNodeBase*)(__right_value257=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj106=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj107=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__111 = (struct sOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrNode_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

char* sOrNode_kind(struct sOrNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__112;
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value260=__builtin_string("sOrNode"))));
    (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_224;
_Bool Value_225;
_Bool __result_obj__113;
void* __right_value261 = (void*)0;
struct CVALUE* left_value_226;
struct sNode* right_node_227;
_Bool Value_228;
_Bool __result_obj__114;
void* __right_value262 = (void*)0;
struct CVALUE* right_value_229;
struct sType* type_230;
char* fun_name_231;
_Bool calling_fun_232;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_233;
void* __right_value265 = (void*)0;
char* __dec_obj108;
void* __right_value266 = (void*)0;
struct sType* __dec_obj109;
_Bool __result_obj__115;
memset(&calling_fun_232, 0, sizeof(_Bool));
    left_node_224=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_225=node_compile(left_node_224,info);
    if(    !Value_225    ) {
        __result_obj__113 = (_Bool)0;
        ((left_node_224) ? left_node_224 = come_decrement_ref_count(left_node_224, ((struct sNode*)left_node_224)->finalize, ((struct sNode*)left_node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__113;
    }
    else {
    }
    left_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_227=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_228=node_compile(right_node_227,info);
    if(    !Value_228    ) {
        __result_obj__114 = (_Bool)0;
        ((left_node_224) ? left_node_224 = come_decrement_ref_count(left_node_224, ((struct sNode*)left_node_224)->finalize, ((struct sNode*)left_node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_227) ? right_node_227 = come_decrement_ref_count(right_node_227, ((struct sNode*)right_node_227)->finalize, ((struct sNode*)right_node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__114;
    }
    else {
    }
    right_value_229=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_230=(struct sType*)come_increment_ref_count(left_value_226->type);
    fun_name_231="operator_or";
    if(    self->mQuote    ) {
        calling_fun_232=(_Bool)0;
    }
    else {
        calling_fun_232=operator_overload_fun((struct sType*)come_increment_ref_count(type_230),fun_name_231,(struct sNode*)come_increment_ref_count(left_node_224),(struct sNode*)come_increment_ref_count(right_node_227),(struct CVALUE*)come_increment_ref_count(left_value_226),(struct CVALUE*)come_increment_ref_count(right_value_229),(_Bool)0,info);
    }
    if(    !calling_fun_232    ) {
        come_value_233=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1168, "struct CVALUE*"))));
        __dec_obj108=come_value_233->c_value,
        come_value_233->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_226->c_value,right_value_229->c_value));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj109=come_value_233->type,
        come_value_233->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_226->type));
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_233->type->mHeap=(_Bool)0;
        come_value_233->var=((void*)0);
        add_come_last_code(info,"%s",come_value_233->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
        come_call_finalizer(CVALUE_finalize, come_value_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__115 = (_Bool)1;
    ((left_node_224) ? left_node_224 = come_decrement_ref_count(left_node_224, ((struct sNode*)left_node_224)->finalize, ((struct sNode*)left_node_224)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_227) ? right_node_227 = come_decrement_ref_count(right_node_227, ((struct sNode*)right_node_227)->finalize, ((struct sNode*)right_node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__115;
}

static void sOrNode_finalize(struct sOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* __dec_obj110;
void* __right_value269 = (void*)0;
struct sNode* __dec_obj111;
struct sAndAndNode* __result_obj__116;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value267, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj110=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj111=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__116 = (struct sAndAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndAndNode_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __right_value270 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value270=__builtin_string("sAndAndNode"))));
    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_234;
_Bool Value_235;
_Bool __result_obj__118;
void* __right_value271 = (void*)0;
struct CVALUE* left_value_236;
struct sNode* right_node_237;
_Bool Value_238;
_Bool __result_obj__119;
void* __right_value272 = (void*)0;
struct CVALUE* right_value_239;
struct sType* type_240;
char* fun_name_241;
_Bool calling_fun_242;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct CVALUE* come_value_243;
void* __right_value275 = (void*)0;
char* __dec_obj112;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj113;
_Bool __result_obj__120;
memset(&calling_fun_242, 0, sizeof(_Bool));
    left_node_234=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_235=node_compile(left_node_234,info);
    if(    !Value_235    ) {
        __result_obj__118 = (_Bool)0;
        ((left_node_234) ? left_node_234 = come_decrement_ref_count(left_node_234, ((struct sNode*)left_node_234)->finalize, ((struct sNode*)left_node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__118;
    }
    else {
    }
    left_value_236=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_237=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_238=node_compile(right_node_237,info);
    if(    !Value_238    ) {
        __result_obj__119 = (_Bool)0;
        ((left_node_234) ? left_node_234 = come_decrement_ref_count(left_node_234, ((struct sNode*)left_node_234)->finalize, ((struct sNode*)left_node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_237) ? right_node_237 = come_decrement_ref_count(right_node_237, ((struct sNode*)right_node_237)->finalize, ((struct sNode*)right_node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__119;
    }
    else {
    }
    right_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_240=(struct sType*)come_increment_ref_count(left_value_236->type);
    fun_name_241="operator_andand";
    if(    self->mQuote    ) {
        calling_fun_242=(_Bool)0;
    }
    else {
        calling_fun_242=operator_overload_fun((struct sType*)come_increment_ref_count(type_240),fun_name_241,(struct sNode*)come_increment_ref_count(left_node_234),(struct sNode*)come_increment_ref_count(right_node_237),(struct CVALUE*)come_increment_ref_count(left_value_236),(struct CVALUE*)come_increment_ref_count(right_value_239),(_Bool)0,info);
    }
    if(    !calling_fun_242    ) {
        come_value_243=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1232, "struct CVALUE*"))));
        __dec_obj112=come_value_243->c_value,
        come_value_243->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_236->c_value,right_value_239->c_value));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj113=come_value_243->type,
        come_value_243->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1235, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_243->var=left_value_236->var;
        add_come_last_code(info,"%s",come_value_243->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_243));
        come_call_finalizer(CVALUE_finalize, come_value_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__120 = (_Bool)1;
    ((left_node_234) ? left_node_234 = come_decrement_ref_count(left_node_234, ((struct sNode*)left_node_234)->finalize, ((struct sNode*)left_node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_237) ? right_node_237 = come_decrement_ref_count(right_node_237, ((struct sNode*)right_node_237)->finalize, ((struct sNode*)right_node_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__120;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj115;
struct sOrOrNode* __result_obj__121;
    ((struct sNodeBase*)(__right_value279=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __dec_obj114=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj115=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__121 = (struct sOrOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrOrNode_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __right_value282 = (void*)0;
char* __result_obj__122;
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value282=__builtin_string("sOrOrNode"))));
    (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_244;
_Bool Value_245;
_Bool __result_obj__123;
void* __right_value283 = (void*)0;
struct CVALUE* left_value_246;
struct sNode* right_node_247;
_Bool Value_248;
_Bool __result_obj__124;
void* __right_value284 = (void*)0;
struct CVALUE* right_value_249;
struct sType* type_250;
char* fun_name_251;
_Bool calling_fun_252;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value_253;
void* __right_value287 = (void*)0;
char* __dec_obj116;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__125;
memset(&calling_fun_252, 0, sizeof(_Bool));
    left_node_244=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_245=node_compile(left_node_244,info);
    if(    !Value_245    ) {
        __result_obj__123 = (_Bool)0;
        ((left_node_244) ? left_node_244 = come_decrement_ref_count(left_node_244, ((struct sNode*)left_node_244)->finalize, ((struct sNode*)left_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__123;
    }
    else {
    }
    left_value_246=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_247=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_248=node_compile(right_node_247,info);
    if(    !Value_248    ) {
        __result_obj__124 = (_Bool)0;
        ((left_node_244) ? left_node_244 = come_decrement_ref_count(left_node_244, ((struct sNode*)left_node_244)->finalize, ((struct sNode*)left_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((right_node_247) ? right_node_247 = come_decrement_ref_count(right_node_247, ((struct sNode*)right_node_247)->finalize, ((struct sNode*)right_node_247)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__124;
    }
    else {
    }
    right_value_249=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_250=(struct sType*)come_increment_ref_count(left_value_246->type);
    fun_name_251="operator_oror";
    if(    self->mQuote    ) {
        calling_fun_252=(_Bool)0;
    }
    else {
        calling_fun_252=operator_overload_fun((struct sType*)come_increment_ref_count(type_250),fun_name_251,(struct sNode*)come_increment_ref_count(left_node_244),(struct sNode*)come_increment_ref_count(right_node_247),(struct CVALUE*)come_increment_ref_count(left_value_246),(struct CVALUE*)come_increment_ref_count(right_value_249),(_Bool)0,info);
    }
    if(    !calling_fun_252    ) {
        come_value_253=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1294, "struct CVALUE*"))));
        __dec_obj116=come_value_253->c_value,
        come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_246->c_value,right_value_249->c_value));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj117=come_value_253->type,
        come_value_253->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1297, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_253->var=left_value_246->var;
        add_come_last_code(info,"%s",come_value_253->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
        come_call_finalizer(CVALUE_finalize, come_value_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__125 = (_Bool)1;
    ((left_node_244) ? left_node_244 = come_decrement_ref_count(left_node_244, ((struct sNode*)left_node_244)->finalize, ((struct sNode*)left_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((right_node_247) ? right_node_247 = come_decrement_ref_count(right_node_247, ((struct sNode*)right_node_247)->finalize, ((struct sNode*)right_node_247)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__125;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj119;
struct sCommaNode* __result_obj__126;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj118=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj119=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__126 = (struct sCommaNode*)come_increment_ref_count(self);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __right_value294 = (void*)0;
char* __result_obj__127;
    __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value294=__builtin_string("sCommaNode"))));
    (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_254;
_Bool Value_255;
void* __right_value295 = (void*)0;
struct CVALUE* left_value_256;
struct sNode* right_node_257;
_Bool Value_258;
_Bool __result_obj__128;
void* __right_value296 = (void*)0;
struct CVALUE* right_value_259;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_260;
void* __right_value299 = (void*)0;
char* __dec_obj120;
void* __right_value300 = (void*)0;
struct sType* __dec_obj121;
_Bool __result_obj__129;
    left_node_254=self->mLeft;
    Value_255=node_compile(left_node_254,info);
    if(    !Value_255    ) {
        return (_Bool)0;
    }
    else {
    }
    left_value_256=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_257=self->mRight;
    Value_258=node_compile(right_node_257,info);
    if(    !Value_258    ) {
        __result_obj__128 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__128;
    }
    else {
    }
    right_value_259=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_260=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1343, "struct CVALUE*"))));
    __dec_obj120=come_value_260->c_value,
    come_value_260->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_256->c_value,right_value_259->c_value));
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj121=come_value_260->type,
    come_value_260->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_256->type));
    come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_260->var=((void*)0);
    add_come_last_code(info,"%s",come_value_260->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_260));
    __result_obj__129 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_259, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__129;
}

static void sCommaNode_finalize(struct sCommaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj122;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj123;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj124;
struct sConditionalNode* __result_obj__130;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value301, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj122=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj123=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj124=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__130 = (struct sConditionalNode*)come_increment_ref_count(self);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __right_value305 = (void*)0;
char* __result_obj__131;
    __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value305=__builtin_string("sConditionalNode"))));
    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_261;
struct sNode* value1_262;
_Bool Value_263;
void* __right_value306 = (void*)0;
struct CVALUE* value1_value_264;
struct sNode* value2_265;
_Bool Value_266;
_Bool __result_obj__132;
void* __right_value307 = (void*)0;
struct CVALUE* value2_value_267;
struct sNode* value3_268;
_Bool Value_269;
_Bool __result_obj__133;
void* __right_value308 = (void*)0;
struct CVALUE* value3_value_270;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct CVALUE* come_value_271;
void* __right_value311 = (void*)0;
char* __dec_obj125;
void* __right_value312 = (void*)0;
struct sType* __dec_obj126;
_Bool __result_obj__134;
    in_conditional_operator_261=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_262=self->mValue1;
    Value_263=node_compile(value1_262,info);
    if(    !Value_263    ) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_264=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value2_265=self->mValue2;
    Value_266=node_compile(value2_265,info);
    if(    !Value_266    ) {
        __result_obj__132 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__132;
    }
    else {
    }
    value2_value_267=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value3_268=self->mValue3;
    Value_269=node_compile(value3_268,info);
    if(    !Value_269    ) {
        __result_obj__133 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, value2_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__133;
    }
    else {
    }
    value3_value_270=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_271=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1403, "struct CVALUE*"))));
    __dec_obj125=come_value_271->c_value,
    come_value_271->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_264->c_value,value2_value_267->c_value,value3_value_270->c_value));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj126=come_value_271->type,
    come_value_271->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_267->type));
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_271->var=((void*)0);
    add_come_last_code(info,"%s",come_value_271->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_271));
    info->in_conditional_operator=in_conditional_operator_261;
    __result_obj__134 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, value2_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, value3_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__134;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)    ) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)    ) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)    ) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value320 = (void*)0;
struct sNode* __result_obj__137;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1421, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value314=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1421, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__137 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value320=_inf_value2)));
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value314, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value320) ? __right_value320 = come_decrement_ref_count(__right_value320, ((struct sNode*)__right_value320)->finalize, ((struct sNode*)__right_value320)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__137) ? __result_obj__137 = come_decrement_ref_count(__result_obj__137, ((struct sNode*)__result_obj__137)->finalize, ((struct sNode*)__result_obj__137)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__137;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
struct sConditionalNode* __result_obj__135;
void* __right_value315 = (void*)0;
struct sConditionalNode* result_272;
void* __right_value316 = (void*)0;
char* __dec_obj127;
void* __right_value317 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj129;
void* __right_value319 = (void*)0;
struct sNode* __dec_obj130;
struct sConditionalNode* __result_obj__136;
    if(    self==(void*)0    ) {
        __result_obj__135 = (void*)0;
        return __result_obj__135;
    }
    result_272=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*"));
    if(    self!=((void*)0)    ) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj127=result_272->sname,
        result_272->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sConditionalNode_clone", 5, "char*"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)    ) {
        __dec_obj128=result_272->mValue1,
        result_272->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)    ) {
        __dec_obj129=result_272->mValue2,
        result_272->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)    ) {
        __dec_obj130=result_272->mValue3,
        result_272->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__136 = result_272;
    come_call_finalizer(sConditionalNode_finalize, result_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

struct sNode* mult_exp(struct sInfo* info){
void* __right_value321 = (void*)0;
struct sNode* node_273;
int sline_real_274;
void* __right_value322 = (void*)0;
struct sNode* right_275;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value329 = (void*)0;
struct sNode* __dec_obj134;
int sline_real_277;
void* __right_value330 = (void*)0;
struct sNode* right_278;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj138;
int sline_real_280;
void* __right_value338 = (void*)0;
struct sNode* right_281;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value345 = (void*)0;
struct sNode* __dec_obj142;
int sline_real_283;
void* __right_value346 = (void*)0;
struct sNode* right_284;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj143;
int sline_real_285;
void* __right_value350 = (void*)0;
struct sNode* right_286;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj144;
int sline_real_287;
void* __right_value354 = (void*)0;
struct sNode* right_288;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj145;
struct sNode* __result_obj__144;
    node_273=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !node_273->terminated(node_273->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_274=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_275=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_274;
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1441, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value324=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1441, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_275),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj134=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value324, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_275) ? right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42        ) {
            info->p++;
            sline_real_277=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_278=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_277;
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1452, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value332=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1452, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_278),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj138=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value332, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_278) ? right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==37&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_280=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_281=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_280;
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1463, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value340=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1463, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_281),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj142=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value5);
            (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value340, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_281) ? right_281 = come_decrement_ref_count(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !node_273->terminated(node_273->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_283=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_284=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_283;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1474, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value348=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1474, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_284),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj143=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value6);
            (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value348, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_284) ? right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_285=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_286=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_285;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1485, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value352=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1485, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_286),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj144=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value352, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_286) ? right_286 = come_decrement_ref_count(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_287=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_288=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_287;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1496, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value356=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1496, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_273),(struct sNode*)come_increment_ref_count(right_288),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj145=node_273,
            node_273=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_288) ? right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__144 = (struct sNode*)come_increment_ref_count(node_273);
    ((node_273) ? node_273 = come_decrement_ref_count(node_273, ((struct sNode*)node_273)->finalize, ((struct sNode*)node_273)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__144;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
struct sMultNode* __result_obj__138;
void* __right_value325 = (void*)0;
struct sMultNode* result_276;
void* __right_value326 = (void*)0;
char* __dec_obj131;
void* __right_value327 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value328 = (void*)0;
struct sNode* __dec_obj133;
struct sMultNode* __result_obj__139;
    if(    self==(void*)0    ) {
        __result_obj__138 = (void*)0;
        return __result_obj__138;
    }
    result_276=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*"));
    if(    self!=((void*)0)    ) {
        result_276->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj131=result_276->sname,
        result_276->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMultNode_clone", 5, "char*"));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_276->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_276->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj132=result_276->mLeft,
        result_276->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj133=result_276->mRight,
        result_276->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__139 = result_276;
    come_call_finalizer(sMultNode_finalize, result_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
struct sDivNode* __result_obj__140;
void* __right_value333 = (void*)0;
struct sDivNode* result_279;
void* __right_value334 = (void*)0;
char* __dec_obj135;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj136;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj137;
struct sDivNode* __result_obj__141;
    if(    self==(void*)0    ) {
        __result_obj__140 = (void*)0;
        return __result_obj__140;
    }
    result_279=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*"));
    if(    self!=((void*)0)    ) {
        result_279->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj135=result_279->sname,
        result_279->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDivNode_clone", 5, "char*"));
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_279->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_279->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj136=result_279->mLeft,
        result_279->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj137=result_279->mRight,
        result_279->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__141 = result_279;
    come_call_finalizer(sDivNode_finalize, result_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
struct sModNode* __result_obj__142;
void* __right_value341 = (void*)0;
struct sModNode* result_282;
void* __right_value342 = (void*)0;
char* __dec_obj139;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj141;
struct sModNode* __result_obj__143;
    if(    self==(void*)0    ) {
        __result_obj__142 = (void*)0;
        return __result_obj__142;
    }
    result_282=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*"));
    if(    self!=((void*)0)    ) {
        result_282->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj139=result_282->sname,
        result_282->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sModNode_clone", 5, "char*"));
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_282->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_282->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj140=result_282->mLeft,
        result_282->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj141=result_282->mRight,
        result_282->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__143 = result_282;
    come_call_finalizer(sModNode_finalize, result_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

struct sNode* add_exp(struct sInfo* info){
void* __right_value358 = (void*)0;
struct sNode* node_289;
int sline_real_290;
void* __right_value359 = (void*)0;
struct sNode* right_291;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj149;
int sline_real_293;
void* __right_value367 = (void*)0;
struct sNode* right_294;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj153;
int sline_real_296;
void* __right_value375 = (void*)0;
struct sNode* right_297;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj154;
int sline_real_298;
void* __right_value379 = (void*)0;
struct sNode* right_299;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value382 = (void*)0;
struct sNode* __dec_obj155;
struct sNode* __result_obj__149;
    node_289=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43        ) {
            info->p++;
            sline_real_290=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_291=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_290;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1525, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value361=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1525, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_291),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj149=node_289,
            node_289=(struct sNode*)come_increment_ref_count(_inf_value9);
            (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value361, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_291) ? right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62        ) {
            info->p++;
            sline_real_293=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_294=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_293;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1537, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value369=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1537, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_294),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj153=node_289,
            node_289=(struct sNode*)come_increment_ref_count(_inf_value10);
            (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value369, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_294) ? right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43        ) {
            info->p+=2;
            sline_real_296=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_297=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_296;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1549, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value377=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1549, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_297),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj154=node_289,
            node_289=(struct sNode*)come_increment_ref_count(_inf_value11);
            (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value377, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_297) ? right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_298=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_299=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_298;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1561, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value381=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1561, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_299),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj155=node_289,
            node_289=(struct sNode*)come_increment_ref_count(_inf_value12);
            (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value381, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_299) ? right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__149 = (struct sNode*)come_increment_ref_count(node_289);
    ((node_289) ? node_289 = come_decrement_ref_count(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__149) ? __result_obj__149 = come_decrement_ref_count(__result_obj__149, ((struct sNode*)__result_obj__149)->finalize, ((struct sNode*)__result_obj__149)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__149;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
struct sAddNode* __result_obj__145;
void* __right_value362 = (void*)0;
struct sAddNode* result_292;
void* __right_value363 = (void*)0;
char* __dec_obj146;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj147;
void* __right_value365 = (void*)0;
struct sNode* __dec_obj148;
struct sAddNode* __result_obj__146;
    if(    self==(void*)0    ) {
        __result_obj__145 = (void*)0;
        return __result_obj__145;
    }
    result_292=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*"));
    if(    self!=((void*)0)    ) {
        result_292->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj146=result_292->sname,
        result_292->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAddNode_clone", 5, "char*"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_292->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj147=result_292->mLeft,
        result_292->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj148=result_292->mRight,
        result_292->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_292->mQuote=self->mQuote;
    }
    __result_obj__146 = result_292;
    come_call_finalizer(sAddNode_finalize, result_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
struct sSubNode* __result_obj__147;
void* __right_value370 = (void*)0;
struct sSubNode* result_295;
void* __right_value371 = (void*)0;
char* __dec_obj150;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj152;
struct sSubNode* __result_obj__148;
    if(    self==(void*)0    ) {
        __result_obj__147 = (void*)0;
        return __result_obj__147;
    }
    result_295=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*"));
    if(    self!=((void*)0)    ) {
        result_295->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj150=result_295->sname,
        result_295->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSubNode_clone", 5, "char*"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_295->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj151=result_295->mLeft,
        result_295->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj152=result_295->mRight,
        result_295->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_295->mQuote=self->mQuote;
    }
    __result_obj__148 = result_295;
    come_call_finalizer(sSubNode_finalize, result_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct sNode* shift_exp(struct sInfo* info){
void* __right_value383 = (void*)0;
struct sNode* node_300;
int sline_real_301;
void* __right_value384 = (void*)0;
struct sNode* right_302;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value391 = (void*)0;
struct sNode* __dec_obj159;
int sline_real_304;
void* __right_value392 = (void*)0;
struct sNode* right_305;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj163;
int sline_real_307;
void* __right_value400 = (void*)0;
struct sNode* right_308;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj164;
int sline_real_309;
void* __right_value404 = (void*)0;
struct sNode* right_310;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value407 = (void*)0;
struct sNode* __dec_obj165;
struct sNode* __result_obj__154;
    parse_sharp_v5(info);
    node_300=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_301=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_302=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_301;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1591, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value386=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1591, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_302),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj159=node_300,
            node_300=(struct sNode*)come_increment_ref_count(_inf_value13);
            (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value386, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_302) ? right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_304=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_305=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_304;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1602, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value394=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1602, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_305),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj163=node_300,
            node_300=(struct sNode*)come_increment_ref_count(_inf_value14);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value394, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_305) ? right_305 = come_decrement_ref_count(right_305, ((struct sNode*)right_305)->finalize, ((struct sNode*)right_305)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61        ) {
            info->p+=3;
            sline_real_307=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_308=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_307;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1613, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value402=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1613, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj164=node_300,
            node_300=(struct sNode*)come_increment_ref_count(_inf_value15);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value402, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_308) ? right_308 = come_decrement_ref_count(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62        ) {
            info->p+=3;
            sline_real_309=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_310=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_309;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1624, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value406=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1624, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_310),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            _inf_value16->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj165=node_300,
            node_300=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value406, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_310) ? right_310 = come_decrement_ref_count(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__154 = (struct sNode*)come_increment_ref_count(node_300);
    ((node_300) ? node_300 = come_decrement_ref_count(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__154) ? __result_obj__154 = come_decrement_ref_count(__result_obj__154, ((struct sNode*)__result_obj__154)->finalize, ((struct sNode*)__result_obj__154)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__154;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
struct sLShiftNode* __result_obj__150;
void* __right_value387 = (void*)0;
struct sLShiftNode* result_303;
void* __right_value388 = (void*)0;
char* __dec_obj156;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj157;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj158;
struct sLShiftNode* __result_obj__151;
    if(    self==(void*)0    ) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_303=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*"));
    if(    self!=((void*)0)    ) {
        result_303->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj156=result_303->sname,
        result_303->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLShiftNode_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_303->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_303->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj157=result_303->mLeft,
        result_303->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj158=result_303->mRight,
        result_303->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__151 = result_303;
    come_call_finalizer(sLShiftNode_finalize, result_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
struct sRShiftNode* __result_obj__152;
void* __right_value395 = (void*)0;
struct sRShiftNode* result_306;
void* __right_value396 = (void*)0;
char* __dec_obj160;
void* __right_value397 = (void*)0;
struct sNode* __dec_obj161;
void* __right_value398 = (void*)0;
struct sNode* __dec_obj162;
struct sRShiftNode* __result_obj__153;
    if(    self==(void*)0    ) {
        __result_obj__152 = (void*)0;
        return __result_obj__152;
    }
    result_306=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*"));
    if(    self!=((void*)0)    ) {
        result_306->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj160=result_306->sname,
        result_306->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRShiftNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_306->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_306->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj161=result_306->mLeft,
        result_306->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj162=result_306->mRight,
        result_306->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__153 = result_306;
    come_call_finalizer(sRShiftNode_finalize, result_306, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __right_value408 = (void*)0;
struct sNode* node_311;
int sline_real_312;
void* __right_value409 = (void*)0;
struct sNode* right_313;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value416 = (void*)0;
struct sNode* __dec_obj169;
int sline_real_315;
void* __right_value417 = (void*)0;
struct sNode* right_316;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj173;
int sline_real_318;
void* __right_value425 = (void*)0;
struct sNode* right_319;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj177;
int sline_real_321;
void* __right_value433 = (void*)0;
struct sNode* right_322;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value440 = (void*)0;
struct sNode* __dec_obj181;
int sline_real_324;
void* __right_value441 = (void*)0;
struct sNode* right_325;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj182;
int sline_real_326;
void* __right_value445 = (void*)0;
struct sNode* right_327;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj183;
int sline_real_328;
void* __right_value449 = (void*)0;
struct sNode* right_329;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj184;
int sline_real_330;
void* __right_value453 = (void*)0;
struct sNode* right_331;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj185;
struct sNode* __result_obj__163;
    parse_sharp_v5(info);
    node_311=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==62&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_312=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_313=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_312;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1654, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value411=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1654, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_313),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj169=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value411, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_313) ? right_313 = come_decrement_ref_count(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_315=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_316=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_315;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1665, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value419=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1665, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_316),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj173=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value18);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value419, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_316) ? right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)!=62        ) {
            info->p++;
            sline_real_318=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_319=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_318;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1676, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value427=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1676, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_319),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj177=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value427, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_319) ? right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45        ) {
            info->p++;
            sline_real_321=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_322=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_321;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1687, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value435=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1687, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            _inf_value20->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj181=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value20);
            (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value435, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_322) ? right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_324=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_325=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_324;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1698, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value443=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1698, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_325),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            _inf_value21->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj182=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value21);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value443, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_325) ? right_325 = come_decrement_ref_count(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_326=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_327=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_326;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1709, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value447=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1709, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_327),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            _inf_value22->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj183=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value22);
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value447, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_327) ? right_327 = come_decrement_ref_count(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62        ) {
            info->p+=2;
            sline_real_328=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_329=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_328;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1720, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value451=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1720, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_329),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            _inf_value23->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj184=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value23);
            (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value451, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_329) ? right_329 = come_decrement_ref_count(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45        ) {
            info->p+=2;
            sline_real_330=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_331=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_330;
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1731, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value455=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1731, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_331),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            _inf_value24->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj185=node_311,
            node_311=(struct sNode*)come_increment_ref_count(_inf_value24);
            (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value455, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_331) ? right_331 = come_decrement_ref_count(right_331, ((struct sNode*)right_331)->finalize, ((struct sNode*)right_331)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__163 = (struct sNode*)come_increment_ref_count(node_311);
    ((node_311) ? node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__163;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
struct sGtEqNode* __result_obj__155;
void* __right_value412 = (void*)0;
struct sGtEqNode* result_314;
void* __right_value413 = (void*)0;
char* __dec_obj166;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value415 = (void*)0;
struct sNode* __dec_obj168;
struct sGtEqNode* __result_obj__156;
    if(    self==(void*)0    ) {
        __result_obj__155 = (void*)0;
        return __result_obj__155;
    }
    result_314=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*"));
    if(    self!=((void*)0)    ) {
        result_314->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj166=result_314->sname,
        result_314->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtEqNode_clone", 5, "char*"));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_314->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_314->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj167=result_314->mLeft,
        result_314->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj168=result_314->mRight,
        result_314->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__156 = result_314;
    come_call_finalizer(sGtEqNode_finalize, result_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
struct sLtEqNode* __result_obj__157;
void* __right_value420 = (void*)0;
struct sLtEqNode* result_317;
void* __right_value421 = (void*)0;
char* __dec_obj170;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj172;
struct sLtEqNode* __result_obj__158;
    if(    self==(void*)0    ) {
        __result_obj__157 = (void*)0;
        return __result_obj__157;
    }
    result_317=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*"));
    if(    self!=((void*)0)    ) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj170=result_317->sname,
        result_317->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtEqNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_317->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_317->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj171=result_317->mLeft,
        result_317->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj172=result_317->mRight,
        result_317->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__158 = result_317;
    come_call_finalizer(sLtEqNode_finalize, result_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
struct sGtNode* __result_obj__159;
void* __right_value428 = (void*)0;
struct sGtNode* result_320;
void* __right_value429 = (void*)0;
char* __dec_obj174;
void* __right_value430 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value431 = (void*)0;
struct sNode* __dec_obj176;
struct sGtNode* __result_obj__160;
    if(    self==(void*)0    ) {
        __result_obj__159 = (void*)0;
        return __result_obj__159;
    }
    result_320=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*"));
    if(    self!=((void*)0)    ) {
        result_320->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj174=result_320->sname,
        result_320->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtNode_clone", 5, "char*"));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_320->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_320->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj175=result_320->mLeft,
        result_320->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj176=result_320->mRight,
        result_320->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__160 = result_320;
    come_call_finalizer(sGtNode_finalize, result_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
struct sLtNode* __result_obj__161;
void* __right_value436 = (void*)0;
struct sLtNode* result_323;
void* __right_value437 = (void*)0;
char* __dec_obj178;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj180;
struct sLtNode* __result_obj__162;
    if(    self==(void*)0    ) {
        __result_obj__161 = (void*)0;
        return __result_obj__161;
    }
    result_323=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*"));
    if(    self!=((void*)0)    ) {
        result_323->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj178=result_323->sname,
        result_323->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtNode_clone", 5, "char*"));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_323->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_323->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj179=result_323->mLeft,
        result_323->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj180=result_323->mRight,
        result_323->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__162 = result_323;
    come_call_finalizer(sLtNode_finalize, result_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

struct sNode* eq_exp(struct sInfo* info){
void* __right_value457 = (void*)0;
struct sNode* node_332;
int sline_real_333;
void* __right_value458 = (void*)0;
struct sNode* right_334;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj189;
int sline_real_336;
void* __right_value466 = (void*)0;
struct sNode* right_337;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj193;
int sline_real_339;
void* __right_value474 = (void*)0;
struct sNode* right_340;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj197;
int sline_real_342;
void* __right_value482 = (void*)0;
struct sNode* right_343;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value489 = (void*)0;
struct sNode* __dec_obj201;
int sline_real_345;
void* __right_value490 = (void*)0;
struct sNode* right_346;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj202;
int sline_real_347;
void* __right_value494 = (void*)0;
struct sNode* right_348;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value497 = (void*)0;
struct sNode* __dec_obj203;
int sline_real_349;
void* __right_value498 = (void*)0;
struct sNode* right_350;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj204;
int sline_real_351;
void* __right_value502 = (void*)0;
struct sNode* right_352;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj205;
struct sNode* __result_obj__172;
    parse_sharp_v5(info);
    node_332=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_333=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_334=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_333;
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1761, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value460=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1761, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_334),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            _inf_value25->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj189=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value25);
            (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value460, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_334) ? right_334 = come_decrement_ref_count(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==61&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_336=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_337=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_336;
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1772, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value468=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1772, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_337),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            _inf_value26->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj193=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value26);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value468, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_337) ? right_337 = come_decrement_ref_count(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_339=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_340=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_339;
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1783, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value476=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1783, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_340),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            _inf_value27->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj197=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value27);
            (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value476, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_340) ? right_340 = come_decrement_ref_count(right_340, ((struct sNode*)right_340)->finalize, ((struct sNode*)right_340)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61        ) {
            info->p+=2;
            sline_real_342=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_343=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_342;
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1794, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value484=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1794, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_343),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            _inf_value28->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj201=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value28);
            (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value484, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_343) ? right_343 = come_decrement_ref_count(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61        ) {
            info->p+=4;
            sline_real_345=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_346=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_345;
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1805, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value492=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1805, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_346),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            _inf_value29->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj202=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value29);
            (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value492, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_346) ? right_346 = come_decrement_ref_count(right_346, ((struct sNode*)right_346)->finalize, ((struct sNode*)right_346)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_347=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_348=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_347;
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1816, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value496=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1816, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_348),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            _inf_value30->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj203=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value30);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value496, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_348) ? right_348 = come_decrement_ref_count(right_348, ((struct sNode*)right_348)->finalize, ((struct sNode*)right_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61        ) {
            info->p+=4;
            sline_real_349=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_350=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_349;
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1827, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value500=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1827, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_350),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            _inf_value31->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj204=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value31);
            (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value500, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_350) ? right_350 = come_decrement_ref_count(right_350, ((struct sNode*)right_350)->finalize, ((struct sNode*)right_350)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61        ) {
            info->p+=3;
            sline_real_351=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_352=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_351;
            _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1838, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value504=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1838, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_352),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            _inf_value32->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj205=node_332,
            node_332=(struct sNode*)come_increment_ref_count(_inf_value32);
            (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value504, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_352) ? right_352 = come_decrement_ref_count(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__172 = (struct sNode*)come_increment_ref_count(node_332);
    ((node_332) ? node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__172;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
struct sEq2Node* __result_obj__164;
void* __right_value461 = (void*)0;
struct sEq2Node* result_335;
void* __right_value462 = (void*)0;
char* __dec_obj186;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value464 = (void*)0;
struct sNode* __dec_obj188;
struct sEq2Node* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_335=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*"));
    if(    self!=((void*)0)    ) {
        result_335->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj186=result_335->sname,
        result_335->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEq2Node_clone", 5, "char*"));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_335->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_335->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj187=result_335->mLeft,
        result_335->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj188=result_335->mRight,
        result_335->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__165 = result_335;
    come_call_finalizer(sEq2Node_finalize, result_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
struct sEqNode* __result_obj__166;
void* __right_value469 = (void*)0;
struct sEqNode* result_338;
void* __right_value470 = (void*)0;
char* __dec_obj190;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj192;
struct sEqNode* __result_obj__167;
    if(    self==(void*)0    ) {
        __result_obj__166 = (void*)0;
        return __result_obj__166;
    }
    result_338=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*"));
    if(    self!=((void*)0)    ) {
        result_338->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj190=result_338->sname,
        result_338->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEqNode_clone", 5, "char*"));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_338->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_338->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj191=result_338->mLeft,
        result_338->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj192=result_338->mRight,
        result_338->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__167 = result_338;
    come_call_finalizer(sEqNode_finalize, result_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
struct sNotEq2Node* __result_obj__168;
void* __right_value477 = (void*)0;
struct sNotEq2Node* result_341;
void* __right_value478 = (void*)0;
char* __dec_obj194;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj196;
struct sNotEq2Node* __result_obj__169;
    if(    self==(void*)0    ) {
        __result_obj__168 = (void*)0;
        return __result_obj__168;
    }
    result_341=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*"));
    if(    self!=((void*)0)    ) {
        result_341->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj194=result_341->sname,
        result_341->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEq2Node_clone", 5, "char*"));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_341->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_341->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj195=result_341->mLeft,
        result_341->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj196=result_341->mRight,
        result_341->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__169 = result_341;
    come_call_finalizer(sNotEq2Node_finalize, result_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
struct sNotEqNode* __result_obj__170;
void* __right_value485 = (void*)0;
struct sNotEqNode* result_344;
void* __right_value486 = (void*)0;
char* __dec_obj198;
void* __right_value487 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value488 = (void*)0;
struct sNode* __dec_obj200;
struct sNotEqNode* __result_obj__171;
    if(    self==(void*)0    ) {
        __result_obj__170 = (void*)0;
        return __result_obj__170;
    }
    result_344=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*"));
    if(    self!=((void*)0)    ) {
        result_344->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj198=result_344->sname,
        result_344->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEqNode_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_344->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_344->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj199=result_344->mLeft,
        result_344->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj200=result_344->mRight,
        result_344->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__171 = result_344;
    come_call_finalizer(sNotEqNode_finalize, result_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

struct sNode* and_exp(struct sInfo* info){
void* __right_value506 = (void*)0;
struct sNode* node_353;
int sline_real_354;
void* __right_value507 = (void*)0;
struct sNode* right_355;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value514 = (void*)0;
struct sNode* __dec_obj209;
int sline_real_357;
void* __right_value515 = (void*)0;
struct sNode* right_358;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj210;
struct sNode* __result_obj__175;
    parse_sharp_v5(info);
    node_353=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !node_353->terminated(node_353->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_354=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_355=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_354;
            _inf_value33=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1868, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value509=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1868, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_353),(struct sNode*)come_increment_ref_count(right_355),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            _inf_value33->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj209=node_353,
            node_353=(struct sNode*)come_increment_ref_count(_inf_value33);
            (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value509, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_355) ? right_355 = come_decrement_ref_count(right_355, ((struct sNode*)right_355)->finalize, ((struct sNode*)right_355)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !node_353->terminated(node_353->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_357=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_358=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_357;
            _inf_value34=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1879, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value517=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1879, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_353),(struct sNode*)come_increment_ref_count(right_358),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            _inf_value34->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj210=node_353,
            node_353=(struct sNode*)come_increment_ref_count(_inf_value34);
            (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value517, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_358) ? right_358 = come_decrement_ref_count(right_358, ((struct sNode*)right_358)->finalize, ((struct sNode*)right_358)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__175 = (struct sNode*)come_increment_ref_count(node_353);
    ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__175;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
struct sAndNode* __result_obj__173;
void* __right_value510 = (void*)0;
struct sAndNode* result_356;
void* __right_value511 = (void*)0;
char* __dec_obj206;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj208;
struct sAndNode* __result_obj__174;
    if(    self==(void*)0    ) {
        __result_obj__173 = (void*)0;
        return __result_obj__173;
    }
    result_356=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*"));
    if(    self!=((void*)0)    ) {
        result_356->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj206=result_356->sname,
        result_356->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndNode_clone", 5, "char*"));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_356->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_356->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj207=result_356->mLeft,
        result_356->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj208=result_356->mRight,
        result_356->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__174 = result_356;
    come_call_finalizer(sAndNode_finalize, result_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

struct sNode* xor_exp(struct sInfo* info){
void* __right_value519 = (void*)0;
struct sNode* node_359;
int sline_real_360;
void* __right_value520 = (void*)0;
struct sNode* right_361;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value527 = (void*)0;
struct sNode* __dec_obj214;
int sline_real_363;
void* __right_value528 = (void*)0;
struct sNode* right_364;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj215;
struct sNode* __result_obj__178;
    parse_sharp_v5(info);
    node_359=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==94&&*(info->p+1)!=61        ) {
            info->p++;
            sline_real_360=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_361=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_360;
            _inf_value35=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1909, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value522=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 1909, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_361),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            _inf_value35->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj214=node_359,
            node_359=(struct sNode*)come_increment_ref_count(_inf_value35);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value522, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_361) ? right_361 = come_decrement_ref_count(right_361, ((struct sNode*)right_361)->finalize, ((struct sNode*)right_361)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61        ) {
            info->p+=2;
            sline_real_363=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_364=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_363;
            _inf_value36=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1920, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value530=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 1920, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_359),(struct sNode*)come_increment_ref_count(right_364),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            _inf_value36->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj215=node_359,
            node_359=(struct sNode*)come_increment_ref_count(_inf_value36);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value530, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_364) ? right_364 = come_decrement_ref_count(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__178 = (struct sNode*)come_increment_ref_count(node_359);
    ((node_359) ? node_359 = come_decrement_ref_count(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__178;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
struct sXOrNode* __result_obj__176;
void* __right_value523 = (void*)0;
struct sXOrNode* result_362;
void* __right_value524 = (void*)0;
char* __dec_obj211;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value526 = (void*)0;
struct sNode* __dec_obj213;
struct sXOrNode* __result_obj__177;
    if(    self==(void*)0    ) {
        __result_obj__176 = (void*)0;
        return __result_obj__176;
    }
    result_362=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*"));
    if(    self!=((void*)0)    ) {
        result_362->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj211=result_362->sname,
        result_362->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sXOrNode_clone", 5, "char*"));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_362->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_362->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj212=result_362->mLeft,
        result_362->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj213=result_362->mRight,
        result_362->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__177 = result_362;
    come_call_finalizer(sXOrNode_finalize, result_362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__177;
}

struct sNode* or_exp(struct sInfo* info){
void* __right_value532 = (void*)0;
struct sNode* node_365;
int sline_real_366;
void* __right_value533 = (void*)0;
struct sNode* right_367;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj219;
int sline_real_369;
void* __right_value541 = (void*)0;
struct sNode* right_370;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj220;
struct sNode* __result_obj__181;
    parse_sharp_v5(info);
    node_365=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124        ) {
            info->p++;
            sline_real_366=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_367=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_366;
            _inf_value37=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1950, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value535=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 1950, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_365),(struct sNode*)come_increment_ref_count(right_367),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            _inf_value37->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj219=node_365,
            node_365=(struct sNode*)come_increment_ref_count(_inf_value37);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value535, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_367) ? right_367 = come_decrement_ref_count(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124        ) {
            info->p+=2;
            sline_real_369=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_370=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_369;
            _inf_value38=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1961, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value543=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 1961, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_365),(struct sNode*)come_increment_ref_count(right_370),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            _inf_value38->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj220=node_365,
            node_365=(struct sNode*)come_increment_ref_count(_inf_value38);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value543, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_370) ? right_370 = come_decrement_ref_count(right_370, ((struct sNode*)right_370)->finalize, ((struct sNode*)right_370)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__181 = (struct sNode*)come_increment_ref_count(node_365);
    ((node_365) ? node_365 = come_decrement_ref_count(node_365, ((struct sNode*)node_365)->finalize, ((struct sNode*)node_365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__181;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
struct sOrNode* __result_obj__179;
void* __right_value536 = (void*)0;
struct sOrNode* result_368;
void* __right_value537 = (void*)0;
char* __dec_obj216;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj217;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj218;
struct sOrNode* __result_obj__180;
    if(    self==(void*)0    ) {
        __result_obj__179 = (void*)0;
        return __result_obj__179;
    }
    result_368=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*"));
    if(    self!=((void*)0)    ) {
        result_368->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj216=result_368->sname,
        result_368->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrNode_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_368->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_368->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj217=result_368->mLeft,
        result_368->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj218=result_368->mRight,
        result_368->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__180 = result_368;
    come_call_finalizer(sOrNode_finalize, result_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__180;
}

struct sNode* andand_exp(struct sInfo* info){
void* __right_value545 = (void*)0;
struct sNode* node_371;
int sline_real_372;
void* __right_value546 = (void*)0;
struct sNode* right_373;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj224;
int sline_real_375;
void* __right_value554 = (void*)0;
struct sNode* right_376;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj225;
struct sNode* __result_obj__184;
    parse_sharp_v5(info);
    node_371=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==38&&*(info->p+1)==38        ) {
            info->p+=2;
            sline_real_372=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_373=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_372;
            _inf_value39=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1991, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value548=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 1991, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_373),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            _inf_value39->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj224=node_371,
            node_371=(struct sNode*)come_increment_ref_count(_inf_value39);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value548, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_373) ? right_373 = come_decrement_ref_count(right_373, ((struct sNode*)right_373)->finalize, ((struct sNode*)right_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38        ) {
            info->p+=3;
            sline_real_375=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_376=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_375;
            _inf_value40=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2002, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value556=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2002, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_376),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            _inf_value40->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj225=node_371,
            node_371=(struct sNode*)come_increment_ref_count(_inf_value40);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value556, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_376) ? right_376 = come_decrement_ref_count(right_376, ((struct sNode*)right_376)->finalize, ((struct sNode*)right_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__184 = (struct sNode*)come_increment_ref_count(node_371);
    ((node_371) ? node_371 = come_decrement_ref_count(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__184;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
struct sAndAndNode* __result_obj__182;
void* __right_value549 = (void*)0;
struct sAndAndNode* result_374;
void* __right_value550 = (void*)0;
char* __dec_obj221;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj222;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj223;
struct sAndAndNode* __result_obj__183;
    if(    self==(void*)0    ) {
        __result_obj__182 = (void*)0;
        return __result_obj__182;
    }
    result_374=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*"));
    if(    self!=((void*)0)    ) {
        result_374->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj221=result_374->sname,
        result_374->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndAndNode_clone", 5, "char*"));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_374->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_374->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj222=result_374->mLeft,
        result_374->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj223=result_374->mRight,
        result_374->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__183 = result_374;
    come_call_finalizer(sAndAndNode_finalize, result_374, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__183;
}

struct sNode* oror_exp(struct sInfo* info){
void* __right_value558 = (void*)0;
struct sNode* node_377;
int sline_real_378;
void* __right_value559 = (void*)0;
struct sNode* right_379;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj229;
int sline_real_381;
void* __right_value567 = (void*)0;
struct sNode* right_382;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj230;
struct sNode* __result_obj__187;
    parse_sharp_v5(info);
    node_377=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==124&&*(info->p+1)==124        ) {
            info->p+=2;
            sline_real_378=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_379=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_378;
            _inf_value41=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2032, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value561=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2032, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_377),(struct sNode*)come_increment_ref_count(right_379),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            _inf_value41->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj229=node_377,
            node_377=(struct sNode*)come_increment_ref_count(_inf_value41);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value561, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_379) ? right_379 = come_decrement_ref_count(right_379, ((struct sNode*)right_379)->finalize, ((struct sNode*)right_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124        ) {
            info->p+=3;
            sline_real_381=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_382=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_381;
            _inf_value42=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2043, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value569=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2043, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_377),(struct sNode*)come_increment_ref_count(right_382),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            _inf_value42->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj230=node_377,
            node_377=(struct sNode*)come_increment_ref_count(_inf_value42);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value569, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((right_382) ? right_382 = come_decrement_ref_count(right_382, ((struct sNode*)right_382)->finalize, ((struct sNode*)right_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__187 = (struct sNode*)come_increment_ref_count(node_377);
    ((node_377) ? node_377 = come_decrement_ref_count(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__187;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
struct sOrOrNode* __result_obj__185;
void* __right_value562 = (void*)0;
struct sOrOrNode* result_380;
void* __right_value563 = (void*)0;
char* __dec_obj226;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj228;
struct sOrOrNode* __result_obj__186;
    if(    self==(void*)0    ) {
        __result_obj__185 = (void*)0;
        return __result_obj__185;
    }
    result_380=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*"));
    if(    self!=((void*)0)    ) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj226=result_380->sname,
        result_380->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrOrNode_clone", 5, "char*"));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_380->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_380->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj227=result_380->mLeft,
        result_380->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj228=result_380->mRight,
        result_380->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__186 = result_380;
    come_call_finalizer(sOrOrNode_finalize, result_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__186;
}

struct sNode* comma_exp(struct sInfo* info){
void* __right_value571 = (void*)0;
struct sNode* node_383;
int sline_real_384;
void* __right_value572 = (void*)0;
struct sNode* node2_385;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj234;
struct sNode* __result_obj__190;
    parse_sharp_v5(info);
    node_383=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        !info->no_comma&&*info->p==44        ) {
            info->p++;
            sline_real_384=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_385=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_384;
            _inf_value43=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2073, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value574=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "13op.c", 2073, "struct sCommaNode*")),(struct sNode*)come_increment_ref_count(node_383),(struct sNode*)come_increment_ref_count(node2_385),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            _inf_value43->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj234=node_383,
            node_383=(struct sNode*)come_increment_ref_count(_inf_value43);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value574, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((node2_385) ? node2_385 = come_decrement_ref_count(node2_385, ((struct sNode*)node2_385)->finalize, ((struct sNode*)node2_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__190 = (struct sNode*)come_increment_ref_count(node_383);
    ((node_383) ? node_383 = come_decrement_ref_count(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__190) ? __result_obj__190 = come_decrement_ref_count(__result_obj__190, ((struct sNode*)__result_obj__190)->finalize, ((struct sNode*)__result_obj__190)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__190;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
struct sCommaNode* __result_obj__188;
void* __right_value575 = (void*)0;
struct sCommaNode* result_386;
void* __right_value576 = (void*)0;
char* __dec_obj231;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj233;
struct sCommaNode* __result_obj__189;
    if(    self==(void*)0    ) {
        __result_obj__188 = (void*)0;
        return __result_obj__188;
    }
    result_386=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*"));
    if(    self!=((void*)0)    ) {
        result_386->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj231=result_386->sname,
        result_386->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCommaNode_clone", 5, "char*"));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_386->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj232=result_386->mLeft,
        result_386->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj233=result_386->mRight,
        result_386->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__189 = result_386;
    come_call_finalizer(sCommaNode_finalize, result_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__189;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __right_value580 = (void*)0;
struct sNode* node_387;
int sline_real_388;
struct sNode* value1_389;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj235;
_Bool no_label_390;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj236;
void* __right_value585 = (void*)0;
struct sNode* value2_391;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value588 = (void*)0;
struct sNode* __dec_obj237;
struct sNode* __result_obj__191;
value1_389 = (void*)0;
    parse_sharp_v5(info);
    node_387=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(    *info->p    ) {
        if(        *info->p==63        ) {
            info->p++;
            sline_real_388=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58            ) {
                _inf_value44=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2104, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value582=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2104, "struct sNullNode*")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                _inf_value44->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj235=value1_389,
                value1_389=(struct sNode*)come_increment_ref_count(_inf_value44);
                (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sNullNode_finalize, __right_value582, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                no_label_390=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj236=value1_389,
                value1_389=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                info->no_label=no_label_390;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_391=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_388;
            _inf_value45=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2122, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value587=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2122, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(node_387),(struct sNode*)come_increment_ref_count(value1_389),(struct sNode*)come_increment_ref_count(value2_391),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            _inf_value45->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj237=node_387,
            node_387=(struct sNode*)come_increment_ref_count(_inf_value45);
            (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value587, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((value1_389) ? value1_389 = come_decrement_ref_count(value1_389, ((struct sNode*)value1_389)->finalize, ((struct sNode*)value1_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((value2_391) ? value2_391 = come_decrement_ref_count(value2_391, ((struct sNode*)value2_391)->finalize, ((struct sNode*)value2_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__191 = (struct sNode*)come_increment_ref_count(node_387);
    ((node_387) ? node_387 = come_decrement_ref_count(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__191) ? __result_obj__191 = come_decrement_ref_count(__result_obj__191, ((struct sNode*)__result_obj__191)->finalize, ((struct sNode*)__result_obj__191)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__191;
}

struct sNode* expression_v13(struct sInfo* info){
void* __right_value589 = (void*)0;
struct sNode* node_392;
struct sNode* __result_obj__192;
    parse_sharp_v5(info);
    node_392=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result_obj__192 = (struct sNode*)come_increment_ref_count(node_392);
    ((node_392) ? node_392 = come_decrement_ref_count(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__192) ? __result_obj__192 = come_decrement_ref_count(__result_obj__192, ((struct sNode*)__result_obj__192)->finalize, ((struct sNode*)__result_obj__192)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__192;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value592 = (void*)0;
struct sNode* __result_obj__193;
void* __right_value593 = (void*)0;
struct sNode* __result_obj__194;
    if(    !gComeC&&charp_operator_equals(buf,"null")    ) {
        _inf_value46=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2146, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value591=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2146, "struct sNullNode*")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        _inf_value46->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__193 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value592=_inf_value46)));
        come_call_finalizer(sNullNode_finalize, __right_value591, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value592) ? __right_value592 = come_decrement_ref_count(__right_value592, ((struct sNode*)__right_value592)->finalize, ((struct sNode*)__right_value592)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__193) ? __result_obj__193 = come_decrement_ref_count(__result_obj__193, ((struct sNode*)__result_obj__193)->finalize, ((struct sNode*)__result_obj__193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__193;
    }
    __result_obj__194 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value593=string_node_v12(buf,head,head_sline,info))));
    ((__right_value593) ? __right_value593 = come_decrement_ref_count(__right_value593, ((struct sNode*)__right_value593)->finalize, ((struct sNode*)__right_value593)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__194;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sNode* _inf_value47;
struct sLtNode* _inf_obj_value47;
void* __right_value596 = (void*)0;
struct sNode* __result_obj__195;
    _inf_value47=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2154, "struct sNode");
    _inf_obj_value47=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value595=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 2154, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value47->_protocol_obj=_inf_obj_value47;
    _inf_value47->finalize=(void*)sLtNode_finalize;
    _inf_value47->clone=(void*)sLtNode_clone;
    _inf_value47->compile=(void*)sLtNode_compile;
    _inf_value47->sline=(void*)sNodeBase_sline;
    _inf_value47->sline_real=(void*)sNodeBase_sline_real;
    _inf_value47->sname=(void*)sNodeBase_sname;
    _inf_value47->terminated=(void*)sNodeBase_terminated;
    _inf_value47->kind=(void*)sLtNode_kind;
    _inf_value47->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__195 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value596=_inf_value47)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value595, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value596) ? __right_value596 = come_decrement_ref_count(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__195) ? __result_obj__195 = come_decrement_ref_count(__result_obj__195, ((struct sNode*)__result_obj__195)->finalize, ((struct sNode*)__result_obj__195)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__195;
}

