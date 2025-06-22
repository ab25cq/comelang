/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

/// struct definition ///
typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
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

typedef long long __darwin_blkcnt_t;

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

typedef long long __darwin_off_t;

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

typedef long long fpos_t;

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
    long long (*_seek)(void*,long long,int);
    int (*_write)(void*,const char*,int);
    struct __sbuf _ub;
    struct __sFILEX* _extra;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    long long _offset;
};

typedef struct __sFILE FILE;

extern struct __sFILE* __stdinp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stdoutp __attribute__((__swift_attr__("nonisolated(unsafe)")));
extern struct __sFILE* __stderrp __attribute__((__swift_attr__("nonisolated(unsafe)")));
typedef long long off_t;

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

struct __darwin_arm_sme_state
{
    unsigned long  long __svcr;
    unsigned long  long __tpidr2_el0;
    unsigned short int __svl_b;
};

struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));

struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));

struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));

struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));

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

typedef struct _xlocale* locale_t;

typedef int wint_t;

struct anonymous_typeX8
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX8 _RuneEntry;

struct anonymous_typeX9
{
    int __nranges;
    struct anonymous_typeX8* __ranges;
};

typedef struct anonymous_typeX9 _RuneRange;

struct anonymous_typeX10
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX10 _RuneCharClass;

struct anonymous_typeX11
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX9 __runetype_ext;
    struct anonymous_typeX9 __maplower_ext;
    struct anonymous_typeX9 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX10* __charclasses;
};

typedef struct anonymous_typeX11 _RuneLocale;

extern struct anonymous_typeX11 _DefaultRuneLocale;
extern struct anonymous_typeX11* _CurrentRuneLocale;
typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

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
    long tm_gmtoff;
    char* tm_zone;
};

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY12 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY12 clockid_t;

typedef unsigned int wctype_t;

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

typedef unsigned long  int anonymous_var_nameX601;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

struct mem_block* free_list=((void*)0);
typedef long  int ptrdiff_t;

typedef long  double max_align_t;

struct elfhdr
{
    unsigned int magic;
    unsigned char elf[12];
    unsigned short int type;
    unsigned short int machine;
    unsigned int version;
    unsigned long  long entry;
    unsigned long  long phoff;
    unsigned long  long shoff;
    unsigned int flags;
    unsigned short int ehsize;
    unsigned short int phentsize;
    unsigned short int phnum;
    unsigned short int shentsize;
    unsigned short int shnum;
    unsigned short int shstrndx;
};

struct proghdr
{
    unsigned int type;
    unsigned int flags;
    unsigned long  long off;
    unsigned long  long vaddr;
    unsigned long  long paddr;
    unsigned long  long filesz;
    unsigned long  long memsz;
    unsigned long  long align;
};

struct superblock
{
    unsigned int size;
    unsigned int nblocks;
    unsigned int ninodes;
    unsigned int nlog;
    unsigned int logstart;
    unsigned int inodestart;
    unsigned int bmapstart;
};

struct dinode
{
    unsigned short int type;
    unsigned short int major;
    unsigned short int minor;
    unsigned short int nlink;
    unsigned int size;
    unsigned int addrs[12+2];
};

struct dirent
{
    unsigned short int inum;
    char name[14];
};

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x6b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x8d, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80,
  0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0xb7, 0x07, 0x00, 0x10,
  0x13, 0x07, 0xf0, 0x04, 0x23, 0x80, 0xe7, 0x00, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0xc5, 0x01, 0xef, 0xf0, 0xdf, 0xfa, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x05, 0x01, 0xef, 0xf0, 0x1f, 0xfa, 0xd5, 0xbf, 0x00, 0x00,
  0x4f, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36,
  0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32,
  0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63,
  0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x50, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x52, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7e, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x0c, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x82, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9a, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xae, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x52, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb5, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63,
  0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x5f, 0x5f,
  0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74,
  0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f,
  0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x75, 0x73, 0x65, 0x72,
  0x5f, 0x70, 0x75, 0x74, 0x73, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f,
  0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f,
  0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61,
  0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65,
  0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e,
  0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65,
  0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x50, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xba, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1632;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0c, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x53, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x02, 0xef, 0xf0, 0xdf, 0xfc,
  0xd5, 0xbf, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x95, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x00, 0x00,
  0x48, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36,
  0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32,
  0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63,
  0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x38, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x3a, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x65, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x3a, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x75, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x22, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x83, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x40, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x3a, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9b, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x0c, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x3a, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xaf, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x3a, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb6, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x40, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e, 0x63, 0x00, 0x24, 0x78,
  0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70,
  0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f,
  0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x5f,
  0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41,
  0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x75, 0x73, 0x65,
  0x72, 0x5f, 0x70, 0x75, 0x74, 0x73, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f,
  0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f,
  0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d,
  0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42,
  0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74,
  0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d,
  0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74,
  0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00,
  0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69,
  0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74,
  0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1608;
typedef unsigned long  int anonymous_var_nameX610;

typedef long  int anonymous_var_nameX611;

extern char _end2[];
extern char _end3[];
struct context
{
    unsigned long  long ra;
    unsigned long  long sp;
    unsigned long  long gp;
    unsigned long  long tp;
    unsigned long  long t0;
    unsigned long  long t1;
    unsigned long  long t2;
    unsigned long  long t3;
    unsigned long  long t4;
    unsigned long  long t5;
    unsigned long  long t6;
    unsigned long  long a0;
    unsigned long  long a1;
    unsigned long  long a2;
    unsigned long  long a3;
    unsigned long  long a4;
    unsigned long  long a5;
    unsigned long  long a6;
    unsigned long  long a7;
    unsigned long  long s0;
    unsigned long  long s1;
    unsigned long  long s2;
    unsigned long  long s3;
    unsigned long  long s4;
    unsigned long  long s5;
    unsigned long  long s6;
    unsigned long  long s7;
    unsigned long  long s8;
    unsigned long  long s9;
    unsigned long  long s10;
    unsigned long  long s11;
    unsigned long  long mepc;
};

struct cpu
{
    struct proc* proc;
    struct context context;
    int noff;
    int intena;
};

struct cpu gCPU;
typedef unsigned long  long pte_t;

typedef unsigned long  long pde_t;

typedef unsigned long  long* pagetable_t;

unsigned long  long* kernel_pagetable;
struct proc
{
    struct context context;
    struct proc* parent;
    char* stack;
    char* program;
    unsigned long  long* pagetable;
};

struct proc* gProc[128];
int gActiveProc=0;
int gNumProc=0;
struct run
{
    struct run* next;
};

struct spinlock
{
    unsigned int locked;
    char* name;
    struct cpu* cpu;
};

struct anonymous_typeX13
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX14
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX15
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX16
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX17
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX17 kmem;
extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
unsigned long  long kernel_sp __attribute__((section(".common")));
unsigned long  long user_sp __attribute__((section(".common")));
unsigned long  long kernel_satp __attribute__((section(".common")));
unsigned long  long user_satp __attribute__((section(".common")));
char last_key=0;
static struct spinlock console_lock;
// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
void clearerr(struct __sFILE* anonymous_var_nameX32);
int fclose(struct __sFILE* anonymous_var_nameX33);
int feof(struct __sFILE* anonymous_var_nameX34);
int ferror(struct __sFILE* anonymous_var_nameX35);
int fflush(struct __sFILE* anonymous_var_nameX36);
int fgetc(struct __sFILE* anonymous_var_nameX37);
int fgetpos(struct __sFILE* anonymous_var_nameX38, long long* anonymous_var_nameX39);
char* fgets(char* anonymous_var_nameX40, int __size, struct __sFILE* anonymous_var_nameX41);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX42, const char* anonymous_var_nameX43, ...);
int fputc(int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
int fputs(const char* anonymous_var_nameX46, struct __sFILE* anonymous_var_nameX47);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX48, const char* anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fscanf(struct __sFILE* anonymous_var_nameX51, const char* anonymous_var_nameX52, ...);
int fseek(struct __sFILE* anonymous_var_nameX53, long anonymous_var_nameX54, int anonymous_var_nameX55);
int fsetpos(struct __sFILE* anonymous_var_nameX56, const long long* anonymous_var_nameX57);
long ftell(struct __sFILE* anonymous_var_nameX58);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX59);
int getchar();
char* gets(char* anonymous_var_nameX60);
int remove(const char* anonymous_var_nameX66);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX67);
int scanf(const char* anonymous_var_nameX68, ...);
void setbuf(struct __sFILE* anonymous_var_nameX69, char* anonymous_var_nameX70);
int setvbuf(struct __sFILE* anonymous_var_nameX71, char* anonymous_var_nameX72, int anonymous_var_nameX73, unsigned long  int __size);
int sprintf(char* anonymous_var_nameX74, const char* anonymous_var_nameX75, ...);
int sscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, ...);
struct __sFILE* tmpfile();
char* tmpnam(char* anonymous_var_nameX78);
int ungetc(int anonymous_var_nameX79, struct __sFILE* anonymous_var_nameX80);
int vfprintf(struct __sFILE* anonymous_var_nameX81, const char* anonymous_var_nameX82, va_list anonymous_var_nameX83);
int vprintf(const char* anonymous_var_nameX84, va_list anonymous_var_nameX85);
int vsprintf(char* anonymous_var_nameX86, const char* anonymous_var_nameX87, va_list anonymous_var_nameX88);
char* ctermid(char* anonymous_var_nameX89);
struct __sFILE* fdopen(int anonymous_var_nameX90, const char* anonymous_var_nameX91);
int fileno(struct __sFILE* anonymous_var_nameX92);
int pclose(struct __sFILE* anonymous_var_nameX93);
struct __sFILE* popen(const char* anonymous_var_nameX94, const char* anonymous_var_nameX95);
int __srget(struct __sFILE* anonymous_var_nameX96);
int __svfscanf(struct __sFILE* anonymous_var_nameX97, const char* anonymous_var_nameX98, va_list anonymous_var_nameX99);
int __swbuf(int anonymous_var_nameX100, struct __sFILE* anonymous_var_nameX101);
void flockfile(struct __sFILE* anonymous_var_nameX102);
int ftrylockfile(struct __sFILE* anonymous_var_nameX103);
void funlockfile(struct __sFILE* anonymous_var_nameX104);
int getc_unlocked(struct __sFILE* anonymous_var_nameX105);
int getchar_unlocked();
int putc_unlocked(int anonymous_var_nameX106, struct __sFILE* anonymous_var_nameX107);
int putchar_unlocked(int anonymous_var_nameX108);
int getw(struct __sFILE* anonymous_var_nameX109);
int putw(int anonymous_var_nameX110, struct __sFILE* anonymous_var_nameX111);
char* tempnam(const char* __dir, const char* __prefix);
int fseeko(struct __sFILE* __stream, long long __offset, int __whence);
long long ftello(struct __sFILE* __stream);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX112);
int vscanf(const char* __format, va_list anonymous_var_nameX113);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX115);
int dprintf(int anonymous_var_nameX116, const char* anonymous_var_nameX117, ...);
int vdprintf(int anonymous_var_nameX118, const char* anonymous_var_nameX119, va_list anonymous_var_nameX120);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX121, const char* anonymous_var_nameX122, ...);
char* ctermid_r(char* anonymous_var_nameX123);
char* fgetln(struct __sFILE* anonymous_var_nameX124, unsigned long  int* __len);
const char* fmtcheck(const char* anonymous_var_nameX125, const char* anonymous_var_nameX126);
int fpurge(struct __sFILE* anonymous_var_nameX127);
void setbuffer(struct __sFILE* anonymous_var_nameX128, char* anonymous_var_nameX129, int __size);
int setlinebuf(struct __sFILE* anonymous_var_nameX130);
struct __sFILE* funopen(const void* anonymous_var_nameX134, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long (*anonymous_lambda_var_nameZ3)(void*,long long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX163, unsigned int anonymous_var_nameX164);
int getiopolicy_np(int anonymous_var_nameX165, int anonymous_var_nameX166);
int getrlimit(int anonymous_var_nameX167, struct rlimit* anonymous_var_nameX168);
int getrusage(int anonymous_var_nameX169, struct rusage* anonymous_var_nameX170);
int setpriority(int anonymous_var_nameX171, unsigned int anonymous_var_nameX172, int anonymous_var_nameX173);
int setiopolicy_np(int anonymous_var_nameX174, int anonymous_var_nameX175, int anonymous_var_nameX176);
int setrlimit(int anonymous_var_nameX177, const struct rlimit* anonymous_var_nameX178);
int wait(int* anonymous_var_nameX179);
int waitpid(int anonymous_var_nameX180, int* anonymous_var_nameX181, int anonymous_var_nameX182);
int waitid(enum anonymous_typeY2 anonymous_var_nameX183, unsigned int anonymous_var_nameX184, struct __siginfo* anonymous_var_nameX185, int anonymous_var_nameX186);
int wait3(int* anonymous_var_nameX187, int anonymous_var_nameX188, struct rusage* anonymous_var_nameX189);
int wait4(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192, struct rusage* anonymous_var_nameX193);
void* alloca(unsigned long  int __size);
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
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX195);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX196);
int atoi(const char* anonymous_var_nameX197);
long atol(const char* anonymous_var_nameX198);
long long atoll(const char* anonymous_var_nameX199);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX202, int anonymous_var_nameX203);
char* getenv(const char* anonymous_var_nameX205);
long labs(long anonymous_var_nameX206);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX207, long anonymous_var_nameX208);
long long llabs(long  long anonymous_var_nameX209);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX210, long  long anonymous_var_nameX211);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX212, const char* anonymous_var_nameX213, unsigned long  int __n);
int mbtowc(int* anonymous_var_nameX214, const char* anonymous_var_nameX215, unsigned long  int __n);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX218);
int rand();
void srand(unsigned int anonymous_var_nameX219);
double strtod(const char* anonymous_var_nameX220, char** anonymous_var_nameX221);
float strtof(const char* anonymous_var_nameX222, char** anonymous_var_nameX223);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX224, char** anonymous_var_nameX225);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX226);
unsigned long  int wcstombs(char* anonymous_var_nameX227, const int* anonymous_var_nameX228, unsigned long  int __n);
int wctomb(char* anonymous_var_nameX229, int anonymous_var_nameX230);
void _Exit(int anonymous_var_nameX231);
long a64l(const char* anonymous_var_nameX232);
double drand48();
char* ecvt(double anonymous_var_nameX233, int anonymous_var_nameX234, int* anonymous_var_nameX235, int* anonymous_var_nameX236);
double erand48(unsigned short int anonymous_var_nameX237[3]);
char* fcvt(double anonymous_var_nameX238, int anonymous_var_nameX239, int* anonymous_var_nameX240, int* anonymous_var_nameX241);
char* gcvt(double anonymous_var_nameX242, int anonymous_var_nameX243, char* anonymous_var_nameX244);
int getsubopt(char** anonymous_var_nameX245, char** anonymous_var_nameX246, char** anonymous_var_nameX247);
int grantpt(int anonymous_var_nameX248);
char* initstate(unsigned int anonymous_var_nameX249, char* anonymous_var_nameX250, unsigned long  int __size);
long jrand48(unsigned short int anonymous_var_nameX251[3]);
char* l64a(long anonymous_var_nameX252);
void lcong48(unsigned short int anonymous_var_nameX253[7]);
long lrand48();
char* mktemp(char* anonymous_var_nameX254);
int mkstemp(char* anonymous_var_nameX255);
long mrand48();
long nrand48(unsigned short int anonymous_var_nameX256[3]);
int posix_openpt(int anonymous_var_nameX257);
char* ptsname(int anonymous_var_nameX258);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
int putenv(char* anonymous_var_nameX259);
long random();
int rand_r(unsigned int* anonymous_var_nameX260);
char* realpath(const char* anonymous_var_nameX261, char* anonymous_var_nameX262);
unsigned short int* seed48(unsigned short int anonymous_var_nameX263[3]);
int setenv(const char* __name, const char* __value, int __overwrite);
void setkey(const char* anonymous_var_nameX264);
char* setstate(const char* anonymous_var_nameX265);
void srand48(long anonymous_var_nameX266);
void srandom(unsigned int anonymous_var_nameX267);
int unlockpt(int anonymous_var_nameX268);
int unsetenv(const char* anonymous_var_nameX269);
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX270, int __datlen);
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)) __attribute__((__noescape__)));
char* cgetcap(char* anonymous_var_nameX273, const char* anonymous_var_nameX274, int anonymous_var_nameX275);
int cgetclose();
int cgetent(char** anonymous_var_nameX276, char** anonymous_var_nameX277, const char* anonymous_var_nameX278);
int cgetfirst(char** anonymous_var_nameX279, char** anonymous_var_nameX280);
int cgetmatch(const char* anonymous_var_nameX281, const char* anonymous_var_nameX282);
int cgetnext(char** anonymous_var_nameX283, char** anonymous_var_nameX284);
int cgetnum(char* anonymous_var_nameX285, const char* anonymous_var_nameX286, long* anonymous_var_nameX287);
int cgetset(const char* anonymous_var_nameX288);
int cgetstr(char* anonymous_var_nameX289, const char* anonymous_var_nameX290, char** anonymous_var_nameX291);
int cgetustr(char* anonymous_var_nameX292, const char* anonymous_var_nameX293, char** anonymous_var_nameX294);
int daemon(int anonymous_var_nameX295, int anonymous_var_nameX296);
char* devname(int anonymous_var_nameX297, unsigned short int anonymous_var_nameX298);
char* devname_r(int anonymous_var_nameX299, unsigned short int anonymous_var_nameX300, char* buf, int len);
char* getbsize(int* anonymous_var_nameX301, long* anonymous_var_nameX302);
int getloadavg(double anonymous_var_nameX303[], int __nelem);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX304);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)) __attribute__((__noescape__)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)) __attribute__((__noescape__)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)) __attribute__((__noescape__)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX317, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)) __attribute__((__noescape__)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX323, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX327);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen);
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
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX328, void* anonymous_var_nameX329, long __len);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX330, const void* anonymous_var_nameX331, unsigned long  int __n);
void bcopy(const void* anonymous_var_nameX332, void* anonymous_var_nameX333, unsigned long  int __n);
void bzero(void* anonymous_var_nameX334, unsigned long  int __n);
char* index(const char* anonymous_var_nameX335, int anonymous_var_nameX336);
char* rindex(const char* anonymous_var_nameX337, int anonymous_var_nameX338);
int ffs(int anonymous_var_nameX339);
int strcasecmp(const char* anonymous_var_nameX340, const char* anonymous_var_nameX341);
int strncasecmp(const char* anonymous_var_nameX342, const char* anonymous_var_nameX343, unsigned long  int anonymous_var_nameX344);
int ffsl(long anonymous_var_nameX345);
int ffsll(long  long anonymous_var_nameX346);
int fls(int anonymous_var_nameX347);
int flsl(long anonymous_var_nameX348);
int flsll(long  long anonymous_var_nameX349);
struct _xlocale* duplocale(struct _xlocale* anonymous_var_nameX350);
int freelocale(struct _xlocale* anonymous_var_nameX351);
struct lconv* localeconv();
struct _xlocale* newlocale(int anonymous_var_nameX352, const char* anonymous_var_nameX353, struct _xlocale* anonymous_var_nameX354);
struct _xlocale* uselocale(struct _xlocale* anonymous_var_nameX355);
char* setlocale(int anonymous_var_nameX356, const char* anonymous_var_nameX357);
int* __error();
int isalnum(int anonymous_var_nameX364);
int isalpha(int anonymous_var_nameX365);
int isblank(int anonymous_var_nameX366);
int iscntrl(int anonymous_var_nameX367);
int isdigit(int anonymous_var_nameX368);
int isgraph(int anonymous_var_nameX369);
int islower(int anonymous_var_nameX370);
int isprint(int anonymous_var_nameX371);
int ispunct(int anonymous_var_nameX372);
int isspace(int anonymous_var_nameX373);
int isupper(int anonymous_var_nameX374);
int isxdigit(int anonymous_var_nameX375);
int tolower(int anonymous_var_nameX376);
int toupper(int anonymous_var_nameX377);
int isascii(int anonymous_var_nameX378);
int toascii(int anonymous_var_nameX379);
int _tolower(int anonymous_var_nameX380);
int _toupper(int anonymous_var_nameX381);
int digittoint(int anonymous_var_nameX382);
int ishexnumber(int anonymous_var_nameX383);
int isideogram(int anonymous_var_nameX384);
int isnumber(int anonymous_var_nameX385);
int isphonogram(int anonymous_var_nameX386);
int isrune(int anonymous_var_nameX387);
int isspecial(int anonymous_var_nameX388);
char* asctime(const struct tm* anonymous_var_nameX389);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX390);
double difftime(long anonymous_var_nameX391, long anonymous_var_nameX392);
struct tm* getdate(const char* anonymous_var_nameX393);
struct tm* gmtime(const long* anonymous_var_nameX394);
struct tm* localtime(const long* anonymous_var_nameX395);
long mktime(struct tm* anonymous_var_nameX396);
unsigned long  int strftime(char* anonymous_var_nameX397, unsigned long  int __maxsize, const char* anonymous_var_nameX398, const struct tm* anonymous_var_nameX399);
char* strptime(const char* anonymous_var_nameX400, const char* anonymous_var_nameX401, struct tm* anonymous_var_nameX402);
long time(long* anonymous_var_nameX403);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX404, char* anonymous_var_nameX405);
char* ctime_r(const long* anonymous_var_nameX406, char* anonymous_var_nameX407);
struct tm* gmtime_r(const long* anonymous_var_nameX408, struct tm* anonymous_var_nameX409);
struct tm* localtime_r(const long* anonymous_var_nameX410, struct tm* anonymous_var_nameX411);
long posix2time(long anonymous_var_nameX412);
void tzsetwall();
long time2posix(long anonymous_var_nameX413);
long timelocal(struct tm* anonymous_var_nameX414);
long timegm(struct tm* anonymous_var_nameX415);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY12 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY12 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY12 __clock_id);
int clock_settime(enum anonymous_typeY12 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int iswalnum(int anonymous_var_nameX416);
int iswalpha(int anonymous_var_nameX417);
int iswcntrl(int anonymous_var_nameX418);
int iswctype(int anonymous_var_nameX419, unsigned int anonymous_var_nameX420);
int iswdigit(int anonymous_var_nameX421);
int iswgraph(int anonymous_var_nameX422);
int iswlower(int anonymous_var_nameX423);
int iswprint(int anonymous_var_nameX424);
int iswpunct(int anonymous_var_nameX425);
int iswspace(int anonymous_var_nameX426);
int iswupper(int anonymous_var_nameX427);
int iswxdigit(int anonymous_var_nameX428);
int towlower(int anonymous_var_nameX429);
int towupper(int anonymous_var_nameX430);
unsigned int wctype(const char* anonymous_var_nameX431);
int btowc(int anonymous_var_nameX432);
int fgetwc(struct __sFILE* anonymous_var_nameX433);
int* fgetws(int* anonymous_var_nameX434, int __n, struct __sFILE* anonymous_var_nameX435);
int fputwc(int anonymous_var_nameX436, struct __sFILE* anonymous_var_nameX437);
int fputws(const int* anonymous_var_nameX438, struct __sFILE* anonymous_var_nameX439);
int fwide(struct __sFILE* anonymous_var_nameX440, int anonymous_var_nameX441);
int fwprintf(struct __sFILE* anonymous_var_nameX442, const int* anonymous_var_nameX443, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX444, const int* anonymous_var_nameX445, ...);
int getwc(struct __sFILE* anonymous_var_nameX446);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX447, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX448);
unsigned long  int mbrtowc(int* anonymous_var_nameX449, const char* anonymous_var_nameX450, unsigned long  int __n, union anonymous_typeZ1* anonymous_var_nameX451);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX452);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX453, const char** anonymous_var_nameX454, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX455);
int putwc(int anonymous_var_nameX456, struct __sFILE* anonymous_var_nameX457);
int putwchar(int anonymous_var_nameX458);
int swprintf(int* anonymous_var_nameX459, unsigned long  int __maxlen, const int* anonymous_var_nameX460, ...);
int swscanf(const int* anonymous_var_nameX461, const int* anonymous_var_nameX462, ...);
int ungetwc(int anonymous_var_nameX463, struct __sFILE* anonymous_var_nameX464);
int vfwprintf(struct __sFILE* anonymous_var_nameX465, const int* anonymous_var_nameX466, __darwin_va_list anonymous_var_nameX467);
int vswprintf(int* anonymous_var_nameX468, unsigned long  int __maxlen, const int* anonymous_var_nameX469, __darwin_va_list anonymous_var_nameX470);
int vwprintf(const int* anonymous_var_nameX471, __darwin_va_list anonymous_var_nameX472);
unsigned long  int wcrtomb(char* anonymous_var_nameX473, int anonymous_var_nameX474, union anonymous_typeZ1* anonymous_var_nameX475);
int* wcscat(int* anonymous_var_nameX476, const int* anonymous_var_nameX477);
int* wcschr(const int* anonymous_var_nameX478, int anonymous_var_nameX479);
int wcscmp(const int* anonymous_var_nameX480, const int* anonymous_var_nameX481);
int wcscoll(const int* anonymous_var_nameX482, const int* anonymous_var_nameX483);
int* wcscpy(int* anonymous_var_nameX484, const int* anonymous_var_nameX485);
unsigned long  int wcscspn(const int* anonymous_var_nameX486, const int* anonymous_var_nameX487);
unsigned long  int wcsftime(int* anonymous_var_nameX488, unsigned long  int __maxlen, const int* anonymous_var_nameX489, const struct tm* anonymous_var_nameX490);
unsigned long  int wcslen(const int* anonymous_var_nameX491);
int* wcsncat(int* anonymous_var_nameX492, const int* anonymous_var_nameX493, unsigned long  int __n);
int wcsncmp(const int* anonymous_var_nameX494, const int* anonymous_var_nameX495, unsigned long  int anonymous_var_nameX496);
int* wcsncpy(int* anonymous_var_nameX497, const int* anonymous_var_nameX498, unsigned long  int __n);
int* wcspbrk(const int* anonymous_var_nameX499, const int* anonymous_var_nameX500);
int* wcsrchr(const int* anonymous_var_nameX501, int anonymous_var_nameX502);
unsigned long  int wcsrtombs(char* anonymous_var_nameX503, const int** anonymous_var_nameX504, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX505);
unsigned long  int wcsspn(const int* anonymous_var_nameX506, const int* anonymous_var_nameX507);
int* wcsstr(const int* anonymous_var_nameX508, const int* anonymous_var_nameX509);
unsigned long  int wcsxfrm(int* anonymous_var_nameX510, const int* anonymous_var_nameX511, unsigned long  int __n);
int wctob(int anonymous_var_nameX512);
double wcstod(const int* anonymous_var_nameX513, int** anonymous_var_nameX514);
int* wcstok(int* anonymous_var_nameX515, const int* anonymous_var_nameX516, int** anonymous_var_nameX517);
long wcstol(const int* anonymous_var_nameX518, int** anonymous_var_nameX519, int anonymous_var_nameX520);
unsigned long  int wcstoul(const int* anonymous_var_nameX521, int** anonymous_var_nameX522, int anonymous_var_nameX523);
int* wmemchr(const int* anonymous_var_nameX524, int anonymous_var_nameX525, unsigned long  int __n);
int wmemcmp(const int* anonymous_var_nameX526, const int* anonymous_var_nameX527, unsigned long  int __n);
int* wmemcpy(int* anonymous_var_nameX528, const int* anonymous_var_nameX529, unsigned long  int __n);
int* wmemmove(int* anonymous_var_nameX530, const int* anonymous_var_nameX531, unsigned long  int __n);
int* wmemset(int* anonymous_var_nameX532, int anonymous_var_nameX533, unsigned long  int __n);
int wprintf(const int* anonymous_var_nameX534, ...);
int wscanf(const int* anonymous_var_nameX535, ...);
int wcswidth(const int* anonymous_var_nameX536, unsigned long  int __n);
int wcwidth(int anonymous_var_nameX537);
int vfwscanf(struct __sFILE* anonymous_var_nameX538, const int* anonymous_var_nameX539, __darwin_va_list anonymous_var_nameX540);
int vswscanf(const int* anonymous_var_nameX541, const int* anonymous_var_nameX542, __darwin_va_list anonymous_var_nameX543);
int vwscanf(const int* anonymous_var_nameX544, __darwin_va_list anonymous_var_nameX545);
float wcstof(const int* anonymous_var_nameX546, int** anonymous_var_nameX547);
long  double wcstold(const int* anonymous_var_nameX548, int** anonymous_var_nameX549);
long long wcstoll(const int* anonymous_var_nameX550, int** anonymous_var_nameX551, int anonymous_var_nameX552);
unsigned long  long wcstoull(const int* anonymous_var_nameX553, int** anonymous_var_nameX554, int anonymous_var_nameX555);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX556, const char** anonymous_var_nameX557, unsigned long  int anonymous_var_nameX558, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX559);
int* wcpcpy(int* anonymous_var_nameX560, const int* anonymous_var_nameX561);
int* wcpncpy(int* anonymous_var_nameX562, const int* anonymous_var_nameX563, unsigned long  int __n);
int* wcsdup(const int* anonymous_var_nameX564);
int wcscasecmp(const int* anonymous_var_nameX565, const int* anonymous_var_nameX566);
int wcsncasecmp(const int* anonymous_var_nameX567, const int* anonymous_var_nameX568, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX569, unsigned long  int __n);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX570, const int** anonymous_var_nameX571, unsigned long  int anonymous_var_nameX572, unsigned long  int __len, union anonymous_typeZ1* anonymous_var_nameX573);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX574, unsigned long  int* __len);
unsigned long  int wcslcat(int* anonymous_var_nameX575, const int* anonymous_var_nameX576, unsigned long  int __len);
unsigned long  int wcslcpy(int* anonymous_var_nameX577, const int* anonymous_var_nameX578, unsigned long  int __len);
void* sbrk(long incr);
void read_block(unsigned int blockno, void* buf);
void read_superblock();
void read_inode(unsigned int inum, struct dinode* dest);
void read_data(struct dinode* inode, unsigned int offset, unsigned char* buf, unsigned int size);
unsigned int path_lookup(const char* path);
unsigned int dir_lookup(struct dinode* parent, const char* name);
void dump_inode(unsigned int inum);
void virtio_blk_init();
static void* kalloc_page(unsigned long  long bump);
void* kalloc_pages(unsigned long  int npages);
void perror(char* str);
void panic(char* str);
struct cpu* mycpu();
unsigned long  long make_satp(unsigned long  long* pagetable);
void initlock(struct spinlock* lk, char* name);
void acquire(struct spinlock* lk);
void release(struct spinlock* lk);
int holding(struct spinlock* lk);
void push_off();
void pop_off();
void kinit();
void freerange(void* pa_start, void* pa_end);
void kfree(void* pa);
void* kalloc();
unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc);
int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm);
void dump_physical_memory(unsigned long  long pa, int count);
void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level);
void vmprint(unsigned long  long* pagetable);
void enable_mmu(unsigned long  long* kernel_pagetable);
void uart_rx_handler();
void uart_init();
void putc(char c);
void putchar(char c);
void putc_direct(char c);
void mmu_init();
void* walkaddr(unsigned long  long* pagetable, unsigned long  long va);
int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len);
void setting_user_pagetable(unsigned long  long* pagetable);
void alloc_prog();
void alloc_prog2();
void reset_watchdog();
void plic_init();
void trap_init();
void uart_rx_init();
void puts_direct(const char* s);
void plic_enable(int irq);
void trapvec();
void my_intr_off();
void my_intr_on();
void enable_timer_interrupts();
void disable_timer_interrupts();
void swtch(struct context* old, struct context* new);
void timer_reset();
void timer_handler();
void console_init();
void puts(const char* s);
unsigned long  int syscall_handler(unsigned long  int a0, unsigned long  int a1, unsigned long  int a2, unsigned long  int a3, unsigned long  int a4, unsigned long  int a5, unsigned long  int a6, unsigned long  int syscall_no);
void enter_user(unsigned long  int anonymous_var_nameX851, unsigned long  int anonymous_var_nameX852, unsigned long  int anonymous_var_nameX853, unsigned long  long anonymous_var_nameX854);
void timerinit();
int main();
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
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
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
void* malloc(unsigned long  int size);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
void free(void* ptr);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
char* strtok(char* s, const char* delim);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
// uniq global variable
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

// inline function
static inline unsigned long  long r_time(){
unsigned long  long x_1;
memset(&x_1, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_1));
    return x_1;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_7;
memset(&x_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_7));
    return x_7;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_8;
memset(&x_8, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_8));
    return x_8;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_9;
    x_9=r_sstatus();
    x_9|=(1L<<1);
    w_sstatus(x_9);
}
static inline void intr_off(){
    w_sstatus(r_sstatus()&~(1L<<1));
}
static inline void intr_off_direct(){
    __asm volatile("csrc sstatus, %0" : : "r"((1L<<1)));
}
static inline void intr_on_direct(){
    __asm volatile("csrs sstatus, %0" : : "r"((1L<<1)));
}
static inline int intr_get(){
unsigned long  long x_10;
    x_10=r_sstatus();
    return (x_10&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_60;
memset(&x_60, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_60));
    return x_60;
}
static inline void w_sie(unsigned long  long x){
    __asm volatile("csrw sie, %0" : : "r"(x));
}
static inline void w_stvec(unsigned long  long x){
    __asm volatile("csrw stvec, %0" : : "r"(x));
}
static inline unsigned long  long read_mtime(){
    return *(unsigned long  long*)33603576UL;
}
static inline void write_mtimecmp(unsigned long  long v){
    *(unsigned long  long*)33570816UL=v;
}
static inline unsigned long  long r_sip(){
unsigned long  long x_80;
memset(&x_80, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_80));
    return x_80;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_81;
memset(&sp_val_81, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_81): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_81;
}
static inline void sfence_vma(){
    __asm volatile("sfence.vma zero, zero");
}
static inline void w_satp(unsigned long  long x){
    __asm volatile("csrw satp, %0" : : "r" (x));
}
static inline void w_sepc(unsigned long  long x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}

// body function
void* sbrk(long incr){
void* __result_obj__1;
void* prev_0;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_0=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_0;
    return __result_obj__2;
}

static void* kalloc_page(unsigned long  long bump){
void* p_2;
void* __result_obj__3;
    p_2=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_2;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_3;
void* base_4;
unsigned long  int i_5;
void* pg_6;
void* __result_obj__4;
    bump_3=(unsigned long  long)_end2;
    base_4=((void*)0);
    for(    i_5=0    ;    i_5<npages    ;    i_5++    ){
        pg_6=kalloc_page(bump_3);
        if(        i_5==0        ) {
            base_4=pg_6;
        }
    }
    __result_obj__4 = base_4;
    return __result_obj__4;
}

void perror(char* str){
    puts(str);
}

void panic(char* str){
    puts("panic!");
}

struct cpu* mycpu(){
struct cpu* __result_obj__5;
    __result_obj__5 = &gCPU;
    return __result_obj__5;
}

void initlock(struct spinlock* lk, char* name){
    lk->name=name;
    lk->locked=0;
    lk->cpu=0;
}

void acquire(struct spinlock* lk){
    push_off();
    if(    holding(lk)    ) {
        panic("acquire");
    }
    while(    __sync_lock_test_and_set(&lk->locked,1)!=0    ) {
        ;
    }
    __sync_synchronize();
    lk->cpu=mycpu();
}

void release(struct spinlock* lk){
    if(    !holding(lk)    ) {
        panic("release");
    }
    lk->cpu=0;
    __sync_synchronize();
    __sync_lock_release(&lk->locked);
    pop_off();
}

int holding(struct spinlock* lk){
int r_11;
memset(&r_11, 0, sizeof(int));
    r_11=(lk->locked&&lk->cpu==mycpu());
    return r_11;
}

void push_off(){
int old_12;
    old_12=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_12;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_13;
    c_13=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_13->noff<1    ) {
        panic("pop_off");
    }
    c_13->noff-=1;
    if(    c_13->noff==0&&c_13->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_14;
p_14 = (void*)0;
    p_14=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_14+4096<=(char*)pa_end    ;    p_14+=4096    ){
        kfree(p_14);
    }
}

void kfree(void* pa){
struct run* r_15;
r_15 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_15=(struct run*)pa;
    acquire(&kmem.lock);
    r_15->next=kmem.freelist;
    kmem.freelist=r_15;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_16;
void* __result_obj__6;
r_16 = (void*)0;
    acquire(&kmem.lock);
    r_16=kmem.freelist;
    if(    r_16    ) {
        kmem.freelist=r_16->next;
    }
    release(&kmem.lock);
    if(    r_16    ) {
        memset((char*)r_16,5,4096);
    }
    __result_obj__6 = (void*)r_16;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_17;
unsigned long  long* pte_18;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    if(    va>=(1UL<<(9+9+9+12-1))    ) {
        puts("walk");
    }
    for(    level_17=2    ;    level_17>0    ;    level_17--    ){
        pte_18=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_17))))&511)];
        if(        *pte_18&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_18)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_18=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_19;
unsigned long  long last_20;
unsigned long  long* pte_21;
memset(&a_19, 0, sizeof(unsigned long  long));
memset(&last_20, 0, sizeof(unsigned long  long));
pte_21 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_19=va;
    last_20=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_21=walk(pagetable,a_19,1))==0        ) {
            return -1;
        }
        if(        *pte_21&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_21&1023,perm);
        }
        *pte_21=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_19==last_20        ) {
            break;
        }
        a_19+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_22;
int i_23;
    ptr_22=(unsigned int*)pa;
    for(    i_23=0    ;    i_23<count    ;    i_23++    ){
        if(        i_23%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_22+i_23));
        }
        printf("%p ",ptr_22[i_23]);
        if(        i_23%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_24;
unsigned long  long pte_25;
unsigned long  long pa_26;
unsigned long  long child_va_27;
int j_28;
    for(    i_24=0    ;    i_24<512    ;    i_24++    ){
        pte_25=pagetable[i_24];
        if(        pte_25&(1L<<0)        ) {
            pa_26=(((pte_25)>>10)<<12);
            child_va_27=va|((unsigned long  long)i_24<<(12+9*(2-level)));
            for(            j_28=0            ;            j_28<level            ;            j_28++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_27,pa_26,i_24,level);
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_25&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_25&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_25&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_25&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_25&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_26,child_va_27,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_29;
    satp_29=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_29));
    __asm volatile("sfence.vma zero, zero");
}

void uart_rx_handler(){
    last_key=*(((unsigned int*)(268435456UL+0)));
}

void uart_init(){
    *((unsigned char*)(268435456UL+1))|=1;
    plic_enable(10);
    __asm volatile("csrs sie, %0" :: "r"((1UL<<9)));
    __asm volatile("csrs sstatus, %0" :: "r"((1UL<<1)));
}

void putc(char c){
    while(    !(*((unsigned char*)(268435456UL+5))&32)    ) {
        ;
    }
    *((unsigned char*)(268435456UL+0))=c;
}

void putchar(char c){
    putc(c);
}

void putc_direct(char c){
    *(char*)268435456UL=c;
}

void mmu_init(){
unsigned long  long addr_30;
int i_31;
unsigned long  long va_32;
unsigned long  long pa_33;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_30=2147483648UL    ;    addr_30<2164260864UL    ;    addr_30+=4096    ){
        mappages(kernel_pagetable,addr_30,4096,addr_30,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_31=0    ;    i_31<8    ;    i_31++    ){
        va_32=268439552UL+i_31*4096UL;
        pa_33=va_32;
        mappages(kernel_pagetable,va_32,4096UL,pa_33,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_34;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_35;
void* __result_obj__12;
    pte_34=walk(pagetable,va,0);
    if(    pte_34==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_34&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_34&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_35=(((*pte_34)>>10)<<12);
    __result_obj__12 = (void*)(pa_35+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_36;
unsigned long  long off_37;
char* pa_38;
unsigned long  long n_39;
pa_38 = (void*)0;
    va0_36=(((dstva))&~(4096-1));
    off_37=dstva-va0_36;
    while(    len>0    ) {
        if(        (pa_38=walkaddr(pagetable,va0_36))==0        ) {
            return -1;
        }
        n_39=4096-off_37;
        if(        n_39>len        ) {
            n_39=len;
        }
        memcpy(pa_38+off_37,src,n_39);
        len-=n_39;
        src+=n_39;
        va0_36+=4096;
        off_37=0;
    }
    return 0;
}

void setting_user_pagetable(unsigned long  long* pagetable){
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)COMMON,4096,(unsigned long  long)COMMON,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(){
struct proc* result_40;
unsigned long  long* pagetable_41;
struct elfhdr* eh_42;
struct proghdr* ph_43;
unsigned long  long size_44;
unsigned long  long va_45;
int i_46;
void* pa_47;
char* pa_48;
unsigned long  long satp_val_49;
    result_40=calloc(1,sizeof(struct proc));
    pagetable_41=(unsigned long  long*)kalloc();
    memset(pagetable_41,0,4096);
    setting_user_pagetable(pagetable_41);
    result_40->pagetable=pagetable_41;
    eh_42=(struct elfhdr*)hello_elf;
    if(    eh_42->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_43=(struct proghdr*)(hello_elf+eh_42->phoff);
    size_44=ph_43->filesz;
    va_45=0;
    for(    i_46=0    ;    i_46<eh_42->phnum    ;    i_46++,ph_43++    ){
        if(        ph_43->type!=1        ) {
            continue;
        }
        for(        va_45=(((ph_43->vaddr))&~(4096-1))        ;        va_45<ph_43->vaddr+ph_43->memsz        ;        va_45+=4096        ){
            pa_47=kalloc();
            if(            !pa_47            ) {
                panic("kalloc");
            }
            memset(pa_47,0,4096);
            mappages(result_40->pagetable,va_45,4096,(unsigned long  long)pa_47,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_40->pagetable,ph_43->vaddr,hello_elf+ph_43->off,ph_43->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_48=kalloc();
    if(    !pa_48    ) {
        panic("kalloc");
    }
    memset(pa_48,0,4096);
    mappages(result_40->pagetable,va_45,4096,(unsigned long  long)pa_48,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_40->stack=(char*)va_45+4096;
    result_40->context.sp=va_45+4096;
    result_40->context.mepc=eh_42->entry;
    satp_val_49=((8L<<60)|(((unsigned long  long)result_40->pagetable)>>12));
    gProc[gNumProc++]=result_40;
}

void alloc_prog2(){
struct proc* result_50;
unsigned long  long* pagetable_51;
struct elfhdr* eh_52;
struct proghdr* ph_53;
unsigned long  long size_54;
unsigned long  long va_55;
int i_56;
void* pa_57;
char* pa_58;
unsigned long  long satp_val_59;
memset(&va_55, 0, sizeof(unsigned long  long));
    result_50=calloc(1,sizeof(struct proc));
    pagetable_51=(unsigned long  long*)kalloc();
    memset(pagetable_51,0,4096);
    setting_user_pagetable(pagetable_51);
    result_50->pagetable=pagetable_51;
    eh_52=(struct elfhdr*)hello2_elf;
    if(    eh_52->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_53=(struct proghdr*)(hello2_elf+eh_52->phoff);
    size_54=ph_53->filesz;
    for(    i_56=0    ;    i_56<eh_52->phnum    ;    i_56++,ph_53++    ){
        if(        ph_53->type!=1        ) {
            continue;
        }
        for(        va_55=(((ph_53->vaddr))&~(4096-1))        ;        va_55<ph_53->vaddr+ph_53->memsz        ;        va_55+=4096        ){
            pa_57=kalloc();
            if(            !pa_57            ) {
                panic("kalloc");
            }
            memset(pa_57,0,4096);
            mappages(result_50->pagetable,va_55,4096,(unsigned long  long)pa_57,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_50->pagetable,ph_53->vaddr,hello2_elf+ph_53->off,ph_53->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    __asm volatile("sfence.vma zero, zero");
    pa_58=kalloc();
    if(    !pa_58    ) {
        panic("kalloc");
    }
    memset(pa_58,0,4096);
    mappages(result_50->pagetable,va_55,4096,(unsigned long  long)pa_58,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_50->stack=(char*)va_55+4096;
    result_50->context.sp=va_55+4096;
    result_50->context.mepc=eh_52->entry;
    satp_val_59=((8L<<60)|(((unsigned long  long)result_50->pagetable)>>12));
    gProc[gNumProc++]=result_50;
}

void my_intr_off(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void my_intr_on(){
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void enable_timer_interrupts(){
unsigned long  int x_61;
memset(&x_61, 0, sizeof(unsigned long  int));
    x_61=r_sie();
    x_61|=(1UL<<5);
    w_sie(x_61);
    x_61=r_sstatus();
    x_61|=(1UL<<1);
    w_sstatus(x_61);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_62;
    next_62=r_time()+10000UL;
    w_stimecmp(next_62);
}

void timer_handler(){
struct proc* p_63;
struct context* tf_64;
struct proc* old_65;
struct proc* new__66;
    disable_timer_interrupts();
    p_63=gProc[gActiveProc];
    tf_64=(struct context*)TRAPFRAME;
    p_63->context=*tf_64;
    timer_reset();
    old_65=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    new__66=gProc[gActiveProc];
    if(    new__66!=old_65    ) {
        user_sp=new__66->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__66->pagetable)>>12));
        swtch(&old_65->context,&new__66->context);
    }
}

void console_init(){
    initlock(&console_lock,"console");
}

void puts(const char* s){
    acquire(&console_lock);
    while(    *s    ) {
        putchar(*s++);
    }
    release(&console_lock);
}

unsigned long  int syscall_handler(unsigned long  int a0, unsigned long  int a1, unsigned long  int a2, unsigned long  int a3, unsigned long  int a4, unsigned long  int a5, unsigned long  int a6, unsigned long  int syscall_no){
unsigned long  int arg0_67;
unsigned long  int arg1_68;
unsigned long  int arg2_69;
unsigned long  int arg3_70;
unsigned long  int arg4_71;
unsigned long  int arg5_72;
unsigned long  int arg6_73;
unsigned long  int arg_syscall_no_74;
unsigned long  long user_va_76;
struct proc* p_77;
int i_78;
char* user_char_pa_79;
    arg0_67=a0;
    arg1_68=a1;
    arg2_69=a2;
    arg3_70=a3;
    arg4_71=a4;
    arg5_72=a5;
    arg6_73=a6;
    arg_syscall_no_74=syscall_no;
    disable_timer_interrupts();
    switch (    syscall_no) {
        case 64:
        {
            char kernel_buf_75[256];
            memset(&kernel_buf_75, 0, sizeof(char)            *(256)            );
            user_va_76=arg0_67;
            p_77=gProc[gActiveProc];
            i_78=0;
            for(            i_78=0            ;            i_78<sizeof(kernel_buf_75)-1            ;            ++i_78            ){
                user_char_pa_79=walkaddr(p_77->pagetable,user_va_76+i_78);
                if(                user_char_pa_79==0                ) {
                    panic("walkaddr");
                }
                kernel_buf_75[i_78]=*user_char_pa_79;
                if(                kernel_buf_75[i_78]==0                ) {
                    break;
                }
            }
            kernel_buf_75[i_78]=0;
            puts((char*)kernel_buf_75);
            return 0;
        }
        default:
        panic("invalid syscall");
    }
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

int main(){
struct proc* p_82;
unsigned long  int usersp_83;
unsigned long  long usersatp_84;
unsigned long  int entry_85;
    come_heap_init(0, 0, 0);
    timerinit();
    trap_init();
    plic_init();
    plic_enable(10);
    w_stimecmp(r_time()+10000000);
    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    w_stimecmp(r_time()+10000000);
    alloc_prog();
    alloc_prog2();
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_82=gProc[gActiveProc];
    usersp_83=(unsigned long  long)(p_82->stack);
    usersatp_84=((8L<<60)|(((unsigned long  long)p_82->pagetable)>>12));
    entry_85=p_82->context.mepc;
    w_stimecmp(r_time()+100000);
    kernel_sp=read_s_sp();
    enter_user(entry_85,usersp_83,usersatp_84,10000UL);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_86;
int i_87;
void* __right_value2 = (void*)0;
    buf_86=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 150, "struct buffer*"))));
    buffer_append_format(buf_86,"%s %d\n",sname,sline);
    for(    i_87=gNumComeStackFrame-2    ;    i_87>=0    ;    i_87--    ){
        buffer_append_format(buf_86,"%s %d #%d\n",gComeStackFrameSName[i_87],gComeStackFrameSLine[i_87],gComeStackFrameID[i_87]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_86))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_88;
    for(    i_88=gNumComeStackFrame-1    ;    i_88>=0    ;    i_88--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_88],gComeStackFrameSLine[i_88],gComeStackFrameID[i_88]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__13;
    __result_obj__13 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__13 = come_decrement_ref_count(__result_obj__13, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__13;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_89;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_89=0    ;    i_89<gHeapPages.mSizePages    ;    i_89++    ){
        gHeapPages.mPages[i_89]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_90;
int n_91;
_Bool flag_92;
int i_93;
struct sMemHeaderTiny* it_94;
int n_95;
int i_96;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_90=gAllocMem;
        n_91=0;
        while(        it_90        ) {
            n_91++;
            flag_92=(_Bool)0;
            printf("#%d ",n_91);
            if(            it_90->class_name            ) {
                printf("%p (%s): ",(char*)it_90+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_90->class_name);
            }
            for(            i_93=0            ;            i_93<16            ;            i_93++            ){
                if(                it_90->sname[i_93]                ) {
                    printf("%s %d #%d, ",it_90->sname[i_93],it_90->sline[i_93],it_90->id[i_93]);
                    flag_92=(_Bool)1;
                }
            }
            if(            flag_92            ) {
                puts("");
            }
            it_90=it_90->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_91,gNumAlloc,gNumFree);
    }
    else {
        it_94=(struct sMemHeaderTiny*)gAllocMem;
        n_95=0;
        while(        it_94        ) {
            n_95++;
            if(            it_94->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_95,(char*)it_94+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_94->class_name,it_94->sname,it_94->sline);
            }
            it_94=it_94->next;
        }
        if(        n_95>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_95,gNumAlloc,gNumFree);
        }
    }
    for(    i_96=0    ;    i_96<gHeapPages.mSizePages    ;    i_96++    ){
        free(gHeapPages.mPages[i_96]);
    }
    free(gHeapPages.mPages);
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_97;
char* __result_obj__14;
struct sMemHeaderTiny* it_98;
char* __result_obj__15;
    if(    gComeDebugLib    ) {
        it_97=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_97->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_97);
            exit(2);
        }
        __result_obj__14 = it_97->class_name;
        return __result_obj__14;
    }
    else {
        it_98=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_98->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_98);
            exit(2);
        }
        __result_obj__15 = it_98->class_name;
        return __result_obj__15;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_99;
int i_100;
struct sMemHeaderTiny* it_101;
    if(    gComeDebugLib    ) {
        it_99=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_99->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_99->class_name        ) {
            printf("(%s): ",it_99->class_name);
        }
        for(        i_100=0        ;        i_100<16        ;        i_100++        ){
            if(            it_99->sname[i_100]            ) {
                printf("%s %d #%d, ",it_99->sname[i_100],it_99->sline[i_100],it_99->id[i_100]);
            }
        }
        puts("");
    }
    else {
        it_101=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_101->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_101->class_name,it_101->sname,it_101->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_102;
unsigned long  int* ref_count_103;
unsigned long  int* size2_104;
void* __result_obj__16;
    mem_102=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_103=(unsigned long  int*)mem_102;
    *ref_count_103=0;
    size2_104=(unsigned long  int*)(mem_102+sizeof(unsigned long  int));
    *size2_104=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__16 = mem_102+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__16;
}

void come_free(void* mem){
unsigned long  int* ref_count_105;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_105=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_105);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__17;
char* mem_106;
unsigned long  int* size_p_107;
unsigned long  int size_108;
void* result_109;
void* __result_obj__18;
    if(    !block    ) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    mem_106=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_107=(unsigned long  int*)(mem_106+sizeof(unsigned long  int));
    size_108=*size_p_107-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_109=come_calloc_v2(1,size_108,sname,sline,class_name);
    memcpy(result_109,block,size_108);
    __result_obj__18 = result_109;
    return __result_obj__18;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__19;
unsigned long  int* ref_count_110;
void* __result_obj__20;
    if(    mem==((void*)0)    ) {
        __result_obj__19 = mem;
        return __result_obj__19;
    }
    ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_110)++;
    __result_obj__20 = mem;
    return __result_obj__20;
}

void* come_print_ref_count(void* mem){
void* __result_obj__21;
unsigned long  int* ref_count_111;
void* __result_obj__22;
    if(    mem==((void*)0)    ) {
        __result_obj__21 = mem;
        return __result_obj__21;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_111);
    __result_obj__22 = mem;
    return __result_obj__22;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_112;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_112=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_112;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__23;
void* __result_obj__24;
unsigned long  int* ref_count_113;
unsigned long  int count_114;
void (*finalizer_115)(void*);
void* __result_obj__25;
void* __result_obj__26;
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__23 = mem;
            return __result_obj__23;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__24 = ((void*)0);
        return __result_obj__24;
    }
    ref_count_113=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_113)--;
    }
    count_114=*ref_count_113;
    if(    !no_free&&count_114<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_115=protocol_fun;
            finalizer_115(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__25 = ((void*)0);
        return __result_obj__25;
    }
    __result_obj__26 = mem;
    return __result_obj__26;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_116)(void*);
void (*finalizer_117)(void*);
void (*finalizer_118)(void*);
unsigned long  int* ref_count_119;
unsigned long  int count_120;
void (*finalizer_121)(void*);
void (*finalizer_122)(void*);
void (*finalizer_123)(void*);
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_116=protocol_fun;
                finalizer_116(protocol_obj);
            }
            finalizer_117=fun;
            finalizer_117(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_118=protocol_fun;
                finalizer_118(protocol_obj);
            }
        }
    }
    else {
        ref_count_119=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_119)--;
        }
        count_120=*ref_count_119;
        if(        !no_free&&count_120<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_121=protocol_fun;
                        finalizer_121(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_122=fun;
                        finalizer_122(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_123=protocol_fun;
                        finalizer_123(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__27;
int len_124;
void* __right_value4 = (void*)0;
char* result_125;
char* __result_obj__28;
    if(    str==((void*)0)    ) {
        __result_obj__27 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__27;
    }
    len_124=strlen(str)+1;
    result_125=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_124)), "/usr/local/include/comelang.h", 914, "char*"));
    strncpy(result_125,str,len_124);
    __result_obj__28 = (char*)come_increment_ref_count(result_125);
    (result_125 = come_decrement_ref_count(result_125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__28 = come_decrement_ref_count(__result_obj__28, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__28;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__29;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2871, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__29 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__30;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2881, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__30 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__30;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__31;
void* __right_value7 = (void*)0;
struct buffer* result_126;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__32;
    if(    self==((void*)0)    ) {
        __result_obj__31 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__31;
    }
    result_126=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2901, "struct buffer*"));
    result_126->size=self->size;
    __dec_obj3=result_126->buf,
    result_126->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2904, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_126->len=self->len;
    memcpy(result_126->buf,self->buf,self->len);
    __result_obj__32 = (struct buffer*)come_increment_ref_count(result_126);
    come_call_finalizer(buffer_finalize, result_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result_obj__33;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__33 = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__33;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__34;
void* __right_value11 = (void*)0;
char* old_buf_127;
int old_len_128;
int new_size_129;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__35;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__34 = self;
        return __result_obj__34;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_127=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2952, "char*"));
        memcpy(old_buf_127,self->buf,self->size);
        old_len_128=self->len;
        new_size_129=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_129)), "/usr/local/include/comelang.h", 2956, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_127,old_len_128);
        self->buf[old_len_128]=0;
        self->size=new_size_129;
        (old_buf_127 = come_decrement_ref_count(old_buf_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__35 = self;
    return __result_obj__35;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__36;
void* __right_value13 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__37;
    if(    self==((void*)0)    ) {
        __result_obj__36 = ((void*)0);
        return __result_obj__36;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2975, "char*"));
        old_len_131=self->len;
        new_size_132=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_132)), "/usr/local/include/comelang.h", 2979, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        (old_buf_130 = come_decrement_ref_count(old_buf_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__37 = self;
    return __result_obj__37;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__38;
int size_133;
void* __right_value15 = (void*)0;
char* old_buf_134;
int old_len_135;
int new_size_136;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__39;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__38 = self;
        return __result_obj__38;
    }
    size_133=strlen(mem);
    if(    self->len+size_133+1+1>=self->size    ) {
        old_buf_134=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3001, "char*"));
        memcpy(old_buf_134,self->buf,self->size);
        old_len_135=self->len;
        new_size_136=(self->size+size_133+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_136)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_134,old_len_135);
        self->buf[old_len_135]=0;
        self->size=new_size_136;
        (old_buf_134 = come_decrement_ref_count(old_buf_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_133);
    self->len+=size_133;
    self->buf[self->len]=0;
    __result_obj__39 = self;
    return __result_obj__39;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__40;
va_list args_137;
char* result_138;
int len_139;
struct buffer* __result_obj__41;
void* __right_value17 = (void*)0;
char* mem_140;
int size_141;
void* __right_value18 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__42;
result_138 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__40 = self;
        return __result_obj__40;
    }
    __builtin_va_start(args_137,msg);
    len_139=vasprintf(&result_138,msg,args_137);
    __builtin_va_end(args_137);
    if(    len_139<0    ) {
        __result_obj__41 = self;
        return __result_obj__41;
    }
    mem_140=(char*)come_increment_ref_count(__builtin_string(result_138));
    size_141=strlen(mem_140);
    if(    self->len+size_141+1+1>=self->size    ) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3049, "char*"));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_144)), "/usr/local/include/comelang.h", 3053, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_140,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    free(result_138);
    __result_obj__42 = self;
    (mem_140 = come_decrement_ref_count(mem_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__42;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__43;
int size_145;
void* __right_value20 = (void*)0;
char* old_buf_146;
int old_len_147;
int new_size_148;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__44;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__43 = self;
        return __result_obj__43;
    }
    size_145=strlen(mem)+1;
    if(    self->len+size_145+1+1+1>=self->size    ) {
        old_buf_146=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_148)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
        (old_buf_146 = come_decrement_ref_count(old_buf_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__44 = self;
    return __result_obj__44;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__45;
int* mem_149;
int size_150;
void* __right_value22 = (void*)0;
char* old_buf_151;
int old_len_152;
int new_size_153;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__46;
    if(    self==((void*)0)    ) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_149=&value;
    size_150=sizeof(int);
    if(    self->len+size_150+1+1>=self->size    ) {
        old_buf_151=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3102, "char*"));
        memcpy(old_buf_151,self->buf,self->size);
        old_len_152=self->len;
        new_size_153=(self->size+size_150+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_153)), "/usr/local/include/comelang.h", 3106, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_151,old_len_152);
        self->buf[old_len_152]=0;
        self->size=new_size_153;
        (old_buf_151 = come_decrement_ref_count(old_buf_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_149,size_150);
    self->len+=size_150;
    self->buf[self->len]=0;
    __result_obj__46 = self;
    return __result_obj__46;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_154;
int size_155;
void* __right_value24 = (void*)0;
char* old_buf_156;
int old_len_157;
int new_size_158;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__47;
    mem_154=&value;
    size_155=sizeof(long);
    if(    self->len+size_155+1+1>=self->size    ) {
        old_buf_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3125, "char*"));
        memcpy(old_buf_156,self->buf,self->size);
        old_len_157=self->len;
        new_size_158=(self->size+size_155+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_158)), "/usr/local/include/comelang.h", 3129, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_156,old_len_157);
        self->buf[old_len_157]=0;
        self->size=new_size_158;
        (old_buf_156 = come_decrement_ref_count(old_buf_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_154,size_155);
    self->len+=size_155;
    self->buf[self->len]=0;
    __result_obj__47 = self;
    return __result_obj__47;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__48;
short* mem_159;
int size_160;
void* __right_value26 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = ((void*)0);
        return __result_obj__48;
    }
    mem_159=&value;
    size_160=sizeof(short);
    if(    self->len+size_160+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3152, "char*"));
        memcpy(old_buf_161,self->buf,self->size);
        old_len_162=self->len;
        new_size_163=(self->size+size_160+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3156, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_159,size_160);
    self->len+=size_160;
    self->buf[self->len]=0;
    __result_obj__49 = self;
    return __result_obj__49;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__50;
int len_164;
int new_size_165;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_166;
struct buffer* __result_obj__51;
    if(    self==((void*)0)    ) {
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    len_164=self->len;
    len_164=(len_164+3)&~3;
    if(    len_164>=self->size    ) {
        new_size_165=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_165)), "/usr/local/include/comelang.h", 3180, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_165;
    }
    for(    i_166=self->len    ;    i_166<len_164    ;    i_166++    ){
        self->buf[i_166]=0;
    }
    self->len=len_164;
    __result_obj__51 = self;
    return __result_obj__51;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__52;
struct buffer* __result_obj__53;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3210, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__52 = (struct buffer*)come_increment_ref_count(result_167);
        come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__52;
    }
    buffer_append_str(result_167,self);
    __result_obj__53 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

char* buffer_to_string(struct buffer* self){
void* __right_value31 = (void*)0;
char* __result_obj__54;
void* __right_value32 = (void*)0;
char* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value31=__builtin_string(""))));
        (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__54;
    }
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(self->buf))));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__56;
    __result_obj__56 = self->buf;
    return __result_obj__56;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__57;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3237, "struct buffer*"))));
    buffer_append(result_168,self,sizeof(char)*len);
    __result_obj__57 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_169;
int i_170;
struct buffer* __result_obj__58;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3244, "struct buffer*"))));
    for(    i_170=0    ;    i_170<len    ;    i_170++    ){
        buffer_append(result_169,self[i_170],strlen(self[i_170]));
    }
    __result_obj__58 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__59;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3253, "struct buffer*"))));
    buffer_append(result_171,(char*)self,sizeof(short)*len);
    __result_obj__59 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_172;
struct buffer* __result_obj__60;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3260, "struct buffer*"))));
    buffer_append(result_172,(char*)self,sizeof(int)*len);
    __result_obj__60 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__61;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_173,(char*)self,sizeof(long)*len);
    __result_obj__61 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__61;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_174;
struct buffer* __result_obj__62;
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_174,(char*)self,sizeof(float)*len);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_175;
struct buffer* __result_obj__63;
    result_175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_175,(char*)self,sizeof(double)*len);
    __result_obj__63 = (struct buffer*)come_increment_ref_count(result_175);
    come_call_finalizer(buffer_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

char* buffer_printable(struct buffer* self){
int len_176;
void* __right_value47 = (void*)0;
char* result_177;
int n_178;
int i_179;
unsigned char c_180;
char* __result_obj__64;
    len_176=self->len;
    result_177=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_176*2+1)), "/usr/local/include/comelang.h", 3289, "char*"));
    n_178=0;
    for(    i_179=0    ;    i_179<len_176    ;    i_179++    ){
        c_180=self->buf[i_179];
        if(        (c_180>=0&&c_180<32)||c_180==127        ) {
            result_177[n_178++]=94;
            result_177[n_178++]=c_180+65-1;
        }
        else if(        c_180>127        ) {
            result_177[n_178++]=63;
        }
        else {
            result_177[n_178++]=c_180;
        }
    }
    result_177[n_178]=0;
    __result_obj__64 = (char*)come_increment_ref_count(result_177);
    (result_177 = come_decrement_ref_count(result_177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__64;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_181;
struct list$1char$* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0    ;    i_181<num_value    ;    i_181++    ){
        list$1char$_push_back(self,values[i_181]);
    }
    __result_obj__66 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_183;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_184;
struct list$1char$* __result_obj__65;
    if(    self->len==0    ) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$*"))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1    ) {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$*"))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$*"))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_185;
struct list_item$1char$* prev_it_186;
    it_185=self->head;
    while(    it_185!=((void*)0)    ) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1char$* __result_obj__67;
    __result_obj__67 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value52=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3330, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_187;
struct list$1char$p* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0    ;    i_187<num_value    ;    i_187++    ){
        list$1char$p_push_back(self,values[i_187]);
    }
    __result_obj__69 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_189;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_190;
struct list$1char$p* __result_obj__68;
    if(    self->len==0    ) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$p*"))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1    ) {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$p*"))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$p*"))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_191;
struct list_item$1char$p* prev_it_192;
    it_191=self->head;
    while(    it_191!=((void*)0)    ) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value53 = (void*)0;
void* __right_value57 = (void*)0;
struct list$1char$p* __result_obj__70;
    __result_obj__70 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value57=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3335, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_193;
struct list$1short$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0    ;    i_193<num_value    ;    i_193++    ){
        list$1short$_push_back(self,values[i_193]);
    }
    __result_obj__72 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_195;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_196;
struct list$1short$* __result_obj__71;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1short$*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1short$*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1short$*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_197;
struct list_item$1short$* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1short$* __result_obj__73;
    __result_obj__73 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value62=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3340, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_199;
struct list$1int$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0    ;    i_199<num_value    ;    i_199++    ){
        list$1int$_push_back(self,values[i_199]);
    }
    __result_obj__75 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_201;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_202;
struct list$1int$* __result_obj__74;
    if(    self->len==0    ) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1int$*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1    ) {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1int$*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1int$*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_203;
struct list_item$1int$* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value67 = (void*)0;
struct list$1int$* __result_obj__76;
    __result_obj__76 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value67=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3345, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_205;
struct list$1long$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0    ;    i_205<num_value    ;    i_205++    ){
        list$1long$_push_back(self,values[i_205]);
    }
    __result_obj__78 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_207;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_208;
struct list$1long$* __result_obj__77;
    if(    self->len==0    ) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1long$*"))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1    ) {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1long$*"))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1long$*"))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_209;
struct list_item$1long$* prev_it_210;
    it_209=self->head;
    while(    it_209!=((void*)0)    ) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value72 = (void*)0;
struct list$1long$* __result_obj__79;
    __result_obj__79 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value72=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3350, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_211;
struct list$1float$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0    ;    i_211<num_value    ;    i_211++    ){
        list$1float$_push_back(self,values[i_211]);
    }
    __result_obj__81 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_213;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_214;
struct list$1float$* __result_obj__80;
    if(    self->len==0    ) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1float$*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1    ) {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1float$*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1float$*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_215;
struct list_item$1float$* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1float$* __result_obj__82;
    __result_obj__82 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value77=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3355, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_217;
struct list$1double$* __result_obj__84;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_217=0    ;    i_217<num_value    ;    i_217++    ){
        list$1double$_push_back(self,values[i_217]);
    }
    __result_obj__84 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_219;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_220;
struct list$1double$* __result_obj__83;
    if(    self->len==0    ) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1double$*"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1    ) {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1double$*"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1double$*"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_221;
struct list_item$1double$* prev_it_222;
    it_221=self->head;
    while(    it_221!=((void*)0)    ) {
        prev_it_222=it_221;
        it_221=it_221->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1double$* __result_obj__85;
    __result_obj__85 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value82=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3360, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__86;
int len_223;
void* __right_value84 = (void*)0;
char* result_224;
char* __result_obj__87;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__86;
    }
    len_223=strlen(self)+strlen(right);
    result_224=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_223+1)), "/usr/local/include/comelang.h", 3589, "char*"));
    strncpy(result_224,self,len_223+1);
    strncat(result_224,right,len_223+1);
    __result_obj__87 = (char*)come_increment_ref_count(result_224);
    (result_224 = come_decrement_ref_count(result_224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__87 = come_decrement_ref_count(__result_obj__87, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__87;
}

char* string_operator_add(char* self, char* right){
void* __right_value85 = (void*)0;
char* __result_obj__88;
int len_225;
void* __right_value86 = (void*)0;
char* result_226;
char* __result_obj__89;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__88;
    }
    len_225=strlen(self)+strlen(right);
    result_226=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_225+1)), "/usr/local/include/comelang.h", 3604, "char*"));
    strncpy(result_226,self,len_225+1);
    strncat(result_226,right,len_225+1);
    __result_obj__89 = (char*)come_increment_ref_count(result_226);
    (result_226 = come_decrement_ref_count(result_226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__89 = come_decrement_ref_count(__result_obj__89, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__89;
}

char* charp_operator_mult(char* self, int right){
void* __right_value87 = (void*)0;
char* __result_obj__90;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_227;
int i_228;
void* __right_value90 = (void*)0;
char* __result_obj__91;
    if(    self==((void*)0)    ) {
        __result_obj__90 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__90 = come_decrement_ref_count(__result_obj__90, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__90;
    }
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3617, "struct buffer*"))));
    for(    i_228=0    ;    i_228<right    ;    i_228++    ){
        buffer_append_str(buf_227,self);
    }
    __result_obj__91 = (char*)come_increment_ref_count(((char*)(__right_value90=buffer_to_string(buf_227))));
    come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__91;
}

char* string_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__92;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_229;
int i_230;
void* __right_value94 = (void*)0;
char* __result_obj__93;
    if(    self==((void*)0)    ) {
        __result_obj__92 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__92;
    }
    buf_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_230=0    ;    i_230<right    ;    i_230++    ){
        buffer_append_str(buf_229,self);
    }
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_229))));
    come_call_finalizer(buffer_finalize, buf_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_231;
int i_232;
    result_231=(_Bool)0;
    for(    i_232=0    ;    i_232<len    ;    i_232++    ){
        if(        strncmp(self[i_232],str,strlen(self[i_232]))==0        ) {
            result_231=(_Bool)1;
            break;
        }
    }
    return result_231;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_233;
char* p_234;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_233=0;
    p_234=value;
    while(    *p_234    ) {
        result_233+=(*p_234);
        p_234++;
    }
    return result_233;
}

unsigned int string_get_hash_key(char* value){
int result_235;
char* p_236;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_235=0;
    p_236=value;
    while(    *p_236    ) {
        result_235+=(*p_236);
        p_236++;
    }
    return result_235;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xisalpha(char c){
_Bool result_237;
    result_237=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_237;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_238;
    result_238=(c>=32&&c<=126);
    return result_238;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value95 = (void*)0;
char* __result_obj__94;
int len_239;
void* __right_value96 = (void*)0;
char* result_240;
int i_241;
char* __result_obj__95;
    if(    str==((void*)0)    ) {
        __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__94;
    }
    len_239=strlen(str);
    result_240=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_239+1)), "/usr/local/include/comelang.h", 3899, "char*"));
    for(    i_241=0    ;    i_241<len_239    ;    i_241++    ){
        result_240[i_241]=str[len_239-i_241-1];
    }
    result_240[len_239]=0;
    __result_obj__95 = (char*)come_increment_ref_count(result_240);
    (result_240 = come_decrement_ref_count(result_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__95;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value97 = (void*)0;
char* __result_obj__96;
int len_242;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
char* __result_obj__97;
void* __right_value100 = (void*)0;
char* __result_obj__98;
void* __right_value101 = (void*)0;
char* __result_obj__99;
void* __right_value102 = (void*)0;
char* result_243;
char* __result_obj__100;
    if(    str==((void*)0)    ) {
        __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__96;
    }
    len_242=strlen(str);
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head>tail    ) {
        __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value99=charp_reverse(((char*)(__right_value98=charp_substring(str,tail,head)))))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__97;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    if(    head==tail    ) {
        __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__98;
    }
    if(    tail-head+1<1    ) {
        __result_obj__99 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__99 = come_decrement_ref_count(__result_obj__99, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__99;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3945, "char*"));
    memcpy(result_243,str+head,tail-head);
    result_243[tail-head]=0;
    __result_obj__100 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__100;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value103 = (void*)0;
char* __result_obj__101;
int len_244;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
char* __result_obj__102;
void* __right_value106 = (void*)0;
char* __result_obj__103;
void* __right_value107 = (void*)0;
char* __result_obj__104;
void* __right_value108 = (void*)0;
char* result_245;
char* __result_obj__105;
    if(    str==((void*)0)    ) {
        __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__101;
    }
    len_244=strlen(str);
    if(    head<0    ) {
        head+=len_244;
    }
    if(    tail<0    ) {
        tail+=len_244+1;
    }
    if(    head>tail    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value105=charp_reverse(((char*)(__right_value104=charp_substring(str,tail,head)))))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_244    ) {
        tail=len_244;
    }
    if(    head==tail    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    if(    tail-head+1<1    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    result_245=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3988, "char*"));
    memcpy(result_245,str+head,tail-head);
    result_245[tail-head]=0;
    __result_obj__105 = (char*)come_increment_ref_count(result_245);
    (result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value109 = (void*)0;
char* __result_obj__106;
int len_246;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __result_obj__107;
void* __right_value112 = (void*)0;
char* __result_obj__108;
void* __right_value113 = (void*)0;
char* __result_obj__109;
void* __right_value114 = (void*)0;
char* result_247;
char* __result_obj__110;
    if(    str==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    len_246=strlen(str);
    if(    head<0    ) {
        head+=len_246;
    }
    if(    tail<0    ) {
        tail+=len_246+1;
    }
    if(    head>tail    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value111=charp_reverse(((char*)(__right_value110=charp_substring(str,tail,head)))))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_246    ) {
        tail=len_246;
    }
    if(    head==tail    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    if(    tail-head+1<1    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    result_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4031, "char*"));
    memcpy(result_247,str+head,tail-head);
    result_247[tail-head]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

char* xsprintf(char* msg, ...){
void* __right_value115 = (void*)0;
char* __result_obj__111;
va_list args_248;
char* result_249;
int len_250;
void* __right_value116 = (void*)0;
char* __result_obj__112;
void* __right_value117 = (void*)0;
char* result2_251;
char* __result_obj__113;
result_249 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    __builtin_va_start(args_248,msg);
    len_250=vasprintf(&result_249,msg,args_248);
    __builtin_va_end(args_248);
    if(    len_250<0    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    result2_251=(char*)come_increment_ref_count(__builtin_string(result_249));
    free(result_249);
    __result_obj__113 = (char*)come_increment_ref_count(result2_251);
    (result2_251 = come_decrement_ref_count(result2_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value118 = (void*)0;
char* __result_obj__114;
int len_252;
void* __right_value119 = (void*)0;
char* __result_obj__115;
void* __right_value120 = (void*)0;
char* __result_obj__116;
void* __right_value121 = (void*)0;
char* result_253;
char* __result_obj__117;
    if(    str==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_252=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(str))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    head<0    ) {
        head+=len_252;
    }
    if(    tail<0    ) {
        tail+=len_252+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    tail>=len_252    ) {
        tail=len_252;
    }
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_252-(tail-head)+1)), "/usr/local/include/comelang.h", 4093, "char*"));
    memcpy(result_253,str,head);
    memcpy(result_253+head,str+tail,len_252-tail);
    result_253[len_252-(tail-head)]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__118 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_254;
struct list_item$1char$ph* prev_it_255;
    it_254=self->head;
    while(    it_254!=((void*)0)    ) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_259;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_260;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_261;
char* __dec_obj15;
struct list$1char$ph* __result_obj__120;
    if(    self->len==0    ) {
        litem_259=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1100, "struct list_item$1char$ph*"))));
        litem_259->prev=((void*)0);
        litem_259->next=((void*)0);
        __dec_obj13=litem_259->item,
        litem_259->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_259;
        self->head=litem_259;
    }
    else if(    self->len==1    ) {
        litem_260=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1110, "struct list_item$1char$ph*"))));
        litem_260->prev=self->head;
        litem_260->next=((void*)0);
        __dec_obj14=litem_260->item,
        litem_260->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_260;
        self->head->next=litem_260;
    }
    else {
        litem_261=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1120, "struct list_item$1char$ph*"))));
        litem_261->prev=self->tail;
        litem_261->next=((void*)0);
        __dec_obj15=litem_261->item,
        litem_261->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_261;
        self->tail=litem_261;
    }
    self->len++;
    __result_obj__120 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__120;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* __result_obj__119;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* result_256;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct buffer* str_257;
int i_258;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1char$ph* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__119 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value123=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__119;
    }
    result_256=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4109, "struct list$1char$ph*"))));
    str_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4111, "struct buffer*"))));
    for(    i_258=0    ;    i_258<charp_length(self)    ;    i_258++    ){
        if(        self[i_258]==c        ) {
            list$1char$ph_push_back(result_256,(char*)come_increment_ref_count(__builtin_string(str_257->buf)));
            buffer_reset(str_257);
        }
        else {
            buffer_append_char(str_257,self[i_258]);
        }
    }
    if(    buffer_length(str_257)!=0    ) {
        list$1char$ph_push_back(result_256,(char*)come_increment_ref_count(__builtin_string(str_257->buf)));
    }
    __result_obj__121 = (struct list$1char$ph*)come_increment_ref_count(result_256);
    come_call_finalizer(list$1char$ph$p_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value133 = (void*)0;
char* __result_obj__122;
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value133=xsprintf(msg,self))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__123;
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* charp_printable(char* str){
int len_262;
void* __right_value135 = (void*)0;
char* result_263;
int n_264;
int i_265;
char c_266;
char* __result_obj__124;
    len_262=charp_length(str);
    result_263=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_262*2+1)), "/usr/local/include/comelang.h", 4143, "char*"));
    n_264=0;
    for(    i_265=0    ;    i_265<len_262    ;    i_265++    ){
        c_266=str[i_265];
        if(        (c_266>=0&&c_266<32)||c_266==127        ) {
            result_263[n_264++]=94;
            result_263[n_264++]=c_266+65-1;
        }
        else {
            result_263[n_264++]=c_266;
        }
    }
    result_263[n_264]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_263);
    (result_263 = come_decrement_ref_count(result_263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value136 = (void*)0;
char* __result_obj__125;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct buffer* result_267;
char* p_268;
char* p2_269;
void* __right_value139 = (void*)0;
char* __result_obj__126;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value136=__builtin_string(self))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4171, "struct buffer*"))));
    p_268=self;
    while(    (_Bool)1    ) {
        p2_269=strstr(p_268,str);
        if(        p2_269==((void*)0)        ) {
            p2_269=p_268;
            while(            *p2_269            ) {
                p2_269++;
            }
            buffer_append(result_267,p_268,p2_269-p_268);
            break;
        }
        buffer_append(result_267,p_268,p2_269-p_268);
        buffer_append_str(result_267,replace);
        p_268=p2_269+strlen(str);
    }
    __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value139=buffer_to_string(result_267))));
    come_call_finalizer(buffer_finalize, result_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* xbasename(char* path){
void* __right_value140 = (void*)0;
char* __result_obj__127;
char* p_270;
void* __right_value141 = (void*)0;
char* __result_obj__128;
void* __right_value142 = (void*)0;
char* __result_obj__129;
void* __right_value143 = (void*)0;
char* __result_obj__130;
    if(    path==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    p_270=path+strlen(path);
    while(    p_270>=path    ) {
        if(        *p_270==47        ) {
            break;
        }
        else {
            p_270--;
        }
    }
    if(    p_270<path    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(path))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    else {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(p_270+1))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* xnoextname(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__131;
void* __right_value145 = (void*)0;
char* path2_271;
char* p_272;
void* __right_value146 = (void*)0;
char* __result_obj__132;
void* __right_value147 = (void*)0;
char* __result_obj__133;
void* __right_value148 = (void*)0;
char* __result_obj__134;
    if(    path==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    path2_271=(char*)come_increment_ref_count(xbasename(path));
    p_272=path2_271+strlen(path2_271);
    while(    p_272>=path2_271    ) {
        if(        *p_272==46        ) {
            break;
        }
        else {
            p_272--;
        }
    }
    if(    p_272<path2_271    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path2_271))));
        (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    else {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value147=charp_substring(path2_271,0,p_272-path2_271))));
        (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

char* xextname(char* path){
void* __right_value149 = (void*)0;
char* __result_obj__135;
char* p_273;
void* __right_value150 = (void*)0;
char* __result_obj__136;
void* __right_value151 = (void*)0;
char* __result_obj__137;
void* __right_value152 = (void*)0;
char* __result_obj__138;
    if(    path==((void*)0)    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    p_273=path+strlen(path);
    while(    p_273>=path    ) {
        if(        *p_273==46        ) {
            break;
        }
        else {
            p_273--;
        }
    }
    if(    p_273<path    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    else {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(p_273+1))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__139;
void* __right_value154 = (void*)0;
char* __result_obj__140;
    if(    self    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    else {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__141;
void* __right_value156 = (void*)0;
char* __result_obj__142;
    if(    self    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    else {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
}

char* char_to_string(char self){
void* __right_value157 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%c",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* short_to_string(short self){
void* __right_value158 = (void*)0;
char* __result_obj__144;
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%d",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* int_to_string(int self){
void* __right_value159 = (void*)0;
char* __result_obj__145;
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* long_to_string(long self){
void* __right_value160 = (void*)0;
char* __result_obj__146;
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%ld",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value161 = (void*)0;
char* __result_obj__147;
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* float_to_string(float self){
void* __right_value162 = (void*)0;
char* __result_obj__148;
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%f",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* double_to_string(double self){
void* __right_value163 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%lf",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* string_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__150;
void* __right_value165 = (void*)0;
char* __result_obj__151;
    if(    self==((void*)0)    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__152;
void* __right_value167 = (void*)0;
char* __result_obj__153;
    if(    self==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__154;
void* __right_value169 = (void*)0;
char* __result_obj__155;
    if(    self==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    puts(self);
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* charp_print(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__156;
void* __right_value171 = (void*)0;
char* __result_obj__157;
    if(    self==((void*)0)    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    printf("%s",self);
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* charp_printf(char* self, ...){
void* __right_value172 = (void*)0;
char* __result_obj__158;
char* msg2_274;
va_list args_275;
void* __right_value173 = (void*)0;
char* __result_obj__159;
msg2_274 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    __builtin_va_start(args_275,self);
    vasprintf(&msg2_274,self,args_275);
    __builtin_va_end(args_275);
    printf("%s",msg2_274);
    free(msg2_274);
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_276;
    for(    i_276=0    ;    i_276<self    ;    i_276++    ){
        block(parent,i_276);
    }
}

void* malloc(unsigned long  int size){
void* __result_obj__160;
struct mem_block* current_277;
struct mem_block* prev_278;
void* __result_obj__161;
struct mem_block* new_mem_279;
void* __result_obj__162;
void* __result_obj__163;
    if(    size==0    ) {
        __result_obj__160 = ((void*)0);
        return __result_obj__160;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_277=free_list;
    prev_278=((void*)0);
    while(    current_277!=((void*)0)    ) {
        if(        current_277->size>=size        ) {
            if(            prev_278==((void*)0)            ) {
                free_list=current_277->next;
            }
            else {
                prev_278->next=current_277->next;
            }
            __result_obj__161 = (void*)(current_277+1);
            return __result_obj__161;
        }
        prev_278=current_277;
        current_277=current_277->next;
    }
    new_mem_279=(struct mem_block*)sbrk(size);
    if(    new_mem_279==(void*)-1    ) {
        __result_obj__162 = ((void*)0);
        return __result_obj__162;
    }
    new_mem_279->size=size;
    new_mem_279->next=((void*)0);
    __result_obj__163 = (void*)(new_mem_279+1);
    return __result_obj__163;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_280;
void* __result_obj__164;
void* ptr_281;
void* __result_obj__165;
    total_size_280=nmemb*size;
    if(    total_size_280==0    ) {
        __result_obj__164 = ((void*)0);
        return __result_obj__164;
    }
    ptr_281=malloc(total_size_280);
    if(    ptr_281!=((void*)0)    ) {
        memset(ptr_281,0,total_size_280);
    }
    __result_obj__165 = ptr_281;
    return __result_obj__165;
}

void free(void* ptr){
struct mem_block* block_282;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_282=(struct mem_block*)ptr-1;
    block_282->next=free_list;
    free_list=block_282;
}

char* strdup(const char* s){
char* s2_283;
unsigned long  int len_284;
char* p_285;
char* __result_obj__166;
    s2_283=s;
    len_284=strlen(s2_283)+1;
    p_285=malloc(len_284);
    if(    p_285    ) {
        memcpy(p_285,s2_283,len_284);
    }
    __result_obj__166 = p_285;
    return __result_obj__166;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__167;
char* __result_obj__168;
char* __result_obj__169;
    if(    !*needle    ) {
        __result_obj__167 = (char*)haystack;
        return __result_obj__167;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_286=haystack;
        const char* n_287=needle;
        while(        *h_286&&*n_287&&(*h_286==*n_287)        ) {
            h_286++;
            n_287++;
        }
        if(        !*n_287        ) {
            __result_obj__168 = (char*)haystack;
            return __result_obj__168;
        }
    }
    __result_obj__169 = ((void*)0);
    return __result_obj__169;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_288;
int i_289;
void* __result_obj__170;
    cdst_288=(char*)dst;
    for(    i_289=0    ;    i_289<n    ;    i_289++    ){
        cdst_288[i_289]=c;
    }
    __result_obj__170 = dst;
    return __result_obj__170;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_290;
const unsigned char* s2_291;
memset(&s1_290, 0, sizeof(const unsigned char*));
memset(&s2_291, 0, sizeof(const unsigned char*));
    s1_290=v1;
    s2_291=v2;
    while(    n-->0    ) {
        if(        *s1_290!=*s2_291        ) {
            return *s1_290-*s2_291;
        }
        s1_290++,s2_291++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_292;
char* d_293;
void* __result_obj__171;
void* __result_obj__172;
s_292 = (void*)0;
d_293 = (void*)0;
    if(    n==0    ) {
        __result_obj__171 = dst;
        return __result_obj__171;
    }
    s_292=src;
    d_293=dst;
    if(    s_292<d_293&&s_292+n>d_293    ) {
        s_292+=n;
        d_293+=n;
        while(        n-->0        ) {
            *--d_293=*--s_292;
        }
    }
    else {
        while(        n-->0        ) {
            *d_293++=*s_292++;
        }
    }
    __result_obj__172 = dst;
    return __result_obj__172;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__173;
    __result_obj__173 = memmove(dst,src,n);
    return __result_obj__173;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_294;
char* __result_obj__174;
os_294 = (void*)0;
    os_294=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__174 = os_294;
    return __result_obj__174;
}

int strlen(const char* s){
int n_295;
memset(&n_295, 0, sizeof(int));
    for(    n_295=0    ;    s[n_295]    ;    n_295++    ){
        ;
    }
    return n_295;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_296;
char* __result_obj__175;
    d_296=dest;
    while(    *d_296    ) {
        d_296++;
    }
    while(    n--&&*src    ) {
        *d_296++=*src++;
    }
    *d_296=0;
    __result_obj__175 = dest;
    return __result_obj__175;
}

char* strtok(char* s, const char* delim){
static char* next_297;
char* start_298;
char* p_299;
char* __result_obj__176;
int is_delim_301;
char* __result_obj__177;
int is_delim_303;
char* __result_obj__178;
next_297 = (void*)0;
start_298 = (void*)0;
p_299 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_297=s;
    }
    if(    next_297==((void*)0)    ) {
        __result_obj__176 = ((void*)0);
        return __result_obj__176;
    }
    start_298=next_297;
    while(    *start_298!=0    ) {
        const char* d_300=delim;
        is_delim_301=0;
        while(        *d_300!=0        ) {
            if(            *start_298==*d_300            ) {
                is_delim_301=1;
                break;
            }
            d_300++;
        }
        if(        !is_delim_301        ) {
            break;
        }
        start_298++;
    }
    if(    *start_298==0    ) {
        next_297=((void*)0);
        __result_obj__177 = ((void*)0);
        return __result_obj__177;
    }
    p_299=start_298;
    while(    *p_299!=0    ) {
        const char* d_302=delim;
        is_delim_303=0;
        while(        *d_302!=0        ) {
            if(            *p_299==*d_302            ) {
                is_delim_303=1;
                break;
            }
            d_302++;
        }
        if(        is_delim_303        ) {
            break;
        }
        p_299++;
    }
    if(    *p_299==0    ) {
        next_297=((void*)0);
    }
    else {
        *p_299=0;
        next_297=p_299+1;
    }
    __result_obj__178 = start_298;
    return __result_obj__178;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_304;
int i_306;
int negative_307;
char* __result_obj__179;
int digit_308;
char* __result_obj__180;
    p_304=buf;
    char tmp_305[32];
    memset(&tmp_305, 0, sizeof(char)    *(32)    );
    i_306=0;
    negative_307=0;
    if(    base<2||base>16    ) {
        *p_304=0;
        __result_obj__179 = p_304;
        return __result_obj__179;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_307=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_308=val_%base;
        tmp_305[i_306++]=(((digit_308<10))?(48+digit_308):(97+digit_308-10));
        val_/=base;
    } while(    val_    );
    if(    negative_307    ) {
        *p_304++=45;
    }
    while(    i_306--    ) {
        *p_304++=tmp_305[i_306];
    }
    *p_304=0;
    __result_obj__180 = buf;
    return __result_obj__180;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_310;
const char* s_311;
unsigned long  int remaining_313;
s_311 = (void*)0;
    char out2_309[512];
    memset(&out2_309, 0, sizeof(char)    *(512)    );
    p_310=out2_309;
    char buf_312[32];
    memset(&buf_312, 0, sizeof(char)    *(32)    );
    remaining_313=sizeof(out2_309);
    for(    ;    *fmt&&remaining_313>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_310++=*fmt;
            remaining_313--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_312,__builtin_va_arg(ap,int),10,1);
            s_311=buf_312;
            break;
            case 117:
            itoa(buf_312,__builtin_va_arg(ap,unsigned int),10,0);
            s_311=buf_312;
            break;
            case 120:
            itoa(buf_312,__builtin_va_arg(ap,unsigned int),16,0);
            s_311=buf_312;
            break;
            case 115:
            s_311=__builtin_va_arg(ap,const char*);
            if(            !s_311            ) {
                s_311="(null)";
            }
            break;
            case 99:
            buf_312[0]=(char)__builtin_va_arg(ap,int);
            buf_312[1]=0;
            s_311=buf_312;
            break;
            case 112:
            strncpy(buf_312,"0x",32);
            itoa(buf_312+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_311=buf_312;
            break;
            case 37:
            buf_312[0]=37;
            buf_312[1]=0;
            s_311=buf_312;
            break;
            default:
            buf_312[0]=37;
            buf_312[1]=*fmt;
            buf_312[2]=0;
            s_311=buf_312;
            break;
        }
        while(        *s_311&&remaining_313>1        ) {
            *p_310++=*s_311++;
            remaining_313--;
        }
    }
    *p_310=0;
    *out=strdup(out2_309);
    return p_310-out2_309;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_314;
char* p_315;
const char* s_316;
unsigned long  int remaining_318;
memset(&ap_314, 0, sizeof(va_list));
s_316 = (void*)0;
    __builtin_va_start(ap_314,fmt);
    p_315=out;
    char buf_317[32];
    memset(&buf_317, 0, sizeof(char)    *(32)    );
    remaining_318=out_size;
    if(    remaining_318==0    ) {
        __builtin_va_end(ap_314);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_318>1            ) {
                *p_315++=*fmt;
                remaining_318--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_316=__builtin_va_arg(ap_314,const char*);
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 100:
            itoa(buf_317,__builtin_va_arg(ap_314,int),10,0);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 120:
            itoa(buf_317,(unsigned int)__builtin_va_arg(ap_314,int),16,1);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 99:
            if(            remaining_318>1            ) {
                *p_315++=(char)__builtin_va_arg(ap_314,int);
                remaining_318--;
            }
            break;
            case 112:
            s_316="0x";
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            itoa(buf_317,(long)__builtin_va_arg(ap_314,void*),16,1);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_317,__builtin_va_arg(ap_314,long),10,1);
                s_316=buf_317;
                while(                *s_316&&remaining_318>1                ) {
                    *p_315++=*s_316++;
                    remaining_318--;
                }
            }
            break;
            default:
            if(            remaining_318>1            ) {
                *p_315++=37;
                remaining_318--;
                if(                remaining_318>1                ) {
                    *p_315++=*fmt;
                    remaining_318--;
                }
            }
            break;
        }
    }
    *p_315=0;
    __builtin_va_end(ap_314);
    return p_315-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_319;
char* p_320;
const char* s_321;
unsigned long  int remaining_323;
memset(&ap_319, 0, sizeof(va_list));
s_321 = (void*)0;
    __builtin_va_start(ap_319,fmt);
    p_320=out;
    char buf_322[32];
    memset(&buf_322, 0, sizeof(char)    *(32)    );
    remaining_323=out_size;
    if(    remaining_323==0    ) {
        __builtin_va_end(ap_319);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_323>1            ) {
                *p_320++=*fmt;
                remaining_323--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_321=__builtin_va_arg(ap_319,const char*);
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 100:
            itoa(buf_322,__builtin_va_arg(ap_319,int),10,0);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 120:
            itoa(buf_322,(unsigned int)__builtin_va_arg(ap_319,int),16,1);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 99:
            if(            remaining_323>1            ) {
                *p_320++=(char)__builtin_va_arg(ap_319,int);
                remaining_323--;
            }
            break;
            case 112:
            s_321="0x";
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            itoa(buf_322,(long)__builtin_va_arg(ap_319,void*),16,1);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_322,__builtin_va_arg(ap_319,long),10,1);
                s_321=buf_322;
                while(                *s_321&&remaining_323>1                ) {
                    *p_320++=*s_321++;
                    remaining_323--;
                }
            }
            break;
            default:
            if(            remaining_323>1            ) {
                *p_320++=37;
                remaining_323--;
                if(                remaining_323>1                ) {
                    *p_320++=*fmt;
                    remaining_323--;
                }
            }
            break;
        }
    }
    *p_320=0;
    __builtin_va_end(ap_319);
    return p_320-out;
}

void printint(int val_, int base, int sign){
int i_325;
int negative_326;
unsigned int uval_327;
int digit_328;
memset(&uval_327, 0, sizeof(unsigned int));
    char buf_324[33];
    memset(&buf_324, 0, sizeof(char)    *(33)    );
    i_325=0;
    negative_326=0;
    if(    sign&&val_<0    ) {
        negative_326=1;
        uval_327=-val_;
    }
    else {
        uval_327=(unsigned int)val_;
    }
    if(    uval_327==0    ) {
        putchar(48);
        return;
    }
    while(    uval_327>0    ) {
        digit_328=uval_327%base;
        buf_324[i_325++]=((digit_328<10)?(48+digit_328):(97+(digit_328-10)));
        uval_327/=base;
    }
    if(    negative_326    ) {
        putchar(45);
    }
    while(    --i_325>=0    ) {
        putchar(buf_324[i_325]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_330;
int negative_331;
int digit_332;
    char buf_329[65];
    memset(&buf_329, 0, sizeof(char)    *(65)    );
    i_330=0;
    negative_331=0;
    if(    sign&&(long)val_<0    ) {
        negative_331=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_332=val_%base;
        buf_329[i_330++]=((digit_332<10)?(48+digit_332):(97+(digit_332-10)));
        val_/=base;
    }
    if(    negative_331    ) {
        putchar(45);
    }
    while(    --i_330>=0    ) {
        putchar(buf_329[i_330]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_334;
int negative_335;
int digit_336;
    char buf_333[65];
    memset(&buf_333, 0, sizeof(char)    *(65)    );
    i_334=0;
    negative_335=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_335=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_336=val_%base;
        buf_333[i_334++]=((digit_336<10)?(48+digit_336):(97+(digit_336-10)));
        val_/=base;
    }
    if(    negative_335    ) {
        putchar(45);
    }
    while(    --i_334>=0    ) {
        putchar(buf_333[i_334]);
    }
}

int printf(const char* fmt, ...){
va_list ap_337;
const char* p_338;
int lcount_339;
unsigned long  int val__340;
unsigned long  long val__341;
long val__342;
long long val__343;
int i_344;
int val__345;
unsigned int val__346;
unsigned long  int val__347;
char c_349;
memset(&ap_337, 0, sizeof(va_list));
p_338 = (void*)0;
    __builtin_va_start(ap_337,fmt);
    for(    p_338=fmt    ;    *p_338    ;    p_338++    ){
        if(        *p_338!=37        ) {
            putchar(*p_338);
            continue;
        }
        p_338++;
        if(        *p_338==108        ) {
            lcount_339=1;
            if(            *(p_338+1)==108            ) {
                lcount_339=2;
                p_338++;
            }
            p_338++;
            switch (            *p_338) {
                case 120:
                {
                    if(                    lcount_339==1                    ) {
                        val__340=__builtin_va_arg(ap_337,unsigned long  int);
                        printlong(val__340,16,0);
                    }
                    else {
                        val__341=__builtin_va_arg(ap_337,unsigned long  long);
                        printlonglong(val__341,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_339==1                    ) {
                        val__342=__builtin_va_arg(ap_337,long);
                        printlong(val__342,10,1);
                    }
                    else {
                        val__343=__builtin_va_arg(ap_337,long  long);
                        printlonglong(val__343,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_344=0                    ;                    i_344<lcount_339                    ;                    i_344++                    ){
                        putchar(108);
                    }
                    putchar(*p_338);
                    break;
                }
            }
        }
        else {
            switch (            *p_338) {
                case 100:
                {
                    val__345=__builtin_va_arg(ap_337,int);
                    printint(val__345,10,1);
                    break;
                }
                case 120:
                {
                    val__346=__builtin_va_arg(ap_337,unsigned int);
                    printint(val__346,16,0);
                    break;
                }
                case 112:
                {
                    val__347=(unsigned long  int)__builtin_va_arg(ap_337,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__347,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_348=__builtin_va_arg(ap_337,const char*);
                    if(                    !s_348                    ) {
                        s_348="(null)";
                    }
                    while(                    *s_348                    ) {
                        putchar(*s_348++);
                    }
                    break;
                }
                case 99:
                {
                    c_349=(char)__builtin_va_arg(ap_337,int);
                    putchar(c_349);
                    break;
                }
                case 37:
                {
                    putchar(37);
                    break;
                }
                default:
                {
                    putchar(37);
                    putchar(*p_338);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_337);
    return 0;
}

void* alloc_from_pages(unsigned long  int size){
void* result_350;
void* __result_obj__181;
    result_350=((void*)0);
    size=(size+7&~7);
    result_350=calloc(1,size);
    __result_obj__181 = result_350;
    return __result_obj__181;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_351;
struct sMemHeader* it_352;
int i_353;
int i_354;
void* __result_obj__182;
void* result_355;
struct sMemHeaderTiny* it_356;
void* __result_obj__183;
memset(&i_353, 0, sizeof(int));
memset(&i_354, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_351=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_352=result_351;
        it_352->allocated=177783;
        it_352->size=size+sizeof(struct sMemHeader);
        it_352->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_353=0            ;            i_353<gNumComeStackFrame            ;            i_353++            ){
                it_352->sname[i_353]=gComeStackFrameSName[i_353];
                it_352->sline[i_353]=gComeStackFrameSLine[i_353];
                it_352->id[i_353]=gComeStackFrameID[i_353];
            }
        }
        else {
            for(            i_354=0            ;            i_354<16            ;            i_354++            ){
                it_352->sname[i_354]=gComeStackFrameSName[gNumComeStackFrame-1-i_354];
                it_352->sline[i_354]=gComeStackFrameSLine[gNumComeStackFrame-1-i_354];
                it_352->id[i_354]=gComeStackFrameID[gNumComeStackFrame-1-i_354];
            }
        }
        come_pop_stackframe_v2();
        it_352->next=gAllocMem;
        it_352->prev=((void*)0);
        it_352->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_352;
        }
        gAllocMem=it_352;
        gNumAlloc++;
        __result_obj__182 = (char*)result_351+sizeof(struct sMemHeader);
        return __result_obj__182;
    }
    else {
        result_355=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_356=result_355;
        it_356->allocated=177783;
        it_356->class_name=class_name;
        it_356->sname=sname;
        it_356->sline=sline;
        it_356->size=size+sizeof(struct sMemHeaderTiny);
        it_356->free_next=((void*)0);
        it_356->next=(struct sMemHeaderTiny*)gAllocMem;
        it_356->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_356;
        }
        gAllocMem=(struct sMemHeader*)it_356;
        gNumAlloc++;
        __result_obj__183 = (char*)result_355+sizeof(struct sMemHeaderTiny);
        return __result_obj__183;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_357;
struct sMemHeader* prev_it_358;
struct sMemHeader* next_it_359;
unsigned long  int size_360;
struct sMemHeaderTiny* it_361;
struct sMemHeaderTiny* prev_it_362;
struct sMemHeaderTiny* next_it_363;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_357=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_357->allocated!=177783            ) {
                return;
            }
            it_357->allocated=0;
            prev_it_358=it_357->prev;
            next_it_359=it_357->next;
            if(            gAllocMem==it_357            ) {
                gAllocMem=next_it_359;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_358                ) {
                    prev_it_358->next=next_it_359;
                }
                if(                next_it_359                ) {
                    next_it_359->prev=prev_it_358;
                }
            }
            size_360=it_357->size;
            free(it_357);
            gNumFree++;
        }
        else {
            it_361=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_361->allocated!=177783            ) {
                return;
            }
            it_361->allocated=0;
            prev_it_362=it_361->prev;
            next_it_363=it_361->next;
            if(            gAllocMem==it_361            ) {
                gAllocMem=(struct sMemHeader*)next_it_363;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_362                ) {
                    prev_it_362->next=next_it_363;
                }
                if(                next_it_363                ) {
                    next_it_363->prev=prev_it_362;
                }
            }
            free(it_361);
            gNumFree++;
        }
    }
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value174 = (void*)0;
char* result_364;
char* __result_obj__184;
    result_364=(char*)come_increment_ref_count(come_get_stackframe());
    __result_obj__184 = (char*)come_increment_ref_count(result_364);
    (result_364 = come_decrement_ref_count(result_364, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* result_365;
void* __result_obj__185;
    result_365=come_calloc(count,size,sname,sline,class_name);
    __result_obj__185 = result_365;
    return __result_obj__185;
}

void come_free_v2(void* mem){
    come_free(mem);
}

