/// previous struct definition ///
struct __sFILEX;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long  long _mbstateL;
};

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long  long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long  long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int __darwin_wctype_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long register_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long user_addr_t;

typedef unsigned long  long user_size_t;

typedef long long user_ssize_t;

typedef long long user_long_t;

typedef unsigned long  long user_ulong_t;

typedef long long user_time_t;

typedef long long user_off_t;

typedef unsigned long  long syscall_arg_t;

typedef unsigned long  int size_t;

typedef long  long fpos_t;

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void* _cookie;
    int (*_close)(void*);
    int (*_read)(void*,char*,int);
    long  long (*_seek)(void*,long  long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long  long _offset;
};

typedef struct __sFILE FILE;

extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
typedef long  long off_t;

typedef long ssize_t;

extern const int sys_nerr;
extern const char* sys_errlist[];
enum anonymous_typeY2 { P_ALL
,P_PID
,P_PGID
};

typedef enum anonymous_typeY2 idtype_t;

typedef int pid_t;

typedef unsigned int id_t;

typedef int sig_atomic_t;

struct __darwin_arm_exception_state
{
    unsigned int __exception;
    unsigned int __fsr;
    unsigned int __far;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long __far;
    unsigned int __esr;
    unsigned int __exception;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long __far;
    unsigned long  long __esr;
};

struct __darwin_arm_thread_state
{
    unsigned int __r[13];
    unsigned int __sp;
    unsigned int __lr;
    unsigned int __pc;
    unsigned int __cpsr;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long __x[29];
    unsigned long  long __fp;
    unsigned long  long __lr;
    unsigned long  long __sp;
    unsigned long  long __pc;
    unsigned int __cpsr;
    unsigned int __pad;
};

struct __darwin_arm_vfp_state
{
    unsigned int __r[64];
    unsigned int __fpscr;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int __fpsr;
    unsigned int __fpcr;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __arm_legacy_debug_state
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
};

struct __darwin_arm_debug_state32
{
    unsigned int __bvr[16];
    unsigned int __bcr[16];
    unsigned int __wvr[16];
    unsigned int __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long __bvr[16];
    unsigned long  long __bcr[16];
    unsigned long  long __wvr[16];
    unsigned long  long __wcr[16];
    unsigned long  long __mdscr_el1;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long __ctrs[16];
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state __es;
    struct __darwin_arm_thread_state __ss;
    struct __darwin_arm_vfp_state __fs;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64 __es;
    struct __darwin_arm_thread_state64 __ss;
    struct __darwin_arm_neon_state64 __ns;
};

typedef struct __darwin_mcontext64* mcontext_t;

typedef struct _opaque_pthread_attr_t pthread_attr_t;

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int ss_size;
    int ss_flags;
};

typedef struct __darwin_sigaltstack stack_t;

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    unsigned long  int uc_mcsize;
    struct __darwin_mcontext64* uc_mcontext;
};

typedef struct __darwin_ucontext ucontext_t;

typedef unsigned int sigset_t;

typedef unsigned int uid_t;

union sigval
{
int sival_int;
void* sival_ptr;
};

struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (*sigev_notify_function)(union sigval);
    struct _opaque_pthread_attr_t* sigev_notify_attributes;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int si_pid;
    unsigned int si_uid;
    int si_status;
    void* si_addr;
    union sigval si_value;
    long si_band;
    unsigned long  int __pad[7];
};

typedef struct __siginfo siginfo_t;

union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo*,void*);
};

struct __sigaction
{
    union __sigaction_u __sigaction_u;
    void (*sa_tramp)(void*,int,int,struct __siginfo*,void*);
    unsigned int sa_mask;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u __sigaction_u;
    unsigned int sa_mask;
    int sa_flags;
};

typedef void (*sig_t)(int);

struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};

struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

struct timeval
{
    long tv_sec;
    int tv_usec;
};

typedef unsigned long  long rlim_t;

struct rusage
{
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

typedef void* rusage_info_t;

struct rusage_info_v0
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
};

struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
};

struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
};

struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
};

struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
};

struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
};

struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
    unsigned long  long ri_user_ptime;
    unsigned long  long ri_system_ptime;
    unsigned long  long ri_pinstructions;
    unsigned long  long ri_pcycles;
    unsigned long  long ri_energy_nj;
    unsigned long  long ri_penergy_nj;
    unsigned long  long ri_secure_time_in_system;
    unsigned long  long ri_secure_ptime_in_system;
    unsigned long  long ri_neural_footprint;
    unsigned long  long ri_lifetime_max_neural_footprint;
    unsigned long  long ri_interval_max_neural_footprint;
    unsigned long  long ri_reserved[9];
};

typedef struct rusage_info_v6 rusage_info_current;

struct rlimit
{
    unsigned long  long rlim_cur;
    unsigned long  long rlim_max;
};

struct proc_rlimit_control_wakeupmon
{
    unsigned int wm_flags;
    int wm_rate;
};

struct anonymous_typeX3
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX4
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
struct anonymous_typeX3 w_T;
struct anonymous_typeX4 w_S;
};

typedef int ct_rune_t;

typedef int rune_t;

typedef int wchar_t;

struct anonymous_typeX5
{
    int quot;
    int rem;
};

typedef struct anonymous_typeX5 div_t;

struct anonymous_typeX6
{
    long quot;
    long rem;
};

typedef struct anonymous_typeX6 ldiv_t;

struct anonymous_typeX7
{
    long long quot;
    long long rem;
};

typedef struct anonymous_typeX7 lldiv_t;

extern int __mb_cur_max;
typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t;

typedef unsigned short int mode_t;

extern char* suboptarg;
typedef unsigned long  int rsize_t;

typedef int errno_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

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
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

typedef void* any;

typedef char* string;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;
struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern void* gComeFunResultObject;

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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

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

extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};

struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    char* mName;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
};

struct tuple1$1sTypeph
{
    struct sType* v1;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct tuple1$1sTypeph* mChannelType;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
};

struct sClassModule
{
    char* mName;
    char* mText;
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};

struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sInfo
{
    char* p;
    char* head;
    struct buffer* original_source;
    struct buffer* source;
    char* sname;
    char* base_sname;
    int sline;
    int err_num;
    char* err_line;
    char* clang_option;
    char* cpp_option;
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
    struct sFun* come_fun;
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    _Bool without_semicolon;
    _Bool writing_source_file_position;
    struct sType* function_result_type;
    _Bool in_class;
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool nocomelib;
    _Bool in_top_level;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long  long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...);
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66);
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...);
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94);
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97);
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99);
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101);
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105);
int __swbuf(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
void flockfile(struct __sFILE* anonymous_var_nameX108);
int ftrylockfile(struct __sFILE* anonymous_var_nameX109);
void funlockfile(struct __sFILE* anonymous_var_nameX110);
int getc_unlocked(struct __sFILE* anonymous_var_nameX111);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX112, struct __sFILE* anonymous_var_nameX113);
int putchar_unlocked(int anonymous_var_nameX114);
int getw(struct __sFILE* anonymous_var_nameX115);
int putw(int anonymous_var_nameX116, struct __sFILE* anonymous_var_nameX117);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long  long __offset, int __whence);
long  long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133);
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141);
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long  long (*anonymous_lambda_var_nameZ3)(void*,long  long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176);
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178);
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186);
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188);
int wait(int* anonymous_var_nameX189);
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192);
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196);
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245);
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]);
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX271[3]);
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX274);
long random();
int rand_r(unsigned int* anonymous_var_nameX275);
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277);
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX279);
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
char* cgetcap(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, int anonymous_var_nameX291);
int cgetclose();
int cgetent(char** anonymous_var_nameX292, char** anonymous_var_nameX293, const char* anonymous_var_nameX294);
int cgetfirst(char** anonymous_var_nameX295, char** anonymous_var_nameX296);
int cgetmatch(const char* anonymous_var_nameX297, const char* anonymous_var_nameX298);
int cgetnext(char** anonymous_var_nameX299, char** anonymous_var_nameX300);
int cgetnum(char* anonymous_var_nameX301, const char* anonymous_var_nameX302, long* anonymous_var_nameX303);
int cgetset(const char* anonymous_var_nameX304);
int cgetstr(char* anonymous_var_nameX305, const char* anonymous_var_nameX306, char** anonymous_var_nameX307);
int cgetustr(char* anonymous_var_nameX308, const char* anonymous_var_nameX309, char** anonymous_var_nameX310);
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312);
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void* memcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __len);
void* memset(void* __b, int __c, unsigned long  int __len);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int __n);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen);
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int __n);
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s1, unsigned long  int __n);
unsigned long  int strnlen(const char* __s1, unsigned long  int __n);
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n);
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len);
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len);
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len);
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len);
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366);
int ffsll(long  long anonymous_var_nameX367);
int fls(int anonymous_var_nameX368);
int flsl(long anonymous_var_nameX369);
int flsll(long  long anonymous_var_nameX370);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int* __error();
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
void stackframe();
char* come_get_stackframe();
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self);
int int_catch(int self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_clone(struct buffer* self);
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
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
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
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
int string_length(char* str);
int charp_length(char* str);
char* string_reverse(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* charp_printable(char* str);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
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
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* FILE_read(struct __sFILE* f);
int FILE_write(struct __sFILE* f, char* str);
int FILE_fclose(struct __sFILE* f);
struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* string_read(char* file_name);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
char* string_puts(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
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
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
// uniq global variable
// inline function
static static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3593, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3600, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3609, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3616, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3623, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3630, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3637, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3965, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3970, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 3975, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 3980, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 3985, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4018, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4020, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4025, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4027, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4032, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4034, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4039, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4041, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4046, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4048, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4053, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4055, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4060, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4062, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4067, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4072, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4077, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4082, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4087, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4092, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4097, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4102, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4107, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4112, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4117, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4122, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4127, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4132, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
}
static static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1char"))));
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1881, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_271;
struct sType* type_289;
struct sClass* generics_class_293;
void* __right_value280 = (void*)0;
_Bool generics_type_name_294;
void* __right_value281 = (void*)0;
_Bool mgenerics_type_name_300;
    klass_271=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_289=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_293=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_294=list$1charph_contained(info->generics_type_names,((char*)(__right_value280=__builtin_string(buf))));
    /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_300=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value281=__builtin_string(buf))));
    /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_289&&type_289->mTypedef)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||(klass_271&&klass_271->mNumber)||(klass_271&&klass_271->mFloat)||charp_operator_equals(buf,"void")||charp_operator_equals(buf,"_Nullable")||generics_class_293||generics_type_name_294||mgenerics_type_name_300;
    }
    else {
        return generics_class_293||generics_type_name_294||mgenerics_type_name_300||klass_271||type_289||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_272;
unsigned int hash_273;
unsigned int it_274;
struct sClass* __result223__;
struct sClass* __result224__;
struct sClass* __result225__;
struct sClass* __result226__;
default_value_272 = (void*)0;
    memset(&default_value_272,0,sizeof(struct sClass*));
    hash_273=string_get_hash_key(((char*)key))%self->size;
    it_274=hash_273;
    while((_Bool)1) {
        if(        self->item_existance[it_274]) {
            if(            string_equals(self->keys[it_274],key)) {
                __result223__ = gComeFunResultObject = __result_obj__ = self->items[it_274];
                /*i*/come_call_finalizer3(default_value_272,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
            it_274++;
            if(            it_274>=self->size) {
                it_274=0;
            }
            else if(            it_274==hash_273) {
                __result224__ = gComeFunResultObject = __result_obj__ = default_value_272;
                /*i*/come_call_finalizer3(default_value_272,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
        }
        else {
            __result225__ = gComeFunResultObject = __result_obj__ = default_value_272;
            /*i*/come_call_finalizer3(default_value_272,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result225__;
        }
    }
    __result226__ = gComeFunResultObject = __result_obj__ = default_value_272;
    /*i*/come_call_finalizer3(default_value_272,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __dec_obj33;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj32=self->mName;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj33=self->mFields;
            come_call_finalizer3(__dec_obj33,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj57=self->mDeclareSName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj58=self->mParentClassName;
            /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_275;
struct list_item$1tuple2$2charphsTypephph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        /*i*/come_call_finalizer3(prev_it_276,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj35;
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj36=self->v2;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*i*/come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_279;
struct list_item$1sTypeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*i*/come_call_finalizer3(prev_it_280,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*i*/come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            /* U1 */ if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_283;
struct list_item$1sNodeph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        /*i*/come_call_finalizer3(prev_it_284,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_285;
struct list_item$1charph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*i*/come_call_finalizer3(prev_it_286,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_287;
struct list_item$1tuple2$2charphsTypephph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*i*/come_call_finalizer3(prev_it_288,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_290;
unsigned int hash_291;
unsigned int it_292;
struct sType* __result227__;
struct sType* __result228__;
struct sType* __result229__;
struct sType* __result230__;
default_value_290 = (void*)0;
    memset(&default_value_290,0,sizeof(struct sType*));
    hash_291=string_get_hash_key(((char*)key))%self->size;
    it_292=hash_291;
    while((_Bool)1) {
        if(        self->item_existance[it_292]) {
            if(            string_equals(self->keys[it_292],key)) {
                __result227__ = gComeFunResultObject = __result_obj__ = self->items[it_292];
                /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result227__;
            }
            it_292++;
            if(            it_292>=self->size) {
                it_292=0;
            }
            else if(            it_292==hash_291) {
                __result228__ = gComeFunResultObject = __result_obj__ = default_value_290;
                /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
        }
        else {
            __result229__ = gComeFunResultObject = __result_obj__ = default_value_290;
            /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result229__;
        }
    }
    __result230__ = gComeFunResultObject = __result_obj__ = default_value_290;
    /*i*/come_call_finalizer3(default_value_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_297;
    for(    it_297=list$1charph_begin(self);    !list$1charph_end(self);    it_297=list$1charph_next(self)    ){
        if(        string_equals(it_297,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_295;
char* __result231__;
char* __result232__;
char* result_296;
char* __result233__;
result_295 = (void*)0;
result_296 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_295,0,sizeof(char*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_295;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->head;
    if(    self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_296,0,sizeof(char*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_296;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_298;
char* __result234__;
char* __result235__;
char* result_299;
char* __result236__;
result_298 = (void*)0;
result_299 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_298,0,sizeof(char*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_298;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_299,0,sizeof(char*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_299;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

void skip_paren(struct sInfo* info){
int nest_301;
    nest_301=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_301++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_301--;
            if(            nest_301==0) {
                break;
            }
        }
        else {
            info->p++;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_302;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct buffer* fname_303;
void* __right_value284 = (void*)0;
char* __dec_obj59;
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(        strmemcmp(info->p,"pragma")) {
            while(*info->p) {
                if(                *info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        xisdigit(*info->p)) {
            line_302=0;
            fname_303=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 75, "buffer"))));
            while(xisdigit(*info->p)) {
                line_302=line_302*10+(*info->p-48);
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    buffer_append_char(fname_303,*info->p);
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            info->sline=line_302;
            __dec_obj59=info->sname;
            info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_303));
            /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            skip_spaces_and_lf(info);
            /*i*/come_call_finalizer3(fname_303,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==34) {
            info->p++;
            while(*info->p!=34) {
                info->p++;
            }
            while(*info->p!=10) {
                info->p++;
            }
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_304;
    c_304=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_304==59||c_304==32||c_304==9||c_304==10||c_304==10||c_304==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct buffer* buf_305;
void* __right_value287 = (void*)0;
_Bool _if_conditional1;
void* __right_value288 = (void*)0;
char* __result237__;
void* __right_value289 = (void*)0;
char* result_306;
void* __right_value290 = (void*)0;
char* __result242__;
char* __result243__;
    buf_305=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 137, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_305,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value287=buffer_to_string(buf_305))))==0)),    /* U10 */ (__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value288=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_306=(char*)come_increment_ref_count(buffer_to_string(buf_305));
    if(    info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_306)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value290=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_306), "05type.c", 155, 0)))));
        /*i*/come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_306 = come_decrement_ref_count2(result_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_306;
    /*i*/come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_306 = come_decrement_ref_count2(result_306, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_307;
unsigned int hash_308;
unsigned int it_309;
char* __result238__;
char* __result239__;
char* __result240__;
char* __result241__;
default_value_307 = (void*)0;
    memset(&default_value_307,0,sizeof(char*));
    hash_308=string_get_hash_key(((char*)key))%self->size;
    it_309=hash_308;
    while((_Bool)1) {
        if(        self->item_existance[it_309]) {
            if(            string_equals(self->keys[it_309],key)) {
                __result238__ = gComeFunResultObject = __result_obj__ = self->items[it_309];
                /* U13 */default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result238__;
            }
            it_309++;
            if(            it_309>=self->size) {
                it_309=0;
            }
            else if(            it_309==hash_308) {
                __result239__ = gComeFunResultObject = __result_obj__ = default_value_307;
                /* U13 */default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result239__;
            }
        }
        else {
            __result240__ = gComeFunResultObject = __result_obj__ = default_value_307;
            /* U13 */default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result240__;
        }
    }
    __result241__ = gComeFunResultObject = __result_obj__ = default_value_307;
    /* U13 */default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_310;
int sline_311;
char* buf_312;
void* __right_value291 = (void*)0;
char* __dec_obj60;
void* __right_value292 = (void*)0;
char* __dec_obj61;
char* __result244__;
buf_312 = (void*)0;
    p_310=info->p;
    sline_311=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj60=buf_312;
        buf_312=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj61=buf_312;
        buf_312=(char*)come_increment_ref_count(__builtin_string(""));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_310;
    info->sline=sline_311;
    __result244__ = gComeFunResultObject = __result_obj__ = buf_312;
    /* U13 */buf_312 = come_decrement_ref_count2(buf_312, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sTypeph* o2_saved_313;
struct sType* it_316;
_Bool __result251__;
    for(    o2_saved_313=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_316=list$1sTypeph_begin((o2_saved_313));    !list$1sTypeph_end((o2_saved_313));    it_316=list$1sTypeph_next((o2_saved_313))    ){
        if(        is_contained_generics_class(it_316,info)) {
            __result251__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_313,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result251__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_313,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_314;
struct sType* __result245__;
struct sType* __result246__;
struct sType* result_315;
struct sType* __result247__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(struct sType*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->head;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_315,0,sizeof(struct sType*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_317;
struct sType* __result248__;
struct sType* __result249__;
struct sType* result_318;
struct sType* __result250__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(struct sType*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_318,0,sizeof(struct sType*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sTypeph* param_types_319;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1charph* param_names_320;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1charph* param_default_parametors_321;
_Bool var_args_322;
void* __right_value302 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* type__326;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
_Bool void_param_342;
char* p_343;
int sline_344;
void* __right_value339 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_345=0;
char* param_name_346=0;
_Bool err_347=0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result270__;
void* __right_value342 = (void*)0;
struct sType* param_type2_348;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* p_352;
_Bool no_comma_353;
void* __right_value348 = (void*)0;
struct sNode* node_354;
char* p2_355;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result273__;
    param_types_319=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 216, "list$1sTypeph"))));
    param_names_320=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 217, "list$1charph"))));
    param_default_parametors_321=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 218, "list$1charph"))));
    var_args_322=(_Bool)0;
    if(    in_constructor_) {
        list$1charph_add(param_names_320,(char*)come_increment_ref_count(xsprintf("self")));
        type__326=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__326->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_319,(struct sType*)come_increment_ref_count(type__326));
        list$1charph_add(param_default_parametors_321,((void*)0));
        /*i*/come_call_finalizer3(type__326,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charph_add(param_names_320,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypeph_add(param_types_319,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
        list$1charph_add(param_default_parametors_321,((void*)0));
    }
    expected_next_character(40,info);
    void_param_342=(_Bool)0;
    {
        p_343=info->p;
        sline_344=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_342=(_Bool)1;
            }
        }
        info->p=p_343;
        info->sline=sline_344;
    }
    if(    void_param_342) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value339=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_345=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_346=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_347=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value339,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_347) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result270__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value341=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 280, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                /*i*/come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_319,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_320,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_321,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value341,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            param_type2_348=(struct sType*)come_increment_ref_count(solve_generics(param_type_345,info->generics_type,info));
            param_type2_348->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_319,(struct sType*)come_increment_ref_count(sType_clone(param_type2_348)));
            list$1charph_push_back(param_names_320,(char*)come_increment_ref_count(string_clone(param_name_346)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_352=info->p;
                no_comma_353=info->no_comma;
                info->no_comma=(_Bool)1;
                node_354=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_353;
                p2_355=info->p;
                char buf_356[p2_355-p_352+1];
                memset(&buf_356, 0, sizeof(char)                *(p2_355-p_352+1)                );
                memcpy(buf_356,p_352,p2_355-p_352);
                buf_356[p2_355-p_352]=0;
                list$1charph_push_back(param_default_parametors_321,(char*)come_increment_ref_count(__builtin_string(buf_356)));
                if(node_354) { node_354 = come_decrement_ref_count2(node_354, ((struct sNode*)node_354)->finalize, ((struct sNode*)node_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_321,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_322=(_Bool)1;
                    expected_next_character(41,info);
                    /*i*/come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /*i*/come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            /*i*/come_call_finalizer3(param_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */param_name_346 = come_decrement_ref_count2(param_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value351=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 340, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_319),(struct list$1charph*)come_increment_ref_count(param_names_320),(struct list$1charph*)come_increment_ref_count(param_default_parametors_321),var_args_322)));
    /*i*/come_call_finalizer3(param_types_319,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_320,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_321,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value351,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result252__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1charph* litem_323;
char* __dec_obj62;
void* __right_value300 = (void*)0;
struct list_item$1charph* litem_324;
char* __dec_obj63;
void* __right_value301 = (void*)0;
struct list_item$1charph* litem_325;
char* __dec_obj64;
struct list$1charph* __result253__;
    if(    self->len==0) {
        litem_323=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value299=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1017, "list_item$1charph"))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj62=litem_323->item;
        litem_323->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value300=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1027, "list_item$1charph"))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj63=litem_324->item;
        litem_324->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value301=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1037, "list_item$1charph"))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj64=litem_325->item;
        litem_325->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result254__;
void* __right_value303 = (void*)0;
struct sType* result_327;
void* __right_value306 = (void*)0;
struct tuple1$1sTypeph* __dec_obj67;
void* __right_value307 = (void*)0;
struct tuple1$1sTypeph* __dec_obj68;
void* __right_value308 = (void*)0;
char* __dec_obj69;
void* __right_value315 = (void*)0;
struct list$1sTypeph* __dec_obj73;
void* __right_value323 = (void*)0;
struct list$1sNodeph* __dec_obj77;
void* __right_value324 = (void*)0;
struct list$1sTypeph* __dec_obj78;
void* __right_value328 = (void*)0;
struct list$1charph* __dec_obj79;
void* __right_value329 = (void*)0;
struct tuple1$1sTypeph* __dec_obj80;
void* __right_value330 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value331 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value333 = (void*)0;
char* __dec_obj84;
void* __right_value334 = (void*)0;
char* __dec_obj85;
void* __right_value335 = (void*)0;
char* __dec_obj86;
struct sType* __result268__;
    if(    self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_327=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_327->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj67=result_327->mNoSolvedGenericsType;
        result_327->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj68=result_327->mOriginalLoadVarType;
        result_327->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj69=result_327->mGenericsName;
        result_327->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj73=result_327->mGenericsTypes;
        result_327->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj77=result_327->mArrayNum;
        result_327->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj77,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj78=result_327->mParamTypes;
        result_327->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj78,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj79=result_327->mParamNames;
        result_327->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj80=result_327->mResultType;
        result_327->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj81=result_327->mAlignas;
        result_327->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj82=result_327->mChannelType;
        result_327->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_327->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_327->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_327->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_327->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_327->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_327->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_327->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_327->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_327->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_327->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_327->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_327->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_327->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_327->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_327->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_327->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj83=result_327->mSizeNum;
        result_327->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_327->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj84=result_327->mOriginalTypeName;
        result_327->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_327->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_327->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_327->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_327->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_327->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_327->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj85=result_327->mAsmName;
        result_327->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_327->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_327->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_327->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_327->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj86=result_327->mTupleName;
        result_327->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_327;
    /*i*/come_call_finalizer3(result_327,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result255__;
void* __right_value304 = (void*)0;
struct tuple1$1sTypeph* result_328;
void* __right_value305 = (void*)0;
struct sType* __dec_obj65;
struct tuple1$1sTypeph* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_328=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj65=result_328->v1;
        result_328->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_328;
    /*i*/come_call_finalizer3(result_328,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj66;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj66=self->v1;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result257__;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1sTypeph* result_329;
struct list_item$1sTypeph* it_330;
void* __right_value314 = (void*)0;
struct list$1sTypeph* __result259__;
    if(    self==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_329=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1003, "list$1sTypeph"))));
    it_330=self->head;
    while(it_330!=((void*)0)) {
        list$1sTypeph_add(result_329,(struct sType*)come_increment_ref_count(sType_clone(it_330->item)));
        it_330=it_330->next;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_329;
    /*i*/come_call_finalizer3(result_329,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct list_item$1sTypeph* litem_331;
struct sType* __dec_obj70;
void* __right_value312 = (void*)0;
struct list_item$1sTypeph* litem_332;
struct sType* __dec_obj71;
void* __right_value313 = (void*)0;
struct list_item$1sTypeph* litem_333;
struct sType* __dec_obj72;
struct list$1sTypeph* __result258__;
    if(    self->len==0) {
        litem_331=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value311=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1017, "list_item$1sTypeph"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj70=litem_331->item;
        litem_331->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value312=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1027, "list_item$1sTypeph"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj71=litem_332->item;
        litem_332->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value313=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1037, "list_item$1sTypeph"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj72=litem_333->item;
        litem_333->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result260__;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1sNodeph* result_334;
struct list_item$1sNodeph* it_335;
void* __right_value322 = (void*)0;
struct list$1sNodeph* __result265__;
    if(    self==((void*)0)) {
        __result260__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_334=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1003, "list$1sNodeph"))));
    it_335=self->head;
    while(it_335!=((void*)0)) {
        list$1sNodeph_add(result_334,(struct sNode*)come_increment_ref_count(sNode_clone(it_335->item)));
        it_335=it_335->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_334;
    /*i*/come_call_finalizer3(result_334,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result261__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj74;
void* __right_value319 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj75;
void* __right_value320 = (void*)0;
struct list_item$1sNodeph* litem_338;
struct sNode* __dec_obj76;
struct list$1sNodeph* __result262__;
    if(    self->len==0) {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value318=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1017, "list_item$1sNodeph"))));
        litem_336->prev=((void*)0);
        litem_336->next=((void*)0);
        __dec_obj74=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_336;
        self->head=litem_336;
    }
    else if(    self->len==1) {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value319=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1027, "list_item$1sNodeph"))));
        litem_337->prev=self->head;
        litem_337->next=((void*)0);
        __dec_obj75=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_337;
        self->head->next=litem_337;
    }
    else {
        litem_338=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value320=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1037, "list_item$1sNodeph"))));
        litem_338->prev=self->tail;
        litem_338->next=((void*)0);
        __dec_obj76=litem_338->item;
        litem_338->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_338;
        self->tail=litem_338;
    }
    self->len++;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result263__;
void* __right_value321 = (void*)0;
struct sNode* result_339;
struct sNode* __result264__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_339=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_339->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_339->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_339->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_339->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_339->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_339->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_339->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_339->kind=self->kind;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_339;
    if(result_339) { result_339 = come_decrement_ref_count2(result_339, ((struct sNode*)result_339)->finalize, ((struct sNode*)result_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result266__;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1charph* result_340;
struct list_item$1charph* it_341;
void* __right_value327 = (void*)0;
struct list$1charph* __result267__;
    if(    self==((void*)0)) {
        __result266__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_340=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1003, "list$1charph"))));
    it_341=self->head;
    while(it_341!=((void*)0)) {
        list$1charph_add(result_340,(char*)come_increment_ref_count(string_clone(it_341->item)));
        it_341=it_341->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_340;
    /*i*/come_call_finalizer3(result_340,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj88=self->v2;
            /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result269__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
struct list_item$1sTypeph* litem_349;
struct sType* __dec_obj89;
void* __right_value344 = (void*)0;
struct list_item$1sTypeph* litem_350;
struct sType* __dec_obj90;
void* __right_value345 = (void*)0;
struct list_item$1sTypeph* litem_351;
struct sType* __dec_obj91;
struct list$1sTypeph* __result271__;
    if(    self->len==0) {
        litem_349=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value343=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1sTypeph"))));
        litem_349->prev=((void*)0);
        litem_349->next=((void*)0);
        __dec_obj89=litem_349->item;
        litem_349->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_349;
        self->head=litem_349;
    }
    else if(    self->len==1) {
        litem_350=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value344=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1sTypeph"))));
        litem_350->prev=self->head;
        litem_350->next=((void*)0);
        __dec_obj90=litem_350->item;
        litem_350->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_350;
        self->head->next=litem_350;
    }
    else {
        litem_351=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value345=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1sTypeph"))));
        litem_351->prev=self->tail;
        litem_351->next=((void*)0);
        __dec_obj91=litem_351->item;
        litem_351->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_351;
        self->tail=litem_351;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result272__;
    __dec_obj92=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj92,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj95=self->v1;
            come_call_finalizer3(__dec_obj95,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj96=self->v2;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj97=self->v3;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value352 = (void*)0;
struct sType* right_type2_357;
struct sType* left_no_solved_generics_type_358;
struct sType* right_no_solved_generics_type_359;
struct sClass* left_class_360;
struct sClass* right_class_361;
_Bool parent_class_362;
void* __right_value353 = (void*)0;
char* left_type_name_363;
void* __right_value354 = (void*)0;
char* __dec_obj98;
void* __right_value355 = (void*)0;
struct sType* __dec_obj99;
void* __right_value356 = (void*)0;
struct sType* __dec_obj100;
void* __right_value357 = (void*)0;
char* left_type_name_364;
void* __right_value358 = (void*)0;
char* __dec_obj101;
void* __right_value359 = (void*)0;
struct sType* __dec_obj102;
void* __right_value360 = (void*)0;
struct sType* __dec_obj103;
_Bool __result274__;
int i_365;
void* __right_value361 = (void*)0;
char* left_type_name_369;
void* __right_value362 = (void*)0;
char* __dec_obj104;
void* __right_value363 = (void*)0;
struct sType* __dec_obj105;
void* __right_value364 = (void*)0;
struct sType* __dec_obj106;
void* __right_value365 = (void*)0;
char* left_type_name_370;
void* __right_value366 = (void*)0;
char* __dec_obj107;
void* __right_value367 = (void*)0;
struct sType* __dec_obj108;
void* __right_value368 = (void*)0;
struct sType* __dec_obj109;
void* __right_value369 = (void*)0;
char* __dec_obj110;
void* __right_value370 = (void*)0;
struct sType* __dec_obj111;
void* __right_value371 = (void*)0;
struct sType* __dec_obj112;
void* __right_value372 = (void*)0;
char* left_type_name_371;
void* __right_value373 = (void*)0;
char* __dec_obj113;
void* __right_value374 = (void*)0;
struct sType* __dec_obj114;
void* __right_value375 = (void*)0;
struct sType* __dec_obj115;
void* __right_value376 = (void*)0;
char* left_type_name_372;
void* __right_value377 = (void*)0;
char* __dec_obj116;
void* __right_value378 = (void*)0;
struct sType* __dec_obj117;
void* __right_value379 = (void*)0;
struct sType* __dec_obj118;
_Bool __result277__;
_Bool __result278__;
_Bool __result279__;
_Bool __result280__;
_Bool __result281__;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct buffer* buf2_373;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
char* __dec_obj119;
void* __right_value388 = (void*)0;
struct sType* __dec_obj120;
void* __right_value389 = (void*)0;
struct sType* __dec_obj121;
_Bool __result282__;
_Bool __result283__;
_Bool __result284__;
void* __right_value390 = (void*)0;
char* method_name_374;
struct sType* obj_type_377;
struct sType* obj_type2_378;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __dec_obj137;
_Bool __result289__;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct buffer* buf2_379;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* type_380;
void* __right_value397 = (void*)0;
char* __dec_obj138;
void* __right_value398 = (void*)0;
struct sType* __dec_obj139;
void* __right_value399 = (void*)0;
struct sType* __dec_obj140;
_Bool __result290__;
_Bool __result291__;
_Bool __result292__;
void* __right_value400 = (void*)0;
char* method_name_381;
struct sType* obj_type_382;
struct sType* obj_type2_383;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* __dec_obj141;
_Bool __result293__;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct buffer* buf2_384;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sType* type_385;
void* __right_value407 = (void*)0;
char* __dec_obj142;
void* __right_value408 = (void*)0;
struct sType* __dec_obj143;
void* __right_value409 = (void*)0;
struct sType* __dec_obj144;
void* __right_value410 = (void*)0;
char* method_name_386;
struct sType* obj_type_387;
struct sType* obj_type2_388;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* __dec_obj145;
_Bool __result294__;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct buffer* buf2_389;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* type_390;
void* __right_value417 = (void*)0;
char* __dec_obj146;
void* __right_value418 = (void*)0;
struct sType* __dec_obj147;
void* __right_value419 = (void*)0;
struct sType* __dec_obj148;
void* __right_value420 = (void*)0;
char* method_name_391;
struct sType* obj_type_392;
struct sType* obj_type2_393;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
char* __dec_obj149;
_Bool __result295__;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct buffer* buf2_394;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* type_395;
void* __right_value427 = (void*)0;
char* __dec_obj150;
void* __right_value428 = (void*)0;
struct sType* __dec_obj151;
void* __right_value429 = (void*)0;
struct sType* __dec_obj152;
_Bool __result296__;
_Bool __result297__;
_Bool __result298__;
_Bool __result299__;
void* __right_value430 = (void*)0;
char* tmp_396;
void* __right_value431 = (void*)0;
char* __dec_obj153;
void* __right_value432 = (void*)0;
struct sType* __dec_obj154;
void* __right_value433 = (void*)0;
struct sType* __dec_obj155;
_Bool __result300__;
_Bool __result301__;
void* __right_value434 = (void*)0;
char* tmp_397;
void* __right_value435 = (void*)0;
char* __dec_obj156;
void* __right_value436 = (void*)0;
struct sType* __dec_obj157;
_Bool __result302__;
int i_398;
_Bool __result303__;
    right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_358=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_359=right_type2_357->mNoSolvedGenericsType->v1;
    left_class_360=left_type->mClass;
    right_class_361=right_type2_357->mClass;
    parent_class_362=(_Bool)0;
    if(    string_operator_not_equals(left_class_360->mName,right_class_361->mName)) {
        while(left_class_360&&right_class_361) {
            if(            string_operator_equals(left_class_360->mName,right_class_361->mName)) {
                parent_class_362=(_Bool)1;
            }
            if(            right_class_361->mParentClassName) {
                right_class_361=map$2charphsClassphp_operator_load_element(info->classes,right_class_361->mParentClassName);
            }
            else {
                right_class_361=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
        }
        else if(        left_type->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_358&&right_no_solved_generics_type_359) {
        if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_363=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj98=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_363,come_value->c_value));
                /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj99=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj100=right_type2_357;
                right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_type_name_363 = come_decrement_ref_count2(left_type_name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_364=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj101=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_364,come_value->c_value));
                /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj102=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj103=right_type2_357;
                right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_type_name_364 = come_decrement_ref_count2(left_type_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_357->mClass->mName)&&left_type->mPointerNum==right_type2_357->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_357->mClass->mName)&&(left_type->mPointerNum!=right_type2_357->mPointerNum||left_type->mHeap!=right_type2_357->mHeap)) {
            err_msg(info,"poinetr num err");
            printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
            exit(2);
        }
        else if(        list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_358->mClass->mName,"void")&&left_no_solved_generics_type_358->mPointerNum>0&&right_no_solved_generics_type_359->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_359->mClass->mName,"void")&&right_no_solved_generics_type_359->mPointerNum>0&&left_no_solved_generics_type_358->mPointerNum>0)) {
            }
            else {
                if(                list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
                        exit(2);
                    }
                    __result274__ = (_Bool)0;
                    /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result274__;
                }
                for(                i_365=0;                i_365<list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes);                i_365++                ){
                    check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_358->mGenericsTypes,i_365), "05type.c", 464, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_359->mGenericsTypes,i_365), "05type.c", 464, 2)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                check_assign_type(msg,left_no_solved_generics_type_358,right_no_solved_generics_type_359,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_369=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj104=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_369,come_value->c_value));
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj105=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj106=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_369 = come_decrement_ref_count2(left_type_name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_358->mGenericsTypes),left_no_solved_generics_type_358->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_359->mGenericsTypes),right_no_solved_generics_type_359->mClass->mName,right_type2_357->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_370=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj107=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_370,come_value->c_value));
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj109=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_370 = come_decrement_ref_count2(left_type_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_357->mHeap&&left_type->mPointerNum>0&&right_type2_357->mPointerNum>0&&string_operator_not_equals(right_type2_357->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum,right_type2_357->mHeap);
        exit(2);
    }
    else if(    parent_class_362&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj110=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj111=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj112=right_type2_357;
        right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_371=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj113=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_371,come_value->c_value));
            /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj114=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj115=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_371 = come_decrement_ref_count2(left_type_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_372=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_372,come_value->c_value));
            /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_372 = come_decrement_ref_count2(left_type_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_357->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_357->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_357->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                        exit(2);
                    }
                    __result277__ = (_Bool)0;
                    /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result277__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                    exit(2);
                }
                __result278__ = (_Bool)0;
                /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result278__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_357->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result279__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result279__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_357->mPointerNum==0&&string_operator_equals(right_type2_357->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_357->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result280__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result280__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_357->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result281__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result281__;
        }
        else {
            buf2_373=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 622, "buffer"))));
            buffer_append_str(buf2_373,((char*)(__right_value386=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value382=string_to_string(come_value->c_value))),((char*)(__right_value383=string_to_string(info->sname))),((char*)(__right_value384=int_to_string(info->sline))),((char*)(__right_value385=int_to_string(gComeDebugStackFrameID++)))))));
            /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_373));
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_373,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_357->mClass->mName,"integer")&&right_type2_357->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error7");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result282__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result282__;
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error8");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result283__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result283__;
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
        }
        else if(        right_type2_357->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error9");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result284__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result284__;
        }
        else {
            method_name_374=(char*)come_increment_ref_count(create_method_name(right_type2_357,(_Bool)0,"to_integer",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_374,((void*)0))==((void*)0)) {
                obj_type_377=right_type2_357->mNoSolvedGenericsType->v1;
                if(                obj_type_377&&list$1sTypeph_length(obj_type_377->mGenericsTypes)>0) {
                    obj_type2_378=right_type2_357;
                    __dec_obj137=method_name_374;
                    method_name_374=(char*)come_increment_ref_count(make_generics_function(obj_type2_378,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                    /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(                    print_err_msg) {
                        err_msg(info,"require to_integer implementation(%s)",right_type2_357->mClass->mName);
                        exit(2);
                    }
                    __result289__ = (_Bool)0;
                    /* U13 */method_name_374 = come_decrement_ref_count2(method_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result289__;
                }
            }
            buf2_379=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 689, "buffer"))));
            buffer_append_str(buf2_379,method_name_374);
            buffer_append_str(buf2_379,"(");
            buffer_append_str(buf2_379,come_value->c_value);
            buffer_append_str(buf2_379,")");
            type_380=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 696, "sType")),"integer",(_Bool)0,info));
            type_380->mHeap=(_Bool)1;
            type_380->mPointerNum=1;
            __dec_obj138=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_379));
            /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj139=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_380));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_380),info,(_Bool)0);
            __dec_obj140=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(type_380));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_374 = come_decrement_ref_count2(method_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_380,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"floating")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_357->mClass->mName,"floating")&&right_type2_357->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error7");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result290__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result290__;
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error8");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result291__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result291__;
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
        }
        else if(        right_type2_357->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error9");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result292__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result292__;
        }
        else {
            method_name_381=(char*)come_increment_ref_count(create_method_name(right_type2_357,(_Bool)0,"to_floating",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_381,((void*)0))==((void*)0)) {
                obj_type_382=right_type2_357->mNoSolvedGenericsType->v1;
                if(                obj_type_382&&list$1sTypeph_length(obj_type_382->mGenericsTypes)>0) {
                    obj_type2_383=right_type2_357;
                    __dec_obj141=method_name_381;
                    method_name_381=(char*)come_increment_ref_count(make_generics_function(obj_type2_383,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                    /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(                    print_err_msg) {
                        err_msg(info,"require to_floating implementation(%s)",right_type2_357->mClass->mName);
                        exit(2);
                    }
                    __result293__ = (_Bool)0;
                    /* U13 */method_name_381 = come_decrement_ref_count2(method_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result293__;
                }
            }
            buf2_384=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 764, "buffer"))));
            buffer_append_str(buf2_384,method_name_381);
            buffer_append_str(buf2_384,"(");
            buffer_append_str(buf2_384,come_value->c_value);
            buffer_append_str(buf2_384,")");
            type_385=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 771, "sType")),"floating",(_Bool)0,info));
            type_385->mHeap=(_Bool)1;
            type_385->mPointerNum=1;
            __dec_obj142=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_384));
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj143=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_385));
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_385),info,(_Bool)0);
            __dec_obj144=right_type2_357;
            right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(type_385));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_381 = come_decrement_ref_count2(method_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_384,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_385,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
        method_name_386=(char*)come_increment_ref_count(create_method_name(right_type2_357,(_Bool)0,"to_int",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_386,((void*)0))==((void*)0)) {
            obj_type_387=right_type2_357->mNoSolvedGenericsType->v1;
            if(            obj_type_387&&list$1sTypeph_length(obj_type_387->mGenericsTypes)>0) {
                obj_type2_388=right_type2_357;
                __dec_obj145=method_name_386;
                method_name_386=(char*)come_increment_ref_count(make_generics_function(obj_type2_388,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"require to_string implementation(%s)",right_type2_357->mClass->mName);
                    exit(1);
                }
                __result294__ = (_Bool)0;
                /* U13 */method_name_386 = come_decrement_ref_count2(method_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result294__;
            }
        }
        buf2_389=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 801, "buffer"))));
        buffer_append_str(buf2_389,method_name_386);
        buffer_append_str(buf2_389,"(");
        buffer_append_str(buf2_389,come_value->c_value);
        buffer_append_str(buf2_389,")");
        type_390=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 808, "sType")),"int",(_Bool)0,info));
        __dec_obj146=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_389));
        /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj147=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_390));
        come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj148=right_type2_357;
        right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(type_390));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_386 = come_decrement_ref_count2(method_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_389,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"double")&&(string_operator_equals(right_type->mClass->mName,"floating")&&right_type->mPointerNum==1)) {
        method_name_391=(char*)come_increment_ref_count(create_method_name(right_type2_357,(_Bool)0,"to_double",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_391,((void*)0))==((void*)0)) {
            obj_type_392=right_type2_357->mNoSolvedGenericsType->v1;
            if(            obj_type_392&&list$1sTypeph_length(obj_type_392->mGenericsTypes)>0) {
                obj_type2_393=right_type2_357;
                __dec_obj149=method_name_391;
                method_name_391=(char*)come_increment_ref_count(make_generics_function(obj_type2_393,(char*)come_increment_ref_count(__builtin_string("to_double")),info,(_Bool)1));
                /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"require to_double implementation(%s)",right_type2_357->mClass->mName);
                    exit(1);
                }
                __result295__ = (_Bool)0;
                /* U13 */method_name_391 = come_decrement_ref_count2(method_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result295__;
            }
        }
        buf2_394=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 834, "buffer"))));
        buffer_append_str(buf2_394,method_name_391);
        buffer_append_str(buf2_394,"(");
        buffer_append_str(buf2_394,come_value->c_value);
        buffer_append_str(buf2_394,")");
        type_395=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 841, "sType")),"double",(_Bool)0,info));
        __dec_obj150=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_394));
        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj151=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_395));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj152=right_type2_357;
        right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(type_395));
        come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_391 = come_decrement_ref_count2(method_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_395,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_357->mClass->mName,"char")&&right_type2_357->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result296__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result296__;
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result297__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result297__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_357->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_357->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result298__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result298__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")&&right_type2_357->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_357->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result299__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result299__;
        }
        else if(        right_type2_357->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_396=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj153=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_396));
                /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj154=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj155=right_type2_357;
                right_type2_357=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */tmp_396 = come_decrement_ref_count2(tmp_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_357->mPointerNum>0||(right_type2_357->mPointerNum==0&&right_type2_357->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_357->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_357->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                    exit(2);
                }
                __result300__ = (_Bool)0;
                /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result300__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_357->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
            }
            else if(            list$1sNodeph_length(right_type2_357->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum,list$1sNodeph_length(right_type2_357->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_357->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_357->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_357->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_357->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_357->mPointerNum==0&&string_operator_equals(right_type2_357->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            __result301__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result301__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_357->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_357->mPointerNum==0) {
            tmp_397=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj156=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_397));
            /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj157=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result302__ = (_Bool)1;
            /* U13 */tmp_397 = come_decrement_ref_count2(tmp_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result302__;
            /* U13 */tmp_397 = come_decrement_ref_count2(tmp_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1sTypeph_length(left_type->mGenericsTypes)>0) {
            if(            list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_357->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_357->mClass->mName,right_type2_357->mPointerNum);
                exit(2);
            }
            for(            i_398=0;            i_398<list$1sTypeph_length(left_type->mGenericsTypes);            i_398++            ){
                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_398), "05type.c", 1018, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_357->mGenericsTypes,i_398), "05type.c", 1018, 4)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    __result303__ = (_Bool)1;
    /*i*/come_call_finalizer3(right_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result303__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_366;
int i_367;
struct sType* __result275__;
struct sType* default_value_368;
struct sType* __result276__;
default_value_368 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_366=self->head;
    i_367=0;
    while(it_366!=((void*)0)) {
        if(        position==i_367) {
            __result275__ = gComeFunResultObject = __result_obj__ = it_366->item;
            gComeFunResultObject = (void*)0;
            return __result275__;
        }
        it_366=it_366->next;
        i_367++;
    }
    memset(&default_value_368,0,sizeof(struct sType*));
    __result276__ = gComeFunResultObject = __result_obj__ = default_value_368;
    /*i*/come_call_finalizer3(default_value_368,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_375;
unsigned int it_376;
struct sFun* __result285__;
struct sFun* __result286__;
struct sFun* __result287__;
struct sFun* __result288__;
    hash_375=string_get_hash_key(((char*)key))%self->size;
    it_376=hash_375;
    while((_Bool)1) {
        if(        self->item_existance[it_376]) {
            if(            string_equals(self->keys[it_376],key)) {
                __result285__ = gComeFunResultObject = __result_obj__ = self->items[it_376];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
            it_376++;
            if(            it_376>=self->size) {
                it_376=0;
            }
            else if(            it_376==hash_375) {
                __result286__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
        }
        else {
            __result287__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result287__;
        }
    }
    __result288__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj122;
struct sType* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
struct list$1charph* __dec_obj126;
struct sType* __dec_obj127;
struct sBlock* __dec_obj128;
struct buffer* __dec_obj131;
struct buffer* __dec_obj132;
struct buffer* __dec_obj133;
struct buffer* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj122=self->mName;
            /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj123=self->mResultType;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj124=self->mParamTypes;
            come_call_finalizer3(__dec_obj124,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj125=self->mParamNames;
            come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj126=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj127=self->mLambdaType;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj128=self->mBlock;
            come_call_finalizer3(__dec_obj128,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj131=self->mSource;
            come_call_finalizer3(__dec_obj131,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj132=self->mSourceHead;
            come_call_finalizer3(__dec_obj132,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj133=self->mSourceHead2;
            come_call_finalizer3(__dec_obj133,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj134=self->mSourceDefer;
            come_call_finalizer3(__dec_obj134,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj135=self->mComeHeader;
            /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj136=self->mDeclareSName;
            /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj129;
struct sVarTable* __dec_obj130;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj129=self->mNodes;
            come_call_finalizer3(__dec_obj129,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj130=self->mVarTable;
            come_call_finalizer3(__dec_obj130,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __right_value437 = (void*)0;
struct sType* right_type2_399;
void* __right_value438 = (void*)0;
char* method_name_400;
struct sType* obj_type_401;
struct sType* obj_type2_402;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
char* __dec_obj158;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* buf2_403;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* type_404;
void* __right_value445 = (void*)0;
char* __dec_obj159;
void* __right_value446 = (void*)0;
struct sType* __dec_obj160;
void* __right_value447 = (void*)0;
struct sType* __dec_obj161;
void* __right_value448 = (void*)0;
char* method_name_405;
struct sType* obj_type_406;
struct sType* obj_type2_407;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* __dec_obj162;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* buf2_408;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* type_409;
void* __right_value455 = (void*)0;
char* __dec_obj163;
void* __right_value456 = (void*)0;
struct sType* __dec_obj164;
void* __right_value457 = (void*)0;
struct sType* __dec_obj165;
void* __right_value458 = (void*)0;
char* method_name_410;
struct sType* obj_type_411;
struct sType* obj_type2_412;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* __dec_obj166;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* buf2_413;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* type_414;
void* __right_value465 = (void*)0;
char* __dec_obj167;
void* __right_value466 = (void*)0;
struct sType* __dec_obj168;
void* __right_value467 = (void*)0;
struct sType* __dec_obj169;
void* __right_value468 = (void*)0;
char* method_name_415;
struct sType* obj_type_416;
struct sType* obj_type2_417;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __dec_obj170;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct buffer* buf2_418;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* type_419;
void* __right_value475 = (void*)0;
char* __dec_obj171;
void* __right_value476 = (void*)0;
struct sType* __dec_obj172;
void* __right_value477 = (void*)0;
struct sType* __dec_obj173;
    right_type2_399=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    if(    string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_399->mClass->mName,"integer")&&right_type2_399->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_399->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_399->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"void")&&right_type2_399->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"void")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_399->mPointerNum==0&&string_operator_equals(right_type2_399->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        right_type->mPointerNum>0) {
        }
        else {
            method_name_400=(char*)come_increment_ref_count(create_method_name(right_type2_399,(_Bool)0,"to_integer",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_400,((void*)0))==((void*)0)) {
                obj_type_401=right_type2_399->mNoSolvedGenericsType->v1;
                if(                obj_type_401&&list$1sTypeph_length(obj_type_401->mGenericsTypes)>0) {
                    obj_type2_402=right_type2_399;
                    __dec_obj158=method_name_400;
                    method_name_400=(char*)come_increment_ref_count(make_generics_function(obj_type2_402,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                    /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_399->mClass->mName);
                    exit(1);
                }
            }
            buf2_403=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1061, "buffer"))));
            buffer_append_str(buf2_403,method_name_400);
            buffer_append_str(buf2_403,"(");
            buffer_append_str(buf2_403,come_value->c_value);
            buffer_append_str(buf2_403,")");
            type_404=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1068, "sType")),"integer",(_Bool)0,info));
            type_404->mHeap=(_Bool)1;
            type_404->mPointerNum=1;
            __dec_obj159=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_403));
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj160=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_404));
            come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_404),info,(_Bool)0);
            __dec_obj161=right_type2_399;
            right_type2_399=(struct sType*)come_increment_ref_count(sType_clone(type_404));
            come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_400 = come_decrement_ref_count2(method_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_404,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
        method_name_405=(char*)come_increment_ref_count(create_method_name(right_type2_399,(_Bool)0,"to_int",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_405,((void*)0))==((void*)0)) {
            obj_type_406=right_type2_399->mNoSolvedGenericsType->v1;
            if(            obj_type_406&&list$1sTypeph_length(obj_type_406->mGenericsTypes)>0) {
                obj_type2_407=right_type2_399;
                __dec_obj162=method_name_405;
                method_name_405=(char*)come_increment_ref_count(make_generics_function(obj_type2_407,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require to_string implementation(%s)",right_type2_399->mClass->mName);
                exit(1);
            }
        }
        buf2_408=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1095, "buffer"))));
        buffer_append_str(buf2_408,method_name_405);
        buffer_append_str(buf2_408,"(");
        buffer_append_str(buf2_408,come_value->c_value);
        buffer_append_str(buf2_408,")");
        type_409=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1102, "sType")),"int",(_Bool)0,info));
        __dec_obj163=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_408));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj164=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_409));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj165=right_type2_399;
        right_type2_399=(struct sType*)come_increment_ref_count(sType_clone(type_409));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_405 = come_decrement_ref_count2(method_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_408,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"floating")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_399->mClass->mName,"floating")&&right_type2_399->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_399->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_399->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"void")&&right_type2_399->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_399->mClass->mName,"void")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_399->mPointerNum==0&&string_operator_equals(right_type2_399->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        right_type->mPointerNum>0) {
        }
        else {
            method_name_410=(char*)come_increment_ref_count(create_method_name(right_type2_399,(_Bool)0,"to_floating",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_410,((void*)0))==((void*)0)) {
                obj_type_411=right_type2_399->mNoSolvedGenericsType->v1;
                if(                obj_type_411&&list$1sTypeph_length(obj_type_411->mGenericsTypes)>0) {
                    obj_type2_412=right_type2_399;
                    __dec_obj166=method_name_410;
                    method_name_410=(char*)come_increment_ref_count(make_generics_function(obj_type2_412,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                    /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_399->mClass->mName);
                    exit(1);
                }
            }
            buf2_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1142, "buffer"))));
            buffer_append_str(buf2_413,method_name_410);
            buffer_append_str(buf2_413,"(");
            buffer_append_str(buf2_413,come_value->c_value);
            buffer_append_str(buf2_413,")");
            type_414=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1149, "sType")),"floating",(_Bool)0,info));
            type_414->mHeap=(_Bool)1;
            type_414->mPointerNum=1;
            __dec_obj167=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_413));
            /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj168=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_414));
            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_414),info,(_Bool)0);
            __dec_obj169=right_type2_399;
            right_type2_399=(struct sType*)come_increment_ref_count(sType_clone(type_414));
            come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_410 = come_decrement_ref_count2(method_name_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"double")&&(string_operator_equals(right_type->mClass->mName,"floating")&&right_type->mPointerNum==1)) {
        method_name_415=(char*)come_increment_ref_count(create_method_name(right_type2_399,(_Bool)0,"to_floating",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_415,((void*)0))==((void*)0)) {
            obj_type_416=right_type2_399->mNoSolvedGenericsType->v1;
            if(            obj_type_416&&list$1sTypeph_length(obj_type_416->mGenericsTypes)>0) {
                obj_type2_417=right_type2_399;
                __dec_obj170=method_name_415;
                method_name_415=(char*)come_increment_ref_count(make_generics_function(obj_type2_417,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require to_string implementation(%s)",right_type2_399->mClass->mName);
                exit(1);
            }
        }
        buf2_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1176, "buffer"))));
        buffer_append_str(buf2_418,method_name_415);
        buffer_append_str(buf2_418,"(");
        buffer_append_str(buf2_418,come_value->c_value);
        buffer_append_str(buf2_418,")");
        type_419=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1183, "sType")),"double",(_Bool)0,info));
        __dec_obj171=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_418));
        /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj172=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_419));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj173=right_type2_399;
        right_type2_399=(struct sType*)come_increment_ref_count(sType_clone(type_419));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_415 = come_decrement_ref_count2(method_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_419,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(right_type2_399,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
struct sType* result_type_420;
char* var_name_421;
char* p_422;
int sline_423;
void* __right_value479 = (void*)0;
char* word_424;
_Bool between_brace_425;
char* p_426;
int sline_427;
void* __right_value480 = (void*)0;
char* word_428;
char* p_429;
int sline_430;
void* __right_value481 = (void*)0;
char* word_431;
void* __right_value482 = (void*)0;
char* __dec_obj174;
void* __right_value483 = (void*)0;
char* __dec_obj175;
_Bool no_comma_433;
void* __right_value484 = (void*)0;
struct sNode* node_434;
struct sNode* __dec_obj176;
char* p_435;
int sline_436;
void* __right_value485 = (void*)0;
char* word_437;
void* __right_value486 = (void*)0;
struct sNode* node_438;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct tuple2$2sTypephcharph* __result306__;
    result_type_420=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first) {
        result_type_420->mPointerNum=result_type_420->mTypedefOriginalPointerNum;
    }
    var_name_421=((void*)0);
    {
        p_422=info->p;
        sline_423=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_424=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_424,"const")||string_operator_equals(word_424,"__restrict")||string_operator_equals(word_424,"restrict")||string_operator_equals(word_424,"__user")||string_operator_equals(word_424,"volatile")||string_operator_equals(word_424,"_Nonnull")||string_operator_equals(word_424,"_Nullable")||string_operator_equals(word_424,"_Null_unspecified")||string_operator_equals(word_424,"__user")||string_operator_equals(word_424,"_Addr")) {
            }
            else {
                info->p=p_422;
                info->sline=sline_423;
            }
            /* U13 */word_424 = come_decrement_ref_count2(word_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_422;
            info->sline=sline_423;
        }
    }
    between_brace_425=(_Bool)0;
    {
        p_426=info->p;
        sline_427=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_428=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_428,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_425=(_Bool)1;
                    }
                }
                /* U13 */word_428 = come_decrement_ref_count2(word_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_426;
        info->sline=sline_427;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_429=info->p;
            sline_430=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_431=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_431,"const")||string_operator_equals(word_431,"__restrict")||string_operator_equals(word_431,"restrict")||string_operator_equals(word_431,"__user")||string_operator_equals(word_431,"volatile")||string_operator_equals(word_431,"_Nonnull")||string_operator_equals(word_431,"_Nullable")||string_operator_equals(word_431,"_Null_unspecified")||string_operator_equals(word_431,"__user")||string_operator_equals(word_431,"_Addr")) {
                }
                else {
                    info->p=p_429;
                    info->sline=sline_430;
                }
                /* U13 */word_431 = come_decrement_ref_count2(word_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_429;
                info->sline=sline_430;
            }
        }
        result_type_420->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_425&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj174=var_name_421;
        var_name_421=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_432=0;
        num_anonymous_var_name_432++;
        __dec_obj175=var_name_421;
        var_name_421=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_432));
        /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_425&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_433=info->no_comma;
        info->no_comma=(_Bool)1;
        node_434=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_433;
        __dec_obj176=result_type_420->mSizeNum;
        result_type_420->mSizeNum=(struct sNode*)come_increment_ref_count(node_434);
        /* U1 */ if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_435=info->p;
            sline_436=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_437=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_437,"const")||string_operator_equals(word_437,"__restrict")||string_operator_equals(word_437,"restrict")||string_operator_equals(word_437,"__user")||string_operator_equals(word_437,"volatile")||string_operator_equals(word_437,"_Nonnull")||string_operator_equals(word_437,"_Nullable")||string_operator_equals(word_437,"_Null_unspecified")||string_operator_equals(word_437,"__user")||string_operator_equals(word_437,"_Addr")) {
                }
                else {
                    info->p=p_435;
                    info->sline=sline_436;
                }
                /* U13 */word_437 = come_decrement_ref_count2(word_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_435;
                info->sline=sline_436;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_420->mArrayPointerType=(_Bool)1;
            result_type_420->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_438=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_420->mArrayNum,(struct sNode*)come_increment_ref_count(node_438));
        parse_sharp_v5(info);
        result_type_420->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    ((char*)(__right_value490=parse_attribute(info,(_Bool)0)));
    /* U11 */__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value492=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1356, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_420),(char*)come_increment_ref_count(var_name_421))));
    /*i*/come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_420,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_421 = come_decrement_ref_count2(var_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value492,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
struct list_item$1sNodeph* litem_439;
struct sNode* __dec_obj177;
void* __right_value488 = (void*)0;
struct list_item$1sNodeph* litem_440;
struct sNode* __dec_obj178;
void* __right_value489 = (void*)0;
struct list_item$1sNodeph* litem_441;
struct sNode* __dec_obj179;
struct list$1sNodeph* __result304__;
    if(    self->len==0) {
        litem_439=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value487=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1087, "list_item$1sNodeph"))));
        litem_439->prev=((void*)0);
        litem_439->next=((void*)0);
        __dec_obj177=litem_439->item;
        litem_439->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_439;
        self->head=litem_439;
    }
    else if(    self->len==1) {
        litem_440=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value488=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1097, "list_item$1sNodeph"))));
        litem_440->prev=self->head;
        litem_440->next=((void*)0);
        __dec_obj178=litem_440->item;
        litem_440->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_440;
        self->head->next=litem_440;
    }
    else {
        litem_441=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value489=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1107, "list_item$1sNodeph"))));
        litem_441->prev=self->tail;
        litem_441->next=((void*)0);
        __dec_obj179=litem_441->item;
        litem_441->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_441;
        self->tail=litem_441;
    }
    self->len++;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj180;
char* __dec_obj181;
struct tuple2$2sTypephcharph* __result305__;
    __dec_obj180=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj181=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj182;
char* __dec_obj183;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj182=self->v1;
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj183=self->v2;
            /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_442;
int sline_443;
void* __right_value493 = (void*)0;
char* word_444;
int nest_445;
int nest_446;
int nest_447;
    p_442=info->p;
    sline_443=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_444=(char*)come_increment_ref_count(parse_word(info));
        if(        string_operator_equals(word_444,"__nonnull")&&*info->p==40) {
            nest_445=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_445++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_445--;
                    if(                    nest_445==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_444,"__attribute__")&&*info->p==40) {
            nest_446=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_446++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_446--;
                    if(                    nest_446==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_444,"_Nonnull")&&*info->p==40) {
            nest_447=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_447++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_447--;
                    if(                    nest_447==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_444,"const")||string_operator_equals(word_444,"__restrict")||string_operator_equals(word_444,"restrict")||string_operator_equals(word_444,"__user")||string_operator_equals(word_444,"volatile")||string_operator_equals(word_444,"_Nonnull")||string_operator_equals(word_444,"_Nullable")||string_operator_equals(word_444,"_Null_unspecified")||string_operator_equals(word_444,"__user")||string_operator_equals(word_444,"_Addr")) {
        }
        else {
            info->p=p_442;
            info->sline=sline_443;
        }
        /* U13 */word_444 = come_decrement_ref_count2(word_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_442;
        info->sline=sline_443;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_448;
void* __right_value494 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_449=0;
char* name_450=0;
_Bool err_451=0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct tuple3$3sTypephcharphbool* __result308__;
    no_output_err_448=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value494=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_449=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_450=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_451=multiple_assign_var2->v3;
    /*g*/come_call_finalizer3(__right_value494,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_448;
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value496=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1466, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_449),(char*)come_increment_ref_count(name_450),err_451)));
    /*i*/come_call_finalizer3(type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name_450 = come_decrement_ref_count2(name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value496,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj184;
char* __dec_obj185;
struct tuple3$3sTypephcharphbool* __result307__;
    __dec_obj184=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj185=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_452;
int head_sline_453;
void* __right_value497 = (void*)0;
char* type_name_454;
void* __right_value498 = (void*)0;
char* __dec_obj186;
_Bool record__455;
_Bool exception__456;
_Bool constant_457;
_Bool static__458;
_Bool volatile__459;
_Bool register__460;
_Bool unsigned__461;
_Bool long__462;
_Bool long_long_463;
_Bool short__464;
_Bool restrict__465;
_Bool struct__466;
_Bool union__467;
_Bool enum__468;
_Bool no_heap_469;
_Bool extern__470;
_Bool inline__471;
_Bool come_mem_core__472;
_Bool uniq__473;
_Bool tuple__474;
struct sNode* alignas__475;
_Bool anonymous_type_476;
_Bool anonymous_name_477;
char* p_478;
int sline_479;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* __dec_obj187;
void* __right_value501 = (void*)0;
char* __dec_obj188;
void* __right_value502 = (void*)0;
char* __dec_obj189;
char* p_480;
int sline_481;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct tuple3$3sTypephcharphbool* __result309__;
char* p_482;
int sline_483;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple3$3sTypephcharphbool* __result310__;
void* __right_value509 = (void*)0;
struct sNode* node_484;
_Bool Value_485;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple3$3sTypephcharphbool* __result311__;
char* p_486;
int sline_487;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* __dec_obj190;
void* __right_value515 = (void*)0;
char* __dec_obj191;
void* __right_value516 = (void*)0;
char* __dec_obj192;
char* p_488;
int sline_489;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct tuple3$3sTypephcharphbool* __result312__;
void* __right_value520 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_490=0;
char* name_491=0;
_Bool err_492=0;
char* p_493;
int sline_494;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct tuple3$3sTypephcharphbool* __result313__;
void* __right_value525 = (void*)0;
char* __dec_obj193;
void* __right_value526 = (void*)0;
char* __dec_obj194;
void* __right_value527 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_495=0;
char* name_496=0;
_Bool err_497=0;
char* p_498;
int sline_499;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct tuple3$3sTypephcharphbool* __result314__;
void* __right_value531 = (void*)0;
struct sNode* exp_500;
struct sNode* __dec_obj195;
void* __right_value532 = (void*)0;
char* __dec_obj196;
void* __right_value533 = (void*)0;
char* __dec_obj197;
void* __right_value534 = (void*)0;
char* __dec_obj198;
void* __right_value535 = (void*)0;
char* __dec_obj199;
void* __right_value536 = (void*)0;
char* __dec_obj200;
void* __right_value537 = (void*)0;
char* __dec_obj201;
void* __right_value538 = (void*)0;
char* __dec_obj202;
void* __right_value539 = (void*)0;
char* __dec_obj203;
void* __right_value540 = (void*)0;
char* __dec_obj204;
void* __right_value541 = (void*)0;
char* __dec_obj205;
void* __right_value542 = (void*)0;
char* __dec_obj206;
void* __right_value543 = (void*)0;
char* __dec_obj207;
char* p_501;
int sline_502;
void* __right_value544 = (void*)0;
char* __dec_obj208;
void* __right_value545 = (void*)0;
char* __dec_obj209;
void* __right_value546 = (void*)0;
char* __dec_obj210;
void* __right_value547 = (void*)0;
char* __dec_obj211;
void* __right_value548 = (void*)0;
char* __dec_obj212;
void* __right_value549 = (void*)0;
char* __dec_obj213;
void* __right_value550 = (void*)0;
char* __dec_obj214;
char* p_503;
int sline_504;
void* __right_value551 = (void*)0;
char* __dec_obj215;
char* p_505;
int sline_506;
void* __right_value552 = (void*)0;
char* __dec_obj216;
void* __right_value553 = (void*)0;
char* __dec_obj217;
void* __right_value554 = (void*)0;
char* __dec_obj218;
char* p_507;
int sline_508;
void* __right_value555 = (void*)0;
char* __dec_obj219;
void* __right_value556 = (void*)0;
char* __dec_obj220;
void* __right_value557 = (void*)0;
char* __dec_obj221;
void* __right_value558 = (void*)0;
char* __dec_obj222;
void* __right_value559 = (void*)0;
char* __dec_obj223;
void* __right_value560 = (void*)0;
char* __dec_obj224;
void* __right_value561 = (void*)0;
char* __dec_obj225;
void* __right_value562 = (void*)0;
char* __dec_obj226;
void* __right_value563 = (void*)0;
char* __dec_obj227;
void* __right_value564 = (void*)0;
char* __dec_obj228;
void* __right_value565 = (void*)0;
char* __dec_obj229;
char* p_509;
int sline_510;
void* __right_value566 = (void*)0;
char* __dec_obj230;
void* __right_value567 = (void*)0;
char* __dec_obj231;
int pointer_num_511;
_Bool heap_512;
_Bool channel_513;
char* tuple_name_514;
void* __right_value568 = (void*)0;
char* __dec_obj232;
_Bool lambda_flag_515;
char* pX_516;
int slineX_517;
void* __right_value569 = (void*)0;
struct sType* type_518;
char* var_name_519;
_Bool function_pointer_flag_520;
char* p_521;
int sline_522;
void* __right_value570 = (void*)0;
char* word_523;
_Bool var_name_between_brace_524;
char* p_525;
int sline_526;
void* __right_value571 = (void*)0;
char* word_527;
void* __right_value572 = (void*)0;
char* __dec_obj233;
void* __right_value573 = (void*)0;
struct sNode* node_529;
_Bool Value_530;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct tuple3$3sTypephcharphbool* __result315__;
int pointer_num_531;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj234;
void* __right_value578 = (void*)0;
char* __dec_obj235;
void* __right_value579 = (void*)0;
struct sNode* node_532;
_Bool Value_533;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct tuple3$3sTypephcharphbool* __result316__;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj236;
void* __right_value584 = (void*)0;
char* __dec_obj237;
void* __right_value585 = (void*)0;
struct sNode* node_534;
_Bool Value_535;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple3$3sTypephcharphbool* __result317__;
int pointer_num_536;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj238;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct tuple3$3sTypephcharphbool* __result318__;
void* __right_value592 = (void*)0;
char* __dec_obj239;
void* __right_value593 = (void*)0;
char* __dec_obj240;
void* __right_value594 = (void*)0;
char* __dec_obj241;
void* __right_value595 = (void*)0;
char* __dec_obj242;
_Bool no_comma_539;
void* __right_value596 = (void*)0;
struct sNode* node_540;
struct sNode* __dec_obj243;
struct sType* result_type_541;
void* __right_value597 = (void*)0;
struct sType* __dec_obj244;
int i_542;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj245;
int i_546;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __dec_obj246;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sType* __dec_obj247;
struct sNode* __dec_obj248;
void* __right_value606 = (void*)0;
char* __dec_obj249;
void* __right_value607 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_547=0;
struct list$1charph* param_names_548=0;
struct list$1charph* param_default_parametors_549=0;
_Bool var_args_550=0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sType* __dec_obj250;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct tuple1$1sTypeph* __dec_obj252;
struct list$1sTypeph* __dec_obj253;
struct list$1charph* __dec_obj254;
int function_pointer_num_551;
struct sType* result_type_552;
void* __right_value612 = (void*)0;
struct sType* __dec_obj255;
int i_553;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj256;
int i_554;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* __dec_obj257;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* __dec_obj258;
struct sNode* __dec_obj259;
void* __right_value621 = (void*)0;
char* __dec_obj260;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct tuple3$3sTypephcharphbool* __result322__;
void* __right_value624 = (void*)0;
char* __dec_obj261;
_Bool function_pointer_array_556;
int function_pointer_array_num_557;
int n_558;
void* __right_value625 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_559=0;
struct list$1charph* param_names_560=0;
struct list$1charph* param_default_parametors_561=0;
_Bool var_args_562=0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj262;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct tuple1$1sTypeph* __dec_obj263;
struct list$1sTypeph* __dec_obj264;
struct list$1charph* __dec_obj265;
void* __right_value631 = (void*)0;
struct sNode* exp_563;
_Bool Value_564;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct tuple3$3sTypephcharphbool* __result324__;
void* __right_value634 = (void*)0;
struct CVALUE* come_value_565;
void* __right_value635 = (void*)0;
struct sType* __dec_obj268;
void* __right_value636 = (void*)0;
char* __dec_obj269;
void* __right_value637 = (void*)0;
char* __dec_obj270;
void* __right_value638 = (void*)0;
char* __dec_obj271;
void* __right_value639 = (void*)0;
char* __dec_obj272;
_Bool no_comma_568;
void* __right_value640 = (void*)0;
struct sNode* node_569;
struct sNode* __dec_obj273;
void* __right_value641 = (void*)0;
struct sType* __dec_obj277;
void* __right_value642 = (void*)0;
char* __dec_obj278;
struct sNode* __dec_obj279;
char* __dec_obj280;
int i_570;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sType* __dec_obj281;
struct sNode* __dec_obj282;
char* __dec_obj283;
int i_571;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sType* __dec_obj284;
struct sNode* __dec_obj285;
char* __dec_obj286;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct tuple3$3sTypephcharphbool* __result325__;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sType* __dec_obj287;
void* __right_value653 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_572=0;
char* var_name_573=0;
_Bool err_574=0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct tuple3$3sTypephcharphbool* __result326__;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct tuple3$3sTypephcharphbool* __result327__;
void* __right_value658 = (void*)0;
struct sType* __dec_obj288;
void* __right_value659 = (void*)0;
char* new_name_575;
struct sNode* __dec_obj289;
char* __dec_obj290;
struct sClass* klass_576;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sClass* klass_618;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __dec_obj291;
struct sNode* __dec_obj292;
char* __dec_obj293;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1sTypeph* types_619;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_620=0;
char* name_621=0;
_Bool err_622=0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct tuple3$3sTypephcharphbool* __result349__;
void* __right_value675 = (void*)0;
int num_tuples_623;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* __dec_obj294;
struct list$1sTypeph* o2_saved_624;
struct sType* it_625;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* __dec_obj295;
void* __right_value681 = (void*)0;
char* new_name_626;
void* __right_value682 = (void*)0;
char* __dec_obj296;
void* __right_value683 = (void*)0;
char* __dec_obj297;
void* __right_value684 = (void*)0;
char* __dec_obj298;
void* __right_value685 = (void*)0;
char* __dec_obj299;
_Bool no_comma_629;
void* __right_value686 = (void*)0;
struct sNode* node_630;
struct sNode* __dec_obj300;
void* __right_value687 = (void*)0;
struct sNode* node_631;
void* __right_value688 = (void*)0;
char* asm_name_632;
char* __dec_obj301;
void* __right_value689 = (void*)0;
struct sType* type_before_633;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sType* __dec_obj302;
void* __right_value692 = (void*)0;
struct sNode* __list_values1___634[1];
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1sNodeph* __dec_obj303;
void* __right_value695 = (void*)0;
struct tuple1$1sTypeph* __dec_obj304;
struct sType* __dec_obj305;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* type2_636;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sType* type3_642;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sType* type4_643;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct tuple3$3sTypephcharphbool* __result354__;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct tuple3$3sTypephcharphbool* __result355__;
type_518 = (void*)0;
var_name_519 = (void*)0;
result_type_541 = (void*)0;
result_type_552 = (void*)0;
    head_452=info->p;
    head_sline_453=info->sline;
    info->define_struct=(_Bool)0;
    type_name_454=(char*)come_increment_ref_count(parse_word(info));
    while(string_operator_equals(type_name_454,"__extension__")) {
        __dec_obj186=type_name_454;
        type_name_454=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    record__455=(_Bool)0;
    exception__456=(_Bool)0;
    constant_457=(_Bool)0;
    static__458=(_Bool)0;
    volatile__459=(_Bool)0;
    register__460=(_Bool)0;
    unsigned__461=(_Bool)0;
    long__462=(_Bool)0;
    long_long_463=(_Bool)0;
    short__464=(_Bool)0;
    restrict__465=(_Bool)0;
    struct__466=(_Bool)0;
    union__467=(_Bool)0;
    enum__468=(_Bool)0;
    no_heap_469=(_Bool)0;
    extern__470=(_Bool)0;
    inline__471=(_Bool)0;
    come_mem_core__472=(_Bool)0;
    uniq__473=(_Bool)0;
    tuple__474=(_Bool)0;
    alignas__475=((void*)0);
    anonymous_type_476=(_Bool)0;
    anonymous_name_477=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_454,"struct")) {
            struct__466=(_Bool)1;
            if(            *info->p==123) {
                p_478=info->p;
                sline_479=info->sline;
                ((char*)(__right_value499=skip_block(info)));
                /* U11 */__right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_477=(_Bool)1;
                    anonymous_type_476=(_Bool)1;
                    __dec_obj187=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_478;
                    info->sline=sline_479;
                    break;
                }
                else {
                    anonymous_type_476=(_Bool)1;
                    __dec_obj188=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_478;
                    info->sline=sline_479;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                __dec_obj189=type_name_454;
                type_name_454=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_480=info->p;
                    sline_481=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_480;
                                info->sline=sline_481;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value504=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1561, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value504,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result309__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_482=info->p;
                    sline_483=info->sline;
                    ((char*)(__right_value505=skip_block(info)));
                    /* U11 */__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value506=parse_attribute(info,(_Bool)0)));
                        /* U11 */__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==59) {
                        info->p=head_452;
                        info->sline=head_sline_453;
                        info->define_struct=(_Bool)1;
                        __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value508=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1583, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value508,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result310__;
                    }
                    else {
                        info->p=p_482;
                        info->sline=sline_483;
                        node_484=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_454),info));
                        Value_485=node_compile(node_484,info);
                        if(                        !Value_485) {
                            __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value511=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1595, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value511,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result311__;
                        }
                        else {
                        }
                        if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_454,"union")) {
            union__467=(_Bool)1;
            if(            *info->p==123) {
                p_486=info->p;
                sline_487=info->sline;
                ((char*)(__right_value512=skip_block(info)));
                /* U11 */__right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((char*)(__right_value513=parse_attribute(info,(_Bool)0)));
                    /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_452;
                    info->sline=head_sline_453;
                    info->define_struct=(_Bool)0;
                    anonymous_type_476=(_Bool)1;
                    __dec_obj190=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_486;
                    info->sline=sline_487;
                    break;
                }
                else {
                    anonymous_type_476=(_Bool)1;
                    __dec_obj191=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_486;
                    info->sline=sline_487;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj192=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_488=info->p;
                sline_489=info->sline;
                ((char*)(__right_value517=skip_block(info)));
                /* U11 */__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_452;
                    info->sline=head_sline_453;
                    info->define_struct=(_Bool)1;
                    __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value519=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1652, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value519,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result312__;
                }
                else {
                    anonymous_type_476=(_Bool)1;
                    info->p=p_488;
                    info->sline=sline_489;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_454,"enum")) {
            enum__468=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value520=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_490=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_491=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_492=multiple_assign_var3->v3;
                /*g*/come_call_finalizer3(__right_value520,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                /*i*/come_call_finalizer3(type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_491 = come_decrement_ref_count2(name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_493=info->p;
                sline_494=info->sline;
                ((char*)(__right_value521=skip_block(info)));
                /* U11 */__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((char*)(__right_value522=parse_attribute(info,(_Bool)0)));
                    /* U11 */__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_452;
                    info->sline=head_sline_453;
                    info->define_struct=(_Bool)1;
                    __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value524=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1690, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value524,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result313__;
                }
                else {
                    anonymous_type_476=(_Bool)1;
                    __dec_obj193=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_493;
                    info->sline=sline_494;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj194=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value527=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_495=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_496=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_497=multiple_assign_var4->v3;
                /*g*/come_call_finalizer3(__right_value527,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                /*i*/come_call_finalizer3(type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_496 = come_decrement_ref_count2(name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_498=info->p;
                sline_499=info->sline;
                ((char*)(__right_value528=skip_block(info)));
                /* U11 */__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_452;
                    info->sline=head_sline_453;
                    info->define_struct=(_Bool)1;
                    __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value530=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1726, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value530,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result314__;
                }
                else {
                    anonymous_type_476=(_Bool)1;
                    info->p=p_498;
                    info->sline=sline_499;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_454,"_Alignas")) {
            expected_next_character(40,info);
            exp_500=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj195=alignas__475;
            alignas__475=(struct sNode*)come_increment_ref_count(exp_500);
            /* U1 */ if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj196=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_500) { exp_500 = come_decrement_ref_count2(exp_500, ((struct sNode*)exp_500)->finalize, ((struct sNode*)exp_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_454,"const")) {
            constant_457=(_Bool)1;
            __dec_obj197=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"static")) {
            static__458=(_Bool)1;
            __dec_obj198=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"uniq")) {
            uniq__473=(_Bool)1;
            __dec_obj199=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"_Nullable")) {
            __dec_obj200=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"record")) {
            record__455=(_Bool)1;
            __dec_obj201=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"exception")) {
            exception__456=(_Bool)1;
            __dec_obj202=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"come_mem_core")) {
            come_mem_core__472=(_Bool)1;
            __dec_obj203=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"extern")) {
            extern__470=(_Bool)1;
            __dec_obj204=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"_Noreturn")) {
            __dec_obj205=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"inline")||string_operator_equals(type_name_454,"__inline")||string_operator_equals(type_name_454,"__inline__")||string_operator_equals(type_name_454,"__always_inline")) {
            inline__471=(_Bool)1;
            __dec_obj206=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"volatile")) {
            volatile__459=(_Bool)1;
            __dec_obj207=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"long")) {
            {
                p_501=info->p;
                sline_502=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_501;
                    info->sline=sline_502;
                    __dec_obj208=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string("long"));
                    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj209=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_454,"unsigned")) {
                        __dec_obj210=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_454,"int")) {
                            long__462=(_Bool)1;
                            unsigned__461=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_454,"signed")) {
                        __dec_obj211=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_454,"int")) {
                            long__462=(_Bool)1;
                            unsigned__461=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_454,"long")) {
                        p_501=info->p;
                        sline_502=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_463=(_Bool)1;
                            __dec_obj212=type_name_454;
                            type_name_454=(char*)come_increment_ref_count(parse_word(info));
                            /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__462=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_454,"int")) {
                            long_long_463=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_454,info)) {
                            __dec_obj213=type_name_454;
                            type_name_454=(char*)come_increment_ref_count(__builtin_string("long"));
                            /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_463=(_Bool)1;
                            info->p=p_501;
                            info->sline=sline_502;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_454,info)) {
                        if(                        long__462) {
                            long_long_463=(_Bool)1;
                            long__462=(_Bool)0;
                        }
                        else {
                            long__462=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_501;
                        info->sline=sline_502;
                        __dec_obj214=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(__builtin_string("long"));
                        /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_454,"unsigned")) {
            unsigned__461=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_503=info->p;
                sline_504=info->sline;
                __dec_obj215=type_name_454;
                type_name_454=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_454,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_505=info->p;
                        sline_506=info->sline;
                        __dec_obj216=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_454,info)) {
                            short__464=(_Bool)1;
                        }
                        else {
                            short__464=(_Bool)1;
                            __dec_obj217=type_name_454;
                            type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                            /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_505;
                            info->sline=sline_506;
                        }
                    }
                    else {
                        short__464=(_Bool)1;
                        __dec_obj218=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                        /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_454,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_507=info->p;
                        sline_508=info->sline;
                        __dec_obj219=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_454,info)) {
                            long__462=(_Bool)1;
                        }
                        else {
                            long__462=(_Bool)1;
                            __dec_obj220=type_name_454;
                            type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                            /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_507;
                            info->sline=sline_508;
                        }
                    }
                    else {
                        long__462=(_Bool)1;
                        __dec_obj221=type_name_454;
                        type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                        /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_454,info)) {
                    __dec_obj222=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_503;
                    info->sline=sline_504;
                    break;
                }
            }
            else {
                __dec_obj223=type_name_454;
                type_name_454=(char*)come_increment_ref_count(__builtin_string("int"));
                /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_454,"signed")||string_operator_equals(type_name_454,"__signed__")) {
            unsigned__461=(_Bool)0;
            __dec_obj224=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"register")) {
            register__460=(_Bool)1;
            __dec_obj225=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"restrict")) {
            restrict__465=(_Bool)1;
            __dec_obj226=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"_Addr")) {
            __dec_obj227=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"__restrict")) {
            restrict__465=(_Bool)1;
            __dec_obj228=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_454,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj229=type_name_454;
            type_name_454=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__474=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_454,"short")) {
            short__464=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_509=info->p;
                sline_510=info->sline;
                __dec_obj230=type_name_454;
                type_name_454=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_454,"int")) {
                    short__464=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_454,"short")) {
                    short__464=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_454,info)) {
                    info->p=p_509;
                    info->sline=sline_510;
                }
                else {
                    __dec_obj231=type_name_454;
                    type_name_454=(char*)come_increment_ref_count(__builtin_string("short"));
                    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_509;
                    info->sline=sline_510;
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
    skip_pointer_attribute(info);
    pointer_num_511=0;
    heap_512=(_Bool)0;
    channel_513=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_511++;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_512=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_513=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_514=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__474) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj232=tuple_name_514;
        tuple_name_514=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    lambda_flag_515=(_Bool)0;
    {
        pX_516=info->p;
        slineX_517=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value569=parse_word(info)));
            /* U11 */__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_515=(_Bool)1;
            }
        }
        info->p=pX_516;
        info->sline=slineX_517;
    }
    function_pointer_flag_520=(_Bool)0;
    {
        p_521=info->p;
        sline_522=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_520=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_523=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_520=(_Bool)1;
                    }
                }
                /* U13 */word_523 = come_decrement_ref_count2(word_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_521;
        info->sline=sline_522;
    }
    var_name_between_brace_524=(_Bool)0;
    {
        p_525=info->p;
        sline_526=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_527=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_527,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_524=(_Bool)1;
                    }
                }
                /* U13 */word_527 = come_decrement_ref_count2(word_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_525;
        info->sline=sline_526;
    }
    if(    anonymous_type_476&&*info->p==123) {
        static int anonymous_num_528=0;
        if(        struct__466) {
            if(            string_operator_equals(type_name_454,"")) {
                __dec_obj233=type_name_454;
                type_name_454=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_528));
                /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_529=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_454),info));
            Value_530=node_compile(node_529,info);
            if(            !Value_530) {
                err_msg(info,"parse_struct is failed");
                __result315__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value575=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2156, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value575,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result315__;
            }
            else {
            }
            pointer_num_531=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_531++;
            }
            __dec_obj234=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2166, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_518->mPointerNum=pointer_num_531;
            if(node_529) { node_529 = come_decrement_ref_count2(node_529, ((struct sNode*)node_529)->finalize, ((struct sNode*)node_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__468) {
            if(            string_operator_equals(type_name_454,"")) {
                __dec_obj235=type_name_454;
                type_name_454=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_528));
                /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_532=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_454),info));
            if(            !info->no_output_err) {
                Value_533=node_compile(node_532,info);
                if(                !Value_533) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result316__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value581=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2180, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value581,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result316__;
                }
                else {
                }
            }
            __dec_obj236=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2184, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__467) {
            if(            string_operator_equals(type_name_454,"")) {
                __dec_obj237=type_name_454;
                type_name_454=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_528));
                /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_534=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_454),info));
            Value_535=node_compile(node_534,info);
            if(            !Value_535) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result317__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value587=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2196, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value587,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
            else {
            }
            pointer_num_536=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_536++;
            }
            __dec_obj238=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2207, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_518->mPointerNum=pointer_num_536;
            if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value591=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2213, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value591,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_524&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj239=var_name_519;
                var_name_519=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_477) {
                static int num_anonymous_var_name_537=0;
                num_anonymous_var_name_537++;
                __dec_obj240=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_537));
                /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj241=var_name_519;
                var_name_519=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_538=0;
                num_anonymous_var_name_538++;
                __dec_obj242=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_538));
                /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_524&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_539=info->no_comma;
                info->no_comma=(_Bool)1;
                node_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_539;
                __dec_obj243=type_518->mSizeNum;
                type_518->mSizeNum=(struct sNode*)come_increment_ref_count(node_540);
                /* U1 */ if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else if(    lambda_flag_515) {
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_454)) {
            __dec_obj244=result_type_541;
            result_type_541=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_454)));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_541->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_541->mClass->mName), "05type.c", 2262, 5));
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_454)) {
            for(            i_542=0;            i_542<list$1charph_length(info->generics_type_names);            i_542++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_542), "05type.c", 2266, 6)),type_name_454)) {
                    __dec_obj245=result_type_541;
                    result_type_541=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2267, "sType")),((char*)(__right_value599=xsprintf("generics_type%d",i_542))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_454)) {
            for(            i_546=0;            i_546<list$1charph_length(info->method_generics_type_names);            i_546++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_546), "05type.c", 2273, 7)),type_name_454)) {
                    __dec_obj246=result_type_541;
                    result_type_541=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2274, "sType")),((char*)(__right_value602=xsprintf("mgenerics_type%d",i_546))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj247=result_type_541;
            result_type_541=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2279, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_541->mConstant=result_type_541->mConstant||constant_457;
        __dec_obj248=result_type_541->mAlignas;
        result_type_541->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
        /* U1 */ if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_541->mRegister=register__460;
        result_type_541->mUnsigned=result_type_541->mUnsigned||unsigned__461;
        result_type_541->mVolatile=volatile__459;
        result_type_541->mRecord=result_type_541->mRecord||record__455;
        result_type_541->mUniq=result_type_541->mUniq||uniq__473;
        result_type_541->mStatic=(result_type_541->mStatic||static__458)&&!result_type_541->mUniq;
        result_type_541->mException=result_type_541->mException||exception__456;
        result_type_541->mExtern=result_type_541->mExtern||extern__470;
        result_type_541->mInline=result_type_541->mInline||inline__471;
        result_type_541->mRestrict=result_type_541->mRestrict||restrict__465;
        result_type_541->mLongLong=result_type_541->mLongLong||long_long_463;
        result_type_541->mLong=result_type_541->mLong||long__462;
        result_type_541->mShort=result_type_541->mShort||short__464;
        result_type_541->mPointerNum=pointer_num_511;
        result_type_541->mHeap=result_type_541->mHeap||heap_512;
        result_type_541->mChannel=result_type_541->mChannel||channel_513;
        __dec_obj249=var_name_519;
        var_name_519=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value607=parse_params(info,(_Bool)0)));
        param_types_547=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_548=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_549=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_550=multiple_assign_var5->v4;
        /*g*/come_call_finalizer3(__right_value607,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj250=type_518;
        type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2305, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj252=type_518->mResultType;
        type_518->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2307, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_541)));
        come_call_finalizer3(__dec_obj252,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj253=type_518->mParamTypes;
        type_518->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_547);
        come_call_finalizer3(__dec_obj253,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj254=type_518->mParamNames;
        type_518->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_548);
        come_call_finalizer3(__dec_obj254,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_518->mVarArgs=var_args_550;
        type_518->mExtern=extern__470;
        /*i*/come_call_finalizer3(result_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_547,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_520) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_551=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            function_pointer_num_551++;
        }
        skip_pointer_attribute(info);
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_454)) {
            __dec_obj255=result_type_552;
            result_type_552=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_454)));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_552->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_552->mClass->mName), "05type.c", 2331, 8));
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_454)) {
            for(            i_553=0;            i_553<list$1charph_length(info->generics_type_names);            i_553++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_553), "05type.c", 2336, 9)),type_name_454)) {
                    __dec_obj256=result_type_552;
                    result_type_552=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2337, "sType")),((char*)(__right_value614=xsprintf("generics_type%d",i_553))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_454)) {
            for(            i_554=0;            i_554<list$1charph_length(info->method_generics_type_names);            i_554++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_554), "05type.c", 2343, 10)),type_name_454)) {
                    __dec_obj257=result_type_552;
                    result_type_552=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2344, "sType")),((char*)(__right_value617=xsprintf("mgenerics_type%d",i_554))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj258=result_type_552;
            result_type_552=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2349, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_552->mConstant=result_type_552->mConstant||constant_457;
        __dec_obj259=result_type_552->mAlignas;
        result_type_552->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
        /* U1 */ if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_552->mRegister=register__460;
        result_type_552->mUnsigned=result_type_552->mUnsigned||unsigned__461;
        result_type_552->mVolatile=volatile__459;
        result_type_552->mUniq=result_type_552->mUniq||uniq__473;
        result_type_552->mStatic=(result_type_552->mStatic||static__458)&&!result_type_552->mUniq;
        result_type_552->mRecord=result_type_552->mRecord||record__455;
        result_type_552->mException=result_type_552->mException||exception__456;
        result_type_552->mExtern=result_type_552->mExtern||extern__470;
        result_type_552->mInline=result_type_552->mInline||inline__471;
        result_type_552->mRestrict=result_type_552->mRestrict||restrict__465;
        result_type_552->mLongLong=result_type_552->mLongLong||long_long_463;
        result_type_552->mLong=result_type_552->mLong||long__462;
        result_type_552->mShort=result_type_552->mShort||short__464;
        result_type_552->mPointerNum+=pointer_num_511;
        result_type_552->mHeap=result_type_552->mHeap||heap_512;
        result_type_552->mChannel=result_type_552->mChannel||channel_513;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj260=var_name_519;
            var_name_519=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result322__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value623=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2374, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_552),(char*)come_increment_ref_count(var_name_519),(_Bool)0)));
                /*i*/come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value623,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result322__;
            }
        }
        else {
            static int num_anonymous_var_name_555=0;
            num_anonymous_var_name_555++;
            __dec_obj261=var_name_519;
            var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_555));
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_556=(_Bool)0;
        function_pointer_array_num_557=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_558=0;
            while(xisdigit(*info->p)) {
                n_558=n_558*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_557=n_558;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_556=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value625=parse_params(info,(_Bool)0)));
        param_types_559=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_560=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_561=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_562=multiple_assign_var6->v4;
        /*g*/come_call_finalizer3(__right_value625,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj262=type_518;
        type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2406, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj263=type_518->mResultType;
        type_518->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2408, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_552))));
        come_call_finalizer3(__dec_obj263,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj264=type_518->mParamTypes;
        type_518->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_559);
        come_call_finalizer3(__dec_obj264,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj265=type_518->mParamNames;
        type_518->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_560);
        come_call_finalizer3(__dec_obj265,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_518->mVarArgs=var_args_562;
        type_518->mExtern=extern__470;
        if(        function_pointer_array_556) {
            type_518->mLambdaArray=(_Bool)1;
            type_518->mLambdaArrayNum=function_pointer_array_num_557;
        }
        type_518->mFunctionPointerNum=function_pointer_num_551;
        /*i*/come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_559,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_560,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_561,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_454,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_563=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_564=node_compile(exp_563,info);
        if(        !Value_564) {
            err_msg(info,"invalid __typeof__ expression");
            __result324__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value633=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 2430, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_563) { exp_563 = come_decrement_ref_count2(exp_563, ((struct sNode*)exp_563)->finalize, ((struct sNode*)exp_563)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value633,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result324__;
        }
        else {
        }
        come_value_565=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj268=type_518;
        type_518=(struct sType*)come_increment_ref_count(sType_clone(come_value_565->type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_524&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj269=var_name_519;
                var_name_519=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_477) {
                static int num_anonymous_var_name_566=0;
                num_anonymous_var_name_566++;
                __dec_obj270=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_566));
                /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj271=var_name_519;
                var_name_519=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_567=0;
                num_anonymous_var_name_567++;
                __dec_obj272=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_567));
                /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_524&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_568=info->no_comma;
                info->no_comma=(_Bool)1;
                node_569=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_568;
                __dec_obj273=type_518->mSizeNum;
                type_518->mSizeNum=(struct sNode*)come_increment_ref_count(node_569);
                /* U1 */ if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        if(exp_563) { exp_563 = come_decrement_ref_count2(exp_563, ((struct sNode*)exp_563)->finalize, ((struct sNode*)exp_563)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_454)) {
            __dec_obj277=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_454)));
            come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_518->mTypedefOriginalPointerNum=type_518->mPointerNum;
            type_518->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_518->mClass->mName), "05type.c", 2485, 11));
            __dec_obj278=type_518->mOriginalTypeName;
            type_518->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_454));
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_518->mOriginalTypeNamePointerNum=pointer_num_511;
            type_518->mOriginalTypeNameHeap=heap_512;
            type_518->mConstant=type_518->mConstant||constant_457;
            __dec_obj279=type_518->mAlignas;
            type_518->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
            /* U1 */ if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
            type_518->mRegister=register__460;
            type_518->mUnsigned=type_518->mUnsigned||unsigned__461;
            type_518->mVolatile=volatile__459;
            type_518->mUniq=type_518->mUniq||uniq__473;
            type_518->mStatic=(type_518->mStatic||static__458)&&!type_518->mUniq;
            type_518->mRecord=type_518->mRecord||record__455;
            type_518->mException=type_518->mException||exception__456;
            type_518->mExtern=type_518->mExtern||extern__470;
            type_518->mInline=type_518->mInline||inline__471;
            type_518->mRestrict=type_518->mRestrict||restrict__465;
            type_518->mLongLong=type_518->mLongLong||long_long_463;
            type_518->mLong=type_518->mLong||long__462;
            type_518->mShort=type_518->mShort||short__464;
            type_518->mPointerNum+=pointer_num_511;
            type_518->mHeap=type_518->mHeap||heap_512;
            type_518->mChannel=type_518->mChannel||channel_513;
            __dec_obj280=type_518->mTupleName;
            type_518->mTupleName=(char*)come_increment_ref_count(tuple_name_514);
            /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_454)) {
            for(            i_570=0;            i_570<list$1charph_length(info->generics_type_names);            i_570++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_570), "05type.c", 2512, 12)),type_name_454)) {
                    __dec_obj281=type_518;
                    type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2513, "sType")),((char*)(__right_value644=xsprintf("generics_type%d",i_570))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_518->mConstant=type_518->mConstant||constant_457;
            __dec_obj282=type_518->mAlignas;
            type_518->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
            /* U1 */ if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
            type_518->mRegister=register__460;
            type_518->mUnsigned=type_518->mUnsigned||unsigned__461;
            type_518->mVolatile=volatile__459;
            type_518->mUniq=type_518->mUniq||uniq__473;
            type_518->mStatic=(type_518->mStatic||static__458)&&!type_518->mUniq;
            type_518->mRecord=type_518->mRecord||record__455;
            type_518->mException=type_518->mException||exception__456;
            type_518->mExtern=type_518->mExtern||extern__470;
            type_518->mInline=type_518->mInline||inline__471;
            type_518->mRestrict=type_518->mRestrict||restrict__465;
            type_518->mLongLong=type_518->mLongLong||long_long_463;
            type_518->mLong=type_518->mLong||long__462;
            type_518->mShort=type_518->mShort||short__464;
            type_518->mPointerNum+=pointer_num_511;
            type_518->mHeap=type_518->mHeap||heap_512;
            type_518->mChannel=type_518->mChannel||channel_513;
            __dec_obj283=type_518->mTupleName;
            type_518->mTupleName=(char*)come_increment_ref_count(tuple_name_514);
            /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_454)) {
            for(            i_571=0;            i_571<list$1charph_length(info->method_generics_type_names);            i_571++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_571), "05type.c", 2539, 13)),type_name_454)) {
                    __dec_obj284=type_518;
                    type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2540, "sType")),((char*)(__right_value647=xsprintf("mgenerics_type%d",i_571))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_518->mConstant=type_518->mConstant||constant_457;
            __dec_obj285=type_518->mAlignas;
            type_518->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
            /* U1 */ if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
            type_518->mRegister=register__460;
            type_518->mUnsigned=type_518->mUnsigned||unsigned__461;
            type_518->mVolatile=volatile__459;
            type_518->mUniq=type_518->mUniq||uniq__473;
            type_518->mStatic=(type_518->mStatic||static__458)&&!type_518->mUniq;
            type_518->mRecord=type_518->mRecord||record__455;
            type_518->mException=type_518->mException||exception__456;
            type_518->mExtern=type_518->mExtern||extern__470;
            type_518->mInline=type_518->mInline||inline__471;
            type_518->mRestrict=type_518->mRestrict||restrict__465;
            type_518->mLongLong=type_518->mLongLong||long_long_463;
            type_518->mLong=type_518->mLong||long__462;
            type_518->mShort=type_518->mShort||short__464;
            type_518->mPointerNum+=pointer_num_511;
            type_518->mHeap=type_518->mHeap||heap_512;
            type_518->mChannel=type_518->mChannel||channel_513;
            __dec_obj286=type_518->mTupleName;
            type_518->mTupleName=(char*)come_increment_ref_count(tuple_name_514);
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_454)==((void*)0)) {
                __result325__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value650=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2570, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value650,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
            __dec_obj287=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2573, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value653=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_572=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_573=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_574=multiple_assign_var7->v3;
                /*g*/come_call_finalizer3(__right_value653,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_574) {
                    __result326__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value655=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2579, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(generics_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_573 = come_decrement_ref_count2(var_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value655,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result326__;
                }
                list$1sTypeph_push_back(type_518->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_572));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*i*/come_call_finalizer3(generics_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_573 = come_decrement_ref_count2(var_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type\n");
                    __result327__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value657=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2596, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(generics_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_573 = come_decrement_ref_count2(var_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value657,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result327__;
                }
                /*i*/come_call_finalizer3(generics_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_573 = come_decrement_ref_count2(var_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_518,info)) {
                __dec_obj288=type_518;
                type_518=(struct sType*)come_increment_ref_count(solve_generics(type_518,info->generics_type,info));
                come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_518,type_518,info)) {
                    new_name_575=(char*)come_increment_ref_count(create_generics_name(type_518,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_575);
                    exit(7);
                    /* U13 */new_name_575 = come_decrement_ref_count2(new_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_518->mConstant=type_518->mConstant||constant_457;
            __dec_obj289=type_518->mAlignas;
            type_518->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
            /* U1 */ if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
            type_518->mRegister=register__460;
            type_518->mUnsigned=type_518->mUnsigned||unsigned__461;
            type_518->mVolatile=volatile__459;
            type_518->mUniq=type_518->mUniq||uniq__473;
            type_518->mStatic=(type_518->mStatic||static__458)&&!type_518->mUniq;
            type_518->mRecord=type_518->mRecord||record__455;
            type_518->mException=type_518->mException||exception__456;
            type_518->mExtern=type_518->mExtern||extern__470;
            type_518->mInline=type_518->mInline||inline__471;
            type_518->mRestrict=type_518->mRestrict||restrict__465;
            type_518->mLongLong=type_518->mLongLong||long_long_463;
            type_518->mLong=type_518->mLong||long__462;
            type_518->mShort=type_518->mShort||short__464;
            type_518->mPointerNum+=pointer_num_511;
            type_518->mHeap=type_518->mHeap||heap_512;
            type_518->mChannel=type_518->mChannel||channel_513;
            __dec_obj290=type_518->mTupleName;
            type_518->mTupleName=(char*)come_increment_ref_count(tuple_name_514);
            /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__466) {
                klass_576=map$2charphsClassphp_operator_load_element(info->classes,type_name_454);
                if(                klass_576==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_454),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2637, "sClass")),type_name_454,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__467) {
                klass_618=map$2charphsClassphp_operator_load_element(info->classes,type_name_454);
                if(                klass_618==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_454),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2644, "sClass")),type_name_454,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj291=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2648, "sType")),type_name_454,(_Bool)0,info));
            come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_518->mConstant=type_518->mConstant||constant_457;
            __dec_obj292=type_518->mAlignas;
            type_518->mAlignas=(struct sNode*)come_increment_ref_count(alignas__475);
            /* U1 */ if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
            type_518->mRegister=register__460;
            type_518->mUnsigned=type_518->mUnsigned||unsigned__461;
            type_518->mVolatile=volatile__459;
            type_518->mUniq=type_518->mUniq||uniq__473;
            type_518->mStatic=(type_518->mStatic||static__458)&&!type_518->mUniq;
            type_518->mRecord=type_518->mRecord||record__455;
            type_518->mException=type_518->mException||exception__456;
            type_518->mExtern=type_518->mExtern||extern__470;
            type_518->mInline=type_518->mInline||inline__471;
            type_518->mRestrict=type_518->mRestrict||restrict__465;
            type_518->mLongLong=type_518->mLongLong||long_long_463;
            type_518->mLong=type_518->mLong||long__462;
            type_518->mShort=type_518->mShort||short__464;
            type_518->mPointerNum+=pointer_num_511;
            type_518->mHeap=type_518->mHeap||heap_512;
            type_518->mChannel=type_518->mChannel||channel_513;
            __dec_obj293=type_518->mTupleName;
            type_518->mTupleName=(char*)come_increment_ref_count(tuple_name_514);
            /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_518->mPointerNum++;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_518->mHeap=(_Bool)1;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_518->mNoHeap=(_Bool)1;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_518->mGuardValue=(_Bool)1;
                }
                else {
                    type_518->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_518->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_518->mPointerNum++;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_518->mHeap=(_Bool)1;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_518->mChannel=(_Bool)1;
                if(                type_518->mNoSolvedGenericsType->v1) {
                    type_518->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_619=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2767, "list$1sTypeph"))));
            list$1sTypeph_push_back(types_619,(struct sType*)come_increment_ref_count(sType_clone(type_518)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value672=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_620=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_621=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_622=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value672,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_622) {
                    __result349__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value674=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2778, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(type2_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value674,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result349__;
                }
                list$1sTypeph_push_back(types_619,(struct sType*)come_increment_ref_count(sType_clone(type2_620)));
                /*i*/come_call_finalizer3(type2_620,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_623=list$1sTypeph_length(types_619);
            __dec_obj294=type_518;
            type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2791, "sType")),((char*)(__right_value677=xsprintf("tuple%d",num_tuples_623))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_518->mPointerNum++;
            type_518->mHeap=(_Bool)1;
            for(            o2_saved_624=(struct list$1sTypeph*)come_increment_ref_count((types_619)),it_625=list$1sTypeph_begin((o2_saved_624));            !list$1sTypeph_end((o2_saved_624));            it_625=list$1sTypeph_next((o2_saved_624))            ){
                list$1sTypeph_push_back(type_518->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_625)));
            }
            /*i*/come_call_finalizer3(o2_saved_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            if(            is_contained_generics_class(type_518,info)) {
                __dec_obj295=type_518;
                type_518=(struct sType*)come_increment_ref_count(solve_generics(type_518,info->generics_type,info));
                come_call_finalizer3(__dec_obj295,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_518,type_518,info)) {
                    new_name_626=(char*)come_increment_ref_count(create_generics_name(type_518,info));
                    printf("output generics is failed(%s)\n",new_name_626);
                    exit(9);
                    /* U13 */new_name_626 = come_decrement_ref_count2(new_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_518->mMultipleTypes=(_Bool)1;
            /*i*/come_call_finalizer3(types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_524&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj296=var_name_519;
                var_name_519=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_477) {
                static int num_anonymous_var_name_627=0;
                num_anonymous_var_name_627++;
                __dec_obj297=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_627));
                /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj298=var_name_519;
                var_name_519=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_628=0;
                num_anonymous_var_name_628++;
                __dec_obj299=var_name_519;
                var_name_519=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_628));
                /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_524&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_629=info->no_comma;
                info->no_comma=(_Bool)1;
                node_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_629;
                __dec_obj300=type_518->mSizeNum;
                type_518->mSizeNum=(struct sNode*)come_increment_ref_count(node_630);
                /* U1 */ if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_518->mArrayPointerType=(_Bool)1;
            type_518->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_518->mArrayNum,(struct sNode*)come_increment_ref_count(node_631));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_631) { node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_632=(char*)come_increment_ref_count(parse_attribute(info,(_Bool)0));
    __dec_obj301=type_518->mAsmName;
    type_518->mAsmName=(char*)come_increment_ref_count(asm_name_632);
    /*G*/ __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_518->mChannel) {
        type_before_633=(struct sType*)come_increment_ref_count(sType_clone(type_518));
        __dec_obj302=type_518;
        type_518=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2889, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj302,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj303=type_518->mArrayNum;
        type_518->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___634[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value692=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2890, "struct list$1sNodeph")),1,__list_values1___634)));
        come_call_finalizer3(__dec_obj303,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value692) { __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj304=type_518->mChannelType;
        type_518->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2891, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj304,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj305=type_518->mChannelType->v1;
        type_518->mChannelType->v1=(struct sType*)come_increment_ref_count(type_before_633);
        come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_518->mChannel=(_Bool)1;
        /*i*/come_call_finalizer3(type_before_633,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_518->mException) {
        type2_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2896, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_636->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2897, "sType")),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_636->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2898, "sType")),"generics_type1",(_Bool)0,info)));
        type2_636->mPointerNum=1;
        type2_636->mHeap=(_Bool)1;
        type3_642=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2902, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_642->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_518));
        list$1sTypephp_operator_store_element(type3_642->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2904, "sType")),"char*",(_Bool)0,info)));
        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type3_642->mGenericsTypes,1), "05type.c", 2905, 14))->mHeap=(_Bool)1;
        type4_643=(struct sType*)come_increment_ref_count(solve_generics(type2_636,type3_642,info));
        type4_643->mException=(_Bool)1;
        __result354__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value708=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2911, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type4_643),(char*)come_increment_ref_count(var_name_519),(_Bool)1)));
        /*i*/come_call_finalizer3(type2_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */asm_name_632 = come_decrement_ref_count2(asm_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value708,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result354__;
        /*i*/come_call_finalizer3(type2_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_643,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value710=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2914, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_518),(char*)come_increment_ref_count(var_name_519),(_Bool)1)));
    /* U13 */type_name_454 = come_decrement_ref_count2(type_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__475) { alignas__475 = come_decrement_ref_count2(alignas__475, ((struct sNode*)alignas__475)->finalize, ((struct sNode*)alignas__475)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */tuple_name_514 = come_decrement_ref_count2(tuple_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_519 = come_decrement_ref_count2(var_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */asm_name_632 = come_decrement_ref_count2(asm_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value710,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_543;
int i_544;
char* __result319__;
char* default_value_545;
char* __result320__;
default_value_545 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_543=self->head;
    i_544=0;
    while(it_543!=((void*)0)) {
        if(        position==i_544) {
            __result319__ = gComeFunResultObject = __result_obj__ = it_543->item;
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
        it_543=it_543->next;
        i_544++;
    }
    memset(&default_value_545,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = default_value_545;
    /* U13 */default_value_545 = come_decrement_ref_count2(default_value_545, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj251;
struct tuple1$1sTypeph* __result321__;
    __dec_obj251=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj266;
struct tuple3$3sTypepcharphbool* __result323__;
    self->v1=v1;
    __dec_obj266=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj267;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj267=self->v2;
            /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj274;
struct sType* __dec_obj275;
char* __dec_obj276;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj274=self->c_value;
            /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj275=self->type;
            come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj276=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_594;
unsigned int it_595;
_Bool same_key_exist_612;
char* it2_615;
struct map$2charphsClassph* __result348__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_594=string_get_hash_key(key)%self->size;
    it_595=hash_594;
    while((_Bool)1) {
        if(        self->item_existance[it_595]) {
            if(            string_equals(self->keys[it_595],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_595]);
                    /* U13 */self->keys[it_595] = come_decrement_ref_count2(self->keys[it_595], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_595]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_595]);
                    self->keys[it_595]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_595],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_595]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_595]=item;
                }
                break;
            }
            it_595++;
            if(            it_595>=self->size) {
                it_595=0;
            }
            else if(            it_595==hash_594) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_595]=(_Bool)1;
            if(            1) {
                self->keys[it_595]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_595]=key;
            }
            if(            1) {
                self->items[it_595]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_595]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_612=(_Bool)0;
    for(    it2_615=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_615=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_615,key)) {
            same_key_exist_612=(_Bool)1;
        }
    }
    if(    !same_key_exist_612) {
        list$1charp_push_back(self->key_list,key);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_577;
void* __right_value660 = (void*)0;
char** keys_578;
void* __right_value661 = (void*)0;
struct sClass** items_579;
void* __right_value662 = (void*)0;
_Bool* item_existance_580;
int len_581;
char* it_584;
struct sClass* default_value_587;
struct sClass* it2_588;
unsigned int hash_591;
int n_592;
struct sClass* default_value_593;
default_value_587 = (void*)0;
default_value_593 = (void*)0;
    size_577=self->size*10;
    keys_578=(char**)come_increment_ref_count(((char**)(__right_value660=(char**)come_calloc(1, sizeof(char*)*(1*(size_577)), "/usr/local/include/comelang.h", 2492, "char*%"))));
    items_579=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value661=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_577)), "/usr/local/include/comelang.h", 2493, "sClass*%"))));
    item_existance_580=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value662=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_577)), "/usr/local/include/comelang.h", 2494, "bool"))));
    len_581=0;
    for(    it_584=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_584=map$2charphsClassph_next(self)    ){
        memset(&default_value_587,0,sizeof(struct sClass*));
        it2_588=map$2charphsClassph_at(self,it_584,default_value_587);
        hash_591=string_get_hash_key(it_584)%size_577;
        n_592=hash_591;
        while((_Bool)1) {
            if(            item_existance_580[n_592]) {
                n_592++;
                if(                n_592>=size_577) {
                    n_592=0;
                }
                else if(                n_592==hash_591) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_580[n_592]=(_Bool)1;
                keys_578[n_592]=it_584;
                items_579[n_592]=map$2charphsClassph_at(self,it_584,default_value_593);
                len_581++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_578;
    self->items=items_579;
    self->item_existance=item_existance_580;
    self->size=size_577;
    self->len=len_581;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_582;
char* __result328__;
char* __result329__;
char* result_583;
char* __result330__;
result_582 = (void*)0;
result_583 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_582,0,sizeof(char*));
        __result328__ = gComeFunResultObject = __result_obj__ = result_582;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result329__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    memset(&result_583,0,sizeof(char*));
    __result330__ = gComeFunResultObject = __result_obj__ = result_583;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_585;
char* __result331__;
char* __result332__;
char* result_586;
char* __result333__;
result_585 = (void*)0;
result_586 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_585,0,sizeof(char*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_585;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_586,0,sizeof(char*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_586;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_589;
unsigned int it_590;
struct sClass* __result334__;
struct sClass* __result335__;
struct sClass* __result336__;
struct sClass* __result337__;
    hash_589=string_get_hash_key(((char*)key))%self->size;
    it_590=hash_589;
    while((_Bool)1) {
        if(        self->item_existance[it_590]) {
            if(            string_equals(self->keys[it_590],key)) {
                __result334__ = gComeFunResultObject = __result_obj__ = self->items[it_590];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
            it_590++;
            if(            it_590>=self->size) {
                it_590=0;
            }
            else if(            it_590==hash_589) {
                __result335__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result335__;
            }
        }
        else {
            __result336__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_596;
struct list_item$1charp* it_597;
struct list$1charp* __result341__;
    it2_596=0;
    it_597=self->head;
    while(it_597!=((void*)0)) {
        if(        charp_equals(it_597->item,item)) {
            list$1charp_delete(self,it2_596,it2_596+1);
            break;
        }
        it2_596++;
        it_597=it_597->next;
    }
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_598;
struct list$1charp* __result338__;
struct list_item$1charp* it_601;
int i_602;
struct list_item$1charp* prev_it_603;
struct list_item$1charp* it_604;
int i_605;
struct list_item$1charp* prev_it_606;
struct list_item$1charp* it_607;
struct list_item$1charp* head_prev_it_608;
struct list_item$1charp* tail_it_609;
int i_610;
struct list_item$1charp* prev_it_611;
struct list$1charp* __result340__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_598=tail;
        tail=head;
        head=tmp_598;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result338__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_601=self->head;
        i_602=0;
        while(it_601!=((void*)0)) {
            if(            i_602<tail) {
                prev_it_603=it_601;
                it_601=it_601->next;
                i_602++;
                /*i*/come_call_finalizer3(prev_it_603,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_602==tail) {
                self->head=it_601;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_601=it_601->next;
                i_602++;
            }
        }
    }
    else if(    tail==self->len) {
        it_604=self->head;
        i_605=0;
        while(it_604!=((void*)0)) {
            if(            i_605==head) {
                self->tail=it_604->prev;
                self->tail->next=((void*)0);
            }
            if(            i_605>=head) {
                prev_it_606=it_604;
                it_604=it_604->next;
                i_605++;
                /*i*/come_call_finalizer3(prev_it_606,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_604=it_604->next;
                i_605++;
            }
        }
    }
    else {
        it_607=self->head;
        head_prev_it_608=((void*)0);
        tail_it_609=((void*)0);
        i_610=0;
        while(it_607!=((void*)0)) {
            if(            i_610==head) {
                head_prev_it_608=it_607->prev;
            }
            if(            i_610==tail) {
                tail_it_609=it_607;
            }
            if(            i_610>=head&&i_610<tail) {
                prev_it_611=it_607;
                it_607=it_607->next;
                i_610++;
                /*i*/come_call_finalizer3(prev_it_611,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_607=it_607->next;
                i_610++;
            }
        }
        if(        head_prev_it_608!=((void*)0)) {
            head_prev_it_608->next=tail_it_609;
        }
        if(        tail_it_609!=((void*)0)) {
            tail_it_609->prev=head_prev_it_608;
        }
    }
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_599;
struct list_item$1charp* prev_it_600;
struct list$1charp* __result339__;
    it_599=self->head;
    while(it_599!=((void*)0)) {
        prev_it_600=it_599;
        it_599=it_599->next;
        /*i*/come_call_finalizer3(prev_it_600,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_613;
char* __result342__;
char* __result343__;
char* result_614;
char* __result344__;
result_613 = (void*)0;
result_614 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_613,0,sizeof(char*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_613;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->head;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_614,0,sizeof(char*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_614;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_616;
char* __result345__;
char* __result346__;
char* result_617;
char* __result347__;
result_616 = (void*)0;
result_617 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_616,0,sizeof(char*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_616;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_617,0,sizeof(char*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_617;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_635;
struct list$1sNodeph* __result350__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_635=0;    i_635<num_value;    i_635++    ){
        list$1sNodeph_push_back(self,values[i_635]);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result353__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result353__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_637;
int i_638;
struct sType* default_value_639;
struct list$1sTypeph* __result351__;
struct list_item$1sTypeph* it_640;
int i_641;
struct sType* __dec_obj306;
struct list$1sTypeph* __result352__;
default_value_639 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_637=self->len;
        for(        i_638=0;        i_638<position-len_637;        i_638++        ){
            memset(&default_value_639,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_639));
            /*i*/come_call_finalizer3(default_value_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result351__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    it_640=self->head;
    i_641=0;
    while(it_640!=((void*)0)) {
        if(        position==i_641) {
            __dec_obj306=it_640->item;
            it_640->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj306,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_640=it_640->next;
        i_641++;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

