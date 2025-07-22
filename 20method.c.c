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

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
    _Bool no_err;
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
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info, _Bool no_err);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value0 = (void*)0;
char* none_generics_name_8;
void* __right_value1 = (void*)0;
char* fun_name2_9;
void* __right_value2 = (void*)0;
char* fun_name3_10;
void* __right_value40 = (void*)0;
struct sType* no_solved_type_11;
void* __right_value41 = (void*)0;
struct sGenericsFun* generics_fun_41;
struct sType* type2_44;
void* __right_value42 = (void*)0;
struct sType* type_before_45;
void* __right_value43 = (void*)0;
char* __dec_obj24;
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_46=0;
_Bool err_47=0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__22;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__24;
    none_generics_name_8=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_9=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_10=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_8,fun_name));
    no_solved_type_11=(struct sType*)come_increment_ref_count(sType_clone(type));
    generics_fun_41=((struct sGenericsFun*)(__right_value41=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_10,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value41, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    generics_fun_41    ) {
        type2_44=(struct sType*)come_increment_ref_count(no_solved_type_11);
        type_before_45=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj24=fun_name2_9,
        fun_name2_9=(char*)come_increment_ref_count(create_method_name(type2_44,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value45=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_9)),generics_fun_41,(struct sType*)come_increment_ref_count(type2_44),info)));
        name_46=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_47=multiple_assign_var1->v2;
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_47        ) {
            ((struct tuple2$2int$bool$*)(__right_value46=err_msg(info,"%s not found",fun_name3_10)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__22 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value49=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 24, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            come_call_finalizer(sType_finalize, type2_44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, type_before_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_46 = come_decrement_ref_count(name_46, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (none_generics_name_8 = come_decrement_ref_count(none_generics_name_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name2_9 = come_decrement_ref_count(fun_name2_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name3_10 = come_decrement_ref_count(fun_name3_10, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, no_solved_type_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__22;
        }
        type=type_before_45;
        come_call_finalizer(sType_finalize, type2_44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, type_before_45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_46 = come_decrement_ref_count(name_46, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__24 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value52=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 30, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2_9, "20method.c", 30, "char*")),generics_fun_41))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (none_generics_name_8 = come_decrement_ref_count(none_generics_name_8, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name2_9 = come_decrement_ref_count(fun_name2_9, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name3_10 = come_decrement_ref_count(fun_name3_10, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, no_solved_type_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__24;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value3 = (void*)0;
struct sType* result_12;
void* __right_value4 = (void*)0;
struct sType* __dec_obj1;
void* __right_value5 = (void*)0;
struct sType* __dec_obj2;
void* __right_value13 = (void*)0;
struct list$1sType$ph* __dec_obj6;
void* __right_value14 = (void*)0;
struct sType* __dec_obj7;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj8;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value18 = (void*)0;
char* __dec_obj10;
void* __right_value19 = (void*)0;
char* __dec_obj11;
void* __right_value20 = (void*)0;
char* __dec_obj12;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj16;
void* __right_value29 = (void*)0;
char* __dec_obj17;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj22;
void* __right_value39 = (void*)0;
struct sType* __dec_obj23;
struct sType* __result_obj__16;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)0;
        return __result_obj__1;
    }
    result_12=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_12->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj1=result_12->mOriginalLoadVarType,
        result_12->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj2=result_12->mChannelType,
        result_12->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj6=result_12->mGenericsTypes,
        result_12->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj7=result_12->mNoSolvedGenericsType,
        result_12->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj8=result_12->mSizeNum,
        result_12->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj9=result_12->mAlignas,
        result_12->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj10=result_12->mTupleName,
        result_12->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj11=result_12->mAttribute,
        result_12->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_12->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_12->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_12->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_12->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_12->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_12->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_12->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_12->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_12->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_12->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_12->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_12->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_12->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_12->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_12->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_12->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_12->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_12->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_12->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_12->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_12->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_12->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_12->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_12->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj12=result_12->mAsmName,
        result_12->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 37, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_12->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_12->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_12->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj16=result_12->mArrayNum,
        result_12->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_12->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_12->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_12->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_12->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_12->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj17=result_12->mOriginalTypeName,
        result_12->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 47, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_12->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_12->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_12->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_12->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj18=result_12->mParamTypes,
        result_12->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj22=result_12->mParamNames,
        result_12->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj23=result_12->mResultType,
        result_12->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_12->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_12->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__16 = result_12;
    come_call_finalizer(sType_finalize, result_12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1sType$ph* it_13;
struct list_item$1sType$ph* prev_it_14;
    it_13=self->head;
    while(    it_13!=((void*)0)    ) {
        prev_it_14=it_13;
        it_13=it_13->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_15;
struct list_item$1sNode$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_17;
struct list_item$1char$ph* prev_it_18;
    it_17=self->head;
    while(    it_17!=((void*)0)    ) {
        prev_it_18=it_17;
        it_17=it_17->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1sType$ph* result_19;
struct list_item$1sType$ph* it_20;
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)    ) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__2;
    }
    result_19=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sType$ph*"))));
    it_20=self->head;
    while(    it_20!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_19,(struct sType*)come_increment_ref_count(sType_clone(it_20->item)));
        }
        else {
            list$1sType$ph_add(result_19,(struct sType*)come_increment_ref_count(sType_clone(it_20->item)));
        }
        it_20=it_20->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_19);
    come_call_finalizer(list$1sType$ph$p_finalize, result_19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj3;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_22;
struct sType* __dec_obj4;
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_23;
struct sType* __dec_obj5;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0    ) {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sType$ph*"))));
        litem_21->prev=((void*)0);
        litem_21->next=((void*)0);
        __dec_obj3=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_21;
        self->head=litem_21;
    }
    else if(    self->len==1    ) {
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sType$ph*"))));
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj4=litem_22->item,
        litem_22->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sType$ph*"))));
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj5=litem_23->item,
        litem_23->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
    __result_obj__4 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_24;
struct list_item$1sType$ph* prev_it_25;
    it_24=self->head;
    while(    it_24!=((void*)0)    ) {
        prev_it_25=it_24;
        it_24=it_24->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value15 = (void*)0;
struct sNode* result_26;
struct sNode* __result_obj__7;
    if(    self==(void*)0    ) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__6;
    }
    result_26=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_26->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_26->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_26->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_26->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_26->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_26->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_26->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_26->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_26->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_26->no_mutex=self->no_mutex;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_26);
    ((result_26) ? result_26 = come_decrement_ref_count(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_27;
struct list_item$1sNode$ph* it_28;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_27=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1sNode$ph*"))));
    it_28=self->head;
    while(    it_28!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_27,(struct sNode*)come_increment_ref_count(sNode_clone(it_28->item)));
        }
        else {
            list$1sNode$ph_add(result_27,(struct sNode*)come_increment_ref_count(sNode_clone(it_28->item)));
        }
        it_28=it_28->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_27);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj13;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_30;
struct sNode* __dec_obj14;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_31;
struct sNode* __dec_obj15;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1sNode$ph*"))));
        litem_29->prev=((void*)0);
        litem_29->next=((void*)0);
        __dec_obj13=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_29;
        self->head=litem_29;
    }
    else if(    self->len==1    ) {
        litem_30=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1sNode$ph*"))));
        litem_30->prev=self->head;
        litem_30->next=((void*)0);
        __dec_obj14=litem_30->item,
        litem_30->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_30;
        self->head->next=litem_30;
    }
    else {
        litem_31=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1sNode$ph*"))));
        litem_31->prev=self->tail;
        litem_31->next=((void*)0);
        __dec_obj15=litem_31->item,
        litem_31->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_31;
        self->tail=litem_31;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_32;
struct list_item$1sNode$ph* prev_it_33;
    it_32=self->head;
    while(    it_32!=((void*)0)    ) {
        prev_it_33=it_32;
        it_32=it_32->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_34;
struct list_item$1char$ph* it_35;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_34=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1char$ph*"))));
    it_35=self->head;
    while(    it_35!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_34,(char*)come_increment_ref_count((char*)come_memdup(it_35->item, "/usr/local/include/comelang.h", 1013, "char*")));
        }
        else {
            list$1char$ph_add(result_34,(char*)come_increment_ref_count((char*)come_memdup(it_35->item, "/usr/local/include/comelang.h", 1016, "char*")));
        }
        it_35=it_35->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_34);
    come_call_finalizer(list$1char$ph$p_finalize, result_34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj19;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_37;
char* __dec_obj20;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_38;
char* __dec_obj21;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1char$ph*"))));
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        __dec_obj19=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1    ) {
        litem_37=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1char$ph*"))));
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        __dec_obj20=litem_37->item,
        litem_37->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1char$ph*"))));
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        __dec_obj21=litem_38->item,
        litem_38->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_39;
struct list_item$1char$ph* prev_it_40;
    it_39=self->head;
    while(    it_39!=((void*)0)    ) {
        prev_it_40=it_39;
        it_39=it_39->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_42;
unsigned int it_43;
struct sGenericsFun* __result_obj__17;
struct sGenericsFun* __result_obj__18;
struct sGenericsFun* __result_obj__19;
struct sGenericsFun* __result_obj__20;
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_43]        ) {
            if(            string_equals(self->keys[it_43],key)            ) {
                __result_obj__17 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_43]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__17;
            }
            it_43++;
            if(            it_43>=self->size            ) {
                it_43=0;
            }
            else if(            it_43==hash_42            ) {
                __result_obj__18 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__18;
            }
        }
        else {
            __result_obj__19 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__19;
        }
    }
    __result_obj__20 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
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

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj25;
struct tuple2$2char$phvoid$p* __result_obj__21;
    __dec_obj25=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__21 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj26;
struct tuple2$2char$phsGenericsFun$p* __result_obj__23;
    __dec_obj26=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__23 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value53 = (void*)0;
char* fun_name3_49;
struct list$1sType$ph* method_generics_types_before_50;
struct list$1sType$ph* __dec_obj27;
void* __right_value54 = (void*)0;
struct sGenericsFun* generics_fun_51;
void* __right_value55 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__25;
struct list$1sType$ph* __dec_obj28;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__26;
    static int num_method_generics_48=0;
    fun_name3_49=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_48++));
    method_generics_types_before_50=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj27=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    generics_fun_51=((struct sGenericsFun*)(__right_value54=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer(sGenericsFun_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    generics_fun_51    ) {
        if(        (_condtional_value_X1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_49)),generics_fun_51,info))),        _condtional_value_X1        ) {
            ((struct tuple2$2int$bool$*)(__right_value56=err_msg(info,"%s not found",fun_name3_49)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__25 = (struct tuple2$2char$phvoid$p*)come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value59=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 46, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name3_49 = come_decrement_ref_count(fun_name3_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phvoid$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__25;
        }
    }
    __dec_obj28=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_50);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__26 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value62=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 52, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3_49, "20method.c", 52, "char*")),generics_fun_51))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name3_49 = come_decrement_ref_count(fun_name3_49, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__26;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value67 = (void*)0;
struct sNode* current_stack_frame_node_52;
_Bool Value_54;
_Bool __result_obj__29;
void* __right_value68 = (void*)0;
struct CVALUE* come_value_57;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
struct buffer* method_block2_61;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct sType* method_block_type_62;
void* __right_value76 = (void*)0;
char* class_name_69;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct sClass* current_stack_frame_struct_78;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
_Bool __result_obj__43;
void* __right_value81 = (void*)0;
struct sType* result_type_79;
void* __right_value82 = (void*)0;
struct sType* result_type2_80;
struct list$1sType$ph* param_types_81;
struct list$1char$ph* param_names_82;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* all_alhabet_sname_83;
char* p_84;
int num_method_block_85;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
int i_86;
struct list$1sType$ph* o2_saved_87;
struct sType* it_90;
struct sType* param_type_93;
void* __right_value87 = (void*)0;
char* param_name_94;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
char* param_name_95;
void* __right_value90 = (void*)0;
struct sType* param_type2_96;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
char* param_name_97;
void* __right_value93 = (void*)0;
struct sType* param_type2_98;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* source3_99;
char* p_100;
char* head_101;
int sline_102;
struct buffer* __dec_obj33;
void* __right_value96 = (void*)0;
struct sNode* node_103;
_Bool in_method_block_104;
_Bool Value_105;
_Bool __result_obj__50;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
char* method_block_name_106;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct CVALUE* come_value2_107;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct sFun* fun2_108;
void* __right_value103 = (void*)0;
_Bool __result_obj__55;
struct sType* method_block_type2_111;
void* __right_value104 = (void*)0;
char* __dec_obj34;
void* __right_value105 = (void*)0;
struct sType* __dec_obj35;
struct buffer* __dec_obj36;
void* __right_value106 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__56;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 57, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value64=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 57, "struct sCurrentNode*")),info))));
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
    current_stack_frame_node_52=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer(sCurrentNode_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_54=node_compile(current_stack_frame_node_52,info);
    if(    !Value_54    ) {
        __result_obj__29 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_52) ? current_stack_frame_node_52 = come_decrement_ref_count(current_stack_frame_node_52, ((struct sNode*)current_stack_frame_node_52)->finalize, ((struct sNode*)current_stack_frame_node_52)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__29;
    }
    else {
    }
    come_value_57=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_57));
    method_block2_61=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 66, "struct buffer*"))));
    method_block_type_62=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value74=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer(sType_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    class_name_69=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value77=list$1sType$ph_operator_load_element(method_block_type_62->mParamTypes,0)))->mClass=((struct sClass*)(__right_value78=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_69)));
    come_call_finalizer(sType_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    current_stack_frame_struct_78=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value79=map$2char$phsClass$ph_operator_load_element(info->classes,class_name_69)));
    come_call_finalizer(sClass_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_62->mClass->mName,"lambda")    ) {
        ((struct tuple2$2int$bool$*)(__right_value80=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__43 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_52) ? current_stack_frame_node_52 = come_decrement_ref_count(current_stack_frame_node_52, ((struct sNode*)current_stack_frame_node_52)->finalize, ((struct sNode*)current_stack_frame_node_52)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_69 = come_decrement_ref_count(class_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    result_type_79=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_62->mResultType));
    result_type_79->mStatic=(_Bool)0;
    result_type2_80=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_79),(struct sType*)come_increment_ref_count(info->generics_type),info));
    param_types_81=method_block_type_62->mParamTypes;
    param_names_82=method_block_type_62->mParamNames;
    all_alhabet_sname_83=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 88, "struct buffer*"))));
    {
        p_84=info->sname;
        while(        *p_84        ) {
            if(            xisalnum(*p_84)            ) {
                buffer_append_char(all_alhabet_sname_83,*p_84++);
            }
            else {
                p_84++;
            }
        }
    }
    num_method_block_85=info->num_method_block;
    buffer_append_format(method_block2_61,"%s method_block%d_%s(",((char*)(__right_value85=make_come_type_name_string(result_type2_80,info,(_Bool)0))),num_method_block_85,((char*)(__right_value86=buffer_to_string(all_alhabet_sname_83))));
    (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    i_86=0;
    for(    o2_saved_87=(param_types_81),it_90=list$1sType$ph_begin((o2_saved_87))    ;    !list$1sType$ph_end((o2_saved_87))    ;    it_90=list$1sType$ph_next((o2_saved_87))    ){
        param_type_93=(struct sType*)come_increment_ref_count(it_90);
        if(        i_86==0        ) {
            param_name_94=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_61,"%s",((char*)(__right_value88=make_define_var(param_type_93,param_name_94,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_94 = come_decrement_ref_count(param_name_94, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        i_86==1        ) {
            param_name_95=(char*)come_increment_ref_count(xsprintf("it"));
            param_type2_96=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_93),(struct sType*)come_increment_ref_count(info->generics_type),info));
            buffer_append_format(method_block2_61,"%s",((char*)(__right_value91=make_define_var(param_type2_96,param_name_95,(_Bool)0,(_Bool)1,info,(_Bool)1))));
            (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_95 = come_decrement_ref_count(param_name_95, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            param_name_97=(char*)come_increment_ref_count(xsprintf("it%d",i_86));
            param_type2_98=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(param_type_93),(struct sType*)come_increment_ref_count(info->generics_type),info));
            buffer_append_format(method_block2_61,"%s",((char*)(__right_value94=make_define_var(param_type2_98,param_name_97,(_Bool)0,(_Bool)1,info,(_Bool)1))));
            (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (param_name_97 = come_decrement_ref_count(param_name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, param_type2_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        i_86!=list$1sType$ph_length(param_types_81)-1        ) {
            buffer_append_str(method_block2_61,",");
        }
        i_86++;
        come_call_finalizer(sType_finalize, param_type_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    buffer_append_str(method_block2_61,")\n");
    buffer_append_str(method_block2_61,((char*)(__right_value95=buffer_to_string(method_block))));
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    source3_99=(struct buffer*)come_increment_ref_count(info->source);
    p_100=info->p;
    head_101=info->head;
    sline_102=info->sline;
    __dec_obj33=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_61);
    come_call_finalizer(buffer_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_103=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block_104=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_105=node_compile(node_103,info);
    if(    !Value_105    ) {
        __result_obj__50 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_52) ? current_stack_frame_node_52 = come_decrement_ref_count(current_stack_frame_node_52, ((struct sNode*)current_stack_frame_node_52)->finalize, ((struct sNode*)current_stack_frame_node_52)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_69 = come_decrement_ref_count(class_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__50;
    }
    else {
    }
    info->in_method_block=in_method_block_104;
    method_block_name_106=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block_85,((char*)(__right_value97=buffer_to_string(all_alhabet_sname_83)))));
    (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_value2_107=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 160, "struct CVALUE*"))));
    fun2_108=((struct sFun*)(__right_value102=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value101=__builtin_string(method_block_name_106))),((void*)0))));
    (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    fun2_108==((void*)0)    ) {
        ((struct tuple2$2int$bool$*)(__right_value103=err_msg(info,"method block function not found(%s)",method_block_name_106)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value103, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __result_obj__55 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((current_stack_frame_node_52) ? current_stack_frame_node_52 = come_decrement_ref_count(current_stack_frame_node_52, ((struct sNode*)current_stack_frame_node_52)->finalize, ((struct sNode*)current_stack_frame_node_52)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (class_name_69 = come_decrement_ref_count(class_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source3_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        (method_block_name_106 = come_decrement_ref_count(method_block_name_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__55;
    }
    method_block_type2_111=fun2_108->mLambdaType;
    __dec_obj34=come_value2_107->c_value,
    come_value2_107->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_106));
    __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj35=come_value2_107->type,
    come_value2_107->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_111));
    come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value2_107->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_107));
    __dec_obj36=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_99);
    come_call_finalizer(buffer_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_100;
    info->head=head_101;
    info->sline=sline_102;
    info->current_stack_frame_struct=current_stack_frame_struct_78;
    __dec_obj37=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__56 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((current_stack_frame_node_52) ? current_stack_frame_node_52 = come_decrement_ref_count(current_stack_frame_node_52, ((struct sNode*)current_stack_frame_node_52)->finalize, ((struct sNode*)current_stack_frame_node_52)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block2_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, method_block_type_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (class_name_69 = come_decrement_ref_count(class_name_69, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type2_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, all_alhabet_sname_83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, source3_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (method_block_name_106 = come_decrement_ref_count(method_block_name_106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value2_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__27;
void* __right_value65 = (void*)0;
struct sCurrentNode* result_53;
void* __right_value66 = (void*)0;
char* __dec_obj29;
struct sCurrentNode* __result_obj__28;
    if(    self==(void*)0    ) {
        __result_obj__27 = (void*)0;
        return __result_obj__27;
    }
    result_53=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)    ) {
        result_53->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj29=result_53->sname,
        result_53->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_53->sline_real=self->sline_real;
    }
    __result_obj__28 = result_53;
    come_call_finalizer(sCurrentNode_finalize, result_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_55;
struct list_item$1CVALUE$ph* prev_it_56;
    it_55=self->head;
    while(    it_55!=((void*)0)    ) {
        prev_it_56=it_55;
        it_55=it_55->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value69 = (void*)0;
struct list_item$1CVALUE$ph* litem_58;
struct CVALUE* __dec_obj30;
void* __right_value70 = (void*)0;
struct list_item$1CVALUE$ph* litem_59;
struct CVALUE* __dec_obj31;
void* __right_value71 = (void*)0;
struct list_item$1CVALUE$ph* litem_60;
struct CVALUE* __dec_obj32;
struct list$1CVALUE$ph* __result_obj__30;
    if(    self->len==0    ) {
        litem_58=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value69=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1CVALUE$ph*"))));
        litem_58->prev=((void*)0);
        litem_58->next=((void*)0);
        __dec_obj30=litem_58->item,
        litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_58;
        self->head=litem_58;
    }
    else if(    self->len==1    ) {
        litem_59=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value70=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1CVALUE$ph*"))));
        litem_59->prev=self->head;
        litem_59->next=((void*)0);
        __dec_obj31=litem_59->item,
        litem_59->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_59;
        self->head->next=litem_59;
    }
    else {
        litem_60=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value71=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1CVALUE$ph*"))));
        litem_60->prev=self->tail;
        litem_60->next=((void*)0);
        __dec_obj32=litem_60->item,
        litem_60->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_60;
        self->tail=litem_60;
    }
    self->len++;
    __result_obj__30 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_63;
int i_64;
struct sType* __result_obj__31;
struct sType* default_value_65;
struct sType* __result_obj__32;
default_value_65 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)    ) {
        if(        position==i_64        ) {
            __result_obj__31 = (struct sType*)come_increment_ref_count(it_63->item);
            come_call_finalizer(sType_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct sType*));
    __result_obj__32 = (struct sType*)come_increment_ref_count(default_value_65);
    come_call_finalizer(sType_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_66;
int i_67;
struct sType* __result_obj__33;
struct sType* default_value_68;
struct sType* __result_obj__34;
default_value_68 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_66=self->head;
    i_67=0;
    while(    it_66!=((void*)0)    ) {
        if(        position==i_67        ) {
            __result_obj__33 = (struct sType*)come_increment_ref_count(it_66->item);
            come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
        it_66=it_66->next;
        i_67++;
    }
    memset(&default_value_68,0,sizeof(struct sType*));
    __result_obj__34 = (struct sType*)come_increment_ref_count(default_value_68);
    come_call_finalizer(sType_finalize, default_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_70;
unsigned int hash_71;
unsigned int it_72;
struct sClass* __result_obj__35;
struct sClass* __result_obj__36;
struct sClass* __result_obj__37;
struct sClass* __result_obj__38;
default_value_70 = (void*)0;
    memset(&default_value_70,0,sizeof(struct sClass*));
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_72]        ) {
            if(            string_equals(self->keys[it_72],key)            ) {
                __result_obj__35 = (struct sClass*)come_increment_ref_count(self->items[it_72]);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__35;
            }
            it_72++;
            if(            it_72>=self->size            ) {
                it_72=0;
            }
            else if(            it_72==hash_71            ) {
                __result_obj__36 = (struct sClass*)come_increment_ref_count(default_value_70);
                come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__36;
            }
        }
        else {
            __result_obj__37 = (struct sClass*)come_increment_ref_count(default_value_70);
            come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__37;
        }
    }
    __result_obj__38 = (struct sClass*)come_increment_ref_count(default_value_70);
    come_call_finalizer(sClass_finalize, default_value_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__38;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_73;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_74;
    it_73=self->head;
    while(    it_73!=((void*)0)    ) {
        prev_it_74=it_73;
        it_73=it_73->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_75;
unsigned int hash_76;
unsigned int it_77;
struct sClass* __result_obj__39;
struct sClass* __result_obj__40;
struct sClass* __result_obj__41;
struct sClass* __result_obj__42;
default_value_75 = (void*)0;
    memset(&default_value_75,0,sizeof(struct sClass*));
    hash_76=string_get_hash_key(((char*)key))%self->size;
    it_77=hash_76;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_77]        ) {
            if(            string_equals(self->keys[it_77],key)            ) {
                __result_obj__39 = (struct sClass*)come_increment_ref_count(self->items[it_77]);
                come_call_finalizer(sClass_finalize, default_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__39;
            }
            it_77++;
            if(            it_77>=self->size            ) {
                it_77=0;
            }
            else if(            it_77==hash_76            ) {
                __result_obj__40 = (struct sClass*)come_increment_ref_count(default_value_75);
                come_call_finalizer(sClass_finalize, default_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__40;
            }
        }
        else {
            __result_obj__41 = (struct sClass*)come_increment_ref_count(default_value_75);
            come_call_finalizer(sClass_finalize, default_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__41;
        }
    }
    __result_obj__42 = (struct sClass*)come_increment_ref_count(default_value_75);
    come_call_finalizer(sClass_finalize, default_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_88;
struct sType* __result_obj__44;
struct sType* __result_obj__45;
struct sType* result_89;
struct sType* __result_obj__46;
result_88 = (void*)0;
result_89 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_88,0,sizeof(struct sType*));
        __result_obj__44 = result_88;
        return __result_obj__44;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__45 = self->it->item;
        return __result_obj__45;
    }
    memset(&result_89,0,sizeof(struct sType*));
    __result_obj__46 = result_89;
    return __result_obj__46;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_91;
struct sType* __result_obj__47;
struct sType* __result_obj__48;
struct sType* result_92;
struct sType* __result_obj__49;
result_91 = (void*)0;
result_92 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_91,0,sizeof(struct sType*));
        __result_obj__47 = result_91;
        return __result_obj__47;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__48 = self->it->item;
        return __result_obj__48;
    }
    memset(&result_92,0,sizeof(struct sType*));
    __result_obj__49 = result_92;
    return __result_obj__49;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_109;
unsigned int it_110;
struct sFun* __result_obj__51;
struct sFun* __result_obj__52;
struct sFun* __result_obj__53;
struct sFun* __result_obj__54;
    hash_109=string_get_hash_key(((char*)key))%self->size;
    it_110=hash_109;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_110]        ) {
            if(            string_equals(self->keys[it_110],key)            ) {
                __result_obj__51 = (struct sFun*)come_increment_ref_count(self->items[it_110]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__51;
            }
            it_110++;
            if(            it_110>=self->size            ) {
                it_110=0;
            }
            else if(            it_110==hash_109            ) {
                __result_obj__52 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
        }
        else {
            __result_obj__53 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__53;
        }
    }
    __result_obj__54 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
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

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(char* fun_name, struct sType* obj_type, struct sInfo* info){
char* generics_fun_name_112;
struct sFun* fun_113;
struct sGenericsFun* generics_fun_114;
void* __right_value107 = (void*)0;
struct sClass* klass_115;
void* __right_value108 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
char* __dec_obj38;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2 = (void*)0;
char* name_116=0;
struct sGenericsFun* gfun_117=0;
char* __dec_obj39;
void* __right_value115 = (void*)0;
char* none_generics_name_118;
void* __right_value116 = (void*)0;
char* fun_name3_119;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_120=0;
struct sGenericsFun* gfun_121=0;
char* __dec_obj40;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4 = (void*)0;
char* name_122=0;
struct sGenericsFun* gfun_123=0;
char* __dec_obj41;
int i_124;
void* __right_value121 = (void*)0;
char* new_fun_name_125;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
char* __dec_obj42;
struct sType* obj_array_type_132;
void* __right_value126 = (void*)0;
char* array_method_name_133;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __dec_obj43;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* __dec_obj44;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__66;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
char* __dec_obj46;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sClass* klass_134;
void* __right_value144 = (void*)0;
_Bool _condtional_value_X3;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
char* __dec_obj47;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_135=0;
char* real_fun_name_136=0;
char* __dec_obj48;
void* __right_value150 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_137=0;
char* real_fun_name_138=0;
void* __right_value151 = (void*)0;
char* __dec_obj49;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
char* original_obj_type_fun_name_139;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
char* __dec_obj50;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__67;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__68;
    generics_fun_name_112=((void*)0);
    fun_113=((void*)0);
    generics_fun_114=((void*)0);
    if(    charp_operator_equals(fun_name,"super")    ) {
        fun_name=((char*)(__right_value107=create_non_method_name(obj_type,(_Bool)0,info->come_fun->mName,info,(_Bool)1)));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        klass_115=obj_type->mClass;
        while(        (_condtional_value_X2=(((struct sClass*)(__right_value108=map$2char$phsClass$ph_operator_load_element(info->classes,klass_115->mParentClassName))))),        come_call_finalizer(sClass_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            klass_115=((struct sClass*)(__right_value109=map$2char$phsClass$ph_operator_load_element(info->classes,klass_115->mParentClassName)));
            come_call_finalizer(sClass_finalize, __right_value109, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj38=generics_fun_name_112,
            generics_fun_name_112=(char*)come_increment_ref_count(create_method_name_using_class(klass_115,(_Bool)0,fun_name,info,(_Bool)1));
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            fun_113=((struct sFun*)(__right_value112=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value111=__builtin_string(generics_fun_name_112))),((void*)0))));
            (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_113            ) {
                break;
            }
        }
    }
    else {
        if(        obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0        ) {
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value114=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_116=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_117=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj39=generics_fun_name_112,
            generics_fun_name_112=(char*)come_increment_ref_count(name_116);
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_114=gfun_117;
            (name_116 = come_decrement_ref_count(name_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else if(        list$1sType$ph_length(info->method_generics_types)>0        ) {
            none_generics_name_118=(char*)come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName));
            fun_name3_119=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_118,fun_name));
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value118=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_119)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
            name_120=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            gfun_121=multiple_assign_var3->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj40=generics_fun_name_112,
            generics_fun_name_112=(char*)come_increment_ref_count(name_120);
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_114=gfun_121;
            (none_generics_name_118 = come_decrement_ref_count(none_generics_name_118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name3_119 = come_decrement_ref_count(fun_name3_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (name_120 = come_decrement_ref_count(name_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value120=make_generics_function(obj_type,(char*)come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
            name_122=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_123=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value120, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj41=generics_fun_name_112,
            generics_fun_name_112=(char*)come_increment_ref_count(name_122);
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            generics_fun_114=gfun_123;
            (name_122 = come_decrement_ref_count(name_122, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        for(        i_124=128        ;        i_124>=1        ;        i_124--        ){
            new_fun_name_125=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_112,i_124));
            fun_113=((struct sFun*)(__right_value124=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value123=__builtin_string(new_fun_name_125))))));
            (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            fun_113!=((void*)0)            ) {
                __dec_obj42=generics_fun_name_112,
                generics_fun_name_112=(char*)come_increment_ref_count(__builtin_string(new_fun_name_125));
                __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_125 = come_decrement_ref_count(new_fun_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_125 = come_decrement_ref_count(new_fun_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        fun_113==((void*)0)        ) {
            obj_array_type_132=obj_type->mOriginalLoadVarType;
            if(            obj_array_type_132&&list$1sNode$ph_length(obj_array_type_132->mArrayNum)>0            ) {
                array_method_name_133=(char*)come_increment_ref_count(create_method_name(obj_array_type_132,(_Bool)0,fun_name,info,(_Bool)0));
                fun_113=((struct sFun*)(__right_value128=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value127=__builtin_string(array_method_name_133))),((void*)0))));
                (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                fun_113                ) {
                    __dec_obj43=generics_fun_name_112,
                    generics_fun_name_112=(char*)come_increment_ref_count(__builtin_string(array_method_name_133));
                    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
                else {
                    fun_113=((struct sFun*)(__right_value131=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value130=__builtin_string(generics_fun_name_112))),((void*)0))));
                    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    fun_113==((void*)0)                    ) {
                        __dec_obj44=generics_fun_name_112,
                        generics_fun_name_112=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value132=__builtin_string(fun_name))),info,(_Bool)1));
                        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        fun_113=((struct sFun*)(__right_value135=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value134=__builtin_string(generics_fun_name_112))),((void*)0))));
                        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        fun_113==((void*)0)                        ) {
                            __result_obj__66 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value137=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 257, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                            (array_method_name_133 = come_decrement_ref_count(array_method_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (generics_fun_name_112 = come_decrement_ref_count(generics_fun_name_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                            return __result_obj__66;
                        }
                    }
                }
                (array_method_name_133 = come_decrement_ref_count(array_method_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                fun_113=((struct sFun*)(__right_value139=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value138=__builtin_string(generics_fun_name_112))),((void*)0))));
                (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sFun_finalize, __right_value139, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                fun_113==((void*)0)                ) {
                    __dec_obj46=generics_fun_name_112,
                    generics_fun_name_112=(char*)come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char*)(__right_value140=__builtin_string(fun_name))),info,(_Bool)1));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    fun_113=((struct sFun*)(__right_value143=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value142=__builtin_string(generics_fun_name_112))),((void*)0))));
                    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sFun_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    fun_113==((void*)0)                    ) {
                        klass_134=obj_type->mClass;
                        while(                        (_condtional_value_X3=(((struct sClass*)(__right_value144=map$2char$phsClass$ph_operator_load_element(info->classes,klass_134->mParentClassName))))),                        come_call_finalizer(sClass_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                        _condtional_value_X3                        ) {
                            klass_134=((struct sClass*)(__right_value145=map$2char$phsClass$ph_operator_load_element(info->classes,klass_134->mParentClassName)));
                            come_call_finalizer(sClass_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            __dec_obj47=generics_fun_name_112,
                            generics_fun_name_112=(char*)come_increment_ref_count(create_method_name_using_class(klass_134,(_Bool)0,fun_name,info,(_Bool)1));
                            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            fun_113=((struct sFun*)(__right_value148=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value147=__builtin_string(generics_fun_name_112))),((void*)0))));
                            (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                            come_call_finalizer(sFun_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            if(                            fun_113                            ) {
                                break;
                            }
                        }
                    }
                    if(                    fun_113==((void*)0)&&charp_operator_equals(fun_name,"to_string")                    ) {
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value149=create_to_string_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2_135=multiple_assign_var5->v1;
                        real_fun_name_136=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        fun_113=fun2_135;
                        __dec_obj48=generics_fun_name_112,
                        generics_fun_name_112=(char*)come_increment_ref_count(real_fun_name_136);
                        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (real_fun_name_136 = come_decrement_ref_count(real_fun_name_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_113==((void*)0)&&charp_operator_equals(fun_name,"equals")                    ) {
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value150=create_equals_automatically((struct sType*)come_increment_ref_count(obj_type),fun_name,info)));
                        fun2_137=multiple_assign_var6->v1;
                        real_fun_name_138=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value150, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        fun_113=((struct sFun*)(__right_value151=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_138)));
                        come_call_finalizer(sFun_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __dec_obj49=generics_fun_name_112,
                        generics_fun_name_112=(char*)come_increment_ref_count(real_fun_name_138);
                        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        (real_fun_name_138 = come_decrement_ref_count(real_fun_name_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_113==((void*)0)                    ) {
                        original_obj_type_fun_name_139=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type,(_Bool)0,((char*)(__right_value152=__builtin_string(fun_name))),info,(_Bool)1));
                        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        fun_113=((struct sFun*)(__right_value155=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value154=__builtin_string(original_obj_type_fun_name_139))),((void*)0))));
                        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sFun_finalize, __right_value155, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        fun_113                        ) {
                            __dec_obj50=generics_fun_name_112,
                            generics_fun_name_112=(char*)come_increment_ref_count(original_obj_type_fun_name_139);
                            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        }
                        (original_obj_type_fun_name_139 = come_decrement_ref_count(original_obj_type_fun_name_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    fun_113==((void*)0)                    ) {
                        __result_obj__67 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value157=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 306, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_112),(struct sFun*)((void*)0),(struct sGenericsFun*)((void*)0)))));
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (generics_fun_name_112 = come_decrement_ref_count(generics_fun_name_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value157, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                        return __result_obj__67;
                    }
                }
            }
        }
    }
    __result_obj__68 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value159=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "20method.c", 313, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(generics_fun_name_112),fun_113,generics_fun_114))));
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (generics_fun_name_112 = come_decrement_ref_count(generics_fun_name_112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_126;
unsigned int hash_127;
unsigned int it_128;
struct sFun* __result_obj__57;
struct sFun* __result_obj__58;
struct sFun* __result_obj__59;
struct sFun* __result_obj__60;
default_value_126 = (void*)0;
    memset(&default_value_126,0,sizeof(struct sFun*));
    hash_127=string_get_hash_key(((char*)key))%self->size;
    it_128=hash_127;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_128]        ) {
            if(            string_equals(self->keys[it_128],key)            ) {
                __result_obj__57 = (struct sFun*)come_increment_ref_count(self->items[it_128]);
                come_call_finalizer(sFun_finalize, default_value_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__57;
            }
            it_128++;
            if(            it_128>=self->size            ) {
                it_128=0;
            }
            else if(            it_128==hash_127            ) {
                __result_obj__58 = (struct sFun*)come_increment_ref_count(default_value_126);
                come_call_finalizer(sFun_finalize, default_value_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__58;
            }
        }
        else {
            __result_obj__59 = (struct sFun*)come_increment_ref_count(default_value_126);
            come_call_finalizer(sFun_finalize, default_value_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
    }
    __result_obj__60 = (struct sFun*)come_increment_ref_count(default_value_126);
    come_call_finalizer(sFun_finalize, default_value_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_129;
unsigned int hash_130;
unsigned int it_131;
struct sFun* __result_obj__61;
struct sFun* __result_obj__62;
struct sFun* __result_obj__63;
struct sFun* __result_obj__64;
default_value_129 = (void*)0;
    memset(&default_value_129,0,sizeof(struct sFun*));
    hash_130=string_get_hash_key(((char*)key))%self->size;
    it_131=hash_130;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_131]        ) {
            if(            string_equals(self->keys[it_131],key)            ) {
                __result_obj__61 = (struct sFun*)come_increment_ref_count(self->items[it_131]);
                come_call_finalizer(sFun_finalize, default_value_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__61;
            }
            it_131++;
            if(            it_131>=self->size            ) {
                it_131=0;
            }
            else if(            it_131==hash_130            ) {
                __result_obj__62 = (struct sFun*)come_increment_ref_count(default_value_129);
                come_call_finalizer(sFun_finalize, default_value_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__62;
            }
        }
        else {
            __result_obj__63 = (struct sFun*)come_increment_ref_count(default_value_129);
            come_call_finalizer(sFun_finalize, default_value_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__63;
        }
    }
    __result_obj__64 = (struct sFun*)come_increment_ref_count(default_value_129);
    come_call_finalizer(sFun_finalize, default_value_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__64;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj45;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__65;
    __dec_obj45=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__65 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__65;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info, _Bool no_err){
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sNode* __dec_obj51;
void* __right_value162 = (void*)0;
char* __dec_obj52;
void* __right_value173 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj58;
void* __right_value174 = (void*)0;
struct buffer* __dec_obj59;
void* __right_value175 = (void*)0;
struct list$1sType$ph* __dec_obj60;
struct sMethodCallNode* __result_obj__75;
    ((struct sNodeBase*)(__right_value160=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value160, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj51=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj52=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj58=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj59=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer(buffer_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj60=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->no_err=no_err;
    __result_obj__75 = (struct sMethodCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sMethodCallNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sMethodCallNode_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block    ) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value176 = (void*)0;
char* __result_obj__76;
    __result_obj__76 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("sMethodCallNode"))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__76 = come_decrement_ref_count(__result_obj__76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__76;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_150;
struct list$1tuple2$2char$phsNode$ph$ph* params_151;
struct sNode* obj_152;
struct buffer* method_block_153;
int method_block_sline_154;
struct list$1sType$ph* method_generics_types_155;
_Bool recursive_156;
_Bool no_infference_method_generics_157;
struct list$1sType$ph* method_generics_types_158;
void* __right_value177 = (void*)0;
struct list$1sType$ph* __dec_obj61;
_Bool Value_159;
_Bool __result_obj__77;
void* __right_value178 = (void*)0;
struct CVALUE* obj_value_160;
void* __right_value179 = (void*)0;
struct sType* obj_type_161;
_Bool no_output_come_code_162;
void* __right_value180 = (void*)0;
struct sType* type_163;
void* __right_value181 = (void*)0;
char* none_generics_name_164;
void* __right_value182 = (void*)0;
char* fun_name2_165;
void* __right_value183 = (void*)0;
char* fun_name3_166;
void* __right_value184 = (void*)0;
struct sGenericsFun* generics_fun_167;
_Bool method_generics_168;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var7 = (void*)0;
char* name_169=0;
struct sGenericsFun* gfun_170=0;
char* generics_fun_name_171;
void* __right_value187 = (void*)0;
struct sFun* fun_172;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1CVALUE$ph* come_params_173;
_Bool no_output_come_code_174;
_Bool __result_obj__79;
void* __right_value190 = (void*)0;
struct CVALUE* method_block_node_175;
void* __right_value191 = (void*)0;
struct sType* method_block_lambda_type_182;
void* __right_value192 = (void*)0;
struct sType* method_block_result_type_183;
void* __right_value193 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_184;
struct sType* generics_fun_method_block_result_type_185;
int method_generics_num_186;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
int n_195;
struct list$1sType$ph* o2_saved_196;
struct sType* it_197;
int method_generics_num_198;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1CVALUE$ph* come_params_199;
int i_200;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_201;
struct tuple2$2char$phsNode$ph* it_204;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_207=0;
struct sNode* node_208=0;
_Bool Value_209;
_Bool __result_obj__93;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_210;
void* __right_value206 = (void*)0;
struct sType* __dec_obj66;
int method_generics_num_211;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1sType$ph* o2_saved_212;
struct sType* it_213;
int method_generics_num_214;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1CVALUE$ph* come_params_215;
int i_216;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_217;
struct tuple2$2char$phsNode$ph* it_218;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_219=0;
struct sNode* node_220=0;
_Bool Value_221;
_Bool __result_obj__94;
void* __right_value215 = (void*)0;
struct CVALUE* come_value_222;
void* __right_value216 = (void*)0;
struct sType* __dec_obj67;
int method_generics_num_223;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
int n_224;
struct list$1sType$ph* o2_saved_225;
struct sType* it_226;
int method_generics_num_227;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sClass* klass_246;
_Bool calling_dynamic_method_247;
struct sType* lambda_type_248;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_249;
struct tuple2$2char$phsType$ph* it_252;
struct tuple2$2char$phsType$ph* multiple_assign_var10 = (void*)0;
char* field_name_255=0;
struct sType* field_type_256=0;
void* __right_value223 = (void*)0;
struct sType* result_type_257;
void* __right_value224 = (void*)0;
_Bool __result_obj__106;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct list$1CVALUE$ph* come_params_258;
int i_259;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_260;
struct tuple2$2char$phsNode$ph* it_261;
struct tuple2$2char$phsNode$ph* multiple_assign_var11 = (void*)0;
char* label_262=0;
struct sNode* node_263=0;
_Bool Value_264;
_Bool __result_obj__107;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_265;
void* __right_value228 = (void*)0;
struct sType* __dec_obj68;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
_Bool _condtional_value_X4;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* buf_266;
int j_267;
struct list$1CVALUE$ph* o2_saved_268;
struct CVALUE* it_271;
void* __right_value237 = (void*)0;
char* __dec_obj69;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct CVALUE* come_value2_274;
void* __right_value240 = (void*)0;
char* __dec_obj70;
void* __right_value241 = (void*)0;
struct sType* result_type2_275;
void* __right_value242 = (void*)0;
struct sType* __dec_obj71;
struct list$1sType$ph* __dec_obj72;
void* __right_value243 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var12 = (void*)0;
char* generics_fun_name_276=0;
struct sFun* fun_277=0;
struct sGenericsFun* generics_fun_278=0;
void* __right_value244 = (void*)0;
_Bool __result_obj__114;
void* __right_value245 = (void*)0;
_Bool __result_obj__115;
void* __right_value246 = (void*)0;
struct sType* result_type_279;
void* __right_value247 = (void*)0;
struct sType* __dec_obj73;
void* __right_value248 = (void*)0;
_Bool __result_obj__116;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sType$ph* param_types_280;
struct list$1sType$ph* o2_saved_281;
struct sType* it_282;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sType* it2_283;
struct sType* no_solved_obj_type_284;
void* __right_value253 = (void*)0;
struct sType* it3_285;
void* __right_value254 = (void*)0;
struct list$1sType$ph* type_checking_param_types_286;
int n_287;
struct list$1sType$ph* o2_saved_288;
struct sType* it_289;
struct sType* no_solved_obj_type_290;
void* __right_value255 = (void*)0;
struct sType* it3_291;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct list$1CVALUE$ph* come_params_292;
int i_293;
_Bool first_param_297;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_298;
struct tuple2$2char$phsNode$ph* it_299;
struct tuple2$2char$phsNode$ph* multiple_assign_var13 = (void*)0;
char* label_300=0;
struct sNode* node_301=0;
int n_302;
struct list$1char$ph* o2_saved_303;
char* it_306;
_Bool Value_309;
_Bool __result_obj__124;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_310;
void* __right_value262 = (void*)0;
struct sType* __dec_obj77;
void* __right_value263 = (void*)0;
_Bool _condtional_value_X5;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
_Bool _condtional_value_X6;
void* __right_value270 = (void*)0;
int i_316;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_317;
struct tuple2$2char$phsNode$ph* it_318;
struct tuple2$2char$phsNode$ph* multiple_assign_var14 = (void*)0;
char* label_319=0;
struct sNode* node_320=0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
_Bool _condtional_value_X7;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
_Bool _condtional_value_X8;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
_Bool __result_obj__131;
void* __right_value280 = (void*)0;
_Bool _condtional_value_X9;
_Bool Value_327;
_Bool __result_obj__132;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value282 = (void*)0;
struct sType* __dec_obj79;
void* __right_value283 = (void*)0;
_Bool _condtional_value_X10;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
_Bool _condtional_value_X11;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
_Bool _condtional_value_X12;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* default_param_329;
void* __right_value294 = (void*)0;
char* param_name_330;
void* __right_value295 = (void*)0;
_Bool _condtional_value_X13;
struct buffer* source_331;
char* p_332;
char* head_333;
int sline_334;
void* __right_value296 = (void*)0;
struct buffer* __dec_obj80;
void* __right_value297 = (void*)0;
struct sNode* node_335;
_Bool Value_336;
_Bool __result_obj__133;
struct buffer* __dec_obj81;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_337;
void* __right_value299 = (void*)0;
struct sType* __dec_obj82;
void* __right_value300 = (void*)0;
_Bool _condtional_value_X14;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
_Bool _condtional_value_X15;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
_Bool _condtional_value_X16;
void* __right_value309 = (void*)0;
_Bool __result_obj__134;
_Bool __result_obj__135;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct buffer* buf_338;
char* saved_obj_value_339;
struct sVar* saved_var_340;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* var_name_342;
void* __right_value314 = (void*)0;
struct sType* type_343;
struct sVar* var__344;
void* __right_value315 = (void*)0;
char* __dec_obj83;
int j_345;
struct list$1CVALUE$ph* o2_saved_346;
struct CVALUE* it_347;
int j_348;
struct list$1CVALUE$ph* o2_saved_349;
struct CVALUE* it_350;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value2_351;
void* __right_value318 = (void*)0;
char* __dec_obj84;
void* __right_value319 = (void*)0;
struct sType* __dec_obj85;
void* __right_value320 = (void*)0;
char* __dec_obj86;
struct list$1sType$ph* __dec_obj87;
_Bool __result_obj__136;
    fun_name_150=(char*)come_increment_ref_count(self->fun_name);
    params_151=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_152=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_153=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_154=self->method_block_sline;
    method_generics_types_155=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_156=self->recursive;
    no_infference_method_generics_157=self->no_infference_method_generics;
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    method_generics_types_158=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj61=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    Value_159=node_compile(obj_152,info);
    if(    !Value_159    ) {
        __result_obj__77 = (_Bool)0;
        (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__77;
    }
    else {
    }
    obj_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_161=(struct sType*)come_increment_ref_count(sType_clone(obj_value_160->type));
    if(    !no_infference_method_generics_157    ) {
        no_output_come_code_162=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_163=(struct sType*)come_increment_ref_count(sType_clone(obj_type_161));
        none_generics_name_164=(char*)come_increment_ref_count(get_none_generics_name(type_163->mClass->mName));
        fun_name2_165=(char*)come_increment_ref_count(create_method_name(type_163,(_Bool)0,fun_name_150,info,(_Bool)1));
        fun_name3_166=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_164,fun_name_150));
        generics_fun_167=((struct sGenericsFun*)(__right_value184=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_166,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_167        ) {
            method_generics_168=list$1char$ph_length(generics_fun_167->mMethodGenericsTypeNames)>0;
            if(            method_generics_168&&list$1sType$ph_length(info->method_generics_types)==0            ) {
                multiple_assign_var7=((struct tuple2$2char$phsGenericsFun$p*)(__right_value186=make_generics_function(type_163,(char*)come_increment_ref_count(__builtin_string(fun_name_150)),info,(_Bool)1)));
                name_169=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                gfun_170=multiple_assign_var7->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value186, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                generics_fun_name_171=(char*)come_increment_ref_count(name_169);
                fun_172=((struct sFun*)(__right_value187=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_171,((void*)0))));
                come_call_finalizer(sFun_finalize, __right_value187, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_params_173=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 397, "struct list$1CVALUE$ph*"))));
                if(                method_block_153                ) {
                    no_output_come_code_174=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_153,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_173),fun_172,fun_name3_166,method_block_sline_154,info,(_Bool)1)                    ) {
                        __result_obj__79 = (_Bool)0;
                        (name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (none_generics_name_164 = come_decrement_ref_count(none_generics_name_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name2_165 = come_decrement_ref_count(fun_name2_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name3_166 = come_decrement_ref_count(fun_name3_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__79;
                    }
                    info->no_output_come_code=no_output_come_code_174;
                    method_block_node_175=((struct CVALUE*)(__right_value190=list$1CVALUE$ph_operator_load_element(come_params_173,-1)));
                    come_call_finalizer(CVALUE_finalize, __right_value190, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    method_block_lambda_type_182=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_175->type));
                    method_block_result_type_183=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_184=((struct sType*)(__right_value193=list$1sType$ph_operator_load_element(generics_fun_167->mParamTypes,-1)));
                    come_call_finalizer(sType_finalize, __right_value193, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    generics_fun_method_block_result_type_185=generics_fun_method_block_lambda_type_184->mResultType;
                    if(                    generics_fun_method_block_result_type_185->mClass->mMethodGenerics                    ) {
                        method_generics_num_186=generics_fun_method_block_result_type_185->mClass->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_186,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_183)));
                        come_call_finalizer(sType_finalize, __right_value197, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    n_195=0;
                    for(                    o2_saved_196=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_184->mParamTypes)),it_197=list$1sType$ph_begin((o2_saved_196))                    ;                    !list$1sType$ph_end((o2_saved_196))                    ;                    it_197=list$1sType$ph_next((o2_saved_196))                    ){
                        if(                        it_197->mClass->mMethodGenerics                        ) {
                            method_generics_num_198=it_197->mClass->mMethodGenericsNum;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_198,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value201=list$1sType$ph_operator_load_element(method_block_lambda_type_182->mParamTypes,n_195))))));
                            come_call_finalizer(sType_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            come_call_finalizer(sType_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        n_195++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_params_199=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 426, "struct list$1CVALUE$ph*"))));
                    i_200=0;
                    for(                    o2_saved_201=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_151)),it_204=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_201))                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_201))                    ;                    it_204=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_201))                    ){
                        multiple_assign_var8=it_204;
                        label_207=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node_208=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i_200==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_199,(struct CVALUE*)come_increment_ref_count(obj_value_160));
                            i_200++;
                        }
                        else {
                            Value_209=node_compile(node_208,info);
                            if(                            !Value_209                            ) {
                                __result_obj__93 = (_Bool)0;
                                (label_207 = come_decrement_ref_count(label_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                ((node_208) ? node_208 = come_decrement_ref_count(node_208, ((struct sNode*)node_208)->finalize, ((struct sNode*)node_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_lambda_type_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, method_block_result_type_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (none_generics_name_164 = come_decrement_ref_count(none_generics_name_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name2_165 = come_decrement_ref_count(fun_name2_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name3_166 = come_decrement_ref_count(fun_name3_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                return __result_obj__93;
                            }
                            else {
                            }
                            come_value_210=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj66=come_value_210->type,
                            come_value_210->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_210->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_199,(struct CVALUE*)come_increment_ref_count(come_value_210));
                            come_call_finalizer(CVALUE_finalize, come_value_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        (label_207 = come_decrement_ref_count(label_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((node_208) ? node_208 = come_decrement_ref_count(node_208, ((struct sNode*)node_208)->finalize, ((struct sNode*)node_208)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    generics_fun_167->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_211=generics_fun_167->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_211,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value207, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                    }
                    n_195=0;
                    for(                    o2_saved_212=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_167->mParamTypes)),it_213=list$1sType$ph_begin((o2_saved_212))                    ;                    !list$1sType$ph_end((o2_saved_212))                    ;                    it_213=list$1sType$ph_next((o2_saved_212))                    ){
                        if(                        it_213->mClass->mMethodGenerics                        ) {
                            method_generics_num_214=it_213->mClass->mMethodGenericsNum;
                            if(                            n_195<list$1CVALUE$ph_length(come_params_199)                            ) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_214,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value211=list$1CVALUE$ph_operator_load_element(come_params_199,n_195)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value209, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value210, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value211, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                        }
                        n_195++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_lambda_type_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, method_block_result_type_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    come_params_215=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 465, "struct list$1CVALUE$ph*"))));
                    i_216=0;
                    for(                    o2_saved_217=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_151)),it_218=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_217))                    ;                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_217))                    ;                    it_218=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_217))                    ){
                        multiple_assign_var9=it_218;
                        label_219=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_220=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_216==0                        ) {
                            list$1CVALUE$ph_push_back(come_params_215,(struct CVALUE*)come_increment_ref_count(obj_value_160));
                            i_216++;
                        }
                        else {
                            Value_221=node_compile(node_220,info);
                            if(                            !Value_221                            ) {
                                __result_obj__94 = (_Bool)0;
                                (label_219 = come_decrement_ref_count(label_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                (none_generics_name_164 = come_decrement_ref_count(none_generics_name_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name2_165 = come_decrement_ref_count(fun_name2_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name3_166 = come_decrement_ref_count(fun_name3_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                                return __result_obj__94;
                            }
                            else {
                            }
                            come_value_222=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            __dec_obj67=come_value_222->type,
                            come_value_222->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_222->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                            come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            list$1CVALUE$ph_push_back(come_params_215,(struct CVALUE*)come_increment_ref_count(come_value_222));
                            come_call_finalizer(CVALUE_finalize, come_value_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        (label_219 = come_decrement_ref_count(label_219, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        ((node_220) ? node_220 = come_decrement_ref_count(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    }
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    generics_fun_167->mResultType->mClass->mMethodGenerics                    ) {
                        method_generics_num_223=generics_fun_167->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type                        ) {
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_223,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                            come_call_finalizer(sType_finalize, __right_value217, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                    }
                    n_224=0;
                    for(                    o2_saved_225=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_167->mParamTypes)),it_226=list$1sType$ph_begin((o2_saved_225))                    ;                    !list$1sType$ph_end((o2_saved_225))                    ;                    it_226=list$1sType$ph_next((o2_saved_225))                    ){
                        if(                        it_226->mClass->mMethodGenerics                        ) {
                            method_generics_num_227=it_226->mClass->mMethodGenericsNum;
                            if(                            n_224<list$1CVALUE$ph_length(come_params_215)                            ) {
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_227,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value221=list$1CVALUE$ph_operator_load_element(come_params_215,n_224)))->type)));
                                come_call_finalizer(CVALUE_finalize, __right_value219, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(sType_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                                come_call_finalizer(CVALUE_finalize, __right_value221, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                        }
                        n_224++;
                    }
                    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_171);
                (name_169 = come_decrement_ref_count(name_169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_171 = come_decrement_ref_count(generics_fun_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_162;
        come_call_finalizer(sType_finalize, type_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (none_generics_name_164 = come_decrement_ref_count(none_generics_name_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name2_165 = come_decrement_ref_count(fun_name2_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name3_166 = come_decrement_ref_count(fun_name3_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    klass_246=obj_type_161->mClass;
    calling_dynamic_method_247=(_Bool)0;
    lambda_type_248=((void*)0);
    for(    o2_saved_249=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_246->mFields)),it_252=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_249))    ;    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_249))    ;    it_252=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_249))    ){
        multiple_assign_var10=it_252;
        field_name_255=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        field_type_256=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        string_operator_equals(field_name_255,fun_name_150)&&string_operator_equals(field_type_256->mClass->mName,"lambda")        ) {
            calling_dynamic_method_247=(_Bool)1;
            lambda_type_248=field_type_256;
            (field_name_255 = come_decrement_ref_count(field_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            break;
        }
        (field_name_255 = come_decrement_ref_count(field_name_255, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, field_type_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    calling_dynamic_method_247    ) {
        result_type_257=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_248->mResultType));
        result_type_257->mStatic=(_Bool)0;
        if(        obj_type_161->mImmutable        ) {
            if(            !result_type_257->mImmutable            ) {
                ((struct tuple2$2int$bool$*)(__right_value224=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_150)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__106 = (_Bool)1;
                come_call_finalizer(sType_finalize, result_type_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__106;
            }
        }
        come_params_258=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 535, "struct list$1CVALUE$ph*"))));
        i_259=0;
        for(        o2_saved_260=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_151)),it_261=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_260))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_260))        ;        it_261=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_260))        ){
            multiple_assign_var11=it_261;
            label_262=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            node_263=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            i_259==0            ) {
                list$1CVALUE$ph_push_back(come_params_258,(struct CVALUE*)come_increment_ref_count(obj_value_160));
                i_259++;
            }
            else {
                Value_264=node_compile(node_263,info);
                if(                !Value_264                ) {
                    __result_obj__107 = (_Bool)0;
                    (label_262 = come_decrement_ref_count(label_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_263) ? node_263 = come_decrement_ref_count(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__107;
                }
                else {
                }
                come_value_265=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj68=come_value_265->type,
                come_value_265->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_265->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                check_assign_type(((char*)(__right_value231=xsprintf("(a). \%s param num \%s is assinged to",((char*)(__right_value229=string_to_string(fun_name_150))),((char*)(__right_value230=int_to_string(i_259)))))),((struct sType*)(__right_value232=list$1sType$ph_operator_load_element(lambda_type_248->mParamTypes,i_259-1))),come_value_265->type,come_value_265,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X4=(((struct sType*)(__right_value233=list$1sType$ph_operator_load_element(lambda_type_248->mParamTypes,i_259-1)))->mHeap&&come_value_265->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value233, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X4                ) {
                    std_move(((struct sType*)(__right_value234=list$1sType$ph_operator_load_element(lambda_type_248->mParamTypes,i_259-1))),come_value_265->type,come_value_265,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value234, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_258,(struct CVALUE*)come_increment_ref_count(come_value_265));
                i_259++;
                come_call_finalizer(CVALUE_finalize, come_value_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_262 = come_decrement_ref_count(label_262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_263) ? node_263 = come_decrement_ref_count(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buf_266=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 566, "struct buffer*"))));
        buffer_append_format(buf_266,"%s->%s",obj_value_160->c_value,fun_name_150);
        buffer_append_str(buf_266,"(");
        j_267=0;
        for(        o2_saved_268=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_258)),it_271=list$1CVALUE$ph_begin((o2_saved_268))        ;        !list$1CVALUE$ph_end((o2_saved_268))        ;        it_271=list$1CVALUE$ph_next((o2_saved_268))        ){
            if(            j_267==0            ) {
                __dec_obj69=it_271->c_value,
                it_271->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_271->c_value));
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            buffer_append_str(buf_266,it_271->c_value);
            if(            j_267!=list$1CVALUE$ph_length(come_params_258)-1            ) {
                buffer_append_str(buf_266,",");
            }
            j_267++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(buf_266,")");
        come_value2_274=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 586, "struct CVALUE*"))));
        __dec_obj70=come_value2_274->c_value,
        come_value2_274->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_266));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        result_type2_275=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_257),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj71=come_value2_274->type,
        come_value2_274->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_275));
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_274->type->mStatic=(_Bool)0;
        come_value2_274->type->mImmutable=(_Bool)0;
        come_value2_274->var=((void*)0);
        if(        result_type2_275->mHeap        ) {
            append_object_to_right_values(come_value2_274,(struct sType*)come_increment_ref_count(result_type2_275),info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2_274->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_274));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj72=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_158);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer(sType_finalize, result_type_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        multiple_assign_var12=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value243=get_method(fun_name_150,(struct sType*)come_increment_ref_count(obj_type_161),info)));
        generics_fun_name_276=(char*)come_increment_ref_count(multiple_assign_var12->v1);
        fun_277=multiple_assign_var12->v2;
        generics_fun_278=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        fun_277==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value244=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_276,info->come_fun->mName)));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__114 = (_Bool)1;
            (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__114;
        }
        if(        list$1sType$ph_length(fun_277->mParamTypes)==0        ) {
            ((struct tuple2$2int$bool$*)(__right_value245=err_msg(info,"Method require function parametor")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value245, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__115 = (_Bool)1;
            (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__115;
        }
        result_type_279=(struct sType*)come_increment_ref_count(sType_clone(fun_277->mResultType));
        __dec_obj73=result_type_279,
        result_type_279=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_279),(struct sType*)come_increment_ref_count(info->generics_type),info));
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_279->mStatic=(_Bool)0;
        if(        obj_type_161->mImmutable        ) {
            if(            !result_type_279->mImmutable            ) {
                ((struct tuple2$2int$bool$*)(__right_value248=err_msg(info,"Immutable object can't call mutable method(%s)",fun_name_150)));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value248, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__116 = (_Bool)1;
                (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__116;
            }
        }
        param_types_280=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 636, "struct list$1sType$ph*"))));
        for(        o2_saved_281=(struct list$1sType$ph*)come_increment_ref_count((fun_277->mParamTypes)),it_282=list$1sType$ph_begin((o2_saved_281))        ;        !list$1sType$ph_end((o2_saved_281))        ;        it_282=list$1sType$ph_next((o2_saved_281))        ){
            if(            it_282==((void*)0)            ) {
                list$1sType$ph_push_back(param_types_280,(struct sType*)come_increment_ref_count(sType_clone(it_282)));
            }
            else {
                it2_283=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_282),(struct sType*)come_increment_ref_count(info->generics_type),info));
                no_solved_obj_type_284=(struct sType*)come_increment_ref_count(obj_type_161->mNoSolvedGenericsType);
                it3_285=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_282),(struct sType*)come_increment_ref_count(no_solved_obj_type_284),info));
                list$1sType$ph_push_back(param_types_280,(struct sType*)come_increment_ref_count(it2_283));
                come_call_finalizer(sType_finalize, it2_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, no_solved_obj_type_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, it3_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        type_checking_param_types_286=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_280));
        if(        generics_fun_278        ) {
            n_287=0;
            for(            o2_saved_288=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_278->mParamTypes)),it_289=list$1sType$ph_begin((o2_saved_288))            ;            !list$1sType$ph_end((o2_saved_288))            ;            it_289=list$1sType$ph_next((o2_saved_288))            ){
                if(                it_289==((void*)0)                ) {
                }
                else {
                    no_solved_obj_type_290=(struct sType*)come_increment_ref_count(obj_type_161->mNoSolvedGenericsType);
                    it3_291=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_289),(struct sType*)come_increment_ref_count(no_solved_obj_type_290),info));
                    come_call_finalizer(sType_finalize, no_solved_obj_type_290, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, it3_291, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                n_287++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_288, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_params_292=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 666, "struct list$1CVALUE$ph*"))));
        for(        i_293=0        ;        i_293<list$1sType$ph_length(fun_277->mParamTypes)-(((method_block_153)?(2):(0)))        ;        i_293++        ){
            list$1CVALUE$ph_add(come_params_292,((void*)0));
        }
        first_param_297=(_Bool)1;
        for(        o2_saved_298=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_151)),it_299=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_298))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_298))        ;        it_299=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_298))        ){
            multiple_assign_var13=it_299;
            label_300=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_301=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_297            ) {
                first_param_297=(_Bool)0;
            }
            else if(            label_300            ) {
                n_302=0;
                for(                o2_saved_303=(struct list$1char$ph*)come_increment_ref_count((fun_277->mParamNames)),it_306=list$1char$ph_begin((o2_saved_303))                ;                !list$1char$ph_end((o2_saved_303))                ;                it_306=list$1char$ph_next((o2_saved_303))                ){
                    if(                    string_operator_equals(label_300,it_306)                    ) {
                        break;
                    }
                    n_302++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                Value_309=node_compile(node_301,info);
                if(                !Value_309                ) {
                    __result_obj__124 = (_Bool)0;
                    (label_300 = come_decrement_ref_count(label_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_301) ? node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__124;
                }
                else {
                }
                come_value_310=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj77=come_value_310->type,
                come_value_310->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_310->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X5=(((struct sType*)(__right_value263=list$1sType$ph_operator_load_element(param_types_280,n_302))))),                come_call_finalizer(sType_finalize, __right_value263, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X5                ) {
                    check_assign_type(((char*)(__right_value266=xsprintf("(b). \%s param num \%s is assinged to",((char*)(__right_value264=string_to_string(fun_name_150))),((char*)(__right_value265=int_to_string(n_302)))))),((struct sType*)(__right_value267=list$1sType$ph_operator_load_element(type_checking_param_types_286,n_302))),come_value_310->type,come_value_310,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value267, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X6=(((struct sType*)(__right_value268=list$1sType$ph_operator_load_element(param_types_280,n_302)))&&((struct sType*)(__right_value269=list$1sType$ph_operator_load_element(param_types_280,n_302)))->mHeap&&come_value_310->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value268, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value269, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X6                ) {
                    std_move(((struct sType*)(__right_value270=list$1sType$ph_operator_load_element(param_types_280,n_302))),come_value_310->type,come_value_310,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value270, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_292,n_302,(struct CVALUE*)come_increment_ref_count(come_value_310));
                come_call_finalizer(CVALUE_finalize, come_value_310, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_300 = come_decrement_ref_count(label_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_301) ? node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_298, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        i_316=0;
        for(        o2_saved_317=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_151)),it_318=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_317))        ;        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_317))        ;        it_318=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_317))        ){
            multiple_assign_var14=it_318;
            label_319=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_320=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_316==0            ) {
                check_assign_type(((char*)(__right_value273=xsprintf("(c). \%s param num \%s is assinged to",((char*)(__right_value271=string_to_string(fun_name_150))),((char*)(__right_value272=int_to_string(i_316)))))),((struct sType*)(__right_value274=list$1sType$ph_operator_load_element(type_checking_param_types_286,i_316))),obj_value_160->type,obj_value_160,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, __right_value274, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X7=(((struct sType*)(__right_value275=list$1sType$ph_operator_load_element(param_types_280,i_316)))->mHeap&&obj_value_160->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value275, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X7                ) {
                    std_move(((struct sType*)(__right_value276=list$1sType$ph_operator_load_element(param_types_280,i_316))),obj_value_160->type,obj_value_160,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else if(                (_condtional_value_X8=(((struct sType*)(__right_value277=list$1sType$ph_operator_load_element(param_types_280,i_316)))->mHeap&&!obj_value_160->type->mHeap&&!gComeGC)),                come_call_finalizer(sType_finalize, __right_value277, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X8                ) {
                    ((struct tuple2$2int$bool$*)(__right_value279=err_msg(info,"require heap parametor(%s)",((char*)(__right_value278=list$1char$ph_operator_load_element(fun_277->mParamNames,i_316))))));
                    (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value279, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__131 = (_Bool)1;
                    (label_319 = come_decrement_ref_count(label_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_320) ? node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__131;
                }
                list$1CVALUE$ph_replace(come_params_292,i_316,(struct CVALUE*)come_increment_ref_count(obj_value_160));
                i_316++;
            }
            else if(            label_319            ) {
            }
            else {
                while(                (_Bool)1                ) {
                    if(                    (_condtional_value_X9=(((struct CVALUE*)(__right_value280=list$1CVALUE$ph_operator_load_element(come_params_292,i_316)))==((void*)0))),                    come_call_finalizer(CVALUE_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X9                    ) {
                        break;
                    }
                    else {
                        i_316++;
                    }
                }
                Value_327=node_compile(node_320,info);
                if(                !Value_327                ) {
                    __result_obj__132 = (_Bool)0;
                    (label_319 = come_decrement_ref_count(label_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_320) ? node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    return __result_obj__132;
                }
                else {
                }
                come_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                __dec_obj79=come_value_328->type,
                come_value_328->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_328->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                if(                (_condtional_value_X10=(((struct sType*)(__right_value283=list$1sType$ph_operator_load_element(param_types_280,i_316))))),                come_call_finalizer(sType_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X10                ) {
                    check_assign_type(((char*)(__right_value286=xsprintf("(d). \%s param num \%s is assinged to",((char*)(__right_value284=string_to_string(fun_name_150))),((char*)(__right_value285=int_to_string(i_316)))))),((struct sType*)(__right_value287=list$1sType$ph_operator_load_element(type_checking_param_types_286,i_316))),come_value_328->type,come_value_328,(_Bool)0,(_Bool)1,(_Bool)1,info);
                    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value287, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                if(                (_condtional_value_X11=(((struct sType*)(__right_value288=list$1sType$ph_operator_load_element(param_types_280,i_316)))&&((struct sType*)(__right_value289=list$1sType$ph_operator_load_element(param_types_280,i_316)))->mHeap&&come_value_328->type->mHeap)),                come_call_finalizer(sType_finalize, __right_value288, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                come_call_finalizer(sType_finalize, __right_value289, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X11                ) {
                    std_move(((struct sType*)(__right_value290=list$1sType$ph_operator_load_element(param_types_280,i_316))),come_value_328->type,come_value_328,info,(_Bool)1);
                    come_call_finalizer(sType_finalize, __right_value290, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_292,i_316,(struct CVALUE*)come_increment_ref_count(come_value_328));
                i_316++;
                come_call_finalizer(CVALUE_finalize, come_value_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (label_319 = come_decrement_ref_count(label_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_320) ? node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        while(        (_Bool)1        ) {
            if(            (_condtional_value_X12=(((struct CVALUE*)(__right_value291=list$1CVALUE$ph_operator_load_element(come_params_292,i_316)))==((void*)0))),            come_call_finalizer(CVALUE_finalize, __right_value291, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X12            ) {
                break;
            }
            else {
                i_316++;
            }
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_151)<list$1sType$ph_length(fun_277->mParamTypes)+(((method_block_153)?(-2):(0)))        ) {
            for(            ;            i_316<list$1sType$ph_length(fun_277->mParamTypes)+(((method_block_153)?(-2):(0)))            ;            i_316++            ){
                default_param_329=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value292=list$1char$ph_operator_load_element(fun_277->mParamDefaultParametors,i_316))), "20method.c", 769, "char*"));
                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                param_name_330=((char*)(__right_value294=list$1char$ph_operator_load_element(fun_277->mParamNames,i_316)));
                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                (_condtional_value_X13=(default_param_329&&string_operator_not_equals(default_param_329,"")&&((struct CVALUE*)(__right_value295=list$1CVALUE$ph_operator_load_element(come_params_292,i_316)))==((void*)0))),                come_call_finalizer(CVALUE_finalize, __right_value295, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X13                ) {
                    source_331=(struct buffer*)come_increment_ref_count(info->source);
                    p_332=info->p;
                    head_333=info->head;
                    sline_334=info->sline;
                    __dec_obj80=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_329));
                    come_call_finalizer(buffer_finalize, __dec_obj80,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_335=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_336=node_compile(node_335,info);
                    if(                    !Value_336                    ) {
                        __result_obj__133 = (_Bool)0;
                        come_call_finalizer(buffer_finalize, source_331, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((node_335) ? node_335 = come_decrement_ref_count(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        (default_param_329 = come_decrement_ref_count(default_param_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__133;
                    }
                    else {
                    }
                    __dec_obj81=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_331);
                    come_call_finalizer(buffer_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    info->p=p_332;
                    info->head=head_333;
                    info->sline=sline_334;
                    come_value_337=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    __dec_obj82=come_value_337->type,
                    come_value_337->type=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(come_value_337->type),(struct sType*)come_increment_ref_count(info->generics_type),info));
                    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    if(                    (_condtional_value_X14=(((struct sType*)(__right_value300=list$1sType$ph_operator_load_element(param_types_280,i_316))))),                    come_call_finalizer(sType_finalize, __right_value300, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X14                    ) {
                        check_assign_type(((char*)(__right_value303=xsprintf("(e). \%s param num \%s is assinged to",((char*)(__right_value301=string_to_string(fun_name_150))),((char*)(__right_value302=int_to_string(i_316)))))),((struct sType*)(__right_value304=list$1sType$ph_operator_load_element(type_checking_param_types_286,i_316))),come_value_337->type,come_value_337,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, __right_value304, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    if(                    (_condtional_value_X15=(((struct sType*)(__right_value305=list$1sType$ph_operator_load_element(param_types_280,i_316)))&&((struct sType*)(__right_value306=list$1sType$ph_operator_load_element(param_types_280,i_316)))->mHeap&&come_value_337->type->mHeap)),                    come_call_finalizer(sType_finalize, __right_value305, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    come_call_finalizer(sType_finalize, __right_value306, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X15                    ) {
                        std_move(((struct sType*)(__right_value307=list$1sType$ph_operator_load_element(param_types_280,i_316))),come_value_337->type,come_value_337,info,(_Bool)1);
                        come_call_finalizer(sType_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_292,i_316,(struct CVALUE*)come_increment_ref_count(come_value_337));
                    come_call_finalizer(buffer_finalize, source_331, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    ((node_335) ? node_335 = come_decrement_ref_count(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    if(                    (_condtional_value_X16=(((struct CVALUE*)(__right_value308=list$1CVALUE$ph_operator_load_element(come_params_292,i_316)))==((void*)0))),                    come_call_finalizer(CVALUE_finalize, __right_value308, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                    _condtional_value_X16                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value309=err_msg(info,"require parametor(%s) %d",fun_277->mName,i_316)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        __result_obj__134 = (_Bool)1;
                        (default_param_329 = come_decrement_ref_count(default_param_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        return __result_obj__134;
                    }
                }
                (default_param_329 = come_decrement_ref_count(default_param_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        if(        method_block_153        ) {
            if(            !compile_method_block(method_block_153,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_292),fun_277,fun_name_150,method_block_sline_154,info,(_Bool)0)            ) {
                __result_obj__135 = (_Bool)0;
                (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                return __result_obj__135;
            }
        }
        buf_338=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 818, "struct buffer*"))));
        buffer_append_str(buf_338,generics_fun_name_276);
        buffer_append_str(buf_338,"(");
        saved_obj_value_339=((void*)0);
        saved_var_340=((void*)0);
        if(        result_type_279->mDefferRightValue        ) {
            static int n_341=0;
            n_341++;
            var_name_342=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char*)(__right_value312=int_to_string(n_341)))));
            (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            type_343=(struct sType*)come_increment_ref_count(sType_clone(obj_type_161));
            type_343->mDefferRightValue=(_Bool)1;
            add_variable_to_table(var_name_342,(struct sType*)come_increment_ref_count(type_343),info,(_Bool)0,info->comma_instead_of_semicolon);
            var__344=get_variable_from_table(info->lv_table,var_name_342);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value315=make_define_var(type_343,var__344->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
            (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            info->comma_instead_of_semicolon            ) {
                add_come_code(info,"%s=%s,",var__344->mCValueName,obj_value_160->c_value);
            }
            else {
                add_come_code(info,"%s=%s;\n",var__344->mCValueName,obj_value_160->c_value);
            }
            __dec_obj83=saved_obj_value_339,
            saved_obj_value_339=(char*)come_increment_ref_count(var__344->mCValueName);
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            saved_var_340=var__344;
            j_345=0;
            for(            o2_saved_346=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_292)),it_347=list$1CVALUE$ph_begin((o2_saved_346))            ;            !list$1CVALUE$ph_end((o2_saved_346))            ;            it_347=list$1CVALUE$ph_next((o2_saved_346))            ){
                if(                j_345==0                ) {
                    buffer_append_str(buf_338,saved_obj_value_339);
                }
                else {
                    buffer_append_str(buf_338,it_347->c_value);
                }
                if(                j_345!=list$1CVALUE$ph_length(come_params_292)-1                ) {
                    buffer_append_str(buf_338,",");
                }
                j_345++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_346, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_342 = come_decrement_ref_count(var_name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            j_348=0;
            for(            o2_saved_349=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_292)),it_350=list$1CVALUE$ph_begin((o2_saved_349))            ;            !list$1CVALUE$ph_end((o2_saved_349))            ;            it_350=list$1CVALUE$ph_next((o2_saved_349))            ){
                buffer_append_str(buf_338,it_350->c_value);
                if(                j_348!=list$1CVALUE$ph_length(come_params_292)-1                ) {
                    buffer_append_str(buf_338,",");
                }
                j_348++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_349, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(buf_338,")");
        come_value2_351=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "20method.c", 877, "struct CVALUE*"))));
        come_value2_351->var=((void*)0);
        __dec_obj84=come_value2_351->c_value,
        come_value2_351->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_338));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj85=come_value2_351->type,
        come_value2_351->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_279));
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_value2_351->type->mStatic=(_Bool)0;
        come_value2_351->type->mImmutable=(_Bool)0;
        if(        result_type_279->mHeap        ) {
            append_object_to_right_values(come_value2_351,(struct sType*)come_increment_ref_count(result_type_279),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_161),saved_obj_value_339,saved_var_340);
        }
        else if(        saved_obj_value_339        ) {
            append_object_to_right_values(come_value2_351,(struct sType*)come_increment_ref_count(result_type_279),info,(_Bool)0,(struct sType*)come_increment_ref_count(obj_type_161),saved_obj_value_339,saved_var_340);
        }
        __dec_obj86=come_value2_351->c_value,
        come_value2_351->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_351->c_value,come_value2_351->type,info));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        add_come_last_code(info,"%s",come_value2_351->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_351));
        come_call_finalizer(list$1sType$ph$p_finalize, info->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj87=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_158);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->calling_fun=fun_277;
        (generics_fun_name_276 = come_decrement_ref_count(generics_fun_name_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_279, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, buf_338, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (saved_obj_value_339 = come_decrement_ref_count(saved_obj_value_339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__136 = (_Bool)1;
    (fun_name_150 = come_decrement_ref_count(fun_name_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((obj_152) ? obj_152 = come_decrement_ref_count(obj_152, ((struct sNode*)obj_152)->finalize, ((struct sNode*)obj_152)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, method_block_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__136;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__69;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_142;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_143;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__69 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    result_142=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1008, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_143=self->head;
    while(    it_143!=((void*)0)    ) {
        if(        1        ) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_142,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_143->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_142,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_143->item)));
        }
        it_143=it_143->next;
    }
    __result_obj__74 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_142);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_140;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_141;
    it_140=self->head;
    while(    it_140!=((void*)0)    ) {
        prev_it_141=it_140;
        it_140=it_140->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value165 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_144;
struct tuple2$2char$phsNode$ph* __dec_obj53;
void* __right_value166 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_145;
struct tuple2$2char$phsNode$ph* __dec_obj54;
void* __right_value167 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_146;
struct tuple2$2char$phsNode$ph* __dec_obj55;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__71;
    if(    self->len==0    ) {
        litem_144=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value165=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj53=litem_144->item,
        litem_144->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else if(    self->len==1    ) {
        litem_145=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value166=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_145->prev=self->head;
        litem_145->next=((void*)0);
        __dec_obj54=litem_145->item,
        litem_145->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_145;
        self->head->next=litem_145;
    }
    else {
        litem_146=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value167=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_146->prev=self->tail;
        litem_146->next=((void*)0);
        __dec_obj55=litem_146->item,
        litem_146->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_146;
        self->tail=litem_146;
    }
    self->len++;
    __result_obj__71 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__71;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__72;
void* __right_value168 = (void*)0;
struct tuple2$2char$phsNode$ph* result_147;
void* __right_value169 = (void*)0;
char* __dec_obj56;
void* __right_value170 = (void*)0;
struct sNode* __dec_obj57;
struct tuple2$2char$phsNode$ph* __result_obj__73;
    if(    self==(void*)0    ) {
        __result_obj__72 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__72;
    }
    result_147=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        __dec_obj56=result_147->v1,
        result_147->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        __dec_obj57=result_147->v2,
        result_147->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__73 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_147);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_148;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_149;
    it_148=self->head;
    while(    it_148!=((void*)0)    ) {
        prev_it_149=it_148;
        it_148=it_148->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__78 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_176;
int i_177;
struct CVALUE* __result_obj__80;
struct CVALUE* default_value_178;
struct CVALUE* __result_obj__81;
default_value_178 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_176=self->head;
    i_177=0;
    while(    it_176!=((void*)0)    ) {
        if(        position==i_177        ) {
            __result_obj__80 = (struct CVALUE*)come_increment_ref_count(it_176->item);
            come_call_finalizer(CVALUE_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__80;
        }
        it_176=it_176->next;
        i_177++;
    }
    memset(&default_value_178,0,sizeof(struct CVALUE*));
    __result_obj__81 = (struct CVALUE*)come_increment_ref_count(default_value_178);
    come_call_finalizer(CVALUE_finalize, default_value_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
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

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_187;
int i_188;
struct sType* default_value_189;
struct list$1sType$ph* __result_obj__85;
struct list_item$1sType$ph* it_193;
int i_194;
struct sType* __dec_obj65;
struct list$1sType$ph* __result_obj__86;
default_value_189 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_187=self->len;
        for(        i_188=0        ;        i_188<position-len_187        ;        i_188++        ){
            memset(&default_value_189,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_189));
            come_call_finalizer(sType_finalize, default_value_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__85 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__85;
    }
    it_193=self->head;
    i_194=0;
    while(    it_193!=((void*)0)    ) {
        if(        position==i_194        ) {
            __dec_obj65=it_193->item,
            it_193->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_193=it_193->next;
        i_194++;
    }
    __result_obj__86 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_190;
struct sType* __dec_obj62;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_191;
struct sType* __dec_obj63;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_192;
struct sType* __dec_obj64;
struct list$1sType$ph* __result_obj__84;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1sType$ph*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        __dec_obj62=litem_190->item,
        litem_190->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1sType$ph*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        __dec_obj63=litem_191->item,
        litem_191->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1sType$ph*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        __dec_obj64=litem_192->item,
        litem_192->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__84 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_202;
struct tuple2$2char$phsNode$ph* __result_obj__87;
struct tuple2$2char$phsNode$ph* __result_obj__88;
struct tuple2$2char$phsNode$ph* result_203;
struct tuple2$2char$phsNode$ph* __result_obj__89;
result_202 = (void*)0;
result_203 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_202,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__87 = result_202;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_203,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__89 = result_203;
    return __result_obj__89;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_205;
struct tuple2$2char$phsNode$ph* __result_obj__90;
struct tuple2$2char$phsNode$ph* __result_obj__91;
struct tuple2$2char$phsNode$ph* result_206;
struct tuple2$2char$phsNode$ph* __result_obj__92;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_205,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__90 = result_205;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_206,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__92 = result_206;
    return __result_obj__92;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_228;
unsigned int it_229;
struct map$2char$phsFun$ph* __result_obj__99;
    hash_228=string_get_hash_key(((char*)key))%self->size;
    it_229=hash_228;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_229]        ) {
            if(            string_equals(self->keys[it_229],key)            ) {
                list$1char$ph_remove(self->key_list,self->keys[it_229]);
                self->item_existance[it_229]=(_Bool)0;
                if(                1                ) {
                    (self->keys[it_229] = come_decrement_ref_count(self->keys[it_229], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                self->keys[it_229]=((void*)0);
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_229], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                self->items[it_229]=((void*)0);
                self->len--;
                break;
            }
            it_229++;
            if(            it_229>=self->size            ) {
                it_229=0;
            }
            else if(            it_229==hash_228            ) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__99 = self;
    return __result_obj__99;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_230;
struct list_item$1char$ph* it_231;
struct list$1char$ph* __result_obj__98;
    it2_230=0;
    it_231=self->head;
    while(    it_231!=((void*)0)    ) {
        if(        string_equals(it_231->item,item)        ) {
            list$1char$ph_delete(self,it2_230,it2_230+1);
            break;
        }
        it2_230++;
        it_231=it_231->next;
    }
    __result_obj__98 = self;
    return __result_obj__98;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_232;
struct list$1char$ph* __result_obj__95;
struct list_item$1char$ph* it_235;
int i_236;
struct list_item$1char$ph* prev_it_237;
struct list_item$1char$ph* it_238;
int i_239;
struct list_item$1char$ph* prev_it_240;
struct list_item$1char$ph* it_241;
struct list_item$1char$ph* head_prev_it_242;
struct list_item$1char$ph* tail_it_243;
int i_244;
struct list_item$1char$ph* prev_it_245;
struct list$1char$ph* __result_obj__97;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_232=tail;
        tail=head;
        head=tmp_232;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__95 = self;
        return __result_obj__95;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_235=self->head;
        i_236=0;
        while(        it_235!=((void*)0)        ) {
            if(            i_236<tail            ) {
                prev_it_237=it_235;
                it_235=it_235->next;
                i_236++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_236==tail            ) {
                self->head=it_235;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_235=it_235->next;
                i_236++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_238=self->head;
        i_239=0;
        while(        it_238!=((void*)0)        ) {
            if(            i_239==head            ) {
                self->tail=it_238->prev;
                self->tail->next=((void*)0);
            }
            if(            i_239>=head            ) {
                prev_it_240=it_238;
                it_238=it_238->next;
                i_239++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_238=it_238->next;
                i_239++;
            }
        }
    }
    else {
        it_241=self->head;
        head_prev_it_242=((void*)0);
        tail_it_243=((void*)0);
        i_244=0;
        while(        it_241!=((void*)0)        ) {
            if(            i_244==head            ) {
                head_prev_it_242=it_241->prev;
            }
            if(            i_244==tail            ) {
                tail_it_243=it_241;
            }
            if(            i_244>=head&&i_244<tail            ) {
                prev_it_245=it_241;
                it_241=it_241->next;
                i_244++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_241=it_241->next;
                i_244++;
            }
        }
        if(        head_prev_it_242!=((void*)0)        ) {
            head_prev_it_242->next=tail_it_243;
        }
        if(        tail_it_243!=((void*)0)        ) {
            tail_it_243->prev=head_prev_it_242;
        }
    }
    __result_obj__97 = self;
    return __result_obj__97;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_233;
struct list_item$1char$ph* prev_it_234;
struct list$1char$ph* __result_obj__96;
    it_233=self->head;
    while(    it_233!=((void*)0)    ) {
        prev_it_234=it_233;
        it_233=it_233->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_234, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__96 = self;
    return __result_obj__96;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_250;
struct tuple2$2char$phsType$ph* __result_obj__100;
struct tuple2$2char$phsType$ph* __result_obj__101;
struct tuple2$2char$phsType$ph* result_251;
struct tuple2$2char$phsType$ph* __result_obj__102;
result_250 = (void*)0;
result_251 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_250,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__100 = result_250;
        return __result_obj__100;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__101 = self->it->item;
        return __result_obj__101;
    }
    memset(&result_251,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__102 = result_251;
    return __result_obj__102;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_253;
struct tuple2$2char$phsType$ph* __result_obj__103;
struct tuple2$2char$phsType$ph* __result_obj__104;
struct tuple2$2char$phsType$ph* result_254;
struct tuple2$2char$phsType$ph* __result_obj__105;
result_253 = (void*)0;
result_254 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_253,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__103 = result_253;
        return __result_obj__103;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__104 = self->it->item;
        return __result_obj__104;
    }
    memset(&result_254,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__105 = result_254;
    return __result_obj__105;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_269;
struct CVALUE* __result_obj__108;
struct CVALUE* __result_obj__109;
struct CVALUE* result_270;
struct CVALUE* __result_obj__110;
result_269 = (void*)0;
result_270 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_269,0,sizeof(struct CVALUE*));
        __result_obj__108 = result_269;
        return __result_obj__108;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__109 = self->it->item;
        return __result_obj__109;
    }
    memset(&result_270,0,sizeof(struct CVALUE*));
    __result_obj__110 = result_270;
    return __result_obj__110;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_272;
struct CVALUE* __result_obj__111;
struct CVALUE* __result_obj__112;
struct CVALUE* result_273;
struct CVALUE* __result_obj__113;
result_272 = (void*)0;
result_273 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_272,0,sizeof(struct CVALUE*));
        __result_obj__111 = result_272;
        return __result_obj__111;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__112 = self->it->item;
        return __result_obj__112;
    }
    memset(&result_273,0,sizeof(struct CVALUE*));
    __result_obj__113 = result_273;
    return __result_obj__113;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value258 = (void*)0;
struct list_item$1CVALUE$ph* litem_294;
struct CVALUE* __dec_obj74;
void* __right_value259 = (void*)0;
struct list_item$1CVALUE$ph* litem_295;
struct CVALUE* __dec_obj75;
void* __right_value260 = (void*)0;
struct list_item$1CVALUE$ph* litem_296;
struct CVALUE* __dec_obj76;
struct list$1CVALUE$ph* __result_obj__117;
    if(    self->len==0    ) {
        litem_294=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value258=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1CVALUE$ph*"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj74=litem_294->item,
        litem_294->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1    ) {
        litem_295=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value259=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1CVALUE$ph*"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj75=litem_295->item,
        litem_295->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value260=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1CVALUE$ph*"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj76=litem_296->item,
        litem_296->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result_obj__117 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__117;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_304;
char* __result_obj__118;
char* __result_obj__119;
char* result_305;
char* __result_obj__120;
result_304 = (void*)0;
result_305 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_304,0,sizeof(char*));
        __result_obj__118 = result_304;
        return __result_obj__118;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__119 = self->it->item;
        return __result_obj__119;
    }
    memset(&result_305,0,sizeof(char*));
    __result_obj__120 = result_305;
    return __result_obj__120;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_307;
char* __result_obj__121;
char* __result_obj__122;
char* result_308;
char* __result_obj__123;
result_307 = (void*)0;
result_308 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_307,0,sizeof(char*));
        __result_obj__121 = result_307;
        return __result_obj__121;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__122 = self->it->item;
        return __result_obj__122;
    }
    memset(&result_308,0,sizeof(char*));
    __result_obj__123 = result_308;
    return __result_obj__123;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_311;
int i_312;
struct CVALUE* default_value_313;
struct list$1CVALUE$ph* __result_obj__125;
struct list_item$1CVALUE$ph* it_314;
int i_315;
struct CVALUE* __dec_obj78;
struct list$1CVALUE$ph* __result_obj__126;
default_value_313 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_311=self->len;
        for(        i_312=0        ;        i_312<position-len_311        ;        i_312++        ){
            memset(&default_value_313,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_313));
            come_call_finalizer(CVALUE_finalize, default_value_313, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__125 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__125;
    }
    it_314=self->head;
    i_315=0;
    while(    it_314!=((void*)0)    ) {
        if(        position==i_315        ) {
            __dec_obj78=it_314->item,
            it_314->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_314=it_314->next;
        i_315++;
    }
    __result_obj__126 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__126;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_321;
int i_322;
char* __result_obj__127;
char* default_value_323;
char* __result_obj__128;
default_value_323 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_321=self->head;
    i_322=0;
    while(    it_321!=((void*)0)    ) {
        if(        position==i_322        ) {
            __result_obj__127 = (char*)come_increment_ref_count(it_321->item);
            (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__127;
        }
        it_321=it_321->next;
        i_322++;
    }
    memset(&default_value_323,0,sizeof(char*));
    __result_obj__128 = (char*)come_increment_ref_count(default_value_323);
    (default_value_323 = come_decrement_ref_count(default_value_323, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_324;
int i_325;
char* __result_obj__129;
char* default_value_326;
char* __result_obj__130;
default_value_326 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_324=self->head;
    i_325=0;
    while(    it_324!=((void*)0)    ) {
        if(        position==i_325        ) {
            __result_obj__129 = (char*)come_increment_ref_count(it_324->item);
            (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__129;
        }
        it_324=it_324->next;
        i_325++;
    }
    memset(&default_value_326,0,sizeof(char*));
    __result_obj__130 = (char*)come_increment_ref_count(default_value_326);
    (default_value_326 = come_decrement_ref_count(default_value_326, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info, _Bool no_err){
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value330 = (void*)0;
struct sNode* node_352;
void* __right_value331 = (void*)0;
struct sNode* __dec_obj94;
struct sNode* __result_obj__139;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 911, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value322=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 911, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info,no_err))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
    node_352=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer(sMethodCallNode_finalize, __right_value322, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    !no_err    ) {
        __dec_obj94=node_352,
        node_352=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_352),info));
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__139 = (struct sNode*)come_increment_ref_count(node_352);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_352) ? node_352 = come_decrement_ref_count(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__139;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__137;
void* __right_value323 = (void*)0;
struct sMethodCallNode* result_353;
void* __right_value324 = (void*)0;
char* __dec_obj88;
void* __right_value325 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value326 = (void*)0;
char* __dec_obj90;
void* __right_value327 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj91;
void* __right_value328 = (void*)0;
struct buffer* __dec_obj92;
void* __right_value329 = (void*)0;
struct list$1sType$ph* __dec_obj93;
struct sMethodCallNode* __result_obj__138;
    if(    self==(void*)0    ) {
        __result_obj__137 = (void*)0;
        return __result_obj__137;
    }
    result_353=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)    ) {
        result_353->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj88=result_353->sname,
        result_353->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_353->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)    ) {
        __dec_obj89=result_353->obj,
        result_353->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)    ) {
        __dec_obj90=result_353->fun_name,
        result_353->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)    ) {
        __dec_obj91=result_353->params,
        result_353->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)    ) {
        __dec_obj92=result_353->method_block,
        result_353->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_353->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)    ) {
        __dec_obj93=result_353->method_generics_types,
        result_353->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_353->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)    ) {
        result_353->recursive=self->recursive;
    }
    if(    self!=((void*)0)    ) {
        result_353->fun=self->fun;
    }
    if(    self!=((void*)0)    ) {
        result_353->no_err=self->no_err;
    }
    __result_obj__138 = result_353;
    come_call_finalizer(sMethodCallNode_finalize, result_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_354;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
_Bool parse_method_generics_type_358;
char* p_359;
int sline_360;
void* __right_value340 = (void*)0;
char* word_361;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1sType$ph* method_generics_types_362;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_363=0;
char* name_364=0;
_Bool err_365=0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* p_366;
int sline_367;
_Bool err_flag_368;
void* __right_value347 = (void*)0;
char* label_369;
void* __right_value348 = (void*)0;
char* __dec_obj100;
char* __dec_obj101;
_Bool no_comma_370;
_Bool in_fun_param_371;
void* __right_value349 = (void*)0;
struct sNode* node_372;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj102;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct buffer* method_block_373;
int method_block_sline_374;
char* head_375;
void* __right_value353 = (void*)0;
char* tail_376;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct buffer* __dec_obj103;
int len_377;
void* __right_value356 = (void*)0;
char* mem_378;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value360 = (void*)0;
struct sNode* node_379;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj104;
struct sNode* __result_obj__142;
    params_354=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 922, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_354,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 923, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62    ) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_358=(_Bool)0;
    {
        p_359=info->p;
        sline_360=info->sline;
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_361=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_361,info)                ) {
                    parse_method_generics_type_358=(_Bool)1;
                }
                (word_361 = come_decrement_ref_count(word_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=p_359;
        info->sline=sline_360;
    }
    method_generics_types_362=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 953, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_358&&*info->p==60    ) {
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value343=err_msg(info,"unexpected source end")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value343, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
                multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value344=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_363=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_364=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_365=multiple_assign_var15->v3;
                come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value344, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_365                ) {
                    ((struct tuple2$2int$bool$*)(__right_value345=err_msg(info,"invalid method generics paramtor type")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value345, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                list$1sType$ph_push_back(method_generics_types_362,(struct sType*)come_increment_ref_count(sType_clone(type_363)));
                come_call_finalizer(sType_finalize, type_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (name_364 = come_decrement_ref_count(name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123    ) {
        expected_next_character(40,info);
        while(        (_Bool)1        ) {
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_366=info->p;
            sline_367=info->sline;
            err_flag_368=(_Bool)0;
            label_369=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                __dec_obj100=label_369,
                label_369=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                err_flag_368=(_Bool)1;
            }
            if(            err_flag_368==(_Bool)1&&*info->p==58            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj101=label_369,
                label_369=((void*)0);
                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->p=p_366;
                info->sline=sline_367;
            }
            no_comma_370=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_371=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_372=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj102=node_372,
            node_372=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_372),info));
            (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            info->in_fun_param=in_fun_param_371;
            info->no_comma=no_comma_370;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_354,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1029, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_369),(struct sNode*)come_increment_ref_count(node_372))));
            if(            *info->p==44            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_369 = come_decrement_ref_count(label_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_372) ? node_372 = come_decrement_ref_count(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                break;
            }
            (label_369 = come_decrement_ref_count(label_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_372) ? node_372 = come_decrement_ref_count(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
    }
    method_block_373=((void*)0);
    method_block_sline_374=0;
    if(    *info->p==123    ) {
        head_375=info->p;
        method_block_sline_374=info->sline;
        ((char*)(__right_value353=skip_block(info,(_Bool)0)));
        (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        tail_376=info->p;
        __dec_obj103=method_block_373,
        method_block_373=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "20method.c", 1053, "struct buffer*"))));
        come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        len_377=tail_376-head_375;
        mem_378=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_377+1)), "20method.c", 1056, "char*"));
        memcpy(mem_378,head_375,len_377);
        mem_378[len_377]=0;
        buffer_append_str(method_block_373,mem_378);
        buffer_append_str(method_block_373,"\n");
        (mem_378 = come_decrement_ref_count(mem_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1066, "struct sNode");
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value359=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc_v2(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1066, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_354),method_block_373,method_block_sline_374,method_generics_types_362,(_Bool)0,(_Bool)1,info,(_Bool)0))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_379=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sMethodCallNode_finalize, __right_value359, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj104=node_379,
    node_379=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_379),info));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__142 = (struct sNode*)come_increment_ref_count(node_379);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_354, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, method_block_373, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__142;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_355;
struct tuple2$2char$phsNode$ph* __dec_obj95;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_356;
struct tuple2$2char$phsNode$ph* __dec_obj96;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_357;
struct tuple2$2char$phsNode$ph* __dec_obj97;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__140;
    if(    self->len==0    ) {
        litem_355=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value334=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj95=litem_355->item,
        litem_355->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1    ) {
        litem_356=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj96=litem_356->item,
        litem_356->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj97=litem_357->item,
        litem_357->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result_obj__140 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__140;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj98;
struct sNode* __dec_obj99;
struct tuple2$2char$phsNode$ph* __result_obj__141;
    __dec_obj98=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj99=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__141 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value364 = (void*)0;
struct sNode* __result_obj__143;
void* __right_value365 = (void*)0;
struct sNode* __result_obj__144;
    if(    charp_operator_equals(buf,"__current__")    ) {
        _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "20method.c", 1076, "struct sNode");
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value363=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc_v2(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1076, "struct sCurrentNode*")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__143 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value364=_inf_value4)));
        come_call_finalizer(sCurrentNode_finalize, __right_value363, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value364) ? __right_value364 = come_decrement_ref_count(__right_value364, ((struct sNode*)__right_value364)->finalize, ((struct sNode*)__right_value364)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__143;
    }
    __result_obj__144 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value365=string_node_v17(buf,head,head_sline,info))));
    ((__right_value365) ? __right_value365 = come_decrement_ref_count(__right_value365, ((struct sNode*)__right_value365)->finalize, ((struct sNode*)__right_value365)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__144) ? __result_obj__144 = come_decrement_ref_count(__result_obj__144, ((struct sNode*)__result_obj__144)->finalize, ((struct sNode*)__result_obj__144)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__144;
}

