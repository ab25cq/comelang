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

typedef long  long off_t;

typedef long ssize_t;

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

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int dev_t;

typedef unsigned short int mode_t;

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
    struct tuple1$1sTypeph* mNoExceptionType;
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
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
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
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
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
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    _Bool in_header;
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

struct sIfNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sMultipleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* multiple_node;
};

struct sFreeITNode
{
    int sline;
    char* sname;
};

struct sSaveRightValueObjects
{
    int sline;
    char* sname;
};

struct sRestoreRightValueObjects
{
    int sline;
    char* sname;
};

// source head
extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
extern const int sys_nerr;
extern const char* sys_errlist[];
extern int __mb_cur_max;
extern char* suboptarg;
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
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
extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
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
_Bool xiswascii(int c);
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
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
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
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
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item);
static struct sVar* sVar_clone(struct sVar* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
struct sFreeITNode* sFreeITNode_initialize(struct sFreeITNode* self, struct sInfo* info);
_Bool sFreeITNode_terminated(struct sFreeITNode* self);
char* sFreeITNode_kind(struct sFreeITNode* self);
_Bool sFreeITNode_compile(struct sFreeITNode* self, struct sInfo* info);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
static void sFreeITNode_finalize(struct sFreeITNode* self);
static struct sFreeITNode* sFreeITNode_clone(struct sFreeITNode* self);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
// uniq global variable
// source head3
struct list$1sRightValueObjectph* gExceptionRightValueObjects=(void*)0;

// inline function
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
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2392, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2399, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2408, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2415, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2422, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2429, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2436, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2736, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2746, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2751, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2756, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2789, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2791, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2796, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2798, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2803, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2805, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2810, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2812, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2817, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2819, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2824, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2826, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2831, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2833, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2838, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2843, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2848, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2853, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2858, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2863, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2868, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2873, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2878, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2883, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2888, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2893, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2898, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2903, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
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
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 219, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 229, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 239, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 219, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 229, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 239, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 219, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 229, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 239, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 219, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 229, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 239, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 219, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 229, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 239, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 219, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 229, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 239, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value118 = (void*)0;
struct sNode* __dec_obj16;
void* __right_value142 = (void*)0;
struct sBlock* __dec_obj53;
void* __right_value143 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value150 = (void*)0;
struct list$1sBlockph* __dec_obj59;
void* __right_value151 = (void*)0;
struct sBlock* __dec_obj60;
struct sBlock* __dec_obj61;
struct sIfNode* __result104__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj53=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj53,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj54=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(elif_expression_nodes));
    come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj59=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(elif_blocks));
    come_call_finalizer3(__dec_obj59,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj60=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        come_call_finalizer3(__dec_obj60,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj61=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj61,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result104__;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
char* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value152=__builtin_string("sIfNode")));
    /* U11 */__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_145;
int i_146;
struct sBlock* else_block_150;
int elif_num_151;
_Bool guard__152;
char* if_result_var_name_153;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sType* if_result_type_154;
void* __right_value155 = (void*)0;
char* __dec_obj68;
void* __right_value185 = (void*)0;
struct sVar* var__168;
void* __right_value186 = (void*)0;
struct sNode* expression_node_169;
int sline_170;
char* sname_171;
_Bool comma_instead_of_semicolon_before_172;
_Bool __result120__;
struct sBlock* if_block_173;
_Bool normal_if_174;
void* __right_value187 = (void*)0;
struct CVALUE* conditional_value_175;
struct sVar* var__176;
int num_if_conditional_stack_178;
void* __right_value188 = (void*)0;
struct CVALUE* conditional_value_179;
struct sVar* var__180;
int i_181;
struct sNode* expression_node2_182;
_Bool comma_instead_of_semicolon_before_186;
_Bool __result123__;
struct sBlock* elif_node_block_187;
_Bool normal_if_188;
void* __right_value189 = (void*)0;
struct CVALUE* conditional_value_189;
void* __right_value190 = (void*)0;
struct CVALUE* conditional_value_190;
int num_elif_conditional_stack_192;
struct sVar* var__193;
int __exception_result_var_b1;
void* __right_value191 = (void*)0;
struct sNode* result_node_194;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sNode* __dec_obj94;
_Bool __result124__;
void* __right_value194 = (void*)0;
struct CVALUE* come_value2_195;
void* __right_value195 = (void*)0;
struct sType* __dec_obj95;
char* __dec_obj99;
_Bool __result126__;
    existance_of_result_value_145=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_145=(_Bool)0;
        }
        for(        i_146=0;        i_146<self->mElifNum;        i_146++        ){
            if(            !list$1sBlockphp_operator_load_element(self->mElifBlocks,i_146)->mOmitSemicolon) {
                existance_of_result_value_145=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_145=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"In conditional operator comelang can't use if statment");
        return (_Bool)0;
    }
    else_block_150=self->mElseBlock;
    elif_num_151=self->mElifNum;
    guard__152=self->mGuard;
    if_result_var_name_153=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_145) {
        if_result_type_154=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 69, "sType")),"void*",(_Bool)0,info));
        static int var_num_155=0;
        __dec_obj68=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_155++));
        /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(sType_clone(if_result_type_154)),info);
        var__168=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value186=make_define_var(var__168->mType,var__168->mCValueName,(_Bool)0,info))));
        /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(if_result_type_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_169=self->mExpressionNode;
    sline_170=info->sline;
    sname_171=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_172=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(    !node_compile(expression_node_169,info)) {
        __result120__ = (_Bool)0;
        /* U13 */if_result_var_name_153 = come_decrement_ref_count2(if_result_var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result120__;
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_172;
    if_block_173=self->mIfBlock;
    normal_if_174=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_174=(_Bool)0;
    }
    if(    normal_if_174) {
        conditional_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__152) {
            var__176=conditional_value_175->var;
            if(            var__176) {
                var__176->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_175->c_value);
        /*i*/come_call_finalizer3(conditional_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_177=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_177);
        num_if_conditional_stack_178=num_if_conditional_177;
        conditional_value_179=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__152) {
            var__180=conditional_value_179->var;
            if(            var__180) {
                var__180->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_177,conditional_value_179->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_178);
        /*i*/come_call_finalizer3(conditional_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_173,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_145);
    add_come_code(info,"}\n");
    if(    elif_num_151>0) {
        for(        i_181=0;        i_181<elif_num_151;        i_181++        ){
            expression_node2_182=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_181), "08if.c", 147, 0));
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_186=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            if(            !node_compile(expression_node2_182,info)) {
                __result123__ = (_Bool)0;
                /* U13 */if_result_var_name_153 = come_decrement_ref_count2(if_result_var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result123__;
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_186;
            elif_node_block_187=((struct sBlock*)come_null_check(list$1sBlockphp_operator_load_element(self->mElifBlocks,i_181), "08if.c", 160, 1));
            normal_if_188=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_188=(_Bool)0;
            }
            if(            normal_if_188) {
                conditional_value_189=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s) {\n",conditional_value_189->c_value);
                /*i*/come_call_finalizer3(conditional_value_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_190=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                static int num_elif_conditional_191=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_191);
                num_elif_conditional_stack_192=num_elif_conditional_191;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_191,conditional_value_190->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_192);
                /*i*/come_call_finalizer3(conditional_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_187,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_145);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_150) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_150,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_145);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_145) {
        var__193=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 207, 2),__exception_result_var_b1=assert_v2(var__193!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_194=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj94=result_node_194;
        result_node_194=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(sType_clone(var__193->mType)),(struct sNode*)come_increment_ref_count(result_node_194),info));
        /* U1 */ if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
        if(        !node_compile(result_node_194,info)) {
            __result124__ = (_Bool)0;
            if(result_node_194) { result_node_194 = come_decrement_ref_count2(result_node_194, ((struct sNode*)result_node_194)->finalize, ((struct sNode*)result_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */if_result_var_name_153 = come_decrement_ref_count2(if_result_var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result124__;
        }
        come_value2_195=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj95=come_value2_195->type;
        come_value2_195->type=(struct sType*)come_increment_ref_count(sType_clone(var__193->mType));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_195));
        if(result_node_194) { result_node_194 = come_decrement_ref_count2(result_node_194, ((struct sNode*)result_node_194)->finalize, ((struct sNode*)result_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj99=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_153);
    /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result126__ = (_Bool)1;
    /* U13 */if_result_var_name_153 = come_decrement_ref_count2(if_result_var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result126__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result65__;
void* __right_value117 = (void*)0;
struct sNode* result_66;
struct sNode* __result66__;
    if(    self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_66=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_66->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_66->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_66->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_66->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_66->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_66->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_66->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_66->kind=self->kind;
    }
    __result66__ = gComeFunResultObject = __result_obj__ = result_66;
    if(result_66) { result_66 = come_decrement_ref_count2(result_66, ((struct sNode*)result_66)->finalize, ((struct sNode*)result_66)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result67__;
void* __right_value119 = (void*)0;
struct sBlock* result_67;
void* __right_value126 = (void*)0;
struct list$1sNodeph* __dec_obj21;
void* __right_value141 = (void*)0;
struct sVarTable* __dec_obj50;
struct sBlock* __result99__;
    if(    self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_67=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj21=result_67->mNodes;
        result_67->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj21,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj50=result_67->mVarTable;
        result_67->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj50,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result68__;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1sNodeph* result_70;
struct list_item$1sNodeph* it_71;
void* __right_value125 = (void*)0;
struct list$1sNodeph* __result71__;
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_70=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_71=self->head;
    while(it_71!=((void*)0)) {
        list$1sNodeph_add(result_70,(struct sNode*)come_increment_ref_count(sNode_clone(it_71->item)));
        it_71=it_71->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_70;
    /*i*/come_call_finalizer3(result_70,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result69__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_68;
struct list_item$1sNodeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj17;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj17=self->item;
            /* U1 */ if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj18;
void* __right_value123 = (void*)0;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj19;
void* __right_value124 = (void*)0;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result70__;
    if(    self->len==0) {
        litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value122=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sNodeph"))));
        litem_72->prev=((void*)0);
        litem_72->next=((void*)0);
        __dec_obj18=litem_72->item;
        litem_72->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_72;
        self->head=litem_72;
    }
    else if(    self->len==1) {
        litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sNodeph"))));
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj19=litem_73->item;
        litem_73->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sNodeph"))));
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj20=litem_74->item;
        litem_74->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_75;
struct list_item$1sNodeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result72__;
void* __right_value127 = (void*)0;
struct sVarTable* result_77;
void* __right_value140 = (void*)0;
struct map$2charphsVarph* __dec_obj49;
struct sVarTable* __result98__;
    if(    self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_77=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj49=result_77->mVars;
        result_77->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj49,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_77->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_77->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_77->mID=self->mID;
    }
    __result98__ = gComeFunResultObject = __result_obj__ = result_77;
    /*i*/come_call_finalizer3(result_77,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result73__;
void* __right_value128 = (void*)0;
void* __right_value134 = (void*)0;
struct map$2charphsVarph* result_89;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1charp* __dec_obj48;
char* it_92;
struct sVar* default_value_95;
struct sVar* it2_98;
struct map$2charphsVarph* __result97__;
default_value_95 = (void*)0;
    if(    self==((void*)0)) {
        __result73__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    result_89=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1467, "map$2charphsVarph"))));
    __dec_obj48=result_89->key_list;
    result_89->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1469, "list$1charp"))));
    come_call_finalizer3(__dec_obj48,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_92=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_92=map$2charphsVarph_next(self)    ){
        memset(&default_value_95,0,sizeof(struct sVar*));
        it2_98=map$2charphsVarph_at(self,it_92,default_value_95);
        map$2charphsVarph_put(result_89,it_92,it2_98);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
int i_78;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1charp* __dec_obj22;
struct map$2charphsVarph* __result75__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value129=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1396, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value130=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1397, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value131=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1398, "bool"))));
    for(    i_78=0;    i_78<128;    i_78++    ){
        self->item_existance[i_78]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj22=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1408, "list$1charp"))));
    come_call_finalizer3(__dec_obj22,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result74__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_79;
int i_88;
    for(    i_79=0;    i_79<self->size;    i_79++    ){
        if(        self->item_existance[i_79]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_79],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_88=0;    i_88<self->size;    i_88++    ){
        if(        self->item_existance[i_88]) {
            if(            1) {
                /* U13 */self->keys[i_88] = come_decrement_ref_count2(self->keys[i_88], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj23;
char* __dec_obj24;
struct sType* __dec_obj25;
char* __dec_obj47;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj23=self->mName;
            /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj24=self->mCValueName;
            /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj25=self->mType;
            come_call_finalizer3(__dec_obj25,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj47=self->mFunName;
            /*G*/ __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj26;
struct tuple1$1sTypeph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj30;
char* __dec_obj32;
struct list$1sTypeph* __dec_obj33;
struct list$1sNodeph* __dec_obj35;
struct list$1sTypeph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
struct sNode* __dec_obj41;
struct tuple1$1sTypeph* __dec_obj42;
struct sNode* __dec_obj44;
char* __dec_obj45;
char* __dec_obj46;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj26=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj26,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj28=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj28,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj30=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj32=self->mGenericsName;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj33=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj33,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj35=self->mArrayNum;
            come_call_finalizer3(__dec_obj35,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj36=self->mParamTypes;
            come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj37=self->mParamNames;
            come_call_finalizer3(__dec_obj37,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj39=self->mResultType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj41=self->mAlignas;
            /* U1 */ if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj42=self->mChannelType;
            come_call_finalizer3(__dec_obj42,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj44=self->mSizeNum;
            /* U1 */ if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj45=self->mOriginalTypeName;
            /*G*/ __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj46=self->mAsmName;
            /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_80;
struct list_item$1sTypeph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_82;
struct list_item$1sTypeph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_84;
struct list_item$1charph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_86;
struct list_item$1charph* prev_it_87;
    it_86=self->head;
    while(it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*i*/come_call_finalizer3(prev_it_87,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj43=self->v1;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_90;
char* __result76__;
char* __result77__;
char* result_91;
char* __result78__;
result_90 = (void*)0;
result_91 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_90,0,sizeof(char*));
        __result76__ = gComeFunResultObject = __result_obj__ = result_90;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result77__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    memset(&result_91,0,sizeof(char*));
    __result78__ = gComeFunResultObject = __result_obj__ = result_91;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_93;
char* __result79__;
char* __result80__;
char* result_94;
char* __result81__;
result_93 = (void*)0;
result_94 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_93,0,sizeof(char*));
        __result79__ = gComeFunResultObject = __result_obj__ = result_93;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result80__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    memset(&result_94,0,sizeof(char*));
    __result81__ = gComeFunResultObject = __result_obj__ = result_94;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_96;
unsigned int it_97;
struct sVar* __result82__;
struct sVar* __result83__;
struct sVar* __result84__;
struct sVar* __result85__;
    hash_96=string_get_hash_key(((char*)key))%self->size;
    it_97=hash_96;
    while((_Bool)1) {
        if(        self->item_existance[it_97]) {
            if(            string_equals(self->keys[it_97],key)) {
                __result82__ = gComeFunResultObject = __result_obj__ = self->items[it_97];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result82__;
            }
            it_97++;
            if(            it_97>=self->size) {
                it_97=0;
            }
            else if(            it_97==hash_96) {
                __result83__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result83__;
            }
        }
        else {
            __result84__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result84__;
        }
    }
    __result85__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_110;
int it_111;
_Bool same_key_exist_128;
char* it2_131;
struct map$2charphsVarph* __result96__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_110=string_get_hash_key(key)%self->size;
    it_111=hash_110;
    while((_Bool)1) {
        if(        self->item_existance[it_111]) {
            if(            string_equals(self->keys[it_111],key)) {
                if(                1) {
                    /* U13 */self->keys[it_111] = come_decrement_ref_count2(self->keys[it_111], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_111]);
                    self->keys[it_111]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_111]);
                    self->keys[it_111]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_111],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_111]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_111]=item;
                }
                break;
            }
            it_111++;
            if(            it_111>=self->size) {
                it_111=0;
            }
            else if(            it_111==hash_110) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_111]=(_Bool)1;
            if(            1) {
                self->keys[it_111]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_111]=key;
            }
            if(            1) {
                self->items[it_111]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_111]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_128=(_Bool)0;
    for(    it2_131=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_131=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_131,key)) {
            same_key_exist_128=(_Bool)1;
        }
    }
    if(    !same_key_exist_128) {
        list$1charp_push_back(self->key_list,key);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_99;
void* __right_value137 = (void*)0;
char** keys_100;
void* __right_value138 = (void*)0;
struct sVar** items_101;
void* __right_value139 = (void*)0;
_Bool* item_existance_102;
int len_103;
char* it_104;
struct sVar* default_value_105;
struct sVar* it2_106;
unsigned int hash_107;
int n_108;
struct sVar* default_value_109;
default_value_105 = (void*)0;
default_value_109 = (void*)0;
    size_99=self->size*10;
    keys_100=(char**)come_increment_ref_count(((char**)(__right_value137=(char**)come_calloc(1, sizeof(char*)*(1*(size_99)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_101=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value138=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_99)), "/usr/local/include/comelang.h", 1625, "sVar*%"))));
    item_existance_102=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value139=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_99)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_103=0;
    for(    it_104=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_104=map$2charphsVarph_next(self)    ){
        memset(&default_value_105,0,sizeof(struct sVar*));
        it2_106=map$2charphsVarph_at(self,it_104,default_value_105);
        hash_107=string_get_hash_key(it_104)%size_99;
        n_108=hash_107;
        while((_Bool)1) {
            if(            item_existance_102[n_108]) {
                n_108++;
                if(                n_108>=size_99) {
                    n_108=0;
                }
                else if(                n_108==hash_107) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_102[n_108]=(_Bool)1;
                keys_100[n_108]=it_104;
                items_101[n_108]=map$2charphsVarph_at(self,it_104,default_value_109);
                len_103++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_100;
    self->items=items_101;
    self->item_existance=item_existance_102;
    self->size=size_99;
    self->len=len_103;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_112;
struct list_item$1charp* it_113;
struct list$1charp* __result89__;
    it2_112=0;
    it_113=self->head;
    while(it_113!=((void*)0)) {
        if(        charp_equals(it_113->item,item)) {
            list$1charp_delete(self,it2_112,it2_112+1);
            break;
        }
        it2_112++;
        it_113=it_113->next;
    }
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_114;
struct list$1charp* __result86__;
struct list_item$1charp* it_117;
int i_118;
struct list_item$1charp* prev_it_119;
struct list_item$1charp* it_120;
int i_121;
struct list_item$1charp* prev_it_122;
struct list_item$1charp* it_123;
struct list_item$1charp* head_prev_it_124;
struct list_item$1charp* tail_it_125;
int i_126;
struct list_item$1charp* prev_it_127;
struct list$1charp* __result88__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_114=tail;
        tail=head;
        head=tmp_114;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result86__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_117=self->head;
        i_118=0;
        while(it_117!=((void*)0)) {
            if(            i_118<tail) {
                prev_it_119=it_117;
                it_117=it_117->next;
                i_118++;
                /*i*/come_call_finalizer3(prev_it_119,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_118==tail) {
                self->head=it_117;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_117=it_117->next;
                i_118++;
            }
        }
    }
    else if(    tail==self->len) {
        it_120=self->head;
        i_121=0;
        while(it_120!=((void*)0)) {
            if(            i_121==head) {
                self->tail=it_120->prev;
                self->tail->next=((void*)0);
            }
            if(            i_121>=head) {
                prev_it_122=it_120;
                it_120=it_120->next;
                i_121++;
                /*i*/come_call_finalizer3(prev_it_122,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_120=it_120->next;
                i_121++;
            }
        }
    }
    else {
        it_123=self->head;
        head_prev_it_124=((void*)0);
        tail_it_125=((void*)0);
        i_126=0;
        while(it_123!=((void*)0)) {
            if(            i_126==head) {
                head_prev_it_124=it_123->prev;
            }
            if(            i_126==tail) {
                tail_it_125=it_123;
            }
            if(            i_126>=head&&i_126<tail) {
                prev_it_127=it_123;
                it_123=it_123->next;
                i_126++;
                /*i*/come_call_finalizer3(prev_it_127,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_123=it_123->next;
                i_126++;
            }
        }
        if(        head_prev_it_124!=((void*)0)) {
            head_prev_it_124->next=tail_it_125;
        }
        if(        tail_it_125!=((void*)0)) {
            tail_it_125->prev=head_prev_it_124;
        }
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_115;
struct list_item$1charp* prev_it_116;
struct list$1charp* __result87__;
    it_115=self->head;
    while(it_115!=((void*)0)) {
        prev_it_116=it_115;
        it_115=it_115->next;
        /*i*/come_call_finalizer3(prev_it_116,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_129;
char* __result90__;
char* __result91__;
char* result_130;
char* __result92__;
result_129 = (void*)0;
result_130 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_129,0,sizeof(char*));
        __result90__ = gComeFunResultObject = __result_obj__ = result_129;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    self->it=self->head;
    if(    self->it) {
        __result91__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    memset(&result_130,0,sizeof(char*));
    __result92__ = gComeFunResultObject = __result_obj__ = result_130;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_132;
char* __result93__;
char* __result94__;
char* result_133;
char* __result95__;
result_132 = (void*)0;
result_133 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_132,0,sizeof(char*));
        __result93__ = gComeFunResultObject = __result_obj__ = result_132;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result94__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    memset(&result_133,0,sizeof(char*));
    __result95__ = gComeFunResultObject = __result_obj__ = result_133;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_134;
int i_135;
    for(    i_134=0;    i_134<self->size;    i_134++    ){
        if(        self->item_existance[i_134]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_134],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_135=0;    i_135<self->size;    i_135++    ){
        if(        self->item_existance[i_135]) {
            if(            1) {
                /* U13 */self->keys[i_135] = come_decrement_ref_count2(self->keys[i_135], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj51;
struct sVarTable* __dec_obj52;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj51=self->mNodes;
            come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj52=self->mVarTable;
            come_call_finalizer3(__dec_obj52,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result100__;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1sBlockph* result_138;
struct list_item$1sBlockph* it_139;
void* __right_value149 = (void*)0;
struct list$1sBlockph* __result103__;
    if(    self==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_138=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 135, "list$1sBlockph"))));
    it_139=self->head;
    while(it_139!=((void*)0)) {
        list$1sBlockph_add(result_138,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_139->item)));
        it_139=it_139->next;
    }
    __result103__ = gComeFunResultObject = __result_obj__ = result_138;
    /*i*/come_call_finalizer3(result_138,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_136;
struct list_item$1sBlockph* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*i*/come_call_finalizer3(prev_it_137,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj55;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj55=self->item;
            come_call_finalizer3(__dec_obj55,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
struct list_item$1sBlockph* litem_140;
struct sBlock* __dec_obj56;
void* __right_value147 = (void*)0;
struct list_item$1sBlockph* litem_141;
struct sBlock* __dec_obj57;
void* __right_value148 = (void*)0;
struct list_item$1sBlockph* litem_142;
struct sBlock* __dec_obj58;
struct list$1sBlockph* __result102__;
    if(    self->len==0) {
        litem_140=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value146=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sBlockph"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        __dec_obj56=litem_140->item;
        litem_140->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value147=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sBlockph"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        __dec_obj57=litem_141->item;
        litem_141->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value148=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sBlockph"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        __dec_obj58=litem_142->item;
        litem_142->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_143;
struct list_item$1sBlockph* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*i*/come_call_finalizer3(prev_it_144,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_147;
int i_148;
struct sBlock* __result106__;
struct sBlock* default_value_149;
struct sBlock* __result107__;
default_value_149 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_147=self->head;
    i_148=0;
    while(it_147!=((void*)0)) {
        if(        position==i_148) {
            __result106__ = gComeFunResultObject = __result_obj__ = it_147->item;
            gComeFunResultObject = (void*)0;
            return __result106__;
        }
        it_147=it_147->next;
        i_148++;
    }
    memset(&default_value_149,0,sizeof(struct sBlock*));
    __result107__ = gComeFunResultObject = __result_obj__ = default_value_149;
    /*i*/come_call_finalizer3(default_value_149,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result108__;
void* __right_value156 = (void*)0;
struct sType* result_156;
void* __right_value159 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value160 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value161 = (void*)0;
struct tuple1$1sTypeph* __dec_obj73;
void* __right_value162 = (void*)0;
char* __dec_obj74;
void* __right_value169 = (void*)0;
struct list$1sTypeph* __dec_obj78;
void* __right_value170 = (void*)0;
struct list$1sNodeph* __dec_obj79;
void* __right_value171 = (void*)0;
struct list$1sTypeph* __dec_obj80;
void* __right_value178 = (void*)0;
struct list$1charph* __dec_obj84;
void* __right_value179 = (void*)0;
struct tuple1$1sTypeph* __dec_obj85;
void* __right_value180 = (void*)0;
struct sNode* __dec_obj86;
void* __right_value181 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value182 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value183 = (void*)0;
char* __dec_obj89;
void* __right_value184 = (void*)0;
char* __dec_obj90;
struct sType* __result119__;
    if(    self==(void*)0) {
        __result108__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_156=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_156->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj71=result_156->mNoSolvedGenericsType;
        result_156->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj72=result_156->mOriginalLoadVarType;
        result_156->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj73=result_156->mNoExceptionType;
        result_156->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj73,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj74=result_156->mGenericsName;
        result_156->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_156->mGenericsTypes;
        result_156->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj79=result_156->mArrayNum;
        result_156->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_156->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj80=result_156->mParamTypes;
        result_156->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj80,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj84=result_156->mParamNames;
        result_156->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj85=result_156->mResultType;
        result_156->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj85,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_156->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj86=result_156->mAlignas;
        result_156->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj87=result_156->mChannelType;
        result_156->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_156->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_156->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_156->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_156->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_156->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_156->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_156->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_156->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_156->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_156->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_156->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_156->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_156->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_156->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_156->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_156->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_156->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_156->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_156->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_156->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_156->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_156->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_156->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_156->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_156->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_156->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_156->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_156->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj88=result_156->mSizeNum;
        result_156->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_156->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_156->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_156->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj89=result_156->mOriginalTypeName;
        result_156->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_156->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_156->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_156->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_156->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_156->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_156->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_156->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_156->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_156->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj90=result_156->mAsmName;
        result_156->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_156->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_156->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_156->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_156->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_156->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_156->mOriginIsArray=self->mOriginIsArray;
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_156;
    /*i*/come_call_finalizer3(result_156,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result109__;
void* __right_value157 = (void*)0;
struct tuple1$1sTypeph* result_157;
void* __right_value158 = (void*)0;
struct sType* __dec_obj69;
struct tuple1$1sTypeph* __result110__;
    if(    self==(void*)0) {
        __result109__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    result_157=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj69=result_157->v1;
        result_157->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_157;
    /*i*/come_call_finalizer3(result_157,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj70;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj70=self->v1;
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result111__;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct list$1sTypeph* result_158;
struct list_item$1sTypeph* it_159;
void* __right_value168 = (void*)0;
struct list$1sTypeph* __result114__;
    if(    self==((void*)0)) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    result_158=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sTypeph"))));
    it_159=self->head;
    while(it_159!=((void*)0)) {
        list$1sTypeph_add(result_158,(struct sType*)come_increment_ref_count(sType_clone(it_159->item)));
        it_159=it_159->next;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = result_158;
    /*i*/come_call_finalizer3(result_158,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj75;
void* __right_value166 = (void*)0;
struct list_item$1sTypeph* litem_161;
struct sType* __dec_obj76;
void* __right_value167 = (void*)0;
struct list_item$1sTypeph* litem_162;
struct sType* __dec_obj77;
struct list$1sTypeph* __result113__;
    if(    self->len==0) {
        litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value165=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sTypeph"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        __dec_obj75=litem_160->item;
        litem_160->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value166=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sTypeph"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        __dec_obj76=litem_161->item;
        litem_161->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value167=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sTypeph"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        __dec_obj77=litem_162->item;
        litem_162->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result115__;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1charph* result_163;
struct list_item$1charph* it_164;
void* __right_value177 = (void*)0;
struct list$1charph* __result118__;
    if(    self==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    result_163=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 135, "list$1charph"))));
    it_164=self->head;
    while(it_164!=((void*)0)) {
        list$1charph_add(result_163,(char*)come_increment_ref_count(string_clone(it_164->item)));
        it_164=it_164->next;
    }
    __result118__ = gComeFunResultObject = __result_obj__ = result_163;
    /*i*/come_call_finalizer3(result_163,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
struct list_item$1charph* litem_165;
char* __dec_obj81;
void* __right_value175 = (void*)0;
struct list_item$1charph* litem_166;
char* __dec_obj82;
void* __right_value176 = (void*)0;
struct list_item$1charph* litem_167;
char* __dec_obj83;
struct list$1charph* __result117__;
    if(    self->len==0) {
        litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value174=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1charph"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        __dec_obj81=litem_165->item;
        litem_165->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value175=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1charph"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        __dec_obj82=litem_166->item;
        litem_166->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value176=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1charph"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        __dec_obj83=litem_167->item;
        litem_167->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
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

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_183;
int i_184;
struct sNode* __result121__;
struct sNode* default_value_185;
struct sNode* __result122__;
default_value_185 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_183=self->head;
    i_184=0;
    while(it_183!=((void*)0)) {
        if(        position==i_184) {
            __result121__ = gComeFunResultObject = __result_obj__ = it_183->item;
            gComeFunResultObject = (void*)0;
            return __result121__;
        }
        it_183=it_183->next;
        i_184++;
    }
    memset(&default_value_185,0,sizeof(struct sNode*));
    __result122__ = gComeFunResultObject = __result_obj__ = default_value_185;
    if(default_value_185) { default_value_185 = come_decrement_ref_count2(default_value_185, ((struct sNode*)default_value_185)->finalize, ((struct sNode*)default_value_185)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
struct list_item$1CVALUEph* litem_196;
struct CVALUE* __dec_obj96;
void* __right_value197 = (void*)0;
struct list_item$1CVALUEph* litem_197;
struct CVALUE* __dec_obj97;
void* __right_value198 = (void*)0;
struct list_item$1CVALUEph* litem_198;
struct CVALUE* __dec_obj98;
struct list$1CVALUEph* __result125__;
    if(    self->len==0) {
        litem_196=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value196=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1CVALUEph"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        __dec_obj96=litem_196->item;
        litem_196->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1) {
        litem_197=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value197=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1CVALUEph"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        __dec_obj97=litem_197->item;
        litem_197->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value198=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1CVALUEph"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        __dec_obj98=litem_198->item;
        litem_198->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj100;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj101;
struct sMatchNode* __result127__;
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value199,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    /* U1 */ if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj101=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    /* U1 */ if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); };
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
char* __result128__;
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value202=__builtin_string("sMatch")));
    /* U11 */__right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_199;
struct sNode* match_node_200;
_Bool __result129__;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_201;
_Bool __result130__;
struct sVar* var__202;
int __exception_result_var_b2;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1sVarph* __dec_obj106;
void* __right_value214 = (void*)0;
_Bool __result135__;
    it_node_199=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_200=(struct sNode*)come_increment_ref_count(self->match_node);
    if(    !node_compile(it_node_199,info)) {
        __result129__ = (_Bool)0;
        if(it_node_199) { it_node_199 = come_decrement_ref_count2(it_node_199, ((struct sNode*)it_node_199)->finalize, ((struct sNode*)it_node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_200) { match_node_200 = come_decrement_ref_count2(match_node_200, ((struct sNode*)match_node_200)->finalize, ((struct sNode*)match_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result129__;
    }
    come_value_201=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_201->c_value);
    dec_stack_ptr(1,info);
    if(    !node_compile(match_node_200,info)) {
        __result130__ = (_Bool)0;
        if(it_node_199) { it_node_199 = come_decrement_ref_count2(it_node_199, ((struct sNode*)it_node_199)->finalize, ((struct sNode*)it_node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_200) { match_node_200 = come_decrement_ref_count2(match_node_200, ((struct sNode*)match_node_200)->finalize, ((struct sNode*)match_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result130__;
    }
    if(    info->if_result_var_name) {
        var__202=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 268, 3),__exception_result_var_b2=assert_v2(var__202!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj106=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 271, "list$1sVarph"))));
            come_call_finalizer3(__dec_obj106,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__202)));
    }
    __result135__ = (_Bool)1;
    if(it_node_199) { it_node_199 = come_decrement_ref_count2(it_node_199, ((struct sNode*)it_node_199)->finalize, ((struct sNode*)it_node_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_200) { match_node_200 = come_decrement_ref_count2(match_node_200, ((struct sNode*)match_node_200)->finalize, ((struct sNode*)match_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
}

static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct list$1sVarph* __result131__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_203;
struct list_item$1sVarph* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        /*i*/come_call_finalizer3(prev_it_204,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj105;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj105=self->item;
            come_call_finalizer3(__dec_obj105,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_205;
struct list_item$1sVarph* prev_it_206;
    it_205=self->head;
    while(it_205!=((void*)0)) {
        prev_it_206=it_205;
        it_205=it_205->next;
        /*i*/come_call_finalizer3(prev_it_206,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
struct list_item$1sVarph* litem_207;
struct sVar* __dec_obj107;
void* __right_value207 = (void*)0;
struct list_item$1sVarph* litem_208;
struct sVar* __dec_obj108;
void* __right_value208 = (void*)0;
struct list_item$1sVarph* litem_209;
struct sVar* __dec_obj109;
struct list$1sVarph* __result132__;
    if(    self->len==0) {
        litem_207=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value206=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sVarph"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        __dec_obj107=litem_207->item;
        litem_207->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1) {
        litem_208=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value207=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sVarph"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        __dec_obj108=litem_208->item;
        litem_208->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value208=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sVarph"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        __dec_obj109=litem_209->item;
        litem_209->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result133__;
void* __right_value209 = (void*)0;
struct sVar* result_210;
void* __right_value210 = (void*)0;
char* __dec_obj110;
void* __right_value211 = (void*)0;
char* __dec_obj111;
void* __right_value212 = (void*)0;
struct sType* __dec_obj112;
void* __right_value213 = (void*)0;
char* __dec_obj113;
struct sVar* __result134__;
    if(    self==(void*)0) {
        __result133__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    result_210=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj110=result_210->mName;
        result_210->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj111=result_210->mCValueName;
        result_210->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj112=result_210->mType;
        result_210->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_210->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_210->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_210->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_210->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_210->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj113=result_210->mFunName;
        result_210->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result134__ = gComeFunResultObject = __result_obj__ = result_210;
    /*i*/come_call_finalizer3(result_210,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value217 = (void*)0;
struct sNode* __dec_obj115;
struct sIfMethodNode* __result136__;
    ((struct sNodeBase*)(__right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value215,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj114=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    /* U1 */ if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj115=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    /* U1 */ if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result136__;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
void* __right_value218 = (void*)0;
char* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("sMatch")));
    /* U11 */__right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_211;
struct sNode* match_node_212;
_Bool __result138__;
void* __right_value219 = (void*)0;
struct CVALUE* come_value_213;
_Bool __result139__;
struct sVar* var__214;
int __exception_result_var_b3;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct list$1sVarph* __dec_obj119;
void* __right_value222 = (void*)0;
_Bool __result140__;
    it_node_211=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_212=(struct sNode*)come_increment_ref_count(self->match_node);
    if(    !node_compile(it_node_211,info)) {
        __result138__ = (_Bool)0;
        if(it_node_211) { it_node_211 = come_decrement_ref_count2(it_node_211, ((struct sNode*)it_node_211)->finalize, ((struct sNode*)it_node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_212) { match_node_212 = come_decrement_ref_count2(match_node_212, ((struct sNode*)match_node_212)->finalize, ((struct sNode*)match_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result138__;
    }
    come_value_213=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_213->c_value);
    dec_stack_ptr(1,info);
    if(    !node_compile(match_node_212,info)) {
        __result139__ = (_Bool)0;
        if(it_node_211) { it_node_211 = come_decrement_ref_count2(it_node_211, ((struct sNode*)it_node_211)->finalize, ((struct sNode*)it_node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_212) { match_node_212 = come_decrement_ref_count2(match_node_212, ((struct sNode*)match_node_212)->finalize, ((struct sNode*)match_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    if(    info->if_result_var_name) {
        var__214=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 320, 4),__exception_result_var_b3=assert_v2(var__214!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj119=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 323, "list$1sVarph"))));
            come_call_finalizer3(__dec_obj119,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__214)));
    }
    __result140__ = (_Bool)1;
    if(it_node_211) { it_node_211 = come_decrement_ref_count2(it_node_211, ((struct sNode*)it_node_211)->finalize, ((struct sNode*)it_node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_212) { match_node_212 = come_decrement_ref_count2(match_node_212, ((struct sNode*)match_node_212)->finalize, ((struct sNode*)match_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value225 = (void*)0;
struct sBlock* __dec_obj121;
struct sOrStatmentNode* __result141__;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj121=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj121,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result141__;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string("sOrStatmentNode")));
    /* U11 */__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_215;
void* __right_value227 = (void*)0;
struct CVALUE* conditional_value_216;
struct sBlock* if_block_217;
int num_or_conditional_stack_219;
_Bool __result143__;
    expression_node_215=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(    !node_compile(expression_node_215,info)) {
        return (_Bool)0;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_217=self->mIfBlock;
    static int num_or_conditional_218=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_218);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_218,conditional_value_216->c_value);
    num_or_conditional_stack_219=num_or_conditional_218;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_219);
    transpile_block(if_block_217,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result143__ = (_Bool)1;
    /*i*/come_call_finalizer3(conditional_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result143__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value230 = (void*)0;
struct sBlock* __dec_obj126;
struct sAndStatmentNode* __result144__;
    ((struct sNodeBase*)(__right_value228=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value228,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj126=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj126,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result144__;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=__builtin_string("sAndStatmentNode")));
    /* U11 */__right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_220;
void* __right_value232 = (void*)0;
struct CVALUE* conditional_value_221;
struct sBlock* if_block_222;
int num_and_conditional_stack_224;
_Bool __result146__;
    expression_node_220=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    if(    !node_compile(expression_node_220,info)) {
        return (_Bool)0;
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_221=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_222=self->mIfBlock;
    static int num_and_conditional_223=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_223);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_223,conditional_value_221->c_value);
    num_and_conditional_stack_224=num_and_conditional_223;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_224);
    transpile_block(if_block_222,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result146__ = (_Bool)1;
    /*i*/come_call_finalizer3(conditional_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct list$1sNodeph* __dec_obj130;
struct sMultipleNode* __result147__;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value233,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj130=self->multiple_node;
    self->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(multiple_node));
    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result147__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
char* __result148__;
    __result148__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string("sMultipleNode")));
    /* U11 */__right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
struct list$1sNodeph* multiple_node_225;
struct CVALUE* come_value_226;
struct list$1sNodeph* o2_saved_227;
struct sNode* it_230;
_Bool __result155__;
void* __right_value236 = (void*)0;
struct CVALUE* __dec_obj133;
_Bool __result156__;
    multiple_node_225=(struct list$1sNodeph*)come_increment_ref_count(self->multiple_node);
    come_value_226=((void*)0);
    for(    o2_saved_227=(struct list$1sNodeph*)come_increment_ref_count((multiple_node_225)),it_230=list$1sNodeph_begin((o2_saved_227));    !list$1sNodeph_end((o2_saved_227));    it_230=list$1sNodeph_next((o2_saved_227))    ){
        if(        !node_compile(it_230,info)) {
            __result155__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_227,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(multiple_node_225,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result155__;
        }
        add_last_code_to_source(info);
        if(        list$1CVALUEph_length(info->stack)>0) {
            __dec_obj133=come_value_226;
            come_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
    }
    /*i*/come_call_finalizer3(o2_saved_227,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_226) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_226));
    }
    __result156__ = (_Bool)1;
    /*i*/come_call_finalizer3(multiple_node_225,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_228;
struct sNode* __result149__;
struct sNode* __result150__;
struct sNode* result_229;
struct sNode* __result151__;
result_228 = (void*)0;
result_229 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_228,0,sizeof(struct sNode*));
        __result149__ = gComeFunResultObject = __result_obj__ = result_228;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    self->it=self->head;
    if(    self->it) {
        __result150__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    memset(&result_229,0,sizeof(struct sNode*));
    __result151__ = gComeFunResultObject = __result_obj__ = result_229;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_231;
struct sNode* __result152__;
struct sNode* __result153__;
struct sNode* result_232;
struct sNode* __result154__;
result_231 = (void*)0;
result_232 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_231,0,sizeof(struct sNode*));
        __result152__ = gComeFunResultObject = __result_obj__ = result_231;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result153__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    memset(&result_232,0,sizeof(struct sNode*));
    __result154__ = gComeFunResultObject = __result_obj__ = result_232;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sFreeITNode* sFreeITNode_initialize(struct sFreeITNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
struct sFreeITNode* __result157__;
    ((struct sNodeBase*)(__right_value237=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value237,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFreeITNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

_Bool sFreeITNode_terminated(struct sFreeITNode* self){
    return (_Bool)0;
}

char* sFreeITNode_kind(struct sFreeITNode* self){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
char* __result158__;
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string("sFreeITNode")));
    /* U11 */__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool sFreeITNode_compile(struct sFreeITNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
struct sSaveRightValueObjects* __result159__;
    ((struct sNodeBase*)(__right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value240=__builtin_string("sSaveRightValueObjects")));
    /* U11 */__right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj136;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj141;
    __dec_obj136=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj136,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj141=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "08if.c", 546, "list$1sRightValueObjectph"))));
    come_call_finalizer3(__dec_obj141,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_233;
struct list_item$1sRightValueObjectph* prev_it_234;
    it_233=self->head;
    while(it_233!=((void*)0)) {
        prev_it_234=it_233;
        it_233=it_233->next;
        /*i*/come_call_finalizer3(prev_it_234,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj138=self->mType;
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj139=self->mVarName;
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj140=self->mFunName;
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result161__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_235;
struct list_item$1sRightValueObjectph* prev_it_236;
    it_235=self->head;
    while(it_235!=((void*)0)) {
        prev_it_236=it_235;
        it_235=it_235->next;
        /*i*/come_call_finalizer3(prev_it_236,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
struct sRestoreRightValueObjects* __result162__;
    ((struct sNodeBase*)(__right_value243=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value243,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
char* __result163__;
    __result163__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string("sRestoreRightValueObjects")));
    /* U11 */__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj143;
struct list$1sRightValueObjectph* __dec_obj144;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj143=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj143,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj144=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj144,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* sname_237;
int sline_238;
int var_num_stack_240;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
char* __list_values1___241[2];
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1charph* multiple_assign_246;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sNode* get_return_value_247;
void* __right_value256 = (void*)0;
struct sBlock* if_block_248;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_249;
int elif_num_250;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sBlockph* elif_blocks_251;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sBlock* else_block_252;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sNode* expression_node2_256;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value280 = (void*)0;
struct sNode* if_node_257;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value2;
struct sFreeITNode* _inf_obj_value2;
void* __right_value285 = (void*)0;
struct sNode* free_it_node_259;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* _inf_value3;
struct sSaveRightValueObjects* _inf_obj_value3;
void* __right_value290 = (void*)0;
struct sNode* save_right_value_objects_261;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* _inf_value4;
struct sRestoreRightValueObjects* _inf_obj_value4;
void* __right_value295 = (void*)0;
struct sNode* restore_right_value_objects_263;
struct sNode* __list_values2___266[2];
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sNodeph* multiple_node_265;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* _inf_value5;
struct sMultipleNode* _inf_obj_value5;
void* __right_value303 = (void*)0;
struct sNode* __result178__;
    sname_237=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_238=info->sline;
    parse_sharp_v5(info);
    static int var_num_239=0;
    var_num_239++;
    var_num_stack_240=var_num_239;
    multiple_assign_246=(struct list$1charph*)come_increment_ref_count((__list_values1___241[0]=come_increment_ref_count(((char*)(__right_value247=xsprintf("come_exception_var_\%s",((char*)(__right_value246=int_to_string(var_num_stack_240))))))),
__list_values1___241[1]=come_increment_ref_count(((char*)(__right_value248=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 591, "struct list$1charph")),2,__list_values1___241)));
    /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_247=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_246),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_248=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_249=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 598, "list$1sNodeph"))));
    elif_num_250=0;
    elif_blocks_251=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 601, "list$1sBlockph"))));
    else_block_252=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 603, "sBlock")),info));
    else_block_252->mOmitSemicolon=(_Bool)1;
    list$1sNodeph_push_back(else_block_252->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value267=xsprintf("come_exception_var_\%s",((char*)(__right_value266=int_to_string(var_num_stack_240)))))),info)));
    /* U11 */__right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    expression_node2_256=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value269=xsprintf("Err"))),info));
    /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 609, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(__right_value272=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 609, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node2_256),if_block_248,elif_expression_nodes_249,elif_blocks_251,elif_num_250,else_block_252,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_257=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value272,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 610, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFreeITNode*)(__right_value282=sFreeITNode_initialize((struct sFreeITNode*)come_increment_ref_count((struct sFreeITNode*)come_calloc(1, sizeof(struct sFreeITNode)*(1), "08if.c", 610, "sFreeITNode")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFreeITNode_finalize;
    _inf_value2->clone=(void*)sFreeITNode_clone;
    _inf_value2->compile=(void*)sFreeITNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFreeITNode_terminated;
    _inf_value2->kind=(void*)sFreeITNode_kind;
    free_it_node_259=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value282,sFreeITNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 612, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value287=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 612, "sSaveRightValueObjects")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value3->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value3->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value3->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_261=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value287,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 613, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value292=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 613, "sRestoreRightValueObjects")),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value4->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value4->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value4->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_263=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value292,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_265=(struct list$1sNodeph*)come_increment_ref_count((__list_values2___266[0]=come_increment_ref_count(get_return_value_247),
__list_values2___266[1]=come_increment_ref_count(if_node_257),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 615, "struct list$1sNodeph")),2,__list_values2___266)));
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 617, "struct sNode");
    _inf_obj_value5=come_increment_ref_count(((struct sMultipleNode*)(__right_value299=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 617, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_265),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMultipleNode_finalize;
    _inf_value5->clone=(void*)sMultipleNode_clone;
    _inf_value5->compile=(void*)sMultipleNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMultipleNode_terminated;
    _inf_value5->kind=(void*)sMultipleNode_kind;
    __result178__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value303=_inf_value5));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_237 = come_decrement_ref_count2(sname_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_246,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_247) { get_return_value_247 = come_decrement_ref_count2(get_return_value_247, ((struct sNode*)get_return_value_247)->finalize, ((struct sNode*)get_return_value_247)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_248,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_251,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_252,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_256) { expression_node2_256 = come_decrement_ref_count2(expression_node2_256, ((struct sNode*)expression_node2_256)->finalize, ((struct sNode*)expression_node2_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_257) { if_node_257 = come_decrement_ref_count2(if_node_257, ((struct sNode*)if_node_257)->finalize, ((struct sNode*)if_node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(free_it_node_259) { free_it_node_259 = come_decrement_ref_count2(free_it_node_259, ((struct sNode*)free_it_node_259)->finalize, ((struct sNode*)free_it_node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_261) { save_right_value_objects_261 = come_decrement_ref_count2(save_right_value_objects_261, ((struct sNode*)save_right_value_objects_261)->finalize, ((struct sNode*)save_right_value_objects_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_263) { restore_right_value_objects_263 = come_decrement_ref_count2(restore_right_value_objects_263, ((struct sNode*)restore_right_value_objects_263)->finalize, ((struct sNode*)restore_right_value_objects_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_265,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value299,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value303) { __right_value303 = come_decrement_ref_count2(__right_value303, ((struct sNode*)__right_value303)->finalize, ((struct sNode*)__right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_242;
struct list$1charph* __result165__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        list$1charph_push_back(self,values[i_242]);
    }
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list_item$1charph* litem_243;
char* __dec_obj145;
void* __right_value250 = (void*)0;
struct list_item$1charph* litem_244;
char* __dec_obj146;
void* __right_value251 = (void*)0;
struct list_item$1charph* litem_245;
char* __dec_obj147;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_243=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value249=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charph"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        __dec_obj145=litem_243->item;
        litem_243->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1) {
        litem_244=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value250=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charph"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        __dec_obj146=litem_244->item;
        litem_244->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value251=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charph"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        __dec_obj147=litem_245->item;
        litem_245->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1sNodeph* litem_253;
struct sNode* __dec_obj148;
void* __right_value264 = (void*)0;
struct list_item$1sNodeph* litem_254;
struct sNode* __dec_obj149;
void* __right_value265 = (void*)0;
struct list_item$1sNodeph* litem_255;
struct sNode* __dec_obj150;
struct list$1sNodeph* __result166__;
    if(    self->len==0) {
        litem_253=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value263=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sNodeph"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj148=litem_253->item;
        litem_253->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value264=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sNodeph"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj149=litem_254->item;
        litem_254->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value265=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sNodeph"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj150=litem_255->item;
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_267;
struct list$1sNodeph* __result175__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_267=0;    i_267<num_value;    i_267++    ){
        list$1sNodeph_push_back(self,values[i_267]);
    }
    __result175__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* sname_269;
int sline_270;
int var_num_stack_272;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
char* __list_values3___273[2];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1charph* multiple_assign_274;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sNode* get_return_value_275;
struct buffer* source_276;
char* p_277;
char* head_278;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct buffer* buf_279;
struct buffer* __dec_obj173;
void* __right_value314 = (void*)0;
struct sBlock* if_block_280;
struct buffer* __dec_obj174;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_281;
int elif_num_282;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1sBlockph* elif_blocks_283;
struct sBlock* else_block_284;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sNode* expression_node2_285;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sNode* _inf_value6;
struct sIfNode* _inf_obj_value6;
void* __right_value330 = (void*)0;
struct sNode* if_node_286;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* load_var_288;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value7;
struct sFreeITNode* _inf_obj_value7;
void* __right_value338 = (void*)0;
struct sNode* free_it_node_289;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* _inf_value8;
struct sSaveRightValueObjects* _inf_obj_value8;
void* __right_value343 = (void*)0;
struct sNode* save_right_value_objects_291;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* _inf_value9;
struct sRestoreRightValueObjects* _inf_obj_value9;
void* __right_value348 = (void*)0;
struct sNode* restore_right_value_objects_293;
struct sNode* __list_values4___296[6];
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1sNodeph* multiple_node_295;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* _inf_value10;
struct sMultipleNode* _inf_obj_value10;
void* __right_value356 = (void*)0;
struct sNode* __result189__;
    sname_269=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_270=info->sline;
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"can't be called exception_throw in conditional expression");
        exit(1);
    }
    parse_sharp_v5(info);
    static int var_num_271=0;
    var_num_271++;
    var_num_stack_272=var_num_271;
    multiple_assign_274=(struct list$1charph*)come_increment_ref_count((__list_values3___273[0]=come_increment_ref_count(((char*)(__right_value306=xsprintf("come_exception_var_b\%s",((char*)(__right_value305=int_to_string(var_num_stack_272))))))),
__list_values3___273[1]=come_increment_ref_count(((char*)(__right_value307=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 637, "struct list$1charph")),2,__list_values3___273)));
    /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_275=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_274),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_276=(struct buffer*)come_increment_ref_count(info->source);
    p_277=info->p;
    head_278=info->head;
    buf_279=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 646, "buffer"))));
    buffer_append_format(buf_279,"{ return none(Err); }");
    __dec_obj173=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_279);
    come_call_finalizer3(__dec_obj173,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_270;
    if_block_280=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj174=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_276);
    come_call_finalizer3(__dec_obj174,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_277;
    info->head=head_278;
    info->sline=sline_270;
    elif_expression_nodes_281=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 662, "list$1sNodeph"))));
    elif_num_282=0;
    elif_blocks_283=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 665, "list$1sBlockph"))));
    else_block_284=((void*)0);
    expression_node2_285=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value319=xsprintf("Err"))),info));
    /* U11 */__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 671, "struct sNode");
    _inf_obj_value6=come_increment_ref_count(((struct sIfNode*)(__right_value322=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 671, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node2_285),if_block_280,elif_expression_nodes_281,elif_blocks_283,elif_num_282,else_block_284,(_Bool)0,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    if_node_286=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*g*/come_call_finalizer3(__right_value322,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    load_var_288=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value332=xsprintf("come_exception_var_b\%s",((char*)(__right_value331=int_to_string(var_num_stack_272)))))),info));
    /* U11 */__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 673, "struct sNode");
    _inf_obj_value7=come_increment_ref_count(((struct sFreeITNode*)(__right_value335=sFreeITNode_initialize((struct sFreeITNode*)come_increment_ref_count((struct sFreeITNode*)come_calloc(1, sizeof(struct sFreeITNode)*(1), "08if.c", 673, "sFreeITNode")),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sFreeITNode_finalize;
    _inf_value7->clone=(void*)sFreeITNode_clone;
    _inf_value7->compile=(void*)sFreeITNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sFreeITNode_terminated;
    _inf_value7->kind=(void*)sFreeITNode_kind;
    free_it_node_289=(struct sNode*)come_increment_ref_count(_inf_value7);
    /*g*/come_call_finalizer3(__right_value335,sFreeITNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 675, "struct sNode");
    _inf_obj_value8=come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value340=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 675, "sSaveRightValueObjects")),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value8->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value8->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value8->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_291=(struct sNode*)come_increment_ref_count(_inf_value8);
    /*g*/come_call_finalizer3(__right_value340,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 676, "struct sNode");
    _inf_obj_value9=come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value345=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 676, "sRestoreRightValueObjects")),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value9->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value9->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value9->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_293=(struct sNode*)come_increment_ref_count(_inf_value9);
    /*g*/come_call_finalizer3(__right_value345,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_295=(struct list$1sNodeph*)come_increment_ref_count((__list_values4___296[0]=come_increment_ref_count(save_right_value_objects_291),
__list_values4___296[1]=come_increment_ref_count(get_return_value_275),
__list_values4___296[2]=come_increment_ref_count(if_node_286),
__list_values4___296[3]=come_increment_ref_count(restore_right_value_objects_293),
__list_values4___296[4]=come_increment_ref_count(free_it_node_289),
__list_values4___296[5]=come_increment_ref_count(load_var_288),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 679, "struct list$1sNodeph")),6,__list_values4___296)));
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 681, "struct sNode");
    _inf_obj_value10=come_increment_ref_count(((struct sMultipleNode*)(__right_value352=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 681, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_295),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sMultipleNode_finalize;
    _inf_value10->clone=(void*)sMultipleNode_clone;
    _inf_value10->compile=(void*)sMultipleNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sMultipleNode_terminated;
    _inf_value10->kind=(void*)sMultipleNode_kind;
    __result189__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value356=_inf_value10));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_269 = come_decrement_ref_count2(sname_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_275) { get_return_value_275 = come_decrement_ref_count2(get_return_value_275, ((struct sNode*)get_return_value_275)->finalize, ((struct sNode*)get_return_value_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(source_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_279,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_280,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_283,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_284,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_285) { expression_node2_285 = come_decrement_ref_count2(expression_node2_285, ((struct sNode*)expression_node2_285)->finalize, ((struct sNode*)expression_node2_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_286) { if_node_286 = come_decrement_ref_count2(if_node_286, ((struct sNode*)if_node_286)->finalize, ((struct sNode*)if_node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_288) { load_var_288 = come_decrement_ref_count2(load_var_288, ((struct sNode*)load_var_288)->finalize, ((struct sNode*)load_var_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(free_it_node_289) { free_it_node_289 = come_decrement_ref_count2(free_it_node_289, ((struct sNode*)free_it_node_289)->finalize, ((struct sNode*)free_it_node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_291) { save_right_value_objects_291 = come_decrement_ref_count2(save_right_value_objects_291, ((struct sNode*)save_right_value_objects_291)->finalize, ((struct sNode*)save_right_value_objects_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_293) { restore_right_value_objects_293 = come_decrement_ref_count2(restore_right_value_objects_293, ((struct sNode*)restore_right_value_objects_293)->finalize, ((struct sNode*)restore_right_value_objects_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_295,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value352,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value356) { __right_value356 = come_decrement_ref_count2(__right_value356, ((struct sNode*)__right_value356)->finalize, ((struct sNode*)__right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* sname_298;
int sline_299;
int var_num_stack_301;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
char* __list_values5___302[2];
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1charph* multiple_assign_303;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* get_return_value_304;
struct buffer* source_305;
char* p_306;
char* head_307;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct buffer* buf_308;
struct buffer* __dec_obj197;
_Bool no_comma_309;
void* __right_value367 = (void*)0;
struct sNode* exp_310;
struct buffer* __dec_obj198;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sNode* expression_node2_311;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* cond_312;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* load_var_313;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* _inf_value11;
struct sFreeITNode* _inf_obj_value11;
void* __right_value379 = (void*)0;
struct sNode* free_it_node_314;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* _inf_value12;
struct sSaveRightValueObjects* _inf_obj_value12;
void* __right_value384 = (void*)0;
struct sNode* save_right_value_objects_316;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* _inf_value13;
struct sRestoreRightValueObjects* _inf_obj_value13;
void* __right_value389 = (void*)0;
struct sNode* restore_right_value_objects_318;
struct sNode* __list_values6___321[6];
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1sNodeph* multiple_node_320;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* _inf_value14;
struct sMultipleNode* _inf_obj_value14;
void* __right_value397 = (void*)0;
struct sNode* __result198__;
    sname_298=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_299=info->sline;
    parse_sharp_v5(info);
    static int var_num_300=0;
    var_num_300++;
    var_num_stack_301=var_num_300;
    multiple_assign_303=(struct list$1charph*)come_increment_ref_count((__list_values5___302[0]=come_increment_ref_count(((char*)(__right_value359=xsprintf("come_exception_var_c\%s",((char*)(__right_value358=int_to_string(var_num_stack_301))))))),
__list_values5___302[1]=come_increment_ref_count(((char*)(__right_value360=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 696, "struct list$1charph")),2,__list_values5___302)));
    /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_304=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_303),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_305=(struct buffer*)come_increment_ref_count(info->source);
    p_306=info->p;
    head_307=info->head;
    buf_308=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 705, "buffer"))));
    buffer_append_str(buf_308,"puts(Err), exit(0)");
    __dec_obj197=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_308);
    come_call_finalizer3(__dec_obj197,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_299;
    no_comma_309=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_310=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_309;
    __dec_obj198=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_305);
    come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_306;
    info->head=head_307;
    info->sline=sline_299;
    expression_node2_311=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value368=xsprintf("Err"))),info));
    /* U11 */__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cond_312=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_311),(struct sNode*)come_increment_ref_count(exp_310),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_313=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value373=xsprintf("come_exception_var_c\%s",((char*)(__right_value372=int_to_string(var_num_stack_301)))))),info));
    /* U11 */__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 728, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sFreeITNode*)(__right_value376=sFreeITNode_initialize((struct sFreeITNode*)come_increment_ref_count((struct sFreeITNode*)come_calloc(1, sizeof(struct sFreeITNode)*(1), "08if.c", 728, "sFreeITNode")),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sFreeITNode_finalize;
    _inf_value11->clone=(void*)sFreeITNode_clone;
    _inf_value11->compile=(void*)sFreeITNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sFreeITNode_terminated;
    _inf_value11->kind=(void*)sFreeITNode_kind;
    free_it_node_314=(struct sNode*)come_increment_ref_count(_inf_value11);
    /*g*/come_call_finalizer3(__right_value376,sFreeITNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 730, "struct sNode");
    _inf_obj_value12=come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value381=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 730, "sSaveRightValueObjects")),info))));
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value12->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value12->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value12->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_316=(struct sNode*)come_increment_ref_count(_inf_value12);
    /*g*/come_call_finalizer3(__right_value381,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 731, "struct sNode");
    _inf_obj_value13=come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value386=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 731, "sRestoreRightValueObjects")),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value13->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value13->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value13->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_318=(struct sNode*)come_increment_ref_count(_inf_value13);
    /*g*/come_call_finalizer3(__right_value386,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_320=(struct list$1sNodeph*)come_increment_ref_count((__list_values6___321[0]=come_increment_ref_count(save_right_value_objects_316),
__list_values6___321[1]=come_increment_ref_count(get_return_value_304),
__list_values6___321[2]=come_increment_ref_count(cond_312),
__list_values6___321[3]=come_increment_ref_count(restore_right_value_objects_318),
__list_values6___321[4]=come_increment_ref_count(free_it_node_314),
__list_values6___321[5]=come_increment_ref_count(load_var_313),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 733, "struct list$1sNodeph")),6,__list_values6___321)));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 735, "struct sNode");
    _inf_obj_value14=come_increment_ref_count(((struct sMultipleNode*)(__right_value393=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 735, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_320),info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sMultipleNode_finalize;
    _inf_value14->clone=(void*)sMultipleNode_clone;
    _inf_value14->compile=(void*)sMultipleNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sMultipleNode_terminated;
    _inf_value14->kind=(void*)sMultipleNode_kind;
    __result198__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value397=_inf_value14));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_298 = come_decrement_ref_count2(sname_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_303,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_304) { get_return_value_304 = come_decrement_ref_count2(get_return_value_304, ((struct sNode*)get_return_value_304)->finalize, ((struct sNode*)get_return_value_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(source_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_308,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_310) { exp_310 = come_decrement_ref_count2(exp_310, ((struct sNode*)exp_310)->finalize, ((struct sNode*)exp_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(expression_node2_311) { expression_node2_311 = come_decrement_ref_count2(expression_node2_311, ((struct sNode*)expression_node2_311)->finalize, ((struct sNode*)expression_node2_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(cond_312) { cond_312 = come_decrement_ref_count2(cond_312, ((struct sNode*)cond_312)->finalize, ((struct sNode*)cond_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_313) { load_var_313 = come_decrement_ref_count2(load_var_313, ((struct sNode*)load_var_313)->finalize, ((struct sNode*)load_var_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(free_it_node_314) { free_it_node_314 = come_decrement_ref_count2(free_it_node_314, ((struct sNode*)free_it_node_314)->finalize, ((struct sNode*)free_it_node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_316) { save_right_value_objects_316 = come_decrement_ref_count2(save_right_value_objects_316, ((struct sNode*)save_right_value_objects_316)->finalize, ((struct sNode*)save_right_value_objects_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_318) { restore_right_value_objects_318 = come_decrement_ref_count2(restore_right_value_objects_318, ((struct sNode*)restore_right_value_objects_318)->finalize, ((struct sNode*)restore_right_value_objects_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_320,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value393,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value397) { __right_value397 = come_decrement_ref_count2(__right_value397, ((struct sNode*)__right_value397)->finalize, ((struct sNode*)__right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static void sFreeITNode_finalize(struct sFreeITNode* self){
char* __dec_obj199;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFreeITNode* sFreeITNode_clone(struct sFreeITNode* self){
void* __result_obj__=(void*)0;
struct sFreeITNode* __result190__;
void* __right_value377 = (void*)0;
struct sFreeITNode* result_315;
void* __right_value378 = (void*)0;
char* __dec_obj200;
struct sFreeITNode* __result191__;
    if(    self==(void*)0) {
        __result190__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    result_315=(struct sFreeITNode*)come_increment_ref_count((struct sFreeITNode*)come_calloc(1, sizeof(struct sFreeITNode)*(1), "sFreeITNode_clone", 3, "sFreeITNode"));
    if(    self!=((void*)0)) {
        result_315->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_315->sname;
        result_315->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result191__ = gComeFunResultObject = __result_obj__ = result_315;
    /*i*/come_call_finalizer3(result_315,sFreeITNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
char* __dec_obj201;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sSaveRightValueObjects* __result192__;
void* __right_value382 = (void*)0;
struct sSaveRightValueObjects* result_317;
void* __right_value383 = (void*)0;
char* __dec_obj202;
struct sSaveRightValueObjects* __result193__;
    if(    self==(void*)0) {
        __result192__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    result_317=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "sSaveRightValueObjects"));
    if(    self!=((void*)0)) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_317->sname;
        result_317->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result193__ = gComeFunResultObject = __result_obj__ = result_317;
    /*i*/come_call_finalizer3(result_317,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
char* __dec_obj203;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sRestoreRightValueObjects* __result194__;
void* __right_value387 = (void*)0;
struct sRestoreRightValueObjects* result_319;
void* __right_value388 = (void*)0;
char* __dec_obj204;
struct sRestoreRightValueObjects* __result195__;
    if(    self==(void*)0) {
        __result194__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    result_319=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "sRestoreRightValueObjects"));
    if(    self!=((void*)0)) {
        result_319->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_319->sname;
        result_319->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result195__ = gComeFunResultObject = __result_obj__ = result_319;
    /*i*/come_call_finalizer3(result_319,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
char* __dec_obj205;
struct list$1sNodeph* __dec_obj206;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj205=self->sname;
            /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        if(        self->multiple_node==gComeFunResultObject) {
            __dec_obj206=self->multiple_node;
            come_call_finalizer3(__dec_obj206,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
struct sMultipleNode* __result196__;
void* __right_value394 = (void*)0;
struct sMultipleNode* result_322;
void* __right_value395 = (void*)0;
char* __dec_obj207;
void* __right_value396 = (void*)0;
struct list$1sNodeph* __dec_obj208;
struct sMultipleNode* __result197__;
    if(    self==(void*)0) {
        __result196__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    result_322=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "sMultipleNode"));
    if(    self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj207=result_322->sname;
        result_322->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj208=result_322->multiple_node;
        result_322->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->multiple_node));
        come_call_finalizer3(__dec_obj208,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result197__ = gComeFunResultObject = __result_obj__ = result_322;
    /*i*/come_call_finalizer3(result_322,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
char* sname_323;
int sline_324;
void* __right_value399 = (void*)0;
struct sNode* expression_node_325;
void* __right_value400 = (void*)0;
struct sBlock* if_block_326;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_327;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1sBlockph* elif_blocks_328;
int elif_num_329;
struct sBlock* else_block_330;
char* saved_p_331;
int saved_sline_332;
void* __right_value405 = (void*)0;
char* buf_333;
void* __right_value406 = (void*)0;
struct sNode* expression_node_334;
void* __right_value407 = (void*)0;
struct sBlock* elif_block_335;
void* __right_value411 = (void*)0;
struct sBlock* __dec_obj212;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value421 = (void*)0;
struct sNode* result_339;
struct sNode* __result202__;
void* __right_value422 = (void*)0;
struct sNode* __result203__;
    if(    charp_operator_equals(buf,"if")) {
        sname_323=(char*)come_increment_ref_count(string_clone(info->sname));
        sline_324=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_325=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_326=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_327=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 756, "list$1sNodeph"))));
        elif_blocks_328=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 758, "list$1sBlockph"))));
        elif_num_329=0;
        else_block_330=((void*)0);
        while(1) {
            saved_p_331=info->p;
            saved_sline_332=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !xisalpha(*info->p)) {
                break;
            }
            parse_sharp_v5(info);
            buf_333=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_333,"else")) {
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_334=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(elif_expression_nodes_327,(struct sNode*)come_increment_ref_count(expression_node_334));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_335=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlockph_push_back(elif_blocks_328,(struct sBlock*)come_increment_ref_count(elif_block_335));
                    elif_num_329++;
                    if(expression_node_334) { expression_node_334 = come_decrement_ref_count2(expression_node_334, ((struct sNode*)expression_node_334)->finalize, ((struct sNode*)expression_node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(elif_block_335,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj212=else_block_330;
                    else_block_330=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj212,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */buf_333 = come_decrement_ref_count2(buf_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                info->p=saved_p_331;
                info->sline=saved_sline_332;
                /* U13 */buf_333 = come_decrement_ref_count2(buf_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */buf_333 = come_decrement_ref_count2(buf_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 818, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sIfNode*)(__right_value413=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 818, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node_325),if_block_326,elif_expression_nodes_327,elif_blocks_328,elif_num_329,else_block_330,(_Bool)0,info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sIfNode_finalize;
        _inf_value15->clone=(void*)sIfNode_clone;
        _inf_value15->compile=(void*)sIfNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sIfNode_terminated;
        _inf_value15->kind=(void*)sIfNode_kind;
        result_339=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value413,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
        __result202__ = gComeFunResultObject = __result_obj__ = result_339;
        /* U13 */sname_323 = come_decrement_ref_count2(sname_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_325) { expression_node_325 = come_decrement_ref_count2(expression_node_325, ((struct sNode*)expression_node_325)->finalize, ((struct sNode*)expression_node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(if_block_326,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_expression_nodes_327,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_blocks_328,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(else_block_330,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_339) { result_339 = come_decrement_ref_count2(result_339, ((struct sNode*)result_339)->finalize, ((struct sNode*)result_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result202__;
        /* U13 */sname_323 = come_decrement_ref_count2(sname_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_325) { expression_node_325 = come_decrement_ref_count2(expression_node_325, ((struct sNode*)expression_node_325)->finalize, ((struct sNode*)expression_node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(if_block_326,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_expression_nodes_327,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_blocks_328,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(else_block_330,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_339) { result_339 = come_decrement_ref_count2(result_339, ((struct sNode*)result_339)->finalize, ((struct sNode*)result_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result203__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value422=string_node_v7(buf,head,head_sline,info)));
    if(__right_value422) { __right_value422 = come_decrement_ref_count2(__right_value422, ((struct sNode*)__right_value422)->finalize, ((struct sNode*)__right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
struct list_item$1sBlockph* litem_336;
struct sBlock* __dec_obj209;
void* __right_value409 = (void*)0;
struct list_item$1sBlockph* litem_337;
struct sBlock* __dec_obj210;
void* __right_value410 = (void*)0;
struct list_item$1sBlockph* litem_338;
struct sBlock* __dec_obj211;
struct list$1sBlockph* __result199__;
    if(    self->len==0) {
        litem_336=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value408=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sBlockph"))));
        litem_336->prev=((void*)0);
        litem_336->next=((void*)0);
        __dec_obj209=litem_336->item;
        litem_336->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_336;
        self->head=litem_336;
    }
    else if(    self->len==1) {
        litem_337=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value409=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sBlockph"))));
        litem_337->prev=self->head;
        litem_337->next=((void*)0);
        __dec_obj210=litem_337->item;
        litem_337->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj210,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_337;
        self->head->next=litem_337;
    }
    else {
        litem_338=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value410=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sBlockph"))));
        litem_338->prev=self->tail;
        litem_338->next=((void*)0);
        __dec_obj211=litem_338->item;
        litem_338->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj211,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_338;
        self->tail=litem_338;
    }
    self->len++;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* sname_341;
int sline_342;
void* __right_value424 = (void*)0;
struct sBlock* if_block_343;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* _inf_value16;
struct sOrStatmentNode* _inf_obj_value16;
void* __right_value431 = (void*)0;
struct sNode* __result206__;
    sname_341=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_342=info->sline;
    parse_sharp_v5(info);
    if_block_343=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 835, "struct sNode");
    _inf_obj_value16=come_increment_ref_count(((struct sOrStatmentNode*)(__right_value426=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 835, "sOrStatmentNode")),(struct sNode*)come_increment_ref_count(expression_node),if_block_343,info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value16->clone=(void*)sOrStatmentNode_clone;
    _inf_value16->compile=(void*)sOrStatmentNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value16->kind=(void*)sOrStatmentNode_kind;
    __result206__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value431=_inf_value16));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_341 = come_decrement_ref_count2(sname_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_343,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value426,sOrStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value431) { __right_value431 = come_decrement_ref_count2(__right_value431, ((struct sNode*)__right_value431)->finalize, ((struct sNode*)__right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __dec_obj225;
struct sNode* __dec_obj226;
struct sBlock* __dec_obj227;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj225=self->sname;
            /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj226=self->mExpressionNode;
            /* U1 */ if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj227=self->mIfBlock;
            come_call_finalizer3(__dec_obj227,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
struct sOrStatmentNode* __result204__;
void* __right_value427 = (void*)0;
struct sOrStatmentNode* result_344;
void* __right_value428 = (void*)0;
char* __dec_obj228;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value430 = (void*)0;
struct sBlock* __dec_obj230;
struct sOrStatmentNode* __result205__;
    if(    self==(void*)0) {
        __result204__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    result_344=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "sOrStatmentNode"));
    if(    self!=((void*)0)) {
        result_344->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj228=result_344->sname;
        result_344->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj229=result_344->mExpressionNode;
        result_344->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj230=result_344->mIfBlock;
        result_344->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj230,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result205__ = gComeFunResultObject = __result_obj__ = result_344;
    /*i*/come_call_finalizer3(result_344,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
char* sname_345;
int sline_346;
void* __right_value433 = (void*)0;
struct sBlock* if_block_347;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value17;
struct sAndStatmentNode* _inf_obj_value17;
void* __right_value440 = (void*)0;
struct sNode* __result209__;
    sname_345=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_346=info->sline;
    parse_sharp_v5(info);
    if_block_347=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 847, "struct sNode");
    _inf_obj_value17=come_increment_ref_count(((struct sAndStatmentNode*)(__right_value435=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 847, "sAndStatmentNode")),(struct sNode*)come_increment_ref_count(expression_node),if_block_347,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value17->clone=(void*)sAndStatmentNode_clone;
    _inf_value17->compile=(void*)sAndStatmentNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value17->kind=(void*)sAndStatmentNode_kind;
    __result209__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value440=_inf_value17));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_345 = come_decrement_ref_count2(sname_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_347,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value435,sAndStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value440) { __right_value440 = come_decrement_ref_count2(__right_value440, ((struct sNode*)__right_value440)->finalize, ((struct sNode*)__right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __dec_obj231;
struct sNode* __dec_obj232;
struct sBlock* __dec_obj233;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj231=self->sname;
            /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj232=self->mExpressionNode;
            /* U1 */ if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj233=self->mIfBlock;
            come_call_finalizer3(__dec_obj233,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
struct sAndStatmentNode* __result207__;
void* __right_value436 = (void*)0;
struct sAndStatmentNode* result_348;
void* __right_value437 = (void*)0;
char* __dec_obj234;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj235;
void* __right_value439 = (void*)0;
struct sBlock* __dec_obj236;
struct sAndStatmentNode* __result208__;
    if(    self==(void*)0) {
        __result207__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_348=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "sAndStatmentNode"));
    if(    self!=((void*)0)) {
        result_348->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_348->sname;
        result_348->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj235=result_348->mExpressionNode;
        result_348->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj236=result_348->mIfBlock;
        result_348->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj236,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result208__ = gComeFunResultObject = __result_obj__ = result_348;
    /*i*/come_call_finalizer3(result_348,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value441 = (void*)0;
char* sname_349;
int sline_350;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* it_node_351;
void* __right_value444 = (void*)0;
struct sNode* conditional_value_352;
void* __right_value445 = (void*)0;
struct sBlock* if_block_353;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_354;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1sBlockph* elif_blocks_355;
int elif_num_356;
struct sBlock* else_block_357;
void* __right_value450 = (void*)0;
struct sBlock* __dec_obj237;
void* __right_value451 = (void*)0;
struct sNode* conditional_value_358;
void* __right_value452 = (void*)0;
struct sBlock* elif_block_359;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sBlock* __dec_obj238;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value18;
struct sIfNode* _inf_obj_value18;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* _inf_value19;
struct sMatchNode* _inf_obj_value19;
void* __right_value472 = (void*)0;
struct sNode* __result214__;
    sname_349=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_350=info->sline;
    expected_next_character(123,info);
    it_node_351=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_352=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_353=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_354=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 868, "list$1sNodeph"))));
    elif_blocks_355=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 869, "list$1sBlockph"))));
    elif_num_356=0;
    else_block_357=((void*)0);
    while((_Bool)1) {
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj237=else_block_357;
            else_block_357=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj237,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_358=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_add(elif_expression_nodes_354,(struct sNode*)come_increment_ref_count(conditional_value_358));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_359=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlockph_add(elif_blocks_355,(struct sBlock*)come_increment_ref_count(elif_block_359));
            elif_num_356++;
            if(conditional_value_358) { conditional_value_358 = come_decrement_ref_count2(conditional_value_358, ((struct sNode*)conditional_value_358)->finalize, ((struct sNode*)conditional_value_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(elif_block_359,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_357==((void*)0)) {
        __dec_obj238=else_block_357;
        else_block_357=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 906, "sBlock")),info));
        come_call_finalizer3(__dec_obj238,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_357->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_357->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 912, "struct sNode");
    _inf_obj_value18=come_increment_ref_count(((struct sIfNode*)(__right_value458=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 912, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_value_352),if_block_353,elif_expression_nodes_354,elif_blocks_355,elif_num_356,else_block_357,(_Bool)0,info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfNode_finalize;
    _inf_value18->clone=(void*)sIfNode_clone;
    _inf_value18->compile=(void*)sIfNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfNode_terminated;
    _inf_value18->kind=(void*)sIfNode_kind;
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 912, "struct sNode");
    _inf_obj_value19=come_increment_ref_count(((struct sMatchNode*)(__right_value467=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 912, "sMatchNode")),(struct sNode*)come_increment_ref_count(it_node_351),(struct sNode*)come_increment_ref_count(_inf_value18),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sMatchNode_finalize;
    _inf_value19->clone=(void*)sMatchNode_clone;
    _inf_value19->compile=(void*)sMatchNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sMatchNode_terminated;
    _inf_value19->kind=(void*)sMatchNode_kind;
    __result214__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value472=_inf_value19));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_349 = come_decrement_ref_count2(sname_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_351) { it_node_351 = come_decrement_ref_count2(it_node_351, ((struct sNode*)it_node_351)->finalize, ((struct sNode*)it_node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_value_352) { conditional_value_352 = come_decrement_ref_count2(conditional_value_352, ((struct sNode*)conditional_value_352)->finalize, ((struct sNode*)conditional_value_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_353,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_354,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_355,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_357,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value458,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value467,sMatchNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value472) { __right_value472 = come_decrement_ref_count2(__right_value472, ((struct sNode*)__right_value472)->finalize, ((struct sNode*)__right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void sMatchNode_finalize(struct sMatchNode* self){
char* __dec_obj251;
struct sNode* __dec_obj252;
struct sNode* __dec_obj253;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj251=self->sname;
            /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj252=self->it_node;
            /* U1 */ if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj253=self->match_node;
            /* U1 */ if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
void* __result_obj__=(void*)0;
struct sMatchNode* __result212__;
void* __right_value468 = (void*)0;
struct sMatchNode* result_361;
void* __right_value469 = (void*)0;
char* __dec_obj254;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj256;
struct sMatchNode* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_361=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "sMatchNode"));
    if(    self!=((void*)0)) {
        result_361->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_361->sname;
        result_361->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj255=result_361->it_node;
        result_361->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        /* U1 */ if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj256=result_361->match_node;
        result_361->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        /* U1 */ if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_361;
    /*i*/come_call_finalizer3(result_361,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value473 = (void*)0;
char* sname_362;
int sline_363;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sNode* it_node_364;
void* __right_value476 = (void*)0;
struct sNode* conditional_node_365;
void* __right_value477 = (void*)0;
struct sBlock* if_block_366;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_367;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1sBlockph* elif_blocks_368;
int elif_num_369;
struct sBlock* else_block_370;
char* saved_p_371;
int saved_sline_372;
void* __right_value482 = (void*)0;
char* buf_373;
void* __right_value483 = (void*)0;
struct sNode* expression_node_374;
void* __right_value484 = (void*)0;
struct sBlock* elif_block_375;
void* __right_value485 = (void*)0;
struct sBlock* __dec_obj257;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sBlock* __dec_obj258;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value20;
struct sIfNode* _inf_obj_value20;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* _inf_value21;
struct sIfMethodNode* _inf_obj_value21;
void* __right_value505 = (void*)0;
struct sNode* result_376;
struct sNode* __result219__;
    sname_362=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_363=info->sline;
    it_node_364=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_365=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_366=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_367=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 928, "list$1sNodeph"))));
    elif_blocks_368=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 930, "list$1sBlockph"))));
    elif_num_369=0;
    else_block_370=((void*)0);
    while(1) {
        saved_p_371=info->p;
        saved_sline_372=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_373=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_373,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_374=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_367,(struct sNode*)come_increment_ref_count(expression_node_374));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_375=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_368,(struct sBlock*)come_increment_ref_count(elif_block_375));
                elif_num_369++;
                if(expression_node_374) { expression_node_374 = come_decrement_ref_count2(expression_node_374, ((struct sNode*)expression_node_374)->finalize, ((struct sNode*)expression_node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_375,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj257=else_block_370;
                else_block_370=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj257,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_373 = come_decrement_ref_count2(buf_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_371;
            info->sline=saved_sline_372;
            /* U13 */buf_373 = come_decrement_ref_count2(buf_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_373 = come_decrement_ref_count2(buf_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_370==((void*)0)) {
        __dec_obj258=else_block_370;
        else_block_370=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 991, "sBlock")),info));
        come_call_finalizer3(__dec_obj258,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_370->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_370->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 997, "struct sNode");
    _inf_obj_value20=come_increment_ref_count(((struct sIfNode*)(__right_value491=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 997, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node_365),if_block_366,elif_expression_nodes_367,elif_blocks_368,elif_num_369,else_block_370,(_Bool)0,info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfNode_finalize;
    _inf_value20->clone=(void*)sIfNode_clone;
    _inf_value20->compile=(void*)sIfNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfNode_terminated;
    _inf_value20->kind=(void*)sIfNode_kind;
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 997, "struct sNode");
    _inf_obj_value21=come_increment_ref_count(((struct sIfMethodNode*)(__right_value500=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 997, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_364),(struct sNode*)come_increment_ref_count(_inf_value20),info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfMethodNode_finalize;
    _inf_value21->clone=(void*)sIfMethodNode_clone;
    _inf_value21->compile=(void*)sIfMethodNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfMethodNode_terminated;
    _inf_value21->kind=(void*)sIfMethodNode_kind;
    result_376=(struct sNode*)come_increment_ref_count(_inf_value21);
    /*g*/come_call_finalizer3(__right_value491,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value500,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result219__ = gComeFunResultObject = __result_obj__ = result_376;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_362 = come_decrement_ref_count2(sname_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_364) { it_node_364 = come_decrement_ref_count2(it_node_364, ((struct sNode*)it_node_364)->finalize, ((struct sNode*)it_node_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_365) { conditional_node_365 = come_decrement_ref_count2(conditional_node_365, ((struct sNode*)conditional_node_365)->finalize, ((struct sNode*)conditional_node_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_366,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_367,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_368,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_370,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_376) { result_376 = come_decrement_ref_count2(result_376, ((struct sNode*)result_376)->finalize, ((struct sNode*)result_376)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result219__;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value506 = (void*)0;
char* sname_379;
int sline_380;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* it_node_381;
void* __right_value509 = (void*)0;
struct sNode* conditional_node_382;
void* __right_value510 = (void*)0;
struct sNode* conditional_node2_383;
void* __right_value511 = (void*)0;
struct sBlock* if_block_384;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_385;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1sBlockph* elif_blocks_386;
int elif_num_387;
struct sBlock* else_block_388;
char* saved_p_389;
int saved_sline_390;
void* __right_value516 = (void*)0;
char* buf_391;
void* __right_value517 = (void*)0;
struct sNode* expression_node_392;
void* __right_value518 = (void*)0;
struct sBlock* elif_block_393;
void* __right_value519 = (void*)0;
struct sBlock* __dec_obj277;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sBlock* __dec_obj278;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sNode* _inf_value22;
struct sIfNode* _inf_obj_value22;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sNode* _inf_value23;
struct sIfMethodNode* _inf_obj_value23;
void* __right_value539 = (void*)0;
struct sNode* result_394;
struct sNode* __result224__;
    sname_379=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_380=info->sline;
    it_node_381=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_382=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_383=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_382),info));
    parse_sharp_v5(info);
    if_block_384=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_385=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1016, "list$1sNodeph"))));
    elif_blocks_386=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1018, "list$1sBlockph"))));
    elif_num_387=0;
    else_block_388=((void*)0);
    while(1) {
        saved_p_389=info->p;
        saved_sline_390=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_391=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_391,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_392=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_385,(struct sNode*)come_increment_ref_count(expression_node_392));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_393=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_386,(struct sBlock*)come_increment_ref_count(elif_block_393));
                elif_num_387++;
                if(expression_node_392) { expression_node_392 = come_decrement_ref_count2(expression_node_392, ((struct sNode*)expression_node_392)->finalize, ((struct sNode*)expression_node_392)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_393,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj277=else_block_388;
                else_block_388=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj277,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_391 = come_decrement_ref_count2(buf_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_389;
            info->sline=saved_sline_390;
            /* U13 */buf_391 = come_decrement_ref_count2(buf_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_391 = come_decrement_ref_count2(buf_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_388==((void*)0)) {
        __dec_obj278=else_block_388;
        else_block_388=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1079, "sBlock")),info));
        come_call_finalizer3(__dec_obj278,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_388->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_388->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1085, "struct sNode");
    _inf_obj_value22=come_increment_ref_count(((struct sIfNode*)(__right_value525=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1085, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node2_383),if_block_384,elif_expression_nodes_385,elif_blocks_386,elif_num_387,else_block_388,(_Bool)0,info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfNode_finalize;
    _inf_value22->clone=(void*)sIfNode_clone;
    _inf_value22->compile=(void*)sIfNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfNode_terminated;
    _inf_value22->kind=(void*)sIfNode_kind;
    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1085, "struct sNode");
    _inf_obj_value23=come_increment_ref_count(((struct sIfMethodNode*)(__right_value534=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1085, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_381),(struct sNode*)come_increment_ref_count(_inf_value22),info))));
    _inf_value23->_protocol_obj=_inf_obj_value23;
    _inf_value23->finalize=(void*)sIfMethodNode_finalize;
    _inf_value23->clone=(void*)sIfMethodNode_clone;
    _inf_value23->compile=(void*)sIfMethodNode_compile;
    _inf_value23->sline=(void*)sNodeBase_sline;
    _inf_value23->sname=(void*)sNodeBase_sname;
    _inf_value23->terminated=(void*)sIfMethodNode_terminated;
    _inf_value23->kind=(void*)sIfMethodNode_kind;
    result_394=(struct sNode*)come_increment_ref_count(_inf_value23);
    /*g*/come_call_finalizer3(__right_value525,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value534,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result224__ = gComeFunResultObject = __result_obj__ = result_394;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_379 = come_decrement_ref_count2(sname_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_381) { it_node_381 = come_decrement_ref_count2(it_node_381, ((struct sNode*)it_node_381)->finalize, ((struct sNode*)it_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_382) { conditional_node_382 = come_decrement_ref_count2(conditional_node_382, ((struct sNode*)conditional_node_382)->finalize, ((struct sNode*)conditional_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_383) { conditional_node2_383 = come_decrement_ref_count2(conditional_node2_383, ((struct sNode*)conditional_node2_383)->finalize, ((struct sNode*)conditional_node2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_384,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_385,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_386,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_388,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_394) { result_394 = come_decrement_ref_count2(result_394, ((struct sNode*)result_394)->finalize, ((struct sNode*)result_394)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
char* sname_397;
int sline_398;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* it_node_399;
void* __right_value543 = (void*)0;
struct sNode* conditional_node_400;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* conditional_node2_401;
void* __right_value546 = (void*)0;
struct sBlock* if_block_402;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_403;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1sBlockph* elif_blocks_404;
int elif_num_405;
struct sBlock* else_block_406;
char* saved_p_407;
int saved_sline_408;
void* __right_value551 = (void*)0;
char* buf_409;
void* __right_value552 = (void*)0;
struct sNode* expression_node_410;
void* __right_value553 = (void*)0;
struct sBlock* elif_block_411;
void* __right_value554 = (void*)0;
struct sBlock* __dec_obj297;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sBlock* __dec_obj298;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value24;
struct sIfNode* _inf_obj_value24;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value25;
struct sIfMethodNode* _inf_obj_value25;
void* __right_value574 = (void*)0;
struct sNode* result_412;
struct sNode* __result229__;
    sname_397=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_398=info->sline;
    it_node_399=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_400=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_401=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_400),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_402=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_403=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1104, "list$1sNodeph"))));
    elif_blocks_404=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1106, "list$1sBlockph"))));
    elif_num_405=0;
    else_block_406=((void*)0);
    while(1) {
        saved_p_407=info->p;
        saved_sline_408=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_409=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_409,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_410=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_403,(struct sNode*)come_increment_ref_count(expression_node_410));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_411=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_404,(struct sBlock*)come_increment_ref_count(elif_block_411));
                elif_num_405++;
                if(expression_node_410) { expression_node_410 = come_decrement_ref_count2(expression_node_410, ((struct sNode*)expression_node_410)->finalize, ((struct sNode*)expression_node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_411,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj297=else_block_406;
                else_block_406=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj297,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_409 = come_decrement_ref_count2(buf_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_407;
            info->sline=saved_sline_408;
            /* U13 */buf_409 = come_decrement_ref_count2(buf_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_409 = come_decrement_ref_count2(buf_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_406==((void*)0)) {
        __dec_obj298=else_block_406;
        else_block_406=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1167, "sBlock")),info));
        come_call_finalizer3(__dec_obj298,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_406->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_406->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1173, "struct sNode");
    _inf_obj_value24=come_increment_ref_count(((struct sIfNode*)(__right_value560=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1173, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node2_401),if_block_402,elif_expression_nodes_403,elif_blocks_404,elif_num_405,else_block_406,(_Bool)0,info))));
    _inf_value24->_protocol_obj=_inf_obj_value24;
    _inf_value24->finalize=(void*)sIfNode_finalize;
    _inf_value24->clone=(void*)sIfNode_clone;
    _inf_value24->compile=(void*)sIfNode_compile;
    _inf_value24->sline=(void*)sNodeBase_sline;
    _inf_value24->sname=(void*)sNodeBase_sname;
    _inf_value24->terminated=(void*)sIfNode_terminated;
    _inf_value24->kind=(void*)sIfNode_kind;
    _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1173, "struct sNode");
    _inf_obj_value25=come_increment_ref_count(((struct sIfMethodNode*)(__right_value569=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1173, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_399),(struct sNode*)come_increment_ref_count(_inf_value24),info))));
    _inf_value25->_protocol_obj=_inf_obj_value25;
    _inf_value25->finalize=(void*)sIfMethodNode_finalize;
    _inf_value25->clone=(void*)sIfMethodNode_clone;
    _inf_value25->compile=(void*)sIfMethodNode_compile;
    _inf_value25->sline=(void*)sNodeBase_sline;
    _inf_value25->sname=(void*)sNodeBase_sname;
    _inf_value25->terminated=(void*)sIfMethodNode_terminated;
    _inf_value25->kind=(void*)sIfMethodNode_kind;
    result_412=(struct sNode*)come_increment_ref_count(_inf_value25);
    /*g*/come_call_finalizer3(__right_value560,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value569,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result229__ = gComeFunResultObject = __result_obj__ = result_412;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_397 = come_decrement_ref_count2(sname_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_399) { it_node_399 = come_decrement_ref_count2(it_node_399, ((struct sNode*)it_node_399)->finalize, ((struct sNode*)it_node_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_400) { conditional_node_400 = come_decrement_ref_count2(conditional_node_400, ((struct sNode*)conditional_node_400)->finalize, ((struct sNode*)conditional_node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_401) { conditional_node2_401 = come_decrement_ref_count2(conditional_node2_401, ((struct sNode*)conditional_node2_401)->finalize, ((struct sNode*)conditional_node2_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_402,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_403,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_404,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_406,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_412) { result_412 = come_decrement_ref_count2(result_412, ((struct sNode*)result_412)->finalize, ((struct sNode*)result_412)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void sIfNode_finalize(struct sIfNode* self){
char* __dec_obj299;
struct sNode* __dec_obj300;
struct sBlock* __dec_obj301;
struct list$1sNodeph* __dec_obj302;
struct list$1sBlockph* __dec_obj303;
struct sBlock* __dec_obj304;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj299=self->sname;
            /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj300=self->mExpressionNode;
            /* U1 */ if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj301=self->mIfBlock;
            come_call_finalizer3(__dec_obj301,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        if(        self->mElifExpressionNodes==gComeFunResultObject) {
            __dec_obj302=self->mElifExpressionNodes;
            come_call_finalizer3(__dec_obj302,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElifExpressionNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        if(        self->mElifBlocks==gComeFunResultObject) {
            __dec_obj303=self->mElifBlocks;
            come_call_finalizer3(__dec_obj303,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElifBlocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        if(        self->mElseBlock==gComeFunResultObject) {
            __dec_obj304=self->mElseBlock;
            come_call_finalizer3(__dec_obj304,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__=(void*)0;
struct sIfNode* __result225__;
void* __right_value561 = (void*)0;
struct sIfNode* result_413;
void* __right_value562 = (void*)0;
char* __dec_obj305;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value564 = (void*)0;
struct sBlock* __dec_obj307;
void* __right_value565 = (void*)0;
struct list$1sNodeph* __dec_obj308;
void* __right_value566 = (void*)0;
struct list$1sBlockph* __dec_obj309;
void* __right_value567 = (void*)0;
struct sBlock* __dec_obj310;
struct sIfNode* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_413=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "sIfNode"));
    if(    self!=((void*)0)) {
        result_413->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj305=result_413->sname;
        result_413->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj306=result_413->mExpressionNode;
        result_413->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj307=result_413->mIfBlock;
        result_413->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj307,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj308=result_413->mElifExpressionNodes;
        result_413->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj308,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj309=result_413->mElifBlocks;
        result_413->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->mElifBlocks));
        come_call_finalizer3(__dec_obj309,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_413->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj310=result_413->mElseBlock;
        result_413->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        come_call_finalizer3(__dec_obj310,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_413;
    /*i*/come_call_finalizer3(result_413,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
char* __dec_obj311;
struct sNode* __dec_obj312;
struct sNode* __dec_obj313;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj312=self->it_node;
            /* U1 */ if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj313=self->match_node;
            /* U1 */ if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
struct sIfMethodNode* __result227__;
void* __right_value570 = (void*)0;
struct sIfMethodNode* result_414;
void* __right_value571 = (void*)0;
char* __dec_obj314;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj315;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj316;
struct sIfMethodNode* __result228__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_414=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "sIfMethodNode"));
    if(    self!=((void*)0)) {
        result_414->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj314=result_414->sname;
        result_414->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj315=result_414->it_node;
        result_414->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj316=result_414->match_node;
        result_414->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        /* U1 */ if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_414;
    /*i*/come_call_finalizer3(result_414,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

