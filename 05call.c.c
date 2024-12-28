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

extern void* gComeFunResultObject;

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
    _Bool m5stack_cpp;
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

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
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
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
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

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
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
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* anonymous_var_nameX652, unsigned int anonymous_var_nameX653, int anonymous_var_nameX654);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void sComePollNode_finalize(struct sComePollNode* self);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sWildCard_finalize(struct sWildCard* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3599, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3606, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3615, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3622, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3636, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3971, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3976, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 3981, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 3986, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 3991, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4024, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4031, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4033, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4038, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4040, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4045, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4047, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4052, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4054, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4059, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4061, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4066, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4068, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4073, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4078, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4083, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4088, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4093, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4098, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4103, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4108, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4113, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4118, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4123, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4128, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4133, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4138, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
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
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
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
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
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
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
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
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
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
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
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
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
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
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
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
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1900, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value246 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result198__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("sReturnNode")));
    /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_247;
void* __right_value284 = (void*)0;
struct sType* result_type_248;
void* __right_value285 = (void*)0;
struct sType* result_type2_277;
struct sType* result_type3_278;
void* __right_value286 = (void*)0;
_Bool _if_conditional1;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj83;
_Bool Value_279;
_Bool __result217__;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_280;
void* __right_value289 = (void*)0;
struct sType* come_value_type_281;
void* __right_value290 = (void*)0;
struct sType* __dec_obj84;
void* __right_value291 = (void*)0;
char* var_name_283;
int num_result_stack_284;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __if_result__0_285 = (void*)0;
struct list$1sVarph* o2_saved_286;
struct sVar* it_289;
struct list$1sVarph* __dec_obj90;
void* __right_value294 = (void*)0;
struct sFun* come_fun_296;
void* __if_result__1_297 = (void*)0;
struct list$1sVarph* o2_saved_298;
struct sVar* it_299;
struct list$1sVarph* __dec_obj94;
void* __right_value295 = (void*)0;
    if(    self->value) {
        come_fun_247=info->come_fun;
        result_type_248=(struct sType*)come_increment_ref_count(sType_clone(come_fun_247->mResultType));
        result_type2_277=(struct sType*)come_increment_ref_count(solve_generics(result_type_248,info->generics_type,info));
        result_type3_278=result_type2_277->mNoSolvedGenericsType->v1;
        if(        result_type2_277->mNoSolvedGenericsType->v1) {
            result_type3_278=result_type2_277->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_278=result_type2_277;
        }
        if(        result_type_248->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value286=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            /* U10 */ (__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj83=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                /* U1 */ if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_279=node_compile(self->value,info);
        if(        !Value_279) {
            __result217__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result217__;
        }
        else {
        }
        come_value_280=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_281=(struct sType*)come_increment_ref_count(solve_generics(come_value_280->type,info->generics_type,info));
        __dec_obj84=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_280->type));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_280->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_247->mBlock,info,come_value_280->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_280->c_value);
        }
        else {
            static int num_result_282=0;
            var_name_283=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_282));
            num_result_stack_284=num_result_282;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_277->mClass->mName)>strlen("tuple")&&memcmp(result_type2_277->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_277,come_value_type_281,come_value_280,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value292=make_define_var(result_type2_277,var_name_283,(_Bool)0,info))));
                /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_283,come_value_280->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value293=make_define_var(result_type2_277,var_name_283,(_Bool)0,info))));
                /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_283,come_value_280->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_247->mBlock,info,come_value_280->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_286=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_289=list$1sVarph_begin((o2_saved_286));                    !list$1sVarph_end((o2_saved_286));                    it_289=list$1sVarph_next((o2_saved_286))                    ){
                        free_object(it_289->mType,it_289->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_286,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj90=info->match_it_var;
                    __if_result__0_285=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj90,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(__if_result__0_285,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value294=xsprintf("come_heap_final();\n"))));
                /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_284);
            /* U13 */var_name_283 = come_decrement_ref_count2(var_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_296=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_296->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_298=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_299=list$1sVarph_begin((o2_saved_298));                !list$1sVarph_end((o2_saved_298));                it_299=list$1sVarph_next((o2_saved_298))                ){
                    free_object(it_299->mType,it_299->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                /*i*/come_call_finalizer3(o2_saved_298,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj94=info->match_it_var;
                __if_result__1_297=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(__if_result__1_297,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value295=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result200__;
void* __right_value248 = (void*)0;
struct sType* result_249;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value253 = (void*)0;
char* __dec_obj62;
void* __right_value260 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value268 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value269 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value276 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value277 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value278 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value279 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value281 = (void*)0;
char* __dec_obj80;
void* __right_value282 = (void*)0;
char* __dec_obj81;
void* __right_value283 = (void*)0;
char* __dec_obj82;
struct sType* __result216__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_249=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_249->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_249->mNoSolvedGenericsType;
        result_249->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_249->mOriginalLoadVarType;
        result_249->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_249->mGenericsName;
        result_249->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_249->mGenericsTypes;
        result_249->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_249->mArrayNum;
        result_249->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_249->mParamTypes;
        result_249->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_249->mParamNames;
        result_249->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_249->mResultType;
        result_249->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_249->mAlignas;
        result_249->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_249->mChannelType;
        result_249->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_249->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_249->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_249->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_249->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_249->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_249->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_249->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_249->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_249->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_249->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_249->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_249->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_249->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_249->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_249->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_249->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_249->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_249->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_249->mSizeNum;
        result_249->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_249->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_249->mOriginalTypeName;
        result_249->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_249->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_249->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_249->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_249->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_249->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_249->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_249->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_249->mAsmName;
        result_249->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_249->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_249->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_249->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_249->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_249->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_249->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_249->mTupleName;
        result_249->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_249;
    /*i*/come_call_finalizer3(result_249,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result201__;
void* __right_value249 = (void*)0;
struct tuple1$1sTypeph* result_250;
void* __right_value250 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result202__;
    if(    self==(void*)0) {
        __result201__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_250=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_250->v1;
        result_250->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_250;
    /*i*/come_call_finalizer3(result_250,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1sNodeph* __dec_obj46;
struct list$1sTypeph* __dec_obj48;
struct list$1charph* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj39=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj41=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            /* U1 */ if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj53=self->mChannelType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            /* U1 */ if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj58=self->mTupleName;
            /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_251;
struct list_item$1sTypeph* prev_it_252;
    it_251=self->head;
    while(it_251!=((void*)0)) {
        prev_it_252=it_251;
        it_251=it_251->next;
        /*i*/come_call_finalizer3(prev_it_252,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_253;
struct list_item$1sTypeph* prev_it_254;
    it_253=self->head;
    while(it_253!=((void*)0)) {
        prev_it_254=it_253;
        it_253=it_253->next;
        /*i*/come_call_finalizer3(prev_it_254,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_255;
struct list_item$1sNodeph* prev_it_256;
    it_255=self->head;
    while(it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*i*/come_call_finalizer3(prev_it_256,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_257;
struct list_item$1sNodeph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        /*i*/come_call_finalizer3(prev_it_258,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_259;
struct list_item$1charph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*i*/come_call_finalizer3(prev_it_260,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj54=self->v1;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result203__;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1sTypeph* result_261;
struct list_item$1sTypeph* it_262;
void* __right_value259 = (void*)0;
struct list$1sTypeph* __result206__;
    if(    self==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_261=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1022, "list$1sTypeph"))));
    it_262=self->head;
    while(it_262!=((void*)0)) {
        list$1sTypeph_add(result_261,(struct sType*)come_increment_ref_count(sType_clone(it_262->item)));
        it_262=it_262->next;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_261;
    /*i*/come_call_finalizer3(result_261,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result204__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result204__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1sTypeph* litem_263;
struct sType* __dec_obj63;
void* __right_value257 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj64;
void* __right_value258 = (void*)0;
struct list_item$1sTypeph* litem_265;
struct sType* __dec_obj65;
struct list$1sTypeph* __result205__;
    if(    self->len==0) {
        litem_263=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value256=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1sTypeph"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj63=litem_263->item;
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value257=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1sTypeph"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj64=litem_264->item;
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value258=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1sTypeph"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj65=litem_265->item;
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result207__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1sNodeph* result_266;
struct list_item$1sNodeph* it_267;
void* __right_value267 = (void*)0;
struct list$1sNodeph* __result212__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1022, "list$1sNodeph"))));
    it_267=self->head;
    while(it_267!=((void*)0)) {
        list$1sNodeph_add(result_266,(struct sNode*)come_increment_ref_count(sNode_clone(it_267->item)));
        it_267=it_267->next;
    }
    __result212__ = gComeFunResultObject = __result_obj__ = result_266;
    /*i*/come_call_finalizer3(result_266,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1sNodeph* litem_268;
struct sNode* __dec_obj67;
void* __right_value264 = (void*)0;
struct list_item$1sNodeph* litem_269;
struct sNode* __dec_obj68;
void* __right_value265 = (void*)0;
struct list_item$1sNodeph* litem_270;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result209__;
    if(    self->len==0) {
        litem_268=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value263=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1sNodeph"))));
        litem_268->prev=((void*)0);
        litem_268->next=((void*)0);
        __dec_obj67=litem_268->item;
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_268;
        self->head=litem_268;
    }
    else if(    self->len==1) {
        litem_269=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value264=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1sNodeph"))));
        litem_269->prev=self->head;
        litem_269->next=((void*)0);
        __dec_obj68=litem_269->item;
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_269;
        self->head->next=litem_269;
    }
    else {
        litem_270=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value265=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1sNodeph"))));
        litem_270->prev=self->tail;
        litem_270->next=((void*)0);
        __dec_obj69=litem_270->item;
        litem_270->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_270;
        self->tail=litem_270;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result210__;
void* __right_value266 = (void*)0;
struct sNode* result_271;
struct sNode* __result211__;
    if(    self==(void*)0) {
        __result210__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_271=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_271->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_271->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_271->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_271->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_271->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_271->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_271->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_271->kind=self->kind;
    }
    __result211__ = gComeFunResultObject = __result_obj__ = result_271;
    if(result_271) { result_271 = come_decrement_ref_count2(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result213__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1charph* result_272;
struct list_item$1charph* it_273;
void* __right_value275 = (void*)0;
struct list$1charph* __result215__;
    if(    self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_272=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1022, "list$1charph"))));
    it_273=self->head;
    while(it_273!=((void*)0)) {
        list$1charph_add(result_272,(char*)come_increment_ref_count(string_clone(it_273->item)));
        it_273=it_273->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_272;
    /*i*/come_call_finalizer3(result_272,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
struct list_item$1charph* litem_274;
char* __dec_obj72;
void* __right_value273 = (void*)0;
struct list_item$1charph* litem_275;
char* __dec_obj73;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_276;
char* __dec_obj74;
struct list$1charph* __result214__;
    if(    self->len==0) {
        litem_274=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value272=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1charph"))));
        litem_274->prev=((void*)0);
        litem_274->next=((void*)0);
        __dec_obj72=litem_274->item;
        litem_274->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_274;
        self->head=litem_274;
    }
    else if(    self->len==1) {
        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1charph"))));
        litem_275->prev=self->head;
        litem_275->next=((void*)0);
        __dec_obj73=litem_275->item;
        litem_275->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_275;
        self->head->next=litem_275;
    }
    else {
        litem_276=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1charph"))));
        litem_276->prev=self->tail;
        litem_276->next=((void*)0);
        __dec_obj74=litem_276->item;
        litem_276->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_276;
        self->tail=litem_276;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_287;
struct sVar* __result218__;
struct sVar* __result219__;
struct sVar* result_288;
struct sVar* __result220__;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_287,0,sizeof(struct sVar*));
        __result218__ = gComeFunResultObject = __result_obj__ = result_287;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    self->it=self->head;
    if(    self->it) {
        __result219__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    memset(&result_288,0,sizeof(struct sVar*));
    __result220__ = gComeFunResultObject = __result_obj__ = result_288;
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_290;
struct sVar* __result221__;
struct sVar* __result222__;
struct sVar* result_291;
struct sVar* __result223__;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_290,0,sizeof(struct sVar*));
        __result221__ = gComeFunResultObject = __result_obj__ = result_290;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result222__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    memset(&result_291,0,sizeof(struct sVar*));
    __result223__ = gComeFunResultObject = __result_obj__ = result_291;
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_292;
struct list_item$1sVarph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        /*i*/come_call_finalizer3(prev_it_293,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj85;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj85=self->item;
            come_call_finalizer3(__dec_obj85,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj86;
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj87=self->mCValueName;
            /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj88=self->mType;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj89=self->mFunName;
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_294;
struct list_item$1sVarph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*i*/come_call_finalizer3(prev_it_295,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj91=self->c_value;
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj92=self->type;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj93=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj95;
struct sInlineAssembler* __result224__;
    ((struct sNodeBase*)(__right_value296=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value296,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->source;
    self->source=(char*)come_increment_ref_count(source);
    /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
char* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value297=__builtin_string("sInlineAssembler")));
    /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_300;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_301;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct buffer* buf_302;
char* p_303;
_Bool dquort_304;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* var_name_305;
void* __right_value304 = (void*)0;
struct sVar* var__306;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* __dec_obj98;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct sType* __dec_obj99;
_Bool __result231__;
    source_300=(char*)come_increment_ref_count(self->source);
    come_value_301=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 171, "buffer"))));
    p_303=source_300;
    dquort_304=(_Bool)0;
    while(*p_303) {
        if(        *p_303==34) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
            dquort_304=!dquort_304;
        }
        else if(        dquort_304) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
        else if(        *p_303==40) {
            buffer_append_char(buf_302,*p_303);
            p_303++;
            var_name_305=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 189, "buffer"))));
            while(xisalnum(*p_303)||*p_303==95) {
                buffer_append_char(var_name_305,*p_303);
                p_303++;
            }
            var__306=map$2charphsVarph_at(info->lv_table->mVars,((char*)(__right_value304=buffer_to_string(var_name_305))),((void*)0));
            /* U11 */__right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            var__306) {
                buffer_append_str(buf_302,var__306->mCValueName);
            }
            if(            *p_303==41) {
                buffer_append_char(buf_302,*p_303);
                p_303++;
            }
            /*i*/come_call_finalizer3(var_name_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_302,*p_303);
            p_303++;
        }
    }
    __dec_obj98=come_value_301->c_value;
    come_value_301->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value305=buffer_to_string(buf_302)))));
    /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj99=come_value_301->type;
    come_value_301->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 213, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_301->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_301));
    add_come_last_code(info,"%s",come_value_301->c_value);
    __result231__ = (_Bool)1;
    /* U13 */source_300 = come_decrement_ref_count2(source_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_301,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result231__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_307;
unsigned int it_308;
struct sVar* __result226__;
struct sVar* __result227__;
struct sVar* __result228__;
struct sVar* __result229__;
    hash_307=charp_get_hash_key(((char*)key))%self->size;
    it_308=hash_307;
    while((_Bool)1) {
        if(        self->item_existance[it_308]) {
            if(            charp_equals(self->keys[it_308],key)) {
                __result226__ = gComeFunResultObject = __result_obj__ = self->items[it_308];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result226__;
            }
            it_308++;
            if(            it_308>=self->size) {
                it_308=0;
            }
            else if(            it_308==hash_307) {
                __result227__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result227__;
            }
        }
        else {
            __result228__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result228__;
        }
    }
    __result229__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct list_item$1CVALUEph* litem_309;
struct CVALUE* __dec_obj100;
void* __right_value310 = (void*)0;
struct list_item$1CVALUEph* litem_310;
struct CVALUE* __dec_obj101;
void* __right_value311 = (void*)0;
struct list_item$1CVALUEph* litem_311;
struct CVALUE* __dec_obj102;
struct list$1CVALUEph* __result230__;
    if(    self->len==0) {
        litem_309=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value309=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1CVALUEph"))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj100=litem_309->item;
        litem_309->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value310=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1CVALUEph"))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj101=litem_310->item;
        litem_310->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value311=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1CVALUEph"))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj102=litem_311->item;
        litem_311->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
struct sCurrentNode2* __result232__;
    ((struct sNodeBase*)(__right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
char* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value313=__builtin_string(self->sname)));
    /* U11 */__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
char* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value314=__builtin_string("sCurrentNode")));
    /* U11 */__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value315 = (void*)0;
char* class_name_312;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sClass* current_stack_313;
struct sVarTable* vtable_314;
struct map$2charphsVarph* o2_saved_315;
char* it_318;
char* key_321;
void* __right_value318 = (void*)0;
struct sVar* value_322;
void* __right_value319 = (void*)0;
struct sType* type2_326;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct tuple2$2charphsTypeph* item_327;
void* __right_value323 = (void*)0;
struct sType* type3_328;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct tuple2$2charphsTypeph* item2_331;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct map$2charphsVarph* o2_saved_383;
char* it_384;
char* key_385;
void* __right_value338 = (void*)0;
struct sVar* value_386;
void* __right_value339 = (void*)0;
struct sType* type2_387;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple2$2charphsTypeph* item_388;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value344 = (void*)0;
char* __dec_obj126;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj127;
_Bool __result271__;
    info->current_stack_num++;
    class_name_312=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_313=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 444, "sClass")),class_name_312,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_314=info->lv_table;
    while(vtable_314) {
        for(        o2_saved_315=(struct map$2charphsVarph*)come_increment_ref_count((vtable_314->mVars)),it_318=map$2charphsVarph_begin((o2_saved_315));        !map$2charphsVarph_end((o2_saved_315));        it_318=map$2charphsVarph_next((o2_saved_315))        ){
            key_321=it_318;
            value_322=((struct sVar*)come_null_check(((struct sVar*)(__right_value318=map$2charphsVarphp_operator_load_element(vtable_314->mVars,key_321))), "./common.h", 451, 0));
            /*g*/come_call_finalizer3(__right_value318,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_326=(struct sType*)come_increment_ref_count(sType_clone(value_322->mType));
            type2_326->mPointerNum++;
            item_327=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 457, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_322->mCValueName)),(struct sType*)come_increment_ref_count(type2_326)));
            if(            value_322->mCValueName!=((void*)0)) {
                if(                strcmp(value_322->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_322->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_322->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_322->mType->mClass->mName,"va_list")||string_operator_equals(value_322->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_326->mArrayNum)==1) {
                    type3_328=(struct sType*)come_increment_ref_count(sType_clone(type2_326));
                    list$1sNodeph_reset(type3_328->mArrayNum);
                    type3_328->mPointerNum=1;
                    type3_328->mOriginIsArray=(_Bool)1;
                    item2_331=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 477, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_322->mCValueName)),(struct sType*)come_increment_ref_count(type3_328)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_313->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_331)));
                    value_322->mType->mOriginIsArray=(_Bool)1;
                    /*i*/come_call_finalizer3(type3_328,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(item2_331,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_313->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_327)));
                }
            }
            /*i*/come_call_finalizer3(type2_326,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_327,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_315,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_314=vtable_314->mParent;
    }
    output_struct(current_stack_313,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_312),(struct sClass*)come_increment_ref_count(current_stack_313));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_312,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_312);
    vtable_314=info->lv_table;
    while(vtable_314) {
        for(        o2_saved_383=(struct map$2charphsVarph*)come_increment_ref_count((vtable_314->mVars)),it_384=map$2charphsVarph_begin((o2_saved_383));        !map$2charphsVarph_end((o2_saved_383));        it_384=map$2charphsVarph_next((o2_saved_383))        ){
            key_385=it_384;
            value_386=((struct sVar*)come_null_check(((struct sVar*)(__right_value338=map$2charphsVarphp_operator_load_element(vtable_314->mVars,key_385))), "./common.h", 502, 1));
            /*g*/come_call_finalizer3(__right_value338,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_387=(struct sType*)come_increment_ref_count(sType_clone(value_386->mType));
            item_388=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 506, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_386->mCValueName),(struct sType*)come_increment_ref_count(type2_387)));
            if(            value_386->mCValueName!=((void*)0)) {
                if(                strcmp(value_386->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_386->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_386->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_386->mType->mClass->mName,"va_list")||string_operator_equals(value_386->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_387->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_386->mCValueName,value_386->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_386->mCValueName,value_386->mCValueName);
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_388,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_383,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_314=vtable_314->mParent;
    }
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 535, "CVALUE"))));
    __dec_obj126=come_value_389->c_value;
    come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj127=come_value_389->type;
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 538, "sType")),class_name_312,(_Bool)0,info));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_389->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_389->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    __result271__ = (_Bool)1;
    /* U13 */class_name_312 = come_decrement_ref_count2(class_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_313,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result271__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_316;
char* __result235__;
char* __result236__;
char* result_317;
char* __result237__;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_316,0,sizeof(char*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_316;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_317,0,sizeof(char*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_317;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_319;
char* __result238__;
char* __result239__;
char* result_320;
char* __result240__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_319,0,sizeof(char*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_320,0,sizeof(char*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_323;
unsigned int hash_324;
unsigned int it_325;
struct sVar* __result241__;
struct sVar* __result242__;
struct sVar* __result243__;
struct sVar* __result244__;
default_value_323 = (void*)0;
    memset(&default_value_323,0,sizeof(struct sVar*));
    hash_324=charp_get_hash_key(((char*)key))%self->size;
    it_325=hash_324;
    while((_Bool)1) {
        if(        self->item_existance[it_325]) {
            if(            charp_equals(self->keys[it_325],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_325];
                /*i*/come_call_finalizer3(default_value_323,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_325++;
            if(            it_325>=self->size) {
                it_325=0;
            }
            else if(            it_325==hash_324) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_323;
                /*i*/come_call_finalizer3(default_value_323,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_323;
            /*i*/come_call_finalizer3(default_value_323,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_323;
    /*i*/come_call_finalizer3(default_value_323,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj104;
struct sType* __dec_obj105;
struct tuple2$2charphsTypeph* __result245__;
    __dec_obj104=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_329;
struct list_item$1sNodeph* prev_it_330;
struct list$1sNodeph* __result246__;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        prev_it_330=it_329;
        it_329=it_329->next;
        /*i*/come_call_finalizer3(prev_it_330,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_332;
struct tuple2$2charphsTypeph* __dec_obj108;
void* __right_value328 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_333;
struct tuple2$2charphsTypeph* __dec_obj111;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_334;
struct tuple2$2charphsTypeph* __dec_obj114;
struct list$1tuple2$2charphsTypephph* __result247__;
    if(    self->len==0) {
        litem_332=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value327=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1tuple2$2charphsTypephph"))));
        litem_332->prev=((void*)0);
        litem_332->next=((void*)0);
        __dec_obj108=litem_332->item;
        litem_332->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_332;
        self->head=litem_332;
    }
    else if(    self->len==1) {
        litem_333=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value328=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1tuple2$2charphsTypephph"))));
        litem_333->prev=self->head;
        litem_333->next=((void*)0);
        __dec_obj111=litem_333->item;
        litem_333->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_333;
        self->head->next=litem_333;
    }
    else {
        litem_334=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value329=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1tuple2$2charphsTypephph"))));
        litem_334->prev=self->tail;
        litem_334->next=((void*)0);
        __dec_obj114=litem_334->item;
        litem_334->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_334;
        self->tail=litem_334;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result248__;
void* __right_value330 = (void*)0;
struct tuple2$2charphsTypeph* result_335;
void* __right_value331 = (void*)0;
char* __dec_obj117;
void* __right_value332 = (void*)0;
struct sType* __dec_obj118;
struct tuple2$2charphsTypeph* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_335=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj117=result_335->v1;
        result_335->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj118=result_335->v2;
        result_335->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_335;
    /*i*/come_call_finalizer3(result_335,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj119;
struct sType* __dec_obj120;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_336;
int i_337;
    for(    i_336=0;    i_336<self->size;    i_336++    ){
        if(        self->item_existance[i_336]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_336],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_337=0;    i_337<self->size;    i_337++    ){
        if(        self->item_existance[i_337]) {
            if(            1) {
                /* U13 */self->keys[i_337] = come_decrement_ref_count2(self->keys[i_337], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_359;
unsigned int it_360;
_Bool same_key_exist_377;
char* it2_380;
struct map$2charphsClassph* __result270__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_359=charp_get_hash_key(key)%self->size;
    it_360=hash_359;
    while((_Bool)1) {
        if(        self->item_existance[it_360]) {
            if(            charp_equals(self->keys[it_360],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_360]);
                    /* U13 */self->keys[it_360] = come_decrement_ref_count2(self->keys[it_360], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_360]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_360]);
                    self->keys[it_360]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_360],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_360]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_360]=item;
                }
                break;
            }
            it_360++;
            if(            it_360>=self->size) {
                it_360=0;
            }
            else if(            it_360==hash_359) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_360]=(_Bool)1;
            if(            1) {
                self->keys[it_360]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_360]=key;
            }
            if(            1) {
                self->items[it_360]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_360]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_377=(_Bool)0;
    for(    it2_380=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_380=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_380,key)) {
            same_key_exist_377=(_Bool)1;
        }
    }
    if(    !same_key_exist_377) {
        list$1charp_push_back(self->key_list,key);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_338;
void* __right_value335 = (void*)0;
char** keys_339;
void* __right_value336 = (void*)0;
struct sClass** items_340;
void* __right_value337 = (void*)0;
_Bool* item_existance_341;
int len_342;
char* it_345;
struct sClass* default_value_348;
struct sClass* it2_349;
unsigned int hash_356;
int n_357;
struct sClass* default_value_358;
default_value_348 = (void*)0;
default_value_358 = (void*)0;
    size_338=self->size*10;
    keys_339=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_338)), "/usr/local/include/comelang.h", 2511, "char*%"))));
    items_340=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value336=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_338)), "/usr/local/include/comelang.h", 2512, "sClass*%"))));
    item_existance_341=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_338)), "/usr/local/include/comelang.h", 2513, "bool"))));
    len_342=0;
    for(    it_345=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_345=map$2charphsClassph_next(self)    ){
        memset(&default_value_348,0,sizeof(struct sClass*));
        it2_349=map$2charphsClassph_at(self,it_345,default_value_348);
        hash_356=charp_get_hash_key(it_345)%size_338;
        n_357=hash_356;
        while((_Bool)1) {
            if(            item_existance_341[n_357]) {
                n_357++;
                if(                n_357>=size_338) {
                    n_357=0;
                }
                else if(                n_357==hash_356) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_341[n_357]=(_Bool)1;
                keys_339[n_357]=it_345;
                items_340[n_357]=map$2charphsClassph_at(self,it_345,default_value_358);
                len_342++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_339;
    self->items=items_340;
    self->item_existance=item_existance_341;
    self->size=size_338;
    self->len=len_342;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_343;
char* __result250__;
char* __result251__;
char* result_344;
char* __result252__;
result_343 = (void*)0;
result_344 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_343,0,sizeof(char*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_343;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_344,0,sizeof(char*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_344;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_346;
char* __result253__;
char* __result254__;
char* result_347;
char* __result255__;
result_346 = (void*)0;
result_347 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_346,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_346;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_347,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_347;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_350;
unsigned int it_351;
struct sClass* __result256__;
struct sClass* __result257__;
struct sClass* __result258__;
struct sClass* __result259__;
    hash_350=charp_get_hash_key(((char*)key))%self->size;
    it_351=hash_350;
    while((_Bool)1) {
        if(        self->item_existance[it_351]) {
            if(            charp_equals(self->keys[it_351],key)) {
                __result256__ = gComeFunResultObject = __result_obj__ = self->items[it_351];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
            it_351++;
            if(            it_351>=self->size) {
                it_351=0;
            }
            else if(            it_351==hash_350) {
                __result257__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
        }
        else {
            __result258__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result258__;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj121;
struct list$1tuple2$2charphsTypephph* __dec_obj122;
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj121=self->mName;
            /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj122=self->mFields;
            come_call_finalizer3(__dec_obj122,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj124=self->mDeclareSName;
            /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj125=self->mParentClassName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_352;
struct list_item$1tuple2$2charphsTypephph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        /*i*/come_call_finalizer3(prev_it_353,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj123;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj123=self->item;
            come_call_finalizer3(__dec_obj123,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_354;
struct list_item$1tuple2$2charphsTypephph* prev_it_355;
    it_354=self->head;
    while(it_354!=((void*)0)) {
        prev_it_355=it_354;
        it_354=it_354->next;
        /*i*/come_call_finalizer3(prev_it_355,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_361;
struct list_item$1charp* it_362;
struct list$1charp* __result263__;
    it2_361=0;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        if(        charp_equals(it_362->item,item)) {
            list$1charp_delete(self,it2_361,it2_361+1);
            break;
        }
        it2_361++;
        it_362=it_362->next;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_363;
struct list$1charp* __result260__;
struct list_item$1charp* it_366;
int i_367;
struct list_item$1charp* prev_it_368;
struct list_item$1charp* it_369;
int i_370;
struct list_item$1charp* prev_it_371;
struct list_item$1charp* it_372;
struct list_item$1charp* head_prev_it_373;
struct list_item$1charp* tail_it_374;
int i_375;
struct list_item$1charp* prev_it_376;
struct list$1charp* __result262__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_363=tail;
        tail=head;
        head=tmp_363;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result260__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367<tail) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                /*i*/come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_367==tail) {
                self->head=it_366;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else if(    tail==self->len) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370==head) {
                self->tail=it_369->prev;
                self->tail->next=((void*)0);
            }
            if(            i_370>=head) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                /*i*/come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else {
        it_372=self->head;
        head_prev_it_373=((void*)0);
        tail_it_374=((void*)0);
        i_375=0;
        while(it_372!=((void*)0)) {
            if(            i_375==head) {
                head_prev_it_373=it_372->prev;
            }
            if(            i_375==tail) {
                tail_it_374=it_372;
            }
            if(            i_375>=head&&i_375<tail) {
                prev_it_376=it_372;
                it_372=it_372->next;
                i_375++;
                /*i*/come_call_finalizer3(prev_it_376,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_375++;
            }
        }
        if(        head_prev_it_373!=((void*)0)) {
            head_prev_it_373->next=tail_it_374;
        }
        if(        tail_it_374!=((void*)0)) {
            tail_it_374->prev=head_prev_it_373;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_364;
struct list_item$1charp* prev_it_365;
struct list$1charp* __result261__;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        /*i*/come_call_finalizer3(prev_it_365,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result264__;
char* __result265__;
char* result_379;
char* __result266__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->head;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_379,0,sizeof(char*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_381;
char* __result267__;
char* __result268__;
char* result_382;
char* __result269__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_381,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_382,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
struct sLineNode* __result272__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
char* __result273__;
    __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value348=__builtin_string("sLineNode")));
    /* U11 */__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value351 = (void*)0;
char* __dec_obj129;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sType* __dec_obj130;
_Bool __result274__;
    come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 243, "CVALUE"))));
    __dec_obj129=come_value_390->c_value;
    come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_390->type;
    come_value_390->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 246, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
    add_come_last_code(info,"%s",come_value_390->c_value);
    __result274__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result274__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
struct sSNameNode* __result275__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result276__;
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sSNameNode")));
    /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct CVALUE* come_value_391;
void* __right_value358 = (void*)0;
char* __dec_obj132;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj133;
_Bool __result277__;
    come_value_391=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 271, "CVALUE"))));
    __dec_obj132=come_value_391->c_value;
    come_value_391->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj133=come_value_391->type;
    come_value_391->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 274, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_391->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_391));
    add_come_last_code(info,"%s",come_value_391->c_value);
    __result277__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_391,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result277__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct sFuncNode* __result278__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sFuncNode")));
    /* U11 */__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value365 = (void*)0;
char* __dec_obj135;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* __dec_obj136;
_Bool __result280__;
    come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 299, "CVALUE"))));
    __dec_obj135=come_value_392->c_value;
    come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_392->type;
    come_value_392->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 302, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_392->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
    add_come_last_code(info,"%s",come_value_392->c_value);
    __result280__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
struct sWildCard* __result281__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value369=__builtin_string("sWildCard")));
    /* U11 */__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* value_node_393;
_Bool Value_394;
_Bool __result283__;
_Bool __result284__;
    value_node_393=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value370=xsprintf("Value"))),info));
    /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_394=node_compile(value_node_393,info);
    if(    !Value_394) {
        __result283__ = (_Bool)0;
        if(value_node_393) { value_node_393 = come_decrement_ref_count2(value_node_393, ((struct sNode*)value_node_393)->finalize, ((struct sNode*)value_node_393)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result283__;
    }
    else {
    }
    __result284__ = (_Bool)1;
    if(value_node_393) { value_node_393 = come_decrement_ref_count2(value_node_393, ((struct sNode*)value_node_393)->finalize, ((struct sNode*)value_node_393)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result284__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
struct sCallerFuncNode* __result285__;
    ((struct sNodeBase*)(__right_value372=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value372,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value373=__builtin_string("sCallerFuncNode")));
    /* U11 */__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value376 = (void*)0;
char* __dec_obj139;
void* __right_value377 = (void*)0;
char* __dec_obj140;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj141;
_Bool __result287__;
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 351, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj139=come_value_395->c_value;
        come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj140=come_value_395->c_value;
        come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj141=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 359, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_395->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    add_come_last_code(info,"%s",come_value_395->c_value);
    __result287__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
struct sCallerLineNode* __result288__;
    ((struct sNodeBase*)(__right_value380=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value380,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value383 = (void*)0;
char* __dec_obj143;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* __dec_obj144;
_Bool __result289__;
    come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 380, "CVALUE"))));
    __dec_obj143=come_value_396->c_value;
    come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_396->type;
    come_value_396->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 383, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_396->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
    add_come_last_code(info,"%s",come_value_396->c_value);
    __result289__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result289__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string("sCallerLineNode")));
    /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct sCallerSNameNode* __result291__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value390 = (void*)0;
char* __dec_obj146;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sType* __dec_obj147;
_Bool __result292__;
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 408, "CVALUE"))));
    __dec_obj146=come_value_397->c_value;
    come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_397->type;
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 411, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_397->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    add_come_last_code(info,"%s",come_value_397->c_value);
    __result292__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value393=__builtin_string("sCallerSNameNode")));
    /* U11 */__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
char* fun_name3_399;
struct list$1sTypeph* method_generics_types_before_400;
struct list$1sTypeph* __dec_obj148;
struct sGenericsFun* generics_fun_401;
void* __right_value395 = (void*)0;
_Bool _if_conditional2;
void* __right_value396 = (void*)0;
char* __result298__;
struct list$1sTypeph* __dec_obj159;
char* __result299__;
    static int num_method_generics_398=0;
    fun_name3_399=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_398++));
    method_generics_types_before_400=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj148=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj148,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_401=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_401) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_399)),generics_fun_401,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_399);
            __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("")));
            /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name3_399 = come_decrement_ref_count2(fun_name3_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result298__;
        }
    }
    __dec_obj159=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_400);
    come_call_finalizer3(__dec_obj159,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = fun_name3_399;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name3_399 = come_decrement_ref_count2(fun_name3_399, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_402;
unsigned int it_403;
struct sGenericsFun* __result294__;
struct sGenericsFun* __result295__;
struct sGenericsFun* __result296__;
struct sGenericsFun* __result297__;
    hash_402=charp_get_hash_key(((char*)key))%self->size;
    it_403=hash_402;
    while((_Bool)1) {
        if(        self->item_existance[it_403]) {
            if(            charp_equals(self->keys[it_403],key)) {
                __result294__ = gComeFunResultObject = __result_obj__ = self->items[it_403];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
            it_403++;
            if(            it_403>=self->size) {
                it_403=0;
            }
            else if(            it_403==hash_402) {
                __result295__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
        }
        else {
            __result296__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result296__;
        }
    }
    __result297__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj149;
struct list$1charph* __dec_obj150;
struct list$1charph* __dec_obj151;
char* __dec_obj152;
struct sType* __dec_obj153;
struct list$1sTypeph* __dec_obj154;
struct list$1charph* __dec_obj155;
struct list$1charph* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj149=self->mImplType;
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj150=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj150,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj151=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj151,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj152=self->mName;
            /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj153=self->mResultType;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj154=self->mParamTypes;
            come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj155=self->mParamNames;
            come_call_finalizer3(__dec_obj155,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj156=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj157=self->mBlock;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj158=self->mGenericsSName;
            /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
char* __dec_obj160;
void* __right_value408 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj177;
struct list$1sTypeph* __dec_obj178;
struct buffer* __dec_obj179;
struct sFunCallNode* __result306__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj177,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj178=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj178,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj179=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value409=__builtin_string("sFunCallNode")));
    /* U11 */__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_414;
struct list$1tuple2$2charphsNodephph* params_415;
struct buffer* method_block_416;
int method_block_sline_417;
struct sVar* var__418;
struct sType* lambda_type_419;
_Bool __result308__;
void* __right_value410 = (void*)0;
struct sType* result_type_420;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1CVALUEph* come_params_421;
_Bool __result310__;
int i_424;
struct list$1tuple2$2charphsNodephph* o2_saved_425;
struct tuple2$2charphsNodeph* it_428;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_431=0;
struct sNode* node_432=0;
_Bool Value_433;
_Bool __result317__;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value414 = (void*)0;
_Bool _if_conditional3;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
_Bool _if_conditional4;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct buffer* buf_438;
int j_439;
struct list$1CVALUEph* o2_saved_440;
struct CVALUE* it_443;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value425 = (void*)0;
char* __dec_obj186;
void* __right_value426 = (void*)0;
struct sType* __dec_obj187;
struct sGenericsFun* generics_fun_447;
_Bool method_generics_448;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1sTypeph* method_generics_types_449;
void* __right_value429 = (void*)0;
char* generics_fun_name_450;
struct sFun* fun_451;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1CVALUEph* come_params_454;
struct sFun* fun_455;
_Bool no_output_come_code_456;
_Bool __result330__;
void* __right_value432 = (void*)0;
struct CVALUE* method_block_node_457;
void* __right_value433 = (void*)0;
struct sType* method_block_lambda_type_461;
void* __right_value434 = (void*)0;
struct sType* method_block_result_type_462;
void* __right_value435 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_463;
struct sType* generics_fun_method_block_result_type_464;
int method_generics_num_465;
void* __right_value436 = (void*)0;
int n_474;
struct list$1sTypeph* o2_saved_475;
struct sType* it_478;
int method_generics_num_481;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1CVALUEph* come_params_482;
int i_483;
struct sType* result_type_484;
struct list$1tuple2$2charphsNodephph* o2_saved_485;
struct tuple2$2charphsNodeph* it_486;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_487=0;
struct sNode* node_488=0;
_Bool Value_489;
_Bool __result343__;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_490;
int method_generics_num_494;
void* __right_value448 = (void*)0;
int n_495;
struct list$1sTypeph* o2_saved_496;
struct sType* it_497;
int method_generics_num_498;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
char* __dec_obj210;
void* __right_value452 = (void*)0;
char* __dec_obj211;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1CVALUEph* come_params_501;
struct list$1tuple2$2charphsNodephph* o2_saved_502;
struct tuple2$2charphsNodeph* it_503;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_504=0;
struct sNode* node_505=0;
_Bool Value_506;
_Bool __result346__;
void* __right_value455 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* buf_508;
int j_509;
struct list$1CVALUEph* o2_saved_510;
struct CVALUE* it_511;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value460 = (void*)0;
char* __dec_obj212;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* __dec_obj213;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* __dec_obj214;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* __dec_obj215;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sType* __dec_obj216;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* __dec_obj217;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* __dec_obj218;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sType* __dec_obj219;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* __dec_obj220;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj221;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj222;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj223;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj224;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj225;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj226;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj227;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj228;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj229;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj230;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj231;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj232;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj233;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj234;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj235;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj236;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj237;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj238;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj239;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj240;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj241;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj242;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj243;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj244;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj245;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj246;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj247;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj248;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj249;
_Bool __result347__;
void* __right_value535 = (void*)0;
char* __dec_obj250;
void* __right_value536 = (void*)0;
char* __dec_obj251;
char* p_513;
int version_514;
char* p2_515;
int i_517;
void* __right_value537 = (void*)0;
char* new_fun_name_518;
void* __right_value538 = (void*)0;
_Bool _if_conditional5;
void* __right_value539 = (void*)0;
char* __dec_obj252;
void* __right_value540 = (void*)0;
char* new_fun_name_522;
void* __right_value541 = (void*)0;
_Bool _if_conditional6;
void* __right_value542 = (void*)0;
char* __dec_obj253;
_Bool __result352__;
int i_523;
void* __right_value543 = (void*)0;
char* new_fun_name_524;
void* __right_value544 = (void*)0;
_Bool _if_conditional7;
void* __right_value545 = (void*)0;
char* __dec_obj254;
struct sFun* fun_525;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1CVALUEph* come_params_526;
int i_527;
struct sType* result_type_528;
struct list$1tuple2$2charphsNodephph* o2_saved_529;
struct tuple2$2charphsNodeph* it_530;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_531=0;
struct sNode* node_532=0;
_Bool Value_533;
_Bool __result353__;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_534;
struct sType* __dec_obj255;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct buffer* buf_535;
int j_536;
struct list$1CVALUEph* o2_saved_537;
struct CVALUE* it_538;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value553 = (void*)0;
char* __dec_obj256;
struct sType* __dec_obj257;
_Bool __result354__;
void* __right_value554 = (void*)0;
struct sType* result_type_540;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1sTypeph* param_types_541;
struct list$1sTypeph* o2_saved_542;
struct sType* it_543;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* it2_544;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* __dec_obj258;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1CVALUEph* come_params_545;
int i_546;
struct list$1tuple2$2charphsNodephph* o2_saved_547;
struct tuple2$2charphsNodeph* it_548;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_549=0;
struct sNode* node_550=0;
_Bool Value_551;
_Bool __result355__;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_552;
int n_553;
struct list$1charph* o2_saved_554;
char* it_557;
void* __right_value564 = (void*)0;
_Bool _if_conditional8;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
_Bool _if_conditional9;
void* __right_value571 = (void*)0;
int i_565;
struct list$1tuple2$2charphsNodephph* o2_saved_566;
struct tuple2$2charphsNodeph* it_567;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_568=0;
struct sNode* node_569=0;
_Bool Value_570;
_Bool __result364__;
void* __right_value572 = (void*)0;
struct CVALUE* come_value_571;
void* __right_value573 = (void*)0;
_Bool _if_conditional10;
_Bool Value_572;
_Bool __result365__;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_573;
void* __right_value575 = (void*)0;
_Bool _if_conditional11;
void* __right_value576 = (void*)0;
_Bool _if_conditional12;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
_Bool _if_conditional13;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
_Bool _if_conditional14;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
char* default_param_574;
void* __right_value587 = (void*)0;
char* param_name_578;
void* __right_value588 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_579;
char* p_580;
char* head_581;
int sline_582;
void* __right_value589 = (void*)0;
struct buffer* __dec_obj260;
void* __right_value590 = (void*)0;
struct sNode* node_583;
_Bool Value_584;
_Bool __result368__;
struct buffer* __dec_obj261;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_585;
void* __right_value592 = (void*)0;
_Bool _if_conditional16;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
_Bool _if_conditional17;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
_Bool _if_conditional18;
_Bool __result369__;
_Bool __result370__;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value605 = (void*)0;
struct sNode* current_stack_frame_node_586;
_Bool Value_588;
_Bool __result373__;
void* __right_value606 = (void*)0;
struct CVALUE* come_value_589;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct buffer* method_block2_590;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* method_block_type_591;
void* __right_value611 = (void*)0;
char* class_name_592;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sClass* current_stack_frame_struct_596;
void* __right_value614 = (void*)0;
_Bool __result378__;
void* __right_value615 = (void*)0;
struct sType* result_type_597;
void* __right_value616 = (void*)0;
struct list$1sTypeph* param_types_598;
struct list$1charph* param_names_599;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* all_alhabet_sname_600;
char* p_601;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1sTypeph* o2_saved_602;
struct sType* it_603;
struct sType* param_type_604;
void* __right_value621 = (void*)0;
char* param_name_605;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
char* param_name_606;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* param_name_607;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* source3_608;
char* p_609;
char* head_610;
int sline_611;
struct buffer* __dec_obj264;
void* __right_value628 = (void*)0;
struct sNode* node_612;
_Bool Value_613;
_Bool __result379__;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* method_block_name_614;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct CVALUE* come_value2_615;
struct sFun* fun2_616;
_Bool __result380__;
struct sType* method_block_type2_617;
void* __right_value633 = (void*)0;
char* __dec_obj265;
void* __right_value634 = (void*)0;
struct sType* __dec_obj266;
struct buffer* __dec_obj267;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct buffer* buf_618;
int j_619;
struct list$1CVALUEph* o2_saved_620;
struct CVALUE* it_621;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct CVALUE* come_value_622;
void* __right_value639 = (void*)0;
char* __dec_obj268;
void* __right_value640 = (void*)0;
struct sType* __dec_obj269;
void* __right_value641 = (void*)0;
char* __dec_obj270;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
char* __dec_obj271;
_Bool __result381__;
memset(&i_517, 0, sizeof(int));
    fun_name_414=(char*)come_increment_ref_count(self->fun_name);
    params_415=self->params;
    method_block_416=self->method_block;
    method_block_sline_417=self->method_block_sline;
    var__418=get_variable_from_table(info->lv_table,fun_name_414);
    if(    var__418==((void*)0)) {
        var__418=get_variable_from_table(info->gv_table,fun_name_414);
    }
    if(    var__418) {
        lambda_type_419=var__418->mType;
        if(        string_operator_not_equals(lambda_type_419->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_414);
            __result308__ = (_Bool)0;
            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result308__;
        }
        result_type_420=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_419->mResultType->v1));
        result_type_420->mStatic=(_Bool)0;
        come_params_421=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 502, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_419->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_415)&&!lambda_type_419->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_414,list$1sTypeph_length(lambda_type_419->mParamTypes),list$1tuple2$2charphsNodephph_length(params_415));
            __result310__ = (_Bool)0;
            /*i*/come_call_finalizer3(result_type_420,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result310__;
        }
        i_424=0;
        for(        o2_saved_425=(params_415),it_428=list$1tuple2$2charphsNodephph_begin((o2_saved_425));        !list$1tuple2$2charphsNodephph_end((o2_saved_425));        it_428=list$1tuple2$2charphsNodephph_next((o2_saved_425))        ){
            multiple_assign_var1=it_428;
            label_431=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_432=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_433=node_compile(node_432,info);
            if(            !Value_433) {
                __result317__ = (_Bool)0;
                /* U13 */label_431 = come_decrement_ref_count2(label_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(result_type_420,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result317__;
            }
            else {
            }
            come_value_434=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_419->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value414=list$1sTypephp_operator_load_element(lambda_type_419->mParamTypes,i_424))), "05call.c", 518, 2))==((void*)0))),            /*f*/come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value417=xsprintf("\%s calling param #\%s",((char*)(__right_value415=string_to_string(fun_name_414))),((char*)(__right_value416=int_to_string(i_424)))))),((struct sType*)come_null_check(((struct sType*)(__right_value418=list$1sTypephp_operator_load_element(lambda_type_419->mParamTypes,i_424))), "05call.c", 521, 3)),come_value_434->type,come_value_434,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value419=list$1sTypephp_operator_load_element(lambda_type_419->mParamTypes,i_424))), "05call.c", 522, 4))->mHeap&&come_value_434->type->mHeap)),                /*f*/come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value420=list$1sTypephp_operator_load_element(lambda_type_419->mParamTypes,i_424))), "05call.c", 523, 5)),come_value_434->type,come_value_434,info,(_Bool)1);
                    /*g*/come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_421,(struct CVALUE*)come_increment_ref_count(come_value_434));
            dec_stack_ptr(1,info);
            i_424++;
            /* U13 */label_431 = come_decrement_ref_count2(label_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_432) { node_432 = come_decrement_ref_count2(node_432, ((struct sNode*)node_432)->finalize, ((struct sNode*)node_432)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_434,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 534, "buffer"))));
        buffer_append_str(buf_438,var__418->mCValueName);
        buffer_append_str(buf_438,"(");
        j_439=0;
        for(        o2_saved_440=(struct list$1CVALUEph*)come_increment_ref_count((come_params_421)),it_443=list$1CVALUEph_begin((o2_saved_440));        !list$1CVALUEph_end((o2_saved_440));        it_443=list$1CVALUEph_next((o2_saved_440))        ){
            buffer_append_str(buf_438,it_443->c_value);
            if(            j_439!=list$1CVALUEph_length(come_params_421)-1) {
                buffer_append_str(buf_438,",");
            }
            j_439++;
        }
        /*i*/come_call_finalizer3(o2_saved_440,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_438,")");
        come_value_446=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 551, "CVALUE"))));
        __dec_obj186=come_value_446->c_value;
        come_value_446->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_438));
        /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj187=come_value_446->type;
        come_value_446->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_420));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_446->type->mStatic=(_Bool)0;
        come_value_446->var=((void*)0);
        if(        lambda_type_419->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_446,(struct sType*)come_increment_ref_count(lambda_type_419->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_446->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_446));
        info->calling_fun=((void*)0);
        /*i*/come_call_finalizer3(result_type_420,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_438,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_447=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_414,((void*)0));
        method_generics_448=(_Bool)0;
        if(        generics_fun_447) {
            method_generics_448=list$1charph_length(generics_fun_447->mMethodGenericsTypeNames)>0;
        }
        if(        list$1sTypeph_length(self->method_generics_types)>0||method_generics_448) {
            if(            list$1sTypeph_length(self->method_generics_types)==0) {
                method_generics_types_449=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 575, "list$1sTypeph"))));
                generics_fun_name_450=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_449),info));
                fun_451=map$2charphsFunph_at(info->funcs,generics_fun_name_450,((void*)0));
                if(                method_block_416) {
                    come_params_454=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 581, "list$1CVALUEph"))));
                    fun_455=map$2charphsFunph_at(info->funcs,generics_fun_name_450,((void*)0));
                    no_output_come_code_456=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_416,(struct list$1CVALUEph*)come_increment_ref_count(come_params_454),fun_455,fun_name_414,method_block_sline_417,info,(_Bool)1)) {
                        __result330__ = (_Bool)0;
                        /*i*/come_call_finalizer3(come_params_454,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_450 = come_decrement_ref_count2(generics_fun_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result330__;
                    }
                    info->no_output_come_code=no_output_come_code_456;
                    method_block_node_457=((struct CVALUE*)(__right_value432=list$1CVALUEphp_operator_load_element(come_params_454,-1)));
                    /*g*/come_call_finalizer3(__right_value432,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_461=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_457->type));
                    method_block_result_type_462=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_463=((struct sType*)(__right_value435=list$1sTypephp_operator_load_element(generics_fun_447->mParamTypes,-1)));
                    /*g*/come_call_finalizer3(__right_value435,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_464=generics_fun_method_block_lambda_type_463->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_464->mClass->mMethodGenerics) {
                        method_generics_num_465=generics_fun_method_block_result_type_464->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_449,method_generics_num_465,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_462)));
                    }
                    n_474=0;
                    for(                    o2_saved_475=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_463->mParamTypes)),it_478=list$1sTypeph_begin((o2_saved_475));                    !list$1sTypeph_end((o2_saved_475));                    it_478=list$1sTypeph_next((o2_saved_475))                    ){
                        if(                        it_478->mClass->mMethodGenerics) {
                            method_generics_num_481=it_478->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(method_generics_types_449,method_generics_num_481,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value440=list$1sTypephp_operator_load_element(method_block_lambda_type_461->mParamTypes,n_474))), "05call.c", 607, 6)))));
                            /*g*/come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_474++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_454,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_461,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_params_482=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 613, "list$1CVALUEph"))));
                i_483=0;
                result_type_484=((void*)0);
                for(                o2_saved_485=(params_415),it_486=list$1tuple2$2charphsNodephph_begin((o2_saved_485));                !list$1tuple2$2charphsNodephph_end((o2_saved_485));                it_486=list$1tuple2$2charphsNodephph_next((o2_saved_485))                ){
                    multiple_assign_var2=it_486;
                    label_487=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                    node_488=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                    Value_489=node_compile(node_488,info);
                    if(                    !Value_489) {
                        __result343__ = (_Bool)0;
                        /* U13 */label_487 = come_decrement_ref_count2(label_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_488) { node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_generics_types_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_450 = come_decrement_ref_count2(generics_fun_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_482,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result343__;
                    }
                    else {
                    }
                    come_value_490=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    list$1CVALUEph_add(come_params_482,(struct CVALUE*)come_increment_ref_count(come_value_490));
                    /* U13 */label_487 = come_decrement_ref_count2(label_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_488) { node_488 = come_decrement_ref_count2(node_488, ((struct sNode*)node_488)->finalize, ((struct sNode*)node_488)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(                generics_fun_447->mResultType->mClass->mMethodGenerics) {
                    method_generics_num_494=generics_fun_447->mResultType->mClass->mMethodGenericsNum;
                    if(                    info->function_result_type) {
                        list$1sTypephp_operator_store_element(method_generics_types_449,method_generics_num_494,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                    }
                }
                n_495=0;
                for(                o2_saved_496=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_447->mParamTypes)),it_497=list$1sTypeph_begin((o2_saved_496));                !list$1sTypeph_end((o2_saved_496));                it_497=list$1sTypeph_next((o2_saved_496))                ){
                    if(                    it_497->mClass->mMethodGenerics) {
                        method_generics_num_498=it_497->mClass->mMethodGenericsNum;
                        if(                        n_495<list$1CVALUEph_length(come_params_482)) {
                            list$1sTypephp_operator_store_element(method_generics_types_449,method_generics_num_498,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value449=list$1CVALUEphp_operator_load_element(come_params_482,n_495)))->type)));
                            /*g*/come_call_finalizer3(__right_value449,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        }
                    }
                    n_495++;
                }
                /*i*/come_call_finalizer3(o2_saved_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                map$2charphsFunph_remove(info->funcs,generics_fun_name_450);
                __dec_obj210=fun_name_414;
                fun_name_414=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_449),info));
                /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */generics_fun_name_450 = come_decrement_ref_count2(generics_fun_name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_482,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj211=fun_name_414;
                fun_name_414=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_414),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
                /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        if(        string_operator_equals(fun_name_414,"__builtin_memmove")||string_operator_equals(fun_name_414,"__builtin_memset")||string_operator_equals(fun_name_414,"__builtin_ffs")||string_operator_equals(fun_name_414,"__builtin_ffsl")||string_operator_equals(fun_name_414,"__builtin_ffsll")||string_operator_equals(fun_name_414,"__builtin_bswap16")||string_operator_equals(fun_name_414,"__builtin_bswap32")||string_operator_equals(fun_name_414,"__builtin_bswap64")||string_operator_equals(fun_name_414,"__builtin_constant_p")||string_operator_equals(fun_name_414,"__builtin_expect")||string_operator_equals(fun_name_414,"__builtin___memset_chk")||string_operator_equals(fun_name_414,"__builtin_object_size")||string_operator_equals(fun_name_414,"__builtin___memcpy_chk")||string_operator_equals(fun_name_414,"__builtin___strncpy_chk")||string_operator_equals(fun_name_414,"__builtin___strncat_chk")||string_operator_equals(fun_name_414,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_414,"__builtin_strrchr")||string_operator_equals(fun_name_414,"__builtin_clz")||string_operator_equals(fun_name_414,"__dsb")||string_operator_equals(fun_name_414,"__isb")||string_operator_equals(fun_name_414,"__dmb")||memcmp(fun_name_414,"__builtin_arm_",strlen("__builtin_arm_"))==0||string_operator_equals(fun_name_414,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_414,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_414,"__c11_atomic_store")||string_operator_equals(fun_name_414,"__c11_atomic_load")||string_operator_equals(fun_name_414,"__c11_atomic_exchange")||string_operator_equals(fun_name_414,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_414,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_414,"__c11_atomic_fetch_xor")) {
            come_params_501=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 709, "list$1CVALUEph"))));
            for(            o2_saved_502=(params_415),it_503=list$1tuple2$2charphsNodephph_begin((o2_saved_502));            !list$1tuple2$2charphsNodephph_end((o2_saved_502));            it_503=list$1tuple2$2charphsNodephph_next((o2_saved_502))            ){
                multiple_assign_var3=it_503;
                label_504=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_505=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_506=node_compile(node_505,info);
                if(                !Value_506) {
                    __result346__ = (_Bool)0;
                    /* U13 */label_504 = come_decrement_ref_count2(label_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_501,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result346__;
                }
                else {
                }
                come_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_501,(struct CVALUE*)come_increment_ref_count(come_value_507));
                /* U13 */label_504 = come_decrement_ref_count2(label_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_508=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 723, "buffer"))));
            buffer_append_str(buf_508,fun_name_414);
            buffer_append_str(buf_508,"(");
            j_509=0;
            for(            o2_saved_510=(struct list$1CVALUEph*)come_increment_ref_count((come_params_501)),it_511=list$1CVALUEph_begin((o2_saved_510));            !list$1CVALUEph_end((o2_saved_510));            it_511=list$1CVALUEph_next((o2_saved_510))            ){
                buffer_append_str(buf_508,it_511->c_value);
                if(                j_509!=list$1CVALUEph_length(come_params_501)-1) {
                    buffer_append_str(buf_508,",");
                }
                j_509++;
            }
            /*i*/come_call_finalizer3(o2_saved_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_508,")");
            come_value_512=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 740, "CVALUE"))));
            __dec_obj212=come_value_512->c_value;
            come_value_512->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_508));
            /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(fun_name_414,"__builtin_memmove")||string_operator_equals(fun_name_414,"__builtin_memset")) {
                __dec_obj213=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 744, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_ffs")) {
                __dec_obj214=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 747, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_ffsl")) {
                __dec_obj215=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 750, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_ffsll")) {
                __dec_obj216=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 753, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_bswap16")) {
                __dec_obj217=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 756, "sType")),"short",(_Bool)0,info));
                come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_bswap32")) {
                __dec_obj218=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 759, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_bswap64")) {
                __dec_obj219=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 762, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_constant_p")) {
                __dec_obj220=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 765, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_expect")) {
                __dec_obj221=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 768, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin___memset_chk")) {
                __dec_obj222=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 771, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_512->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_object_size")) {
                __dec_obj223=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 775, "sType")),"long",(_Bool)0,info));
                come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin___memcpy_chk")) {
                __dec_obj224=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 778, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_512->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_414,"__builtin___strncpy_chk")) {
                __dec_obj225=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_512->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_414,"__builtin___strncat_chk")) {
                __dec_obj226=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 786, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_512->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_strrchr")) {
                __dec_obj227=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 790, "sType")),"char",(_Bool)0,info));
                come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_512->type->mPointerNum=1;
            }
            else if(            string_operator_equals(fun_name_414,"__builtin___vsnprintf_chk")) {
                __dec_obj228=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 794, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_clz")) {
                __dec_obj229=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 797, "sType")),"int",(_Bool)0,info));
                come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_thread_fence")) {
                __dec_obj230=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 800, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_signal_fence")) {
                __dec_obj231=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_exchange")) {
                __dec_obj232=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value499=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 806, 7))->type));
                come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value499,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_exchange_strong")) {
                __dec_obj233=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value501=list$1CVALUEphp_operator_load_element(come_params_501,2))), "05call.c", 809, 8))->type));
                come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value501,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_exchange_weak")) {
                __dec_obj234=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value503=list$1CVALUEphp_operator_load_element(come_params_501,2))), "05call.c", 812, 9))->type));
                come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value503,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_store")) {
                __dec_obj235=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 815, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_load")) {
                __dec_obj236=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value507=list$1CVALUEphp_operator_load_element(come_params_501,0))), "05call.c", 818, 10))->type));
                come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value507,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_value_512->type->mPointerNum--;
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_fetch_add")) {
                __dec_obj237=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value509=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 822, 11))->type));
                come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value509,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_fetch_sub")) {
                __dec_obj238=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value511=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 825, 12))->type));
                come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value511,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_fetch_and")) {
                __dec_obj239=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value513=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 828, 13))->type));
                come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value513,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_fetch_or")) {
                __dec_obj240=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value515=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 831, 14))->type));
                come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value515,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__c11_atomic_fetch_xor")) {
                __dec_obj241=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(come_params_501,1))), "05call.c", 834, 15))->type));
                come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__dsb")) {
                __dec_obj242=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 837, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__isb")) {
                __dec_obj243=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 840, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__dmb")) {
                __dec_obj244=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 843, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_arm_cdp")) {
                __dec_obj245=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 846, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_arm_ldc")) {
                __dec_obj246=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 849, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_arm_stc")) {
                __dec_obj247=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 852, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_arm_stcl")) {
                __dec_obj248=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 855, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            string_operator_equals(fun_name_414,"__builtin_arm_ldcl")) {
                __dec_obj249=come_value_512->type;
                come_value_512->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 858, "sType")),"void",(_Bool)0,info));
                come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_value_512->var=((void*)0);
            add_come_last_code(info,"%s",come_value_512->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
            __result347__ = (_Bool)1;
            /*i*/come_call_finalizer3(come_params_501,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_508,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result347__;
            /*i*/come_call_finalizer3(come_params_501,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_508,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"string")) {
            __dec_obj250=fun_name_414;
            fun_name_414=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
            /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"wstring")) {
            __dec_obj251=fun_name_414;
            fun_name_414=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
            /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_414,"inherit")) {
            p_513=info->come_fun->mName;
            version_514=0;
            while(*p_513) {
                if(                *p_513==95&&*(p_513+1)==118&&xisdigit(*(p_513+2))) {
                    p2_515=p_513+2;
                    version_514=0;
                    while(xisdigit(*p2_515)) {
                        version_514=version_514*10+(*p2_515-48);
                        p2_515++;
                    }
                    break;
                }
                else {
                    p_513++;
                }
            }
            char real_fun_name_516[2048];
            memset(&real_fun_name_516, 0, sizeof(char)            *(2048)            );
            memcpy(real_fun_name_516,info->come_fun->mName,p_513-info->come_fun->mName);
            real_fun_name_516[p_513-info->come_fun->mName]=0;
            for(            i_517=version_514-1;            i_517>=1;            i_517--            ){
                new_fun_name_518=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_516,i_517));
                if(                (_if_conditional5=(((struct sFun*)(__right_value538=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_518))))),                /*f*/come_call_finalizer3(__right_value538,sFun_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __dec_obj252=fun_name_414;
                    fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_518));
                    /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_518 = come_decrement_ref_count2(new_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_518 = come_decrement_ref_count2(new_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_517==0) {
                new_fun_name_522=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_516));
                if(                (_if_conditional6=(((struct sFun*)(__right_value541=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_522))))),                /*f*/come_call_finalizer3(__right_value541,sFun_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional6) {
                    __dec_obj253=fun_name_414;
                    fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_522));
                    /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(                string_operator_equals(fun_name_414,info->come_fun->mName)) {
                    err_msg(info,"invalid inherit");
                    __result352__ = (_Bool)0;
                    /* U13 */new_fun_name_522 = come_decrement_ref_count2(new_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result352__;
                }
                /* U13 */new_fun_name_522 = come_decrement_ref_count2(new_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_523=128;            i_523>=1;            i_523--            ){
                new_fun_name_524=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_414,i_523));
                if(                (_if_conditional7=(((struct sFun*)(__right_value544=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_524))))),                /*f*/come_call_finalizer3(__right_value544,sFun_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    __dec_obj254=fun_name_414;
                    fun_name_414=(char*)come_increment_ref_count(__builtin_string(new_fun_name_524));
                    /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_524 = come_decrement_ref_count2(new_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_524 = come_decrement_ref_count2(new_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        fun_525=map$2charphsFunph_at(info->funcs,fun_name_414,((void*)0));
        if(        string_operator_equals(fun_name_414,"__builtin_va_arg")) {
            come_params_526=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 936, "list$1CVALUEph"))));
            i_527=0;
            result_type_528=((void*)0);
            for(            o2_saved_529=(params_415),it_530=list$1tuple2$2charphsNodephph_begin((o2_saved_529));            !list$1tuple2$2charphsNodephph_end((o2_saved_529));            it_530=list$1tuple2$2charphsNodephph_next((o2_saved_529))            ){
                multiple_assign_var4=it_530;
                label_531=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                node_532=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                Value_533=node_compile(node_532,info);
                if(                !Value_533) {
                    __result353__ = (_Bool)0;
                    /* U13 */label_531 = come_decrement_ref_count2(label_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_params_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result353__;
                }
                else {
                }
                come_value_534=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_526,(struct CVALUE*)come_increment_ref_count(come_value_534));
                __dec_obj255=result_type_528;
                result_type_528=(struct sType*)come_increment_ref_count(come_value_534->type);
                come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */label_531 = come_decrement_ref_count2(label_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_535=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 955, "buffer"))));
            buffer_append_str(buf_535,fun_name_414);
            buffer_append_str(buf_535,"(");
            j_536=0;
            for(            o2_saved_537=(struct list$1CVALUEph*)come_increment_ref_count((come_params_526)),it_538=list$1CVALUEph_begin((o2_saved_537));            !list$1CVALUEph_end((o2_saved_537));            it_538=list$1CVALUEph_next((o2_saved_537))            ){
                buffer_append_str(buf_535,it_538->c_value);
                if(                j_536!=list$1CVALUEph_length(come_params_526)-1) {
                    buffer_append_str(buf_535,",");
                }
                j_536++;
            }
            /*i*/come_call_finalizer3(o2_saved_537,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_535,")");
            come_value_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 972, "CVALUE"))));
            __dec_obj256=come_value_539->c_value;
            come_value_539->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_535));
            /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj257=come_value_539->type;
            come_value_539->type=(struct sType*)come_increment_ref_count(result_type_528);
            come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_539->var=((void*)0);
            add_come_last_code(info,"%s",come_value_539->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_539));
            /*i*/come_call_finalizer3(come_params_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_525==((void*)0)) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_414);
            __result354__ = (_Bool)1;
            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result354__;
        }
        else {
            result_type_540=(struct sType*)come_increment_ref_count(sType_clone(fun_525->mResultType));
            result_type_540->mStatic=(_Bool)0;
            param_types_541=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 989, "list$1sTypeph"))));
            for(            o2_saved_542=(struct list$1sTypeph*)come_increment_ref_count((fun_525->mParamTypes)),it_543=list$1sTypeph_begin((o2_saved_542));            !list$1sTypeph_end((o2_saved_542));            it_543=list$1sTypeph_next((o2_saved_542))            ){
                it2_544=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value557=sType_clone(it_543))),info->generics_type,info));
                /*g*/come_call_finalizer3(__right_value557,sType_finalize, 0, 1, 0, 0, (void*)0);
                list$1sTypeph_push_back(param_types_541,(struct sType*)come_increment_ref_count(sType_clone(it2_544)));
                /*i*/come_call_finalizer3(it2_544,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_542,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj258=result_type_540;
            result_type_540=(struct sType*)come_increment_ref_count(solve_generics(result_type_540,info->generics_type,info));
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_params_545=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 998, "list$1CVALUEph"))));
            for(            i_546=0;            i_546<list$1sTypeph_length(fun_525->mParamTypes)-(((method_block_416)?(2):(0)));            i_546++            ){
                list$1CVALUEph_add(come_params_545,((void*)0));
            }
            for(            o2_saved_547=(params_415),it_548=list$1tuple2$2charphsNodephph_begin((o2_saved_547));            !list$1tuple2$2charphsNodephph_end((o2_saved_547));            it_548=list$1tuple2$2charphsNodephph_next((o2_saved_547))            ){
                multiple_assign_var5=it_548;
                label_549=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                node_550=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                fun_525->mVarArgs||string_operator_equals(fun_name_414,"__builtin_va_start")) {
                }
                else if(                label_549) {
                    Value_551=node_compile(node_550,info);
                    if(                    !Value_551) {
                        __result355__ = (_Bool)0;
                        /* U13 */label_549 = come_decrement_ref_count2(label_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result355__;
                    }
                    else {
                    }
                    come_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    n_553=0;
                    for(                    o2_saved_554=(struct list$1charph*)come_increment_ref_count((fun_525->mParamNames)),it_557=list$1charph_begin((o2_saved_554));                    !list$1charph_end((o2_saved_554));                    it_557=list$1charph_next((o2_saved_554))                    ){
                        if(                        string_operator_equals(label_549,it_557)) {
                            break;
                        }
                        n_553++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    (_if_conditional8=(((struct sType*)(__right_value564=list$1sTypephp_operator_load_element(param_types_541,n_553))))),                    /*f*/come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional8) {
                        check_assign_type(((char*)(__right_value567=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value565=string_to_string(fun_name_414))),((char*)(__right_value566=int_to_string(n_553)))))),((struct sType*)come_null_check(((struct sType*)(__right_value568=list$1sTypephp_operator_load_element(param_types_541,n_553))), "05call.c", 1027, 16)),come_value_552->type,come_value_552,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional9=(((struct sType*)(__right_value569=list$1sTypephp_operator_load_element(param_types_541,n_553)))&&((struct sType*)come_null_check(((struct sType*)(__right_value570=list$1sTypephp_operator_load_element(param_types_541,n_553))), "05call.c", 1029, 17))->mHeap&&come_value_552->type->mHeap)),                    /*f*/come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0),
                    /*f*/come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional9) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value571=list$1sTypephp_operator_load_element(param_types_541,n_553))), "05call.c", 1030, 18)),come_value_552->type,come_value_552,info,(_Bool)1);
                        /*g*/come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_545,n_553,(struct CVALUE*)come_increment_ref_count(come_value_552));
                    /*i*/come_call_finalizer3(come_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_549 = come_decrement_ref_count2(label_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_550) { node_550 = come_decrement_ref_count2(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            i_565=0;
            for(            o2_saved_566=(params_415),it_567=list$1tuple2$2charphsNodephph_begin((o2_saved_566));            !list$1tuple2$2charphsNodephph_end((o2_saved_566));            it_567=list$1tuple2$2charphsNodephph_next((o2_saved_566))            ){
                multiple_assign_var6=it_567;
                label_568=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                node_569=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                fun_525->mVarArgs||string_operator_equals(fun_name_414,"__builtin_va_start")) {
                    Value_570=node_compile(node_569,info);
                    if(                    !Value_570) {
                        __result364__ = (_Bool)0;
                        /* U13 */label_568 = come_decrement_ref_count2(label_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result364__;
                    }
                    else {
                    }
                    come_value_571=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        (_if_conditional10=(((struct CVALUE*)(__right_value573=list$1CVALUEphp_operator_load_element(come_params_545,i_565)))==((void*)0))),                        /*f*/come_call_finalizer3(__right_value573,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional10) {
                            break;
                        }
                        else {
                            i_565++;
                        }
                    }
                    list$1CVALUEph_replace(come_params_545,i_565,(struct CVALUE*)come_increment_ref_count(come_value_571));
                    i_565++;
                    /*i*/come_call_finalizer3(come_value_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                label_568) {
                }
                else {
                    Value_572=node_compile(node_569,info);
                    if(                    !Value_572) {
                        __result365__ = (_Bool)0;
                        /* U13 */label_568 = come_decrement_ref_count2(label_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result365__;
                    }
                    else {
                    }
                    come_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(                        (_if_conditional11=(((struct CVALUE*)(__right_value575=list$1CVALUEphp_operator_load_element(come_params_545,i_565)))==((void*)0))),                        /*f*/come_call_finalizer3(__right_value575,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional11) {
                            break;
                        }
                        else {
                            i_565++;
                        }
                    }
                    if(                    (_if_conditional12=(((struct sType*)(__right_value576=list$1sTypephp_operator_load_element(param_types_541,i_565))))),                    /*f*/come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        check_assign_type(((char*)(__right_value579=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value577=string_to_string(fun_name_414))),((char*)(__right_value578=int_to_string(i_565)))))),((struct sType*)come_null_check(((struct sType*)(__right_value580=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1081, 19)),come_value_573->type,come_value_573,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional13=(((struct sType*)(__right_value581=list$1sTypephp_operator_load_element(param_types_541,i_565)))&&((struct sType*)come_null_check(((struct sType*)(__right_value582=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1083, 20))->mHeap&&come_value_573->type->mHeap)),                    /*f*/come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0),
                    /*f*/come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value583=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1084, 21)),come_value_573->type,come_value_573,info,(_Bool)1);
                        /*g*/come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_545,i_565,(struct CVALUE*)come_increment_ref_count(come_value_573));
                    i_565++;
                    /*i*/come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                /* U13 */label_568 = come_decrement_ref_count2(label_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            while((_Bool)1) {
                if(                (_if_conditional14=(((struct CVALUE*)(__right_value584=list$1CVALUEphp_operator_load_element(come_params_545,i_565)))==((void*)0))),                /*f*/come_call_finalizer3(__right_value584,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional14) {
                    break;
                }
                else {
                    i_565++;
                }
            }
            if(            list$1tuple2$2charphsNodephph_length(params_415)<list$1sTypeph_length(fun_525->mParamTypes)) {
                for(                ;                i_565<list$1sTypeph_length(fun_525->mParamTypes)-(((method_block_416)?(2):(0)));                i_565++                ){
                    default_param_574=(char*)come_increment_ref_count(string_clone(((char*)(__right_value585=list$1charphp_operator_load_element(fun_525->mParamDefaultParametors,i_565)))));
                    /* U11 */__right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    param_name_578=((char*)come_null_check(((char*)(__right_value587=list$1charphp_operator_load_element(fun_525->mParamNames,i_565))), "05call.c", 1105, 22));
                    /* U11 */__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(                    (_if_conditional15=(default_param_574&&string_operator_not_equals(default_param_574,"")&&((struct CVALUE*)(__right_value588=list$1CVALUEphp_operator_load_element(come_params_545,i_565)))==((void*)0))),                    /*f*/come_call_finalizer3(__right_value588,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        source_579=(struct buffer*)come_increment_ref_count(info->source);
                        p_580=info->p;
                        head_581=info->head;
                        sline_582=info->sline;
                        __dec_obj260=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_574));
                        come_call_finalizer3(__dec_obj260,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=info->source->buf;
                        info->head=info->source->buf;
                        node_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        Value_584=node_compile(node_583,info);
                        if(                        !Value_584) {
                            __result368__ = (_Bool)0;
                            /*i*/come_call_finalizer3(source_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /* U13 */default_param_574 = come_decrement_ref_count2(default_param_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result368__;
                        }
                        else {
                        }
                        __dec_obj261=info->source;
                        info->source=(struct buffer*)come_increment_ref_count(source_579);
                        come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        info->p=p_580;
                        info->head=head_581;
                        info->sline=sline_582;
                        come_value_585=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        if(                        (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1129, 23)))),                        /*f*/come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional16) {
                            check_assign_type(((char*)(__right_value595=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value593=string_to_string(fun_name_414))),((char*)(__right_value594=int_to_string(i_565)))))),((struct sType*)come_null_check(((struct sType*)(__right_value596=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1130, 24)),come_value_585->type,come_value_585,(_Bool)0,(_Bool)1,(_Bool)0,info);
                            /* U11 */__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /* U11 */__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value596,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        if(                        (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value597=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1132, 25))&&((struct sType*)come_null_check(((struct sType*)(__right_value598=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1132, 26))->mHeap&&come_value_585->type->mHeap)),                        /*f*/come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0),
                        /*f*/come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional17) {
                            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value599=list$1sTypephp_operator_load_element(param_types_541,i_565))), "05call.c", 1133, 27)),come_value_585->type,come_value_585,info,(_Bool)1);
                            /*g*/come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_replace(come_params_545,i_565,(struct CVALUE*)come_increment_ref_count(come_value_585));
                        dec_stack_ptr(1,info);
                        /*i*/come_call_finalizer3(source_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(come_value_585,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        (_if_conditional18=(((struct CVALUE*)(__right_value600=list$1CVALUEphp_operator_load_element(come_params_545,i_565)))==((void*)0))),                        /*f*/come_call_finalizer3(__right_value600,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional18) {
                            err_msg(info,"require parametor(%s)(1) %d",fun_525->mName,i_565);
                            __result369__ = (_Bool)0;
                            /* U13 */default_param_574 = come_decrement_ref_count2(default_param_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result369__;
                        }
                    }
                    /* U13 */default_param_574 = come_decrement_ref_count2(default_param_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(            list$1sTypeph_length(fun_525->mParamTypes)-(((method_block_416)?(2):(0)))!=list$1CVALUEph_length(come_params_545)&&!fun_525->mVarArgs&&string_operator_not_equals(fun_name_414,"__builtin_va_start")&&string_operator_not_equals(fun_name_414,"__builtin_va_end")) {
                err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_414,list$1sTypeph_length(fun_525->mParamTypes),list$1tuple2$2charphsNodephph_length(params_415));
                __result370__ = (_Bool)0;
                /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result370__;
            }
            if(            method_block_416) {
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1154, "struct sNode");
                _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value602=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1154, "sCurrentNode2")),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sCurrentNode2_finalize;
                _inf_value1->clone=(void*)sCurrentNode2_clone;
                _inf_value1->compile=(void*)sCurrentNode2_compile;
                _inf_value1->sline=(void*)sCurrentNode2_sline;
                _inf_value1->sline_real=(void*)sNodeBase_sline_real;
                _inf_value1->sname=(void*)sCurrentNode2_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sCurrentNode2_kind;
                current_stack_frame_node_586=(struct sNode*)come_increment_ref_count(_inf_value1);
                /*g*/come_call_finalizer3(__right_value602,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
                Value_588=node_compile(current_stack_frame_node_586,info);
                if(                !Value_588) {
                    __result373__ = (_Bool)0;
                    if(current_stack_frame_node_586) { current_stack_frame_node_586 = come_decrement_ref_count2(current_stack_frame_node_586, ((struct sNode*)current_stack_frame_node_586)->finalize, ((struct sNode*)current_stack_frame_node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result373__;
                }
                else {
                }
                come_value_589=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                list$1CVALUEph_push_back(come_params_545,(struct CVALUE*)come_increment_ref_count(come_value_589));
                dec_stack_ptr(1,info);
                method_block2_590=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1164, "buffer"))));
                method_block_type_591=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value609=list$1sTypephp_operator_load_element(fun_525->mParamTypes,-1))), "05call.c", 1165, 28))));
                /*g*/come_call_finalizer3(__right_value609,sType_finalize, 0, 1, 0, 0, (void*)0);
                class_name_592=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
                ((struct sType*)come_null_check(((struct sType*)(__right_value612=list$1sTypephp_operator_load_element(method_block_type_591->mParamTypes,0))), "05call.c", 1169, 29))->mClass=((struct sClass*)(__right_value613=map$2charphsClassphp_operator_load_element(info->classes,class_name_592)));
                /*g*/come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value613,sClass_finalize, 0, 1, 0, 0, (void*)0);
                current_stack_frame_struct_596=info->current_stack_frame_struct;
                info->current_stack_frame_struct=((struct sClass*)(__right_value614=map$2charphsClassphp_operator_load_element(info->classes,class_name_592)));
                /*g*/come_call_finalizer3(__right_value614,sClass_finalize, 0, 1, 0, 0, (void*)0);
                info->num_method_block++;
                if(                string_operator_not_equals(method_block_type_591->mClass->mName,"lambda")) {
                    err_msg(info,"This function does not have method block(%s)",fun_name_414);
                    __result378__ = (_Bool)0;
                    if(current_stack_frame_node_586) { current_stack_frame_node_586 = come_decrement_ref_count2(current_stack_frame_node_586, ((struct sNode*)current_stack_frame_node_586)->finalize, ((struct sNode*)current_stack_frame_node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_592 = come_decrement_ref_count2(class_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result378__;
                }
                result_type_597=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_591->mResultType->v1));
                result_type_597->mStatic=(_Bool)0;
                param_types_598=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_591->mParamTypes));
                param_names_599=method_block_type_591->mParamNames;
                all_alhabet_sname_600=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1185, "buffer"))));
                {
                    p_601=info->sname;
                    while(*p_601) {
                        if(                        xisalnum(*p_601)) {
                            buffer_append_char(all_alhabet_sname_600,*p_601++);
                        }
                        else {
                            p_601++;
                        }
                    }
                }
                buffer_append_format(method_block2_590,"%s fun_block%d_%s(",((char*)(__right_value619=make_type_name_string(result_type_597,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value620=buffer_to_string(all_alhabet_sname_600))));
                /* U11 */__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_565=0;
                for(                o2_saved_602=(struct list$1sTypeph*)come_increment_ref_count((param_types_598)),it_603=list$1sTypeph_begin((o2_saved_602));                !list$1sTypeph_end((o2_saved_602));                it_603=list$1sTypeph_next((o2_saved_602))                ){
                    param_type_604=it_603;
                    if(                    i_565==0) {
                        param_name_605=(char*)come_increment_ref_count(xsprintf("parent"));
                        buffer_append_format(method_block2_590,"%s",((char*)(__right_value622=make_define_var(param_type_604,param_name_605,(_Bool)0,info))));
                        /* U11 */__right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_605 = come_decrement_ref_count2(param_name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else if(                    i_565==1) {
                        param_name_606=(char*)come_increment_ref_count(xsprintf("it"));
                        buffer_append_format(method_block2_590,"%s",((char*)(__right_value624=make_define_var_no_solved(param_type_604,param_name_606,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_606 = come_decrement_ref_count2(param_name_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_607=(char*)come_increment_ref_count(xsprintf("it%d",i_565));
                        buffer_append_format(method_block2_590,"%s",((char*)(__right_value626=make_define_var_no_solved(param_type_604,param_name_607,(_Bool)0,(_Bool)1,info))));
                        /* U11 */__right_value626 = come_decrement_ref_count2(__right_value626, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U13 */param_name_607 = come_decrement_ref_count2(param_name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(                    i_565!=list$1sTypeph_length(param_types_598)-1) {
                        buffer_append_str(method_block2_590,",");
                    }
                    i_565++;
                }
                /*i*/come_call_finalizer3(o2_saved_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(method_block2_590,")\n");
                buffer_append_str(method_block2_590,((char*)(__right_value627=buffer_to_string(method_block_416))));
                /* U11 */__right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                source3_608=(struct buffer*)come_increment_ref_count(info->source);
                p_609=info->p;
                head_610=info->head;
                sline_611=info->sline;
                __dec_obj264=info->source;
                info->source=(struct buffer*)come_increment_ref_count(method_block2_590);
                come_call_finalizer3(__dec_obj264,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=method_block_sline_417;
                node_612=(struct sNode*)come_increment_ref_count(parse_function(info));
                Value_613=node_compile(node_612,info);
                if(                !Value_613) {
                    __result379__ = (_Bool)0;
                    if(current_stack_frame_node_586) { current_stack_frame_node_586 = come_decrement_ref_count2(current_stack_frame_node_586, ((struct sNode*)current_stack_frame_node_586)->finalize, ((struct sNode*)current_stack_frame_node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_592 = come_decrement_ref_count2(class_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_598,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_612) { node_612 = come_decrement_ref_count2(node_612, ((struct sNode*)node_612)->finalize, ((struct sNode*)node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result379__;
                }
                else {
                }
                method_block_name_614=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value629=buffer_to_string(all_alhabet_sname_600)))));
                /* U11 */__right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_value2_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1250, "CVALUE"))));
                fun2_616=map$2charphsFunph_at(info->funcs,method_block_name_614,((void*)0));
                if(                fun2_616==((void*)0)) {
                    err_msg(info,"method block function not found(%s)",method_block_name_614);
                    __result380__ = (_Bool)1;
                    if(current_stack_frame_node_586) { current_stack_frame_node_586 = come_decrement_ref_count2(current_stack_frame_node_586, ((struct sNode*)current_stack_frame_node_586)->finalize, ((struct sNode*)current_stack_frame_node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block2_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */class_name_592 = come_decrement_ref_count2(class_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_598,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(all_alhabet_sname_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(source3_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_612) { node_612 = come_decrement_ref_count2(node_612, ((struct sNode*)node_612)->finalize, ((struct sNode*)node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */method_block_name_614 = come_decrement_ref_count2(method_block_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value2_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result380__;
                }
                method_block_type2_617=fun2_616->mLambdaType;
                __dec_obj265=come_value2_615->c_value;
                come_value2_615->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_614));
                /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj266=come_value2_615->type;
                come_value2_615->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_617));
                come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value2_615->var=((void*)0);
                list$1CVALUEph_push_back(come_params_545,(struct CVALUE*)come_increment_ref_count(come_value2_615));
                __dec_obj267=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source3_608);
                come_call_finalizer3(__dec_obj267,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_609;
                info->head=head_610;
                info->sline=sline_611;
                info->current_stack_frame_struct=current_stack_frame_struct_596;
                if(current_stack_frame_node_586) { current_stack_frame_node_586 = come_decrement_ref_count2(current_stack_frame_node_586, ((struct sNode*)current_stack_frame_node_586)->finalize, ((struct sNode*)current_stack_frame_node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block2_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_block_type_591,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */class_name_592 = come_decrement_ref_count2(class_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_598,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(all_alhabet_sname_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(source3_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_612) { node_612 = come_decrement_ref_count2(node_612, ((struct sNode*)node_612)->finalize, ((struct sNode*)node_612)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */method_block_name_614 = come_decrement_ref_count2(method_block_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value2_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_618=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1275, "buffer"))));
            buffer_append_str(buf_618,fun_name_414);
            buffer_append_str(buf_618,"(");
            j_619=0;
            for(            o2_saved_620=(struct list$1CVALUEph*)come_increment_ref_count((come_params_545)),it_621=list$1CVALUEph_begin((o2_saved_620));            !list$1CVALUEph_end((o2_saved_620));            it_621=list$1CVALUEph_next((o2_saved_620))            ){
                buffer_append_str(buf_618,it_621->c_value);
                if(                j_619!=list$1CVALUEph_length(come_params_545)-1) {
                    buffer_append_str(buf_618,",");
                }
                j_619++;
            }
            /*i*/come_call_finalizer3(o2_saved_620,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_618,")");
            come_value_622=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1292, "CVALUE"))));
            __dec_obj268=come_value_622->c_value;
            come_value_622->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_618));
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj269=come_value_622->type;
            come_value_622->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_540));
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_622->type->mStatic=(_Bool)0;
            come_value_622->var=((void*)0);
            if(            fun_525->mResultType->mHeap) {
                append_object_to_right_values2(come_value_622,(struct sType*)come_increment_ref_count(result_type_540),info,(_Bool)0);
            }
            if(            string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                if(                string_operator_not_equals(fun_name_414,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_414,"null_check")&&string_operator_not_equals(fun_name_414,"come_push_stackframe")&&string_operator_not_equals(fun_name_414,"come_pop_stackframe")) {
                    __dec_obj270=come_value_622->c_value;
                    come_value_622->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_622->c_value,come_value_622->type,info));
                    /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            if(            !self->guard_break&&result_type_540->mGuardValue&&result_type_540->mPointerNum>0) {
                __dec_obj271=come_value_622->c_value;
                come_value_622->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value642=make_type_name_string(result_type_540,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_622->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            add_come_last_code(info,"%s",come_value_622->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_622));
            /*i*/come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        info->calling_fun=fun_525;
    }
    __result381__ = (_Bool)1;
    /* U13 */fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result381__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result300__;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_406;
struct list_item$1tuple2$2charphsNodephph* it_407;
void* __right_value407 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result305__;
    if(    self==((void*)0)) {
        __result300__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_406=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1022, "list$1tuple2$2charphsNodephph"))));
    it_407=self->head;
    while(it_407!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_406,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_407->item)));
        it_407=it_407->next;
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_406;
    /*i*/come_call_finalizer3(result_406,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result301__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_404;
struct list_item$1tuple2$2charphsNodephph* prev_it_405;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        /*i*/come_call_finalizer3(prev_it_405,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj161;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj161=self->item;
            come_call_finalizer3(__dec_obj161,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_408;
struct tuple2$2charphsNodeph* __dec_obj164;
void* __right_value402 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_409;
struct tuple2$2charphsNodeph* __dec_obj167;
void* __right_value403 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_410;
struct tuple2$2charphsNodeph* __dec_obj170;
struct list$1tuple2$2charphsNodephph* __result302__;
    if(    self->len==0) {
        litem_408=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value401=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1tuple2$2charphsNodephph"))));
        litem_408->prev=((void*)0);
        litem_408->next=((void*)0);
        __dec_obj164=litem_408->item;
        litem_408->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj164,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head=litem_408;
    }
    else if(    self->len==1) {
        litem_409=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value402=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1tuple2$2charphsNodephph"))));
        litem_409->prev=self->head;
        litem_409->next=((void*)0);
        __dec_obj167=litem_409->item;
        litem_409->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_409;
        self->head->next=litem_409;
    }
    else {
        litem_410=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value403=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1tuple2$2charphsNodephph"))));
        litem_410->prev=self->tail;
        litem_410->next=((void*)0);
        __dec_obj170=litem_410->item;
        litem_410->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_410;
        self->tail=litem_410;
    }
    self->len++;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            /* U1 */ if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result303__;
void* __right_value404 = (void*)0;
struct tuple2$2charphsNodeph* result_411;
void* __right_value405 = (void*)0;
char* __dec_obj173;
void* __right_value406 = (void*)0;
struct sNode* __dec_obj174;
struct tuple2$2charphsNodeph* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_411=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_411->v1;
        result_411->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_411->v2;
        result_411->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_411;
    /*i*/come_call_finalizer3(result_411,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj175;
struct sNode* __dec_obj176;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj175=self->v1;
            /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            /* U1 */ if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_412;
struct list_item$1tuple2$2charphsNodephph* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        /*i*/come_call_finalizer3(prev_it_413,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result309__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_422;
struct list_item$1CVALUEph* prev_it_423;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        /*i*/come_call_finalizer3(prev_it_423,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj185;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj185=self->item;
            come_call_finalizer3(__dec_obj185,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_426;
struct tuple2$2charphsNodeph* __result311__;
struct tuple2$2charphsNodeph* __result312__;
struct tuple2$2charphsNodeph* result_427;
struct tuple2$2charphsNodeph* __result313__;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_426,0,sizeof(struct tuple2$2charphsNodeph*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_426;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->head;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_427,0,sizeof(struct tuple2$2charphsNodeph*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_427;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_429;
struct tuple2$2charphsNodeph* __result314__;
struct tuple2$2charphsNodeph* __result315__;
struct tuple2$2charphsNodeph* result_430;
struct tuple2$2charphsNodeph* __result316__;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_429,0,sizeof(struct tuple2$2charphsNodeph*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_429;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_430,0,sizeof(struct tuple2$2charphsNodeph*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_430;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_435;
int i_436;
struct sType* __result318__;
struct sType* default_value_437;
struct sType* __result319__;
default_value_437 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_435=self->head;
    i_436=0;
    while(it_435!=((void*)0)) {
        if(        position==i_436) {
            __result318__ = gComeFunResultObject = __result_obj__ = it_435->item;
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        it_435=it_435->next;
        i_436++;
    }
    memset(&default_value_437,0,sizeof(struct sType*));
    __result319__ = gComeFunResultObject = __result_obj__ = default_value_437;
    /*i*/come_call_finalizer3(default_value_437,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_441;
struct CVALUE* __result320__;
struct CVALUE* __result321__;
struct CVALUE* result_442;
struct CVALUE* __result322__;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_441,0,sizeof(struct CVALUE*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_441;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->it=self->head;
    if(    self->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_442,0,sizeof(struct CVALUE*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_442;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_444;
struct CVALUE* __result323__;
struct CVALUE* __result324__;
struct CVALUE* result_445;
struct CVALUE* __result325__;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_444,0,sizeof(struct CVALUE*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_444;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_445,0,sizeof(struct CVALUE*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_445;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_452;
unsigned int it_453;
struct sFun* __result326__;
struct sFun* __result327__;
struct sFun* __result328__;
struct sFun* __result329__;
    hash_452=charp_get_hash_key(((char*)key))%self->size;
    it_453=hash_452;
    while((_Bool)1) {
        if(        self->item_existance[it_453]) {
            if(            charp_equals(self->keys[it_453],key)) {
                __result326__ = gComeFunResultObject = __result_obj__ = self->items[it_453];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result326__;
            }
            it_453++;
            if(            it_453>=self->size) {
                it_453=0;
            }
            else if(            it_453==hash_452) {
                __result327__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result327__;
            }
        }
        else {
            __result328__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result328__;
        }
    }
    __result329__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj188;
struct sType* __dec_obj189;
struct list$1sTypeph* __dec_obj190;
struct list$1charph* __dec_obj191;
struct list$1charph* __dec_obj192;
struct sType* __dec_obj193;
struct sBlock* __dec_obj194;
struct buffer* __dec_obj197;
struct buffer* __dec_obj198;
struct buffer* __dec_obj199;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj188=self->mName;
            /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj189=self->mResultType;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj190=self->mParamTypes;
            come_call_finalizer3(__dec_obj190,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj191=self->mParamNames;
            come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj192=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj193=self->mLambdaType;
            come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj194=self->mBlock;
            come_call_finalizer3(__dec_obj194,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj197=self->mSource;
            come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj198=self->mSourceHead;
            come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj199=self->mSourceHead2;
            come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj200=self->mSourceDefer;
            come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj201=self->mComeHeader;
            /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj202=self->mDeclareSName;
            /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj195;
struct sVarTable* __dec_obj196;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj195=self->mNodes;
            come_call_finalizer3(__dec_obj195,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj196=self->mVarTable;
            come_call_finalizer3(__dec_obj196,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_458;
int i_459;
struct CVALUE* __result331__;
struct CVALUE* default_value_460;
struct CVALUE* __result332__;
default_value_460 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_458=self->head;
    i_459=0;
    while(it_458!=((void*)0)) {
        if(        position==i_459) {
            __result331__ = gComeFunResultObject = __result_obj__ = it_458->item;
            gComeFunResultObject = (void*)0;
            return __result331__;
        }
        it_458=it_458->next;
        i_459++;
    }
    memset(&default_value_460,0,sizeof(struct CVALUE*));
    __result332__ = gComeFunResultObject = __result_obj__ = default_value_460;
    /*i*/come_call_finalizer3(default_value_460,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result336__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result336__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_466;
int i_467;
struct sType* default_value_468;
struct list$1sTypeph* __result334__;
struct list_item$1sTypeph* it_472;
int i_473;
struct sType* __dec_obj206;
struct list$1sTypeph* __result335__;
default_value_468 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_466=self->len;
        for(        i_467=0;        i_467<position-len_466;        i_467++        ){
            memset(&default_value_468,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_468));
            /*i*/come_call_finalizer3(default_value_468,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result334__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    it_472=self->head;
    i_473=0;
    while(it_472!=((void*)0)) {
        if(        position==i_473) {
            __dec_obj206=it_472->item;
            it_472->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_472=it_472->next;
        i_473++;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value437 = (void*)0;
struct list_item$1sTypeph* litem_469;
struct sType* __dec_obj203;
void* __right_value438 = (void*)0;
struct list_item$1sTypeph* litem_470;
struct sType* __dec_obj204;
void* __right_value439 = (void*)0;
struct list_item$1sTypeph* litem_471;
struct sType* __dec_obj205;
struct list$1sTypeph* __result333__;
    if(    self->len==0) {
        litem_469=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value437=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1sTypeph"))));
        litem_469->prev=((void*)0);
        litem_469->next=((void*)0);
        __dec_obj203=litem_469->item;
        litem_469->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_469;
        self->head=litem_469;
    }
    else if(    self->len==1) {
        litem_470=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value438=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1sTypeph"))));
        litem_470->prev=self->head;
        litem_470->next=((void*)0);
        __dec_obj204=litem_470->item;
        litem_470->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_470;
        self->head->next=litem_470;
    }
    else {
        litem_471=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value439=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1sTypeph"))));
        litem_471->prev=self->tail;
        litem_471->next=((void*)0);
        __dec_obj205=litem_471->item;
        litem_471->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_471;
        self->tail=litem_471;
    }
    self->len++;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_476;
struct sType* __result337__;
struct sType* __result338__;
struct sType* result_477;
struct sType* __result339__;
result_476 = (void*)0;
result_477 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_476,0,sizeof(struct sType*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_476;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->head;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_477,0,sizeof(struct sType*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_477;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_479;
struct sType* __result340__;
struct sType* __result341__;
struct sType* result_480;
struct sType* __result342__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_479,0,sizeof(struct sType*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_480,0,sizeof(struct sType*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
struct list_item$1CVALUEph* litem_491;
struct CVALUE* __dec_obj207;
void* __right_value446 = (void*)0;
struct list_item$1CVALUEph* litem_492;
struct CVALUE* __dec_obj208;
void* __right_value447 = (void*)0;
struct list_item$1CVALUEph* litem_493;
struct CVALUE* __dec_obj209;
struct list$1CVALUEph* __result344__;
    if(    self->len==0) {
        litem_491=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value445=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1CVALUEph"))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        __dec_obj207=litem_491->item;
        litem_491->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1) {
        litem_492=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value446=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1CVALUEph"))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        __dec_obj208=litem_492->item;
        litem_492->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value447=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1CVALUEph"))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        __dec_obj209=litem_493->item;
        litem_493->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_499;
unsigned int it_500;
struct map$2charphsFunph* __result345__;
    hash_499=charp_get_hash_key(((char*)key))%self->size;
    it_500=hash_499;
    while((_Bool)1) {
        if(        self->item_existance[it_500]) {
            if(            charp_equals(self->keys[it_500],key)) {
                list$1charp_remove(self->key_list,self->keys[it_500]);
                self->item_existance[it_500]=(_Bool)0;
                if(                1) {
                    /* U13 */self->keys[it_500] = come_decrement_ref_count2(self->keys[it_500], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_500]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_500],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_500]=((void*)0);
                self->len--;
                break;
            }
            it_500++;
            if(            it_500>=self->size) {
                it_500=0;
            }
            else if(            it_500==hash_499) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_519;
unsigned int hash_520;
unsigned int it_521;
struct sFun* __result348__;
struct sFun* __result349__;
struct sFun* __result350__;
struct sFun* __result351__;
default_value_519 = (void*)0;
    memset(&default_value_519,0,sizeof(struct sFun*));
    hash_520=charp_get_hash_key(((char*)key))%self->size;
    it_521=hash_520;
    while((_Bool)1) {
        if(        self->item_existance[it_521]) {
            if(            charp_equals(self->keys[it_521],key)) {
                __result348__ = gComeFunResultObject = __result_obj__ = self->items[it_521];
                /*i*/come_call_finalizer3(default_value_519,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result348__;
            }
            it_521++;
            if(            it_521>=self->size) {
                it_521=0;
            }
            else if(            it_521==hash_520) {
                __result349__ = gComeFunResultObject = __result_obj__ = default_value_519;
                /*i*/come_call_finalizer3(default_value_519,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result349__;
            }
        }
        else {
            __result350__ = gComeFunResultObject = __result_obj__ = default_value_519;
            /*i*/come_call_finalizer3(default_value_519,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
    }
    __result351__ = gComeFunResultObject = __result_obj__ = default_value_519;
    /*i*/come_call_finalizer3(default_value_519,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_555;
char* __result356__;
char* __result357__;
char* result_556;
char* __result358__;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_555,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_555;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->head;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_556,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_556;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_558;
char* __result359__;
char* __result360__;
char* result_559;
char* __result361__;
result_558 = (void*)0;
result_559 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_558,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_558;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_559,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_559;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_560;
int i_561;
struct CVALUE* default_value_562;
struct list$1CVALUEph* __result362__;
struct list_item$1CVALUEph* it_563;
int i_564;
struct CVALUE* __dec_obj259;
struct list$1CVALUEph* __result363__;
default_value_562 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_560=self->len;
        for(        i_561=0;        i_561<position-len_560;        i_561++        ){
            memset(&default_value_562,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_562));
            /*i*/come_call_finalizer3(default_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result362__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    it_563=self->head;
    i_564=0;
    while(it_563!=((void*)0)) {
        if(        position==i_564) {
            __dec_obj259=it_563->item;
            it_563->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_563=it_563->next;
        i_564++;
    }
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_575;
int i_576;
char* __result366__;
char* default_value_577;
char* __result367__;
default_value_577 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_575=self->head;
    i_576=0;
    while(it_575!=((void*)0)) {
        if(        position==i_576) {
            __result366__ = gComeFunResultObject = __result_obj__ = it_575->item;
            gComeFunResultObject = (void*)0;
            return __result366__;
        }
        it_575=it_575->next;
        i_576++;
    }
    memset(&default_value_577,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = default_value_577;
    /* U13 */default_value_577 = come_decrement_ref_count2(default_value_577, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_593;
unsigned int hash_594;
unsigned int it_595;
struct sClass* __result374__;
struct sClass* __result375__;
struct sClass* __result376__;
struct sClass* __result377__;
default_value_593 = (void*)0;
    memset(&default_value_593,0,sizeof(struct sClass*));
    hash_594=charp_get_hash_key(((char*)key))%self->size;
    it_595=hash_594;
    while((_Bool)1) {
        if(        self->item_existance[it_595]) {
            if(            charp_equals(self->keys[it_595],key)) {
                __result374__ = gComeFunResultObject = __result_obj__ = self->items[it_595];
                /*i*/come_call_finalizer3(default_value_593,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result374__;
            }
            it_595++;
            if(            it_595>=self->size) {
                it_595=0;
            }
            else if(            it_595==hash_594) {
                __result375__ = gComeFunResultObject = __result_obj__ = default_value_593;
                /*i*/come_call_finalizer3(default_value_593,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result375__;
            }
        }
        else {
            __result376__ = gComeFunResultObject = __result_obj__ = default_value_593;
            /*i*/come_call_finalizer3(default_value_593,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result376__;
        }
    }
    __result377__ = gComeFunResultObject = __result_obj__ = default_value_593;
    /*i*/come_call_finalizer3(default_value_593,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value644 = (void*)0;
struct buffer* __dec_obj272;
struct sComeCallNode* __result382__;
    ((struct sNodeBase*)(__right_value644=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value644,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj272=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result382__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value645 = (void*)0;
char* __result383__;
    __result383__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value645=__builtin_string("sComeCallNode")));
    /* U11 */__right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_623;
struct buffer* come_block_624;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1CVALUEph* come_params_625;
void* __right_value648 = (void*)0;
char* var_name_627;
void* __right_value649 = (void*)0;
struct sType* type__628;
_Bool __result388__;
void* __right_value650 = (void*)0;
struct sNode* var_node_631;
_Bool Value_632;
_Bool __result389__;
void* __right_value651 = (void*)0;
struct CVALUE* thread_var_value_633;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_634;
void* __right_value654 = (void*)0;
char* __dec_obj275;
struct sType* __dec_obj276;
void* __right_value655 = (void*)0;
struct sNode* null_node_635;
_Bool Value_636;
_Bool __result390__;
void* __right_value656 = (void*)0;
struct CVALUE* __dec_obj277;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value661 = (void*)0;
struct sNode* current_stack_frame_node_637;
_Bool Value_639;
_Bool __result393__;
void* __right_value662 = (void*)0;
struct CVALUE* current_stack_frame_value_640;
void* __right_value663 = (void*)0;
char* fun_name_641;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct buffer* come_block2_642;
void* __right_value666 = (void*)0;
char* class_name_643;
void* __right_value667 = (void*)0;
struct sClass* current_stack_frame_struct_644;
void* __right_value668 = (void*)0;
struct buffer* source3_645;
char* p_646;
char* head_647;
int sline_648;
struct buffer* __dec_obj280;
void* __right_value669 = (void*)0;
struct sNode* node_649;
_Bool Value_650;
_Bool __result394__;
struct buffer* __dec_obj281;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct CVALUE* fun_value_651;
void* __right_value672 = (void*)0;
char* __dec_obj282;
struct sType* __dec_obj283;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct buffer* buf_652;
void* __right_value675 = (void*)0;
char* fun_name_653;
int j_654;
struct list$1CVALUEph* o2_saved_655;
struct CVALUE* it_656;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct CVALUE* come_value_657;
void* __right_value678 = (void*)0;
char* __dec_obj284;
void* __right_value679 = (void*)0;
struct sType* type_658;
_Bool __result395__;
struct sType* __dec_obj285;
_Bool __result396__;
    come_block_sline_623=self->come_block_sline;
    come_block_624=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_625=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1350, "list$1CVALUEph"))));
    static int thread_num_626=0;
    thread_num_626++;
    var_name_627=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_626));
    type__628=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type__628==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result388__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result388__;
    }
    var_node_631=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_627),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__628),(_Bool)1,((void*)0),info));
    Value_632=node_compile(var_node_631,info);
    if(    !Value_632) {
        __result389__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result389__;
    }
    else {
    }
    thread_var_value_633=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_634=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1373, "CVALUE"))));
    __dec_obj275=come_value_634->c_value;
    come_value_634->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_633->c_value));
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=come_value_634->type;
    come_value_634->type=(struct sType*)come_increment_ref_count(thread_var_value_633->type);
    come_call_finalizer3(__dec_obj276,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_634->var=((void*)0);
    list$1CVALUEph_push_back(come_params_625,(struct CVALUE*)come_increment_ref_count(come_value_634));
    null_node_635=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_636=node_compile(null_node_635,info);
    if(    !Value_636) {
        __result390__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_635) { null_node_635 = come_decrement_ref_count2(null_node_635, ((struct sNode*)null_node_635)->finalize, ((struct sNode*)null_node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result390__;
    }
    else {
    }
    __dec_obj277=come_value_634;
    come_value_634=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_625,(struct CVALUE*)come_increment_ref_count(come_value_634));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1391, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value658=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1391, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_637=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value658,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_639=node_compile(current_stack_frame_node_637,info);
    if(    !Value_639) {
        __result393__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_635) { null_node_635 = come_decrement_ref_count2(null_node_635, ((struct sNode*)null_node_635)->finalize, ((struct sNode*)null_node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_637) { current_stack_frame_node_637 = come_decrement_ref_count2(current_stack_frame_node_637, ((struct sNode*)current_stack_frame_node_637)->finalize, ((struct sNode*)current_stack_frame_node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result393__;
    }
    else {
    }
    current_stack_frame_value_640=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_641=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_626));
    come_block2_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1402, "buffer"))));
    class_name_643=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_642,"void* %s(%s* parent)\n",fun_name_641,class_name_643);
    buffer_append_str(come_block2_642,((char*)(__right_value667=buffer_to_string(come_block_624))));
    /* U11 */__right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_644=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value668=map$2charphsClassphp_operator_load_element(info->classes,class_name_643)));
    /*g*/come_call_finalizer3(__right_value668,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_645=(struct buffer*)come_increment_ref_count(info->source);
    p_646=info->p;
    head_647=info->head;
    sline_648=info->sline;
    __dec_obj280=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_642);
    come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_623;
    node_649=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_650=node_compile(node_649,info);
    if(    !Value_650) {
        __result394__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_635) { null_node_635 = come_decrement_ref_count2(null_node_635, ((struct sNode*)null_node_635)->finalize, ((struct sNode*)null_node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_637) { current_stack_frame_node_637 = come_decrement_ref_count2(current_stack_frame_node_637, ((struct sNode*)current_stack_frame_node_637)->finalize, ((struct sNode*)current_stack_frame_node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_641 = come_decrement_ref_count2(fun_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_643 = come_decrement_ref_count2(class_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result394__;
    }
    else {
    }
    __dec_obj281=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_645);
    come_call_finalizer3(__dec_obj281,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_646;
    info->head=head_647;
    info->sline=sline_648;
    info->current_stack_frame_struct=current_stack_frame_struct_644;
    fun_value_651=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1436, "CVALUE"))));
    __dec_obj282=fun_value_651->c_value;
    fun_value_651->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_641));
    /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj283=come_value_634->type;
    come_value_634->type=((void*)0);
    come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_634->var=((void*)0);
    list$1CVALUEph_add(come_params_625,(struct CVALUE*)come_increment_ref_count(fun_value_651));
    list$1CVALUEph_add(come_params_625,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_640));
    buf_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1446, "buffer"))));
    /* U13 */fun_name_641 = come_decrement_ref_count2(fun_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_653=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_652,"(");
    buffer_append_str(buf_652,fun_name_653);
    buffer_append_str(buf_652,"(");
    j_654=0;
    for(    o2_saved_655=(struct list$1CVALUEph*)come_increment_ref_count((come_params_625)),it_656=list$1CVALUEph_begin((o2_saved_655));    !list$1CVALUEph_end((o2_saved_655));    it_656=list$1CVALUEph_next((o2_saved_655))    ){
        buffer_append_str(buf_652,it_656->c_value);
        if(        j_654!=list$1CVALUEph_length(come_params_625)-1) {
            buffer_append_str(buf_652,",");
        }
        j_654++;
    }
    /*i*/come_call_finalizer3(o2_saved_655,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_652,")");
    buffer_append_str(buf_652,", ");
    buffer_append_str(buf_652,thread_var_value_633->c_value);
    buffer_append_str(buf_652,")");
    /*i*/come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1469, "CVALUE"))));
    __dec_obj284=come_value_657->c_value;
    come_value_657->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_652));
    /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_658=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type_658==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result395__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(thread_var_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_635) { null_node_635 = come_decrement_ref_count2(null_node_635, ((struct sNode*)null_node_635)->finalize, ((struct sNode*)null_node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_637) { current_stack_frame_node_637 = come_decrement_ref_count2(current_stack_frame_node_637, ((struct sNode*)current_stack_frame_node_637)->finalize, ((struct sNode*)current_stack_frame_node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(current_stack_frame_value_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_block2_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_643 = come_decrement_ref_count2(class_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(fun_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_653 = come_decrement_ref_count2(fun_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result395__;
    }
    __dec_obj285=come_value_657->type;
    come_value_657->type=(struct sType*)come_increment_ref_count(type_658);
    come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_657->var=((void*)0);
    add_come_last_code(info,"%s",come_value_657->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_657));
    __result396__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_block_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_625,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_627 = come_decrement_ref_count2(var_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type__628,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_631) { var_node_631 = come_decrement_ref_count2(var_node_631, ((struct sNode*)var_node_631)->finalize, ((struct sNode*)var_node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(thread_var_value_633,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_635) { null_node_635 = come_decrement_ref_count2(null_node_635, ((struct sNode*)null_node_635)->finalize, ((struct sNode*)null_node_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_637) { current_stack_frame_node_637 = come_decrement_ref_count2(current_stack_frame_node_637, ((struct sNode*)current_stack_frame_node_637)->finalize, ((struct sNode*)current_stack_frame_node_637)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(current_stack_frame_value_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_block2_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */class_name_643 = come_decrement_ref_count2(class_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source3_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(fun_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_653 = come_decrement_ref_count2(fun_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_658,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result396__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_629;
unsigned int it_630;
struct sType* __result384__;
struct sType* __result385__;
struct sType* __result386__;
struct sType* __result387__;
    hash_629=charp_get_hash_key(((char*)key))%self->size;
    it_630=hash_629;
    while((_Bool)1) {
        if(        self->item_existance[it_630]) {
            if(            charp_equals(self->keys[it_630],key)) {
                __result384__ = gComeFunResultObject = __result_obj__ = self->items[it_630];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
            it_630++;
            if(            it_630>=self->size) {
                it_630=0;
            }
            else if(            it_630==hash_629) {
                __result385__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result385__;
            }
        }
        else {
            __result386__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result386__;
        }
    }
    __result387__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj278;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj278=self->sname;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result391__;
void* __right_value659 = (void*)0;
struct sCurrentNode2* result_638;
void* __right_value660 = (void*)0;
char* __dec_obj279;
struct sCurrentNode2* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_638=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_638->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_638->sname;
        result_638->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_638->sline_real=self->sline_real;
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_638;
    /*i*/come_call_finalizer3(result_638,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value680 = (void*)0;
struct sNode* __dec_obj286;
struct sComeJoinNode* __result397__;
    ((struct sNodeBase*)(__right_value680=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value680,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj286=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
    __result397__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result397__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value681 = (void*)0;
char* __result398__;
    __result398__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value681=__builtin_string("sComeJoinNode")));
    /* U11 */__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_659;
_Bool Value_660;
_Bool __result399__;
void* __right_value682 = (void*)0;
struct CVALUE* come_value_661;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct buffer* buf_662;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct CVALUE* come_value_663;
void* __right_value687 = (void*)0;
char* __dec_obj289;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sType* __dec_obj290;
_Bool __result400__;
    node_659=(struct sNode*)come_increment_ref_count(self->node);
    Value_660=node_compile(node_659,info);
    if(    !Value_660) {
        __result399__ = (_Bool)0;
        if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result399__;
    }
    else {
    }
    come_value_661=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_662=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1517, "buffer"))));
    buffer_append_str(buf_662,"pthread_join(");
    buffer_append_str(buf_662,come_value_661->c_value);
    buffer_append_str(buf_662,", 0)");
    /*i*/come_call_finalizer3(come_value_661,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_663=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1522, "CVALUE"))));
    __dec_obj289=come_value_663->c_value;
    come_value_663->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_662));
    /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=come_value_663->type;
    come_value_663->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1524, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_663->var=((void*)0);
    add_come_last_code(info,"%s",come_value_663->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_663));
    __result400__ = (_Bool)1;
    if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(buf_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result400__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value690 = (void*)0;
struct list$1sNodeph* __dec_obj291;
struct list$1sBlockph* __dec_obj292;
struct sBlock* __dec_obj294;
struct sComePollNode* __result401__;
    ((struct sNodeBase*)(__right_value690=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value690,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj291=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj291,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj292=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj292,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj294=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj294,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result401__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value691 = (void*)0;
char* __result402__;
    __result402__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value691=__builtin_string("sComePollNode")));
    /* U11 */__right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_668;
struct list$1sBlockph* blocks_669;
int time_out_670;
int n_672;
struct list$1sNodeph* o2_saved_673;
struct sNode* it_676;
_Bool Value_679;
_Bool __result409__;
void* __right_value692 = (void*)0;
struct CVALUE* come_value_680;
int n_681;
struct list$1sNodeph* o2_saved_682;
struct sNode* it_683;
void* __right_value693 = (void*)0;
_Bool __result412__;
    vars_668=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_669=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_670=self->time_out;
    static int var_num_671=0;
    var_num_671++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_671,list$1sNodeph_length(vars_668));
    n_672=0;
    for(    o2_saved_673=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_676=list$1sNodeph_begin((o2_saved_673));    !list$1sNodeph_end((o2_saved_673));    it_676=list$1sNodeph_next((o2_saved_673))    ){
        Value_679=node_compile(it_676,info);
        if(        !Value_679) {
            __result409__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_673,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(vars_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_669,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result409__;
        }
        else {
        }
        come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_671,n_672,come_value_680->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_671,n_672,1);
        n_672++;
        /*i*/come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_673,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_671,var_num_671,list$1sNodeph_length(vars_668),time_out_670);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_671);
    n_681=0;
    for(    o2_saved_682=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_683=list$1sNodeph_begin((o2_saved_682));    !list$1sNodeph_end((o2_saved_682));    it_683=list$1sNodeph_next((o2_saved_682))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_671,n_681,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value693=list$1sBlockphp_operator_load_element(blocks_669,n_681))), "05call.c", 1588, 30)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        /*g*/come_call_finalizer3(__right_value693,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_681++;
    }
    /*i*/come_call_finalizer3(o2_saved_682,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_671);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result412__ = (_Bool)1;
    /*i*/come_call_finalizer3(vars_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(blocks_669,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result412__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_664;
struct list_item$1sBlockph* prev_it_665;
    it_664=self->head;
    while(it_664!=((void*)0)) {
        prev_it_665=it_664;
        it_664=it_664->next;
        /*i*/come_call_finalizer3(prev_it_665,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj293;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj293=self->item;
            come_call_finalizer3(__dec_obj293,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_666;
struct list_item$1sBlockph* prev_it_667;
    it_666=self->head;
    while(it_666!=((void*)0)) {
        prev_it_667=it_666;
        it_666=it_666->next;
        /*i*/come_call_finalizer3(prev_it_667,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_674;
struct sNode* __result403__;
struct sNode* __result404__;
struct sNode* result_675;
struct sNode* __result405__;
result_674 = (void*)0;
result_675 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_674,0,sizeof(struct sNode*));
        __result403__ = gComeFunResultObject = __result_obj__ = result_674;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    self->it=self->head;
    if(    self->it) {
        __result404__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    memset(&result_675,0,sizeof(struct sNode*));
    __result405__ = gComeFunResultObject = __result_obj__ = result_675;
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_677;
struct sNode* __result406__;
struct sNode* __result407__;
struct sNode* result_678;
struct sNode* __result408__;
result_677 = (void*)0;
result_678 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_677,0,sizeof(struct sNode*));
        __result406__ = gComeFunResultObject = __result_obj__ = result_677;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result407__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    memset(&result_678,0,sizeof(struct sNode*));
    __result408__ = gComeFunResultObject = __result_obj__ = result_678;
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_684;
int i_685;
struct sBlock* __result410__;
struct sBlock* default_value_686;
struct sBlock* __result411__;
default_value_686 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_684=self->head;
    i_685=0;
    while(it_684!=((void*)0)) {
        if(        position==i_685) {
            __result410__ = gComeFunResultObject = __result_obj__ = it_684->item;
            gComeFunResultObject = (void*)0;
            return __result410__;
        }
        it_684=it_684->next;
        i_685++;
    }
    memset(&default_value_686,0,sizeof(struct sBlock*));
    __result411__ = gComeFunResultObject = __result_obj__ = default_value_686;
    /*i*/come_call_finalizer3(default_value_686,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value702 = (void*)0;
struct sNode* node_687;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj309;
struct sNode* __result415__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1608, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value695=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1608, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_687=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value695,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj309=node_687;
    node_687=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_687),info));
    /* U1 */ if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    __result415__ = gComeFunResultObject = __result_obj__ = node_687;
    /*i*/come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_687) { node_687 = come_decrement_ref_count2(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value705 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj311;
struct sLambdaCall* __result416__;
    ((struct sNodeBase*)(__right_value704=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value704,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj310=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    /* U1 */ if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj311=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj311,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result416__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result416__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value706 = (void*)0;
char* __result417__;
    __result417__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value706=__builtin_string("sLambdaCall")));
    /* U11 */__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_689;
struct list$1tuple2$2charphsNodephph* params_690;
_Bool Value_691;
_Bool __result418__;
void* __right_value707 = (void*)0;
struct CVALUE* come_value_692;
struct sType* lambda_type_693;
_Bool __result419__;
void* __right_value708 = (void*)0;
struct sType* result_type_694;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1CVALUEph* come_params_695;
_Bool __result420__;
int i_696;
struct list$1tuple2$2charphsNodephph* o2_saved_697;
struct tuple2$2charphsNodeph* it_698;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_699=0;
struct sNode* node_700=0;
_Bool Value_701;
_Bool __result421__;
void* __right_value711 = (void*)0;
struct CVALUE* come_value_702;
void* __right_value712 = (void*)0;
_Bool _if_conditional19;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
_Bool _if_conditional20;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct buffer* buf_703;
int j_704;
struct list$1CVALUEph* o2_saved_705;
struct CVALUE* it_706;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct CVALUE* come_value2_707;
void* __right_value722 = (void*)0;
char* __dec_obj315;
void* __right_value723 = (void*)0;
struct sType* __dec_obj316;
_Bool __result422__;
    node_689=(struct sNode*)come_increment_ref_count(self->node);
    params_690=self->params;
    Value_691=node_compile(node_689,info);
    if(    !Value_691) {
        __result418__ = (_Bool)0;
        if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result418__;
    }
    else {
    }
    come_value_692=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_693=come_value_692->type;
    if(    lambda_type_693->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result419__ = (_Bool)0;
        if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result419__;
    }
    result_type_694=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_693->mResultType->v1));
    result_type_694->mStatic=(_Bool)0;
    come_params_695=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1652, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_693->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_690)&&!lambda_type_693->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_693->mParamTypes),list$1tuple2$2charphsNodephph_length(params_690));
        __result420__ = (_Bool)0;
        if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_695,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result420__;
    }
    i_696=0;
    for(    o2_saved_697=(params_690),it_698=list$1tuple2$2charphsNodephph_begin((o2_saved_697));    !list$1tuple2$2charphsNodephph_end((o2_saved_697));    it_698=list$1tuple2$2charphsNodephph_next((o2_saved_697))    ){
        multiple_assign_var7=it_698;
        label_699=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_700=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        Value_701=node_compile(node_700,info);
        if(        !Value_701) {
            __result421__ = (_Bool)0;
            /* U13 */label_699 = come_decrement_ref_count2(label_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_700) { node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_params_695,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result421__;
        }
        else {
        }
        come_value_702=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_693->mVarArgs&&((struct sType*)(__right_value712=list$1sTypephp_operator_load_element(lambda_type_693->mParamTypes,i_696)))==((void*)0))),        /*f*/come_call_finalizer3(__right_value712,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value714=xsprintf("calling param #\%s",((char*)(__right_value713=int_to_string(i_696)))))),((struct sType*)come_null_check(((struct sType*)(__right_value715=list$1sTypephp_operator_load_element(lambda_type_693->mParamTypes,i_696))), "05call.c", 1671, 31)),come_value_702->type,come_value_702,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value713 = come_decrement_ref_count2(__right_value713, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value714 = come_decrement_ref_count2(__right_value714, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value715,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value716=list$1sTypephp_operator_load_element(lambda_type_693->mParamTypes,i_696))), "05call.c", 1672, 32))->mHeap&&come_value_702->type->mHeap)),            /*f*/come_call_finalizer3(__right_value716,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value717=list$1sTypephp_operator_load_element(lambda_type_693->mParamTypes,i_696))), "05call.c", 1673, 33)),come_value_702->type,come_value_702,info,(_Bool)1);
                /*g*/come_call_finalizer3(__right_value717,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_695,(struct CVALUE*)come_increment_ref_count(come_value_702));
        dec_stack_ptr(1,info);
        i_696++;
        /* U13 */label_699 = come_decrement_ref_count2(label_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_700) { node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_702,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_703=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1683, "buffer"))));
    buffer_append_str(buf_703,"(");
    buffer_append_str(buf_703,come_value_692->c_value);
    buffer_append_str(buf_703,")");
    buffer_append_str(buf_703,"(");
    j_704=0;
    for(    o2_saved_705=(struct list$1CVALUEph*)come_increment_ref_count((come_params_695)),it_706=list$1CVALUEph_begin((o2_saved_705));    !list$1CVALUEph_end((o2_saved_705));    it_706=list$1CVALUEph_next((o2_saved_705))    ){
        buffer_append_str(buf_703,it_706->c_value);
        if(        j_704!=list$1CVALUEph_length(come_params_695)-1) {
            buffer_append_str(buf_703,",");
        }
        j_704++;
    }
    /*i*/come_call_finalizer3(o2_saved_705,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_703,")");
    come_value2_707=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1702, "CVALUE"))));
    __dec_obj315=come_value2_707->c_value;
    come_value2_707->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_703));
    /*G*/ __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_693->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_707,(struct sType*)come_increment_ref_count(lambda_type_693->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj316=come_value2_707->type;
    come_value2_707->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_694));
    come_call_finalizer3(__dec_obj316,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_707->type->mStatic=(_Bool)0;
    come_value2_707->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_707->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_707));
    __result422__ = (_Bool)1;
    if(node_689) { node_689 = come_decrement_ref_count2(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_694,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_695,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_703,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result422__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value724 = (void*)0;
struct sType* __dec_obj317;
struct sVarArgTypeName* __result423__;
    ((struct sNodeBase*)(__right_value724=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value724,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj317=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj317,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result423__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value725 = (void*)0;
char* __result424__;
    __result424__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value725=__builtin_string("sVarArgTypeName")));
    /* U11 */__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_708;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct CVALUE* come_value_709;
void* __right_value728 = (void*)0;
char* __dec_obj320;
struct sType* __dec_obj321;
_Bool __result425__;
    type_708=(struct sType*)come_increment_ref_count(self->type);
    come_value_709=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1739, "CVALUE"))));
    __dec_obj320=come_value_709->c_value;
    come_value_709->c_value=(char*)come_increment_ref_count(make_type_name_string(type_708,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj321=come_value_709->type;
    come_value_709->type=(struct sType*)come_increment_ref_count(type_708);
    come_call_finalizer3(__dec_obj321,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_709->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_709));
    __result425__ = (_Bool)1;
    /*i*/come_call_finalizer3(type_708,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result425__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1sTypeph* method_generics_types_710;
void* __right_value731 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type_711=0;
char* name_712=0;
_Bool err_713=0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_714;
_Bool _va_arg_715;
char* p_716;
int sline_717;
_Bool err_flag_718;
void* __right_value735 = (void*)0;
char* label_719;
void* __right_value736 = (void*)0;
char* __dec_obj324;
char* __dec_obj325;
_Bool no_comma_720;
_Bool in_fun_param_721;
void* __right_value737 = (void*)0;
struct sNode* node_722;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
_Bool guard_break_726;
struct buffer* method_block_727;
int method_block_sline_728;
char* head_729;
void* __right_value744 = (void*)0;
char* tail_730;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct buffer* __dec_obj332;
int len_731;
void* __right_value747 = (void*)0;
char* mem_732;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value756 = (void*)0;
struct sNode* node_733;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj343;
struct sNode* __result430__;
    method_generics_types_710=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1753, "list$1sTypeph"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value731=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_711=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_712=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_713=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value731,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_713) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_710,(struct sType*)come_increment_ref_count(sType_clone(type_711)));
                /*i*/come_call_finalizer3(type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_712 = come_decrement_ref_count2(name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_714=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1791, "list$1tuple2$2charphsNodephph"))));
    _va_arg_715=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_716=info->p;
        sline_717=info->sline;
        err_flag_718=(_Bool)0;
        label_719=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj324=label_719;
            label_719=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_718=(_Bool)1;
        }
        if(        err_flag_718==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj325=label_719;
            label_719=((void*)0);
            /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_716;
            info->sline=sline_717;
        }
        no_comma_720=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_721=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_722=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj326=node_722;
        node_722=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_722),info));
        /* U1 */ if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_720;
        info->in_fun_param=in_fun_param_721;
        list$1tuple2$2charphsNodephph_push_back(params_714,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1839, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_719),(struct sNode*)come_increment_ref_count(node_722))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */label_719 = come_decrement_ref_count2(label_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */label_719 = come_decrement_ref_count2(label_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_715;
    guard_break_726=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_726=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_727=((void*)0);
    method_block_sline_728=0;
    if(    *info->p==123) {
        head_729=info->p;
        method_block_sline_728=info->sline;
        ((char*)(__right_value744=skip_block(info)));
        /* U11 */__right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_730=info->p;
        __dec_obj332=method_block_727;
        method_block_727=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1876, "buffer"))));
        come_call_finalizer3(__dec_obj332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_731=tail_730-head_729;
        mem_732=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_731+1)), "05call.c", 1879, "char"));
        memcpy(mem_732,head_729,len_731);
        mem_732[len_731]=0;
        buffer_append_str(method_block_727,mem_732);
        buffer_append_str(method_block_727,"\n");
        /* U13 */mem_732 = come_decrement_ref_count2(mem_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1889, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value749=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1889, "sFunCallNode")),fun_name,params_714,guard_break_726,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_710),(struct buffer*)come_increment_ref_count(method_block_727),method_block_sline_728,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_733=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value749,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj343=node_733;
    node_733=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_733),info));
    /* U1 */ if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
    __result430__ = gComeFunResultObject = __result_obj__ = node_733;
    /*i*/come_call_finalizer3(method_generics_types_710,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_714,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_733) { node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj322;
char* __dec_obj323;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj322=self->v1;
            come_call_finalizer3(__dec_obj322,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj323=self->v2;
            /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value739 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_723;
struct tuple2$2charphsNodeph* __dec_obj327;
void* __right_value740 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_724;
struct tuple2$2charphsNodeph* __dec_obj328;
void* __right_value741 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_725;
struct tuple2$2charphsNodeph* __dec_obj329;
struct list$1tuple2$2charphsNodephph* __result426__;
    if(    self->len==0) {
        litem_723=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value739=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1106, "list_item$1tuple2$2charphsNodephph"))));
        litem_723->prev=((void*)0);
        litem_723->next=((void*)0);
        __dec_obj327=litem_723->item;
        litem_723->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj327,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_723;
        self->head=litem_723;
    }
    else if(    self->len==1) {
        litem_724=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value740=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1116, "list_item$1tuple2$2charphsNodephph"))));
        litem_724->prev=self->head;
        litem_724->next=((void*)0);
        __dec_obj328=litem_724->item;
        litem_724->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj328,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_724;
        self->head->next=litem_724;
    }
    else {
        litem_725=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value741=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1126, "list_item$1tuple2$2charphsNodephph"))));
        litem_725->prev=self->tail;
        litem_725->next=((void*)0);
        __dec_obj329=litem_725->item;
        litem_725->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj329,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_725;
        self->tail=litem_725;
    }
    self->len++;
    __result426__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj330;
struct sNode* __dec_obj331;
struct tuple2$2charphsNodeph* __result427__;
    __dec_obj330=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj331=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    __result427__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj333;
char* __dec_obj334;
struct list$1tuple2$2charphsNodephph* __dec_obj335;
struct list$1sTypeph* __dec_obj336;
struct buffer* __dec_obj337;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj333=self->sname;
            /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj334=self->fun_name;
            /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj335=self->params;
            come_call_finalizer3(__dec_obj335,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj336=self->method_generics_types;
            come_call_finalizer3(__dec_obj336,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj337=self->method_block;
            come_call_finalizer3(__dec_obj337,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result428__;
void* __right_value750 = (void*)0;
struct sFunCallNode* result_734;
void* __right_value751 = (void*)0;
char* __dec_obj338;
void* __right_value752 = (void*)0;
char* __dec_obj339;
void* __right_value753 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj340;
void* __right_value754 = (void*)0;
struct list$1sTypeph* __dec_obj341;
void* __right_value755 = (void*)0;
struct buffer* __dec_obj342;
struct sFunCallNode* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_734=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_734->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_734->sname;
        result_734->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_734->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj339=result_734->fun_name;
        result_734->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj340=result_734->params;
        result_734->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj340,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_734->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj341=result_734->method_generics_types;
        result_734->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj341,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj342=result_734->method_block;
        result_734->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj342,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_734->method_block_sline=self->method_block_sline;
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_734;
    /*i*/come_call_finalizer3(result_734,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result431__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result431__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result431__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value764 = (void*)0;
struct sNode* __result434__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1910, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value759=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1910, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result434__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value764=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value759,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value764) { __right_value764 = come_decrement_ref_count2(__right_value764, ((struct sNode*)__right_value764)->finalize, ((struct sNode*)__right_value764)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result434__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value772 = (void*)0;
struct sNode* __result437__;
char* head_737;
void* __right_value773 = (void*)0;
struct sNode* value_738;
char* tail_739;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj356;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value782 = (void*)0;
struct sNode* __result440__;
int nest_742;
char* head_743;
int head_sline_744;
int sline_real_745;
void* __right_value783 = (void*)0;
char* buf_746;
_Bool is_type_name__747;
_Bool is_special_word_749;
_Bool define_function_pointer_flag_750;
void* __right_value784 = (void*)0;
_Bool lambda_flag_751;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
char* word2_752;
_Bool fun_name_with_type_name_753;
void* __right_value787 = (void*)0;
char* word2_754;
_Bool call_method_generics_fun_call_755;
void* __right_value788 = (void*)0;
char* __dec_obj363;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
_Bool _if_conditional21;
int nest_756;
_Bool inline_asm_757;
void* __right_value791 = (void*)0;
char* __dec_obj364;
void* __right_value792 = (void*)0;
char* __dec_obj365;
void* __right_value793 = (void*)0;
char* __dec_obj366;
void* __right_value794 = (void*)0;
struct sNode* node_758;
struct sNode* __result441__;
_Bool no_comma_759;
void* __right_value795 = (void*)0;
struct sNode* exp_760;
void* __right_value796 = (void*)0;
struct sNode* exp2_761;
void* __right_value797 = (void*)0;
struct sNode* __result442__;
void* __right_value798 = (void*)0;
struct sNode* node_762;
struct sNode* __result443__;
void* __right_value799 = (void*)0;
struct sNode* node_763;
struct sNode* __result444__;
struct buffer* come_block_764;
int come_block_sline_765;
char* head_766;
void* __right_value800 = (void*)0;
char* tail_767;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct buffer* __dec_obj367;
int len_768;
void* __right_value803 = (void*)0;
char* mem_769;
char* head_770;
_Bool no_output_come_code_771;
void* __right_value804 = (void*)0;
char* tail_772;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* __dec_obj368;
int len_773;
void* __right_value807 = (void*)0;
char* mem_774;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value8;
struct sComeCallNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* node_775;
struct sNode* __result447__;
struct buffer* come_block_777;
int come_block_sline_778;
void* __right_value814 = (void*)0;
struct sNode* node_779;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sNode* _inf_value9;
struct sComeJoinNode* _inf_obj_value9;
void* __right_value820 = (void*)0;
struct sNode* __result450__;
int time_out_781;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1sNodeph* vars_782;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1sBlockph* blocks_783;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sBlock* else_block_784;
void* __right_value827 = (void*)0;
struct sBlock* __dec_obj377;
void* __right_value828 = (void*)0;
struct sNode* var_name_785;
void* __right_value829 = (void*)0;
struct sBlock* block_786;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value10;
struct sComePollNode* _inf_obj_value10;
void* __right_value863 = (void*)0;
struct sNode* __result468__;
void* __right_value864 = (void*)0;
struct sNode* node_819;
struct sNode* __result469__;
void* __right_value865 = (void*)0;
struct sNode* node_820;
struct sNode* __result470__;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sNode* _inf_value11;
struct sFuncNode* _inf_obj_value11;
void* __right_value870 = (void*)0;
struct sNode* __result473__;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct sNode* _inf_value12;
struct sWildCard* _inf_obj_value12;
void* __right_value875 = (void*)0;
struct sNode* __result476__;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct sNode* _inf_value13;
struct sLineNode* _inf_obj_value13;
void* __right_value880 = (void*)0;
struct sNode* __result479__;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct sNode* _inf_value14;
struct sSNameNode* _inf_obj_value14;
void* __right_value885 = (void*)0;
struct sNode* __result482__;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sNode* _inf_value15;
struct sCallerFuncNode* _inf_obj_value15;
void* __right_value890 = (void*)0;
struct sNode* __result485__;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sNode* _inf_value16;
struct sCallerLineNode* _inf_obj_value16;
void* __right_value895 = (void*)0;
struct sNode* __result488__;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sNode* _inf_value17;
struct sCallerSNameNode* _inf_obj_value17;
void* __right_value900 = (void*)0;
struct sNode* __result491__;
void* __right_value901 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_828=0;
char* name_829=0;
_Bool err_830=0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value18;
struct sVarArgTypeName* _inf_obj_value18;
void* __right_value907 = (void*)0;
struct sNode* __result494__;
void* __right_value908 = (void*)0;
struct sNode* node_832;
struct sNode* __result495__;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct buffer* buf2_833;
void* __right_value911 = (void*)0;
char* word_834;
int nest_835;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value19;
struct sInlineAssembler* _inf_obj_value19;
void* __right_value918 = (void*)0;
struct sNode* __result498__;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* fun_name_837;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sType* type_838;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct sClass* klass_842;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sType* __dec_obj416;
void* __right_value928 = (void*)0;
char* buf2_843;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* node_844;
struct sNode* __result503__;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct buffer* fun_name_845;
void* __right_value933 = (void*)0;
char* buf2_846;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sNode* node_847;
struct sNode* __result504__;
void* __right_value936 = (void*)0;
struct sNode* node_848;
struct sNode* __result505__;
void* __right_value937 = (void*)0;
struct sNode* node_849;
struct sNode* __result506__;
void* __right_value938 = (void*)0;
struct sNode* node_850;
struct sNode* __result507__;
void* __right_value939 = (void*)0;
struct sNode* node_851;
struct sNode* __result508__;
struct sNode* __result509__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1923, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value767=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1923, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result437__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value772=_inf_value6));
            /*g*/come_call_finalizer3(__right_value767,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value772) { __right_value772 = come_decrement_ref_count2(__right_value772, ((struct sNode*)__right_value772)->finalize, ((struct sNode*)__right_value772)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result437__;
        }
        else {
            head_737=info->p;
            value_738=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_739=info->p;
            __dec_obj356=value_738;
            value_738=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_738),info));
            /* U1 */ if(__dec_obj356) { __dec_obj356 = come_decrement_ref_count2(__dec_obj356, ((struct sNode*)__dec_obj356)->finalize, ((struct sNode*)__dec_obj356)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_740[tail_739-head_737+1];
            memset(&buf_740, 0, sizeof(char)            *(tail_739-head_737+1)            );
            memcpy(buf_740,head_737,tail_739-head_737);
            buf_740[tail_739-head_737]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1935, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value777=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1935, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_738),(char*)come_increment_ref_count(__builtin_string(buf_740)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value7));
            if(value_738) { value_738 = come_decrement_ref_count2(value_738, ((struct sNode*)value_738)->finalize, ((struct sNode*)value_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value777,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result440__;
            if(value_738) { value_738 = come_decrement_ref_count2(value_738, ((struct sNode*)value_738)->finalize, ((struct sNode*)value_738)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_742=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_742++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_742--;
                if(                nest_742==0) {
                    break;
                }
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_743=info->p;
        head_sline_744=info->sline;
        sline_real_745=info->sline_real;
        info->sline_real=info->sline;
        buf_746=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__747=is_type_name(buf_746,info);
        static char* is_special_word_array_748[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_749=charppa_contained(is_special_word_array_748,19,buf_746);
        define_function_pointer_flag_750=(_Bool)0;
        if(        !is_special_word_749&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value784=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value784,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_750=(_Bool)1;
                }
            }
            info->p=head_743;
            info->sline=head_sline_744;
        }
        lambda_flag_751=(_Bool)0;
        if(        !is_special_word_749&&is_type_name__747) {
            info->p=head_743;
            info->sline=head_sline_744;
            ((struct tuple3$3sTypephcharphbool*)(__right_value785=backtrace_parse_type((_Bool)0,info)));
            /*g*/come_call_finalizer3(__right_value785,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_752=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_752,"lambda")) {
                lambda_flag_751=(_Bool)1;
            }
            info->p=head_743;
            info->sline=head_sline_744;
            /* U13 */word2_752 = come_decrement_ref_count2(word2_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_753=(_Bool)0;
        if(        !is_special_word_749) {
            info->p=head_743;
            info->sline=head_sline_744;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_754=(char*)come_increment_ref_count(parse_word(info));
                /* U13 */word2_754 = come_decrement_ref_count2(word2_754, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_753=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_743;
            info->sline=head_sline_744;
        }
        call_method_generics_fun_call_755=(_Bool)0;
        {
            info->p=head_743;
            info->sline=head_sline_744;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj363=buf_746;
                buf_746=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_746,info)&&((struct sVar*)(__right_value789=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_746)))==((void*)0)&&((struct sVar*)(__right_value790=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_746)))==((void*)0)&&*info->p==60)),            /*f*/come_call_finalizer3(__right_value789,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            /*f*/come_call_finalizer3(__right_value790,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_756=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_756++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_756==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_755=(_Bool)1;
                }
            }
            info->p=head_743;
            info->sline=head_sline_744;
        }
        inline_asm_757=(_Bool)0;
        {
            info->p=head_743;
            info->sline=head_sline_744;
            __dec_obj364=buf_746;
            buf_746=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_746,"asm")||string_operator_equals(buf_746,"__asm")||string_operator_equals(buf_746,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_757=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj365=buf_746;
                        buf_746=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_757=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_743;
            info->sline=head_sline_744;
        }
        parse_sharp_v5(info);
        __dec_obj366=buf_746;
        buf_746=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_751) {
            info->p=head_743;
            info->sline=head_sline_744;
            node_758=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_745;
            __result441__ = gComeFunResultObject = __result_obj__ = node_758;
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result441__;
            if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_746,"_Static_assert")||string_operator_equals(buf_746,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_759=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_760=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_759;
            expected_next_character(44,info);
            exp2_761=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result442__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value797=static_assert_node((struct sNode*)come_increment_ref_count(exp_760),(struct sNode*)come_increment_ref_count(exp2_761),info)));
            if(exp_760) { exp_760 = come_decrement_ref_count2(exp_760, ((struct sNode*)exp_760)->finalize, ((struct sNode*)exp_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_761) { exp2_761 = come_decrement_ref_count2(exp2_761, ((struct sNode*)exp2_761)->finalize, ((struct sNode*)exp2_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value797) { __right_value797 = come_decrement_ref_count2(__right_value797, ((struct sNode*)__right_value797)->finalize, ((struct sNode*)__right_value797)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result442__;
            if(exp_760) { exp_760 = come_decrement_ref_count2(exp_760, ((struct sNode*)exp_760)->finalize, ((struct sNode*)exp_760)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_761) { exp2_761 = come_decrement_ref_count2(exp2_761, ((struct sNode*)exp2_761)->finalize, ((struct sNode*)exp2_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_746,"extern")) {
            node_762=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result443__ = gComeFunResultObject = __result_obj__ = node_762;
            if(node_762) { node_762 = come_decrement_ref_count2(node_762, ((struct sNode*)node_762)->finalize, ((struct sNode*)node_762)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result443__;
            if(node_762) { node_762 = come_decrement_ref_count2(node_762, ((struct sNode*)node_762)->finalize, ((struct sNode*)node_762)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_746,"string")||string_operator_equals(buf_746,"wstring"))&&*info->p==40) {
            node_763=(struct sNode*)come_increment_ref_count(parse_function_call(buf_746,info,(_Bool)0));
            info->sline_real=sline_real_745;
            __result444__ = gComeFunResultObject = __result_obj__ = node_763;
            if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result444__;
            if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_746,"come")) {
            come_block_764=((void*)0);
            come_block_sline_765=0;
            if(            *info->p==123) {
                head_766=info->p;
                come_block_sline_765=info->sline;
                ((char*)(__right_value800=skip_block(info)));
                /* U11 */__right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_767=info->p;
                __dec_obj367=come_block_764;
                come_block_764=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2190, "buffer"))));
                come_call_finalizer3(__dec_obj367,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_768=tail_767-head_766;
                mem_769=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_768+1)), "05call.c", 2193, "char"));
                memcpy(mem_769,head_766,len_768);
                mem_769[len_768]=0;
                buffer_append_str(come_block_764,mem_769);
                buffer_append_str(come_block_764,"\n");
                /* U13 */mem_769 = come_decrement_ref_count2(mem_769, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_770=info->p;
                come_block_sline_765=info->sline;
                no_output_come_code_771=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value804=expression_v13(info)));
                if(__right_value804) { __right_value804 = come_decrement_ref_count2(__right_value804, ((struct sNode*)__right_value804)->finalize, ((struct sNode*)__right_value804)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_771;
                tail_772=info->p;
                __dec_obj368=come_block_764;
                come_block_764=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2211, "buffer"))));
                come_call_finalizer3(__dec_obj368,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_773=tail_772-head_770;
                mem_774=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_773+1)), "05call.c", 2214, "char"));
                memcpy(mem_774,head_770,len_773);
                mem_774[len_773]=0;
                buffer_append_str(come_block_764,"{");
                buffer_append_str(come_block_764,mem_774);
                buffer_append_str(come_block_764,"; }");
                buffer_append_str(come_block_764,"}");
                buffer_append_str(come_block_764,"\n");
                /* U13 */mem_774 = come_decrement_ref_count2(mem_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2225, "struct sNode");
            _inf_obj_value8=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value809=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2225, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_764),come_block_sline_765,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sComeCallNode_finalize;
            _inf_value8->clone=(void*)sComeCallNode_clone;
            _inf_value8->compile=(void*)sComeCallNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sComeCallNode_terminated;
            _inf_value8->kind=(void*)sComeCallNode_kind;
            node_775=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*g*/come_call_finalizer3(__right_value809,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_745;
            __result447__ = gComeFunResultObject = __result_obj__ = node_775;
            /*i*/come_call_finalizer3(come_block_764,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result447__;
            /*i*/come_call_finalizer3(come_block_764,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_775) { node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_746,"come_join")&&*info->p==40) {
            come_block_777=((void*)0);
            come_block_sline_778=0;
            expected_next_character(40,info);
            node_779=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_745;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2239, "struct sNode");
            _inf_obj_value9=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value816=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2239, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_779),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeJoinNode_finalize;
            _inf_value9->clone=(void*)sComeJoinNode_clone;
            _inf_value9->compile=(void*)sComeJoinNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeJoinNode_terminated;
            _inf_value9->kind=(void*)sComeJoinNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value820=_inf_value9));
            /*i*/come_call_finalizer3(come_block_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value816,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value820) { __right_value820 = come_decrement_ref_count2(__right_value820, ((struct sNode*)__right_value820)->finalize, ((struct sNode*)__right_value820)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
            /*i*/come_call_finalizer3(come_block_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_746,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_781=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_781=time_out_781*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_782=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2257, "list$1sNodeph"))));
            blocks_783=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2258, "list$1sBlockph"))));
            else_block_784=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2259, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj377=else_block_784;
                    else_block_784=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj377,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_785=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_786=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_782,(struct sNode*)come_increment_ref_count(var_name_785));
                    list$1sBlockph_add(blocks_783,(struct sBlock*)come_increment_ref_count(block_786));
                    if(                    *info->p==125) {
                        if(var_name_785) { var_name_785 = come_decrement_ref_count2(var_name_785, ((struct sNode*)var_name_785)->finalize, ((struct sNode*)var_name_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(block_786,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_785) { var_name_785 = come_decrement_ref_count2(var_name_785, ((struct sNode*)var_name_785)->finalize, ((struct sNode*)var_name_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(block_786,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_745;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2289, "struct sNode");
            _inf_obj_value10=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value834=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2289, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_782),(struct list$1sBlockph*)come_increment_ref_count(blocks_783),(struct sBlock*)come_increment_ref_count(else_block_784),time_out_781,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComePollNode_finalize;
            _inf_value10->clone=(void*)sComePollNode_clone;
            _inf_value10->compile=(void*)sComePollNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComePollNode_terminated;
            _inf_value10->kind=(void*)sComePollNode_kind;
            __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value863=_inf_value10));
            /*i*/come_call_finalizer3(vars_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_783,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(else_block_784,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value834,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value863) { __right_value863 = come_decrement_ref_count2(__right_value863, ((struct sNode*)__right_value863)->finalize, ((struct sNode*)__right_value863)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result468__;
            /*i*/come_call_finalizer3(vars_782,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(blocks_783,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(else_block_784,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_746,"none")&&*info->p==40) {
            node_819=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_745;
            __result469__ = gComeFunResultObject = __result_obj__ = node_819;
            if(node_819) { node_819 = come_decrement_ref_count2(node_819, ((struct sNode*)node_819)->finalize, ((struct sNode*)node_819)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result469__;
            if(node_819) { node_819 = come_decrement_ref_count2(node_819, ((struct sNode*)node_819)->finalize, ((struct sNode*)node_819)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_746,"some")&&*info->p==40) {
            node_820=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_745;
            __result470__ = gComeFunResultObject = __result_obj__ = node_820;
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result470__;
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_746,"__func__")||string_operator_equals(buf_746,"__FUNCTION__")) {
            info->sline_real=sline_real_745;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2306, "struct sNode");
            _inf_obj_value11=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value867=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2306, "sFuncNode")),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFuncNode_finalize;
            _inf_value11->clone=(void*)sFuncNode_clone;
            _inf_value11->compile=(void*)sFuncNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFuncNode_kind;
            __result473__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value870=_inf_value11));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value867,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value870) { __right_value870 = come_decrement_ref_count2(__right_value870, ((struct sNode*)__right_value870)->finalize, ((struct sNode*)__right_value870)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result473__;
        }
        else if(        !gComeC&&string_operator_equals(buf_746,"wildcard")) {
            info->sline_real=sline_real_745;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2310, "struct sNode");
            _inf_obj_value12=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value872=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2310, "sWildCard")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWildCard_finalize;
            _inf_value12->clone=(void*)sWildCard_clone;
            _inf_value12->compile=(void*)sWildCard_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWildCard_kind;
            __result476__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value875=_inf_value12));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value872,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value875) { __right_value875 = come_decrement_ref_count2(__right_value875, ((struct sNode*)__right_value875)->finalize, ((struct sNode*)__right_value875)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result476__;
        }
        else if(        string_operator_equals(buf_746,"__line__")||string_operator_equals(buf_746,"__LINE__")) {
            info->sline_real=sline_real_745;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2314, "struct sNode");
            _inf_obj_value13=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value877=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2314, "sLineNode")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLineNode_finalize;
            _inf_value13->clone=(void*)sLineNode_clone;
            _inf_value13->compile=(void*)sLineNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLineNode_kind;
            __result479__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value880=_inf_value13));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value877,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value880) { __right_value880 = come_decrement_ref_count2(__right_value880, ((struct sNode*)__right_value880)->finalize, ((struct sNode*)__right_value880)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result479__;
        }
        else if(        string_operator_equals(buf_746,"__sname__")) {
            info->sline_real=sline_real_745;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2318, "struct sNode");
            _inf_obj_value14=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value882=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2318, "sSNameNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sSNameNode_finalize;
            _inf_value14->clone=(void*)sSNameNode_clone;
            _inf_value14->compile=(void*)sSNameNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sSNameNode_kind;
            __result482__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value885=_inf_value14));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value882,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value885) { __right_value885 = come_decrement_ref_count2(__right_value885, ((struct sNode*)__right_value885)->finalize, ((struct sNode*)__right_value885)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result482__;
        }
        else if(        string_operator_equals(buf_746,"__caller_func__")) {
            info->sline_real=sline_real_745;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2322, "struct sNode");
            _inf_obj_value15=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value887=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2322, "sCallerFuncNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value15->clone=(void*)sCallerFuncNode_clone;
            _inf_value15->compile=(void*)sCallerFuncNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCallerFuncNode_kind;
            __result485__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value15));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value887,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result485__;
        }
        else if(        string_operator_equals(buf_746,"__caller_line__")) {
            info->sline_real=sline_real_745;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2326, "struct sNode");
            _inf_obj_value16=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value892=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2326, "sCallerLineNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerLineNode_finalize;
            _inf_value16->clone=(void*)sCallerLineNode_clone;
            _inf_value16->compile=(void*)sCallerLineNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerLineNode_kind;
            __result488__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value895=_inf_value16));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value892,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value895) { __right_value895 = come_decrement_ref_count2(__right_value895, ((struct sNode*)__right_value895)->finalize, ((struct sNode*)__right_value895)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result488__;
        }
        else if(        string_operator_equals(buf_746,"__caller_sname__")) {
            info->sline_real=sline_real_745;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2330, "struct sNode");
            _inf_obj_value17=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value897=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2330, "sCallerSNameNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value17->clone=(void*)sCallerSNameNode_clone;
            _inf_value17->compile=(void*)sCallerSNameNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerSNameNode_kind;
            __result491__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value900=_inf_value17));
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value897,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value900) { __right_value900 = come_decrement_ref_count2(__right_value900, ((struct sNode*)__right_value900)->finalize, ((struct sNode*)__right_value900)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result491__;
        }
        else if(        info->va_arg&&is_type_name(buf_746,info)) {
            info->p=head_743;
            info->sline=head_sline_744;
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value901=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_828=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_829=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_830=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value901,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_745;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2339, "struct sNode");
            _inf_obj_value18=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value903=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2339, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_828),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value18->clone=(void*)sVarArgTypeName_clone;
            _inf_value18->compile=(void*)sVarArgTypeName_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sVarArgTypeName_kind;
            __result494__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value907=_inf_value18));
            /*i*/come_call_finalizer3(type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_829 = come_decrement_ref_count2(name_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value903,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result494__;
            /*i*/come_call_finalizer3(type_828,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_829 = come_decrement_ref_count2(name_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_746,"sizeof")||string_operator_equals(buf_746,"_Alignof")||string_operator_equals(buf_746,"_Alignas")||string_operator_equals(buf_746,"__alignof__")) {
            node_832=(struct sNode*)come_increment_ref_count(string_node_v21(buf_746,head_743,head_sline_744,info));
            info->sline_real=sline_real_745;
            __result495__ = gComeFunResultObject = __result_obj__ = node_832;
            if(node_832) { node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result495__;
            if(node_832) { node_832 = come_decrement_ref_count2(node_832, ((struct sNode*)node_832)->finalize, ((struct sNode*)node_832)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_757) {
            buf2_833=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2348, "buffer"))));
            if(            *info->p!=40) {
                word_834=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_833,word_834);
                /* U13 */word_834 = come_decrement_ref_count2(word_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            nest_835=0;
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_833,40);
                    info->p++;
                    nest_835++;
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_833,41);
                    info->p++;
                    nest_835--;
                    if(                    nest_835==0) {
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_833,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_833,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_745;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2390, "struct sNode");
            _inf_obj_value19=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value914=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2390, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_833)),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sInlineAssembler_finalize;
            _inf_value19->clone=(void*)sInlineAssembler_clone;
            _inf_value19->compile=(void*)sInlineAssembler_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sInlineAssembler_kind;
            __result498__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value918=_inf_value19));
            /*i*/come_call_finalizer3(buf2_833,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value914,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value918) { __right_value918 = come_decrement_ref_count2(__right_value918, ((struct sNode*)__right_value918)->finalize, ((struct sNode*)__right_value918)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result498__;
            /*i*/come_call_finalizer3(buf2_833,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_753) {
            fun_name_837=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2393, "buffer"))));
            buffer_append_str(fun_name_837,buf_746);
            type_838=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value922=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value921=buffer_to_string(fun_name_837))))))));
            /* U11 */__right_value921 = come_decrement_ref_count2(__right_value921, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /*g*/come_call_finalizer3(__right_value922,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_838==((void*)0)) {
                klass_842=((struct sClass*)(__right_value925=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value924=buffer_to_string(fun_name_837))))));
                /* U11 */__right_value924 = come_decrement_ref_count2(__right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                /*g*/come_call_finalizer3(__right_value925,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_842) {
                    __dec_obj416=type_838;
                    type_838=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2403, "sType")),buf_746,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj416,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_746);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_838->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_837,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_837,"_");
            buf2_843=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_837,buf2_843);
            node_844=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value929=buffer_to_string(fun_name_837))),info,(_Bool)0));
            /* U11 */__right_value929 = come_decrement_ref_count2(__right_value929, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_745;
            __result503__ = gComeFunResultObject = __result_obj__ = node_844;
            /*i*/come_call_finalizer3(fun_name_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_843 = come_decrement_ref_count2(buf2_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_844) { node_844 = come_decrement_ref_count2(node_844, ((struct sNode*)node_844)->finalize, ((struct sNode*)node_844)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result503__;
            /*i*/come_call_finalizer3(fun_name_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_843 = come_decrement_ref_count2(buf2_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_844) { node_844 = come_decrement_ref_count2(node_844, ((struct sNode*)node_844)->finalize, ((struct sNode*)node_844)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_845=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2438, "buffer"))));
            buffer_append_str(fun_name_845,buf_746);
            buffer_append_str(fun_name_845,"_");
            buf2_846=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_845,buf2_846);
            node_847=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value934=buffer_to_string(fun_name_845))),info,(_Bool)0));
            /* U11 */__right_value934 = come_decrement_ref_count2(__right_value934, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_745;
            __result504__ = gComeFunResultObject = __result_obj__ = node_847;
            /*i*/come_call_finalizer3(fun_name_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_846 = come_decrement_ref_count2(buf2_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_847) { node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result504__;
            /*i*/come_call_finalizer3(fun_name_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */buf2_846 = come_decrement_ref_count2(buf2_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_847) { node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_755) {
            node_848=(struct sNode*)come_increment_ref_count(parse_function_call(buf_746,info,(_Bool)0));
            info->sline_real=sline_real_745;
            __result505__ = gComeFunResultObject = __result_obj__ = node_848;
            if(node_848) { node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result505__;
            if(node_848) { node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_749&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__747)) {
            node_849=(struct sNode*)come_increment_ref_count(parse_function_call(buf_746,info,(_Bool)0));
            info->sline_real=sline_real_745;
            __result506__ = gComeFunResultObject = __result_obj__ = node_849;
            if(node_849) { node_849 = come_decrement_ref_count2(node_849, ((struct sNode*)node_849)->finalize, ((struct sNode*)node_849)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result506__;
            if(node_849) { node_849 = come_decrement_ref_count2(node_849, ((struct sNode*)node_849)->finalize, ((struct sNode*)node_849)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_850=(struct sNode*)come_increment_ref_count(string_node_v21(buf_746,head_743,head_sline_744,info));
            info->sline_real=sline_real_745;
            __result507__ = gComeFunResultObject = __result_obj__ = node_850;
            if(node_850) { node_850 = come_decrement_ref_count2(node_850, ((struct sNode*)node_850)->finalize, ((struct sNode*)node_850)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result507__;
            if(node_850) { node_850 = come_decrement_ref_count2(node_850, ((struct sNode*)node_850)->finalize, ((struct sNode*)node_850)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */buf_746 = come_decrement_ref_count2(buf_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_851=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result508__ = gComeFunResultObject = __result_obj__ = node_851;
        if(node_851) { node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result508__;
        if(node_851) { node_851 = come_decrement_ref_count2(node_851, ((struct sNode*)node_851)->finalize, ((struct sNode*)node_851)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result509__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result509__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj357;
struct sNode* __dec_obj358;
char* __dec_obj359;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj357=self->sname;
            /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj358=self->value;
            /* U1 */ if(__dec_obj358) { __dec_obj358 = come_decrement_ref_count2(__dec_obj358, ((struct sNode*)__dec_obj358)->finalize, ((struct sNode*)__dec_obj358)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj359=self->value_source;
            /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result438__;
void* __right_value778 = (void*)0;
struct sReturnNode* result_741;
void* __right_value779 = (void*)0;
char* __dec_obj360;
void* __right_value780 = (void*)0;
struct sNode* __dec_obj361;
void* __right_value781 = (void*)0;
char* __dec_obj362;
struct sReturnNode* __result439__;
    if(    self==(void*)0) {
        __result438__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result438__;
    }
    result_741=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_741->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_741->sname;
        result_741->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj361=result_741->value;
        result_741->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        /* U1 */ if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj362=result_741->value_source;
        result_741->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result439__ = gComeFunResultObject = __result_obj__ = result_741;
    /*i*/come_call_finalizer3(result_741,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj369;
struct buffer* __dec_obj370;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj369=self->sname;
            /*G*/ __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj370=self->come_block;
            come_call_finalizer3(__dec_obj370,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result445__;
void* __right_value810 = (void*)0;
struct sComeCallNode* result_776;
void* __right_value811 = (void*)0;
char* __dec_obj371;
void* __right_value812 = (void*)0;
struct buffer* __dec_obj372;
struct sComeCallNode* __result446__;
    if(    self==(void*)0) {
        __result445__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result445__;
    }
    result_776=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_776->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj371=result_776->sname;
        result_776->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_776->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj372=result_776->come_block;
        result_776->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj372,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_776->come_block_sline=self->come_block_sline;
    }
    __result446__ = gComeFunResultObject = __result_obj__ = result_776;
    /*i*/come_call_finalizer3(result_776,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result446__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj373;
struct sNode* __dec_obj374;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj373=self->sname;
            /*G*/ __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj374=self->node;
            /* U1 */ if(__dec_obj374) { __dec_obj374 = come_decrement_ref_count2(__dec_obj374, ((struct sNode*)__dec_obj374)->finalize, ((struct sNode*)__dec_obj374)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result448__;
void* __right_value817 = (void*)0;
struct sComeJoinNode* result_780;
void* __right_value818 = (void*)0;
char* __dec_obj375;
void* __right_value819 = (void*)0;
struct sNode* __dec_obj376;
struct sComeJoinNode* __result449__;
    if(    self==(void*)0) {
        __result448__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result448__;
    }
    result_780=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_780->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj375=result_780->sname;
        result_780->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj376=result_780->node;
        result_780->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result449__ = gComeFunResultObject = __result_obj__ = result_780;
    /*i*/come_call_finalizer3(result_780,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result451__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result451__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result451__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value830 = (void*)0;
struct list_item$1sBlockph* litem_787;
struct sBlock* __dec_obj378;
void* __right_value831 = (void*)0;
struct list_item$1sBlockph* litem_788;
struct sBlock* __dec_obj379;
void* __right_value832 = (void*)0;
struct list_item$1sBlockph* litem_789;
struct sBlock* __dec_obj380;
struct list$1sBlockph* __result452__;
    if(    self->len==0) {
        litem_787=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value830=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1036, "list_item$1sBlockph"))));
        litem_787->prev=((void*)0);
        litem_787->next=((void*)0);
        __dec_obj378=litem_787->item;
        litem_787->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj378,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_787;
        self->head=litem_787;
    }
    else if(    self->len==1) {
        litem_788=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value831=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1046, "list_item$1sBlockph"))));
        litem_788->prev=self->head;
        litem_788->next=((void*)0);
        __dec_obj379=litem_788->item;
        litem_788->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj379,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_788;
        self->head->next=litem_788;
    }
    else {
        litem_789=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value832=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1056, "list_item$1sBlockph"))));
        litem_789->prev=self->tail;
        litem_789->next=((void*)0);
        __dec_obj380=litem_789->item;
        litem_789->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj380,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_789;
        self->tail=litem_789;
    }
    self->len++;
    __result452__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result452__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj381;
struct list$1sNodeph* __dec_obj382;
struct list$1sBlockph* __dec_obj383;
struct sBlock* __dec_obj384;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj381=self->sname;
            /*G*/ __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj382=self->vars;
            come_call_finalizer3(__dec_obj382,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj383=self->blocks;
            come_call_finalizer3(__dec_obj383,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj384=self->else_block;
            come_call_finalizer3(__dec_obj384,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result453__;
void* __right_value835 = (void*)0;
struct sComePollNode* result_790;
void* __right_value836 = (void*)0;
char* __dec_obj385;
void* __right_value837 = (void*)0;
struct list$1sNodeph* __dec_obj386;
void* __right_value861 = (void*)0;
struct list$1sBlockph* __dec_obj392;
void* __right_value862 = (void*)0;
struct sBlock* __dec_obj393;
struct sComePollNode* __result467__;
    if(    self==(void*)0) {
        __result453__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result453__;
    }
    result_790=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_790->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj385=result_790->sname;
        result_790->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj386=result_790->vars;
        result_790->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj386,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj392=result_790->blocks;
        result_790->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj392,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj393=result_790->else_block;
        result_790->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj393,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->time_out=self->time_out;
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_790;
    /*i*/come_call_finalizer3(result_790,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result454__;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct list$1sBlockph* result_791;
struct list_item$1sBlockph* it_792;
void* __right_value860 = (void*)0;
struct list$1sBlockph* __result466__;
    if(    self==((void*)0)) {
        __result454__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_791=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 1022, "list$1sBlockph"))));
    it_792=self->head;
    while(it_792!=((void*)0)) {
        list$1sBlockph_add(result_791,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_792->item)));
        it_792=it_792->next;
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_791;
    /*i*/come_call_finalizer3(result_791,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result455__;
void* __right_value840 = (void*)0;
struct sBlock* result_793;
void* __right_value844 = (void*)0;
struct list$1sNodeph* __dec_obj387;
void* __right_value859 = (void*)0;
struct sVarTable* __dec_obj391;
struct sBlock* __result465__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_793=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj387=result_793->mNodes;
        result_793->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj387,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj391=result_793->mVarTable;
        result_793->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj391,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_793->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result465__ = gComeFunResultObject = __result_obj__ = result_793;
    /*i*/come_call_finalizer3(result_793,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result456__;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1sNodeph* result_794;
struct list_item$1sNodeph* it_795;
void* __right_value843 = (void*)0;
struct list$1sNodeph* __result457__;
    if(    self==((void*)0)) {
        __result456__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result456__;
    }
    result_794=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1022, "list$1sNodeph"))));
    it_795=self->head;
    while(it_795!=((void*)0)) {
        list$1sNodeph_add(result_794,(struct sNode*)come_increment_ref_count(sNode_clone(it_795->item)));
        it_795=it_795->next;
    }
    __result457__ = gComeFunResultObject = __result_obj__ = result_794;
    /*i*/come_call_finalizer3(result_794,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result458__;
void* __right_value845 = (void*)0;
struct sVarTable* result_796;
void* __right_value858 = (void*)0;
struct map$2charphsVarph* __dec_obj390;
struct sVarTable* __result464__;
    if(    self==(void*)0) {
        __result458__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result458__;
    }
    result_796=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj390=result_796->mVars;
        result_796->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj390,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_796->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_796->mID=self->mID;
    }
    __result464__ = gComeFunResultObject = __result_obj__ = result_796;
    /*i*/come_call_finalizer3(result_796,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result464__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result459__;
void* __right_value846 = (void*)0;
void* __right_value852 = (void*)0;
struct map$2charphsVarph* result_798;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1charp* __dec_obj389;
char* it_799;
struct sVar* default_value_800;
struct sVar* it2_801;
struct map$2charphsVarph* __result463__;
default_value_800 = (void*)0;
    if(    self==((void*)0)) {
        __result459__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_798=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2354, "map$2charphsVarph"))));
    __dec_obj389=result_798->key_list;
    result_798->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2356, "list$1charp"))));
    come_call_finalizer3(__dec_obj389,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_799=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_799=map$2charphsVarph_next(self)    ){
        memset(&default_value_800,0,sizeof(struct sVar*));
        it2_801=map$2charphsVarph_at(self,it_799,default_value_800);
        map$2charphsVarph_put(result_798,it_799,it2_801);
    }
    __result463__ = gComeFunResultObject = __result_obj__ = result_798;
    /*i*/come_call_finalizer3(result_798,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result463__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
int i_797;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1charp* __dec_obj388;
struct map$2charphsVarph* __result461__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value847=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2283, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value848=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2284, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value849=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2285, "bool"))));
    for(    i_797=0;    i_797<128;    i_797++    ){
        self->item_existance[i_797]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj388=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2295, "list$1charp"))));
    come_call_finalizer3(__dec_obj388,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result461__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result460__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result460__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_813;
int it_814;
_Bool same_key_exist_815;
char* it2_816;
struct map$2charphsVarph* __result462__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_813=charp_get_hash_key(key)%self->size;
    it_814=hash_813;
    while((_Bool)1) {
        if(        self->item_existance[it_814]) {
            if(            charp_equals(self->keys[it_814],key)) {
                if(                1) {
                    /* U13 */self->keys[it_814] = come_decrement_ref_count2(self->keys[it_814], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_814]);
                    self->keys[it_814]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_814]);
                    self->keys[it_814]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_814],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_814]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_814]=item;
                }
                break;
            }
            it_814++;
            if(            it_814>=self->size) {
                it_814=0;
            }
            else if(            it_814==hash_813) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_814]=(_Bool)1;
            if(            1) {
                self->keys[it_814]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_814]=key;
            }
            if(            1) {
                self->items[it_814]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_814]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_815=(_Bool)0;
    for(    it2_816=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_816=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_816,key)) {
            same_key_exist_815=(_Bool)1;
        }
    }
    if(    !same_key_exist_815) {
        list$1charp_push_back(self->key_list,key);
    }
    __result462__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_802;
void* __right_value855 = (void*)0;
char** keys_803;
void* __right_value856 = (void*)0;
struct sVar** items_804;
void* __right_value857 = (void*)0;
_Bool* item_existance_805;
int len_806;
char* it_807;
struct sVar* default_value_808;
struct sVar* it2_809;
unsigned int hash_810;
int n_811;
struct sVar* default_value_812;
default_value_808 = (void*)0;
default_value_812 = (void*)0;
    size_802=self->size*10;
    keys_803=(char**)come_increment_ref_count(((char**)(__right_value855=(char**)come_calloc(1, sizeof(char*)*(1*(size_802)), "/usr/local/include/comelang.h", 2511, "char*%"))));
    items_804=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value856=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_802)), "/usr/local/include/comelang.h", 2512, "sVar*%"))));
    item_existance_805=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value857=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_802)), "/usr/local/include/comelang.h", 2513, "bool"))));
    len_806=0;
    for(    it_807=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_807=map$2charphsVarph_next(self)    ){
        memset(&default_value_808,0,sizeof(struct sVar*));
        it2_809=map$2charphsVarph_at(self,it_807,default_value_808);
        hash_810=charp_get_hash_key(it_807)%size_802;
        n_811=hash_810;
        while((_Bool)1) {
            if(            item_existance_805[n_811]) {
                n_811++;
                if(                n_811>=size_802) {
                    n_811=0;
                }
                else if(                n_811==hash_810) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_805[n_811]=(_Bool)1;
                keys_803[n_811]=it_807;
                items_804[n_811]=map$2charphsVarph_at(self,it_807,default_value_812);
                len_806++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_803;
    self->items=items_804;
    self->item_existance=item_existance_805;
    self->size=size_802;
    self->len=len_806;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_817;
int i_818;
    for(    i_817=0;    i_817<self->size;    i_817++    ){
        if(        self->item_existance[i_817]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_817],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_818=0;    i_818<self->size;    i_818++    ){
        if(        self->item_existance[i_818]) {
            if(            1) {
                /* U13 */self->keys[i_818] = come_decrement_ref_count2(self->keys[i_818], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj394;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj394=self->sname;
            /*G*/ __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result471__;
void* __right_value868 = (void*)0;
struct sFuncNode* result_821;
void* __right_value869 = (void*)0;
char* __dec_obj395;
struct sFuncNode* __result472__;
    if(    self==(void*)0) {
        __result471__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result471__;
    }
    result_821=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_821->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj395=result_821->sname;
        result_821->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_821->sline_real=self->sline_real;
    }
    __result472__ = gComeFunResultObject = __result_obj__ = result_821;
    /*i*/come_call_finalizer3(result_821,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj396;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj396=self->sname;
            /*G*/ __dec_obj396 = come_decrement_ref_count2(__dec_obj396, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result474__;
void* __right_value873 = (void*)0;
struct sWildCard* result_822;
void* __right_value874 = (void*)0;
char* __dec_obj397;
struct sWildCard* __result475__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_822=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_822->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj397=result_822->sname;
        result_822->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj397 = come_decrement_ref_count2(__dec_obj397, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_822->sline_real=self->sline_real;
    }
    __result475__ = gComeFunResultObject = __result_obj__ = result_822;
    /*i*/come_call_finalizer3(result_822,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj398;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj398=self->sname;
            /*G*/ __dec_obj398 = come_decrement_ref_count2(__dec_obj398, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result477__;
void* __right_value878 = (void*)0;
struct sLineNode* result_823;
void* __right_value879 = (void*)0;
char* __dec_obj399;
struct sLineNode* __result478__;
    if(    self==(void*)0) {
        __result477__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_823=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_823->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj399=result_823->sname;
        result_823->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj399 = come_decrement_ref_count2(__dec_obj399, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_823->sline_real=self->sline_real;
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_823;
    /*i*/come_call_finalizer3(result_823,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj400;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj400=self->sname;
            /*G*/ __dec_obj400 = come_decrement_ref_count2(__dec_obj400, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result480__;
void* __right_value883 = (void*)0;
struct sSNameNode* result_824;
void* __right_value884 = (void*)0;
char* __dec_obj401;
struct sSNameNode* __result481__;
    if(    self==(void*)0) {
        __result480__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result480__;
    }
    result_824=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_824->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj401=result_824->sname;
        result_824->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj401 = come_decrement_ref_count2(__dec_obj401, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_824->sline_real=self->sline_real;
    }
    __result481__ = gComeFunResultObject = __result_obj__ = result_824;
    /*i*/come_call_finalizer3(result_824,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj402;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj402=self->sname;
            /*G*/ __dec_obj402 = come_decrement_ref_count2(__dec_obj402, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result483__;
void* __right_value888 = (void*)0;
struct sCallerFuncNode* result_825;
void* __right_value889 = (void*)0;
char* __dec_obj403;
struct sCallerFuncNode* __result484__;
    if(    self==(void*)0) {
        __result483__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result483__;
    }
    result_825=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_825->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj403=result_825->sname;
        result_825->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj403 = come_decrement_ref_count2(__dec_obj403, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_825->sline_real=self->sline_real;
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_825;
    /*i*/come_call_finalizer3(result_825,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj404;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj404=self->sname;
            /*G*/ __dec_obj404 = come_decrement_ref_count2(__dec_obj404, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result486__;
void* __right_value893 = (void*)0;
struct sCallerLineNode* result_826;
void* __right_value894 = (void*)0;
char* __dec_obj405;
struct sCallerLineNode* __result487__;
    if(    self==(void*)0) {
        __result486__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result486__;
    }
    result_826=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_826->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj405=result_826->sname;
        result_826->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj405 = come_decrement_ref_count2(__dec_obj405, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_826->sline_real=self->sline_real;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_826;
    /*i*/come_call_finalizer3(result_826,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj406;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj406=self->sname;
            /*G*/ __dec_obj406 = come_decrement_ref_count2(__dec_obj406, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result489__;
void* __right_value898 = (void*)0;
struct sCallerSNameNode* result_827;
void* __right_value899 = (void*)0;
char* __dec_obj407;
struct sCallerSNameNode* __result490__;
    if(    self==(void*)0) {
        __result489__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result489__;
    }
    result_827=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_827->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj407=result_827->sname;
        result_827->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_827->sline_real=self->sline_real;
    }
    __result490__ = gComeFunResultObject = __result_obj__ = result_827;
    /*i*/come_call_finalizer3(result_827,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result490__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj408;
struct sType* __dec_obj409;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj408=self->sname;
            /*G*/ __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj409=self->type;
            come_call_finalizer3(__dec_obj409,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result492__;
void* __right_value904 = (void*)0;
struct sVarArgTypeName* result_831;
void* __right_value905 = (void*)0;
char* __dec_obj410;
void* __right_value906 = (void*)0;
struct sType* __dec_obj411;
struct sVarArgTypeName* __result493__;
    if(    self==(void*)0) {
        __result492__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    result_831=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_831->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj410=result_831->sname;
        result_831->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj410 = come_decrement_ref_count2(__dec_obj410, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_831->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj411=result_831->type;
        result_831->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj411,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result493__ = gComeFunResultObject = __result_obj__ = result_831;
    /*i*/come_call_finalizer3(result_831,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj412;
char* __dec_obj413;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj412=self->sname;
            /*G*/ __dec_obj412 = come_decrement_ref_count2(__dec_obj412, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj413=self->source;
            /*G*/ __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result496__;
void* __right_value915 = (void*)0;
struct sInlineAssembler* result_836;
void* __right_value916 = (void*)0;
char* __dec_obj414;
void* __right_value917 = (void*)0;
char* __dec_obj415;
struct sInlineAssembler* __result497__;
    if(    self==(void*)0) {
        __result496__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result496__;
    }
    result_836=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_836->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj414=result_836->sname;
        result_836->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj414 = come_decrement_ref_count2(__dec_obj414, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_836->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj415=result_836->source;
        result_836->source=(char*)come_increment_ref_count(string_clone(self->source));
        /*G*/ __dec_obj415 = come_decrement_ref_count2(__dec_obj415, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result497__ = gComeFunResultObject = __result_obj__ = result_836;
    /*i*/come_call_finalizer3(result_836,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result497__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_839;
unsigned int hash_840;
unsigned int it_841;
struct sType* __result499__;
struct sType* __result500__;
struct sType* __result501__;
struct sType* __result502__;
default_value_839 = (void*)0;
    memset(&default_value_839,0,sizeof(struct sType*));
    hash_840=charp_get_hash_key(((char*)key))%self->size;
    it_841=hash_840;
    while((_Bool)1) {
        if(        self->item_existance[it_841]) {
            if(            charp_equals(self->keys[it_841],key)) {
                __result499__ = gComeFunResultObject = __result_obj__ = self->items[it_841];
                /*i*/come_call_finalizer3(default_value_839,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result499__;
            }
            it_841++;
            if(            it_841>=self->size) {
                it_841=0;
            }
            else if(            it_841==hash_840) {
                __result500__ = gComeFunResultObject = __result_obj__ = default_value_839;
                /*i*/come_call_finalizer3(default_value_839,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result500__;
            }
        }
        else {
            __result501__ = gComeFunResultObject = __result_obj__ = default_value_839;
            /*i*/come_call_finalizer3(default_value_839,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result501__;
        }
    }
    __result502__ = gComeFunResultObject = __result_obj__ = default_value_839;
    /*i*/come_call_finalizer3(default_value_839,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result502__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value940 = (void*)0;
struct sNode* __result510__;
    __result510__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value940=expression_node_v99(info)));
    if(__right_value940) { __right_value940 = come_decrement_ref_count2(__right_value940, ((struct sNode*)__right_value940)->finalize, ((struct sNode*)__right_value940)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result510__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct sNode* __dec_obj417;
struct sNode* __result511__;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* __dec_obj418;
struct sNode* __result512__;
struct sNode* __result513__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj417=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj417) { __dec_obj417 = come_decrement_ref_count2(__dec_obj417, ((struct sNode*)__dec_obj417)->finalize, ((struct sNode*)__dec_obj417)->_protocol_obj, 0,0,0, (void*)0); };
        __result511__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result511__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj418=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        /* U1 */ if(__dec_obj418) { __dec_obj418 = come_decrement_ref_count2(__dec_obj418, ((struct sNode*)__dec_obj418)->finalize, ((struct sNode*)__dec_obj418)->_protocol_obj, 0,0,0, (void*)0); };
        __result512__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result512__;
    }
    __result513__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result513__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value945 = (void*)0;
struct sNode* node_852;
void* __right_value946 = (void*)0;
struct sNode* __dec_obj419;
struct sNode* __result514__;
    node_852=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj419=node_852;
    node_852=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_852),info));
    /* U1 */ if(__dec_obj419) { __dec_obj419 = come_decrement_ref_count2(__dec_obj419, ((struct sNode*)__dec_obj419)->finalize, ((struct sNode*)__dec_obj419)->_protocol_obj, 0,0,0, (void*)0); };
    __result514__ = gComeFunResultObject = __result_obj__ = node_852;
    if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result514__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_853;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct buffer* buf_854;
void* __right_value949 = (void*)0;
char* __dec_obj420;
int i_855;
void* __right_value950 = (void*)0;
char* __dec_obj421;
void* __right_value951 = (void*)0;
char* __dec_obj422;
int i_856;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
char* __result515__;
struct_name_853 = (void*)0;
    buf_854=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2524, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj420=struct_name_853;
        struct_name_853=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj420 = come_decrement_ref_count2(__dec_obj420, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_855=0;            i_855<obj_type->mOriginalTypeNamePointerNum;            i_855++            ){
                buffer_append_str(buf_854,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj421=struct_name_853;
        struct_name_853=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj421 = come_decrement_ref_count2(__dec_obj421, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj422=struct_name_853;
        struct_name_853=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj422 = come_decrement_ref_count2(__dec_obj422, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_856=0;        i_856<obj_type->mPointerNum;        i_856++        ){
            buffer_append_str(buf_854,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_854,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_854,"pa");
    }
    __result515__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value953=xsprintf("%s%s_%s",struct_name_853,((char*)(__right_value952=buffer_to_string(buf_854))),fun_name)));
    /* U13 */struct_name_853 = come_decrement_ref_count2(struct_name_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value952 = come_decrement_ref_count2(__right_value952, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value953 = come_decrement_ref_count2(__right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_857;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct buffer* buf_858;
void* __right_value956 = (void*)0;
char* __dec_obj423;
void* __right_value957 = (void*)0;
char* __dec_obj424;
int i_859;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
char* __result516__;
struct_name_857 = (void*)0;
    buf_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2559, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj423=struct_name_857;
        struct_name_857=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj424=struct_name_857;
        struct_name_857=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj424 = come_decrement_ref_count2(__dec_obj424, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_859=0;        i_859<obj_type->mPointerNum;        i_859++        ){
            buffer_append_str(buf_858,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_858,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_858,"pa");
    }
    __result516__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value959=xsprintf("%s%s_%s",struct_name_857,((char*)(__right_value958=buffer_to_string(buf_858))),fun_name)));
    /* U13 */struct_name_857 = come_decrement_ref_count2(struct_name_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value958 = come_decrement_ref_count2(__right_value958, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result516__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_860;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct buffer* buf_861;
void* __right_value962 = (void*)0;
char* __dec_obj425;
int i_862;
void* __right_value963 = (void*)0;
char* __dec_obj426;
void* __right_value964 = (void*)0;
char* __dec_obj427;
int i_863;
void* __right_value965 = (void*)0;
int len_865;
void* __right_value966 = (void*)0;
char* __result517__;
struct_name_860 = (void*)0;
    buf_861=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2585, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj425=struct_name_860;
        struct_name_860=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        /*G*/ __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_862=0;            i_862<obj_type->mOriginalTypeNamePointerNum;            i_862++            ){
                buffer_append_str(buf_861,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj426=struct_name_860;
        struct_name_860=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        /*G*/ __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj427=struct_name_860;
        struct_name_860=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        /*G*/ __dec_obj427 = come_decrement_ref_count2(__dec_obj427, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_863=0;        i_863<obj_type->mPointerNum;        i_863++        ){
            buffer_append_str(buf_861,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_861,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_861,"pa");
    }
    char none_method_name_864[charp_length(fun_name)+1];
    memset(&none_method_name_864, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_865=string_length(struct_name_860)+string_length(((char*)(__right_value965=buffer_to_string(buf_861))));
    /* U11 */__right_value965 = come_decrement_ref_count2(__right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_864,fun_name+len_865+1,charp_length(fun_name)-len_865-1);
    none_method_name_864[charp_length(fun_name)-len_865-1]=0;
    __result517__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value966=__builtin_string(none_method_name_864)));
    /* U13 */struct_name_860 = come_decrement_ref_count2(struct_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_861,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value966 = come_decrement_ref_count2(__right_value966, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result517__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value967 = (void*)0;
char* struct_name_866;
void* __right_value968 = (void*)0;
char* __result518__;
    struct_name_866=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result518__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value968=xsprintf("%s_%s",struct_name_866,fun_name)));
    /* U13 */struct_name_866 = come_decrement_ref_count2(struct_name_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value968 = come_decrement_ref_count2(__right_value968, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result519__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result519__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result519__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_867;
char* p_868;
int sline_869;
_Bool err_flag_870;
void* __right_value971 = (void*)0;
char* label_871;
void* __right_value972 = (void*)0;
char* __dec_obj428;
char* __dec_obj429;
_Bool no_comma_872;
_Bool in_fun_param_873;
void* __right_value973 = (void*)0;
struct sNode* node_874;
void* __right_value974 = (void*)0;
struct sNode* __dec_obj430;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sNode* _inf_value20;
struct sLambdaCall* _inf_obj_value20;
void* __right_value983 = (void*)0;
struct sNode* __result522__;
struct sNode* __result523__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_867=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2649, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_868=info->p;
            sline_869=info->sline;
            err_flag_870=(_Bool)0;
            label_871=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj428=label_871;
                label_871=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_870=(_Bool)1;
            }
            if(            err_flag_870==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj429=label_871;
                label_871=((void*)0);
                /*G*/ __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_868;
                info->sline=sline_869;
            }
            no_comma_872=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_873=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_874=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj430=node_874;
            node_874=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_874),info));
            /* U1 */ if(__dec_obj430) { __dec_obj430 = come_decrement_ref_count2(__dec_obj430, ((struct sNode*)__dec_obj430)->finalize, ((struct sNode*)__dec_obj430)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_872;
            info->in_fun_param=in_fun_param_873;
            list$1tuple2$2charphsNodephph_push_back(params_867,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2692, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_871),(struct sNode*)come_increment_ref_count(node_874))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /* U13 */label_871 = come_decrement_ref_count2(label_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            /* U13 */label_871 = come_decrement_ref_count2(label_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2710, "struct sNode");
        _inf_obj_value20=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value978=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2710, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_867,info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sLambdaCall_finalize;
        _inf_value20->clone=(void*)sLambdaCall_clone;
        _inf_value20->compile=(void*)sLambdaCall_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sLambdaCall_kind;
        __result522__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value983=_inf_value20));
        /*i*/come_call_finalizer3(params_867,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value978,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value983) { __right_value983 = come_decrement_ref_count2(__right_value983, ((struct sNode*)__right_value983)->finalize, ((struct sNode*)__right_value983)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result522__;
        /*i*/come_call_finalizer3(params_867,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result523__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result523__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj431;
struct sNode* __dec_obj432;
struct list$1tuple2$2charphsNodephph* __dec_obj433;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj431=self->sname;
            /*G*/ __dec_obj431 = come_decrement_ref_count2(__dec_obj431, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj432=self->node;
            /* U1 */ if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj433=self->params;
            come_call_finalizer3(__dec_obj433,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result520__;
void* __right_value979 = (void*)0;
struct sLambdaCall* result_875;
void* __right_value980 = (void*)0;
char* __dec_obj434;
void* __right_value981 = (void*)0;
struct sNode* __dec_obj435;
void* __right_value982 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj436;
struct sLambdaCall* __result521__;
    if(    self==(void*)0) {
        __result520__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result520__;
    }
    result_875=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_875->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj434=result_875->sname;
        result_875->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_875->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj435=result_875->node;
        result_875->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj435) { __dec_obj435 = come_decrement_ref_count2(__dec_obj435, ((struct sNode*)__dec_obj435)->finalize, ((struct sNode*)__dec_obj435)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj436=result_875->params;
        result_875->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj436,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result521__ = gComeFunResultObject = __result_obj__ = result_875;
    /*i*/come_call_finalizer3(result_875,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result521__;
}

