/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
typedef char* string;

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

extern int gComeMallocLib;

extern int gComeDebugLib;

extern int gComeGCLib;

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
    char* mVarAttribute;
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
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
int printf(const char* anonymous_var_nameX15, ...);
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
void perror(const char* anonymous_var_nameX61);
int putc(int anonymous_var_nameX62, struct __sFILE* anonymous_var_nameX63);
int putchar(int anonymous_var_nameX64);
int puts(const char* anonymous_var_nameX65);
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
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX112);
int vscanf(const char* __format, va_list anonymous_var_nameX113);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX114);
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
int vasprintf(char** anonymous_var_nameX131, const char* anonymous_var_nameX132, va_list anonymous_var_nameX133);
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
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX194);
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
void exit(int anonymous_var_nameX204);
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
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
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
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX317, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*) __attribute__((__noescape__)));
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
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xiswascii(int c);
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
_Bool wchar_t_equals(int left, int right);
_Bool wchar_tp_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
unsigned int wchar_t_get_hash_key(int value);
unsigned int wchar_tp_get_hash_key(int* value);
char* wchar_t_to_string(int wc);
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
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
// uniq global variable
// inline function

// body function
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_0;
struct list$1sRightValueObject$ph* o2_saved_1;
struct sRightValueObject* it2_4;
char* __dec_obj1;
void* __right_value0 = (void*)0;
char* __dec_obj2;
void* __right_value1 = (void*)0;
char* __dec_obj3;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    right_value->right_value_objects    ) {
        it_0=right_value->right_value_objects;
        for(        o2_saved_1=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it2_4=list$1sRightValueObject$ph_begin((o2_saved_1))        ;        !list$1sRightValueObject$ph_end((o2_saved_1))        ;        it2_4=list$1sRightValueObject$ph_next((o2_saved_1))        ){
            if(            it_0->mID==it2_4->mID            ) {
                it2_4->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects    ) {
        __dec_obj1=right_value->c_value,
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj2=right_value->c_value,
            right_value->c_value=(char*)come_increment_ref_count(append_stackframe(right_value->c_value,right_value->type,info));
            __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    __dec_obj3=right_value->c_value,
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_2;
struct sRightValueObject* __result_obj__1;
struct sRightValueObject* __result_obj__2;
struct sRightValueObject* result_3;
struct sRightValueObject* __result_obj__3;
result_2 = (void*)0;
result_3 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_2,0,sizeof(struct sRightValueObject*));
        __result_obj__1 = result_2;
        return __result_obj__1;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__2 = self->it->item;
        return __result_obj__2;
    }
    memset(&result_3,0,sizeof(struct sRightValueObject*));
    __result_obj__3 = result_3;
    return __result_obj__3;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_5;
struct sRightValueObject* __result_obj__4;
struct sRightValueObject* __result_obj__5;
struct sRightValueObject* result_6;
struct sRightValueObject* __result_obj__6;
result_5 = (void*)0;
result_6 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_5,0,sizeof(struct sRightValueObject*));
        __result_obj__4 = result_5;
        return __result_obj__4;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__5 = self->it->item;
        return __result_obj__5;
    }
    memset(&result_6,0,sizeof(struct sRightValueObject*));
    __result_obj__6 = result_6;
    return __result_obj__6;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_7;
struct list_item$1sRightValueObject$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value40 = (void*)0;
struct sType* result_15;
struct sType* __result_obj__23;
struct sType* __result_obj__24;
struct sClass* klass_39;
void* __right_value41 = (void*)0;
struct sType* result_type_40;
struct sType* __dec_obj28;
struct list$1sType$ph* o2_saved_43;
struct sType* it_46;
void* __right_value42 = (void*)0;
struct sType* new_param_type_49;
int generics_number_53;
void* __right_value46 = (void*)0;
struct list$1sNode$ph* array_num_54;
_Bool immutable__55;
int pointer_num_56;
_Bool heap_57;
_Bool exception__58;
_Bool guard__59;
_Bool deffer_right_value_60;
_Bool no_heap_61;
_Bool no_calling_destructor_62;
_Bool null_value_63;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct sType* __dec_obj32;
struct list$1sNode$ph* __dec_obj33;
int generics_number_70;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct sClass* klass2_71;
int generics_number2_72;
struct list$1sNode$ph* array_num_73;
_Bool immutable__74;
int pointer_num_75;
_Bool heap_76;
_Bool guard__77;
_Bool deffer_right_value_78;
_Bool no_heap_79;
_Bool no_calling_destructor_80;
_Bool null_value_81;
_Bool record__82;
_Bool multiple_types_83;
_Bool exception__84;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct sType* __dec_obj34;
struct list$1sNode$ph* __dec_obj35;
struct list$1sType$ph* o2_saved_85;
struct sType* it_86;
void* __right_value53 = (void*)0;
struct sType* type_87;
void* __right_value54 = (void*)0;
char* new_name_88;
struct sType* __result_obj__37;
    result_15=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)    ) {
        __result_obj__23 = (struct sType*)come_increment_ref_count(result_15);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__23;
    }
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)==0    ) {
        __result_obj__24 = (struct sType*)come_increment_ref_count(result_15);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __result_obj__24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__24;
    }
    klass_39=type->mClass;
    if(    string_operator_equals(klass_39->mName,"lambda")    ) {
        result_type_40=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
        __dec_obj28=result_15->mResultType,
        result_15->mResultType=(struct sType*)come_increment_ref_count(result_type_40);
        come_call_finalizer(sType_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_reset(result_15->mParamTypes);
        for(        o2_saved_43=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_46=list$1sType$ph_begin((o2_saved_43))        ;        !list$1sType$ph_end((o2_saved_43))        ;        it_46=list$1sType$ph_next((o2_saved_43))        ){
            new_param_type_49=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_46),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1sType$ph_push_back(result_15->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_49));
            come_call_finalizer(sType_finalize, new_param_type_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    klass_39->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0    ) {
        generics_number_53=klass_39->mMethodGenericsNum;
        if(        generics_number_53>=list$1sType$ph_length(info->method_generics_types)        ) {
            ((struct tuple2$2int$bool$*)(__right_value46=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_53,list$1sType$ph_length(info->method_generics_types))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        array_num_54=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__55=type->mImmutable;
        pointer_num_56=type->mPointerNum;
        heap_57=type->mHeap;
        exception__58=type->mException;
        guard__59=type->mGuardValue;
        deffer_right_value_60=type->mDefferRightValue;
        no_heap_61=type->mNoHeap;
        no_calling_destructor_62=type->mNoCallingDestructor;
        null_value_63=type->mNullValue;
        __dec_obj32=result_15,
        result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value47=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_53)))));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        heap_57        ) {
            result_15->mHeap=result_15->mHeap||heap_57;
        }
        if(        guard__59        ) {
            result_15->mGuardValue=guard__59;
        }
        if(        deffer_right_value_60        ) {
            result_15->mDefferRightValue=deffer_right_value_60||result_15->mDefferRightValue;
        }
        if(        no_heap_61        ) {
            result_15->mNoHeap=(_Bool)1;
            result_15->mHeap=(_Bool)0;
        }
        if(        exception__58        ) {
            result_15->mException=(_Bool)1;
        }
        if(        no_calling_destructor_62        ) {
            result_15->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__55        ) {
            result_15->mImmutable=immutable__55;
        }
        if(        list$1sNode$ph_length(array_num_54)>0        ) {
            __dec_obj33=result_15->mArrayNum,
            result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_54);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        null_value_63        ) {
            result_15->mNullValue=null_value_63;
        }
        if(        pointer_num_56>0        ) {
            result_15->mPointerNum+=pointer_num_56;
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    klass_39->mGenerics    ) {
        generics_number_70=klass_39->mGenericsNum;
        if(        generics_number_70>=list$1sType$ph_length(generics_type->mGenericsTypes)        ) {
            ((struct tuple2$2int$bool$*)(__right_value49=err_msg(info,"invalid generics parametor number")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        klass2_71=((struct sType*)(__right_value50=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_70)))->mClass;
        come_call_finalizer(sType_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        generics_number2_72=klass2_71->mGenericsNum;
        if(        generics_number_70!=generics_number2_72        ) {
            array_num_73=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            immutable__74=type->mImmutable;
            pointer_num_75=type->mPointerNum;
            heap_76=type->mHeap;
            guard__77=type->mGuardValue;
            deffer_right_value_78=type->mDefferRightValue;
            no_heap_79=type->mNoHeap;
            no_calling_destructor_80=type->mNoCallingDestructor;
            null_value_81=type->mNullValue;
            record__82=type->mRecord;
            multiple_types_83=type->mMultipleTypes;
            exception__84=type->mException;
            __dec_obj34=result_15,
            result_15=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value51=list$1sType$ph_operator_load_element(generics_type->mGenericsTypes,generics_number_70)))));
            come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            heap_76            ) {
                result_15->mHeap=result_15->mHeap||heap_76;
            }
            if(            exception__84            ) {
                result_15->mException=exception__84;
            }
            if(            deffer_right_value_78            ) {
                result_15->mDefferRightValue=deffer_right_value_78||result_15->mDefferRightValue;
            }
            if(            guard__77            ) {
                result_15->mGuardValue=guard__77;
            }
            if(            record__82            ) {
                result_15->mRecord=record__82;
            }
            if(            no_heap_79            ) {
                result_15->mNoHeap=(_Bool)1;
                result_15->mHeap=(_Bool)0;
            }
            if(            multiple_types_83            ) {
                result_15->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_80            ) {
                result_15->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__74            ) {
                result_15->mImmutable=immutable__74;
            }
            if(            list$1sNode$ph_length(array_num_73)>0            ) {
                __dec_obj35=result_15->mArrayNum,
                result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_73);
                come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            }
            if(            null_value_81            ) {
                result_15->mNullValue=null_value_81;
            }
            if(            pointer_num_75>0            ) {
                result_15->mPointerNum+=pointer_num_75;
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        list$1sType$ph_reset(result_15->mGenericsTypes);
        for(        o2_saved_85=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_86=list$1sType$ph_begin((o2_saved_85))        ;        !list$1sType$ph_end((o2_saved_85))        ;        it_86=list$1sType$ph_next((o2_saved_85))        ){
            type_87=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(it_86),(struct sType*)come_increment_ref_count(generics_type),info));
            list$1sType$ph_push_back(result_15->mGenericsTypes,(struct sType*)come_increment_ref_count(type_87));
            come_call_finalizer(sType_finalize, type_87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !output_generics_struct((struct sType*)come_increment_ref_count(result_15),(struct sType*)come_increment_ref_count(generics_type),info)        ) {
            new_name_88=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_88);
            exit(1);
            (new_name_88 = come_decrement_ref_count(new_name_88, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    __result_obj__37 = (struct sType*)come_increment_ref_count(result_15);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__7;
void* __right_value2 = (void*)0;
struct sType* result_16;
void* __right_value3 = (void*)0;
struct sType* __dec_obj4;
void* __right_value4 = (void*)0;
struct sType* __dec_obj5;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj9;
void* __right_value13 = (void*)0;
struct sType* __dec_obj10;
void* __right_value15 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value17 = (void*)0;
char* __dec_obj13;
void* __right_value18 = (void*)0;
char* __dec_obj14;
void* __right_value19 = (void*)0;
char* __dec_obj15;
void* __right_value20 = (void*)0;
char* __dec_obj16;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj20;
void* __right_value29 = (void*)0;
char* __dec_obj21;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj26;
void* __right_value39 = (void*)0;
struct sType* __dec_obj27;
struct sType* __result_obj__22;
    if(    self==(void*)0    ) {
        __result_obj__7 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__7;
    }
    result_16=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_16->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj4=result_16->mOriginalLoadVarType,
        result_16->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj5=result_16->mChannelType,
        result_16->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj9=result_16->mGenericsTypes,
        result_16->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj10=result_16->mNoSolvedGenericsType,
        result_16->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj11=result_16->mSizeNum,
        result_16->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj12=result_16->mAlignas,
        result_16->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj13=result_16->mTupleName,
        result_16->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj14=result_16->mAttribute,
        result_16->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj15=result_16->mVarAttribute,
        result_16->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_16->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_16->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_16->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_16->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_16->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_16->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_16->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_16->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_16->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_16->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_16->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_16->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_16->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_16->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj16=result_16->mAsmName,
        result_16->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_16->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj20=result_16->mArrayNum,
        result_16->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_16->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj21=result_16->mOriginalTypeName,
        result_16->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_16->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_16->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj22=result_16->mParamTypes,
        result_16->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj26=result_16->mParamNames,
        result_16->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj27=result_16->mResultType,
        result_16->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_16->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_16->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__22 = (struct sType*)come_increment_ref_count(result_16);
    come_call_finalizer(sType_finalize, result_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__8;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_17;
struct list_item$1sType$ph* it_18;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__11;
    if(    self==((void*)0)    ) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_17=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_18=self->head;
    while(    it_18!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        else {
            list$1sType$ph_add(result_17,(struct sType*)come_increment_ref_count(sType_clone(it_18->item)));
        }
        it_18=it_18->next;
    }
    __result_obj__11 = (struct list$1sType$ph*)come_increment_ref_count(result_17);
    come_call_finalizer(list$1sType$ph$p_finalize, result_17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj6;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj7;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_21;
struct sType* __dec_obj8;
struct list$1sType$ph* __result_obj__10;
    if(    self->len==0    ) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_19->prev=((void*)0);
        litem_19->next=((void*)0);
        __dec_obj6=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_19;
        self->head=litem_19;
    }
    else if(    self->len==1    ) {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj7=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        litem_21=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj8=litem_21->item,
        litem_21->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
    __result_obj__10 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__10;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_22;
struct list_item$1sType$ph* prev_it_23;
    it_22=self->head;
    while(    it_22!=((void*)0)    ) {
        prev_it_23=it_22;
        it_22=it_22->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__12;
void* __right_value14 = (void*)0;
struct sNode* result_24;
struct sNode* __result_obj__13;
    if(    self==(void*)0    ) {
        __result_obj__12 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__12) ? __result_obj__12 = come_decrement_ref_count(__result_obj__12, ((struct sNode*)__result_obj__12)->finalize, ((struct sNode*)__result_obj__12)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__12;
    }
    result_24=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_24->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_24->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_24->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_24->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_24->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_24->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_24->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_24->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_24->no_mutex=self->no_mutex;
    }
    __result_obj__13 = (struct sNode*)come_increment_ref_count(result_24);
    ((result_24) ? result_24 = come_decrement_ref_count(result_24, ((struct sNode*)result_24)->finalize, ((struct sNode*)result_24)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__13) ? __result_obj__13 = come_decrement_ref_count(__result_obj__13, ((struct sNode*)__result_obj__13)->finalize, ((struct sNode*)__result_obj__13)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__14;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_25;
struct list_item$1sNode$ph* it_26;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__17;
    if(    self==((void*)0)    ) {
        __result_obj__14 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__14;
    }
    result_25=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        else {
            list$1sNode$ph_add(result_25,(struct sNode*)come_increment_ref_count(sNode_clone(it_26->item)));
        }
        it_26=it_26->next;
    }
    __result_obj__17 = (struct list$1sNode$ph*)come_increment_ref_count(result_25);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__15;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj17;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj18;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_29;
struct sNode* __dec_obj19;
struct list$1sNode$ph* __result_obj__16;
    if(    self->len==0    ) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj17=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1    ) {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj18=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj19=litem_29->item,
        litem_29->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__16 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__16;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_30;
struct list_item$1sNode$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        prev_it_31=it_30;
        it_30=it_30->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__18;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_32;
struct list_item$1char$ph* it_33;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__21;
    if(    self==((void*)0)    ) {
        __result_obj__18 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__18;
    }
    result_32=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_33=self->head;
    while(    it_33!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_32,(char*)come_increment_ref_count((char*)come_memdup(it_33->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_33=it_33->next;
    }
    __result_obj__21 = (struct list$1char$ph*)come_increment_ref_count(result_32);
    come_call_finalizer(list$1char$ph$p_finalize, result_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__19;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj23;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj24;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_36;
char* __dec_obj25;
struct list$1char$ph* __result_obj__20;
    if(    self->len==0    ) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        __dec_obj23=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1    ) {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        __dec_obj24=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        __dec_obj25=litem_36->item,
        litem_36->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result_obj__20 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__20;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_37;
struct list_item$1char$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)    ) {
        prev_it_38=it_37;
        it_37=it_37->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_38, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_41;
struct list_item$1sType$ph* prev_it_42;
struct list$1sType$ph* __result_obj__25;
    it_41=self->head;
    while(    it_41!=((void*)0)    ) {
        prev_it_42=it_41;
        it_41=it_41->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_44;
struct sType* __result_obj__26;
struct sType* __result_obj__27;
struct sType* result_45;
struct sType* __result_obj__28;
result_44 = (void*)0;
result_45 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_44,0,sizeof(struct sType*));
        __result_obj__26 = result_44;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_45,0,sizeof(struct sType*));
    __result_obj__28 = result_45;
    return __result_obj__28;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_47;
struct sType* __result_obj__29;
struct sType* __result_obj__30;
struct sType* result_48;
struct sType* __result_obj__31;
result_47 = (void*)0;
result_48 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_47,0,sizeof(struct sType*));
        __result_obj__29 = result_47;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_48,0,sizeof(struct sType*));
    __result_obj__31 = result_48;
    return __result_obj__31;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value43 = (void*)0;
struct list_item$1sType$ph* litem_50;
struct sType* __dec_obj29;
void* __right_value44 = (void*)0;
struct list_item$1sType$ph* litem_51;
struct sType* __dec_obj30;
void* __right_value45 = (void*)0;
struct list_item$1sType$ph* litem_52;
struct sType* __dec_obj31;
struct list$1sType$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_50=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value43=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sType$ph*"))));
        litem_50->prev=((void*)0);
        litem_50->next=((void*)0);
        __dec_obj29=litem_50->item,
        litem_50->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_50;
        self->head=litem_50;
    }
    else if(    self->len==1    ) {
        litem_51=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value44=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sType$ph*"))));
        litem_51->prev=self->head;
        litem_51->next=((void*)0);
        __dec_obj30=litem_51->item,
        litem_51->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_51;
        self->head->next=litem_51;
    }
    else {
        litem_52=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value45=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem_52->prev=self->tail;
        litem_52->next=((void*)0);
        __dec_obj31=litem_52->item,
        litem_52->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj31,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_52;
        self->tail=litem_52;
    }
    self->len++;
    __result_obj__32 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__32;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_64;
int i_65;
struct sType* __result_obj__33;
struct sType* default_value_66;
struct sType* __result_obj__34;
default_value_66 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_64=self->head;
    i_65=0;
    while(    it_64!=((void*)0)    ) {
        if(        position==i_65        ) {
            __result_obj__33 = (struct sType*)come_increment_ref_count(it_64->item);
            come_call_finalizer(sType_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__33;
        }
        it_64=it_64->next;
        i_65++;
    }
    memset(&default_value_66,0,sizeof(struct sType*));
    __result_obj__34 = (struct sType*)come_increment_ref_count(default_value_66);
    come_call_finalizer(sType_finalize, default_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_67;
int i_68;
struct sType* __result_obj__35;
struct sType* default_value_69;
struct sType* __result_obj__36;
default_value_69 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_67=self->head;
    i_68=0;
    while(    it_67!=((void*)0)    ) {
        if(        position==i_68        ) {
            __result_obj__35 = (struct sType*)come_increment_ref_count(it_67->item);
            come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__35;
        }
        it_67=it_67->next;
        i_68++;
    }
    memset(&default_value_69,0,sizeof(struct sType*));
    __result_obj__36 = (struct sType*)come_increment_ref_count(default_value_69);
    come_call_finalizer(sType_finalize, default_value_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __right_value55 = (void*)0;
struct sType* result_89;
struct sClass* klass_90;
int generics_number_91;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* array_num_92;
_Bool immutable__93;
int pointer_num_94;
_Bool heap_95;
_Bool guard__96;
_Bool deffer_right_value_97;
_Bool no_heap_98;
_Bool no_calling_destructor_99;
_Bool null_value_100;
_Bool exception__101;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct sType* __dec_obj36;
struct list$1sNode$ph* __dec_obj37;
int i_102;
struct list$1sType$ph* o2_saved_103;
struct sType* it_104;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1sType$ph* o2_saved_110;
struct sType* it_111;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__40;
    result_89=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_90=type->mClass;
    if(    klass_90->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0    ) {
        generics_number_91=klass_90->mMethodGenericsNum;
        if(        generics_number_91>=list$1sType$ph_length(info->method_generics_types)        ) {
            ((struct tuple2$2int$bool$*)(__right_value56=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_91,list$1sType$ph_length(info->method_generics_types))));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            exit(2);
        }
        array_num_92=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__93=type->mImmutable;
        pointer_num_94=type->mPointerNum;
        heap_95=type->mHeap;
        guard__96=type->mGuardValue;
        deffer_right_value_97=type->mDefferRightValue;
        no_heap_98=type->mNoHeap;
        no_calling_destructor_99=type->mNoCallingDestructor;
        null_value_100=type->mNullValue;
        exception__101=type->mException;
        __dec_obj36=result_89,
        result_89=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value57=list$1sType$ph_operator_load_element(info->method_generics_types,generics_number_91)))));
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        heap_95        ) {
            result_89->mHeap=heap_95||result_89->mHeap;
        }
        if(        deffer_right_value_97        ) {
            result_89->mDefferRightValue=deffer_right_value_97||result_89->mDefferRightValue;
        }
        if(        exception__101        ) {
            result_89->mException=exception__101;
        }
        if(        guard__96        ) {
            result_89->mGuardValue=guard__96||result_89->mGuardValue;
        }
        if(        no_heap_98        ) {
            result_89->mNoHeap=(_Bool)1;
            result_89->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_99        ) {
            result_89->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__93        ) {
            result_89->mImmutable=immutable__93;
        }
        if(        list$1sNode$ph_length(array_num_92)>0        ) {
            __dec_obj37=result_89->mArrayNum,
            result_89->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_92);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        if(        null_value_100        ) {
            result_89->mNullValue=null_value_100;
        }
        if(        pointer_num_94>0        ) {
            result_89->mPointerNum+=pointer_num_94;
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    i_102=0;
    for(    o2_saved_103=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_104=list$1sType$ph_begin((o2_saved_103))    ;    !list$1sType$ph_end((o2_saved_103))    ;    it_104=list$1sType$ph_next((o2_saved_103))    ){
        list$1sType$ph_operator_store_element(result_89->mGenericsTypes,i_102,(struct sType*)come_increment_ref_count(solve_method_generics(it_104,info)));
        come_call_finalizer(sType_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_102++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    i_102=0;
    for(    o2_saved_110=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_111=list$1sType$ph_begin((o2_saved_110))    ;    !list$1sType$ph_end((o2_saved_110))    ;    it_111=list$1sType$ph_next((o2_saved_110))    ){
        list$1sType$ph_operator_store_element(result_89->mParamTypes,i_102,(struct sType*)come_increment_ref_count(solve_method_generics(it_111,info)));
        come_call_finalizer(sType_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        i_102++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    type->mResultType    ) {
        __dec_obj39=result_89->mResultType,
        result_89->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__40 = (struct sType*)come_increment_ref_count(result_89);
    come_call_finalizer(sType_finalize, result_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__40;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_105;
int i_106;
struct sType* default_value_107;
struct list$1sType$ph* __result_obj__38;
struct list_item$1sType$ph* it_108;
int i_109;
struct sType* __dec_obj38;
struct list$1sType$ph* __result_obj__39;
default_value_107 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_105=self->len;
        for(        i_106=0        ;        i_106<position-len_105        ;        i_106++        ){
            memset(&default_value_107,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_107));
            come_call_finalizer(sType_finalize, default_value_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__38 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__38;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)    ) {
        if(        position==i_109        ) {
            __dec_obj38=it_108->item,
            it_108->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_108=it_108->next;
        i_109++;
    }
    __result_obj__39 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

void append_object_to_right_values(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value, struct sVar* obj_var){
void* __right_value64 = (void*)0;
struct sRightValueObject* new_value_112;
struct sType* __dec_obj40;
void* __right_value65 = (void*)0;
char* __dec_obj41;
char* __dec_obj42;
struct sType* __dec_obj43;
void* __right_value66 = (void*)0;
char* __dec_obj44;
void* __right_value70 = (void*)0;
char* buf_117;
void* __right_value71 = (void*)0;
char* __dec_obj48;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
char* __dec_obj49;
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    new_value_112=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc_v2(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 289, "struct sRightValueObject*"));
    __dec_obj40=new_value_112->mType,
    new_value_112->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    new_value_112->mFreed=(_Bool)0;
    static int right_value_num_113=0;
    new_value_112->mID=right_value_num_113;
    __dec_obj41=new_value_112->mVarName,
    new_value_112->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",right_value_num_113++));
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj42=new_value_112->mFunName,
    new_value_112->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    new_value_112->mBlockLevel=info->block_level;
    new_value_112->mDecrementRefCount=decrement_ref_count;
    if(    obj_value    ) {
        __dec_obj43=new_value_112->mObjType,
        new_value_112->mObjType=(struct sType*)come_increment_ref_count(obj_type);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj44=new_value_112->mObjValue,
        new_value_112->mObjValue=(char*)come_increment_ref_count(__builtin_string(obj_value));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        new_value_112->mObjVar=obj_var;
        if(        !type->mHeap        ) {
            new_value_112->mNoFree=(_Bool)1;
        }
    }
    list$1sRightValueObject$ph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_112));
    if(    type->mPointerNum>0    ) {
        buf_117=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",right_value_num_113-1));
        add_come_code_at_function_head(info,buf_117);
        __dec_obj48=come_value->c_value_without_right_value_objects,
        come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(come_value->c_value, "04heap.c", 316, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj49=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value72=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_112->mVarName,come_value->c_value));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_value->right_value_objects=new_value_112;
        (buf_117 = come_decrement_ref_count(buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sRightValueObject_finalize, new_value_112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item){
void* __right_value67 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_114;
struct sRightValueObject* __dec_obj45;
void* __right_value68 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_115;
struct sRightValueObject* __dec_obj46;
void* __right_value69 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_116;
struct sRightValueObject* __dec_obj47;
struct list$1sRightValueObject$ph* __result_obj__41;
    if(    self->len==0    ) {
        litem_114=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value67=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sRightValueObject$ph*"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        __dec_obj45=litem_114->item,
        litem_114->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_114;
        self->head=litem_114;
    }
    else if(    self->len==1    ) {
        litem_115=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value68=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sRightValueObject$ph*"))));
        litem_115->prev=self->head;
        litem_115->next=((void*)0);
        __dec_obj46=litem_115->item,
        litem_115->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj46,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_115;
        self->head->next=litem_115;
    }
    else {
        litem_116=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value69=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sRightValueObject$ph*"))));
        litem_116->prev=self->tail;
        litem_116->next=((void*)0);
        __dec_obj47=litem_116->item,
        litem_116->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer(sRightValueObject_finalize, __dec_obj47,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_116;
        self->tail=litem_116;
    }
    self->len++;
    __result_obj__41 = self;
    come_call_finalizer(sRightValueObject_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__41;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_118;
struct list$1sRightValueObject$ph* o2_saved_119;
struct sRightValueObject* it_120;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    info->no_output_come_code    ) {
        return;
    }
    i_118=0;
    for(    o2_saved_119=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it_120=list$1sRightValueObject$ph_begin((o2_saved_119))    ;    !list$1sRightValueObject$ph_end((o2_saved_119))    ;    it_120=list$1sRightValueObject$ph_next((o2_saved_119))    ){
        if(        it_120->mID==right_value_num        ) {
            break;
        }
        i_118++;
    }
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, o2_saved_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1sRightValueObject$ph_delete(info->right_value_objects,i_118,i_118+1);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail){
int tmp_121;
struct list$1sRightValueObject$ph* __result_obj__42;
struct list_item$1sRightValueObject$ph* it_124;
int i_125;
struct list_item$1sRightValueObject$ph* prev_it_126;
struct list_item$1sRightValueObject$ph* it_127;
int i_128;
struct list_item$1sRightValueObject$ph* prev_it_129;
struct list_item$1sRightValueObject$ph* it_130;
struct list_item$1sRightValueObject$ph* head_prev_it_131;
struct list_item$1sRightValueObject$ph* tail_it_132;
int i_133;
struct list_item$1sRightValueObject$ph* prev_it_134;
struct list$1sRightValueObject$ph* __result_obj__44;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_121=tail;
        tail=head;
        head=tmp_121;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__42 = self;
        return __result_obj__42;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sRightValueObject$ph_reset(self);
    }
    else if(    head==0    ) {
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)        ) {
            if(            i_125<tail            ) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_125==tail            ) {
                self->head=it_124;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_124=it_124->next;
                i_125++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_127=self->head;
        i_128=0;
        while(        it_127!=((void*)0)        ) {
            if(            i_128==head            ) {
                self->tail=it_127->prev;
                self->tail->next=((void*)0);
            }
            if(            i_128>=head            ) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    else {
        it_130=self->head;
        head_prev_it_131=((void*)0);
        tail_it_132=((void*)0);
        i_133=0;
        while(        it_130!=((void*)0)        ) {
            if(            i_133==head            ) {
                head_prev_it_131=it_130->prev;
            }
            if(            i_133==tail            ) {
                tail_it_132=it_130;
            }
            if(            i_133>=head&&i_133<tail            ) {
                prev_it_134=it_130;
                it_130=it_130->next;
                i_133++;
                come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_130=it_130->next;
                i_133++;
            }
        }
        if(        head_prev_it_131!=((void*)0)        ) {
            head_prev_it_131->next=tail_it_132;
        }
        if(        tail_it_132!=((void*)0)        ) {
            tail_it_132->prev=head_prev_it_131;
        }
    }
    __result_obj__44 = self;
    return __result_obj__44;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_122;
struct list_item$1sRightValueObject$ph* prev_it_123;
struct list$1sRightValueObject$ph* __result_obj__43;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = self;
    return __result_obj__43;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value74 = (void*)0;
char* __result_obj__45;
void* __right_value75 = (void*)0;
char* __result_obj__46;
struct sClass* klass_135;
void* __right_value76 = (void*)0;
char* type_name_136;
void* __right_value77 = (void*)0;
char* __result_obj__47;
    if(    gComeGC||gComeC    ) {
        __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value74=__builtin_string(obj))));
        (__right_value74 = come_decrement_ref_count(__right_value74, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__45;
    }
    if(    info->no_output_come_code    ) {
        __result_obj__46 = (char*)come_increment_ref_count(((char*)(__right_value75=__builtin_string(obj))));
        (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    klass_135=type->mClass;
    type_name_136=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result_obj__47 = (char*)come_increment_ref_count(((char*)(__right_value77=xsprintf("(%s)come_increment_ref_count(%s)",type_name_136,obj))));
    (type_name_136 = come_decrement_ref_count(type_name_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value77 = come_decrement_ref_count(__right_value77, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool no_free){
struct list$1CVALUE$ph* stack_saved_137;
struct list$1sRightValueObject$ph* right_value_objects_138;
struct sClass* klass_139;
void* __right_value78 = (void*)0;
char* name_141;
void* __right_value79 = (void*)0;
_Bool no_decrement_142;
void* __right_value80 = (void*)0;
char* c_value_143;
struct sClass* klass_144;
char* class_name_145;
char* fun_name_146;
void* __right_value81 = (void*)0;
struct sType* type2_147;
void* __right_value82 = (void*)0;
char* fun_name2_148;
struct sType* __dec_obj50;
struct sFun* finalizer_149;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
char* none_generics_name_156;
void* __right_value85 = (void*)0;
char* generics_fun_name_157;
void* __right_value86 = (void*)0;
struct sGenericsFun* generics_fun_158;
void* __right_value87 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_165=0;
_Bool err_166=0;
void* __right_value88 = (void*)0;
int i_167;
void* __right_value89 = (void*)0;
char* new_fun_name_168;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
char* __dec_obj51;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_169=0;
char* new_fun_name_170=0;
char* __dec_obj52;
void* __right_value94 = (void*)0;
char* type_name_171;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* type_name_172;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
char* str_173;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
char* str_174;
struct list$1sRightValueObject$ph* __dec_obj53;
struct list$1CVALUE$ph* __dec_obj54;
memset(&i_167, 0, sizeof(int));
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    stack_saved_137=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_138=info->right_value_objects;
    klass_139=type->mClass;
    static int dec_num_140=0;
    name_141=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_140));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value79=make_define_var(type,name_141,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    add_come_code(info,"%s=%s,\n",name_141,obj);
    obj=name_141;
    no_decrement_142=(_Bool)0;
    if(    type->mPointerNum>0    ) {
        c_value_143=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_144=type->mClass;
        class_name_145=klass_144->mName;
        fun_name_146="finalize";
        type2_147=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_147->mHeap=(_Bool)0;
        fun_name2_148=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_146,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType        ) {
            __dec_obj50=type,
            type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
            come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        finalizer_149=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            finalizer_149=((struct sFun*)(__right_value83=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_148)));
            come_call_finalizer(sFun_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_149==((void*)0)            ) {
                none_generics_name_156=(char*)come_increment_ref_count(get_none_generics_name(type2_147->mClass->mName));
                generics_fun_name_157=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_156,fun_name_146));
                generics_fun_158=((struct sGenericsFun*)(__right_value86=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_157)));
                come_call_finalizer(sGenericsFun_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_158                ) {
                    multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value87=create_generics_fun((char*)come_increment_ref_count(fun_name2_148),generics_fun_158,(struct sType*)come_increment_ref_count(type),info)));
                    name_165=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                    err_166=multiple_assign_var1->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value87, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_166                    ) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_149=((struct sFun*)(__right_value88=map$2char$phsFun$ph_operator_load_element(info->funcs,name_165)));
                    come_call_finalizer(sFun_finalize, __right_value88, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_165 = come_decrement_ref_count(name_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_156 = come_decrement_ref_count(none_generics_name_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_157 = come_decrement_ref_count(generics_fun_name_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_167=128-1            ;            i_167>=1            ;            i_167--            ){
                new_fun_name_168=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_148,i_167));
                finalizer_149=((struct sFun*)(__right_value90=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_168)));
                come_call_finalizer(sFun_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                finalizer_149                ) {
                    __dec_obj51=fun_name2_148,
                    fun_name2_148=(char*)come_increment_ref_count(__builtin_string(new_fun_name_168));
                    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_168 = come_decrement_ref_count(new_fun_name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_168 = come_decrement_ref_count(new_fun_name_168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            finalizer_149==((void*)0)            ) {
                finalizer_149=((struct sFun*)(__right_value92=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_148)));
                come_call_finalizer(sFun_finalize, __right_value92, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        finalizer_149==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0        ) {
            multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value93=create_finalizer_automatically((struct sType*)come_increment_ref_count(type),fun_name_146,info)));
            fun_169=multiple_assign_var2->v1;
            new_fun_name_170=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value93, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj52=fun_name2_148,
            fun_name2_148=(char*)come_increment_ref_count(new_fun_name_170);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            finalizer_149=fun_169;
            (new_fun_name_170 = come_decrement_ref_count(new_fun_name_170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_149!=((void*)0)        ) {
            if(            klass_144->mProtocol&&type->mPointerNum==1            ) {
                type_name_171=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_143                ) {
                    add_come_last_code2(info,((char*)(__right_value106=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, (void*)0)",((char*)(__right_value95=string_to_string(fun_name2_148))),((char*)(__right_value96=string_to_string(c_value_143))),((char*)(__right_value97=string_to_string(c_value_143))),((char*)(__right_value98=string_to_string(type_name_171))),((char*)(__right_value99=string_to_string(c_value_143))),((char*)(__right_value100=string_to_string(c_value_143))),((char*)(__right_value101=string_to_string(type_name_171))),((char*)(__right_value102=string_to_string(c_value_143))),((char*)(__right_value103=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value104=int_to_string(((no_decrement_142)?(1):(0))))),((char*)(__right_value105=int_to_string(((no_free)?(1):(0)))))))));
                    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (type_name_171 = come_decrement_ref_count(type_name_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                if(                c_value_143                ) {
                    add_come_last_code2(info,((char*)(__right_value112=xsprintf("come_call_finalizer(\%s, \%s,(void*)0, (void*)0, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, (void*)0)",((char*)(__right_value107=string_to_string(fun_name2_148))),((char*)(__right_value108=string_to_string(c_value_143))),((char*)(__right_value109=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value110=int_to_string(((no_decrement_142)?(1):(0))))),((char*)(__right_value111=int_to_string(((no_free)?(1):(0)))))))));
                    (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_144->mProtocol&&type->mPointerNum==1            ) {
                type_name_172=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_173=(char*)come_increment_ref_count(xsprintf("(\%s ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0 /* no_decrement */,\%s/* no_free */, (void*)0) :0)",((char*)(__right_value114=string_to_string(name_141))),((char*)(__right_value115=string_to_string(name_141))),((char*)(__right_value116=string_to_string(name_141))),((char*)(__right_value117=string_to_string(type_name_172))),((char*)(__right_value118=string_to_string(name_141))),((char*)(__right_value119=string_to_string(type_name_172))),((char*)(__right_value120=string_to_string(name_141))),((char*)(__right_value121=int_to_string(((no_free)?(1):(0)))))));
                (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                add_come_last_code2(info,str_173);
                (type_name_172 = come_decrement_ref_count(type_name_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (str_173 = come_decrement_ref_count(str_173, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                str_174=(char*)come_increment_ref_count(xsprintf(((char*)(__right_value124=xsprintf("%%s = come_decrement_ref_count(%%s, (void*)0, (void*)0, 0/* no_decrement */,\%s/* no_free */, (void*)0)",((char*)(__right_value123=int_to_string(((no_free)?(1):(0)))))))),name_141,name_141));
                (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                add_come_last_code2(info,str_174);
                (str_174 = come_decrement_ref_count(str_174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (c_value_143 = come_decrement_ref_count(c_value_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_148 = come_decrement_ref_count(fun_name2_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj53=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_138);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj54=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_137);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj54,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (name_141 = come_decrement_ref_count(name_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_150;
unsigned int hash_151;
unsigned int it_152;
struct sFun* __result_obj__48;
struct sFun* __result_obj__49;
struct sFun* __result_obj__50;
struct sFun* __result_obj__51;
default_value_150 = (void*)0;
    memset(&default_value_150,0,sizeof(struct sFun*));
    hash_151=string_get_hash_key(((char*)key))%self->size;
    it_152=hash_151;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_152]        ) {
            if(            string_equals(self->keys[it_152],key)            ) {
                __result_obj__48 = (struct sFun*)come_increment_ref_count(self->items[it_152]);
                come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__48;
            }
            it_152++;
            if(            it_152>=self->size            ) {
                it_152=0;
            }
            else if(            it_152==hash_151            ) {
                __result_obj__49 = (struct sFun*)come_increment_ref_count(default_value_150);
                come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__49;
            }
        }
        else {
            __result_obj__50 = (struct sFun*)come_increment_ref_count(default_value_150);
            come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__50;
        }
    }
    __result_obj__51 = (struct sFun*)come_increment_ref_count(default_value_150);
    come_call_finalizer(sFun_finalize, default_value_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
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

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_153;
unsigned int hash_154;
unsigned int it_155;
struct sFun* __result_obj__52;
struct sFun* __result_obj__53;
struct sFun* __result_obj__54;
struct sFun* __result_obj__55;
default_value_153 = (void*)0;
    memset(&default_value_153,0,sizeof(struct sFun*));
    hash_154=string_get_hash_key(((char*)key))%self->size;
    it_155=hash_154;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_155]        ) {
            if(            string_equals(self->keys[it_155],key)            ) {
                __result_obj__52 = (struct sFun*)come_increment_ref_count(self->items[it_155]);
                come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__52;
            }
            it_155++;
            if(            it_155>=self->size            ) {
                it_155=0;
            }
            else if(            it_155==hash_154            ) {
                __result_obj__53 = (struct sFun*)come_increment_ref_count(default_value_153);
                come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__53;
            }
        }
        else {
            __result_obj__54 = (struct sFun*)come_increment_ref_count(default_value_153);
            come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__54;
        }
    }
    __result_obj__55 = (struct sFun*)come_increment_ref_count(default_value_153);
    come_call_finalizer(sFun_finalize, default_value_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_159;
unsigned int hash_160;
unsigned int it_161;
struct sGenericsFun* __result_obj__56;
struct sGenericsFun* __result_obj__57;
struct sGenericsFun* __result_obj__58;
struct sGenericsFun* __result_obj__59;
default_value_159 = (void*)0;
    memset(&default_value_159,0,sizeof(struct sGenericsFun*));
    hash_160=string_get_hash_key(((char*)key))%self->size;
    it_161=hash_160;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_161]        ) {
            if(            string_equals(self->keys[it_161],key)            ) {
                __result_obj__56 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_161]);
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__56;
            }
            it_161++;
            if(            it_161>=self->size            ) {
                it_161=0;
            }
            else if(            it_161==hash_160            ) {
                __result_obj__57 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
                come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__57;
            }
        }
        else {
            __result_obj__58 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
            come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__58;
        }
    }
    __result_obj__59 = (struct sGenericsFun*)come_increment_ref_count(default_value_159);
    come_call_finalizer(sGenericsFun_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
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

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_162;
unsigned int hash_163;
unsigned int it_164;
struct sGenericsFun* __result_obj__60;
struct sGenericsFun* __result_obj__61;
struct sGenericsFun* __result_obj__62;
struct sGenericsFun* __result_obj__63;
default_value_162 = (void*)0;
    memset(&default_value_162,0,sizeof(struct sGenericsFun*));
    hash_163=string_get_hash_key(((char*)key))%self->size;
    it_164=hash_163;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_164]        ) {
            if(            string_equals(self->keys[it_164],key)            ) {
                __result_obj__60 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_164]);
                come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__60;
            }
            it_164++;
            if(            it_164>=self->size            ) {
                it_164=0;
            }
            else if(            it_164==hash_163            ) {
                __result_obj__61 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
                come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__61;
            }
        }
        else {
            __result_obj__62 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
            come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__62;
        }
    }
    __result_obj__63 = (struct sGenericsFun*)come_increment_ref_count(default_value_162);
    come_call_finalizer(sGenericsFun_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__63;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_175;
struct list_item$1sRightValueObject$ph* prev_it_176;
    it_175=self->head;
    while(    it_175!=((void*)0)    ) {
        prev_it_176=it_175;
        it_175=it_175->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_177;
struct list_item$1CVALUE$ph* prev_it_178;
    it_177=self->head;
    while(    it_177!=((void*)0)    ) {
        prev_it_178=it_177;
        it_177=it_177->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_179;
struct list_item$1CVALUE$ph* prev_it_180;
    it_179=self->head;
    while(    it_179!=((void*)0)    ) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value){
struct list$1CVALUE$ph* stack_saved_181;
struct list$1sRightValueObject$ph* right_value_objects_182;
struct sType* type_before_183;
struct sType* __dec_obj55;
void* __right_value126 = (void*)0;
char* c_value_184;
struct sClass* klass_185;
char* class_name_186;
char* fun_name_187;
void* __right_value127 = (void*)0;
struct sType* type2_188;
void* __right_value128 = (void*)0;
char* fun_name2_189;
struct sFun* finalizer_190;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
char* none_generics_name_191;
void* __right_value131 = (void*)0;
char* generics_fun_name_192;
void* __right_value132 = (void*)0;
struct sGenericsFun* generics_fun_193;
void* __right_value133 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_194=0;
_Bool err_195=0;
void* __right_value134 = (void*)0;
int i_196;
void* __right_value135 = (void*)0;
char* new_fun_name_197;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
char* __dec_obj56;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_198=0;
char* new_fun_name_199=0;
char* __dec_obj57;
void* __right_value140 = (void*)0;
char* type_name_200;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_201;
struct tuple2$2char$phsType$ph* it_204;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* name_207=0;
struct sType* field_type_208=0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
char* obj_209;
void* __right_value163 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_212;
struct tuple2$2char$phsType$ph* it_213;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* name_214=0;
struct sType* field_type_215=0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
char* obj_216;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
char* type_name_217;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj58;
struct list$1CVALUE$ph* __dec_obj59;
memset(&i_196, 0, sizeof(int));
    if(    gComeGC||gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    type->mDefferRightValue    ) {
        on_drop_object((struct sType*)come_increment_ref_count(type),obj,info,comma);
    }
    stack_saved_181=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_182=info->right_value_objects;
    type_before_183=type;
    if(    info->comma_instead_of_semicolon    ) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj55=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        c_value_184=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_185=type->mClass;
        class_name_186=klass_185->mName;
        fun_name_187="finalize";
        type2_188=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_188->mHeap=(_Bool)0;
        fun_name2_189=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_187,info,(_Bool)1));
        finalizer_190=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            finalizer_190=((struct sFun*)(__right_value129=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_189)));
            come_call_finalizer(sFun_finalize, __right_value129, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_190==((void*)0)            ) {
                none_generics_name_191=(char*)come_increment_ref_count(get_none_generics_name(type2_188->mClass->mName));
                generics_fun_name_192=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_191,fun_name_187));
                generics_fun_193=((struct sGenericsFun*)(__right_value132=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_192)));
                come_call_finalizer(sGenericsFun_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_193                ) {
                    multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value133=create_generics_fun((char*)come_increment_ref_count(fun_name2_189),generics_fun_193,(struct sType*)come_increment_ref_count(type),info)));
                    name_194=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    err_195=multiple_assign_var3->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value133, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_195                    ) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_190=((struct sFun*)(__right_value134=map$2char$phsFun$ph_operator_load_element(info->funcs,name_194)));
                    come_call_finalizer(sFun_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_194 = come_decrement_ref_count(name_194, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_191 = come_decrement_ref_count(none_generics_name_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_192 = come_decrement_ref_count(generics_fun_name_192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_196=128-1            ;            i_196>=1            ;            i_196--            ){
                new_fun_name_197=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_189,i_196));
                finalizer_190=((struct sFun*)(__right_value136=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_197)));
                come_call_finalizer(sFun_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                finalizer_190                ) {
                    __dec_obj56=fun_name2_189,
                    fun_name2_189=(char*)come_increment_ref_count(__builtin_string(new_fun_name_197));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_197 = come_decrement_ref_count(new_fun_name_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_197 = come_decrement_ref_count(new_fun_name_197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            finalizer_190==((void*)0)            ) {
                finalizer_190=((struct sFun*)(__right_value138=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_189)));
                come_call_finalizer(sFun_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        finalizer_190==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0        ) {
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value139=create_finalizer_automatically((struct sType*)come_increment_ref_count(type),fun_name_187,info)));
            fun_198=multiple_assign_var4->v1;
            new_fun_name_199=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value139, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj57=fun_name2_189,
            fun_name2_189=(char*)come_increment_ref_count(new_fun_name_199);
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            finalizer_190=fun_198;
            (new_fun_name_199 = come_decrement_ref_count(new_fun_name_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_190!=((void*)0)        ) {
            if(            klass_185->mProtocol&&type->mPointerNum==1            ) {
                type_name_200=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_184                ) {
                    add_come_code(info,((char*)(__right_value153=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s /*alloca value */, \%s/* no_decrement */, \%s/* no_free */, (void*)0)\%s",((char*)(__right_value141=string_to_string(fun_name2_189))),((char*)(__right_value142=string_to_string(c_value_184))),((char*)(__right_value143=string_to_string(c_value_184))),((char*)(__right_value144=string_to_string(type_name_200))),((char*)(__right_value145=string_to_string(c_value_184))),((char*)(__right_value146=string_to_string(c_value_184))),((char*)(__right_value147=string_to_string(type_name_200))),((char*)(__right_value148=string_to_string(c_value_184))),((char*)(__right_value149=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value150=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value151=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value152=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (type_name_200 = come_decrement_ref_count(type_name_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            else {
                if(                c_value_184                ) {
                    add_come_code(info,((char*)(__right_value160=xsprintf("come_call_finalizer(\%s, \%s, (void*)0, (void*)0, \%s/* alloca value */, \%s/* no_decrement */, \%s/* no_free */, (void*)0)\%s",((char*)(__right_value154=string_to_string(fun_name2_189))),((char*)(__right_value155=string_to_string(c_value_184))),((char*)(__right_value156=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value157=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value158=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value159=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_185->mStruct&&type->mPointerNum==0            ) {
                for(                o2_saved_201=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_185->mFields)),it_204=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_201))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_201))                ;                it_204=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_201))                ){
                    multiple_assign_var5=it_204;
                    name_207=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    field_type_208=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(                    field_type_208->mHeap&&field_type_208->mPointerNum>0                    ) {
                        obj_209=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value161=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_184,name_207));
                        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        free_object((struct sType*)come_increment_ref_count(sType_clone(field_type_208)),obj_209,no_decrement,no_free,info,(_Bool)0,(_Bool)0);
                        (obj_209 = come_decrement_ref_count(obj_209, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    (name_207 = come_decrement_ref_count(name_207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else if(            klass_185->mStruct&&type->mPointerNum==1            ) {
                for(                o2_saved_212=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_185->mFields)),it_213=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_212))                ;                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_212))                ;                it_213=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_212))                ){
                    multiple_assign_var6=it_213;
                    name_214=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    field_type_215=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                    if(                    field_type_215->mHeap&&field_type_215->mPointerNum>0                    ) {
                        obj_216=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value164=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_184,name_214));
                        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        free_object((struct sType*)come_increment_ref_count(sType_clone(field_type_215)),obj_216,no_decrement,no_free,info,(_Bool)0,(_Bool)0);
                        (obj_216 = come_decrement_ref_count(obj_216, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    (name_214 = come_decrement_ref_count(name_214, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, field_type_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            if(            !type->mAllocaValue            ) {
                if(                klass_185->mProtocol&&type->mPointerNum==1                ) {
                    if(                    c_value_184                    ) {
                        type_name_217=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value178=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,(void*)0):(void*)0)\%s",((char*)(__right_value168=string_to_string(c_value_184))),((char*)(__right_value169=string_to_string(c_value_184))),((char*)(__right_value170=string_to_string(c_value_184))),((char*)(__right_value171=string_to_string(type_name_217))),((char*)(__right_value172=string_to_string(c_value_184))),((char*)(__right_value173=string_to_string(type_name_217))),((char*)(__right_value174=string_to_string(c_value_184))),((char*)(__right_value175=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value176=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value177=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (type_name_217 = come_decrement_ref_count(type_name_217, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_184                    ) {
                        add_come_code(info,((char*)(__right_value184=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, (void*)0))\%s",((char*)(__right_value179=string_to_string(c_value_184))),((char*)(__right_value180=string_to_string(c_value_184))),((char*)(__right_value181=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value182=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value183=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
        }
        (c_value_184 = come_decrement_ref_count(c_value_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_189 = come_decrement_ref_count(fun_name2_189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj58=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_182);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj59=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_181);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj59,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_202;
struct tuple2$2char$phsType$ph* __result_obj__64;
struct tuple2$2char$phsType$ph* __result_obj__65;
struct tuple2$2char$phsType$ph* result_203;
struct tuple2$2char$phsType$ph* __result_obj__66;
result_202 = (void*)0;
result_203 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_202,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__64 = result_202;
        return __result_obj__64;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__65 = self->it->item;
        return __result_obj__65;
    }
    memset(&result_203,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__66 = result_203;
    return __result_obj__66;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_205;
struct tuple2$2char$phsType$ph* __result_obj__67;
struct tuple2$2char$phsType$ph* __result_obj__68;
struct tuple2$2char$phsType$ph* result_206;
struct tuple2$2char$phsType$ph* __result_obj__69;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_205,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__67 = result_205;
        return __result_obj__67;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__68 = self->it->item;
        return __result_obj__68;
    }
    memset(&result_206,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__69 = result_206;
    return __result_obj__69;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_210;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info){
_Bool in_clone_object_218;
void* __right_value185 = (void*)0;
struct sType* type2_219;
struct sType* __dec_obj60;
char* result_220;
struct sType* result_type_221;
struct list$1CVALUE$ph* stack_saved_222;
struct list$1sRightValueObject$ph* right_value_objects_223;
void* __right_value186 = (void*)0;
char* c_value_224;
struct sClass* klass_225;
char* class_name_226;
char* fun_name_227;
struct sFun* cloner_228;
char* fun_name2_229;
void* __right_value187 = (void*)0;
char* none_generics_name_230;
void* __right_value188 = (void*)0;
struct sType* obj_type_231;
void* __right_value189 = (void*)0;
char* __dec_obj61;
void* __right_value190 = (void*)0;
char* fun_name3_232;
void* __right_value191 = (void*)0;
struct sGenericsFun* generics_fun_233;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var7 = (void*)0;
char* name_236=0;
_Bool err_237=0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__75;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* __dec_obj64;
int i_238;
void* __right_value203 = (void*)0;
char* new_fun_name_239;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
char* __dec_obj65;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_240=0;
char* new_fun_name_241=0;
char* __dec_obj66;
struct sType* __dec_obj67;
void* __right_value208 = (void*)0;
struct sType* __dec_obj68;
void* __right_value209 = (void*)0;
char* __dec_obj69;
void* __right_value210 = (void*)0;
char* __dec_obj70;
void* __right_value211 = (void*)0;
struct sType* __dec_obj71;
void* __right_value212 = (void*)0;
char* type_name_242;
void* __right_value213 = (void*)0;
char* __dec_obj72;
void* __right_value214 = (void*)0;
char* __dec_obj73;
struct list$1sRightValueObject$ph* __dec_obj74;
struct list$1CVALUE$ph* __dec_obj75;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__76;
fun_name2_229 = (void*)0;
memset(&i_238, 0, sizeof(int));
    in_clone_object_218=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_219=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj60=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_220=((void*)0);
    result_type_221=((void*)0);
    stack_saved_222=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_223=info->right_value_objects;
    c_value_224=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_225=type->mClass;
    class_name_226=klass_225->mName;
    fun_name_227="clone";
    cloner_228=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_230=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_231=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj61=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(create_method_name(obj_type_231,(_Bool)0,fun_name_227,info,(_Bool)1));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_232=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_230,fun_name_227));
        generics_fun_233=((struct sGenericsFun*)(__right_value191=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_232,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value191, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_233        ) {
            multiple_assign_var7=((struct tuple2$2char$phbool$*)(__right_value193=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_229)),generics_fun_233,(struct sType*)come_increment_ref_count(obj_type_231),info)));
            name_236=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            err_237=multiple_assign_var7->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value193, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_237            ) {
                __result_obj__75 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value199=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 660, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "04heap.c", 660, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string(""))))));
                (name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_230 = come_decrement_ref_count(none_generics_name_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_232 = come_decrement_ref_count(fun_name3_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, result_type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (c_value_224 = come_decrement_ref_count(c_value_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (fun_name2_229 = come_decrement_ref_count(fun_name2_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value199, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__75;
            }
            cloner_228=((struct sFun*)(__right_value200=map$2char$phsFun$ph_operator_load_element(info->funcs,name_236)));
            come_call_finalizer(sFun_finalize, __right_value200, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_236 = come_decrement_ref_count(name_236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_228=((struct sFun*)(__right_value201=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_229)));
            come_call_finalizer(sFun_finalize, __right_value201, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_230 = come_decrement_ref_count(none_generics_name_230, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_231, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_232 = come_decrement_ref_count(fun_name3_232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj64=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_227,info,(_Bool)1));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_238=128-1        ;        i_238>=1        ;        i_238--        ){
            new_fun_name_239=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_229,i_238));
            cloner_228=((struct sFun*)(__right_value204=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_239)));
            come_call_finalizer(sFun_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_228            ) {
                __dec_obj65=fun_name2_229,
                fun_name2_229=(char*)come_increment_ref_count(__builtin_string(new_fun_name_239));
                __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_239 = come_decrement_ref_count(new_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_239 = come_decrement_ref_count(new_fun_name_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_228==((void*)0)        ) {
            cloner_228=((struct sFun*)(__right_value206=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_229)));
            come_call_finalizer(sFun_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_228==((void*)0)&&!type->mClass->mNumber    ) {
        multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value207=create_cloner_automatically((struct sType*)come_increment_ref_count(type),fun_name_227,info)));
        fun_240=multiple_assign_var8->v1;
        new_fun_name_241=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value207, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj66=fun_name2_229,
        fun_name2_229=(char*)come_increment_ref_count(new_fun_name_241);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_228=fun_240;
        (new_fun_name_241 = come_decrement_ref_count(new_fun_name_241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    cloner_228!=((void*)0)    ) {
        __dec_obj67=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(cloner_228->mResultType);
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj68=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(result_type_221),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj69=result_220,
        result_220=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_229,c_value_224));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj70=result_220,
            result_220=(char*)come_increment_ref_count(append_stackframe(result_220,result_type_221,info));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
    }
    else {
        __dec_obj71=result_type_221,
        result_type_221=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        type2_219->mHeap=(_Bool)1;
        type_name_242=(char*)come_increment_ref_count(make_type_name_string(type2_219,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj72=result_220,
        result_220=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_242,c_value_224,info->sname,info->sline,type_name_242));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        gComeDebug        ) {
            __dec_obj73=result_220,
            result_220=(char*)come_increment_ref_count(append_stackframe(result_220,result_type_221,info));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        (type_name_242 = come_decrement_ref_count(type_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj74=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_223);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj75=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_222);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->in_clone_object=in_clone_object_218;
    __result_obj__76 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value216=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 722, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_221),(char*)come_increment_ref_count(result_220)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (c_value_224 = come_decrement_ref_count(c_value_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name2_229 = come_decrement_ref_count(fun_name2_229, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_234;
unsigned int it_235;
struct sGenericsFun* __result_obj__70;
struct sGenericsFun* __result_obj__71;
struct sGenericsFun* __result_obj__72;
struct sGenericsFun* __result_obj__73;
    hash_234=string_get_hash_key(((char*)key))%self->size;
    it_235=hash_234;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_235]        ) {
            if(            string_equals(self->keys[it_235],key)            ) {
                __result_obj__70 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_235]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            it_235++;
            if(            it_235>=self->size            ) {
                it_235=0;
            }
            else if(            it_235==hash_234            ) {
                __result_obj__71 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__71;
            }
        }
        else {
            __result_obj__72 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__72;
        }
    }
    __result_obj__73 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj62;
char* __dec_obj63;
struct tuple2$2sType$phchar$ph* __result_obj__74;
    __dec_obj62=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj63=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__74 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma){
struct sType* __dec_obj76;
void* __right_value217 = (void*)0;
char* c_value_243;
char* fun_name_244;
void* __right_value218 = (void*)0;
struct sType* type2_245;
void* __right_value219 = (void*)0;
char* fun_name2_246;
struct sFun* dropper_247;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
char* none_generics_name_248;
void* __right_value222 = (void*)0;
char* generics_fun_name_249;
void* __right_value223 = (void*)0;
struct sGenericsFun* generics_fun_250;
void* __right_value224 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var9 = (void*)0;
char* name_251=0;
_Bool err_252=0;
void* __right_value225 = (void*)0;
int i_253;
void* __right_value226 = (void*)0;
char* new_fun_name_254;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
char* __dec_obj77;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
memset(&i_253, 0, sizeof(int));
    if(    gComeC    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    info->no_output_come_code    ) {
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return;
    }
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj76=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    type->mClass->mStruct||list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        c_value_243=(char*)come_increment_ref_count(__builtin_string(obj));
        fun_name_244="on_drop";
        type2_245=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_245->mHeap=(_Bool)0;
        fun_name2_246=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_244,info,(_Bool)1));
        dropper_247=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0        ) {
            dropper_247=((struct sFun*)(__right_value220=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_246)));
            come_call_finalizer(sFun_finalize, __right_value220, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            dropper_247==((void*)0)            ) {
                none_generics_name_248=(char*)come_increment_ref_count(get_none_generics_name(type2_245->mClass->mName));
                generics_fun_name_249=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_248,fun_name_244));
                generics_fun_250=((struct sGenericsFun*)(__right_value223=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_249)));
                come_call_finalizer(sGenericsFun_finalize, __right_value223, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                generics_fun_250                ) {
                    multiple_assign_var9=((struct tuple2$2char$phbool$*)(__right_value224=create_generics_fun((char*)come_increment_ref_count(fun_name2_246),generics_fun_250,(struct sType*)come_increment_ref_count(type),info)));
                    name_251=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    err_252=multiple_assign_var9->v2;
                    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value224, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_252                    ) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    dropper_247=((struct sFun*)(__right_value225=map$2char$phsFun$ph_operator_load_element(info->funcs,name_251)));
                    come_call_finalizer(sFun_finalize, __right_value225, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    (name_251 = come_decrement_ref_count(name_251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                (none_generics_name_248 = come_decrement_ref_count(none_generics_name_248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (generics_fun_name_249 = come_decrement_ref_count(generics_fun_name_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        else {
            for(            i_253=128-1            ;            i_253>=1            ;            i_253--            ){
                new_fun_name_254=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_246,i_253));
                dropper_247=((struct sFun*)(__right_value227=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_254)));
                come_call_finalizer(sFun_finalize, __right_value227, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                dropper_247                ) {
                    __dec_obj77=fun_name2_246,
                    fun_name2_246=(char*)come_increment_ref_count(__builtin_string(new_fun_name_254));
                    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    (new_fun_name_254 = come_decrement_ref_count(new_fun_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                (new_fun_name_254 = come_decrement_ref_count(new_fun_name_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            if(            dropper_247==((void*)0)            ) {
                dropper_247=((struct sFun*)(__right_value229=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_246)));
                come_call_finalizer(sFun_finalize, __right_value229, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        if(        dropper_247!=((void*)0)        ) {
            if(            c_value_243            ) {
                if(                comma                ) {
                    add_come_code(info,((char*)(__right_value232=xsprintf("\%s(\%s),",((char*)(__right_value230=string_to_string(fun_name2_246))),((char*)(__right_value231=string_to_string(c_value_243)))))));
                    (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value235=xsprintf("\%s(\%s);\n",((char*)(__right_value233=string_to_string(fun_name2_246))),((char*)(__right_value234=string_to_string(c_value_243)))))));
                    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        (c_value_243 = come_decrement_ref_count(c_value_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name2_246 = come_decrement_ref_count(fun_name2_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_255;
struct list$1sRightValueObject$ph* right_value_objects_256;
int n_257;
struct list$1sRightValueObject$ph* o2_saved_258;
struct sRightValueObject* it_259;
struct sVar* var__260;
char* __dec_obj78;
struct list$1sRightValueObject$ph* o2_saved_261;
struct sRightValueObject* it_262;
struct sType* type_263;
void* __right_value236 = (void*)0;
struct sType* type2_264;
void* __right_value237 = (void*)0;
struct sType* __dec_obj79;
void* __right_value238 = (void*)0;
    if(    gComeGC||gComeC    ) {
        return;
    }
    if(    info->comma_instead_of_semicolon    ) {
        comma=(_Bool)1;
    }
    free_right_value_255=(_Bool)0;
    right_value_objects_256=info->right_value_objects;
    n_257=0;
    for(    o2_saved_258=(right_value_objects_256),it_259=list$1sRightValueObject$ph_begin((o2_saved_258))    ;    !list$1sRightValueObject$ph_end((o2_saved_258))    ;    it_259=list$1sRightValueObject$ph_next((o2_saved_258))    ){
        if(        it_259&&!it_259->mFreed        ) {
            if(            string_operator_equals(it_259->mFunName,info->come_fun->mName)&&it_259->mBlockLevel==info->block_level&&!it_259->mStored            ) {
                if(                it_259->mObjType                ) {
                    on_drop_object((struct sType*)come_increment_ref_count(it_259->mObjType),it_259->mObjValue,info,comma);
                    var__260=it_259->mObjVar;
                    __dec_obj78=var__260->mCValueName,
                    var__260->mCValueName=((void*)0);
                    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
        }
        n_257++;
    }
    for(    o2_saved_261=(right_value_objects_256),it_262=list$1sRightValueObject$ph_begin((o2_saved_261))    ;    !list$1sRightValueObject$ph_end((o2_saved_261))    ;    it_262=list$1sRightValueObject$ph_next((o2_saved_261))    ){
        if(        it_262&&!it_262->mFreed        ) {
            if(            string_operator_equals(it_262->mFunName,info->come_fun->mName)&&it_262->mBlockLevel==info->block_level&&!it_262->mStored&&!it_262->mNoFree            ) {
                type_263=(struct sType*)come_increment_ref_count(it_262->mType);
                type2_264=(struct sType*)come_increment_ref_count(sType_clone(type_263));
                if(                info->generics_type                ) {
                    __dec_obj79=type_263,
                    type_263=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type2_264),(struct sType*)come_increment_ref_count(info->generics_type),info));
                    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
                free_object((struct sType*)come_increment_ref_count(sType_clone(type_263)),it_262->mVarName,!it_262->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0);
                it_262->mFreed=(_Bool)1;
                free_right_value_255=(_Bool)1;
                come_call_finalizer(sType_finalize, type_263, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_264, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        n_257++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_265;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sVar* var__266;
struct sVar* __result_obj__85;
struct sVar* __result_obj__86;
    it_265=table;
    while(    it_265    ) {
        var__266=((struct sVar*)(__right_value241=map$2char$phsVar$ph_operator_load_element(it_265->mVars,((char*)(__right_value240=__builtin_string(name))))));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value241, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        var__266        ) {
            __result_obj__85 = var__266;
            return __result_obj__85;
        }
        it_265=it_265->mParent;
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_267;
unsigned int hash_268;
unsigned int it_269;
struct sVar* __result_obj__77;
struct sVar* __result_obj__78;
struct sVar* __result_obj__79;
struct sVar* __result_obj__80;
default_value_267 = (void*)0;
    memset(&default_value_267,0,sizeof(struct sVar*));
    hash_268=string_get_hash_key(((char*)key))%self->size;
    it_269=hash_268;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_269]        ) {
            if(            string_equals(self->keys[it_269],key)            ) {
                __result_obj__77 = (struct sVar*)come_increment_ref_count(self->items[it_269]);
                come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__77;
            }
            it_269++;
            if(            it_269>=self->size            ) {
                it_269=0;
            }
            else if(            it_269==hash_268            ) {
                __result_obj__78 = (struct sVar*)come_increment_ref_count(default_value_267);
                come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__78;
            }
        }
        else {
            __result_obj__79 = (struct sVar*)come_increment_ref_count(default_value_267);
            come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__79;
        }
    }
    __result_obj__80 = (struct sVar*)come_increment_ref_count(default_value_267);
    come_call_finalizer(sVar_finalize, default_value_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
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

static struct sVar* map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_270;
unsigned int hash_271;
unsigned int it_272;
struct sVar* __result_obj__81;
struct sVar* __result_obj__82;
struct sVar* __result_obj__83;
struct sVar* __result_obj__84;
default_value_270 = (void*)0;
    memset(&default_value_270,0,sizeof(struct sVar*));
    hash_271=string_get_hash_key(((char*)key))%self->size;
    it_272=hash_271;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_272]        ) {
            if(            string_equals(self->keys[it_272],key)            ) {
                __result_obj__81 = (struct sVar*)come_increment_ref_count(self->items[it_272]);
                come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__81;
            }
            it_272++;
            if(            it_272>=self->size            ) {
                it_272=0;
            }
            else if(            it_272==hash_271            ) {
                __result_obj__82 = (struct sVar*)come_increment_ref_count(default_value_270);
                come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__82;
            }
        }
        else {
            __result_obj__83 = (struct sVar*)come_increment_ref_count(default_value_270);
            come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__83;
        }
    }
    __result_obj__84 = (struct sVar*)come_increment_ref_count(default_value_270);
    come_call_finalizer(sVar_finalize, default_value_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_273;
char* it_276;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sVar* p_279;
struct sType* type_280;
struct sClass* klass_281;
_Bool comma_282;
void* __right_value245 = (void*)0;
struct sType* type2_283;
void* __right_value246 = (void*)0;
struct sType* type2_284;
void* __right_value247 = (void*)0;
char* c_value_285;
void* __right_value248 = (void*)0;
struct sType* type2_286;
    if(    gComeGC||gComeC    ) {
        return;
    }
    for(    o2_saved_273=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_276=map$2char$phsVar$ph_begin((o2_saved_273))    ;    !map$2char$phsVar$ph_end((o2_saved_273))    ;    it_276=map$2char$phsVar$ph_next((o2_saved_273))    ){
        p_279=((struct sVar*)(__right_value244=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value243=__builtin_string(it_276))))));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value244, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type_280=p_279->mType;
        klass_281=type_280->mClass;
        comma_282=p_279->mComma;
        if(        type_280->mChannel        ) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_279->mCValueName,p_279->mCValueName,comma_282);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_279->mCValueName,p_279->mCValueName,comma_282);
        }
        else if(        ret_value!=((void*)0)&&p_279->mCValueName!=((void*)0)&&string_operator_equals(p_279->mCValueName,ret_value->mCValueName)&&type_280->mHeap        ) {
            type2_283=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            free_object((struct sType*)come_increment_ref_count(type2_283),p_279->mCValueName,(_Bool)0,(_Bool)1,info,comma_282,(_Bool)1);
            come_call_finalizer(sType_finalize, type2_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        type_280->mHeap&&p_279->mCValueName        ) {
            type2_284=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            free_object((struct sType*)come_increment_ref_count(type2_284),p_279->mCValueName,(_Bool)0,(_Bool)0,info,comma_282,(_Bool)0);
            come_call_finalizer(sType_finalize, type2_284, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else if(        klass_281->mStruct&&p_279->mCValueName&&type_280->mAllocaValue&&!type_280->mNoCallingDestructor        ) {
            c_value_285=(char*)come_increment_ref_count(xsprintf("(&%s)",p_279->mCValueName));
            type2_286=(struct sType*)come_increment_ref_count(sType_clone(type_280));
            type2_286->mPointerNum++;
            free_object((struct sType*)come_increment_ref_count(type2_286),c_value_285,(_Bool)0,(_Bool)0,info,comma_282,(_Bool)0);
            (c_value_285 = come_decrement_ref_count(c_value_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, type2_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_274;
char* __result_obj__87;
char* __result_obj__88;
char* result_275;
char* __result_obj__89;
result_274 = (void*)0;
result_275 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_274,0,sizeof(char*));
        __result_obj__87 = result_274;
        return __result_obj__87;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__88 = self->key_list->it->item;
        return __result_obj__88;
    }
    memset(&result_275,0,sizeof(char*));
    __result_obj__89 = result_275;
    return __result_obj__89;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_277;
char* __result_obj__90;
char* __result_obj__91;
char* result_278;
char* __result_obj__92;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_277,0,sizeof(char*));
        __result_obj__90 = result_277;
        return __result_obj__90;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__91 = self->key_list->it->item;
        return __result_obj__91;
    }
    memset(&result_278,0,sizeof(char*));
    __result_obj__92 = result_278;
    return __result_obj__92;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_287;
int i_288;
    for(    i_287=0    ;    i_287<self->size    ;    i_287++    ){
        if(        self->item_existance[i_287]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_287], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_288=0    ;    i_288<self->size    ;    i_288++    ){
        if(        self->item_existance[i_288]        ) {
            if(            1            ) {
                (self->keys[i_288] = come_decrement_ref_count(self->keys[i_288], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_289;
    if(    gComeGC||gComeC    ) {
        return;
    }
    it_289=info->lv_table;
    if(    it_289==info->come_fun->mBlock->mVarTable    ) {
        free_objects(it_289,ret_value,info);
    }
    else {
        while(        it_289!=info->come_fun->mBlock->mVarTable        ) {
            free_objects(it_289,ret_value,info);
            it_289=it_289->mParent;
        }
        free_objects(it_289,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_290;
struct sVarTable* current_loop_vtable_291;
struct sVarTable* it_292;
    if(    gComeGC||gComeC    ) {
        return;
    }
    ret_value_290=((void*)0);
    current_loop_vtable_291=info->current_loop_vtable;
    if(    current_loop_vtable_291!=((void*)0)    ) {
        it_292=info->lv_table;
        while(        it_292!=current_loop_vtable_291        ) {
            free_objects(it_292,ret_value_290,info);
            it_292=it_292->mParent;
        }
        free_objects(it_292,ret_value_290,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __right_value249 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __result_obj__93;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* __result_obj__94;
void* __right_value260 = (void*)0;
char* var_name_294;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
_Bool _condtional_value_X2;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* __result_obj__95;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
char* __result_obj__96;
void* __right_value277 = (void*)0;
char* __result_obj__97;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0    ) {
        if(        gComeDebug||type->mRecord        ) {
            if(            (_condtional_value_X1=(((struct sFun*)(__right_value249=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),            come_call_finalizer(sFun_finalize, __right_value249, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value254=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s,\%s),\%s,come_pop_stackframe_v2())",((char*)(__right_value250=string_to_string(info->sname))),((char*)(__right_value251=int_to_string(info->sline))),((char*)(__right_value252=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value253=charp_to_string(c_value)))))));
                (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__93;
            }
            else {
                __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value259=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value255=string_to_string(info->sname))),((char*)(__right_value256=int_to_string(info->sline))),((char*)(__right_value257=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value258=charp_to_string(c_value)))))));
                (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__94;
            }
        }
    }
    else if(    gComeDebug||type->mRecord    ) {
        static int n_293=0;
        ++n_293;
        var_name_294=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_293));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value261=make_define_var(type,var_name_294,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        (_condtional_value_X2=(((struct sFun*)(__right_value262=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),        come_call_finalizer(sFun_finalize, __right_value262, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
        _condtional_value_X2        ) {
            __result_obj__95 = (char*)come_increment_ref_count(((char*)(__right_value269=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe_v2(), \%s)",((char*)(__right_value263=string_to_string(info->sname))),((char*)(__right_value264=int_to_string(info->sline))),((char*)(__right_value265=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value266=string_to_string(var_name_294))),((char*)(__right_value267=charp_to_string(c_value))),((char*)(__right_value268=string_to_string(var_name_294)))))));
            (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value265 = come_decrement_ref_count(__right_value265, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value266 = come_decrement_ref_count(__right_value266, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__95 = come_decrement_ref_count(__result_obj__95, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__95;
        }
        else {
            __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value276=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value270=string_to_string(info->sname))),((char*)(__right_value271=int_to_string(info->sline))),((char*)(__right_value272=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value273=string_to_string(var_name_294))),((char*)(__right_value274=charp_to_string(c_value))),((char*)(__right_value275=string_to_string(var_name_294)))))));
            (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__96;
        }
        (var_name_294 = come_decrement_ref_count(var_name_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __result_obj__97 = (char*)come_increment_ref_count(((char*)(__right_value277=__builtin_string(c_value))));
    (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__97 = come_decrement_ref_count(__result_obj__97, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__97;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_295;
char* it_296;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sVar* p_297;
struct sType* type_298;
struct sClass* klass_299;
_Bool __result_obj__98;
_Bool __result_obj__99;
_Bool __result_obj__100;
_Bool __result_obj__101;
    if(    gComeGC||gComeC    ) {
        return (_Bool)1;
    }
    for(    o2_saved_295=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_296=map$2char$phsVar$ph_begin((o2_saved_295))    ;    !map$2char$phsVar$ph_end((o2_saved_295))    ;    it_296=map$2char$phsVar$ph_next((o2_saved_295))    ){
        p_297=((struct sVar*)(__right_value280=map$2char$phsVar$ph_operator_load_element(table->mVars,((char*)(__right_value279=__builtin_string(it_296))))));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sVar_finalize, __right_value280, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type_298=p_297->mType;
        klass_299=type_298->mClass;
        if(        type_298->mChannel        ) {
            __result_obj__98 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__98;
        }
        else if(        ret_value!=((void*)0)&&p_297->mCValueName!=((void*)0)&&string_operator_equals(p_297->mCValueName,ret_value->mCValueName)&&type_298->mHeap        ) {
            __result_obj__99 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__99;
        }
        else if(        type_298->mHeap&&p_297->mCValueName        ) {
            __result_obj__100 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__100;
        }
        else if(        klass_299->mStruct&&p_297->mCValueName&&type_298->mAllocaValue&&!type_298->mNoCallingDestructor        ) {
            __result_obj__101 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            return __result_obj__101;
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_300;
    if(    gComeGC||gComeC    ) {
        return (_Bool)0;
    }
    it_300=info->lv_table;
    if(    it_300==info->come_fun->mBlock->mVarTable    ) {
        if(        existance_free_objects(it_300,ret_value,info)        ) {
            return (_Bool)1;
        }
    }
    else {
        while(        it_300!=info->come_fun->mBlock->mVarTable        ) {
            if(            existance_free_objects(it_300,ret_value,info)            ) {
                return (_Bool)1;
            }
            it_300=it_300->mParent;
        }
        if(        existance_free_objects(it_300,ret_value,info)        ) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObject$ph* right_value_objects_301;
struct list$1sRightValueObject$ph* o2_saved_302;
struct sRightValueObject* it_303;
    if(    gComeGC||gComeC    ) {
        return (_Bool)0;
    }
    right_value_objects_301=info->right_value_objects;
    for(    o2_saved_302=(right_value_objects_301),it_303=list$1sRightValueObject$ph_begin((o2_saved_302))    ;    !list$1sRightValueObject$ph_end((o2_saved_302))    ;    it_303=list$1sRightValueObject$ph_next((o2_saved_302))    ){
        if(        it_303&&!it_303->mFreed        ) {
            if(            string_operator_equals(it_303->mFunName,info->come_fun->mName)&&it_303->mBlockLevel==info->block_level            ) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

