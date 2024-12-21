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
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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
    _Bool mAtomic;
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
    char* sname_at_head;
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
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
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
struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
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
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
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
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3649, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3656, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3665, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3672, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3679, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3686, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3693, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4021, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4031, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4036, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4041, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4076, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4081, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4083, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4090, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4095, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4097, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4102, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4104, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4109, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4111, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4116, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4118, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4123, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4128, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4133, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4138, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4143, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4148, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4153, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4158, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4163, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4168, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4173, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4178, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4183, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4188, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
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
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1char"))));
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
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1charp"))));
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
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1short"))));
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
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1int"))));
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
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1long"))));
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
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1float"))));
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
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1double"))));
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
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "char")));
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
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "char*")));
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
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "short")));
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
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "int")));
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
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "long")));
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
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "float")));
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
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1937, "double")));
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
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1charph"))));
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* __dec_obj33;
struct sStrNode* __result223__;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value280,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value282=__builtin_string("sStrNode")));
    /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct CVALUE* come_value_271;
void* __right_value285 = (void*)0;
char* __dec_obj36;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sType* __dec_obj37;
_Bool __result226__;
    come_value_271=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj36=come_value_271->c_value;
    come_value_271->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj37=come_value_271->type;
    come_value_271->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_271->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_271));
    add_come_last_code(info,"%s",come_value_271->c_value);
    __result226__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_271,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result226__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj40;
char* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj40=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj42=self->mGenericsName;
            /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj43=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj51=self->mAlignas;
            /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj52=self->mChannelType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj54=self->mSizeNum;
            /* U1 */ if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj55=self->mOriginalTypeName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj56=self->mAsmName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj57=self->mTupleName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_272;
struct list_item$1sTypeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        /*i*/come_call_finalizer3(prev_it_273,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_274;
struct list_item$1sTypeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*i*/come_call_finalizer3(prev_it_275,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_276;
struct list_item$1sNodeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        /*i*/come_call_finalizer3(prev_it_277,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            /* U1 */ if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_278;
struct list_item$1sNodeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*i*/come_call_finalizer3(prev_it_279,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_280;
struct list_item$1charph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        /*i*/come_call_finalizer3(prev_it_281,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1CVALUEph* litem_282;
struct CVALUE* __dec_obj58;
void* __right_value289 = (void*)0;
struct list_item$1CVALUEph* litem_283;
struct CVALUE* __dec_obj62;
void* __right_value290 = (void*)0;
struct list_item$1CVALUEph* litem_284;
struct CVALUE* __dec_obj63;
struct list$1CVALUEph* __result225__;
    if(    self->len==0) {
        litem_282=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value288=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1CVALUEph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj58=litem_282->item;
        litem_282->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value289=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1CVALUEph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj62=litem_283->item;
        litem_283->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value290=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1CVALUEph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj63=litem_284->item;
        litem_284->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj59;
struct sType* __dec_obj60;
char* __dec_obj61;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj59=self->c_value;
            /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj60=self->type;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj61=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct buffer* __dec_obj64;
struct sBufferNode* __result227__;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value291,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj64=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj64,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
char* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value292=__builtin_string("sBufferNode")));
    /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_285;
unsigned long  int size_286;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_287;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct buffer* buf_288;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sType* type2_289;
void* __right_value300 = (void*)0;
char* __dec_obj67;
void* __right_value337 = (void*)0;
struct sType* __dec_obj93;
_Bool __result246__;
    value_285=(struct buffer*)come_increment_ref_count(self->value);
    size_286=self->size;
    come_value_287=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "CVALUE"))));
    buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "buffer"))));
    buffer_append_format(buf_288,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s, %ld)",info->sname,info->sline,((char*)(__right_value297=buffer_to_string(value_285))),size_286);
    /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type2_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 60, "sType")),"buffer*",(_Bool)0,info));
    type2_289->mHeap=(_Bool)1;
    __dec_obj67=come_value_287->c_value;
    come_value_287->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_288));
    /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value_287->type;
    come_value_287->type=(struct sType*)come_increment_ref_count(sType_clone(type2_289));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_287->var=((void*)0);
    append_object_to_right_values2(come_value_287,(struct sType*)come_increment_ref_count(type2_289),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_287));
    add_come_last_code(info,"%s",come_value_287->c_value);
    __result246__ = (_Bool)1;
    /*i*/come_call_finalizer3(value_285,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_287,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_289,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result246__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result229__;
void* __right_value301 = (void*)0;
struct sType* result_290;
void* __right_value304 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value305 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value306 = (void*)0;
char* __dec_obj72;
void* __right_value313 = (void*)0;
struct list$1sTypeph* __dec_obj76;
void* __right_value321 = (void*)0;
struct list$1sNodeph* __dec_obj80;
void* __right_value322 = (void*)0;
struct list$1sTypeph* __dec_obj81;
void* __right_value329 = (void*)0;
struct list$1charph* __dec_obj85;
void* __right_value330 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value331 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value332 = (void*)0;
struct tuple1$1sTypeph* __dec_obj88;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value334 = (void*)0;
char* __dec_obj90;
void* __right_value335 = (void*)0;
char* __dec_obj91;
void* __right_value336 = (void*)0;
char* __dec_obj92;
struct sType* __result245__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_290=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_290->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_290->mNoSolvedGenericsType;
        result_290->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_290->mOriginalLoadVarType;
        result_290->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj72=result_290->mGenericsName;
        result_290->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj76=result_290->mGenericsTypes;
        result_290->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj80=result_290->mArrayNum;
        result_290->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj81=result_290->mParamTypes;
        result_290->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj85=result_290->mParamNames;
        result_290->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj86=result_290->mResultType;
        result_290->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj87=result_290->mAlignas;
        result_290->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj88=result_290->mChannelType;
        result_290->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_290->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_290->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_290->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_290->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_290->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_290->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_290->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_290->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_290->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_290->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_290->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_290->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_290->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_290->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_290->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_290->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_290->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_290->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj89=result_290->mSizeNum;
        result_290->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj90=result_290->mOriginalTypeName;
        result_290->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_290->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_290->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_290->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_290->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_290->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_290->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj91=result_290->mAsmName;
        result_290->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_290->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_290->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_290->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_290->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_290->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj92=result_290->mTupleName;
        result_290->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_290;
    /*i*/come_call_finalizer3(result_290,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result230__;
void* __right_value302 = (void*)0;
struct tuple1$1sTypeph* result_291;
void* __right_value303 = (void*)0;
struct sType* __dec_obj68;
struct tuple1$1sTypeph* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_291=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_291->v1;
        result_291->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_291;
    /*i*/come_call_finalizer3(result_291,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj69;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result232__;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1sTypeph* result_292;
struct list_item$1sTypeph* it_293;
void* __right_value312 = (void*)0;
struct list$1sTypeph* __result235__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_292=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1059, "list$1sTypeph"))));
    it_293=self->head;
    while(it_293!=((void*)0)) {
        list$1sTypeph_add(result_292,(struct sType*)come_increment_ref_count(sType_clone(it_293->item)));
        it_293=it_293->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_292;
    /*i*/come_call_finalizer3(result_292,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct list_item$1sTypeph* litem_294;
struct sType* __dec_obj73;
void* __right_value310 = (void*)0;
struct list_item$1sTypeph* litem_295;
struct sType* __dec_obj74;
void* __right_value311 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj75;
struct list$1sTypeph* __result234__;
    if(    self->len==0) {
        litem_294=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value309=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1073, "list_item$1sTypeph"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj73=litem_294->item;
        litem_294->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1) {
        litem_295=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value310=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1083, "list_item$1sTypeph"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj74=litem_295->item;
        litem_295->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value311=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1093, "list_item$1sTypeph"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj75=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result236__;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1sNodeph* result_297;
struct list_item$1sNodeph* it_298;
void* __right_value320 = (void*)0;
struct list$1sNodeph* __result241__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_297=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1059, "list$1sNodeph"))));
    it_298=self->head;
    while(it_298!=((void*)0)) {
        list$1sNodeph_add(result_297,(struct sNode*)come_increment_ref_count(sNode_clone(it_298->item)));
        it_298=it_298->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_297;
    /*i*/come_call_finalizer3(result_297,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
struct list_item$1sNodeph* litem_299;
struct sNode* __dec_obj77;
void* __right_value317 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj78;
void* __right_value318 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj79;
struct list$1sNodeph* __result238__;
    if(    self->len==0) {
        litem_299=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value316=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1073, "list_item$1sNodeph"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj77=litem_299->item;
        litem_299->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value317=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1083, "list_item$1sNodeph"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj78=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value318=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1093, "list_item$1sNodeph"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj79=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result239__;
void* __right_value319 = (void*)0;
struct sNode* result_302;
struct sNode* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_302=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_302->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_302->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_302->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_302->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_302->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_302->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_302->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_302->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_302->kind=self->kind;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_302;
    if(result_302) { result_302 = come_decrement_ref_count2(result_302, ((struct sNode*)result_302)->finalize, ((struct sNode*)result_302)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1charph* result_303;
struct list_item$1charph* it_304;
void* __right_value328 = (void*)0;
struct list$1charph* __result244__;
    if(    self==((void*)0)) {
        __result242__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_303=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1059, "list$1charph"))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1charph_add(result_303,(char*)come_increment_ref_count(string_clone(it_304->item)));
        it_304=it_304->next;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_303;
    /*i*/come_call_finalizer3(result_303,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1charph* litem_305;
char* __dec_obj82;
void* __right_value326 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj83;
void* __right_value327 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj84;
struct list$1charph* __result243__;
    if(    self->len==0) {
        litem_305=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value325=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1073, "list_item$1charph"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj82=litem_305->item;
        litem_305->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value326=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1083, "list_item$1charph"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj83=litem_306->item;
        litem_306->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value327=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1093, "list_item$1charph"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj84=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
char* __dec_obj94;
void* __right_value340 = (void*)0;
struct list$1sNodeph* __dec_obj95;
struct sSStringNode* __result247__;
    ((struct sNodeBase*)(__right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value338,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value341=__builtin_string("sSStringNode")));
    /* U11 */__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct buffer* buf_309;
struct list$1sNodeph* o2_saved_310;
struct sNode* it_313;
_Bool Value_316;
_Bool __result255__;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value347 = (void*)0;
struct sType* come_value_type_318;
void* __right_value348 = (void*)0;
char* method_name_319;
struct sType* obj_type_322;
struct sType* obj_type2_323;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj114;
void* __right_value351 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun2_324=0;
char* real_fun_name_325=0;
char* __dec_obj116;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* buf2_326;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* type_327;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* c_value_328;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* type2_329;
void* __right_value360 = (void*)0;
char* __dec_obj117;
void* __right_value361 = (void*)0;
struct sType* __dec_obj118;
_Bool __result260__;
    come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 94, "CVALUE"))));
    buf_309=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 96, "buffer"))));
    buffer_append_str(buf_309,"xsprintf(\"");
    buffer_append_str(buf_309,self->value);
    buffer_append_str(buf_309,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_310=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_313=list$1sNodeph_begin((o2_saved_310));        !list$1sNodeph_end((o2_saved_310));        it_313=list$1sNodeph_next((o2_saved_310))        ){
            Value_316=node_compile(it_313,info);
            if(            !Value_316) {
                __result255__ = (_Bool)0;
                /*i*/come_call_finalizer3(o2_saved_310,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result255__;
            }
            else {
            }
            come_value_317=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            come_value_type_318=(struct sType*)come_increment_ref_count(sType_clone(come_value_317->type));
            if(            list$1sNodeph_length(come_value_type_318->mArrayNum)>0) {
                come_value_type_318->mPointerNum+=list$1sNodeph_length(come_value_type_318->mArrayNum);
            }
            method_name_319=(char*)come_increment_ref_count(create_method_name(come_value_type_318,(_Bool)0,"to_string",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_319,((void*)0))==((void*)0)) {
                obj_type_322=come_value_317->type->mNoSolvedGenericsType->v1;
                if(                obj_type_322&&list$1sTypeph_length(obj_type_322->mGenericsTypes)>0) {
                    obj_type2_323=come_value_317->type;
                    __dec_obj114=method_name_319;
                    method_name_319=(char*)come_increment_ref_count(make_generics_function(obj_type2_323,(char*)come_increment_ref_count(__builtin_string("to_string")),info,(_Bool)1));
                    /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value351=create_to_string_automatically(come_value_type_318,"to_string",info)));
                    fun2_324=multiple_assign_var1->v1;
                    real_fun_name_325=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    /*g*/come_call_finalizer3(__right_value351,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj116=method_name_319;
                    method_name_319=(char*)come_increment_ref_count(real_fun_name_325);
                    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    fun2_324==((void*)0)) {
                        err_msg(info,"require to_string implementation(%s)",come_value_317->type->mClass->mName);
                        exit(1);
                    }
                    /* U13 */real_fun_name_325 = come_decrement_ref_count2(real_fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            buf2_326=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 137, "buffer"))));
            buffer_append_str(buf2_326,method_name_319);
            buffer_append_str(buf2_326,"(");
            buffer_append_str(buf2_326,come_value_317->c_value);
            buffer_append_str(buf2_326,")");
            type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 144, "sType")),"char*",(_Bool)0,info));
            type_327->mHeap=(_Bool)1;
            c_value_328=(char*)come_increment_ref_count(append_object_to_right_values(((char*)(__right_value356=buffer_to_string(buf2_326))),(struct sType*)come_increment_ref_count(type_327),info));
            /* U11 */__right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_309,",");
            buffer_append_str(buf_309,c_value_328);
            /*i*/come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_319 = come_decrement_ref_count2(method_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_326,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */c_value_328 = come_decrement_ref_count2(c_value_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_310,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_309,")");
    type2_329=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 156, "sType")),"char*",(_Bool)0,info));
    type2_329->mHeap=(_Bool)1;
    __dec_obj117=come_value_308->c_value;
    come_value_308->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_309));
    /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj118=come_value_308->type;
    come_value_308->type=(struct sType*)come_increment_ref_count(sType_clone(type2_329));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_308->var=((void*)0);
    append_object_to_right_values2(come_value_308,(struct sType*)come_increment_ref_count(type2_329),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
    add_come_last_code(info,"%s",come_value_308->c_value);
    __result260__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_329,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result260__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_311;
struct sNode* __result249__;
struct sNode* __result250__;
struct sNode* result_312;
struct sNode* __result251__;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_311,0,sizeof(struct sNode*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_311;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->head;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_312,0,sizeof(struct sNode*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_312;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_314;
struct sNode* __result252__;
struct sNode* __result253__;
struct sNode* result_315;
struct sNode* __result254__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_314,0,sizeof(struct sNode*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_315,0,sizeof(struct sNode*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_320;
unsigned int it_321;
struct sFun* __result256__;
struct sFun* __result257__;
struct sFun* __result258__;
struct sFun* __result259__;
    hash_320=string_get_hash_key(((char*)key))%self->size;
    it_321=hash_320;
    while((_Bool)1) {
        if(        self->item_existance[it_321]) {
            if(            string_equals(self->keys[it_321],key)) {
                __result256__ = gComeFunResultObject = __result_obj__ = self->items[it_321];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
            it_321++;
            if(            it_321>=self->size) {
                it_321=0;
            }
            else if(            it_321==hash_320) {
                __result257__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
        }
        else {
            __result258__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result258__;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj99;
struct sType* __dec_obj100;
struct list$1sTypeph* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
struct sType* __dec_obj104;
struct sBlock* __dec_obj105;
struct buffer* __dec_obj108;
struct buffer* __dec_obj109;
struct buffer* __dec_obj110;
struct buffer* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj99=self->mName;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj100=self->mResultType;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj101=self->mParamTypes;
            come_call_finalizer3(__dec_obj101,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj102=self->mParamNames;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj103=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj104=self->mLambdaType;
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj105=self->mBlock;
            come_call_finalizer3(__dec_obj105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj108=self->mSource;
            come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj109=self->mSourceHead;
            come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj110=self->mSourceHead2;
            come_call_finalizer3(__dec_obj110,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj111=self->mSourceDefer;
            come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj112=self->mComeHeader;
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj113=self->mDeclareSName;
            /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj106;
struct sVarTable* __dec_obj107;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj106=self->mNodes;
            come_call_finalizer3(__dec_obj106,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj107=self->mVarTable;
            come_call_finalizer3(__dec_obj107,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj115;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj115=self->v2;
            /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct sCharNode* __result261__;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value362,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sCharNode")));
    /* U11 */__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value366 = (void*)0;
char* __dec_obj120;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* __dec_obj121;
_Bool __result263__;
    come_value_330=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 189, "CVALUE"))));
    __dec_obj120=come_value_330->c_value;
    come_value_330->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=come_value_330->type;
    come_value_330->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 192, "sType")),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_330->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_330));
    add_come_last_code(info,"%s",come_value_330->c_value);
    __result263__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result263__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct sWCharNode* __result264__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sWCharNode")));
    /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_331;
void* __right_value373 = (void*)0;
char* __dec_obj123;
void* __right_value374 = (void*)0;
char* __dec_obj124;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj125;
_Bool __result266__;
    come_value_331=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 220, "CVALUE"))));
    if(    self->quote) {
        __dec_obj123=come_value_331->c_value;
        come_value_331->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj124=come_value_331->c_value;
        come_value_331->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj125=come_value_331->type;
    come_value_331->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 228, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_331->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_331));
    add_come_last_code(info,"%s",come_value_331->c_value);
    __result266__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_331,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
int* __dec_obj126;
struct sWStringNode* __result267__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->value;
    self->value=(int*)come_increment_ref_count(value);
    /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value378=__builtin_string("sWStringNode")));
    /* U11 */__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_332;
void* __right_value381 = (void*)0;
char* __dec_obj129;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sType* __dec_obj130;
_Bool __result269__;
    come_value_332=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 255, "CVALUE"))));
    __dec_obj129=come_value_332->c_value;
    come_value_332->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_332->type;
    come_value_332->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 258, "sType")),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_332->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_332));
    add_come_last_code(info,"%s",come_value_332->c_value);
    __result269__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
char* __dec_obj131;
struct sRegexNode* __result270__;
    ((struct sNodeBase*)(__right_value384=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value384,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string("sRegexNode")));
    /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value392 = (void*)0;
struct sNode* obj_node_333;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_335;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
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
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* node_341;
_Bool Value_342;
_Bool __result277__;
_Bool __result278__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 287, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value388=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 287, "sStrNode")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_333=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value388,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_335=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 289, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 291, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_333))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 292, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 293, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 294, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 295, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 296, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 297, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 298, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_335,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 299, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_341=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_333),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_335),((void*)0),info->sline,((void*)0),info));
    Value_342=node_compile(node_341,info);
    if(    !Value_342) {
        __result277__ = (_Bool)0;
        if(obj_node_333) { obj_node_333 = come_decrement_ref_count2(obj_node_333, ((struct sNode*)obj_node_333)->finalize, ((struct sNode*)obj_node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_335,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result277__;
    }
    else {
    }
    __result278__ = (_Bool)1;
    if(obj_node_333) { obj_node_333 = come_decrement_ref_count2(obj_node_333, ((struct sNode*)obj_node_333)->finalize, ((struct sNode*)obj_node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params_335,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result278__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj133=self->str;
            /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result274__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_336;
struct list_item$1tuple2$2charphsNodephph* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        /*i*/come_call_finalizer3(prev_it_337,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj138;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj138=self->item;
            come_call_finalizer3(__dec_obj138,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_338;
struct tuple2$2charphsNodeph* __dec_obj141;
void* __right_value396 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_339;
struct tuple2$2charphsNodeph* __dec_obj144;
void* __right_value397 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_340;
struct tuple2$2charphsNodeph* __dec_obj147;
struct list$1tuple2$2charphsNodephph* __result275__;
    if(    self->len==0) {
        litem_338=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value395=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1073, "list_item$1tuple2$2charphsNodephph"))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj141=litem_338->item;
        litem_338->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj141,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value396=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1083, "list_item$1tuple2$2charphsNodephph"))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj144=litem_339->item;
        litem_339->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj144,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value397=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1093, "list_item$1tuple2$2charphsNodephph"))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj147=litem_340->item;
        litem_340->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj150;
struct sNode* __dec_obj151;
struct tuple2$2charphsNodeph* __result276__;
    __dec_obj150=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
struct list$1sNodeph* __dec_obj152;
struct sListNode* __result279__;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value434,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=__builtin_string("sListNode")));
    /* U11 */__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_343;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1CVALUEph* params_344;
struct sType* list_element_type_347;
int n_348;
struct list$1sNodeph* o2_saved_349;
struct sNode* it_350;
void* __right_value438 = (void*)0;
_Bool _if_conditional1;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sNode* value_node_351;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_352;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* exp_353;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj156;
_Bool Value_354;
_Bool __result282__;
_Bool Value_355;
_Bool __result283__;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_356;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sType* __dec_obj157;
void* __right_value456 = (void*)0;
struct sType* type_values_357;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* var_name_362;
void* __right_value462 = (void*)0;
struct sVar* var__363;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* source_364;
int i_365;
struct list$1CVALUEph* o2_saved_366;
struct CVALUE* it_369;
void* __right_value466 = (void*)0;
char* c_value_372;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* list_type_376;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* obj_type_380;
char* fun_name_381;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* generics_fun_name_382;
struct sFun* fun_383;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj164;
_Bool __result294__;
void* __right_value479 = (void*)0;
struct sType* result_type_384;
struct sType* type_385;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct CVALUE* obj_value_386;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* num_string_387;
void* __right_value484 = (void*)0;
struct sType* type2_388;
void* __right_value485 = (void*)0;
char* type_name_389;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj165;
void* __right_value488 = (void*)0;
struct sType* type3_390;
void* __right_value489 = (void*)0;
struct sType* __dec_obj166;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1CVALUEph* come_params_391;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct CVALUE* come_value2_395;
void* __right_value494 = (void*)0;
char* __dec_obj167;
struct sType* __dec_obj168;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct CVALUE* come_value3_396;
void* __right_value497 = (void*)0;
char* __dec_obj169;
struct sType* __dec_obj170;
int j_397;
struct list$1CVALUEph* o2_saved_398;
struct CVALUE* it_399;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct CVALUE* come_value4_400;
void* __right_value500 = (void*)0;
char* __dec_obj171;
void* __right_value501 = (void*)0;
struct sType* __dec_obj172;
_Bool __result297__;
    list_elements_343=self->list_elements;
    params_344=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 331, "list$1CVALUEph"))));
    list_element_type_347=((void*)0);
    n_348=0;
    for(    o2_saved_349=(list_elements_343),it_350=list$1sNodeph_begin((o2_saved_349));    !list$1sNodeph_end((o2_saved_349));    it_350=list$1sNodeph_next((o2_saved_349))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value438=it_350->kind(it_350->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_351=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value439=xsprintf("Value"))),info));
            /* U11 */__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_352=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 339, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_352,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 340, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_351))));
            list$1tuple2$2charphsNodephph_add(params_352,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 341, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_348,info)))));
            exp_353=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value450=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_351),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_352),((void*)0),0,((void*)0),info));
            /* U11 */__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj156=exp_353;
            exp_353=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_353,info));
            /* U1 */ if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
            Value_354=node_compile(exp_353,info);
            if(            !Value_354) {
                __result282__ = (_Bool)0;
                if(value_node_351) { value_node_351 = come_decrement_ref_count2(value_node_351, ((struct sNode*)value_node_351)->finalize, ((struct sNode*)value_node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_352,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_353) { exp_353 = come_decrement_ref_count2(exp_353, ((struct sNode*)exp_353)->finalize, ((struct sNode*)exp_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_344,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result282__;
            }
            else {
            }
            if(value_node_351) { value_node_351 = come_decrement_ref_count2(value_node_351, ((struct sNode*)value_node_351)->finalize, ((struct sNode*)value_node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(params_352,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_353) { exp_353 = come_decrement_ref_count2(exp_353, ((struct sNode*)exp_353)->finalize, ((struct sNode*)exp_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_355=node_compile(it_350,info);
            if(            !Value_355) {
                __result283__ = (_Bool)0;
                /*i*/come_call_finalizer3(params_344,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result283__;
            }
            else {
            }
        }
        come_value_356=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_347) {
            check_assign_type(((char*)(__right_value454=xsprintf("invalid list element type"))),list_element_type_347,come_value_356->type,come_value_356,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_344,(struct CVALUE*)come_increment_ref_count(come_value_356));
        __dec_obj157=list_element_type_347;
        list_element_type_347=(struct sType*)come_increment_ref_count(sType_clone(come_value_356->type));
        come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_348++;
        /*i*/come_call_finalizer3(come_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_357=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_347));
    list$1sNodeph_push_back(type_values_357->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_344),info)));
    type_values_357->mHeap=(_Bool)0;
    static int list_value_num_361=0;
    var_name_362=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_361));
    add_variable_to_table(var_name_362,(struct sType*)come_increment_ref_count(sType_clone(type_values_357)),info);
    var__363=get_variable_from_table(info->lv_table,var_name_362);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value463=make_define_var(type_values_357,var__363->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_364=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 382, "buffer"))));
    buffer_append_str(source_364,"(");
    i_365=0;
    for(    o2_saved_366=(struct list$1CVALUEph*)come_increment_ref_count((params_344)),it_369=list$1CVALUEph_begin((o2_saved_366));    !list$1CVALUEph_end((o2_saved_366));    it_369=list$1CVALUEph_next((o2_saved_366))    ){
        if(        list_element_type_347->mHeap) {
            c_value_372=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_344,i_365), "06str.c", 389, 0))->type,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_344,i_365), "06str.c", 389, 1))->c_value,info));
            buffer_append_format(source_364,"%s[%d]=%s,\n",var__363->mCValueName,i_365,c_value_372);
            /* U13 */c_value_372 = come_decrement_ref_count2(c_value_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_364,"%s[%d]=%s,\n",var__363->mCValueName,i_365,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_344,i_365), "06str.c", 393, 2))->c_value);
        }
        i_365++;
    }
    /*i*/come_call_finalizer3(o2_saved_366,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_376=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 402, "sType")),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_376->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(list_element_type_347)));
    obj_type_380=(struct sType*)come_increment_ref_count(sType_clone(list_type_376));
    fun_name_381="initialize_with_values";
    generics_fun_name_382=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value475=make_generics_function(obj_type_380,(char*)come_increment_ref_count(__builtin_string(fun_name_381)),info,(_Bool)1)))));
    /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_383=map$2charphsFunph_at(info->funcs,generics_fun_name_382,((void*)0));
    if(    fun_383==((void*)0)) {
        __dec_obj164=generics_fun_name_382;
        generics_fun_name_382=(char*)come_increment_ref_count(create_method_name(obj_type_380,(_Bool)0,((char*)(__right_value477=__builtin_string(fun_name_381))),info,(_Bool)1));
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_383=map$2charphsFunph_at(info->funcs,generics_fun_name_382,((void*)0));
        if(        fun_383==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_382,info->come_fun->mName);
            __result294__ = (_Bool)1;
            /*i*/come_call_finalizer3(params_344,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_values_357,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_364,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_380,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_382 = come_decrement_ref_count2(generics_fun_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result294__;
        }
    }
    result_type_384=(struct sType*)come_increment_ref_count(sType_clone(fun_383->mResultType));
    result_type_384->mStatic=(_Bool)0;
    type_385=list_type_376;
    obj_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 428, "CVALUE"))));
    num_string_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 430, "buffer"))));
    buffer_append_str(num_string_387,"1");
    type2_388=(struct sType*)come_increment_ref_count(solve_generics(type_385,type_385,info));
    type_name_389=(char*)come_increment_ref_count(make_type_name_string(type2_388,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj165=obj_value_386->c_value;
    obj_value_386->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_389,type_name_389,((char*)(__right_value486=buffer_to_string(num_string_387))),info->sname,info->sline,type_name_389));
    /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_390=(struct sType*)come_increment_ref_count(sType_clone(type2_388));
    type3_390->mPointerNum++;
    type3_390->mHeap=(_Bool)1;
    type2_388->mHeap=(_Bool)1;
    __dec_obj166=obj_value_386->type;
    obj_value_386->type=(struct sType*)come_increment_ref_count(sType_clone(type2_388));
    come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_386->type->mPointerNum++;
    obj_value_386->var=((void*)0);
    append_object_to_right_values2(obj_value_386,(struct sType*)come_increment_ref_count(type3_390),info,(_Bool)0);
    come_params_391=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 450, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_383->mParamTypes,0), "06str.c", 452, 3))->mHeap&&obj_value_386->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_383->mParamTypes,0), "06str.c", 453, 4)),obj_value_386->type,obj_value_386,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(obj_value_386));
    come_value2_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 457, "CVALUE"))));
    __dec_obj167=come_value2_395->c_value;
    come_value2_395->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_344)));
    /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj168=come_value2_395->type;
    come_value2_395->type=((void*)0);
    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_395->var=((void*)0);
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(come_value2_395));
    come_value3_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 465, "CVALUE"))));
    __dec_obj169=come_value3_396->c_value;
    come_value3_396->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__363->mCValueName));
    /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=come_value3_396->type;
    come_value3_396->type=((void*)0);
    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_396->var=((void*)0);
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(come_value3_396));
    buffer_append_str(source_364,generics_fun_name_382);
    buffer_append_str(source_364,"(");
    j_397=0;
    for(    o2_saved_398=(struct list$1CVALUEph*)come_increment_ref_count((come_params_391)),it_399=list$1CVALUEph_begin((o2_saved_398));    !list$1CVALUEph_end((o2_saved_398));    it_399=list$1CVALUEph_next((o2_saved_398))    ){
        buffer_append_str(source_364,it_399->c_value);
        if(        j_397!=list$1CVALUEph_length(come_params_391)-1) {
            buffer_append_str(source_364,",");
        }
        j_397++;
    }
    /*i*/come_call_finalizer3(o2_saved_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_364,")");
    buffer_append_str(source_364,")");
    come_value4_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 491, "CVALUE"))));
    __dec_obj171=come_value4_400->c_value;
    come_value4_400->c_value=(char*)come_increment_ref_count(buffer_to_string(source_364));
    /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value4_400->type;
    come_value4_400->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_384));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_400->type->mStatic=(_Bool)0;
    come_value4_400->var=((void*)0);
    if(    result_type_384->mHeap) {
        append_object_to_right_values2(come_value4_400,(struct sType*)come_increment_ref_count(result_type_384),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_400));
    add_come_last_code(info,"%s",come_value4_400->c_value);
    __result297__ = (_Bool)1;
    /*i*/come_call_finalizer3(params_344,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_element_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_values_357,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_364,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_380,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_382 = come_decrement_ref_count2(generics_fun_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_389 = come_decrement_ref_count2(type_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_390,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_391,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result281__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_345;
struct list_item$1CVALUEph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        /*i*/come_call_finalizer3(prev_it_346,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj155;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj155=self->item;
            come_call_finalizer3(__dec_obj155,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value457 = (void*)0;
struct list_item$1sNodeph* litem_358;
struct sNode* __dec_obj158;
void* __right_value458 = (void*)0;
struct list_item$1sNodeph* litem_359;
struct sNode* __dec_obj159;
void* __right_value459 = (void*)0;
struct list_item$1sNodeph* litem_360;
struct sNode* __dec_obj160;
struct list$1sNodeph* __result284__;
    if(    self->len==0) {
        litem_358=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value457=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1sNodeph"))));
        litem_358->prev=((void*)0);
        litem_358->next=((void*)0);
        __dec_obj158=litem_358->item;
        litem_358->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_358;
        self->head=litem_358;
    }
    else if(    self->len==1) {
        litem_359=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value458=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1sNodeph"))));
        litem_359->prev=self->head;
        litem_359->next=((void*)0);
        __dec_obj159=litem_359->item;
        litem_359->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_359;
        self->head->next=litem_359;
    }
    else {
        litem_360=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value459=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1sNodeph"))));
        litem_360->prev=self->tail;
        litem_360->next=((void*)0);
        __dec_obj160=litem_360->item;
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_360;
        self->tail=litem_360;
    }
    self->len++;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_367;
struct CVALUE* __result285__;
struct CVALUE* __result286__;
struct CVALUE* result_368;
struct CVALUE* __result287__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_367,0,sizeof(struct CVALUE*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->head;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_368,0,sizeof(struct CVALUE*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_370;
struct CVALUE* __result288__;
struct CVALUE* __result289__;
struct CVALUE* result_371;
struct CVALUE* __result290__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_370,0,sizeof(struct CVALUE*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_371,0,sizeof(struct CVALUE*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_373;
int i_374;
struct CVALUE* __result291__;
struct CVALUE* default_value_375;
struct CVALUE* __result292__;
default_value_375 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_373=self->head;
    i_374=0;
    while(it_373!=((void*)0)) {
        if(        position==i_374) {
            __result291__ = gComeFunResultObject = __result_obj__ = it_373->item;
            gComeFunResultObject = (void*)0;
            return __result291__;
        }
        it_373=it_373->next;
        i_374++;
    }
    memset(&default_value_375,0,sizeof(struct CVALUE*));
    __result292__ = gComeFunResultObject = __result_obj__ = default_value_375;
    /*i*/come_call_finalizer3(default_value_375,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value469 = (void*)0;
struct list_item$1sTypeph* litem_377;
struct sType* __dec_obj161;
void* __right_value470 = (void*)0;
struct list_item$1sTypeph* litem_378;
struct sType* __dec_obj162;
void* __right_value471 = (void*)0;
struct list_item$1sTypeph* litem_379;
struct sType* __dec_obj163;
struct list$1sTypeph* __result293__;
    if(    self->len==0) {
        litem_377=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value469=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1sTypeph"))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj161=litem_377->item;
        litem_377->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value470=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1sTypeph"))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj162=litem_378->item;
        litem_378->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value471=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1sTypeph"))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj163=litem_379->item;
        litem_379->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_392;
int i_393;
struct sType* __result295__;
struct sType* default_value_394;
struct sType* __result296__;
default_value_394 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_392=self->head;
    i_393=0;
    while(it_392!=((void*)0)) {
        if(        position==i_393) {
            __result295__ = gComeFunResultObject = __result_obj__ = it_392->item;
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        it_392=it_392->next;
        i_393++;
    }
    memset(&default_value_394,0,sizeof(struct sType*));
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_394;
    /*i*/come_call_finalizer3(default_value_394,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj173;
struct sTupleNode* __result298__;
    ((struct sNodeBase*)(__right_value502=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value502,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj173,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value503 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value503=__builtin_string("sTupleNode")));
    /* U11 */__right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_403;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1sTypeph* tuple_types_404;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1CVALUEph* tuple_values_405;
int n_406;
struct list$1tuple2$2charphsNodephph* o2_saved_407;
struct tuple2$2charphsNodeph* it_410;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* name_413=0;
struct sNode* node_414=0;
void* __right_value508 = (void*)0;
_Bool _if_conditional2;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* value_node_415;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* exp_416;
_Bool Value_417;
_Bool __result306__;
_Bool Value_418;
_Bool __result307__;
void* __right_value513 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* type_421;
char* __dec_obj179;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* type_422;
struct list$1sTypeph* o2_saved_423;
struct sType* it_426;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct CVALUE* obj_value_429;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct buffer* num_string_430;
void* __right_value528 = (void*)0;
struct sType* type2_431;
void* __right_value529 = (void*)0;
char* type_name_432;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __dec_obj180;
void* __right_value532 = (void*)0;
struct sType* type3_433;
void* __right_value533 = (void*)0;
struct sType* __dec_obj181;
void* __right_value534 = (void*)0;
struct sType* obj_type_434;
char* fun_name_435;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* generics_fun_name_436;
struct sFun* fun_437;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* __dec_obj182;
_Bool __result316__;
void* __right_value540 = (void*)0;
struct sType* result_type_438;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1CVALUEph* come_params_439;
int i_440;
struct list$1CVALUEph* o2_saved_441;
struct CVALUE* it_442;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct buffer* buf_444;
int j_445;
struct list$1CVALUEph* o2_saved_446;
struct CVALUE* it_447;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value548 = (void*)0;
char* __dec_obj183;
void* __right_value549 = (void*)0;
struct sType* __dec_obj184;
_Bool __result317__;
    tuple_elements_403=self->tuple_elements;
    tuple_types_404=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 528, "list$1sTypeph"))));
    tuple_values_405=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 529, "list$1CVALUEph"))));
    n_406=0;
    for(    o2_saved_407=(tuple_elements_403),it_410=list$1tuple2$2charphsNodephph_begin((o2_saved_407));    !list$1tuple2$2charphsNodephph_end((o2_saved_407));    it_410=list$1tuple2$2charphsNodephph_next((o2_saved_407))    ){
        multiple_assign_var2=it_410;
        name_413=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        node_414=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value508=node_414->kind(node_414->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            value_node_415=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value509=xsprintf("Value"))),info));
            /* U11 */__right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_416=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_415),(char*)come_increment_ref_count(xsprintf("v%d",n_406+1)),info));
            Value_417=node_compile(exp_416,info);
            if(            !Value_417) {
                __result306__ = (_Bool)0;
                if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_416) { exp_416 = come_decrement_ref_count2(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result306__;
            }
            else {
            }
            if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_416) { exp_416 = come_decrement_ref_count2(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_418=node_compile(node_414,info);
            if(            !Value_418) {
                __result307__ = (_Bool)0;
                /* U13 */name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result307__;
            }
            else {
            }
        }
        come_value_419=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_405,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_419)));
        type_421=(struct sType*)come_increment_ref_count(sType_clone(come_value_419->type));
        __dec_obj179=type_421->mTupleName;
        type_421->mTupleName=(char*)come_increment_ref_count(name_413);
        /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sTypeph_push_back(tuple_types_404,(struct sType*)come_increment_ref_count(type_421));
        n_406++;
        /* U13 */name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_422=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 559, "sType")),((char*)(__right_value521=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_404)))),(_Bool)0,info));
    /* U11 */__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_423=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_404)),it_426=list$1sTypeph_begin((o2_saved_423));    !list$1sTypeph_end((o2_saved_423));    it_426=list$1sTypeph_next((o2_saved_423))    ){
        list$1sTypeph_push_back(type_422->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_426)));
    }
    /*i*/come_call_finalizer3(o2_saved_423,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 565, "CVALUE"))));
    num_string_430=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 567, "buffer"))));
    buffer_append_str(num_string_430,"1");
    type2_431=(struct sType*)come_increment_ref_count(solve_generics(type_422,type_422,info));
    type_name_432=(char*)come_increment_ref_count(make_type_name_string(type2_431,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj180=obj_value_429->c_value;
    obj_value_429->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_432,type_name_432,((char*)(__right_value530=buffer_to_string(num_string_430))),info->sname,info->sline,type_name_432));
    /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_433=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    type3_433->mPointerNum++;
    type3_433->mHeap=(_Bool)1;
    type2_431->mHeap=(_Bool)1;
    __dec_obj181=obj_value_429->type;
    obj_value_429->type=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_429->type->mPointerNum++;
    obj_value_429->var=((void*)0);
    append_object_to_right_values2(obj_value_429,(struct sType*)come_increment_ref_count(type3_433),info,(_Bool)0);
    obj_type_434=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    fun_name_435="initialize";
    generics_fun_name_436=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value536=make_generics_function(obj_type_434,(char*)come_increment_ref_count(__builtin_string(fun_name_435)),info,(_Bool)1)))));
    /* U11 */__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_437=map$2charphsFunph_at(info->funcs,generics_fun_name_436,((void*)0));
    if(    fun_437==((void*)0)) {
        __dec_obj182=generics_fun_name_436;
        generics_fun_name_436=(char*)come_increment_ref_count(create_method_name(obj_type_434,(_Bool)0,((char*)(__right_value538=__builtin_string(fun_name_435))),info,(_Bool)1));
        /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_437=map$2charphsFunph_at(info->funcs,generics_fun_name_436,((void*)0));
        if(        fun_437==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_436,info->come_fun->mName);
            __result316__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_430,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_432 = come_decrement_ref_count2(type_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_436 = come_decrement_ref_count2(generics_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result316__;
        }
    }
    result_type_438=(struct sType*)come_increment_ref_count(sType_clone(fun_437->mResultType));
    result_type_438->mStatic=(_Bool)0;
    come_params_439=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 608, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,0), "06str.c", 610, 5))->mHeap&&obj_value_429->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,0), "06str.c", 611, 6)),obj_value_429->type,obj_value_429,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(obj_value_429));
    i_440=1;
    for(    o2_saved_441=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_405)),it_442=list$1CVALUEph_begin((o2_saved_441));    !list$1CVALUEph_end((o2_saved_441));    it_442=list$1CVALUEph_next((o2_saved_441))    ){
        come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_442));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 619, 7))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 619, 8))->mHeap&&come_value_443->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 620, 9)),come_value_443->type,come_value_443,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(come_value_443));
        i_440++;
        /*i*/come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_441,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 627, "buffer"))));
    buffer_append_str(buf_444,generics_fun_name_436);
    buffer_append_str(buf_444,"(");
    j_445=0;
    for(    o2_saved_446=(struct list$1CVALUEph*)come_increment_ref_count((come_params_439)),it_447=list$1CVALUEph_begin((o2_saved_446));    !list$1CVALUEph_end((o2_saved_446));    it_447=list$1CVALUEph_next((o2_saved_446))    ){
        buffer_append_str(buf_444,it_447->c_value);
        if(        j_445!=list$1CVALUEph_length(come_params_439)-1) {
            buffer_append_str(buf_444,",");
        }
        j_445++;
    }
    /*i*/come_call_finalizer3(o2_saved_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_444,")");
    come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 644, "CVALUE"))));
    __dec_obj183=come_value2_448->c_value;
    come_value2_448->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_444));
    /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=come_value2_448->type;
    come_value2_448->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_438));
    come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_448->type->mStatic=(_Bool)0;
    come_value2_448->var=((void*)0);
    if(    result_type_438->mHeap) {
        append_object_to_right_values2(come_value2_448,(struct sType*)come_increment_ref_count(result_type_438),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_448->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_448));
    __result317__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_430,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_432 = come_decrement_ref_count2(type_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_436 = come_decrement_ref_count2(generics_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result317__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_401;
struct list_item$1tuple2$2charphsNodephph* prev_it_402;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        /*i*/come_call_finalizer3(prev_it_402,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_408;
struct tuple2$2charphsNodeph* __result300__;
struct tuple2$2charphsNodeph* __result301__;
struct tuple2$2charphsNodeph* result_409;
struct tuple2$2charphsNodeph* __result302__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_408,0,sizeof(struct tuple2$2charphsNodeph*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->head;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_409,0,sizeof(struct tuple2$2charphsNodeph*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_411;
struct tuple2$2charphsNodeph* __result303__;
struct tuple2$2charphsNodeph* __result304__;
struct tuple2$2charphsNodeph* result_412;
struct tuple2$2charphsNodeph* __result305__;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_411,0,sizeof(struct tuple2$2charphsNodeph*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_411;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_412,0,sizeof(struct tuple2$2charphsNodeph*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_412;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result308__;
void* __right_value514 = (void*)0;
struct CVALUE* result_420;
void* __right_value515 = (void*)0;
char* __dec_obj176;
void* __right_value516 = (void*)0;
struct sType* __dec_obj177;
void* __right_value517 = (void*)0;
char* __dec_obj178;
struct CVALUE* __result309__;
    if(    self==(void*)0) {
        __result308__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    result_420=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj176=result_420->c_value;
        result_420->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj177=result_420->type;
        result_420->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_420->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj178=result_420->c_value_without_right_value_objects;
        result_420->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result309__ = gComeFunResultObject = __result_obj__ = result_420;
    /*i*/come_call_finalizer3(result_420,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_424;
struct sType* __result310__;
struct sType* __result311__;
struct sType* result_425;
struct sType* __result312__;
result_424 = (void*)0;
result_425 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_424,0,sizeof(struct sType*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_424;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->it=self->head;
    if(    self->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_425,0,sizeof(struct sType*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_425;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_427;
struct sType* __result313__;
struct sType* __result314__;
struct sType* result_428;
struct sType* __result315__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_427,0,sizeof(struct sType*));
        __result313__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result314__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    memset(&result_428,0,sizeof(struct sType*));
    __result315__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value550 = (void*)0;
struct list$1sNodeph* __dec_obj185;
struct sSomeNode* __result318__;
    ((struct sNodeBase*)(__right_value550=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value550,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj185=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj185,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
char* __result319__;
    __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value551=__builtin_string("sSomeNode")));
    /* U11 */__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_449;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1sTypeph* tuple_types_450;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1CVALUEph* tuple_values_451;
struct list$1sNodeph* o2_saved_452;
struct sNode* it_453;
_Bool Value_454;
_Bool __result320__;
void* __right_value556 = (void*)0;
struct CVALUE* come_value_455;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* type_456;
struct list$1sTypeph* o2_saved_457;
struct sType* it_458;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* obj_value_459;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct buffer* num_string_460;
void* __right_value567 = (void*)0;
struct sType* type2_461;
void* __right_value568 = (void*)0;
char* type_name_462;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __dec_obj188;
void* __right_value571 = (void*)0;
struct sType* type3_463;
void* __right_value572 = (void*)0;
struct sType* __dec_obj189;
void* __right_value573 = (void*)0;
struct sType* obj_type_464;
char* fun_name_465;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
char* generics_fun_name_466;
struct sFun* fun_467;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __dec_obj190;
_Bool __result321__;
void* __right_value579 = (void*)0;
struct sType* result_type_468;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1CVALUEph* come_params_469;
int i_470;
struct list$1CVALUEph* o2_saved_471;
struct CVALUE* it_472;
void* __right_value582 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct buffer* buf_474;
int j_475;
struct list$1CVALUEph* o2_saved_476;
struct CVALUE* it_477;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct CVALUE* come_value2_478;
void* __right_value587 = (void*)0;
char* __dec_obj191;
void* __right_value588 = (void*)0;
struct sType* __dec_obj192;
_Bool __result322__;
    tuple_elements_449=self->tuple_elements;
    tuple_types_450=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 681, "list$1sTypeph"))));
    tuple_values_451=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 682, "list$1CVALUEph"))));
    for(    o2_saved_452=(tuple_elements_449),it_453=list$1sNodeph_begin((o2_saved_452));    !list$1sNodeph_end((o2_saved_452));    it_453=list$1sNodeph_next((o2_saved_452))    ){
        Value_454=node_compile(it_453,info);
        if(        !Value_454) {
            __result320__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_450,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_451,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result320__;
        }
        else {
        }
        come_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_451,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_455)));
        list$1sTypeph_push_back(tuple_types_450,(struct sType*)come_increment_ref_count(sType_clone(come_value_455->type)));
        /*i*/come_call_finalizer3(come_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_456=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 696, "sType")),((char*)(__right_value560=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_450)))),(_Bool)0,info));
    /* U11 */__right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_457=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_450)),it_458=list$1sTypeph_begin((o2_saved_457));    !list$1sTypeph_end((o2_saved_457));    it_458=list$1sTypeph_next((o2_saved_457))    ){
        list$1sTypeph_push_back(type_456->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_458)));
    }
    /*i*/come_call_finalizer3(o2_saved_457,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_459=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 702, "CVALUE"))));
    num_string_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 704, "buffer"))));
    buffer_append_str(num_string_460,"1");
    type2_461=(struct sType*)come_increment_ref_count(solve_generics(type_456,type_456,info));
    type_name_462=(char*)come_increment_ref_count(make_type_name_string(type2_461,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj188=obj_value_459->c_value;
    obj_value_459->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_462,type_name_462,((char*)(__right_value569=buffer_to_string(num_string_460))),info->sname,info->sline,type_name_462));
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_463=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    type3_463->mPointerNum++;
    type3_463->mHeap=(_Bool)1;
    type2_461->mHeap=(_Bool)1;
    __dec_obj189=obj_value_459->type;
    obj_value_459->type=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_459->type->mPointerNum++;
    obj_value_459->var=((void*)0);
    append_object_to_right_values2(obj_value_459,(struct sType*)come_increment_ref_count(type3_463),info,(_Bool)0);
    obj_type_464=(struct sType*)come_increment_ref_count(sType_clone(type2_461));
    fun_name_465="initialize";
    generics_fun_name_466=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value575=make_generics_function(obj_type_464,(char*)come_increment_ref_count(__builtin_string(fun_name_465)),info,(_Bool)1)))));
    /* U11 */__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_467=map$2charphsFunph_at(info->funcs,generics_fun_name_466,((void*)0));
    if(    fun_467==((void*)0)) {
        __dec_obj190=generics_fun_name_466;
        generics_fun_name_466=(char*)come_increment_ref_count(create_method_name(obj_type_464,(_Bool)0,((char*)(__right_value577=__builtin_string(fun_name_465))),info,(_Bool)1));
        /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_467=map$2charphsFunph_at(info->funcs,generics_fun_name_466,((void*)0));
        if(        fun_467==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_466,info->come_fun->mName);
            __result321__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_450,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_451,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_461,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_462 = come_decrement_ref_count2(type_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_463,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_466 = come_decrement_ref_count2(generics_fun_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result321__;
        }
    }
    result_type_468=(struct sType*)come_increment_ref_count(sType_clone(fun_467->mResultType));
    result_type_468->mStatic=(_Bool)0;
    come_params_469=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 745, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_467->mParamTypes,0), "06str.c", 747, 10))->mHeap&&obj_value_459->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_467->mParamTypes,0), "06str.c", 748, 11)),obj_value_459->type,obj_value_459,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_469,(struct CVALUE*)come_increment_ref_count(obj_value_459));
    i_470=1;
    for(    o2_saved_471=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_451)),it_472=list$1CVALUEph_begin((o2_saved_471));    !list$1CVALUEph_end((o2_saved_471));    it_472=list$1CVALUEph_next((o2_saved_471))    ){
        come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_472));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_467->mParamTypes,i_470), "06str.c", 756, 12))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_467->mParamTypes,i_470), "06str.c", 756, 13))->mHeap&&come_value_473->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_467->mParamTypes,i_470), "06str.c", 757, 14)),come_value_473->type,come_value_473,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_469,(struct CVALUE*)come_increment_ref_count(come_value_473));
        i_470++;
        /*i*/come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_471,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_474=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "buffer"))));
    buffer_append_str(buf_474,generics_fun_name_466);
    buffer_append_str(buf_474,"(");
    j_475=0;
    for(    o2_saved_476=(struct list$1CVALUEph*)come_increment_ref_count((come_params_469)),it_477=list$1CVALUEph_begin((o2_saved_476));    !list$1CVALUEph_end((o2_saved_476));    it_477=list$1CVALUEph_next((o2_saved_476))    ){
        buffer_append_str(buf_474,it_477->c_value);
        if(        j_475!=list$1CVALUEph_length(come_params_469)-1) {
            buffer_append_str(buf_474,",");
        }
        j_475++;
    }
    /*i*/come_call_finalizer3(o2_saved_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_474,")");
    come_value2_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "CVALUE"))));
    __dec_obj191=come_value2_478->c_value;
    come_value2_478->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_474));
    /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=come_value2_478->type;
    come_value2_478->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_468));
    come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_478->type->mStatic=(_Bool)0;
    come_value2_478->var=((void*)0);
    if(    result_type_468->mHeap) {
        append_object_to_right_values2(come_value2_478,(struct sType*)come_increment_ref_count(result_type_468),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_478->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_478));
    __result322__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_450,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_451,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_461,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_462 = come_decrement_ref_count2(type_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_463,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_466 = come_decrement_ref_count2(generics_fun_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_469,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_474,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result322__;
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value589 = (void*)0;
struct sNullReturnValue* __result323__;
    ((struct sNodeBase*)(__right_value589=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value589,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value590=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_480;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
char* var_name_482;
void* __right_value597 = (void*)0;
struct sType* result_type_483;
void* __right_value598 = (void*)0;
struct sType* result_type2_484;
struct sType* left_type_485;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value2_486;
char* __dec_obj194;
struct sType* __dec_obj195;
    if(    info->come_fun) {
        come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "CVALUE"))));
        buf_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "buffer"))));
        static int num_481=0;
        num_481++;
        var_name_482=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value595=int_to_string(num_481)))));
        /* U11 */__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_483=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_484=(struct sType*)come_increment_ref_count(solve_generics(result_type_483,info->generics_type,info));
        left_type_485=(struct sType*)come_increment_ref_count(result_type2_484);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value599=make_define_var(left_type_485,var_name_482,(_Bool)0,info))));
        /* U11 */__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_482,((char*)(__right_value600=make_type_name_string(left_type_485,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "CVALUE"))));
        __dec_obj194=come_value2_486->c_value;
        come_value2_486->c_value=(char*)come_increment_ref_count(var_name_482);
        /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj195=come_value2_486->type;
        come_value2_486->type=(struct sType*)come_increment_ref_count(result_type2_484);
        come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_486->type->mStatic=(_Bool)0;
        come_value2_486->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_486));
        /*i*/come_call_finalizer3(come_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value607 = (void*)0;
struct sNode* __result327__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value604=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "sNullReturnValue")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result327__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value607=_inf_value2));
    /*g*/come_call_finalizer3(__right_value604,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value607) { __right_value607 = come_decrement_ref_count2(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj196;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj196=self->sname;
            /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result325__;
void* __right_value605 = (void*)0;
struct sNullReturnValue* result_487;
void* __right_value606 = (void*)0;
char* __dec_obj197;
struct sNullReturnValue* __result326__;
    if(    self==(void*)0) {
        __result325__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    result_487=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "sNullReturnValue"));
    if(    self!=((void*)0)) {
        result_487->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_487->sname;
        result_487->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_487->sline_real=self->sline_real;
    }
    __result326__ = gComeFunResultObject = __result_obj__ = result_487;
    /*i*/come_call_finalizer3(result_487,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value608 = (void*)0;
struct sNullReturnValueOfException* __result328__;
    ((struct sNodeBase*)(__right_value608=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value608,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value609 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value609=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct buffer* buf_489;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
char* var_name_491;
void* __right_value616 = (void*)0;
struct sType* result_type_492;
void* __right_value617 = (void*)0;
struct sType* result_type2_493;
struct sType* __dec_obj199;
void* __right_value618 = (void*)0;
struct sType* left_type_494;
_Bool __result330__;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct CVALUE* come_value2_495;
char* __dec_obj200;
struct sType* __dec_obj201;
    if(    info->come_fun) {
        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "CVALUE"))));
        buf_489=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "buffer"))));
        static int num_490=0;
        num_490++;
        var_name_491=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value614=int_to_string(num_490)))));
        /* U11 */__right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_492=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_493=(struct sType*)come_increment_ref_count(solve_generics(result_type_492,info->generics_type,info));
        if(        result_type2_493->mNoSolvedGenericsType->v1) {
            __dec_obj199=result_type2_493;
            result_type2_493=(struct sType*)come_increment_ref_count(result_type2_493->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_494=(struct sType*)come_increment_ref_count(sType_clone(list$1sTypephp_operator_load_element(result_type2_493->mGenericsTypes,0)));
        if(        left_type_494==((void*)0)||string_operator_not_equals(result_type2_493->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result330__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_491 = come_decrement_ref_count2(var_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value619=make_define_var(left_type_494,var_name_491,(_Bool)0,info))));
        /* U11 */__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_491,((char*)(__right_value620=make_type_name_string(left_type_494,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 896, "CVALUE"))));
        __dec_obj200=come_value2_495->c_value;
        come_value2_495->c_value=(char*)come_increment_ref_count(var_name_491);
        /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value2_495->type;
        come_value2_495->type=(struct sType*)come_increment_ref_count(left_type_494);
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_495->type->mStatic=(_Bool)0;
        come_value2_495->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_495));
        /*i*/come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_489,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_491 = come_decrement_ref_count2(var_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_492,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value627 = (void*)0;
struct sNode* __result333__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 913, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value624=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 913, "sNullReturnValueOfException")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result333__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value627=_inf_value3));
    /*g*/come_call_finalizer3(__right_value624,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value627) { __right_value627 = come_decrement_ref_count2(__right_value627, ((struct sNode*)__right_value627)->finalize, ((struct sNode*)__right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj202;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj202=self->sname;
            /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result331__;
void* __right_value625 = (void*)0;
struct sNullReturnValueOfException* result_496;
void* __right_value626 = (void*)0;
char* __dec_obj203;
struct sNullReturnValueOfException* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_496=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "sNullReturnValueOfException"));
    if(    self!=((void*)0)) {
        result_496->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj203=result_496->sname;
        result_496->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_496->sline_real=self->sline_real;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_496;
    /*i*/come_call_finalizer3(result_496,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value628 = (void*)0;
struct sType* __dec_obj204;
struct sNullValue* __result334__;
    ((struct sNodeBase*)(__right_value628=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value628,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj204=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value629 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value629=__builtin_string("sNullValue")));
    /* U11 */__right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct buffer* buf_498;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
char* var_name_500;
struct sType* left_type_501;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct CVALUE* come_value2_502;
char* __dec_obj207;
struct sType* __dec_obj208;
_Bool __result336__;
    come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 932, "CVALUE"))));
    buf_498=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 934, "buffer"))));
    static int num_499=0;
    num_499++;
    var_name_500=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value634=int_to_string(num_499)))));
    /* U11 */__right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_501=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value636=make_define_var(left_type_501,var_name_500,(_Bool)0,info))));
    /* U11 */__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_500,((char*)(__right_value637=make_type_name_string(left_type_501,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    /* U11 */__right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 946, "CVALUE"))));
    __dec_obj207=come_value2_502->c_value;
    come_value2_502->c_value=(char*)come_increment_ref_count(var_name_500);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=come_value2_502->type;
    come_value2_502->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_502->type->mStatic=(_Bool)0;
    come_value2_502->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_502));
    __result336__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_500 = come_decrement_ref_count2(var_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result336__;
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value645 = (void*)0;
struct sNode* __result339__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 962, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value641=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 962, "sNullValue")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result339__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value645=_inf_value4));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value641,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value645) { __right_value645 = come_decrement_ref_count2(__right_value645, ((struct sNode*)__right_value645)->finalize, ((struct sNode*)__right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj209;
struct sType* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj210=self->type;
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result337__;
void* __right_value642 = (void*)0;
struct sNullValue* result_503;
void* __right_value643 = (void*)0;
char* __dec_obj211;
void* __right_value644 = (void*)0;
struct sType* __dec_obj212;
struct sNullValue* __result338__;
    if(    self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_503=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "sNullValue"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_503->sname;
        result_503->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj212=result_503->type;
        result_503->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_503;
    /*i*/come_call_finalizer3(result_503,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
struct list$1sNodeph* __dec_obj213;
struct sNoneNode* __result340__;
    ((struct sNodeBase*)(__right_value646=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value646,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj213,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value647 = (void*)0;
char* __result341__;
    __result341__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value647=__builtin_string("sNoneNode")));
    /* U11 */__right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_504;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sTypeph* tuple_types_505;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1CVALUEph* tuple_values_506;
int i_507;
struct list$1sNodeph* o2_saved_508;
struct sNode* it_509;
_Bool Value_510;
_Bool __result342__;
void* __right_value652 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* string_type_512;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* type_513;
struct list$1sTypeph* o2_saved_514;
struct sType* it_515;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct CVALUE* obj_value_516;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct buffer* num_string_517;
void* __right_value666 = (void*)0;
struct sType* type2_518;
void* __right_value667 = (void*)0;
char* type_name_519;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
char* __dec_obj216;
void* __right_value670 = (void*)0;
struct sType* type3_520;
void* __right_value671 = (void*)0;
struct sType* __dec_obj217;
void* __right_value672 = (void*)0;
struct sType* obj_type_521;
char* fun_name_522;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
char* generics_fun_name_523;
struct sFun* fun_524;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* __dec_obj218;
_Bool __result343__;
void* __right_value678 = (void*)0;
struct sType* result_type_525;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1CVALUEph* come_params_526;
struct list$1CVALUEph* o2_saved_527;
struct CVALUE* it_528;
void* __right_value681 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct buffer* buf_530;
int j_531;
struct list$1CVALUEph* o2_saved_532;
struct CVALUE* it_533;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct CVALUE* come_value2_534;
void* __right_value686 = (void*)0;
char* __dec_obj219;
void* __right_value687 = (void*)0;
struct sType* __dec_obj220;
_Bool __result344__;
    tuple_elements_504=self->tuple_elements;
    tuple_types_505=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 982, "list$1sTypeph"))));
    tuple_values_506=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 983, "list$1CVALUEph"))));
    i_507=0;
    for(    o2_saved_508=(tuple_elements_504),it_509=list$1sNodeph_begin((o2_saved_508));    !list$1sNodeph_end((o2_saved_508));    it_509=list$1sNodeph_next((o2_saved_508))    ){
        Value_510=node_compile(it_509,info);
        if(        !Value_510) {
            __result342__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_505,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result342__;
        }
        else {
        }
        come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_506,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_511)));
        list$1sTypeph_push_back(tuple_types_505,(struct sType*)come_increment_ref_count(sType_clone(come_value_511->type)));
        if(        i_507==1) {
            string_type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 998, "sType")),"char*",(_Bool)0,info));
            string_type_512->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value657=xsprintf("invalid none type"))),string_type_512,come_value_511->type,come_value_511,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(string_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_507++;
        /*i*/come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_513=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1006, "sType")),((char*)(__right_value659=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_505)))),(_Bool)0,info));
    /* U11 */__right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_514=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_505)),it_515=list$1sTypeph_begin((o2_saved_514));    !list$1sTypeph_end((o2_saved_514));    it_515=list$1sTypeph_next((o2_saved_514))    ){
        list$1sTypeph_push_back(type_513->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_515)));
    }
    /*i*/come_call_finalizer3(o2_saved_514,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1012, "CVALUE"))));
    num_string_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1014, "buffer"))));
    buffer_append_str(num_string_517,"1");
    type2_518=(struct sType*)come_increment_ref_count(solve_generics(type_513,type_513,info));
    type_name_519=(char*)come_increment_ref_count(make_type_name_string(type2_518,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj216=obj_value_516->c_value;
    obj_value_516->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_519,type_name_519,((char*)(__right_value668=buffer_to_string(num_string_517))),info->sname,info->sline,type_name_519));
    /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_520=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    type3_520->mPointerNum++;
    type3_520->mHeap=(_Bool)1;
    type2_518->mHeap=(_Bool)1;
    __dec_obj217=obj_value_516->type;
    obj_value_516->type=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_516->type->mPointerNum++;
    obj_value_516->var=((void*)0);
    append_object_to_right_values2(obj_value_516,(struct sType*)come_increment_ref_count(type3_520),info,(_Bool)0);
    obj_type_521=(struct sType*)come_increment_ref_count(sType_clone(type2_518));
    fun_name_522="initialize";
    generics_fun_name_523=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value674=make_generics_function(obj_type_521,(char*)come_increment_ref_count(__builtin_string(fun_name_522)),info,(_Bool)1)))));
    /* U11 */__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_524=map$2charphsFunph_at(info->funcs,generics_fun_name_523,((void*)0));
    if(    fun_524==((void*)0)) {
        __dec_obj218=generics_fun_name_523;
        generics_fun_name_523=(char*)come_increment_ref_count(create_method_name(obj_type_521,(_Bool)0,((char*)(__right_value676=__builtin_string(fun_name_522))),info,(_Bool)1));
        /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_524=map$2charphsFunph_at(info->funcs,generics_fun_name_523,((void*)0));
        if(        fun_524==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_523,info->come_fun->mName);
            __result343__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_505,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_519 = come_decrement_ref_count2(type_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_520,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_523 = come_decrement_ref_count2(generics_fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result343__;
        }
    }
    result_type_525=(struct sType*)come_increment_ref_count(sType_clone(fun_524->mResultType));
    result_type_525->mStatic=(_Bool)0;
    come_params_526=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1055, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_524->mParamTypes,0), "06str.c", 1057, 15))->mHeap&&obj_value_516->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_524->mParamTypes,0), "06str.c", 1058, 16)),obj_value_516->type,obj_value_516,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_526,(struct CVALUE*)come_increment_ref_count(obj_value_516));
    i_507=1;
    for(    o2_saved_527=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_506)),it_528=list$1CVALUEph_begin((o2_saved_527));    !list$1CVALUEph_end((o2_saved_527));    it_528=list$1CVALUEph_next((o2_saved_527))    ){
        come_value_529=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_528));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_524->mParamTypes,i_507), "06str.c", 1066, 17))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_524->mParamTypes,i_507), "06str.c", 1066, 18))->mHeap&&come_value_529->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_524->mParamTypes,i_507), "06str.c", 1067, 19)),come_value_529->type,come_value_529,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_526,(struct CVALUE*)come_increment_ref_count(come_value_529));
        i_507++;
        /*i*/come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_527,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1074, "buffer"))));
    buffer_append_str(buf_530,generics_fun_name_523);
    buffer_append_str(buf_530,"(");
    j_531=0;
    for(    o2_saved_532=(struct list$1CVALUEph*)come_increment_ref_count((come_params_526)),it_533=list$1CVALUEph_begin((o2_saved_532));    !list$1CVALUEph_end((o2_saved_532));    it_533=list$1CVALUEph_next((o2_saved_532))    ){
        buffer_append_str(buf_530,it_533->c_value);
        if(        j_531!=list$1CVALUEph_length(come_params_526)-1) {
            buffer_append_str(buf_530,",");
        }
        j_531++;
    }
    /*i*/come_call_finalizer3(o2_saved_532,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_530,")");
    come_value2_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1091, "CVALUE"))));
    __dec_obj219=come_value2_534->c_value;
    come_value2_534->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
    /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=come_value2_534->type;
    come_value2_534->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_525));
    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_534->type->mStatic=(_Bool)0;
    come_value2_534->var=((void*)0);
    if(    result_type_525->mHeap) {
        append_object_to_right_values2(come_value2_534,(struct sType*)come_increment_ref_count(result_type_525),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_534->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
    __result344__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_505,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_518,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_519 = come_decrement_ref_count2(type_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_520,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_523 = come_decrement_ref_count2(generics_fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result344__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value688 = (void*)0;
struct list$1sNodeph* __dec_obj221;
struct list$1sNodeph* __dec_obj222;
struct sMapNode* __result345__;
    ((struct sNodeBase*)(__right_value688=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value688,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj221=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj221,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj222=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value689 = (void*)0;
char* __result346__;
    __result346__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value689=__builtin_string("sMapNode")));
    /* U11 */__right_value689 = come_decrement_ref_count2(__right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_535;
struct list$1sNodeph* map_elements_536;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1CVALUEph* key_params_537;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct list$1CVALUEph* element_params_538;
struct sType* map_key_type_539;
struct sType* map_element_type_540;
int i_541;
struct sNode* key_elements_542;
struct sNode* elements_546;
void* __right_value694 = (void*)0;
_Bool _if_conditional3;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct sNode* value_node_547;
struct sNode* exp_548;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_549;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj226;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_550;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value715 = (void*)0;
struct sNode* __dec_obj228;
_Bool Value_551;
_Bool __result349__;
void* __right_value716 = (void*)0;
struct CVALUE* come_value_552;
void* __right_value717 = (void*)0;
struct sType* __dec_obj229;
_Bool Value_553;
_Bool __result350__;
void* __right_value718 = (void*)0;
struct CVALUE* come_value_554;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* __dec_obj230;
void* __right_value721 = (void*)0;
_Bool _if_conditional4;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* value_node_555;
struct sNode* exp2_556;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_557;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_558;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value742 = (void*)0;
struct sNode* __dec_obj233;
_Bool Value_559;
_Bool __result351__;
void* __right_value743 = (void*)0;
struct CVALUE* come_value2_560;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sType* __dec_obj234;
_Bool Value_561;
_Bool __result352__;
void* __right_value746 = (void*)0;
struct CVALUE* come_value2_562;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sType* __dec_obj235;
void* __right_value749 = (void*)0;
struct sType* key_type_values_564;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
char* var_name_565;
void* __right_value752 = (void*)0;
struct sVar* var__566;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sType* element_type_values_567;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
char* var_name2_568;
void* __right_value757 = (void*)0;
struct sVar* var2__569;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct buffer* source_570;
int i_571;
struct CVALUE* key_param_572;
struct CVALUE* element_param_573;
void* __right_value761 = (void*)0;
char* c_value_574;
void* __right_value762 = (void*)0;
char* c_value_575;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sType* map_type_576;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sType* obj_type_577;
char* fun_name_578;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
char* generics_fun_name_579;
struct sFun* fun_580;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
char* __dec_obj236;
_Bool __result353__;
void* __right_value773 = (void*)0;
struct sType* result_type_581;
struct sType* type_582;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct CVALUE* obj_value_583;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct buffer* num_string_584;
void* __right_value778 = (void*)0;
struct sType* type2_585;
void* __right_value779 = (void*)0;
char* type_name_586;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
char* __dec_obj237;
void* __right_value782 = (void*)0;
struct sType* type3_587;
void* __right_value783 = (void*)0;
struct sType* __dec_obj238;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1CVALUEph* come_params_588;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct CVALUE* come_value2_589;
void* __right_value788 = (void*)0;
char* __dec_obj239;
struct sType* __dec_obj240;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct CVALUE* come_value3_590;
void* __right_value791 = (void*)0;
char* __dec_obj241;
struct sType* __dec_obj242;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct CVALUE* come_value4_591;
void* __right_value794 = (void*)0;
char* __dec_obj243;
struct sType* __dec_obj244;
int j_592;
struct list$1CVALUEph* o2_saved_593;
struct CVALUE* it_594;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct CVALUE* come_value5_595;
void* __right_value797 = (void*)0;
char* __dec_obj245;
void* __right_value798 = (void*)0;
struct sType* __dec_obj246;
_Bool __result354__;
exp_548 = (void*)0;
exp2_556 = (void*)0;
    map_key_elements_535=self->map_key_elements;
    map_elements_536=self->map_elements;
    key_params_537=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1131, "list$1CVALUEph"))));
    element_params_538=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1132, "list$1CVALUEph"))));
    map_key_type_539=((void*)0);
    map_element_type_540=((void*)0);
    for(    i_541=0;    i_541<list$1sNodeph_length(map_key_elements_535);    i_541++    ){
        key_elements_542=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_535,i_541), "06str.c", 1137, 20));
        elements_546=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_536,i_541), "06str.c", 1138, 21));
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value694=key_elements_542->kind(key_elements_542->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_547=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value695=xsprintf("Value"))),info));
            /* U11 */__right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_549=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1145, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_549,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1146, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_547))));
                __dec_obj226=exp_548;
                exp_548=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value702=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_547),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_549),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_549,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_550=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1151, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_550,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1152, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_548))));
                list$1tuple2$2charphsNodephph_add(params_550,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1153, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_541,info)))));
                __dec_obj227=exp_548;
                exp_548=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value713=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_548),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_550),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value713 = come_decrement_ref_count2(__right_value713, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj228=exp_548;
                exp_548=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_548,info));
                /* U1 */ if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_550,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_551=node_compile(exp_548,info);
            if(            !Value_551) {
                __result349__ = (_Bool)0;
                if(value_node_547) { value_node_547 = come_decrement_ref_count2(value_node_547, ((struct sNode*)value_node_547)->finalize, ((struct sNode*)value_node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_548) { exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result349__;
            }
            else {
            }
            come_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(key_params_537,(struct CVALUE*)come_increment_ref_count(come_value_552));
            __dec_obj229=map_key_type_539;
            map_key_type_539=(struct sType*)come_increment_ref_count(sType_clone(come_value_552->type));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_547) { value_node_547 = come_decrement_ref_count2(value_node_547, ((struct sNode*)value_node_547)->finalize, ((struct sNode*)value_node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_548) { exp_548 = come_decrement_ref_count2(exp_548, ((struct sNode*)exp_548)->finalize, ((struct sNode*)exp_548)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_553=node_compile(key_elements_542,info);
            if(            !Value_553) {
                __result350__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_539) {
                check_assign_type(((char*)(__right_value719=xsprintf("invalid map key type"))),map_key_type_539,come_value_554->type,come_value_554,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(key_params_537,(struct CVALUE*)come_increment_ref_count(come_value_554));
            __dec_obj230=map_key_type_539;
            map_key_type_539=(struct sType*)come_increment_ref_count(sType_clone(come_value_554->type));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional4=(string_operator_equals(((char*)(__right_value721=elements_546->kind(elements_546->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            value_node_555=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value722=xsprintf("Value"))),info));
            /* U11 */__right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_557=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1189, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_557,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1190, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_555))));
                __dec_obj231=exp2_556;
                exp2_556=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value729=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_555),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_557),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_557,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_558=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1195, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_558,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1196, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_556))));
                list$1tuple2$2charphsNodephph_add(params_558,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1197, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_541,info)))));
                __dec_obj232=exp2_556;
                exp2_556=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value740=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_556),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_558),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj233=exp2_556;
                exp2_556=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_556,info));
                /* U1 */ if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_558,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_559=node_compile(exp2_556,info);
            if(            !Value_559) {
                __result351__ = (_Bool)0;
                if(value_node_555) { value_node_555 = come_decrement_ref_count2(value_node_555, ((struct sNode*)value_node_555)->finalize, ((struct sNode*)value_node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_556) { exp2_556 = come_decrement_ref_count2(exp2_556, ((struct sNode*)exp2_556)->finalize, ((struct sNode*)exp2_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            come_value2_560=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_540) {
                check_assign_type(((char*)(__right_value744=xsprintf("invalid map element type"))),map_element_type_540,come_value2_560->type,come_value2_560,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_538,(struct CVALUE*)come_increment_ref_count(come_value2_560));
            __dec_obj234=map_element_type_540;
            map_element_type_540=(struct sType*)come_increment_ref_count(sType_clone(come_value2_560->type));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_555) { value_node_555 = come_decrement_ref_count2(value_node_555, ((struct sNode*)value_node_555)->finalize, ((struct sNode*)value_node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_556) { exp2_556 = come_decrement_ref_count2(exp2_556, ((struct sNode*)exp2_556)->finalize, ((struct sNode*)exp2_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_561=node_compile(elements_546,info);
            if(            !Value_561) {
                __result352__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result352__;
            }
            else {
            }
            come_value2_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_540) {
                check_assign_type(((char*)(__right_value747=xsprintf("invalid map element type"))),map_element_type_540,come_value2_562->type,come_value2_562,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_538,(struct CVALUE*)come_increment_ref_count(come_value2_562));
            __dec_obj235=map_element_type_540;
            map_element_type_540=(struct sType*)come_increment_ref_count(sType_clone(come_value2_562->type));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value2_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_563=0;
    key_type_values_564=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_539));
    list$1sNodeph_push_back(key_type_values_564->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_537),info)));
    key_type_values_564->mHeap=(_Bool)0;
    var_name_565=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_563));
    add_variable_to_table(var_name_565,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_564)),info);
    var__566=get_variable_from_table(info->lv_table,var_name_565);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value753=make_define_var(key_type_values_564,var__566->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_567=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_540));
    list$1sNodeph_push_back(element_type_values_567->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_538),info)));
    element_type_values_567->mHeap=(_Bool)0;
    var_name2_568=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_563));
    add_variable_to_table(var_name2_568,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_567)),info);
    var2__569=get_variable_from_table(info->lv_table,var_name2_568);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value758=make_define_var(element_type_values_567,var2__569->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_570=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1258, "buffer"))));
    buffer_append_str(source_570,"(");
    for(    i_571=0;    i_571<list$1CVALUEph_length(key_params_537);    i_571++    ){
        key_param_572=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_537,i_571), "06str.c", 1263, 22));
        element_param_573=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_538,i_571), "06str.c", 1264, 23));
        if(        map_key_type_539->mHeap) {
            c_value_574=(char*)come_increment_ref_count(increment_ref_count_object(key_param_572->type,key_param_572->c_value,info));
            buffer_append_format(source_570,"%s[%d]=%s,\n",var__566->mCValueName,i_571,c_value_574);
            /* U13 */c_value_574 = come_decrement_ref_count2(c_value_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_570,"%s[%d]=%s,\n",var__566->mCValueName,i_571,key_param_572->c_value);
        }
        if(        map_element_type_540->mHeap) {
            c_value_575=(char*)come_increment_ref_count(increment_ref_count_object(element_param_573->type,element_param_573->c_value,info));
            buffer_append_format(source_570,"%s[%d]=%s,\n",var2__569->mCValueName,i_571,c_value_575);
            /* U13 */c_value_575 = come_decrement_ref_count2(c_value_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_570,"%s[%d]=%s,\n",var2__569->mCValueName,i_571,element_param_573->c_value);
        }
    }
    map_type_576=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1283, "sType")),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_576->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_key_type_539)));
    list$1sTypeph_push_back(map_type_576->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_element_type_540)));
    obj_type_577=(struct sType*)come_increment_ref_count(sType_clone(map_type_576));
    fun_name_578="initialize_with_values";
    generics_fun_name_579=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value769=make_generics_function(obj_type_577,(char*)come_increment_ref_count(__builtin_string(fun_name_578)),info,(_Bool)1)))));
    /* U11 */__right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_580=map$2charphsFunph_at(info->funcs,generics_fun_name_579,((void*)0));
    if(    fun_580==((void*)0)) {
        __dec_obj236=generics_fun_name_579;
        generics_fun_name_579=(char*)come_increment_ref_count(create_method_name(obj_type_577,(_Bool)0,((char*)(__right_value771=__builtin_string(fun_name_578))),info,(_Bool)1));
        /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_580=map$2charphsFunph_at(info->funcs,generics_fun_name_579,((void*)0));
        if(        fun_580==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_579,info->come_fun->mName);
            __result353__ = (_Bool)1;
            /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_type_values_564,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_565 = come_decrement_ref_count2(var_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_values_567,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name2_568 = come_decrement_ref_count2(var_name2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_570,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_579 = come_decrement_ref_count2(generics_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result353__;
        }
    }
    result_type_581=(struct sType*)come_increment_ref_count(sType_clone(fun_580->mResultType));
    result_type_581->mStatic=(_Bool)0;
    type_582=map_type_576;
    obj_value_583=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1310, "CVALUE"))));
    num_string_584=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312, "buffer"))));
    buffer_append_str(num_string_584,"1");
    type2_585=(struct sType*)come_increment_ref_count(solve_generics(type_582,type_582,info));
    type_name_586=(char*)come_increment_ref_count(make_type_name_string(type2_585,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj237=obj_value_583->c_value;
    obj_value_583->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_586,type_name_586,((char*)(__right_value780=buffer_to_string(num_string_584))),info->sname,info->sline,type_name_586));
    /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_587=(struct sType*)come_increment_ref_count(sType_clone(type2_585));
    type3_587->mPointerNum++;
    type3_587->mHeap=(_Bool)1;
    type2_585->mHeap=(_Bool)1;
    __dec_obj238=obj_value_583->type;
    obj_value_583->type=(struct sType*)come_increment_ref_count(sType_clone(type2_585));
    come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_583->type->mPointerNum++;
    obj_value_583->var=((void*)0);
    append_object_to_right_values2(obj_value_583,(struct sType*)come_increment_ref_count(type3_587),info,(_Bool)0);
    come_params_588=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1332, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_580->mParamTypes,0), "06str.c", 1334, 24))->mHeap&&obj_value_583->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_580->mParamTypes,0), "06str.c", 1335, 25)),obj_value_583->type,obj_value_583,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(obj_value_583));
    come_value2_589=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1339, "CVALUE"))));
    __dec_obj239=come_value2_589->c_value;
    come_value2_589->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_537)));
    /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=come_value2_589->type;
    come_value2_589->type=((void*)0);
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_589->var=((void*)0);
    list$1CVALUEph_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(come_value2_589));
    come_value3_590=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1347, "CVALUE"))));
    __dec_obj241=come_value3_590->c_value;
    come_value3_590->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__566->mCValueName));
    /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=come_value3_590->type;
    come_value3_590->type=((void*)0);
    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_590->var=((void*)0);
    list$1CVALUEph_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(come_value3_590));
    come_value4_591=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1355, "CVALUE"))));
    __dec_obj243=come_value4_591->c_value;
    come_value4_591->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__569->mCValueName));
    /*G*/ __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value4_591->type;
    come_value4_591->type=((void*)0);
    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_591->var=((void*)0);
    list$1CVALUEph_push_back(come_params_588,(struct CVALUE*)come_increment_ref_count(come_value4_591));
    buffer_append_str(source_570,generics_fun_name_579);
    buffer_append_str(source_570,"(");
    j_592=0;
    for(    o2_saved_593=(struct list$1CVALUEph*)come_increment_ref_count((come_params_588)),it_594=list$1CVALUEph_begin((o2_saved_593));    !list$1CVALUEph_end((o2_saved_593));    it_594=list$1CVALUEph_next((o2_saved_593))    ){
        buffer_append_str(source_570,it_594->c_value);
        if(        j_592!=list$1CVALUEph_length(come_params_588)-1) {
            buffer_append_str(source_570,",");
        }
        j_592++;
    }
    /*i*/come_call_finalizer3(o2_saved_593,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_570,")");
    buffer_append_str(source_570,")");
    come_value5_595=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1381, "CVALUE"))));
    __dec_obj245=come_value5_595->c_value;
    come_value5_595->c_value=(char*)come_increment_ref_count(buffer_to_string(source_570));
    /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj246=come_value5_595->type;
    come_value5_595->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_581));
    come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_595->type->mStatic=(_Bool)0;
    come_value5_595->var=((void*)0);
    if(    result_type_581->mHeap) {
        append_object_to_right_values2(come_value5_595,(struct sType*)come_increment_ref_count(result_type_581),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_595->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_595));
    __result354__ = (_Bool)1;
    /*i*/come_call_finalizer3(key_params_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_params_538,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_element_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(key_type_values_564,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_565 = come_decrement_ref_count2(var_name_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_values_567,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name2_568 = come_decrement_ref_count2(var_name2_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_570,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_579 = come_decrement_ref_count2(generics_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_585,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_586 = come_decrement_ref_count2(type_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_587,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_588,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value5_595,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result354__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_543;
int i_544;
struct sNode* __result347__;
struct sNode* default_value_545;
struct sNode* __result348__;
default_value_545 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_543=self->head;
    i_544=0;
    while(it_543!=((void*)0)) {
        if(        position==i_544) {
            __result347__ = gComeFunResultObject = __result_obj__ = it_543->item;
            gComeFunResultObject = (void*)0;
            return __result347__;
        }
        it_543=it_543->next;
        i_544++;
    }
    memset(&default_value_545,0,sizeof(struct sNode*));
    __result348__ = gComeFunResultObject = __result_obj__ = default_value_545;
    if(default_value_545) { default_value_545 = come_decrement_ref_count2(default_value_545, ((struct sNode*)default_value_545)->finalize, ((struct sNode*)default_value_545)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result348__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_596;
int sline_597;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct list$1sNodeph* exps_598;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct buffer* value_599;
char* head_of_last_line_600;
int len_601;
void* __right_value803 = (void*)0;
struct sNode* exp_602;
int sline2_603;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value811 = (void*)0;
struct sNode* __result357__;
int sline_real_605;
int sline_606;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* value_607;
char* p_608;
int sline_609;
int sline2_610;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value820 = (void*)0;
struct sNode* __result360__;
int sline_real_612;
int sline_613;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct buffer* value_614;
unsigned long  int size_615;
char* p_616;
int sline_617;
int len_618;
int sline2_619;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value828 = (void*)0;
struct sNode* __result363__;
int sline_real_621;
int sline_622;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct buffer* buf_623;
_Bool global_624;
_Bool ignore_case_625;
_Bool catch_exception_626;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value837 = (void*)0;
struct sNode* obj_627;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_629;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct buffer* method_block_630;
int method_block_sline_631;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1sTypeph* method_generics_types_632;
void* __right_value879 = (void*)0;
struct sNode* node_633;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sNode* __dec_obj265;
struct sNode* __result366__;
int sline_real_634;
int sline_635;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct buffer* value_636;
char* p_637;
int sline_638;
int len_639;
int sline2_640;
_Bool global_641;
_Bool ignore_case_642;
_Bool catch_exception_643;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value890 = (void*)0;
struct sNode* obj_644;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_646;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct buffer* method_block_647;
int method_block_sline_648;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct list$1sTypeph* method_generics_types_649;
void* __right_value932 = (void*)0;
struct sNode* node_650;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* __dec_obj270;
struct sNode* __result369__;
int sline_real_651;
int c_652;
int n_653;
int n_654;
unsigned long long int n_657;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value939 = (void*)0;
struct sNode* __result372__;
int sline_real_659;
int c_660;
_Bool quote_661;
int n_662;
int n_663;
unsigned long long int n_666;
unsigned char p2_667;
int size_668;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value944 = (void*)0;
struct sNode* __result375__;
int sline_real_671;
int sline_672;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct buffer* value_673;
char* p_674;
int sline_675;
int sline2_676;
int len_677;
void* __right_value947 = (void*)0;
int* wstr_678;
char* str_679;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value953 = (void*)0;
struct sNode* __result378__;
int sline_real_681;
int sline_682;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct list$1sNodeph* exps_683;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* value_684;
char* p_685;
int sline_686;
int len_687;
void* __right_value958 = (void*)0;
struct sNode* exp_688;
int sline2_689;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value966 = (void*)0;
struct sNode* __result381__;
int sline_real_691;
char* p_692;
_Bool no_comma_693;
void* __right_value967 = (void*)0;
struct sNode* node_694;
char* p2_695;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct buffer* first_element_source_696;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1sNodeph* list_elements_697;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct list$1sNodeph* map_keys_698;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct list$1sNodeph* map_elements_699;
_Bool no_comma_700;
void* __right_value976 = (void*)0;
struct sNode* node2_701;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value983 = (void*)0;
struct sNode* __result384__;
_Bool no_comma_703;
void* __right_value984 = (void*)0;
struct sNode* node2_704;
void* __right_value985 = (void*)0;
struct sNode* node3_705;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value992 = (void*)0;
struct sNode* __result387__;
_Bool no_comma_707;
void* __right_value993 = (void*)0;
struct sNode* node2_708;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value999 = (void*)0;
struct sNode* __result390__;
void* __right_value1000 = (void*)0;
struct sNode* node_710;
struct sNode* __result391__;
struct sNode* __result392__;
memset(&c_652, 0, sizeof(int));
memset(&c_660, 0, sizeof(int));
memset(&quote_661, 0, sizeof(_Bool));
memset(&size_668, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_596=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_597=info->sline;
        exps_598=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1411, "list$1sNodeph"))));
        value_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1412, "buffer"))));
        head_of_last_line_600=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_600) {
                    buffer_trim(value_599,info->p-head_of_last_line_600);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_599,37);
                buffer_append_char(value_599,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_599,92);
                buffer_append_char(value_599,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_599,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_601=0;
                    while(xisdigit(*info->p)&&len_601<3) {
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        len_601++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_599,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_602=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_598,(struct sNode*)come_increment_ref_count(exp_602));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_599,"%s");
                    if(exp_602) { exp_602 = come_decrement_ref_count2(exp_602, ((struct sNode*)exp_602)->finalize, ((struct sNode*)exp_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_599,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_603=info->sline;
                info->sline=sline_597;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_599,92);
                    buffer_append_char(value_599,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_600=info->p;
                }
                else {
                    buffer_append_char(value_599,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_596;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1562, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value806=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1562, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_599)),(struct list$1sNodeph*)come_increment_ref_count(exps_598),sline_597,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value811=_inf_value5));
        /*i*/come_call_finalizer3(exps_598,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value806,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value811) { __right_value811 = come_decrement_ref_count2(__right_value811, ((struct sNode*)__right_value811)->finalize, ((struct sNode*)__right_value811)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result357__;
        /*i*/come_call_finalizer3(exps_598,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_605=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_606=info->sline;
        value_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1572, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_608=info->p;
                sline_609=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_608;
                    info->sline=sline_609;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_607,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_607,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_607,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_610=info->sline;
                info->sline=sline_606;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_610;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_607,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_605;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1625, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value816=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1625, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_607)),sline_606,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=_inf_value6));
        /*i*/come_call_finalizer3(value_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value816,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result360__;
        /*i*/come_call_finalizer3(value_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_612=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_613=info->sline;
        value_614=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1635, "buffer"))));
        size_615=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_614,*info->p);
                info->p++;
                p_616=info->p;
                sline_617=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_616;
                    info->sline=sline_617;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_614,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_618=0;
                    while(xisdigit(*info->p)&&len_618<3) {
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        len_618++;
                    }
                    size_615++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_614,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                    }
                    size_615++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 110:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 116:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 114:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 118:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 102:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 97:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 98:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        case 92:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                        default:
                        buffer_append_char(value_614,*info->p);
                        info->p++;
                        size_615++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_619=info->sline;
                info->sline=sline_613;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_614,*info->p);
                info->p++;
                size_615++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_612;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1762, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value824=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1762, "sBufferNode")),(struct buffer*)come_increment_ref_count(value_614),size_615,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value828=_inf_value7));
        /*i*/come_call_finalizer3(value_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value824,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value828) { __right_value828 = come_decrement_ref_count2(__right_value828, ((struct sNode*)__right_value828)->finalize, ((struct sNode*)__right_value828)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        /*i*/come_call_finalizer3(value_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47) {
        sline_real_621=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_622=info->sline;
        buf_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1771, "buffer"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_623,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_623,*info->p);
                info->p++;
            }
        }
        global_624=(_Bool)0;
        ignore_case_625=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_624=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_625=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_626=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_626=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1815, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value833=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1815, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(buf_623)),sline_622,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_627=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*g*/come_call_finalizer3(__right_value833,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_629=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1817, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1819, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_627))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1820, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_625)?(((struct sNode*)(__right_value844=create_int_node(1,info)))):(((struct sNode*)(__right_value845=create_int_node(0,info)))))))));
        if(__right_value844) { __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value845) { __right_value845 = come_decrement_ref_count2(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1821, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1822, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_624)?(((struct sNode*)(__right_value853=create_int_node(1,info)))):(((struct sNode*)(__right_value854=create_int_node(0,info)))))))));
        if(__right_value853) { __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value854) { __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1823, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1824, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1825, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1826, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_629,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1827, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_630=((void*)0);
        method_block_sline_631=info->sline;
        method_generics_types_632=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1833, "list$1sTypeph"))));
        node_633=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_627),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_629),method_block_630,method_block_sline_631,method_generics_types_632,info));
        if(        !catch_exception_626) {
            __dec_obj265=node_633;
            node_633=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_633)),info));
            /* U1 */ if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_621;
        __result366__ = gComeFunResultObject = __result_obj__ = node_633;
        /*i*/come_call_finalizer3(buf_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_627) { obj_627 = come_decrement_ref_count2(obj_627, ((struct sNode*)obj_627)->finalize, ((struct sNode*)obj_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_629,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result366__;
        /*i*/come_call_finalizer3(buf_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_627) { obj_627 = come_decrement_ref_count2(obj_627, ((struct sNode*)obj_627)->finalize, ((struct sNode*)obj_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_629,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_633) { node_633 = come_decrement_ref_count2(node_633, ((struct sNode*)node_633)->finalize, ((struct sNode*)node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_634=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_635=info->sline;
        value_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1851, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_637=info->p;
                sline_638=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_637;
                    info->sline=sline_638;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_636,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_639=0;
                    while(xisdigit(*info->p)&&len_639<3) {
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        len_639++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_636,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_636,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_640=info->sline;
                info->sline=sline_635;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_636,*info->p);
                info->p++;
            }
        }
        global_641=(_Bool)0;
        ignore_case_642=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_641=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_642=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_643=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_643=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1982, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value886=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1982, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_636)),sline_635,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_644=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value886,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_646=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1984, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1986, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_644))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1987, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_642)?(((struct sNode*)(__right_value897=create_int_node(1,info)))):(((struct sNode*)(__right_value898=create_int_node(0,info)))))))));
        if(__right_value897) { __right_value897 = come_decrement_ref_count2(__right_value897, ((struct sNode*)__right_value897)->finalize, ((struct sNode*)__right_value897)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value898) { __right_value898 = come_decrement_ref_count2(__right_value898, ((struct sNode*)__right_value898)->finalize, ((struct sNode*)__right_value898)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1988, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1989, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_641)?(((struct sNode*)(__right_value906=create_int_node(1,info)))):(((struct sNode*)(__right_value907=create_int_node(0,info)))))))));
        if(__right_value906) { __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1990, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1991, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1992, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1993, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_646,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1994, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_647=((void*)0);
        method_block_sline_648=info->sline;
        method_generics_types_649=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 2000, "list$1sTypeph"))));
        node_650=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_644),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_646),method_block_647,method_block_sline_648,method_generics_types_649,info));
        if(        !catch_exception_643) {
            __dec_obj270=node_650;
            node_650=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_650)),info));
            /* U1 */ if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_634;
        __result369__ = gComeFunResultObject = __result_obj__ = node_650;
        /*i*/come_call_finalizer3(value_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_644) { obj_644 = come_decrement_ref_count2(obj_644, ((struct sNode*)obj_644)->finalize, ((struct sNode*)obj_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_646,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        /*i*/come_call_finalizer3(value_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_644) { obj_644 = come_decrement_ref_count2(obj_644, ((struct sNode*)obj_644)->finalize, ((struct sNode*)obj_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_646,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_650) { node_650 = come_decrement_ref_count2(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_651=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_653=0;
                while(xisdigit(*info->p)) {
                    n_653=n_653*8+*info->p-48;
                    info->p++;
                }
                c_652=n_653;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_652=10;
                    info->p++;
                    break;
                    case 116:
                    c_652=9;
                    info->p++;
                    break;
                    case 114:
                    c_652=13;
                    info->p++;
                    break;
                    case 97:
                    c_652=7;
                    info->p++;
                    break;
                    case 102:
                    c_652=12;
                    info->p++;
                    break;
                    case 118:
                    c_652=11;
                    info->p++;
                    break;
                    case 98:
                    c_652=8;
                    info->p++;
                    break;
                    case 92:
                    c_652=92;
                    info->p++;
                    break;
                    case 48:
                    c_652=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_654=0;
                        while(xisdigit(*info->p)) {
                            n_654=n_654*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_652=n_654;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_655[128];
                        memset(&buf_655, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_655,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_656[2];
                            memset(&buf2_656, 0, sizeof(char)                            *(2)                            );
                            buf2_656[0]=*info->p;
                            buf2_656[1]=0;
                            info->p++;
                            strncat(buf_655,buf2_656,128);
                        }
                        n_657=strtoll(buf_655,((void*)0),0);
                        c_652=n_657;
                    }
                    break;
                    default:
                    c_652=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_652=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_651;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2129, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value936=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2129, "sCharNode")),c_652,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value939=_inf_value10));
            /*g*/come_call_finalizer3(__right_value936,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value939) { __right_value939 = come_decrement_ref_count2(__right_value939, ((struct sNode*)__right_value939)->finalize, ((struct sNode*)__right_value939)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result372__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_659=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_661=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_662=0;
                while(xisdigit(*info->p)) {
                    n_662=n_662*8+*info->p-48;
                    info->p++;
                }
                c_660=n_662;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_660=10;
                    info->p++;
                    break;
                    case 116:
                    c_660=9;
                    info->p++;
                    break;
                    case 114:
                    c_660=13;
                    info->p++;
                    break;
                    case 97:
                    c_660=7;
                    info->p++;
                    break;
                    case 92:
                    c_660=92;
                    info->p++;
                    break;
                    case 48:
                    c_660=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_663=0;
                        while(xisdigit(*info->p)) {
                            n_663=n_663*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_660=n_663;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_664[128];
                        memset(&buf_664, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_664,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_665[2];
                            memset(&buf2_665, 0, sizeof(char)                            *(2)                            );
                            buf2_665[0]=*info->p;
                            buf2_665[1]=0;
                            info->p++;
                            strncat(buf_664,buf2_665,128);
                        }
                        n_666=strtoll(buf_664,((void*)0),0);
                        c_660=n_666;
                    }
                    break;
                    default:
                    c_660=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_661=(_Bool)0;
            p2_667=*(unsigned char*)info->p;
            if(            p2_667>127) {
                char str_669[6+1];
                memset(&str_669, 0, sizeof(char)                *(6+1)                );
                size_668=((p2_667&128)>>7)+((p2_667&64)>>6)+((p2_667&32)>>5)+((p2_667&16)>>4);
                if(                size_668>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_669,info->p,size_668);
                    str_669[size_668]=0;
                    if(                    mbtowc(&c_660,str_669,size_668)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_668;
                    }
                }
            }
            else {
                c_660=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_659;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2271, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value941=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2271, "sWCharNode")),c_660,quote_661,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value944=_inf_value11));
            /*g*/come_call_finalizer3(__right_value941,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result375__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_671=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_672=info->sline;
        value_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2282, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_674=info->p;
                sline_675=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_674;
                    info->sline=sline_675;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_673,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_673,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_673,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_676=info->sline;
                info->sline=sline_672;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_673,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_677=value_673->len;
        wstr_678=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_677+1)), "06str.c", 2333, "int"));
        str_679=value_673->buf;
        if(        mbstowcs(wstr_678,str_679,len_677+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_678[len_677]=0;
        info->sline_real=sline_real_671;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2345, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value949=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2345, "sWStringNode")),(int*)come_increment_ref_count(wstr_678),sline_672,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value953=_inf_value12));
        /*i*/come_call_finalizer3(value_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_678 = come_decrement_ref_count2(wstr_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value949,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value953) { __right_value953 = come_decrement_ref_count2(__right_value953, ((struct sNode*)__right_value953)->finalize, ((struct sNode*)__right_value953)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result378__;
        /*i*/come_call_finalizer3(value_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_678 = come_decrement_ref_count2(wstr_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_681=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_682=info->sline;
        exps_683=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2355, "list$1sNodeph"))));
        value_684=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2356, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_685=info->p;
                sline_686=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_685;
                    info->sline=sline_686;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_684,37);
                buffer_append_char(value_684,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_684,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_687=0;
                    while(xisdigit(*info->p)&&len_687<3) {
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        len_687++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_684,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_688=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_683,(struct sNode*)come_increment_ref_count(exp_688));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_684,"%s");
                    if(exp_688) { exp_688 = come_decrement_ref_count2(exp_688, ((struct sNode*)exp_688)->finalize, ((struct sNode*)exp_688)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_684,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_689=info->sline;
                info->sline=sline_682;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_684,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_681;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2504, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value961=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2504, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_684)),(struct list$1sNodeph*)come_increment_ref_count(exps_683),sline_682,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value966=_inf_value13));
        /*i*/come_call_finalizer3(exps_683,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value961,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value966) { __right_value966 = come_decrement_ref_count2(__right_value966, ((struct sNode*)__right_value966)->finalize, ((struct sNode*)__right_value966)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result381__;
        /*i*/come_call_finalizer3(exps_683,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_691=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_692=info->p;
        no_comma_693=info->no_comma;
        info->no_comma=(_Bool)1;
        node_694=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_693;
        p2_695=info->p;
        first_element_source_696=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2523, "buffer"))));
        buffer_append(first_element_source_696,p_692,p2_695-p_692);
        buffer_append_char(first_element_source_696,0);
        list_elements_697=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2528, "list$1sNodeph"))));
        map_keys_698=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2530, "list$1sNodeph"))));
        map_elements_699=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2531, "list$1sNodeph"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_698,(struct sNode*)come_increment_ref_count(node_694));
            no_comma_700=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_701=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_700;
            list$1sNodeph_push_back(map_elements_699,(struct sNode*)come_increment_ref_count(node2_701));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2554, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value978=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2554, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_698),(struct list$1sNodeph*)come_increment_ref_count(map_elements_699),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value983=_inf_value14));
                if(node2_701) { node2_701 = come_decrement_ref_count2(node2_701, ((struct sNode*)node2_701)->finalize, ((struct sNode*)node2_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_696,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_698,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_699,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value978,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value983) { __right_value983 = come_decrement_ref_count2(__right_value983, ((struct sNode*)__right_value983)->finalize, ((struct sNode*)__right_value983)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_703=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_704=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_703;
                    list$1sNodeph_push_back(map_keys_698,(struct sNode*)come_increment_ref_count(node2_704));
                    expected_next_character(58,info);
                    no_comma_703=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_705=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_703;
                    list$1sNodeph_push_back(map_elements_699,(struct sNode*)come_increment_ref_count(node3_705));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_704) { node2_704 = come_decrement_ref_count2(node2_704, ((struct sNode*)node2_704)->finalize, ((struct sNode*)node2_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_705) { node3_705 = come_decrement_ref_count2(node3_705, ((struct sNode*)node3_705)->finalize, ((struct sNode*)node3_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_704) { node2_704 = come_decrement_ref_count2(node2_704, ((struct sNode*)node2_704)->finalize, ((struct sNode*)node2_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_705) { node3_705 = come_decrement_ref_count2(node3_705, ((struct sNode*)node3_705)->finalize, ((struct sNode*)node3_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2599, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value987=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2599, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_698),(struct list$1sNodeph*)come_increment_ref_count(map_elements_699),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result387__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value992=_inf_value15));
                if(node2_701) { node2_701 = come_decrement_ref_count2(node2_701, ((struct sNode*)node2_701)->finalize, ((struct sNode*)node2_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_696,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_698,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_699,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value987,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value992) { __right_value992 = come_decrement_ref_count2(__right_value992, ((struct sNode*)__right_value992)->finalize, ((struct sNode*)__right_value992)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result387__;
            }
            if(node2_701) { node2_701 = come_decrement_ref_count2(node2_701, ((struct sNode*)node2_701)->finalize, ((struct sNode*)node2_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_697,(struct sNode*)come_increment_ref_count(node_694));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_697,(struct sNode*)come_increment_ref_count(node_694));
            while((_Bool)1) {
                no_comma_707=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_708=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_707;
                list$1sNodeph_push_back(list_elements_697,(struct sNode*)come_increment_ref_count(node2_708));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_708) { node2_708 = come_decrement_ref_count2(node2_708, ((struct sNode*)node2_708)->finalize, ((struct sNode*)node2_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_708) { node2_708 = come_decrement_ref_count2(node2_708, ((struct sNode*)node2_708)->finalize, ((struct sNode*)node2_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_697)>0) {
            info->sline_real=sline_real_691;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2651, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value995=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2651, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_697),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value999=_inf_value16));
            if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(first_element_source_696,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_elements_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_keys_698,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_elements_699,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value995,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value999) { __right_value999 = come_decrement_ref_count2(__right_value999, ((struct sNode*)__right_value999)->finalize, ((struct sNode*)__right_value999)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result390__;
        }
        else {
        }
        if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(first_element_source_696,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(list_elements_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_keys_698,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_elements_699,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_710=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result391__ = gComeFunResultObject = __result_obj__ = node_710;
        if(node_710) { node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        if(node_710) { node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result392__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj257;
struct buffer* __dec_obj258;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj258=self->value;
            come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result361__;
void* __right_value825 = (void*)0;
struct sBufferNode* result_620;
void* __right_value826 = (void*)0;
char* __dec_obj259;
void* __right_value827 = (void*)0;
struct buffer* __dec_obj260;
struct sBufferNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_620=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "sBufferNode"));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_620->sname;
        result_620->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj260=result_620->value;
        result_620->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer3(__dec_obj260,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->size=self->size;
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_620;
    /*i*/come_call_finalizer3(result_620,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj266;
char* __dec_obj267;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj266=self->sname;
            /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj267=self->value;
            /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result367__;
void* __right_value887 = (void*)0;
struct sStrNode* result_645;
void* __right_value888 = (void*)0;
char* __dec_obj268;
void* __right_value889 = (void*)0;
char* __dec_obj269;
struct sStrNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_645=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj268=result_645->sname;
        result_645->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj269=result_645->value;
        result_645->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_645;
    /*i*/come_call_finalizer3(result_645,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj271;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj271=self->sname;
            /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result370__;
void* __right_value937 = (void*)0;
struct sCharNode* result_658;
void* __right_value938 = (void*)0;
char* __dec_obj272;
struct sCharNode* __result371__;
    if(    self==(void*)0) {
        __result370__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_658=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_658->value=self->value;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_658;
    /*i*/come_call_finalizer3(result_658,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj273;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj273=self->sname;
            /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result373__;
void* __right_value942 = (void*)0;
struct sWCharNode* result_670;
void* __right_value943 = (void*)0;
char* __dec_obj274;
struct sWCharNode* __result374__;
    if(    self==(void*)0) {
        __result373__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_670=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(    self!=((void*)0)) {
        result_670->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj274=result_670->sname;
        result_670->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_670->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_670->quote=self->quote;
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_670;
    /*i*/come_call_finalizer3(result_670,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj275;
int* __dec_obj276;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj275=self->sname;
            /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj276=self->value;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result376__;
void* __right_value950 = (void*)0;
struct sWStringNode* result_680;
void* __right_value951 = (void*)0;
char* __dec_obj277;
void* __right_value952 = (void*)0;
int* __dec_obj278;
struct sWStringNode* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_680=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(    self!=((void*)0)) {
        result_680->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_680->sname;
        result_680->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_680->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj278=result_680->value;
        result_680->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_680;
    /*i*/come_call_finalizer3(result_680,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj279;
char* __dec_obj280;
struct list$1sNodeph* __dec_obj281;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj279=self->sname;
            /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj280=self->value;
            /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj281=self->exps;
            come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result379__;
void* __right_value962 = (void*)0;
struct sSStringNode* result_690;
void* __right_value963 = (void*)0;
char* __dec_obj282;
void* __right_value964 = (void*)0;
char* __dec_obj283;
void* __right_value965 = (void*)0;
struct list$1sNodeph* __dec_obj284;
struct sSStringNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_690=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(    self!=((void*)0)) {
        result_690->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj282=result_690->sname;
        result_690->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_690->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj283=result_690->value;
        result_690->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj284=result_690->exps;
        result_690->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj284,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_690;
    /*i*/come_call_finalizer3(result_690,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj291;
struct list$1sNodeph* __dec_obj292;
struct list$1sNodeph* __dec_obj293;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj291=self->sname;
            /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj292=self->map_key_elements;
            come_call_finalizer3(__dec_obj292,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj293=self->map_elements;
            come_call_finalizer3(__dec_obj293,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result385__;
void* __right_value988 = (void*)0;
struct sMapNode* result_706;
void* __right_value989 = (void*)0;
char* __dec_obj294;
void* __right_value990 = (void*)0;
struct list$1sNodeph* __dec_obj295;
void* __right_value991 = (void*)0;
struct list$1sNodeph* __dec_obj296;
struct sMapNode* __result386__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_706=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(    self!=((void*)0)) {
        result_706->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj294=result_706->sname;
        result_706->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_706->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj295=result_706->map_key_elements;
        result_706->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj295,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj296=result_706->map_elements;
        result_706->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj296,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = result_706;
    /*i*/come_call_finalizer3(result_706,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj297;
struct list$1sNodeph* __dec_obj298;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj297=self->sname;
            /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj298=self->list_elements;
            come_call_finalizer3(__dec_obj298,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result388__;
void* __right_value996 = (void*)0;
struct sListNode* result_709;
void* __right_value997 = (void*)0;
char* __dec_obj299;
void* __right_value998 = (void*)0;
struct list$1sNodeph* __dec_obj300;
struct sListNode* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_709=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(    self!=((void*)0)) {
        result_709->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_709->sname;
        result_709->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj300=result_709->list_elements;
        result_709->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj300,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_709;
    /*i*/come_call_finalizer3(result_709,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_711;
char* p_712;
char* name_713;
void* __right_value1003 = (void*)0;
char* __dec_obj301;
_Bool no_comma_714;
void* __right_value1004 = (void*)0;
struct sNode* node_715;
void* __right_value1005 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1023 = (void*)0;
struct sNode* __result400__;
name_713 = (void*)0;
    tuple_elements_711=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2666, "list$1tuple2$2charphsNodephph"))));
    while((_Bool)1) {
        p_712=info->p;
        if(        named_tuple) {
            __dec_obj301=name_713;
            name_713=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_714=info->no_comma;
        info->no_comma=(_Bool)1;
        node_715=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj302=node_715;
        node_715=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_715),info));
        /* U1 */ if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_714;
        list$1tuple2$2charphsNodephph_push_back(tuple_elements_711,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2685, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(string_clone(name_713)),(struct sNode*)come_increment_ref_count(node_715))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_715) { node_715 = come_decrement_ref_count2(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        /* U13 */name_713 = come_decrement_ref_count2(name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_715) { node_715 = come_decrement_ref_count2(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2702, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1013=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2702, "sTupleNode")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_711),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1023=_inf_value17));
    /*i*/come_call_finalizer3(tuple_elements_711,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1013,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1023) { __right_value1023 = come_decrement_ref_count2(__right_value1023, ((struct sNode*)__right_value1023)->finalize, ((struct sNode*)__right_value1023)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1006 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_716;
struct tuple2$2charphsNodeph* __dec_obj303;
void* __right_value1007 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_717;
struct tuple2$2charphsNodeph* __dec_obj306;
void* __right_value1008 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_718;
struct tuple2$2charphsNodeph* __dec_obj309;
struct list$1tuple2$2charphsNodephph* __result393__;
    if(    self->len==0) {
        litem_716=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1006=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1143, "list_item$1tuple2$2charphsNodephph"))));
        litem_716->prev=((void*)0);
        litem_716->next=((void*)0);
        __dec_obj303=litem_716->item;
        litem_716->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj303,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_716;
        self->head=litem_716;
    }
    else if(    self->len==1) {
        litem_717=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1007=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1153, "list_item$1tuple2$2charphsNodephph"))));
        litem_717->prev=self->head;
        litem_717->next=((void*)0);
        __dec_obj306=litem_717->item;
        litem_717->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj306,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_717;
        self->head->next=litem_717;
    }
    else {
        litem_718=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1008=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1163, "list_item$1tuple2$2charphsNodephph"))));
        litem_718->prev=self->tail;
        litem_718->next=((void*)0);
        __dec_obj309=litem_718->item;
        litem_718->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj309,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_718;
        self->tail=litem_718;
    }
    self->len++;
    __result393__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj310;
struct sNode* __dec_obj311;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj310=self->v1;
            /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj311=self->v2;
            /* U1 */ if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj312;
struct list$1tuple2$2charphsNodephph* __dec_obj313;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj312=self->sname;
            /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj313=self->tuple_elements;
            come_call_finalizer3(__dec_obj313,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result394__;
void* __right_value1014 = (void*)0;
struct sTupleNode* result_719;
void* __right_value1015 = (void*)0;
char* __dec_obj314;
void* __right_value1022 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj319;
struct sTupleNode* __result399__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_719=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(    self!=((void*)0)) {
        result_719->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_719->sname;
        result_719->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj319=result_719->tuple_elements;
        result_719->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj319,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result399__ = gComeFunResultObject = __result_obj__ = result_719;
    /*i*/come_call_finalizer3(result_719,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result395__;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_720;
struct list_item$1tuple2$2charphsNodephph* it_721;
void* __right_value1021 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result398__;
    if(    self==((void*)0)) {
        __result395__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    result_720=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1059, "list$1tuple2$2charphsNodephph"))));
    it_721=self->head;
    while(it_721!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_720,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_721->item)));
        it_721=it_721->next;
    }
    __result398__ = gComeFunResultObject = __result_obj__ = result_720;
    /*i*/come_call_finalizer3(result_720,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result396__;
void* __right_value1018 = (void*)0;
struct tuple2$2charphsNodeph* result_722;
void* __right_value1019 = (void*)0;
char* __dec_obj315;
void* __right_value1020 = (void*)0;
struct sNode* __dec_obj316;
struct tuple2$2charphsNodeph* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_722=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj315=result_722->v1;
        result_722->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj316=result_722->v2;
        result_722->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_722;
    /*i*/come_call_finalizer3(result_722,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj317;
struct sNode* __dec_obj318;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj317=self->v1;
            /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj318=self->v2;
            /* U1 */ if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct list$1sNodeph* tuple_elements_723;
struct sNode* node_724;
void* __right_value1026 = (void*)0;
struct sNode* node2_725;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1032 = (void*)0;
struct sNode* __result403__;
    tuple_elements_723=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2707, "list$1sNodeph"))));
    node_724=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_723,(struct sNode*)come_increment_ref_count(node_724));
    node2_725=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_723,(struct sNode*)come_increment_ref_count(node2_725));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2717, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1028=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2717, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_723),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1032=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(tuple_elements_723,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_724) { node_724 = come_decrement_ref_count2(node_724, ((struct sNode*)node_724)->finalize, ((struct sNode*)node_724)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_725) { node2_725 = come_decrement_ref_count2(node2_725, ((struct sNode*)node2_725)->finalize, ((struct sNode*)node2_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value1028,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1032) { __right_value1032 = come_decrement_ref_count2(__right_value1032, ((struct sNode*)__right_value1032)->finalize, ((struct sNode*)__right_value1032)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result403__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct list$1sNodeph* tuple_elements_727;
void* __right_value1035 = (void*)0;
struct sNode* node_728;
void* __right_value1036 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value1037 = (void*)0;
struct sNode* node2_729;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1043 = (void*)0;
struct sNode* __result406__;
    tuple_elements_727=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2722, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_728=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj324=node_728;
    node_728=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_728),info));
    /* U1 */ if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_727,(struct sNode*)come_increment_ref_count(node_728));
    node2_729=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_727,(struct sNode*)come_increment_ref_count(node2_729));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2735, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1039=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2735, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_727),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1043=_inf_value19));
    /*i*/come_call_finalizer3(tuple_elements_727,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_728) { node_728 = come_decrement_ref_count2(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_729) { node2_729 = come_decrement_ref_count2(node2_729, ((struct sNode*)node2_729)->finalize, ((struct sNode*)node2_729)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value1039,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1043) { __right_value1043 = come_decrement_ref_count2(__right_value1043, ((struct sNode*)__right_value1043)->finalize, ((struct sNode*)__right_value1043)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj325;
struct list$1sNodeph* __dec_obj326;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj325=self->sname;
            /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj326=self->tuple_elements;
            come_call_finalizer3(__dec_obj326,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result404__;
void* __right_value1040 = (void*)0;
struct sSomeNode* result_730;
void* __right_value1041 = (void*)0;
char* __dec_obj327;
void* __right_value1042 = (void*)0;
struct list$1sNodeph* __dec_obj328;
struct sSomeNode* __result405__;
    if(    self==(void*)0) {
        __result404__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    result_730=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(    self!=((void*)0)) {
        result_730->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_730->sname;
        result_730->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj328=result_730->tuple_elements;
        result_730->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj328,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result405__ = gComeFunResultObject = __result_obj__ = result_730;
    /*i*/come_call_finalizer3(result_730,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct list$1sNodeph* tuple_elements_731;
void* __right_value1046 = (void*)0;
struct sNode* node_732;
void* __right_value1047 = (void*)0;
struct sNode* __dec_obj329;
void* __right_value1048 = (void*)0;
struct sNode* node2_733;
struct sNode* node3_734;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1054 = (void*)0;
struct sNode* __result409__;
    tuple_elements_731=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2740, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_732=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj329=node_732;
    node_732=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_732),info));
    /* U1 */ if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_733=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_731,(struct sNode*)come_increment_ref_count(node2_733));
    node3_734=(struct sNode*)come_increment_ref_count(node_732);
    list$1sNodeph_push_back(tuple_elements_731,(struct sNode*)come_increment_ref_count(node3_734));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2755, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1050=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2755, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_731),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1054=_inf_value20));
    /*i*/come_call_finalizer3(tuple_elements_731,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_732) { node_732 = come_decrement_ref_count2(node_732, ((struct sNode*)node_732)->finalize, ((struct sNode*)node_732)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_733) { node2_733 = come_decrement_ref_count2(node2_733, ((struct sNode*)node2_733)->finalize, ((struct sNode*)node2_733)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_734) { node3_734 = come_decrement_ref_count2(node3_734, ((struct sNode*)node3_734)->finalize, ((struct sNode*)node3_734)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value1050,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1054) { __right_value1054 = come_decrement_ref_count2(__right_value1054, ((struct sNode*)__right_value1054)->finalize, ((struct sNode*)__right_value1054)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj330;
struct list$1sNodeph* __dec_obj331;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj330=self->sname;
            /*G*/ __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj331=self->tuple_elements;
            come_call_finalizer3(__dec_obj331,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result407__;
void* __right_value1051 = (void*)0;
struct sNoneNode* result_735;
void* __right_value1052 = (void*)0;
char* __dec_obj332;
void* __right_value1053 = (void*)0;
struct list$1sNodeph* __dec_obj333;
struct sNoneNode* __result408__;
    if(    self==(void*)0) {
        __result407__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    result_735=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(    self!=((void*)0)) {
        result_735->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_735->sname;
        result_735->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_735->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj333=result_735->tuple_elements;
        result_735->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj333,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result408__ = gComeFunResultObject = __result_obj__ = result_735;
    /*i*/come_call_finalizer3(result_735,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

