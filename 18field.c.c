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

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value37 = (void*)0;
struct sType* generics_type_8;
struct sType* __dec_obj24;
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
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct sNode* node_51;
_Bool Value_52;
_Bool __result_obj__20;
    generics_type_8=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_8->mNoSolvedGenericsType    ) {
        __dec_obj24=generics_type_8,
        generics_type_8=(struct sType*)come_increment_ref_count(generics_type_8->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    klass_38=type->mClass;
    class_name_39=klass_38->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value38=get_method(fun_name,(struct sType*)come_increment_ref_count(type),info)));
    fun_name2_40=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun_41=multiple_assign_var1->v2;
    generics_fun_42=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_43=(_Bool)0;
    if(    operator_fun_41    ) {
        obj_44=(struct sNode*)come_increment_ref_count(left_node);
        params_45=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "18field.c", 20, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 22, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 23, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(middle_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_45,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 24, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
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
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
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
struct tuple2$2char$phsNode$ph* __dec_obj25;
void* __right_value42 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_49;
struct tuple2$2char$phsNode$ph* __dec_obj26;
void* __right_value43 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_50;
struct tuple2$2char$phsNode$ph* __dec_obj27;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_48=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_48->prev=((void*)0);
        litem_48->next=((void*)0);
        __dec_obj25=litem_48->item,
        litem_48->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_48;
        self->head=litem_48;
    }
    else if(    self->len==1    ) {
        litem_49=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        __dec_obj26=litem_49->item,
        litem_49->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value43=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        __dec_obj27=litem_50->item,
        litem_50->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj28;
struct tuple2$2void$psNode$ph* __result_obj__19;
    self->v1=v1;
    __dec_obj28=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
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

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sNode* __dec_obj29;
void* __right_value53 = (void*)0;
struct sNode* __dec_obj30;
void* __right_value54 = (void*)0;
char* __dec_obj31;
struct sStoreFieldNode* __result_obj__21;
    ((struct sNodeBase*)(__right_value51=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj29=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj30=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj31=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__21 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value55 = (void*)0;
char* __result_obj__22;
    __result_obj__22 = (char*)come_increment_ref_count(((char*)(__right_value55=__builtin_string("sStoreFieldNode"))));
    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__22 = come_decrement_ref_count(__result_obj__22, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__22;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_53;
struct sNode* right_54;
void* __right_value56 = (void*)0;
char* name_55;
_Bool Value_56;
_Bool __result_obj__23;
void* __right_value57 = (void*)0;
struct CVALUE* left_value_57;
struct sType* left_type2_58;
struct sType* __dec_obj32;
int i_59;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value60 = (void*)0;
char* __dec_obj33;
void* __right_value61 = (void*)0;
_Bool __result_obj__28;
_Bool Value_66;
_Bool __result_obj__29;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
_Bool new_channel_67;
void* __right_value64 = (void*)0;
struct CVALUE* right_value_68;
struct sType* right_type_69;
struct sType* left_type_70;
struct sType* left_type3_71;
void* __right_value65 = (void*)0;
struct sClass* klass_72;
struct sType* field_type_81;
int index_82;
char* child_field_name_83;
_Bool child_field_is_pointer_84;
void* __right_value66 = (void*)0;
_Bool __result_obj__38;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_85;
struct tuple2$2char$phsType$ph* field_88;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* field_name_91=0;
struct sType* field_type2_92=0;
void* __right_value67 = (void*)0;
struct sType* __dec_obj34;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_93;
struct tuple2$2char$phsType$ph* field_94;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* field_name_95=0;
struct sType* field_type2_96=0;
struct sClass* klass2_97;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_98;
struct tuple2$2char$phsType$ph* field2_99;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* field_name2_100=0;
struct sType* field_type3_101=0;
void* __right_value68 = (void*)0;
char* __dec_obj35;
void* __right_value69 = (void*)0;
struct sType* __dec_obj36;
void* __right_value70 = (void*)0;
struct sType* __dec_obj37;
void* __right_value71 = (void*)0;
_Bool __result_obj__45;
_Bool __result_obj__46;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
_Bool __result_obj__47;
char* c_value_103;
void* __right_value79 = (void*)0;
char* __dec_obj38;
void* __right_value80 = (void*)0;
char* __dec_obj39;
void* __right_value81 = (void*)0;
char* __dec_obj40;
void* __right_value82 = (void*)0;
char* __dec_obj41;
void* __right_value83 = (void*)0;
char* c_value_104;
void* __right_value84 = (void*)0;
char* __dec_obj42;
char* c_value_105;
void* __right_value85 = (void*)0;
char* __dec_obj43;
void* __right_value86 = (void*)0;
char* __dec_obj44;
void* __right_value87 = (void*)0;
char* __dec_obj45;
void* __right_value88 = (void*)0;
char* __dec_obj46;
void* __right_value89 = (void*)0;
char* c_value_106;
void* __right_value90 = (void*)0;
char* __dec_obj47;
void* __right_value91 = (void*)0;
_Bool __result_obj__48;
char* c_value_107;
void* __right_value92 = (void*)0;
char* __dec_obj48;
void* __right_value93 = (void*)0;
char* __dec_obj49;
void* __right_value94 = (void*)0;
char* __dec_obj50;
void* __right_value95 = (void*)0;
char* __dec_obj51;
void* __right_value96 = (void*)0;
char* c_value_108;
void* __right_value97 = (void*)0;
char* __dec_obj52;
char* c_value_109;
void* __right_value98 = (void*)0;
char* __dec_obj53;
void* __right_value99 = (void*)0;
char* __dec_obj54;
void* __right_value100 = (void*)0;
char* __dec_obj55;
void* __right_value101 = (void*)0;
char* __dec_obj56;
void* __right_value102 = (void*)0;
char* c_value_110;
void* __right_value103 = (void*)0;
char* __dec_obj57;
void* __right_value104 = (void*)0;
_Bool __result_obj__49;
void* __right_value105 = (void*)0;
char* __dec_obj58;
void* __right_value106 = (void*)0;
char* __dec_obj59;
void* __right_value107 = (void*)0;
struct sType* __dec_obj60;
_Bool __result_obj__51;
void* __right_value111 = (void*)0;
char* __dec_obj64;
void* __right_value112 = (void*)0;
char* __dec_obj65;
void* __right_value113 = (void*)0;
char* __dec_obj66;
void* __right_value114 = (void*)0;
char* __dec_obj67;
void* __right_value115 = (void*)0;
char* __dec_obj68;
void* __right_value116 = (void*)0;
char* __dec_obj69;
void* __right_value117 = (void*)0;
_Bool __result_obj__52;
void* __right_value118 = (void*)0;
struct sType* __dec_obj70;
_Bool __result_obj__53;
c_value_103 = (void*)0;
c_value_105 = (void*)0;
c_value_107 = (void*)0;
c_value_109 = (void*)0;
    left_53=self->mLeft;
    right_54=self->mRight;
    name_55=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_56=node_compile(left_53,info);
    if(    !Value_56    ) {
        __result_obj__23 = (_Bool)0;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__23;
    }
    else {
    }
    left_value_57=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_58=(struct sType*)come_increment_ref_count(left_value_57->type);
    if(    left_type2_58->mNoSolvedGenericsType    ) {
        __dec_obj32=left_type2_58,
        left_type2_58=(struct sType*)come_increment_ref_count(left_type2_58->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type2_58->mClass->mName,"tuple1")||string_operator_equals(left_type2_58->mClass->mName,"tuple2")||string_operator_equals(left_type2_58->mClass->mName,"tuple3")||string_operator_equals(left_type2_58->mClass->mName,"tuple3")||string_operator_equals(left_type2_58->mClass->mName,"tuple4")||string_operator_equals(left_type2_58->mClass->mName,"tuple5")    ) {
        for(        i_59=0        ;        i_59<list$1sType$ph_length(left_type2_58->mGenericsTypes)        ;        i_59++        ){
            if(            (_condtional_value_X1=(string_operator_equals(name_55,((struct sType*)(__right_value59=list$1sType$ph_operator_load_element(left_type2_58->mGenericsTypes,i_59)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                __dec_obj33=name_55,
                name_55=(char*)come_increment_ref_count(xsprintf("v%d",i_59+1));
                __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    if(    left_type2_58->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"Immutable object can't change the fields")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__28 = (_Bool)1;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__28;
    }
    Value_66=node_compile(right_54,info);
    if(    !Value_66    ) {
        __result_obj__29 = (_Bool)0;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__29;
    }
    else {
    }
    new_channel_67=string_operator_equals(((char*)(__right_value63=right_54->kind(right_54->_protocol_obj))),"sNewChannel");
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_value_68=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_69=right_value_68->type;
    left_type_70=(struct sType*)come_increment_ref_count(left_value_57->type);
    left_type3_71=(struct sType*)come_increment_ref_count(left_type_70);
    klass_72=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3_71->mClass->mName));
    field_type_81=((void*)0);
    index_82=0;
    child_field_name_83=((void*)0);
    child_field_is_pointer_84=(_Bool)0;
    if(    klass_72->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value66=err_msg(info,"%s fields are null",klass_72->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__38 = (_Bool)1;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__38;
    }
    for(    o2_saved_85=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_72->mFields)),field_88=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_85))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_85))    ;    field_88=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_85))    ){
        multiple_assign_var2=field_88;
        field_name_91=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type2_92=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        string_operator_equals(field_name_91,name_55)        ) {
            __dec_obj34=field_type_81,
            field_type_81=(struct sType*)come_increment_ref_count(sType_clone(field_type2_92));
            come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_91 = come_decrement_ref_count(field_name_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_82++;
        (field_name_91 = come_decrement_ref_count(field_name_91, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_82==list$1tuple2$2char$phsType$ph$ph_length(klass_72->mFields)    ) {
        index_82=0;
        for(        o2_saved_93=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_72->mFields)),field_94=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_93))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_93))        ;        field_94=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_93))        ){
            multiple_assign_var3=field_94;
            field_name_95=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            field_type2_96=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            klass2_97=field_type2_96->mClass;
            if(            klass2_97->mUnion            ) {
                for(                o2_saved_98=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_97->mFields)),field2_99=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_98))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_98))                ;                field2_99=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_98))                ){
                    multiple_assign_var4=field2_99;
                    field_name2_100=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type3_101=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    string_operator_equals(field_name2_100,name_55)                    ) {
                        __dec_obj35=child_field_name_83,
                        child_field_name_83=(char*)come_increment_ref_count(__builtin_string(field_name_95));
                        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_96->mPointerNum>0                        ) {
                            child_field_is_pointer_84=(_Bool)1;
                        }
                        __dec_obj36=field_type_81,
                        field_type_81=(struct sType*)come_increment_ref_count(sType_clone(field_type3_101));
                        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_100 = come_decrement_ref_count(field_name2_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_100 = come_decrement_ref_count(field_name2_100, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_83                ) {
                    (field_name_95 = come_decrement_ref_count(field_name_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_95,name_55)            ) {
                __dec_obj37=field_type_81,
                field_type_81=(struct sType*)come_increment_ref_count(sType_clone(field_type2_96));
                come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_95 = come_decrement_ref_count(field_name_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_82++;
            (field_name_95 = come_decrement_ref_count(field_name_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_82==list$1tuple2$2char$phsType$ph$ph_length(klass_72->mFields)||field_type_81==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value71=err_msg(info,"field not found(%s) in %s(1)",name_55,klass_72->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__45 = (_Bool)1;
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__45;
        }
    }
    if(    field_type_81==((void*)0)    ) {
        __result_obj__46 = (_Bool)1;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 165, "struct CVALUE*"))));
    right_type_69=((struct sType*)(__right_value74=sType_clone(right_value_68->type)));
    come_call_finalizer(sType_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    check_assign_type(((char*)(__right_value76=xsprintf("\%s is assigned to(1)",((char*)(__right_value75=string_to_string(name_55)))))),field_type_81,right_type_69,right_value_68,(_Bool)0,(_Bool)1,(_Bool)1,info);
    (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    right_type_69=((struct sType*)(__right_value77=sType_clone(right_value_68->type)));
    come_call_finalizer(sType_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    field_type_81->mHeap&&!right_value_68->type->mHeap    ) {
        if(        string_operator_equals(right_value_68->type->mClass->mName,"void")&&right_value_68->type->mPointerNum==1        ) {
        }
        else {
            if(            !gComeGC            ) {
                ((struct tuple2$2int$bool$*)(__right_value78=err_msg(info,"require right value as heap object(%s)(1)",name_55)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__47 = (_Bool)1;
                (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__47;
            }
        }
    }
    if(    field_type_81->mHeap&&right_type_69->mHeap&&field_type_81->mPointerNum>0&&right_type_69->mPointerNum>0    ) {
        if(        left_value_57->type->mPointerNum==1        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj38=c_value_103,
                    c_value_103=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj39=c_value_103,
                    c_value_103=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_103,info,(_Bool)0);
                std_move(field_type_81,right_type_69,right_value_68,info,(_Bool)0);
                if(                child_field_is_pointer_84                ) {
                    __dec_obj40=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj41=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_104=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_57->c_value,name_55));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_104,info,(_Bool)0);
                std_move(field_type_81,right_type_69,right_value_68,info,(_Bool)0);
                __dec_obj42=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_104 = come_decrement_ref_count(c_value_104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_57->type->mPointerNum==0        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj43=c_value_105,
                    c_value_105=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj44=c_value_105,
                    c_value_105=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_105,info,(_Bool)0);
                std_move(field_type_81,right_type_69,right_value_68,info,(_Bool)0);
                if(                child_field_is_pointer_84                ) {
                    __dec_obj45=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj46=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_106=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_57->c_value,name_55));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_106,info,(_Bool)0);
                std_move(field_type_81,right_value_68->type,right_value_68,info,(_Bool)0);
                __dec_obj47=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_106 = come_decrement_ref_count(c_value_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value91=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_55,left_value_57->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__48 = (_Bool)1;
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__48;
        }
    }
    else if(    field_type_81->mHeap&&field_type_81->mPointerNum>0&&right_type_69->mPointerNum>0&&string_operator_equals(right_type_69->mClass->mName,"void")    ) {
        if(        left_value_57->type->mPointerNum==1        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj48=c_value_107,
                    c_value_107=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj49=c_value_107,
                    c_value_107=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_107,info,(_Bool)0);
                if(                child_field_is_pointer_84                ) {
                    __dec_obj50=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj51=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_107 = come_decrement_ref_count(c_value_107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_108=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_57->c_value,name_55));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_108,info,(_Bool)0);
                __dec_obj52=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_108 = come_decrement_ref_count(c_value_108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else if(        left_value_57->type->mPointerNum==0        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj53=c_value_109,
                    c_value_109=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj54=c_value_109,
                    c_value_109=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_57->c_value,child_field_name_83,name_55));
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_109,info,(_Bool)0);
                if(                child_field_is_pointer_84                ) {
                    __dec_obj55=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj56=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                (c_value_109 = come_decrement_ref_count(c_value_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                c_value_110=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_57->c_value,name_55));
                decrement_ref_count_object((struct sType*)come_increment_ref_count(field_type_81),c_value_110,info,(_Bool)0);
                __dec_obj57=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (c_value_110 = come_decrement_ref_count(c_value_110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value104=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_55,left_value_57->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__49 = (_Bool)1;
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__49;
        }
    }
    else if(    field_type_81->mChannel&&new_channel_67    ) {
        if(        child_field_is_pointer_84        ) {
            __dec_obj58=come_value_102->c_value,
            come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_57->c_value,name_55,right_value_68->c_value));
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else {
            __dec_obj59=come_value_102->c_value,
            come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_57->c_value,name_55,right_value_68->c_value));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        __dec_obj60=come_value_102->type,
        come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_68->type));
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_102->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        add_come_last_code(info,"%s",come_value_102->c_value);
        __result_obj__51 = (_Bool)1;
        (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__51;
    }
    else {
        if(        left_value_57->type->mPointerNum==1        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj64=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj65=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj66=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else if(        left_value_57->type->mPointerNum==0        ) {
            if(            child_field_name_83            ) {
                if(                child_field_is_pointer_84                ) {
                    __dec_obj67=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj68=come_value_102->c_value,
                    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_57->c_value,child_field_name_83,name_55,right_value_68->c_value));
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj69=come_value_102->c_value,
                come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_57->c_value,name_55,right_value_68->c_value));
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value117=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_55,left_value_57->type->mPointerNum)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value117, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__52 = (_Bool)1;
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__52;
        }
    }
    __dec_obj70=come_value_102->type,
    come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_81));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_102->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    add_come_last_code(info,"%s",come_value_102->c_value);
    __result_obj__53 = (_Bool)1;
    (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, klass_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_83 = come_decrement_ref_count(child_field_name_83, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_60;
int i_61;
struct sType* __result_obj__24;
struct sType* default_value_62;
struct sType* __result_obj__25;
default_value_62 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_60=self->head;
    i_61=0;
    while(    it_60!=((void*)0)    ) {
        if(        position==i_61        ) {
            __result_obj__24 = (struct sType*)come_increment_ref_count(it_60->item);
            come_call_finalizer(sType_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__24;
        }
        it_60=it_60->next;
        i_61++;
    }
    memset(&default_value_62,0,sizeof(struct sType*));
    __result_obj__25 = (struct sType*)come_increment_ref_count(default_value_62);
    come_call_finalizer(sType_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__25;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_63;
int i_64;
struct sType* __result_obj__26;
struct sType* default_value_65;
struct sType* __result_obj__27;
default_value_65 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)    ) {
        if(        position==i_64        ) {
            __result_obj__26 = (struct sType*)come_increment_ref_count(it_63->item);
            come_call_finalizer(sType_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__26;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sType*));
    __result_obj__27 = (struct sType*)come_increment_ref_count(default_value_65);
    come_call_finalizer(sType_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__27;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
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

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_73;
unsigned int hash_74;
unsigned int it_75;
struct sClass* __result_obj__30;
struct sClass* __result_obj__31;
struct sClass* __result_obj__32;
struct sClass* __result_obj__33;
default_value_73 = (void*)0;
    memset(&default_value_73,0,sizeof(struct sClass*));
    hash_74=string_get_hash_key(((char*)key))%self->size;
    it_75=hash_74;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_75]        ) {
            if(            string_equals(self->keys[it_75],key)            ) {
                __result_obj__30 = (struct sClass*)come_increment_ref_count(self->items[it_75]);
                come_call_finalizer(sClass_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
            it_75++;
            if(            it_75>=self->size            ) {
                it_75=0;
            }
            else if(            it_75==hash_74            ) {
                __result_obj__31 = (struct sClass*)come_increment_ref_count(default_value_73);
                come_call_finalizer(sClass_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__31;
            }
        }
        else {
            __result_obj__32 = (struct sClass*)come_increment_ref_count(default_value_73);
            come_call_finalizer(sClass_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__32;
        }
    }
    __result_obj__33 = (struct sClass*)come_increment_ref_count(default_value_73);
    come_call_finalizer(sClass_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_76;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_77;
    it_76=self->head;
    while(    it_76!=((void*)0)    ) {
        prev_it_77=it_76;
        it_76=it_76->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_78;
unsigned int hash_79;
unsigned int it_80;
struct sClass* __result_obj__34;
struct sClass* __result_obj__35;
struct sClass* __result_obj__36;
struct sClass* __result_obj__37;
default_value_78 = (void*)0;
    memset(&default_value_78,0,sizeof(struct sClass*));
    hash_79=string_get_hash_key(((char*)key))%self->size;
    it_80=hash_79;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_80]        ) {
            if(            string_equals(self->keys[it_80],key)            ) {
                __result_obj__34 = (struct sClass*)come_increment_ref_count(self->items[it_80]);
                come_call_finalizer(sClass_finalize, default_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__34;
            }
            it_80++;
            if(            it_80>=self->size            ) {
                it_80=0;
            }
            else if(            it_80==hash_79            ) {
                __result_obj__35 = (struct sClass*)come_increment_ref_count(default_value_78);
                come_call_finalizer(sClass_finalize, default_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__35;
            }
        }
        else {
            __result_obj__36 = (struct sClass*)come_increment_ref_count(default_value_78);
            come_call_finalizer(sClass_finalize, default_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__36;
        }
    }
    __result_obj__37 = (struct sClass*)come_increment_ref_count(default_value_78);
    come_call_finalizer(sClass_finalize, default_value_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_86;
struct tuple2$2char$phsType$ph* __result_obj__39;
struct tuple2$2char$phsType$ph* __result_obj__40;
struct tuple2$2char$phsType$ph* result_87;
struct tuple2$2char$phsType$ph* __result_obj__41;
result_86 = (void*)0;
result_87 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_86,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__39 = result_86;
        return __result_obj__39;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__40 = self->it->item;
        return __result_obj__40;
    }
    memset(&result_87,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__41 = result_87;
    return __result_obj__41;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_89;
struct tuple2$2char$phsType$ph* __result_obj__42;
struct tuple2$2char$phsType$ph* __result_obj__43;
struct tuple2$2char$phsType$ph* result_90;
struct tuple2$2char$phsType$ph* __result_obj__44;
result_89 = (void*)0;
result_90 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_89,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__42 = result_89;
        return __result_obj__42;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_90,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__44 = result_90;
    return __result_obj__44;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value108 = (void*)0;
struct list_item$1CVALUE$ph* litem_111;
struct CVALUE* __dec_obj61;
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_112;
struct CVALUE* __dec_obj62;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_113;
struct CVALUE* __dec_obj63;
struct list$1CVALUE$ph* __result_obj__50;
    if(    self->len==0    ) {
        litem_111=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value108=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj61=litem_111->item,
        litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_111;
        self->head=litem_111;
    }
    else if(    self->len==1    ) {
        litem_112=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_112->prev=self->head;
        litem_112->next=((void*)0);
        __dec_obj62=litem_112->item,
        litem_112->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_112;
        self->head->next=litem_112;
    }
    else {
        litem_113=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_113->prev=self->tail;
        litem_113->next=((void*)0);
        __dec_obj63=litem_113->item,
        litem_113->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_113;
        self->tail=litem_113;
    }
    self->len++;
    __result_obj__50 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__50;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value121 = (void*)0;
char* __dec_obj72;
struct sLoadFieldNode* __result_obj__54;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj71=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj72=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__54 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadFieldNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value122 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string("sLoadFieldNode"))));
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_114;
void* __right_value123 = (void*)0;
char* name_115;
_Bool Value_116;
_Bool __result_obj__56;
void* __right_value124 = (void*)0;
struct CVALUE* left_value_117;
struct sType* left_type2_118;
struct sType* left_type3_119;
struct sType* __dec_obj73;
struct sType* __dec_obj74;
int i_120;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value127 = (void*)0;
char* __dec_obj75;
struct sType* left_type_121;
void* __right_value128 = (void*)0;
struct sType* left_type3_122;
struct sClass* klass_123;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sType* field_type_124;
int index_125;
_Bool child_field_is_pointer_126;
char* child_field_name_127;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
_Bool __result_obj__57;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_128;
struct tuple2$2char$phsType$ph* field_129;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_130=0;
struct sType* field_type2_131=0;
void* __right_value136 = (void*)0;
struct sType* __dec_obj76;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_132;
struct tuple2$2char$phsType$ph* field_133;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* field_name_134=0;
struct sType* field_type2_135=0;
struct sClass* klass2_136;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_137;
struct tuple2$2char$phsType$ph* field2_138;
struct tuple2$2char$phsType$ph* multiple_assign_var7 = (void*)0;
char* field_name2_139=0;
struct sType* field_type3_140=0;
void* __right_value137 = (void*)0;
char* __dec_obj77;
void* __right_value138 = (void*)0;
struct sType* __dec_obj78;
void* __right_value139 = (void*)0;
struct sType* __dec_obj79;
void* __right_value140 = (void*)0;
_Bool __result_obj__58;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value143 = (void*)0;
char* __dec_obj80;
void* __right_value144 = (void*)0;
char* __dec_obj81;
void* __right_value145 = (void*)0;
char* __dec_obj82;
void* __right_value146 = (void*)0;
char* __dec_obj83;
void* __right_value147 = (void*)0;
char* __dec_obj84;
void* __right_value148 = (void*)0;
char* __dec_obj85;
void* __right_value149 = (void*)0;
struct sType* __dec_obj86;
void* __right_value150 = (void*)0;
struct sType* __dec_obj87;
void* __right_value151 = (void*)0;
_Bool __result_obj__59;
void* __right_value152 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__61;
left_type3_119 = (void*)0;
    left_114=self->mLeft;
    name_115=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_116=node_compile(left_114,info);
    if(    !Value_116    ) {
        __result_obj__56 = (_Bool)0;
        (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__56;
    }
    else {
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_118=(struct sType*)come_increment_ref_count(left_value_117->type);
    if(    left_type2_118->mNoSolvedGenericsType    ) {
        __dec_obj73=left_type3_119,
        left_type3_119=(struct sType*)come_increment_ref_count(left_type2_118->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj74=left_type3_119,
        left_type3_119=(struct sType*)come_increment_ref_count(left_type2_118);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    string_operator_equals(left_type3_119->mClass->mName,"tuple1")||string_operator_equals(left_type3_119->mClass->mName,"tuple2")||string_operator_equals(left_type3_119->mClass->mName,"tuple3")||string_operator_equals(left_type3_119->mClass->mName,"tuple3")||string_operator_equals(left_type3_119->mClass->mName,"tuple4")||string_operator_equals(left_type3_119->mClass->mName,"tuple5")    ) {
        for(        i_120=0        ;        i_120<list$1sType$ph_length(left_type3_119->mGenericsTypes)        ;        i_120++        ){
            if(            (_condtional_value_X2=(string_operator_equals(name_115,((struct sType*)(__right_value126=list$1sType$ph_operator_load_element(left_type3_119->mGenericsTypes,i_120)))->mTupleName))),            come_call_finalizer(sType_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            come_call_finalizer(sType_finalize, __right_value126, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X2            ) {
                __dec_obj75=name_115,
                name_115=(char*)come_increment_ref_count(xsprintf("v%d",i_120+1));
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
    }
    left_type_121=(struct sType*)come_increment_ref_count(left_value_117->type);
    come_call_finalizer(sType_finalize, left_type3_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    left_type3_122=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(left_type_121),(struct sType*)come_increment_ref_count(left_type_121),info));
    klass_123=left_type3_122->mClass;
    klass_123=((struct sClass*)(__right_value131=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value130=__builtin_string(klass_123->mName))))));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    field_type_124=((void*)0);
    index_125=0;
    child_field_is_pointer_126=(_Bool)0;
    child_field_name_127=((void*)0);
    klass_123=((struct sClass*)(__right_value134=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value133=__builtin_string(klass_123->mName))))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sClass_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    klass_123==((void*)0)||klass_123->mFields==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value135=err_msg(info,"invalid class %s",klass_123->mName)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__57 = (_Bool)1;
        (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_127 = come_decrement_ref_count(child_field_name_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__57;
    }
    for(    o2_saved_128=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_123->mFields)),field_129=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_128))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_128))    ;    field_129=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_128))    ){
        multiple_assign_var5=field_129;
        field_name_130=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        field_type2_131=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        string_operator_equals(field_name_130,name_115)        ) {
            __dec_obj76=field_type_124,
            field_type_124=(struct sType*)come_increment_ref_count(sType_clone(field_type2_131));
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            (field_name_130 = come_decrement_ref_count(field_name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        index_125++;
        (field_name_130 = come_decrement_ref_count(field_name_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type2_131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    index_125==list$1tuple2$2char$phsType$ph$ph_length(klass_123->mFields)    ) {
        index_125=0;
        for(        o2_saved_132=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_123->mFields)),field_133=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_132))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_132))        ;        field_133=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_132))        ){
            multiple_assign_var6=field_133;
            field_name_134=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            field_type2_135=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
            klass2_136=field_type2_135->mClass;
            if(            klass2_136->mUnion            ) {
                for(                o2_saved_137=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_136->mFields)),field2_138=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_137))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_137))                ;                field2_138=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_137))                ){
                    multiple_assign_var7=field2_138;
                    field_name2_139=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                    field_type3_140=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                    if(                    string_operator_equals(field_name2_139,name_115)                    ) {
                        __dec_obj77=child_field_name_127,
                        child_field_name_127=(char*)come_increment_ref_count(__builtin_string(field_name_134));
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        field_type2_135->mPointerNum>0                        ) {
                            child_field_is_pointer_126=(_Bool)1;
                        }
                        __dec_obj78=field_type_124,
                        field_type_124=(struct sType*)come_increment_ref_count(sType_clone(field_type3_140));
                        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                        (field_name2_139 = come_decrement_ref_count(field_name2_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, field_type3_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        break;
                    }
                    (field_name2_139 = come_decrement_ref_count(field_name2_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type3_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                if(                child_field_name_127                ) {
                    (field_name_134 = come_decrement_ref_count(field_name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type2_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_134,name_115)            ) {
                __dec_obj79=field_type_124,
                field_type_124=(struct sType*)come_increment_ref_count(sType_clone(field_type2_135));
                come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (field_name_134 = come_decrement_ref_count(field_name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type2_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
            }
            index_125++;
            (field_name_134 = come_decrement_ref_count(field_name_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type2_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        index_125==list$1tuple2$2char$phsType$ph$ph_length(klass_123->mFields)        ) {
            ((struct tuple2$2int$bool$*)(__right_value140=err_msg(info,"field not found(%s) in %s(2)",name_115,klass_123->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value140, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__58 = (_Bool)1;
            (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(CVALUE_finalize, left_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type2_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type3_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, field_type_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (child_field_name_127 = come_decrement_ref_count(child_field_name_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__58;
        }
    }
    come_value_141=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 466, "struct CVALUE*"))));
    if(    left_value_117->type->mPointerNum>0    ) {
        if(        child_field_name_127        ) {
            if(            child_field_is_pointer_126            ) {
                __dec_obj80=come_value_141->c_value,
                come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_117->c_value,child_field_name_127,name_115));
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj81=come_value_141->c_value,
                come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_117->c_value,child_field_name_127,name_115));
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj82=come_value_141->c_value,
            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_117->c_value,name_115));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        if(        child_field_name_127        ) {
            if(            child_field_is_pointer_126            ) {
                __dec_obj83=come_value_141->c_value,
                come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_117->c_value,child_field_name_127,name_115));
                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                __dec_obj84=come_value_141->c_value,
                come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_117->c_value,child_field_name_127,name_115));
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
        }
        else {
            __dec_obj85=come_value_141->c_value,
            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_117->c_value,name_115));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    __dec_obj86=come_value_141->type,
    come_value_141->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_124));
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj87=come_value_141->type,
    come_value_141->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_141->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_141->var=((void*)0);
    if(    field_type_124==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value151=err_msg(info,"no field(%s)",name_115)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__59 = (_Bool)1;
        (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, left_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type2_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type3_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, field_type_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (child_field_name_127 = come_decrement_ref_count(child_field_name_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__59;
    }
    if(    list$1sNode$ph_length(come_value_141->type->mArrayNum)==1    ) {
        __dec_obj88=come_value_141->type->mOriginalLoadVarType,
        come_value_141->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_141->type));
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sNode$ph_reset(come_value_141->type->mArrayNum);
        come_value_141->type->mPointerNum++;
        come_value_141->type->mOriginalTypeNamePointerNum=come_value_141->type->mPointerNum;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
    __result_obj__61 = (_Bool)1;
    (name_115 = come_decrement_ref_count(name_115, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, left_value_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type2_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type3_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, field_type_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (child_field_name_127 = come_decrement_ref_count(child_field_name_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__61;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_142;
struct list_item$1sNode$ph* prev_it_143;
struct list$1sNode$ph* __result_obj__60;
    it_142=self->head;
    while(    it_142!=((void*)0)    ) {
        prev_it_143=it_142;
        it_142=it_142->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sNode* _inf_value1;
struct sLoadFieldNode* _inf_obj_value1;
void* __right_value159 = (void*)0;
struct sNode* __result_obj__64;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 526, "struct sNode");
    _inf_obj_value1=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value154=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 526, "struct sLoadFieldNode*")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value1->clone=(void*)sLoadFieldNode_clone;
    _inf_value1->compile=(void*)sLoadFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sLoadFieldNode_kind;
    _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__64 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value159=_inf_value1)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sLoadFieldNode_finalize, __right_value154, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value159) ? __right_value159 = come_decrement_ref_count(__right_value159, ((struct sNode*)__right_value159)->finalize, ((struct sNode*)__right_value159)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__62;
void* __right_value155 = (void*)0;
struct sLoadFieldNode* result_144;
void* __right_value156 = (void*)0;
char* __dec_obj89;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value158 = (void*)0;
char* __dec_obj91;
struct sLoadFieldNode* __result_obj__63;
    if(    self==(void*)0    ) {
        __result_obj__62 = (void*)0;
        return __result_obj__62;
    }
    result_144=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_144->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj89=result_144->sname,
        result_144->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadFieldNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_144->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj90=result_144->mLeft,
        result_144->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj91=result_144->mName,
        result_144->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sLoadFieldNode_clone", 8, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__63 = result_144;
    come_call_finalizer(sLoadFieldNode_finalize, result_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj93;
void* __right_value163 = (void*)0;
struct list$1sNode$ph* __dec_obj94;
struct sStoreArrayNode* __result_obj__65;
    ((struct sNodeBase*)(__right_value160=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj92=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj93=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj94=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mQuote=quote;
    __result_obj__65 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sStoreArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sStoreArrayNode_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value164 = (void*)0;
char* __result_obj__66;
    __result_obj__66 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string("sStoreArrayNode"))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__66 = come_decrement_ref_count(__result_obj__66, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__66;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_145;
struct sNode* right_146;
struct list$1sNode$ph* array_num_nodes_147;
_Bool Value_148;
_Bool __result_obj__67;
void* __right_value165 = (void*)0;
struct CVALUE* left_value_149;
struct sType* left_type_150;
void* __right_value166 = (void*)0;
_Bool __result_obj__68;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct list$1CVALUE$ph* array_num_151;
struct list$1sNode$ph* o2_saved_154;
struct sNode* it_157;
_Bool Value_160;
_Bool __result_obj__76;
void* __right_value169 = (void*)0;
struct CVALUE* c_value_161;
char* fun_name_162;
void* __right_value170 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var8 = (void*)0;
char* fun_name2_163=0;
struct sFun* operator_fun_164=0;
struct sGenericsFun* generics_fun_165=0;
_Bool Value_166;
_Bool __result_obj__77;
void* __right_value171 = (void*)0;
struct CVALUE* right_value_167;
struct sType* right_type_168;
struct sClass* klass_169;
void* __right_value172 = (void*)0;
struct sType* type_170;
_Bool calling_fun_171;
void* __right_value173 = (void*)0;
struct sNode* middle_172;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct CVALUE* come_value_185;
int i_186;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct buffer* buf_199;
struct list$1CVALUE$ph* o2_saved_200;
struct CVALUE* it_203;
void* __right_value179 = (void*)0;
char* left_value_code_206;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* __dec_obj95;
void* __right_value182 = (void*)0;
char* __dec_obj96;
void* __right_value183 = (void*)0;
_Bool __result_obj__94;
void* __right_value184 = (void*)0;
char* __dec_obj97;
void* __right_value185 = (void*)0;
char* __dec_obj98;
void* __right_value186 = (void*)0;
_Bool __result_obj__95;
void* __right_value187 = (void*)0;
struct sType* result_type_207;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1sNode$ph* __dec_obj99;
struct sType* __dec_obj100;
void* __right_value190 = (void*)0;
struct sType* __dec_obj101;
_Bool __result_obj__96;
memset(&calling_fun_171, 0, sizeof(_Bool));
    left_145=(struct sNode*)come_increment_ref_count(self->mLeft);
    right_146=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_147=self->mArrayNum;
    Value_148=node_compile(left_145,info);
    if(    !Value_148    ) {
        __result_obj__67 = (_Bool)0;
        ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__67;
    }
    else {
    }
    left_value_149=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_150=(struct sType*)come_increment_ref_count(left_value_149->type);
    if(    left_type_150->mImmutable    ) {
        ((struct tuple2$2int$bool$*)(__right_value166=err_msg(info,"Immutable object can't change the elements")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value166, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__68 = (_Bool)1;
        ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__68;
    }
    array_num_151=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 565, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_154=(array_num_nodes_147),it_157=list$1sNode$ph_begin((o2_saved_154))    ;    !list$1sNode$ph_end((o2_saved_154))    ;    it_157=list$1sNode$ph_next((o2_saved_154))    ){
        Value_160=node_compile(it_157,info);
        if(        !Value_160        ) {
            __result_obj__76 = (_Bool)0;
            ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__76;
        }
        else {
        }
        c_value_161=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_151,(struct CVALUE*)come_increment_ref_count(c_value_161));
        come_call_finalizer(CVALUE_finalize, c_value_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    fun_name_162="operator_store_element";
    multiple_assign_var8=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value170=get_method(fun_name_162,(struct sType*)come_increment_ref_count(left_type_150),info)));
    fun_name2_163=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    operator_fun_164=multiple_assign_var8->v2;
    generics_fun_165=multiple_assign_var8->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value170, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_166=node_compile(right_146,info);
    if(    !Value_166    ) {
        __result_obj__77 = (_Bool)0;
        ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_163 = come_decrement_ref_count(fun_name2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__77;
    }
    else {
    }
    right_value_167=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_168=right_value_167->type;
    klass_169=left_value_149->type->mClass;
    type_170=(struct sType*)come_increment_ref_count(sType_clone(left_value_149->type));
    if(    self->mQuote    ) {
        calling_fun_171=(_Bool)0;
    }
    else {
        middle_172=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_147,0));
        calling_fun_171=operator_overload_fun2((struct sType*)come_increment_ref_count(type_170),fun_name_162,(struct sNode*)come_increment_ref_count(left_145),(struct sNode*)come_increment_ref_count(middle_172),(struct sNode*)come_increment_ref_count(right_146),left_value_149,((struct CVALUE*)(__right_value174=list$1CVALUE$ph_operator_load_element(array_num_151,0))),right_value_167,info);
        come_call_finalizer(CVALUE_finalize, __right_value174, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_172) ? middle_172 = come_decrement_ref_count(middle_172, ((struct sNode*)middle_172)->finalize, ((struct sNode*)middle_172)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_171    ) {
        come_value_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 602, "struct CVALUE*"))));
        if(        list$1sNode$ph_length(left_type_150->mArrayNum)>0        ) {
            for(            i_186=0            ;            i_186<list$1CVALUE$ph_length(array_num_151)            ;            i_186++            ){
                list$1sNode$ph_delete(left_type_150->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_150->mPointerNum>0        ) {
            left_type_150->mPointerNum-=list$1CVALUE$ph_length(array_num_151);
            if(            left_type_150->mPointerNum<0            ) {
                left_type_150->mPointerNum=0;
            }
        }
        buf_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 617, "struct buffer*"))));
        buffer_append_str(buf_199,left_value_149->c_value);
        for(        o2_saved_200=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_151)),it_203=list$1CVALUE$ph_begin((o2_saved_200))        ;        !list$1CVALUE$ph_end((o2_saved_200))        ;        it_203=list$1CVALUE$ph_next((o2_saved_200))        ){
            buffer_append_format(buf_199,"[%s]",it_203->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_206=(char*)come_increment_ref_count(buffer_to_string(buf_199));
        check_assign_type(((char*)(__right_value180=xsprintf("array is assinged to(2)"))),left_type_150,right_type_168,right_value_167,(_Bool)0,(_Bool)1,(_Bool)1,info);
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        left_type_150->mHeap&&right_type_168->mHeap&&left_type_150->mPointerNum>0&&right_type_168->mPointerNum>0        ) {
            if(            left_value_149->type->mPointerNum>=1            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_150),left_value_code_206,info,(_Bool)0);
                std_move(left_type_150,right_type_168,right_value_167,info,(_Bool)0);
                __dec_obj95=come_value_185->c_value,
                come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_206,right_value_167->c_value));
                __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_149->type->mPointerNum==0            ) {
                decrement_ref_count_object((struct sType*)come_increment_ref_count(left_type_150),left_value_code_206,info,(_Bool)0);
                std_move(left_type_150,right_type_168,right_value_167,info,(_Bool)0);
                __dec_obj96=come_value_185->c_value,
                come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_206,right_value_167->c_value));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value183=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_206,left_value_149->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__94 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_206 = come_decrement_ref_count(left_value_code_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_163 = come_decrement_ref_count(fun_name2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__94;
            }
        }
        else {
            if(            left_value_149->type->mPointerNum>=1            ) {
                __dec_obj97=come_value_185->c_value,
                come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_206,right_value_167->c_value));
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else if(            left_value_149->type->mPointerNum==0            ) {
                __dec_obj98=come_value_185->c_value,
                come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_206,right_value_167->c_value));
                __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value186=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_206,left_value_149->type->mPointerNum)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value186, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__95 = (_Bool)1;
                come_call_finalizer(CVALUE_finalize, come_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(buffer_finalize, buf_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (left_value_code_206 = come_decrement_ref_count(left_value_code_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_163 = come_decrement_ref_count(fun_name2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(CVALUE_finalize, right_value_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__95;
            }
        }
        result_type_207=(struct sType*)come_increment_ref_count(sType_clone(left_type_150));
        __dec_obj99=result_type_207->mArrayNum,
        result_type_207->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 658, "struct list$1sNode$ph*"))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj100=come_value_185->type,
        come_value_185->type=(struct sType*)come_increment_ref_count(result_type_207);
        come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_185->var=((void*)0);
        __dec_obj101=come_value_185->type,
        come_value_185->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_185->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
        add_come_last_code(info,"%s",come_value_185->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_206 = come_decrement_ref_count(left_value_code_206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__96 = (_Bool)1;
    ((left_145) ? left_145 = come_decrement_ref_count(left_145, ((struct sNode*)left_145)->finalize, ((struct sNode*)left_145)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((right_146) ? right_146 = come_decrement_ref_count(right_146, ((struct sNode*)right_146)->finalize, ((struct sNode*)right_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_163 = come_decrement_ref_count(fun_name2_163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, right_value_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__96;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__69 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_152;
struct list_item$1CVALUE$ph* prev_it_153;
    it_152=self->head;
    while(    it_152!=((void*)0)    ) {
        prev_it_153=it_152;
        it_152=it_152->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_155;
struct sNode* __result_obj__70;
struct sNode* __result_obj__71;
struct sNode* result_156;
struct sNode* __result_obj__72;
result_155 = (void*)0;
result_156 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_155,0,sizeof(struct sNode*));
        __result_obj__70 = result_155;
        return __result_obj__70;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_156,0,sizeof(struct sNode*));
    __result_obj__72 = result_156;
    return __result_obj__72;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_158;
struct sNode* __result_obj__73;
struct sNode* __result_obj__74;
struct sNode* result_159;
struct sNode* __result_obj__75;
result_158 = (void*)0;
result_159 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_158,0,sizeof(struct sNode*));
        __result_obj__73 = result_158;
        return __result_obj__73;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__74 = self->it->item;
        return __result_obj__74;
    }
    memset(&result_159,0,sizeof(struct sNode*));
    __result_obj__75 = result_159;
    return __result_obj__75;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_173;
int i_174;
struct sNode* __result_obj__78;
struct sNode* default_value_175;
struct sNode* __result_obj__79;
default_value_175 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_173=self->head;
    i_174=0;
    while(    it_173!=((void*)0)    ) {
        if(        position==i_174        ) {
            __result_obj__78 = (struct sNode*)come_increment_ref_count(it_173->item);
            ((__result_obj__78) ? __result_obj__78 = come_decrement_ref_count(__result_obj__78, ((struct sNode*)__result_obj__78)->finalize, ((struct sNode*)__result_obj__78)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__78;
        }
        it_173=it_173->next;
        i_174++;
    }
    memset(&default_value_175,0,sizeof(struct sNode*));
    __result_obj__79 = (struct sNode*)come_increment_ref_count(default_value_175);
    ((default_value_175) ? default_value_175 = come_decrement_ref_count(default_value_175, ((struct sNode*)default_value_175)->finalize, ((struct sNode*)default_value_175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__79) ? __result_obj__79 = come_decrement_ref_count(__result_obj__79, ((struct sNode*)__result_obj__79)->finalize, ((struct sNode*)__result_obj__79)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__79;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_176;
int i_177;
struct sNode* __result_obj__80;
struct sNode* default_value_178;
struct sNode* __result_obj__81;
default_value_178 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_176=self->head;
    i_177=0;
    while(    it_176!=((void*)0)    ) {
        if(        position==i_177        ) {
            __result_obj__80 = (struct sNode*)come_increment_ref_count(it_176->item);
            ((__result_obj__80) ? __result_obj__80 = come_decrement_ref_count(__result_obj__80, ((struct sNode*)__result_obj__80)->finalize, ((struct sNode*)__result_obj__80)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__80;
        }
        it_176=it_176->next;
        i_177++;
    }
    memset(&default_value_178,0,sizeof(struct sNode*));
    __result_obj__81 = (struct sNode*)come_increment_ref_count(default_value_178);
    ((default_value_178) ? default_value_178 = come_decrement_ref_count(default_value_178, ((struct sNode*)default_value_178)->finalize, ((struct sNode*)default_value_178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__81) ? __result_obj__81 = come_decrement_ref_count(__result_obj__81, ((struct sNode*)__result_obj__81)->finalize, ((struct sNode*)__result_obj__81)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__81;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_179;
int i_180;
struct CVALUE* __result_obj__82;
struct CVALUE* default_value_181;
struct CVALUE* __result_obj__83;
default_value_181 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_179=self->head;
    i_180=0;
    while(    it_179!=((void*)0)    ) {
        if(        position==i_180        ) {
            __result_obj__82 = (struct CVALUE*)come_increment_ref_count(it_179->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__82;
        }
        it_179=it_179->next;
        i_180++;
    }
    memset(&default_value_181,0,sizeof(struct CVALUE*));
    __result_obj__83 = (struct CVALUE*)come_increment_ref_count(default_value_181);
    come_call_finalizer(CVALUE_finalize, default_value_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_182;
int i_183;
struct CVALUE* __result_obj__84;
struct CVALUE* default_value_184;
struct CVALUE* __result_obj__85;
default_value_184 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_182=self->head;
    i_183=0;
    while(    it_182!=((void*)0)    ) {
        if(        position==i_183        ) {
            __result_obj__84 = (struct CVALUE*)come_increment_ref_count(it_182->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__84;
        }
        it_182=it_182->next;
        i_183++;
    }
    memset(&default_value_184,0,sizeof(struct CVALUE*));
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(default_value_184);
    come_call_finalizer(CVALUE_finalize, default_value_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_187;
struct list$1sNode$ph* __result_obj__86;
struct list_item$1sNode$ph* it_188;
int i_189;
struct list_item$1sNode$ph* prev_it_190;
struct list_item$1sNode$ph* it_191;
int i_192;
struct list_item$1sNode$ph* prev_it_193;
struct list_item$1sNode$ph* it_194;
struct list_item$1sNode$ph* head_prev_it_195;
struct list_item$1sNode$ph* tail_it_196;
int i_197;
struct list_item$1sNode$ph* prev_it_198;
struct list$1sNode$ph* __result_obj__87;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_187=tail;
        tail=head;
        head=tmp_187;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_188=self->head;
        i_189=0;
        while(        it_188!=((void*)0)        ) {
            if(            i_189<tail            ) {
                prev_it_190=it_188;
                it_188=it_188->next;
                i_189++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_189==tail            ) {
                self->head=it_188;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_188=it_188->next;
                i_189++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_191=self->head;
        i_192=0;
        while(        it_191!=((void*)0)        ) {
            if(            i_192==head            ) {
                self->tail=it_191->prev;
                self->tail->next=((void*)0);
            }
            if(            i_192>=head            ) {
                prev_it_193=it_191;
                it_191=it_191->next;
                i_192++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_191=it_191->next;
                i_192++;
            }
        }
    }
    else {
        it_194=self->head;
        head_prev_it_195=((void*)0);
        tail_it_196=((void*)0);
        i_197=0;
        while(        it_194!=((void*)0)        ) {
            if(            i_197==head            ) {
                head_prev_it_195=it_194->prev;
            }
            if(            i_197==tail            ) {
                tail_it_196=it_194;
            }
            if(            i_197>=head&&i_197<tail            ) {
                prev_it_198=it_194;
                it_194=it_194->next;
                i_197++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_194=it_194->next;
                i_197++;
            }
        }
        if(        head_prev_it_195!=((void*)0)        ) {
            head_prev_it_195->next=tail_it_196;
        }
        if(        tail_it_196!=((void*)0)        ) {
            tail_it_196->prev=head_prev_it_195;
        }
    }
    __result_obj__87 = self;
    return __result_obj__87;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_201;
struct CVALUE* __result_obj__88;
struct CVALUE* __result_obj__89;
struct CVALUE* result_202;
struct CVALUE* __result_obj__90;
result_201 = (void*)0;
result_202 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_201,0,sizeof(struct CVALUE*));
        __result_obj__88 = result_201;
        return __result_obj__88;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__89 = self->it->item;
        return __result_obj__89;
    }
    memset(&result_202,0,sizeof(struct CVALUE*));
    __result_obj__90 = result_202;
    return __result_obj__90;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_204;
struct CVALUE* __result_obj__91;
struct CVALUE* __result_obj__92;
struct CVALUE* result_205;
struct CVALUE* __result_obj__93;
result_204 = (void*)0;
result_205 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_204,0,sizeof(struct CVALUE*));
        __result_obj__91 = result_204;
        return __result_obj__91;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__92 = self->it->item;
        return __result_obj__92;
    }
    memset(&result_205,0,sizeof(struct CVALUE*));
    __result_obj__93 = result_205;
    return __result_obj__93;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1sNode$ph* __dec_obj102;
void* __right_value193 = (void*)0;
struct sNode* __dec_obj103;
struct sLoadArrayNode* __result_obj__97;
    ((struct sNodeBase*)(__right_value191=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj102=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj103=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__97 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadArrayNode_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value194 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string("sLoadArrayNode"))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_208;
struct list$1sNode$ph* array_num_nodes_209;
_Bool Value_210;
_Bool __result_obj__99;
void* __right_value195 = (void*)0;
struct CVALUE* left_value_211;
void* __right_value196 = (void*)0;
struct sType* left_type_212;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1CVALUE$ph* array_num_213;
struct list$1sNode$ph* o2_saved_214;
struct sNode* it_215;
_Bool Value_216;
_Bool __result_obj__100;
void* __right_value199 = (void*)0;
struct CVALUE* c_value_217;
void* __right_value200 = (void*)0;
struct sType* type_218;
char* fun_name_219;
_Bool calling_fun_220;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct CVALUE* come_value_221;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct buffer* buf_222;
struct list$1CVALUE$ph* o2_saved_223;
struct CVALUE* it_224;
void* __right_value207 = (void*)0;
char* left_value_code_225;
void* __right_value208 = (void*)0;
char* __dec_obj104;
void* __right_value209 = (void*)0;
struct sType* result_type_226;
struct sType* __dec_obj105;
int n_227;
void* __right_value210 = (void*)0;
struct sType* __dec_obj106;
void* __right_value211 = (void*)0;
struct sType* __dec_obj107;
int i_228;
void* __right_value212 = (void*)0;
struct sType* __dec_obj108;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sType* __dec_obj109;
_Bool __result_obj__101;
memset(&calling_fun_220, 0, sizeof(_Bool));
    left_208=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_209=self->mArrayNum;
    Value_210=node_compile(left_208,info);
    if(    !Value_210    ) {
        __result_obj__99 = (_Bool)0;
        ((left_208) ? left_208 = come_decrement_ref_count(left_208, ((struct sNode*)left_208)->finalize, ((struct sNode*)left_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__99;
    }
    else {
    }
    left_value_211=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_212=(struct sType*)come_increment_ref_count(sType_clone(left_value_211->type));
    array_num_213=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 704, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_214=(array_num_nodes_209),it_215=list$1sNode$ph_begin((o2_saved_214))    ;    !list$1sNode$ph_end((o2_saved_214))    ;    it_215=list$1sNode$ph_next((o2_saved_214))    ){
        Value_216=node_compile(it_215,info);
        if(        !Value_216        ) {
            __result_obj__100 = (_Bool)0;
            ((left_208) ? left_208 = come_decrement_ref_count(left_208, ((struct sNode*)left_208)->finalize, ((struct sNode*)left_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__100;
        }
        else {
        }
        c_value_217=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_213,(struct CVALUE*)come_increment_ref_count(c_value_217));
        come_call_finalizer(CVALUE_finalize, c_value_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_218=(struct sType*)come_increment_ref_count(sType_clone(left_value_211->type));
    fun_name_219="operator_load_element";
    if(    self->mQuote    ) {
        calling_fun_220=(_Bool)0;
    }
    else {
        calling_fun_220=operator_overload_fun(type_218,fun_name_219,(struct sNode*)come_increment_ref_count(left_208),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_209,0)),(struct CVALUE*)come_increment_ref_count(left_value_211),(struct CVALUE*)come_increment_ref_count(list$1CVALUE$ph_operator_load_element(array_num_213,0)),self->mBreakGuard,info);
    }
    if(    !calling_fun_220    ) {
        come_value_221=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 728, "struct CVALUE*"))));
        buf_222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 730, "struct buffer*"))));
        buffer_append_str(buf_222,left_value_211->c_value);
        for(        o2_saved_223=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_213)),it_224=list$1CVALUE$ph_begin((o2_saved_223))        ;        !list$1CVALUE$ph_end((o2_saved_223))        ;        it_224=list$1CVALUE$ph_next((o2_saved_223))        ){
            buffer_append_format(buf_222,"[%s]",it_224->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_225=(char*)come_increment_ref_count(buffer_to_string(buf_222));
        __dec_obj104=come_value_221->c_value,
        come_value_221->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_225));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_226=(struct sType*)come_increment_ref_count(sType_clone(left_type_212));
        if(        result_type_226->mOriginalLoadVarType        ) {
            __dec_obj105=result_type_226,
            result_type_226=(struct sType*)come_increment_ref_count(result_type_226->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_226->mArrayNum)>0        ) {
            n_227=list$1sNode$ph_length(result_type_226->mArrayNum)-list$1CVALUE$ph_length(array_num_213);
            if(            n_227==0            ) {
                __dec_obj106=result_type_226,
                result_type_226=(struct sType*)come_increment_ref_count(sType_clone(left_type_212));
                come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_212->mOriginalLoadVarType                ) {
                    __dec_obj107=result_type_226,
                    result_type_226=(struct sType*)come_increment_ref_count(sType_clone(left_type_212->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_226->mArrayNum);
            }
            else if(            n_227>0            ) {
                for(                i_228=0                ;                i_228<n_227                ;                i_228++                ){
                    list$1sNode$ph_delete(result_type_226->mArrayNum,-1,-1);
                }
            }
            else if(            n_227<0            ) {
                list$1sNode$ph_reset(result_type_226->mArrayNum);
                result_type_226->mPointerNum+=n_227;
                if(                result_type_226->mPointerNum<0                ) {
                    result_type_226->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_226->mPointerNum>0            ) {
                result_type_226->mPointerNum-=list$1CVALUE$ph_length(array_num_213);
                if(                result_type_226->mPointerNum<0                ) {
                    result_type_226->mPointerNum=0;
                }
            }
        }
        __dec_obj108=come_value_221->type,
        come_value_221->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_226));
        come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_221->var=((void*)0);
        __dec_obj109=come_value_221->type,
        come_value_221->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(come_value_221->type)),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_221));
        add_come_last_code(info,"%s",come_value_221->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_225 = come_decrement_ref_count(left_value_code_225, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__101 = (_Bool)1;
    ((left_208) ? left_208 = come_decrement_ref_count(left_208, ((struct sNode*)left_208)->finalize, ((struct sNode*)left_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__101;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct list$1sNode$ph* __dec_obj110;
void* __right_value217 = (void*)0;
struct sNode* __dec_obj111;
struct sLoadRangeArrayNode* __result_obj__102;
    ((struct sNodeBase*)(__right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value215, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj110=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj110,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__102 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    come_call_finalizer(sLoadRangeArrayNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sLoadRangeArrayNode_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value218 = (void*)0;
char* __result_obj__103;
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value218=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_229;
struct list$1sNode$ph* array_num_nodes_230;
_Bool Value_231;
_Bool __result_obj__104;
void* __right_value219 = (void*)0;
struct CVALUE* left_value_232;
void* __right_value220 = (void*)0;
struct sType* left_type_233;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1CVALUE$ph* array_num_234;
struct list$1sNode$ph* o2_saved_235;
struct sNode* it_236;
_Bool Value_237;
_Bool __result_obj__105;
void* __right_value223 = (void*)0;
struct CVALUE* c_value_238;
void* __right_value224 = (void*)0;
struct sType* type_239;
char* fun_name_240;
_Bool calling_fun_241;
void* __right_value225 = (void*)0;
struct sNode* middle_242;
void* __right_value226 = (void*)0;
struct sNode* right_243;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_244;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_245;
struct list$1CVALUE$ph* o2_saved_246;
struct CVALUE* it_247;
void* __right_value233 = (void*)0;
char* left_value_code_248;
void* __right_value234 = (void*)0;
char* __dec_obj112;
void* __right_value235 = (void*)0;
struct sType* result_type_249;
struct sType* __dec_obj113;
int n_250;
void* __right_value236 = (void*)0;
struct sType* __dec_obj114;
void* __right_value237 = (void*)0;
struct sType* __dec_obj115;
int i_251;
void* __right_value238 = (void*)0;
struct sType* __dec_obj116;
void* __right_value239 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__106;
memset(&calling_fun_241, 0, sizeof(_Bool));
    left_229=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_230=self->mArrayNum;
    Value_231=node_compile(left_229,info);
    if(    !Value_231    ) {
        __result_obj__104 = (_Bool)0;
        ((left_229) ? left_229 = come_decrement_ref_count(left_229, ((struct sNode*)left_229)->finalize, ((struct sNode*)left_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__104;
    }
    else {
    }
    left_value_232=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_233=(struct sType*)come_increment_ref_count(sType_clone(left_value_232->type));
    array_num_234=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 826, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_235=(array_num_nodes_230),it_236=list$1sNode$ph_begin((o2_saved_235))    ;    !list$1sNode$ph_end((o2_saved_235))    ;    it_236=list$1sNode$ph_next((o2_saved_235))    ){
        Value_237=node_compile(it_236,info);
        if(        !Value_237        ) {
            __result_obj__105 = (_Bool)0;
            ((left_229) ? left_229 = come_decrement_ref_count(left_229, ((struct sNode*)left_229)->finalize, ((struct sNode*)left_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, left_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, left_type_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__105;
        }
        else {
        }
        c_value_238=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_234,(struct CVALUE*)come_increment_ref_count(c_value_238));
        come_call_finalizer(CVALUE_finalize, c_value_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    type_239=(struct sType*)come_increment_ref_count(sType_clone(left_value_232->type));
    fun_name_240="operator_load_range_element";
    if(    self->mQuote    ) {
        calling_fun_241=(_Bool)0;
    }
    else {
        middle_242=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_230,0));
        right_243=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_230,1));
        calling_fun_241=operator_overload_fun2((struct sType*)come_increment_ref_count(type_239),fun_name_240,(struct sNode*)come_increment_ref_count(left_229),(struct sNode*)come_increment_ref_count(middle_242),(struct sNode*)come_increment_ref_count(right_243),left_value_232,((struct CVALUE*)(__right_value227=list$1CVALUE$ph_operator_load_element(array_num_234,0))),((struct CVALUE*)(__right_value228=list$1CVALUE$ph_operator_load_element(array_num_234,1))),info);
        come_call_finalizer(CVALUE_finalize, __right_value227, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, __right_value228, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((middle_242) ? middle_242 = come_decrement_ref_count(middle_242, ((struct sNode*)middle_242)->finalize, ((struct sNode*)middle_242)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((right_243) ? right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    !calling_fun_241    ) {
        come_value_244=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 852, "struct CVALUE*"))));
        buf_245=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 854, "struct buffer*"))));
        buffer_append_str(buf_245,left_value_232->c_value);
        for(        o2_saved_246=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_234)),it_247=list$1CVALUE$ph_begin((o2_saved_246))        ;        !list$1CVALUE$ph_end((o2_saved_246))        ;        it_247=list$1CVALUE$ph_next((o2_saved_246))        ){
            buffer_append_format(buf_245,"[%s]",it_247->c_value);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        left_value_code_248=(char*)come_increment_ref_count(buffer_to_string(buf_245));
        __dec_obj112=come_value_244->c_value,
        come_value_244->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_248));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type_249=(struct sType*)come_increment_ref_count(sType_clone(left_type_233));
        if(        result_type_249->mOriginalLoadVarType        ) {
            __dec_obj113=result_type_249,
            result_type_249=(struct sType*)come_increment_ref_count(result_type_249->mOriginalLoadVarType);
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_249->mArrayNum)>0        ) {
            n_250=list$1sNode$ph_length(result_type_249->mArrayNum)-list$1CVALUE$ph_length(array_num_234);
            if(            n_250==0            ) {
                __dec_obj114=result_type_249,
                result_type_249=(struct sType*)come_increment_ref_count(sType_clone(left_type_233));
                come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                left_type_233->mOriginalLoadVarType                ) {
                    __dec_obj115=result_type_249,
                    result_type_249=(struct sType*)come_increment_ref_count(sType_clone(left_type_233->mOriginalLoadVarType));
                    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_249->mArrayNum);
            }
            else if(            n_250>0            ) {
                for(                i_251=0                ;                i_251<n_250                ;                i_251++                ){
                    list$1sNode$ph_delete(result_type_249->mArrayNum,-1,-1);
                }
            }
            else if(            n_250<0            ) {
                list$1sNode$ph_reset(result_type_249->mArrayNum);
                result_type_249->mPointerNum+=n_250;
                if(                result_type_249->mPointerNum<0                ) {
                    result_type_249->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_249->mPointerNum>0            ) {
                result_type_249->mPointerNum-=list$1CVALUE$ph_length(array_num_234);
                if(                result_type_249->mPointerNum<0                ) {
                    result_type_249->mPointerNum=0;
                }
            }
        }
        __dec_obj116=come_value_244->type,
        come_value_244->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_249));
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value_244->var=((void*)0);
        __dec_obj117=come_value_244->type,
        come_value_244->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_244->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_244));
        add_come_last_code(info,"%s",come_value_244->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (left_value_code_248 = come_decrement_ref_count(left_value_code_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__106 = (_Bool)1;
    ((left_229) ? left_229 = come_decrement_ref_count(left_229, ((struct sNode*)left_229)->finalize, ((struct sNode*)left_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, left_type_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__106;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value240 = (void*)0;
struct sNode* __result_obj__107;
    ((struct tuple2$2int$bool$*)(__right_value240=err_msg(info,"parse_method_call is failed")));
    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value240, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit(2);
    __result_obj__107 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sNode* _inf_value2;
struct sStoreFieldNode* _inf_obj_value2;
void* __right_value248 = (void*)0;
struct sNode* __result_obj__110;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 930, "struct sNode");
    _inf_obj_value2=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value242=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 930, "struct sStoreFieldNode*")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value2->clone=(void*)sStoreFieldNode_clone;
    _inf_value2->compile=(void*)sStoreFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sStoreFieldNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    __result_obj__110 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value248=_inf_value2)));
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sStoreFieldNode_finalize, __right_value242, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value248) ? __right_value248 = come_decrement_ref_count(__right_value248, ((struct sNode*)__right_value248)->finalize, ((struct sNode*)__right_value248)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__110) ? __result_obj__110 = come_decrement_ref_count(__result_obj__110, ((struct sNode*)__result_obj__110)->finalize, ((struct sNode*)__result_obj__110)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__110;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__108;
void* __right_value243 = (void*)0;
struct sStoreFieldNode* result_252;
void* __right_value244 = (void*)0;
char* __dec_obj118;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value246 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value247 = (void*)0;
char* __dec_obj121;
struct sStoreFieldNode* __result_obj__109;
    if(    self==(void*)0    ) {
        __result_obj__108 = (void*)0;
        return __result_obj__108;
    }
    result_252=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*"));
    if(    self!=((void*)0)    ) {
        result_252->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj118=result_252->sname,
        result_252->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreFieldNode_clone", 5, "char*"));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_252->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj119=result_252->mLeft,
        result_252->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj120=result_252->mRight,
        result_252->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj121=result_252->mName,
        result_252->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStoreFieldNode_clone", 9, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__109 = result_252;
    come_call_finalizer(sStoreFieldNode_finalize, result_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_253;
char* p_254;
int sline_255;
_Bool no_comma_256;
_Bool no_output_err_257;
_Bool no_output_come_code_258;
void* __right_value249 = (void*)0;
struct sNode* exp_259;
_Bool quote_260;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1sNode$ph* array_num_261;
void* __right_value252 = (void*)0;
struct sNode* node2_262;
void* __right_value256 = (void*)0;
struct sNode* node3_266;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sNode* _inf_value3;
struct sLoadRangeArrayNode* _inf_obj_value3;
void* __right_value263 = (void*)0;
struct sNode* __dec_obj128;
_Bool quote_268;
_Bool range_269;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNode$ph* array_num_270;
_Bool range_array2_271;
char* p_272;
int sline_273;
_Bool no_comma_274;
_Bool no_output_err_275;
_Bool no_output_come_code_276;
void* __right_value266 = (void*)0;
struct sNode* exp_277;
void* __right_value267 = (void*)0;
struct sNode* node2_278;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* right_node_279;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* _inf_value4;
struct sStoreArrayNode* _inf_obj_value4;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sNode* _inf_value5;
struct sLoadArrayNode* _inf_obj_value5;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value285 = (void*)0;
char* field_name_282;
_Bool parse_method_generics_type_283;
char* p_284;
int sline_285;
void* __right_value286 = (void*)0;
char* word_286;
void* __right_value287 = (void*)0;
struct sNode* right_node_287;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* _inf_value6;
struct sStoreFieldNode* _inf_obj_value6;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sNode* _inf_value7;
struct sLoadFieldNode* _inf_obj_value7;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value308 = (void*)0;
struct sNode* node2_288;
struct sNode* __dec_obj147;
struct sNode* __result_obj__118;
    while(    (_Bool)1    ) {
        range_array_253=(_Bool)0;
        {
            p_254=info->p;
            sline_255=info->sline;
            if(            *info->p==91            ) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_256=info->no_comma;
                no_output_err_257=info->no_output_err;
                no_output_come_code_258=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_259=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_256;
                info->no_output_err=no_output_err_257;
                info->no_output_come_code=no_output_come_code_258;
                if(                *info->p==46&&*(info->p+1)==46                ) {
                    range_array_253=(_Bool)1;
                }
                ((exp_259) ? exp_259 = come_decrement_ref_count(exp_259, ((struct sNode*)exp_259)->finalize, ((struct sNode*)exp_259)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            info->p=p_254;
            info->sline=sline_255;
        }
        if(        range_array_253&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_260=*info->p==92;
            if(            quote_260            ) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_261=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 974, "struct list$1sNode$ph*"))));
            skip_pointer_attribute(info);
            node2_262=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_push_back(array_num_261,(struct sNode*)come_increment_ref_count(node2_262));
            if(            *info->p==46&&*(info->p+1)==46            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_266=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(array_num_261,(struct sNode*)come_increment_ref_count(node3_266));
                expected_next_character(93,info);
                ((node3_266) ? node3_266 = come_decrement_ref_count(node3_266, ((struct sNode*)node3_266)->finalize, ((struct sNode*)node3_266)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 995, "struct sNode");
            _inf_obj_value3=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value258=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 995, "struct sLoadRangeArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_261),quote_260,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value3->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value3->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sLoadRangeArrayNode_kind;
            _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj128=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value258, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node2_262) ? node2_262 = come_decrement_ref_count(node2_262, ((struct sNode*)node2_262)->finalize, ((struct sNode*)node2_262)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else if(        !range_array_253&&(*info->p==92&&*(info->p+1)==91||*info->p==91)        ) {
            quote_268=*info->p==92;
            if(            quote_268            ) {
                info->p++;
            }
            range_269=(_Bool)0;
            array_num_270=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1004, "struct list$1sNode$ph*"))));
            while(            1            ) {
                range_array2_271=(_Bool)0;
                {
                    p_272=info->p;
                    sline_273=info->sline;
                    if(                    *info->p==91                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_274=info->no_comma;
                        no_output_err_275=info->no_output_err;
                        no_output_come_code_276=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_277=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_274;
                        info->no_output_err=no_output_err_275;
                        info->no_output_come_code=no_output_come_code_276;
                        if(                        *info->p==46&&*(info->p+1)==46                        ) {
                            range_array2_271=(_Bool)1;
                        }
                        ((exp_277) ? exp_277 = come_decrement_ref_count(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    info->p=p_272;
                    info->sline=sline_273;
                }
                if(                range_array2_271                ) {
                    break;
                }
                else if(                *info->p==91                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_278=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(array_num_270,(struct sNode*)come_increment_ref_count(node2_278));
                    if(                    *info->p==93                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value268=err_msg(info,"require ] character")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value268, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    ((node2_278) ? node2_278 = come_decrement_ref_count(node2_278, ((struct sNode*)node2_278)->finalize, ((struct sNode*)node2_278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            if(            *info->p==63&&*(info->p+1)==63            ) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_279=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1077, "struct sNode");
                _inf_obj_value4=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value271=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1077, "struct sStoreArrayNode*")),node,(struct sNode*)come_increment_ref_count(right_node_279),(struct list$1sNode$ph*)come_increment_ref_count(array_num_270),quote_268,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value4->clone=(void*)sStoreArrayNode_clone;
                _inf_value4->compile=(void*)sStoreArrayNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sStoreArrayNode_kind;
                _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj133=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value4);
                (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value271, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_279) ? right_node_279 = come_decrement_ref_count(right_node_279, ((struct sNode*)right_node_279)->finalize, ((struct sNode*)right_node_279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1080, "struct sNode");
                _inf_obj_value5=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value279=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1080, "struct sLoadArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_270),quote_268,(_Bool)0,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadArrayNode_clone;
                _inf_value5->compile=(void*)sLoadArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sLoadArrayNode_kind;
                _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj137=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)        ) {
            if(            *info->p==46            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_282=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_283=(_Bool)0;
            {
                p_284=info->p;
                sline_285=info->sline;
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_286=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_286,info)                        ) {
                            parse_method_generics_type_283=(_Bool)1;
                        }
                        (word_286 = come_decrement_ref_count(word_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                info->p=p_284;
                info->sline=sline_285;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62            ) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_287=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1135, "struct sNode");
                _inf_obj_value6=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value289=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1135, "struct sStoreFieldNode*")),node,(struct sNode*)come_increment_ref_count(right_node_287),(char*)come_increment_ref_count(field_name_282),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value6->clone=(void*)sStoreFieldNode_clone;
                _inf_value6->compile=(void*)sStoreFieldNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sStoreFieldNode_kind;
                _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj138=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                ((right_node_287) ? right_node_287 = come_decrement_ref_count(right_node_287, ((struct sNode*)right_node_287)->finalize, ((struct sNode*)right_node_287)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else if(            string_operator_equals(field_name_282,"expect")            ) {
                __dec_obj139=node,
                node=(struct sNode*)come_increment_ref_count(parse_expect_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type_283)            ) {
                if(                string_operator_equals(field_name_282,"if")                ) {
                    __dec_obj140=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_282,"elif")                ) {
                    __dec_obj141=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_282,"case")                ) {
                    __dec_obj142=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_282,"less")                ) {
                    __dec_obj143=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_282,"rescue")                ) {
                    __dec_obj144=node,
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
                else {
                    __dec_obj145=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_282),info));
                    (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                }
            }
            else {
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1162, "struct sNode");
                _inf_obj_value7=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value306=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1162, "struct sLoadFieldNode*")),node,(char*)come_increment_ref_count(field_name_282),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value7->clone=(void*)sLoadFieldNode_clone;
                _inf_value7->compile=(void*)sLoadFieldNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sLoadFieldNode_kind;
                _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
                __dec_obj146=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7);
                (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (field_name_282 = come_decrement_ref_count(field_name_282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            node2_288=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_288==((void*)0)            ) {
                ((node2_288) ? node2_288 = come_decrement_ref_count(node2_288, ((struct sNode*)node2_288)->finalize, ((struct sNode*)node2_288)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(node2_288);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            ((node2_288) ? node2_288 = come_decrement_ref_count(node2_288, ((struct sNode*)node2_288)->finalize, ((struct sNode*)node2_288)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    __result_obj__118 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__118) ? __result_obj__118 = come_decrement_ref_count(__result_obj__118, ((struct sNode*)__result_obj__118)->finalize, ((struct sNode*)__result_obj__118)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__118;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value253 = (void*)0;
struct list_item$1sNode$ph* litem_263;
struct sNode* __dec_obj122;
void* __right_value254 = (void*)0;
struct list_item$1sNode$ph* litem_264;
struct sNode* __dec_obj123;
void* __right_value255 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj124;
struct list$1sNode$ph* __result_obj__111;
    if(    self->len==0    ) {
        litem_263=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value253=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sNode$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj122=litem_263->item,
        litem_263->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1    ) {
        litem_264=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value254=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sNode$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj123=litem_264->item,
        litem_264->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value255=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sNode$ph*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj124=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__111 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__111;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__112;
void* __right_value259 = (void*)0;
struct sLoadRangeArrayNode* result_267;
void* __right_value260 = (void*)0;
char* __dec_obj125;
void* __right_value261 = (void*)0;
struct list$1sNode$ph* __dec_obj126;
void* __right_value262 = (void*)0;
struct sNode* __dec_obj127;
struct sLoadRangeArrayNode* __result_obj__113;
    if(    self==(void*)0    ) {
        __result_obj__112 = (void*)0;
        return __result_obj__112;
    }
    result_267=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_267->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj125=result_267->sname,
        result_267->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadRangeArrayNode_clone", 5, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_267->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj126=result_267->mArrayNum,
        result_267->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj127=result_267->mLeft,
        result_267->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_267->mQuote=self->mQuote;
    }
    __result_obj__113 = result_267;
    come_call_finalizer(sLoadRangeArrayNode_finalize, result_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__114;
void* __right_value272 = (void*)0;
struct sStoreArrayNode* result_280;
void* __right_value273 = (void*)0;
char* __dec_obj129;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value276 = (void*)0;
struct list$1sNode$ph* __dec_obj132;
struct sStoreArrayNode* __result_obj__115;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_280=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_280->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj129=result_280->sname,
        result_280->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreArrayNode_clone", 5, "char*"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_280->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj130=result_280->mLeft,
        result_280->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)    ) {
        __dec_obj131=result_280->mRight,
        result_280->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj132=result_280->mArrayNum,
        result_280->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_280->mQuote=self->mQuote;
    }
    __result_obj__115 = result_280;
    come_call_finalizer(sStoreArrayNode_finalize, result_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__116;
void* __right_value280 = (void*)0;
struct sLoadArrayNode* result_281;
void* __right_value281 = (void*)0;
char* __dec_obj134;
void* __right_value282 = (void*)0;
struct list$1sNode$ph* __dec_obj135;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj136;
struct sLoadArrayNode* __result_obj__117;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)0;
        return __result_obj__116;
    }
    result_281=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*"));
    if(    self!=((void*)0)    ) {
        result_281->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj134=result_281->sname,
        result_281->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadArrayNode_clone", 5, "char*"));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_281->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj135=result_281->mArrayNum,
        result_281->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_281->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)    ) {
        __dec_obj136=result_281->mLeft,
        result_281->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)    ) {
        result_281->mQuote=self->mQuote;
    }
    __result_obj__117 = result_281;
    come_call_finalizer(sLoadArrayNode_finalize, result_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

