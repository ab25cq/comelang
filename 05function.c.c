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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
void on_drop_object(struct sType* type, char* obj, struct sInfo* info, _Bool comma);
void on_load_object(struct sType* type, char* obj, struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
_Bool existance_free_right_value_objects(struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* p2, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value0 = (void*)0;
struct sSemicolonNode* __result_obj__1;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__1 = (struct sSemicolonNode*)come_increment_ref_count(self);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__1;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value1 = (void*)0;
char* __result_obj__2;
    __result_obj__2 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string("sSemicolonNode"))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__2 = come_decrement_ref_count(__result_obj__2, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__2;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value2 = (void*)0;
struct sLambdaNode* __result_obj__3;
    ((struct sNodeBase*)(__right_value2=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value2, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    self->mFun=fun;
    __result_obj__3 = (struct sLambdaNode*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sLambdaNode_finalize, __result_obj__3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__3;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value3 = (void*)0;
char* __result_obj__4;
    __result_obj__4 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string("sLambdaNode"))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__4 = come_decrement_ref_count(__result_obj__4, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__4;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_0;
int block_level_1;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct CVALUE* come_value_2;
void* __right_value6 = (void*)0;
char* __dec_obj1;
void* __right_value45 = (void*)0;
struct sType* __dec_obj26;
_Bool __result_obj__22;
    come_fun_0=info->come_fun;
    info->come_fun=self->mFun;
    block_level_1=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock    ) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_1;
    come_value_2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj1=come_value_2->c_value,
    come_value_2->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj26=come_value_2->type,
    come_value_2->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    come_value_2->var=((void*)0);
    add_come_last_code(info,"%s",come_value_2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_2));
    info->come_fun=come_fun_0;
    __result_obj__22 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__22;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
void* __right_value7 = (void*)0;
struct sType* result_9;
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
void* __right_value25 = (void*)0;
char* __dec_obj14;
void* __right_value33 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
void* __right_value34 = (void*)0;
char* __dec_obj19;
void* __right_value35 = (void*)0;
struct list$1sType$ph* __dec_obj20;
void* __right_value43 = (void*)0;
struct list$1char$ph* __dec_obj24;
void* __right_value44 = (void*)0;
struct sType* __dec_obj25;
struct sType* __result_obj__20;
    if(    self==(void*)0    ) {
        __result_obj__5 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__5;
    }
    result_9=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_9->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj2=result_9->mOriginalLoadVarType,
        result_9->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj3=result_9->mChannelType,
        result_9->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj7=result_9->mGenericsTypes,
        result_9->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj8=result_9->mNoSolvedGenericsType,
        result_9->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj9=result_9->mSizeNum,
        result_9->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj10=result_9->mAlignas,
        result_9->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj11=result_9->mTupleName,
        result_9->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj12=result_9->mAttribute,
        result_9->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj13=result_9->mVarAttribute,
        result_9->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_9->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_9->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_9->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_9->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_9->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_9->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_9->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_9->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_9->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_9->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_9->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_9->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_9->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_9->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_9->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_9->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj14=result_9->mAsmName,
        result_9->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_9->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj18=result_9->mArrayNum,
        result_9->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_9->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj19=result_9->mOriginalTypeName,
        result_9->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_9->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_9->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj20=result_9->mParamTypes,
        result_9->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj20,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj24=result_9->mParamNames,
        result_9->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj25=result_9->mResultType,
        result_9->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_9->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_9->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__20 = (struct sType*)come_increment_ref_count(result_9);
    come_call_finalizer(sType_finalize, result_9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
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
struct list_item$1sType$ph* it_3;
struct list_item$1sType$ph* prev_it_4;
    it_3=self->head;
    while(    it_3!=((void*)0)    ) {
        prev_it_4=it_3;
        it_3=it_3->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_5;
struct list_item$1sNode$ph* prev_it_6;
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        prev_it_6=it_5;
        it_5=it_5->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_7;
struct list_item$1char$ph* prev_it_8;
    it_7=self->head;
    while(    it_7!=((void*)0)    ) {
        prev_it_8=it_7;
        it_7=it_7->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* result_10;
struct list_item$1sType$ph* it_11;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)    ) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__6, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__6;
    }
    result_10=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_11=self->head;
    while(    it_11!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        else {
            list$1sType$ph_add(result_10,(struct sType*)come_increment_ref_count(sType_clone(it_11->item)));
        }
        it_11=it_11->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result_10);
    come_call_finalizer(list$1sType$ph$p_finalize, result_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_12;
struct sType* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1sType$ph* litem_13;
struct sType* __dec_obj5;
void* __right_value14 = (void*)0;
struct list_item$1sType$ph* litem_14;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0    ) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        __dec_obj4=litem_12->item,
        litem_12->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_12;
        self->head=litem_12;
    }
    else if(    self->len==1    ) {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value13=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj5=litem_13->item,
        litem_13->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value14=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj6=litem_14->item,
        litem_14->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
    __result_obj__8 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_15;
struct list_item$1sType$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value19 = (void*)0;
struct sNode* result_17;
struct sNode* __result_obj__11;
    if(    self==(void*)0    ) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__10;
    }
    result_17=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_17->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_17->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_17->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_17->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_17->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_17->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_17->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_17->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_17->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_17->no_mutex=self->no_mutex;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result_17);
    ((result_17) ? result_17 = come_decrement_ref_count(result_17, ((struct sNode*)result_17)->finalize, ((struct sNode*)result_17)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* result_18;
struct list_item$1sNode$ph* it_19;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)    ) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__12;
    }
    result_18=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_19=self->head;
    while(    it_19!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        else {
            list$1sNode$ph_add(result_18,(struct sNode*)come_increment_ref_count(sNode_clone(it_19->item)));
        }
        it_19=it_19->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result_18);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value28 = (void*)0;
struct list_item$1sNode$ph* litem_20;
struct sNode* __dec_obj15;
void* __right_value29 = (void*)0;
struct list_item$1sNode$ph* litem_21;
struct sNode* __dec_obj16;
void* __right_value30 = (void*)0;
struct list_item$1sNode$ph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0    ) {
        litem_20=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value28=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        __dec_obj15=litem_20->item,
        litem_20->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1    ) {
        litem_21=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value29=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        __dec_obj16=litem_21->item,
        litem_21->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value30=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        __dec_obj17=litem_22->item,
        litem_22->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_23;
struct list_item$1sNode$ph* prev_it_24;
    it_23=self->head;
    while(    it_23!=((void*)0)    ) {
        prev_it_24=it_23;
        it_23=it_23->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_24, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* result_25;
struct list_item$1char$ph* it_26;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result_25=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_26=self->head;
    while(    it_26!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_25,(char*)come_increment_ref_count((char*)come_memdup(it_26->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_26=it_26->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result_25);
    come_call_finalizer(list$1char$ph$p_finalize, result_25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value38 = (void*)0;
struct list_item$1char$ph* litem_27;
char* __dec_obj21;
void* __right_value39 = (void*)0;
struct list_item$1char$ph* litem_28;
char* __dec_obj22;
void* __right_value40 = (void*)0;
struct list_item$1char$ph* litem_29;
char* __dec_obj23;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value38=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_27->prev=((void*)0);
        litem_27->next=((void*)0);
        __dec_obj21=litem_27->item,
        litem_27->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_27;
        self->head=litem_27;
    }
    else if(    self->len==1    ) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value39=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_28->prev=self->head;
        litem_28->next=((void*)0);
        __dec_obj22=litem_28->item,
        litem_28->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_28;
        self->head->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value40=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_29->prev=self->tail;
        litem_29->next=((void*)0);
        __dec_obj23=litem_29->item,
        litem_29->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_29;
        self->tail=litem_29;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_30;
struct list_item$1char$ph* prev_it_31;
    it_30=self->head;
    while(    it_30!=((void*)0)    ) {
        prev_it_31=it_30;
        it_30=it_30->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value46 = (void*)0;
struct list_item$1CVALUE$ph* litem_32;
struct CVALUE* __dec_obj27;
void* __right_value47 = (void*)0;
struct list_item$1CVALUE$ph* litem_33;
struct CVALUE* __dec_obj28;
void* __right_value48 = (void*)0;
struct list_item$1CVALUE$ph* litem_34;
struct CVALUE* __dec_obj29;
struct list$1CVALUE$ph* __result_obj__21;
    if(    self->len==0    ) {
        litem_32=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value46=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1CVALUE$ph*"))));
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        __dec_obj27=litem_32->item,
        litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj27,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1    ) {
        litem_33=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value47=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1CVALUE$ph*"))));
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        __dec_obj28=litem_33->item,
        litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value48=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        __dec_obj29=litem_34->item,
        litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj29,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result_obj__21 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__21;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value49 = (void*)0;
struct sFun* __dec_obj30;
struct sFunNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value49=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj30=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer(sFun_finalize, __dec_obj30,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__23 = (struct sFunNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFunNode_finalize, __result_obj__23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__23;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value50 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value50=__builtin_string("sFunNode"))));
    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_35;
int block_level_36;
void* __right_value51 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock    ) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")        ) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_36=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_36;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2        ) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value51=xsprintf("come_heap_final();\n"))));
            (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    info->come_fun=come_fun_35;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct sBlock* result_37;
int sline_top_38;
int block_level_39;
char* p_saved_40;
int sline_saved_41;
char* sname_saved_42;
void* __right_value54 = (void*)0;
char* __dec_obj31;
char* __dec_obj32;
struct map$2char$phchar$ph* __dec_obj33;
char* p_45;
int sline_46;
void* __right_value55 = (void*)0;
char* sname_47;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
char* module_name_48;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$ph* params_49;
void* __right_value60 = (void*)0;
char* word_50;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
char* __dec_obj34;
void* __right_value64 = (void*)0;
char* __dec_obj35;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value68 = (void*)0;
struct sBlock* __result_obj__33;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct sClassModule* module_57;
void* __right_value72 = (void*)0;
struct sBlock* __result_obj__34;
void* __right_value73 = (void*)0;
void* __right_value79 = (void*)0;
struct map$2char$phchar$ph* __dec_obj37;
int i_63;
struct list$1char$ph* o2_saved_64;
char* it_67;
void* __right_value80 = (void*)0;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
char* __dec_obj41;
void* __right_value95 = (void*)0;
struct sNode* node_116;
void* __right_value96 = (void*)0;
char* __dec_obj42;
void* __right_value97 = (void*)0;
struct sBlock* __result_obj__63;
_Bool omit_semicolon_120;
void* __right_value101 = (void*)0;
char* __dec_obj46;
char* head_135;
void* __right_value102 = (void*)0;
struct sNode* value_136;
char* tail_137;
void* __right_value103 = (void*)0;
struct sNode* __dec_obj47;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct sNode* node_139;
void* __right_value106 = (void*)0;
char* __dec_obj48;
struct sNode* node_140;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj50;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj51;
void* __right_value113 = (void*)0;
struct sBlock* __result_obj__70;
_Bool omit_semicolon_142;
char* p_143;
char* head_144;
void* __right_value114 = (void*)0;
char* source_145;
void* __right_value115 = (void*)0;
struct sNode* node_146;
void* __right_value116 = (void*)0;
struct sBlock* __result_obj__71;
struct sBlock* __result_obj__72;
node_140 = (void*)0;
    result_37=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
    sline_top_38=info->sline_top;
    info->sline_top=info->sline;
    block_level_39=info->block_level;
    if(    !no_block_level    ) {
        info->block_level++;
    }
    if(    *info->p==123    ) {
        p_saved_40=((void*)0);
        sline_saved_41=0;
        sname_saved_42=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while(        (_Bool)1        ) {
            if(            p_saved_40            ) {
                if(                *info->p==0                ) {
                    info->p=p_saved_40;
                    info->sline=sline_saved_41;
                    __dec_obj31=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    p_saved_40=((void*)0);
                    sline_saved_41=0;
                    __dec_obj32=sname_saved_42,
                    sname_saved_42=((void*)0);
                    __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    __dec_obj33=info->module_params,
                    info->module_params=((void*)0);
                    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_45=info->p;
            sline_46=info->sline;
            sname_47=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123            ) {
                info->sline_top=sline_46;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0            ) {
                ((char*)(__right_value56=parse_word(info)));
                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                module_name_48=(char*)come_increment_ref_count(parse_word(info));
                params_49=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(                *info->p==60                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1                    ) {
                        word_50=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_49,(char*)come_increment_ref_count(word_50));
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value61=err_msg(info,"invalid source end")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        else if(                        *info->p==62                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value62=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        (word_50 = come_decrement_ref_count(word_50, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                if(                *info->p==59                ) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_40=info->p;
                sline_saved_41=info->sline;
                __dec_obj34=sname_saved_42,
                sname_saved_42=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                __dec_obj35=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_48));
                __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                info->sline=0;
                if(                (_condtional_value_X1=(((struct sClassModule*)(__right_value67=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value66=__builtin_string(module_name_48))))))==((void*)0))),                (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0)),
                come_call_finalizer(sClassModule_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
                _condtional_value_X1                ) {
                    ((struct tuple2$2int$bool$*)(__right_value68=err_msg(info,"module not found")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__33 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__33;
                }
                module_57=((struct sClassModule*)(__right_value71=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value70=__builtin_string(module_name_48))))));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sClassModule_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                list$1char$ph_length(module_57->mParams)!=list$1char$ph_length(params_49)                ) {
                    ((struct tuple2$2int$bool$*)(__right_value72=err_msg(info,"invalid parametor number")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    __result_obj__34 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(sBlock_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__34;
                }
                __dec_obj37=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                i_63=0;
                for(                o2_saved_64=(struct list$1char$ph*)come_increment_ref_count((module_57->mParams)),it_67=list$1char$ph_begin((o2_saved_64))                ;                !list$1char$ph_end((o2_saved_64))                ;                it_67=list$1char$ph_next((o2_saved_64))                ){
                    map$2char$phchar$ph_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_67)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value92=list$1char$ph_operator_load_element(params_49,i_63))))));
                    (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    i_63++;
                }
                come_call_finalizer(list$1char$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                info->p=module_57->mText;
                info->sline=module_57->mSLine;
                __dec_obj41=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_57->mSName));
                __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (module_name_48 = come_decrement_ref_count(module_name_48, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, params_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            node_116=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj42=info->sname,
            info->sname=(char*)come_increment_ref_count(node_116->sname(node_116->_protocol_obj));
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=node_116->sline(node_116->_protocol_obj);
            if(            node_116==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value97=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value97, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__63 = (void*)come_increment_ref_count(((void*)0));
                (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__63;
            }
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_116));
            parse_sharp_v5(info);
            if(            node_116->terminated(node_116->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_120=(_Bool)1;
            if(            node_116->terminated(node_116->_protocol_obj)            ) {
                omit_semicolon_120=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_120=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125            ) {
                result_37->mOmitSemicolon=omit_semicolon_120;
                if(                omit_semicolon_120&&in_function                ) {
                    list$1sNode$ph_delete(result_37->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_45;
                    info->sline=sline_46;
                    __dec_obj46=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_47));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    head_135=info->p;
                    value_136=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_137=info->p;
                    __dec_obj47=value_136,
                    value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_136),info));
                    (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
                    char buf_138[tail_137-head_135+1];
                    memset(&buf_138, 0, sizeof(char)                    *(tail_137-head_135+1)                    );
                    memcpy(buf_138,head_135,tail_137-head_135);
                    buf_138[tail_137-head_135]=0;
                    expected_next_character(125,info);
                    node_139=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_136),(char*)come_increment_ref_count(__builtin_string(buf_138)),info));
                    list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_139));
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                    ((value_136) ? value_136 = come_decrement_ref_count(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    ((node_139) ? node_139 = come_decrement_ref_count(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    break;
                }
            }
            (sname_47 = come_decrement_ref_count(sname_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_116) ? node_116 = come_decrement_ref_count(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        if(        p_saved_40        ) {
            if(            info->p==0            ) {
                info->p=p_saved_40;
                info->sline=sline_saved_41;
                __dec_obj48=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_42));
                __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                p_saved_40=((void*)0);
                sline_saved_41=0;
            }
        }
        (sname_saved_42 = come_decrement_ref_count(sname_saved_42, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value108=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            _inf_value1->no_mutex=(void*)sNodeBase_no_mutex;
            __dec_obj50=node_140,
            node_140=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value108, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        else {
            __dec_obj51=node_140,
            node_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_140==((void*)0)            ) {
                ((struct tuple2$2int$bool$*)(__right_value113=err_msg(info,"Invalid expression")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__70 = (void*)come_increment_ref_count(((void*)0));
                ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sBlock_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__70;
            }
            parse_sharp_v5(info);
            if(            node_140->terminated(node_140->_protocol_obj)            ) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_142=(_Bool)1;
            if(            node_140->terminated(node_140->_protocol_obj)            ) {
                omit_semicolon_142=(_Bool)0;
            }
            while(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_142=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_37->mOmitSemicolon=omit_semicolon_142;
            list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        ((node_140) ? node_140 = come_decrement_ref_count(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    return_self_at_last    ) {
        p_143=info->p;
        head_144=info->head;
        source_145=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_145;
        info->head=source_145;
        node_146=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_146==((void*)0)        ) {
            ((struct tuple2$2int$bool$*)(__right_value116=err_msg(info,"Invalid expression")));
            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value116, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
            (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__71;
        }
        list$1sNode$ph_push_back(result_37->mNodes,(struct sNode*)come_increment_ref_count(node_146));
        info->p=p_143;
        info->head=head_144;
        (source_145 = come_decrement_ref_count(source_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    info->block_level=block_level_39;
    __result_obj__72 = (struct sBlock*)come_increment_ref_count(result_37);
    come_call_finalizer(sBlock_finalize, result_37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_43;
int i_44;
    for(    i_43=0    ;    i_43<self->size    ;    i_43++    ){
        if(        self->item_existance[i_43]        ) {
            if(            1            ) {
                (self->items[i_43] = come_decrement_ref_count(self->items[i_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_44=0    ;    i_44<self->size    ;    i_44++    ){
        if(        self->item_existance[i_44]        ) {
            if(            1            ) {
                (self->keys[i_44] = come_decrement_ref_count(self->keys[i_44], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_51;
unsigned int hash_52;
unsigned int it_53;
struct sClassModule* __result_obj__25;
struct sClassModule* __result_obj__26;
struct sClassModule* __result_obj__27;
struct sClassModule* __result_obj__28;
default_value_51 = (void*)0;
    memset(&default_value_51,0,sizeof(struct sClassModule*));
    hash_52=string_get_hash_key(((char*)key))%self->size;
    it_53=hash_52;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_53]        ) {
            if(            string_equals(self->keys[it_53],key)            ) {
                __result_obj__25 = (struct sClassModule*)come_increment_ref_count(self->items[it_53]);
                come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_53++;
            if(            it_53>=self->size            ) {
                it_53=0;
            }
            else if(            it_53==hash_52            ) {
                __result_obj__26 = (struct sClassModule*)come_increment_ref_count(default_value_51);
                come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sClassModule*)come_increment_ref_count(default_value_51);
            come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sClassModule*)come_increment_ref_count(default_value_51);
    come_call_finalizer(sClassModule_finalize, default_value_51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)    ) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)    ) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParams, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)    ) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_54;
unsigned int hash_55;
unsigned int it_56;
struct sClassModule* __result_obj__29;
struct sClassModule* __result_obj__30;
struct sClassModule* __result_obj__31;
struct sClassModule* __result_obj__32;
default_value_54 = (void*)0;
    memset(&default_value_54,0,sizeof(struct sClassModule*));
    hash_55=string_get_hash_key(((char*)key))%self->size;
    it_56=hash_55;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_56]        ) {
            if(            string_equals(self->keys[it_56],key)            ) {
                __result_obj__29 = (struct sClassModule*)come_increment_ref_count(self->items[it_56]);
                come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__29;
            }
            it_56++;
            if(            it_56>=self->size            ) {
                it_56=0;
            }
            else if(            it_56==hash_55            ) {
                __result_obj__30 = (struct sClassModule*)come_increment_ref_count(default_value_54);
                come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClassModule_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
        }
        else {
            __result_obj__31 = (struct sClassModule*)come_increment_ref_count(default_value_54);
            come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClassModule_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__31;
        }
    }
    __result_obj__32 = (struct sClassModule*)come_increment_ref_count(default_value_54);
    come_call_finalizer(sClassModule_finalize, default_value_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClassModule_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
int i_58;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1char$ph* __dec_obj36;
struct map$2char$phchar$ph* __result_obj__36;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value74=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1912, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value75=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1913, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value76=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1914, "_Bool*"))));
    for(    i_58=0    ;    i_58<128    ;    i_58++    ){
        self->item_existance[i_58]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj36=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1924, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__36 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__36;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__35;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__35 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__35;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_59;
struct list_item$1char$p* prev_it_60;
    it_59=self->head;
    while(    it_59!=((void*)0)    ) {
        prev_it_60=it_59;
        it_59=it_59->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_61;
int i_62;
    for(    i_61=0    ;    i_61<self->size    ;    i_61++    ){
        if(        self->item_existance[i_61]        ) {
            if(            1            ) {
                (self->items[i_61] = come_decrement_ref_count(self->items[i_61], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_62=0    ;    i_62<self->size    ;    i_62++    ){
        if(        self->item_existance[i_62]        ) {
            if(            1            ) {
                (self->keys[i_62] = come_decrement_ref_count(self->keys[i_62], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_65;
char* __result_obj__37;
char* __result_obj__38;
char* result_66;
char* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_65,0,sizeof(char*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(char*));
    __result_obj__39 = result_66;
    return __result_obj__39;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_68;
char* __result_obj__40;
char* __result_obj__41;
char* result_69;
char* __result_obj__42;
result_68 = (void*)0;
result_69 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_68,0,sizeof(char*));
        __result_obj__40 = result_68;
        return __result_obj__40;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_69,0,sizeof(char*));
    __result_obj__42 = result_69;
    return __result_obj__42;
}

static void map$2char$phchar$ph_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_87;
unsigned int it_88;
_Bool same_key_exist_105;
char* it2_106;
struct map$2char$phchar$ph* __result_obj__58;
    if(    self->len*10>=self->size    ) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_87=string_get_hash_key(((char*)key))%self->size;
    it_88=hash_87;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_88]        ) {
            if(            string_equals(self->keys[it_88],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    (self->keys[it_88] = come_decrement_ref_count(self->keys[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_88]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_88]);
                    self->keys[it_88]=key;
                }
                if(                1                ) {
                    (self->items[it_88] = come_decrement_ref_count(self->items[it_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_88]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_88]=item;
                }
                break;
            }
            it_88++;
            if(            it_88>=self->size            ) {
                it_88=0;
            }
            else if(            it_88==hash_87            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_88]=(_Bool)1;
            if(            1            ) {
                self->keys[it_88]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_88]=key;
            }
            if(            1            ) {
                self->items[it_88]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_88]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_105=(_Bool)0;
    for(    it2_106=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_106=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_106,key)        ) {
            same_key_exist_105=(_Bool)1;
        }
    }
    if(    !same_key_exist_105    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__58 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_70;
void* __right_value81 = (void*)0;
char** keys_71;
void* __right_value82 = (void*)0;
char** items_72;
void* __right_value83 = (void*)0;
_Bool* item_existance_73;
int len_74;
char* it_77;
char* default_value_80;
void* __right_value84 = (void*)0;
char* it2_81;
unsigned int hash_84;
int n_85;
char* default_value_86;
void* __right_value85 = (void*)0;
default_value_80 = (void*)0;
default_value_86 = (void*)0;
    size_70=self->size*10;
    keys_71=(char**)come_increment_ref_count(((char**)(__right_value81=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_72=(char**)come_increment_ref_count(((char**)(__right_value82=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_70)), "/usr/local/include/comelang.h", 2152, "char**"))));
    item_existance_73=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value83=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_70)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_74=0;
    for(    it_77=map$2char$phchar$ph_begin(self)    ;    !map$2char$phchar$ph_end(self)    ;    it_77=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_80,0,sizeof(char*));
        it2_81=((char*)(__right_value84=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_80))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        hash_84=string_get_hash_key(((char*)it_77))%size_70;
        n_85=hash_84;
        while(        (_Bool)1        ) {
            if(            item_existance_73[n_85]            ) {
                n_85++;
                if(                n_85>=size_70                ) {
                    n_85=0;
                }
                else if(                n_85==hash_84                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_73[n_85]=(_Bool)1;
                keys_71[n_85]=it_77;
                items_72[n_85]=((char*)(__right_value85=map$2char$phchar$ph_at(self,it_77,(char*)come_increment_ref_count(default_value_86))));
                (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                len_74++;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
                (default_value_86 = come_decrement_ref_count(default_value_86, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        (default_value_80 = come_decrement_ref_count(default_value_80, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_71;
    self->items=items_72;
    self->item_existance=item_existance_73;
    self->size=size_70;
    self->len=len_74;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_75;
char* __result_obj__43;
char* __result_obj__44;
char* result_76;
char* __result_obj__45;
result_75 = (void*)0;
result_76 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_75,0,sizeof(char*));
        __result_obj__43 = result_75;
        return __result_obj__43;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__44 = self->key_list->it->item;
        return __result_obj__44;
    }
    memset(&result_76,0,sizeof(char*));
    __result_obj__45 = result_76;
    return __result_obj__45;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_78;
char* __result_obj__46;
char* __result_obj__47;
char* result_79;
char* __result_obj__48;
result_78 = (void*)0;
result_79 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_78,0,sizeof(char*));
        __result_obj__46 = result_78;
        return __result_obj__46;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__47 = self->key_list->it->item;
        return __result_obj__47;
    }
    memset(&result_79,0,sizeof(char*));
    __result_obj__48 = result_79;
    return __result_obj__48;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_82;
unsigned int it_83;
char* __result_obj__49;
char* __result_obj__50;
char* __result_obj__51;
char* __result_obj__52;
    hash_82=string_get_hash_key(((char*)key))%self->size;
    it_83=hash_82;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_83]        ) {
            if(            string_equals(self->keys[it_83],key)            ) {
                __result_obj__49 = (char*)come_increment_ref_count(self->items[it_83]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (__result_obj__49 = come_decrement_ref_count(__result_obj__49, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__49;
            }
            it_83++;
            if(            it_83>=self->size            ) {
                it_83=0;
            }
            else if(            it_83==hash_82            ) {
                __result_obj__50 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                (__result_obj__50 = come_decrement_ref_count(__result_obj__50, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
                return __result_obj__50;
            }
        }
        else {
            __result_obj__51 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            (__result_obj__51 = come_decrement_ref_count(__result_obj__51, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__51;
        }
    }
    __result_obj__52 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__52;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_89;
struct list_item$1char$ph* it_90;
struct list$1char$ph* __result_obj__56;
    it2_89=0;
    it_90=self->head;
    while(    it_90!=((void*)0)    ) {
        if(        string_equals(it_90->item,item)        ) {
            list$1char$ph_delete(self,it2_89,it2_89+1);
            break;
        }
        it2_89++;
        it_90=it_90->next;
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_91;
struct list$1char$ph* __result_obj__53;
struct list_item$1char$ph* it_94;
int i_95;
struct list_item$1char$ph* prev_it_96;
struct list_item$1char$ph* it_97;
int i_98;
struct list_item$1char$ph* prev_it_99;
struct list_item$1char$ph* it_100;
struct list_item$1char$ph* head_prev_it_101;
struct list_item$1char$ph* tail_it_102;
int i_103;
struct list_item$1char$ph* prev_it_104;
struct list$1char$ph* __result_obj__55;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_91=tail;
        tail=head;
        head=tmp_91;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_94=self->head;
        i_95=0;
        while(        it_94!=((void*)0)        ) {
            if(            i_95<tail            ) {
                prev_it_96=it_94;
                it_94=it_94->next;
                i_95++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_95==tail            ) {
                self->head=it_94;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_94=it_94->next;
                i_95++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_97=self->head;
        i_98=0;
        while(        it_97!=((void*)0)        ) {
            if(            i_98==head            ) {
                self->tail=it_97->prev;
                self->tail->next=((void*)0);
            }
            if(            i_98>=head            ) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_97=it_97->next;
                i_98++;
            }
        }
    }
    else {
        it_100=self->head;
        head_prev_it_101=((void*)0);
        tail_it_102=((void*)0);
        i_103=0;
        while(        it_100!=((void*)0)        ) {
            if(            i_103==head            ) {
                head_prev_it_101=it_100->prev;
            }
            if(            i_103==tail            ) {
                tail_it_102=it_100;
            }
            if(            i_103>=head&&i_103<tail            ) {
                prev_it_104=it_100;
                it_100=it_100->next;
                i_103++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_100=it_100->next;
                i_103++;
            }
        }
        if(        head_prev_it_101!=((void*)0)        ) {
            head_prev_it_101->next=tail_it_102;
        }
        if(        tail_it_102!=((void*)0)        ) {
            tail_it_102->prev=head_prev_it_101;
        }
    }
    __result_obj__55 = self;
    return __result_obj__55;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_92;
struct list_item$1char$ph* prev_it_93;
struct list$1char$ph* __result_obj__54;
    it_92=self->head;
    while(    it_92!=((void*)0)    ) {
        prev_it_93=it_92;
        it_92=it_92->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value86 = (void*)0;
struct list_item$1char$ph* litem_107;
char* __dec_obj38;
void* __right_value87 = (void*)0;
struct list_item$1char$ph* litem_108;
char* __dec_obj39;
void* __right_value88 = (void*)0;
struct list_item$1char$ph* litem_109;
char* __dec_obj40;
struct list$1char$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_107=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value86=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_107->prev=((void*)0);
        litem_107->next=((void*)0);
        __dec_obj38=litem_107->item,
        litem_107->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_107;
        self->head=litem_107;
    }
    else if(    self->len==1    ) {
        litem_108=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value87=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_108->prev=self->head;
        litem_108->next=((void*)0);
        __dec_obj39=litem_108->item,
        litem_108->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_108;
        self->head->next=litem_108;
    }
    else {
        litem_109=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value88=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_109->prev=self->tail;
        litem_109->next=((void*)0);
        __dec_obj40=litem_109->item,
        litem_109->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_109;
        self->tail=litem_109;
    }
    self->len++;
    __result_obj__57 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__57;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_110;
int i_111;
char* __result_obj__59;
char* default_value_112;
char* __result_obj__60;
default_value_112 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(    it_110!=((void*)0)    ) {
        if(        position==i_111        ) {
            __result_obj__59 = (char*)come_increment_ref_count(it_110->item);
            (__result_obj__59 = come_decrement_ref_count(__result_obj__59, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__59;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(char*));
    __result_obj__60 = (char*)come_increment_ref_count(default_value_112);
    (default_value_112 = come_decrement_ref_count(default_value_112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__60 = come_decrement_ref_count(__result_obj__60, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__60;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_113;
int i_114;
char* __result_obj__61;
char* default_value_115;
char* __result_obj__62;
default_value_115 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_113=self->head;
    i_114=0;
    while(    it_113!=((void*)0)    ) {
        if(        position==i_114        ) {
            __result_obj__61 = (char*)come_increment_ref_count(it_113->item);
            (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
            return __result_obj__61;
        }
        it_113=it_113->next;
        i_114++;
    }
    memset(&default_value_115,0,sizeof(char*));
    __result_obj__62 = (char*)come_increment_ref_count(default_value_115);
    (default_value_115 = come_decrement_ref_count(default_value_115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__62 = come_decrement_ref_count(__result_obj__62, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__62;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value98 = (void*)0;
struct list_item$1sNode$ph* litem_117;
struct sNode* __dec_obj43;
void* __right_value99 = (void*)0;
struct list_item$1sNode$ph* litem_118;
struct sNode* __dec_obj44;
void* __right_value100 = (void*)0;
struct list_item$1sNode$ph* litem_119;
struct sNode* __dec_obj45;
struct list$1sNode$ph* __result_obj__64;
    if(    self->len==0    ) {
        litem_117=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value98=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sNode$ph*"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj43=litem_117->item,
        litem_117->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1    ) {
        litem_118=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value99=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sNode$ph*"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj44=litem_118->item,
        litem_118->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value100=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sNode$ph*"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj45=litem_119->item,
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result_obj__64 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__64;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_121;
struct list$1sNode$ph* __result_obj__65;
struct list_item$1sNode$ph* it_124;
int i_125;
struct list_item$1sNode$ph* prev_it_126;
struct list_item$1sNode$ph* it_127;
int i_128;
struct list_item$1sNode$ph* prev_it_129;
struct list_item$1sNode$ph* it_130;
struct list_item$1sNode$ph* head_prev_it_131;
struct list_item$1sNode$ph* tail_it_132;
int i_133;
struct list_item$1sNode$ph* prev_it_134;
struct list$1sNode$ph* __result_obj__67;
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
        __result_obj__65 = self;
        return __result_obj__65;
    }
    if(    head==0&&tail==self->len    ) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0    ) {
        it_124=self->head;
        i_125=0;
        while(        it_124!=((void*)0)        ) {
            if(            i_125<tail            ) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    __result_obj__67 = self;
    return __result_obj__67;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_122;
struct list_item$1sNode$ph* prev_it_123;
struct list$1sNode$ph* __result_obj__66;
    it_122=self->head;
    while(    it_122!=((void*)0)    ) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__68;
void* __right_value109 = (void*)0;
struct sSemicolonNode* result_141;
void* __right_value110 = (void*)0;
char* __dec_obj49;
struct sSemicolonNode* __result_obj__69;
    if(    self==(void*)0    ) {
        __result_obj__68 = (void*)0;
        return __result_obj__68;
    }
    result_141=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)    ) {
        result_141->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj49=result_141->sname,
        result_141->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_141->sline_real=self->sline_real;
    }
    __result_obj__69 = result_141;
    come_call_finalizer(sSemicolonNode_finalize, result_141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_147;
struct sVarTable* old_table_148;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct sVarTable* __dec_obj52;
struct sVarTable* current_loop_vtable_149;
int i_150;
struct list$1char$ph* o2_saved_151;
char* name_152;
void* __right_value119 = (void*)0;
struct sType* type_153;
void* __right_value120 = (void*)0;
int block_level_160;
int i_161;
struct list$1sNode$ph* o2_saved_162;
struct sNode* node_165;
struct list$1sRightValueObject$ph* right_value_objects_168;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
int stack_num_before_173;
int sline_174;
void* __right_value123 = (void*)0;
char* sname_175;
void* __right_value124 = (void*)0;
char* __dec_obj56;
_Bool interrupts_176;
_Bool Value_177;
void* __right_value125 = (void*)0;
struct CVALUE* come_value_178;
void* __right_value131 = (void*)0;
struct CVALUE* come_value2_179;
void* __right_value132 = (void*)0;
char* __dec_obj61;
void* __right_value133 = (void*)0;
struct CVALUE* come_value2_181;
struct sVar* var__182;
void* __right_value134 = (void*)0;
struct CVALUE* come_value3_183;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct sType* __dec_obj62;
void* __right_value137 = (void*)0;
char* c_value_184;
void* __right_value138 = (void*)0;
char* __dec_obj63;
void* __right_value139 = (void*)0;
char* __dec_obj64;
void* __right_value140 = (void*)0;
char* __dec_obj65;
_Bool Value_185;
void* __right_value141 = (void*)0;
char* __dec_obj66;
struct list$1sRightValueObject$ph* __dec_obj67;
void* __if_result__0_188 = (void*)0;
struct list$1sVar$ph* o2_saved_189;
struct sVar* it_192;
void* __right_value142 = (void*)0;
struct list$1sVar$ph* __dec_obj68;
memset(&i_150, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
    if(    info->output_header_file    ) {
        return 0;
    }
    inhibits_output_code_147=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_148=info->lv_table;
    if(    !no_var_table    ) {
        __dec_obj52=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table_148));
        come_call_finalizer(sVarTable_finalize, __dec_obj52,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_149=info->current_loop_vtable;
    if(    loop_block    ) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names    ) {
        for(        o2_saved_151=(param_names),name_152=list$1char$ph_begin((o2_saved_151))        ;        !list$1char$ph_end((o2_saved_151))        ;        name_152=list$1char$ph_next((o2_saved_151))        ){
            type_153=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_150));
            type_153->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_152,(struct sType*)come_increment_ref_count(sType_clone(type_153)),info,(_Bool)1,(_Bool)0);
            i_150++;
            come_call_finalizer(sType_finalize, type_153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    block_level_160=info->block_level;
    if(    !no_var_table    ) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0    ) {
    }
    else {
        for(        o2_saved_162=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_165=list$1sNode$ph_begin((o2_saved_162))        ;        !list$1sNode$ph_end((o2_saved_162))        ;        node_165=list$1sNode$ph_next((o2_saved_162))        ){
            right_value_objects_168=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj53=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            __dec_obj54=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            __dec_obj55=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            stack_num_before_173=list$1CVALUE$ph_length(info->stack);
            sline_174=info->sline;
            sname_175=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_165->sline(node_165->_protocol_obj);
            __dec_obj56=info->sname,
            info->sname=(char*)come_increment_ref_count(node_165->sname(node_165->_protocol_obj));
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            interrupts_176=(_Bool)0;
            if(            i_161==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon            ) {
                Value_177=node_compile(node_165,info);
                if(                !Value_177                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_173+1                ) {
                    come_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_178->type->mClass->mName,"void")&&come_value_178->type->mPointerNum==0                    ) {
                        come_value2_179=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_178));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_179));
                        __dec_obj61=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_179->c_value));
                        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    else {
                        come_value2_181=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_178));
                        var__182=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__182                        ) {
                            come_value3_183=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 477, "struct CVALUE*"));
                            if(                            var__182->mType->mClass=="void"&&var__182->mType->mPointerNum==1                            ) {
                                check_assign_type("invalid if result value",var__182->mType,((struct sType*)(__right_value135=sType_clone(come_value_178->type))),come_value3_183,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                come_call_finalizer(sType_finalize, __right_value135, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            }
                            __dec_obj62=var__182->mType,
                            var__182->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_178->type));
                            come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                            if(                            come_value_178->type->mHeap                            ) {
                                c_value_184=(char*)come_increment_ref_count(increment_ref_count_object(come_value_178->type,come_value_178->c_value,info));
                                __dec_obj63=come_value2_181->c_value,
                                come_value2_181->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__182->mCValueName,c_value_184));
                                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                                (c_value_184 = come_decrement_ref_count(c_value_184, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            }
                            else {
                                __dec_obj64=come_value2_181->c_value,
                                come_value2_181->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__182->mCValueName,come_value_178->c_value));
                                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                            }
                            come_call_finalizer(CVALUE_finalize, come_value3_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_181));
                        __dec_obj65=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_181->c_value));
                        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        come_call_finalizer(CVALUE_finalize, come_value2_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    }
                    come_call_finalizer(CVALUE_finalize, come_value_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
            }
            else {
                Value_185=node_compile(node_165,info);
                if(                !Value_185                ) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_174;
            __dec_obj66=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_175));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            if(            comma            ) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_173);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects            ) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj67=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_168);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            i_161++;
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_175 = come_decrement_ref_count(sname_175, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code    ) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_160==0        ) {
            for(            o2_saved_189=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_192=list$1sVar$ph_begin((o2_saved_189))            ;            !list$1sVar$ph_end((o2_saved_189))            ;            it_192=list$1sVar$ph_next((o2_saved_189))            ){
                free_object((struct sType*)come_increment_ref_count(sType_clone(it_192->mType)),it_192->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            __dec_obj68=info->match_it_var,
            __if_result__0_188=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1sVar$ph$p_finalize, __if_result__0_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->lv_table=old_table_148;
    info->block_level=block_level_160;
    if(    string_operator_equals(info->come_fun->mName,"main")    ) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_149;
    info->inhibits_output_code=inhibits_output_code_147;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_154;
int i_155;
struct sType* __result_obj__73;
struct sType* default_value_156;
struct sType* __result_obj__74;
default_value_156 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_154=self->head;
    i_155=0;
    while(    it_154!=((void*)0)    ) {
        if(        position==i_155        ) {
            __result_obj__73 = (struct sType*)come_increment_ref_count(it_154->item);
            come_call_finalizer(sType_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__73;
        }
        it_154=it_154->next;
        i_155++;
    }
    memset(&default_value_156,0,sizeof(struct sType*));
    __result_obj__74 = (struct sType*)come_increment_ref_count(default_value_156);
    come_call_finalizer(sType_finalize, default_value_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_157;
int i_158;
struct sType* __result_obj__75;
struct sType* default_value_159;
struct sType* __result_obj__76;
default_value_159 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_157=self->head;
    i_158=0;
    while(    it_157!=((void*)0)    ) {
        if(        position==i_158        ) {
            __result_obj__75 = (struct sType*)come_increment_ref_count(it_157->item);
            come_call_finalizer(sType_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__75;
        }
        it_157=it_157->next;
        i_158++;
    }
    memset(&default_value_159,0,sizeof(struct sType*));
    __result_obj__76 = (struct sType*)come_increment_ref_count(default_value_159);
    come_call_finalizer(sType_finalize, default_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_163;
struct sNode* __result_obj__77;
struct sNode* __result_obj__78;
struct sNode* result_164;
struct sNode* __result_obj__79;
result_163 = (void*)0;
result_164 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_163,0,sizeof(struct sNode*));
        __result_obj__77 = result_163;
        return __result_obj__77;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__78 = self->it->item;
        return __result_obj__78;
    }
    memset(&result_164,0,sizeof(struct sNode*));
    __result_obj__79 = result_164;
    return __result_obj__79;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_166;
struct sNode* __result_obj__80;
struct sNode* __result_obj__81;
struct sNode* result_167;
struct sNode* __result_obj__82;
result_166 = (void*)0;
result_167 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_166,0,sizeof(struct sNode*));
        __result_obj__80 = result_166;
        return __result_obj__80;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__81 = self->it->item;
        return __result_obj__81;
    }
    memset(&result_167,0,sizeof(struct sNode*));
    __result_obj__82 = result_167;
    return __result_obj__82;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__83 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_169;
struct list_item$1sRightValueObject$ph* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)    ) {
        prev_it_170=it_169;
        it_169=it_169->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_171;
struct list_item$1sRightValueObject$ph* prev_it_172;
    it_171=self->head;
    while(    it_171!=((void*)0)    ) {
        prev_it_172=it_171;
        it_171=it_171->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__84;
void* __right_value126 = (void*)0;
struct CVALUE* result_180;
void* __right_value127 = (void*)0;
char* __dec_obj57;
void* __right_value128 = (void*)0;
struct sType* __dec_obj58;
void* __right_value129 = (void*)0;
char* __dec_obj59;
void* __right_value130 = (void*)0;
char* __dec_obj60;
struct CVALUE* __result_obj__85;
    if(    self==(void*)0    ) {
        __result_obj__84 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(CVALUE_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result_180=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)    ) {
        __dec_obj57=result_180->c_value,
        result_180->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)    ) {
        __dec_obj58=result_180->type,
        result_180->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_180->var=self->var;
    }
    if(    self!=((void*)0)    ) {
        result_180->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)    ) {
        __dec_obj59=result_180->c_value_without_right_value_objects,
        result_180->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)    ) {
        __dec_obj60=result_180->c_value_without_cast_object_value,
        result_180->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__85 = (struct CVALUE*)come_increment_ref_count(result_180);
    come_call_finalizer(CVALUE_finalize, result_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(CVALUE_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_186;
struct list_item$1sRightValueObject$ph* prev_it_187;
struct list$1sRightValueObject$ph* __result_obj__86;
    it_186=self->head;
    while(    it_186!=((void*)0)    ) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__86 = self;
    return __result_obj__86;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_190;
struct sVar* __result_obj__87;
struct sVar* __result_obj__88;
struct sVar* result_191;
struct sVar* __result_obj__89;
result_190 = (void*)0;
result_191 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_190,0,sizeof(struct sVar*));
        __result_obj__87 = result_190;
        return __result_obj__87;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__88 = self->it->item;
        return __result_obj__88;
    }
    memset(&result_191,0,sizeof(struct sVar*));
    __result_obj__89 = result_191;
    return __result_obj__89;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_193;
struct sVar* __result_obj__90;
struct sVar* __result_obj__91;
struct sVar* result_194;
struct sVar* __result_obj__92;
result_193 = (void*)0;
result_194 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_193,0,sizeof(struct sVar*));
        __result_obj__90 = result_193;
        return __result_obj__90;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__91 = self->it->item;
        return __result_obj__91;
    }
    memset(&result_194,0,sizeof(struct sVar*));
    __result_obj__92 = result_194;
    return __result_obj__92;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_195;
struct list_item$1sVar$ph* prev_it_196;
    it_195=self->head;
    while(    it_195!=((void*)0)    ) {
        prev_it_196=it_195;
        it_195=it_195->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_197;
struct list_item$1sVar$ph* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top    ) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top    ) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info, _Bool return_self_at_last){
char* head_199;
_Bool dquort_200;
_Bool squort_201;
int sline_202;
int nest_203;
void* __right_value143 = (void*)0;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
char* tail_204;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct buffer* buf_205;
void* __right_value153 = (void*)0;
char* __result_obj__93;
    head_199=info->p;
    if(    *info->p==123    ) {
        info->p++;
        dquort_200=(_Bool)0;
        squort_201=(_Bool)0;
        sline_202=0;
        nest_203=0;
        while(        1        ) {
            if(            dquort_200            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value143=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34                ) {
                    info->p++;
                    dquort_200=!dquort_200;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value144=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value145=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            squort_201            ) {
                if(                *info->p==92                ) {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value146=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    if(                    *info->p==10                    ) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39                ) {
                    info->p++;
                    squort_201=!squort_201;
                }
                else if(                *info->p==10                ) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value147=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value148=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_202)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39            ) {
                sline_202=info->sline;
                info->p++;
                squort_201=!squort_201;
            }
            else if(            *info->p==34            ) {
                sline_202=info->sline;
                info->p++;
                dquort_200=!dquort_200;
            }
            else if(            *info->p==35            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47            ) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123            ) {
                info->p++;
                nest_203++;
            }
            else if(            *info->p==125            ) {
                info->p++;
                if(                nest_203==0                ) {
                    break;
                }
                nest_203--;
            }
            else if(            *info->p==0            ) {
                ((struct tuple2$2int$bool$*)(__right_value149=err_msg(info,"The block requires } character for closing block")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value149, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else if(            *info->p==10            ) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value150=err_msg(info,"Require block. This is %c",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value150, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(1);
    }
    tail_204=info->p;
    buf_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 704, "struct buffer*"))));
    buffer_append(buf_205,head_199,tail_204-head_199-1);
    if(    return_self_at_last    ) {
        buffer_append_str(buf_205,"return self; }");
    }
    else {
        buffer_append_str(buf_205,"}");
    }
    skip_spaces_and_lf(info);
    __result_obj__93 = (char*)come_increment_ref_count(((char*)(__right_value153=buffer_to_string(buf_205))));
    come_call_finalizer(buffer_finalize, buf_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* asm_fun_name_206;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct buffer* result_207;
char* head_208;
int brace_num_209;
char* tail_210;
char* head_211;
int brace_num_212;
char* tail_213;
char* head_214;
char* tail_215;
char* head_216;
char* tail_217;
int len_218;
_Bool in_dquort_219;
int brace_num_220;
char* head_221;
char* tail_222;
char* head_223;
char* tail_224;
char* head_225;
char* tail_226;
char* head_227;
int nest_228;
char* tail_229;
char* head_230;
int nest_231;
char* tail_232;
char* head_233;
int nest_234;
char* tail_235;
char* head_236;
int nest_237;
char* tail_238;
char* head_239;
int nest_240;
char* tail_241;
char* head_242;
char* tail_243;
char* head_244;
char* tail_245;
char* head_246;
char* tail_247;
char* head_248;
char* tail_249;
char* head_250;
char* tail_251;
char* head_252;
int brace_num_253;
char* tail_254;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__95;
    asm_fun_name_206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 722, "struct buffer*"))));
    result_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 723, "struct buffer*"))));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute__",info)        ) {
            head_208=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_209=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_209++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_209--;
                        if(                        brace_num_209==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_210=info->p;
            buffer_append(result_207,head_208,tail_210-head_208);
        }
        else if(        parsecmp("__declspec",info)        ) {
            head_211=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_212=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_212++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_212--;
                        if(                        brace_num_212==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_213=info->p;
            buffer_append(result_207,head_211,tail_213-head_211);
        }
        else if(        parsecmp("_Noreturn",info)        ) {
            head_214=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_215=info->p;
            buffer_append(result_207,head_214,tail_215-head_214);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            head_216=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_217=info->p;
            buffer_append(result_207,head_216,tail_217-head_216);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_218=0;
            if(            *info->p==40            ) {
                in_dquort_219=(_Bool)0;
                brace_num_220=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_219=!in_dquort_219;
                    }
                    else if(                    in_dquort_219                    ) {
                        buffer_append_char(asm_fun_name_206,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_220++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_220--;
                        if(                        brace_num_220==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute_pure__",info)        ) {
            head_221=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_222=info->p;
            buffer_append(result_207,head_221,tail_222-head_221);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            head_223=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_224=info->p;
            buffer_append(result_207,head_223,tail_224-head_223);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            head_225=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_226=info->p;
            buffer_append(result_207,head_225,tail_226-head_225);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            head_227=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_228=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_228++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_228--;
                        if(                        nest_228==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_229=info->p;
            buffer_append(result_207,head_227,tail_229-head_227);
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            head_230=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_231=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_231++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_231--;
                        if(                        nest_231==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_232=info->p;
            buffer_append(result_207,head_230,tail_232-head_230);
        }
        else if(        parsecmp("__nonnull",info)        ) {
            head_233=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_234=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_234++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_234--;
                        if(                        nest_234==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_235=info->p;
            buffer_append(result_207,head_233,tail_235-head_233);
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            head_236=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_237=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_237++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_237--;
                        if(                        nest_237==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_238=info->p;
            buffer_append(result_207,head_236,tail_238-head_236);
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            head_239=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_240=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_240++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_240--;
                        if(                        nest_240==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_241=info->p;
            buffer_append(result_207,head_239,tail_241-head_239);
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            head_242=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_243=info->p;
            buffer_append(result_207,head_242,tail_243-head_242);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            head_244=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_245=info->p;
            buffer_append(result_207,head_244,tail_245-head_244);
        }
        else if(        parsecmp("__wur",info)        ) {
            head_246=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_247=info->p;
            buffer_append(result_207,head_246,tail_247-head_246);
        }
        else if(        parsecmp("__pure2",info)        ) {
            head_248=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_249=info->p;
            buffer_append(result_207,head_248,tail_249-head_248);
        }
        else if(        parsecmp("__pure",info)        ) {
            head_250=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_251=info->p;
            buffer_append(result_207,head_250,tail_251-head_250);
        }
        else if(        parsecmp("__asm",info)        ) {
            head_252=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_253=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_253++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_253--;
                        if(                        brace_num_253==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_254=info->p;
            buffer_append(result_207,head_252,tail_254-head_252);
        }
        else {
            break;
        }
    }
    __result_obj__95 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value161=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1137, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_206)),(char*)come_increment_ref_count(buffer_to_string(result_207))))));
    come_call_finalizer(buffer_finalize, asm_fun_name_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, result_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj69;
char* __dec_obj70;
struct tuple2$2char$phchar$ph* __result_obj__94;
    __dec_obj69=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj70=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__94 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct buffer* asm_fun_name_255;
void* __right_value164 = (void*)0;
char* attribute_256;
int nest_257;
int nest_258;
int nest_259;
int nest_260;
int nest_261;
void* __right_value165 = (void*)0;
char* __dec_obj71;
int len_262;
_Bool in_dquort_263;
int brace_num_264;
int brace_num_265;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__96;
    asm_fun_name_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1142, "struct buffer*"))));
    attribute_256=(char*)come_increment_ref_count(xsprintf(""));
    while(    (_Bool)1    ) {
        if(        parsecmp("__attribute_pure__",info)        ) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__malloc_like",info)        ) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__result_use_check",info)        ) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__alloc_size2",info)        ) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_257=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_257++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_257--;
                        if(                        nest_257==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_size",info)        ) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_258=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_258++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_258--;
                        if(                        nest_258==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__nonnull",info)        ) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_259=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_259++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_259--;
                        if(                        nest_259==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("_Nonnull",info)        ) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_260=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_260++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_260--;
                        if(                        nest_260==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__alloc_align",info)        ) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                nest_261=0;
                while(                1                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_261++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_261--;
                        if(                        nest_261==0                        ) {
                            break;
                        }
                    }
                    else if(                    *info->p==0                    ) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        parsecmp("__attribute_malloc__",info)        ) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attr_dealloc_fclose",info)        ) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__wur",info)        ) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure2",info)        ) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__pure",info)        ) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__noreturn",info)        ) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__attribute__",info)        ) {
            __dec_obj71=attribute_256,
            attribute_256=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        }
        else if(        parsecmp("__asm__",info)        ) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0            ) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_262=0;
            if(            *info->p==40            ) {
                in_dquort_263=(_Bool)0;
                brace_num_264=0;
                while(                *info->p                ) {
                    if(                    *info->p==34                    ) {
                        info->p++;
                        in_dquort_263=!in_dquort_263;
                    }
                    else if(                    in_dquort_263                    ) {
                        buffer_append_char(asm_fun_name_255,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_264++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_264--;
                        if(                        brace_num_264==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("__asm",info)        ) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40            ) {
                brace_num_265=0;
                while(                *info->p                ) {
                    if(                    *info->p==40                    ) {
                        info->p++;
                        brace_num_265++;
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        brace_num_265--;
                        if(                        brace_num_265==0                        ) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__96 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value168=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1411, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_255)),(char*)come_increment_ref_count(attribute_256)))));
    come_call_finalizer(buffer_finalize, asm_fun_name_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (attribute_256 = come_decrement_ref_count(attribute_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value168, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value169 = (void*)0;
char* __dec_obj72;
char* head_266;
int head_sline_267;
void* __right_value170 = (void*)0;
char* buf_268;
void* __right_value171 = (void*)0;
struct sNode* node_269;
_Bool Value_270;
    while(    *info->p    ) {
        __dec_obj72=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1417, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        parse_sharp_v5(info);
        head_266=info->p;
        head_sline_267=info->sline;
        buf_268=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_268 = come_decrement_ref_count(buf_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        node_269=(struct sNode*)come_increment_ref_count(top_level_v99(buf_268,head_266,head_sline_267,info));
        parse_sharp_v5(info);
        while(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_269!=((void*)0)        ) {
            Value_270=node_compile(node_269,info);
            if(            !Value_270            ) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_268 = come_decrement_ref_count(buf_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((node_269) ? node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            break;
        }
        (buf_268 = come_decrement_ref_count(buf_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((node_269) ? node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value172 = (void*)0;
char* name_271;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct sType* result_type_272;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1sType$ph* param_types_273;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1char$ph* param_names_274;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1char$ph* param_default_parametors_275;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sFun* fun_276;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
char* name_298;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sType* result_type_299;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sType$ph* param_types_300;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1char$ph* param_names_301;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1char$ph* param_default_parametors_302;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sFun* fun_303;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
char* name_304;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* result_type_305;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* __list_values1___306[3];
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1sType$ph* param_types_311;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
char* __list_values2___312[3];
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1char$ph* param_names_314;
char* __list_values3___315[3];
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1char$ph* param_default_parametors_316;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sFun* fun_317;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
char* name_318;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* result_type_319;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __list_values4___320[3];
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1sType$ph* param_types_321;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __list_values5___322[3];
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1char$ph* param_names_323;
char* __list_values6___324[3];
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1char$ph* param_default_parametors_325;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sFun* fun_326;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* name_327;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* result_type_328;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* __list_values7___329[3];
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1sType$ph* param_types_330;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
char* __list_values8___331[3];
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1char$ph* param_names_332;
char* __list_values9___333[3];
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1char$ph* param_default_parametors_334;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sFun* fun_335;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* name_336;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* result_type_337;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __list_values10___338[3];
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sType$ph* param_types_339;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __list_values11___340[3];
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1char$ph* param_names_341;
char* __list_values12___342[3];
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1char$ph* param_default_parametors_343;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sFun* fun_344;
void* __right_value317 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_271=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_272=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1467, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_273=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1468, "struct list$1sType$ph*"))));
        param_names_274=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1469, "struct list$1char$ph*"))));
        param_default_parametors_275=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1470, "struct list$1char$ph*"))));
        fun_276=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1471, "struct sFun*")),(char*)come_increment_ref_count(name_271),(struct sType*)come_increment_ref_count(result_type_272),(struct list$1sType$ph*)come_increment_ref_count(param_types_273),(struct list$1char$ph*)come_increment_ref_count(param_names_274),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_275),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_271)),(struct sFun*)come_increment_ref_count(fun_276));
        (name_271 = come_decrement_ref_count(name_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_275, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_298=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_299=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1480, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_300=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1481, "struct list$1sType$ph*"))));
        param_names_301=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1482, "struct list$1char$ph*"))));
        param_default_parametors_302=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1483, "struct list$1char$ph*"))));
        fun_303=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1484, "struct sFun*")),(char*)come_increment_ref_count(name_298),(struct sType*)come_increment_ref_count(result_type_299),(struct list$1sType$ph*)come_increment_ref_count(param_types_300),(struct list$1char$ph*)come_increment_ref_count(param_names_301),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_302),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_298)),(struct sFun*)come_increment_ref_count(fun_303));
        (name_298 = come_decrement_ref_count(name_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_299, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_300, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_301, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_303, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("strtol"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1493, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        param_types_311=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___306[0]=((struct sType*)(__right_value213=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___306[1]=((struct sType*)(__right_value216=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values1___306[2]=((struct sType*)(__right_value219=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1494, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1494, "struct list$1sType$ph")),3,__list_values1___306)));
        come_call_finalizer(sType_finalize, __right_value213, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value216, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value219, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_314=(struct list$1char$ph*)come_increment_ref_count((__list_values2___312[0]=((char*)(__right_value225=xsprintf("arg1"))),
__list_values2___312[1]=((char*)(__right_value226=xsprintf("arg2"))),
__list_values2___312[2]=((char*)(__right_value227=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1495, "struct list$1char$ph")),3,__list_values2___312)));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_316=(struct list$1char$ph*)come_increment_ref_count((__list_values3___315[0]=(char*)((void*)0),
__list_values3___315[1]=(char*)((void*)0),
__list_values3___315[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1496, "struct list$1char$ph")),3,__list_values3___315)));
        fun_317=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1497, "struct sFun*")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sType$ph*)come_increment_ref_count(param_types_311),(struct list$1char$ph*)come_increment_ref_count(param_names_314),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_316),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(fun_317));
        (name_304 = come_decrement_ref_count(name_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_305, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_311, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_314, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_317, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_318=(char*)come_increment_ref_count(__builtin_string("strtoul"));
        result_type_319=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1506, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_319->mUnsigned=(_Bool)1;
        param_types_321=(struct list$1sType$ph*)come_increment_ref_count((__list_values4___320[0]=((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values4___320[1]=((struct sType*)(__right_value246=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values4___320[2]=((struct sType*)(__right_value249=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1508, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1508, "struct list$1sType$ph")),3,__list_values4___320)));
        come_call_finalizer(sType_finalize, __right_value243, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value246, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value249, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_323=(struct list$1char$ph*)come_increment_ref_count((__list_values5___322[0]=((char*)(__right_value252=xsprintf("arg1"))),
__list_values5___322[1]=((char*)(__right_value253=xsprintf("arg2"))),
__list_values5___322[2]=((char*)(__right_value254=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1509, "struct list$1char$ph")),3,__list_values5___322)));
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_325=(struct list$1char$ph*)come_increment_ref_count((__list_values6___324[0]=(char*)((void*)0),
__list_values6___324[1]=(char*)((void*)0),
__list_values6___324[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1510, "struct list$1char$ph")),3,__list_values6___324)));
        fun_326=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1511, "struct sFun*")),(char*)come_increment_ref_count(name_318),(struct sType*)come_increment_ref_count(result_type_319),(struct list$1sType$ph*)come_increment_ref_count(param_types_321),(struct list$1char$ph*)come_increment_ref_count(param_names_323),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_325),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_318)),(struct sFun*)come_increment_ref_count(fun_326));
        (name_318 = come_decrement_ref_count(name_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_319, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_321, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_323, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_325, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_326, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_327=(char*)come_increment_ref_count(__builtin_string("strtoull"));
        result_type_328=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1520, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_328->mUnsigned=(_Bool)1;
        result_type_328->mLong=(_Bool)1;
        param_types_330=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___329[0]=((struct sType*)(__right_value270=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values7___329[1]=((struct sType*)(__right_value273=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values7___329[2]=((struct sType*)(__right_value276=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph")),3,__list_values7___329)));
        come_call_finalizer(sType_finalize, __right_value270, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value273, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value276, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_332=(struct list$1char$ph*)come_increment_ref_count((__list_values8___331[0]=((char*)(__right_value279=xsprintf("arg1"))),
__list_values8___331[1]=((char*)(__right_value280=xsprintf("arg2"))),
__list_values8___331[2]=((char*)(__right_value281=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph")),3,__list_values8___331)));
        (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_334=(struct list$1char$ph*)come_increment_ref_count((__list_values9___333[0]=(char*)((void*)0),
__list_values9___333[1]=(char*)((void*)0),
__list_values9___333[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph")),3,__list_values9___333)));
        fun_335=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1526, "struct sFun*")),(char*)come_increment_ref_count(name_327),(struct sType*)come_increment_ref_count(result_type_328),(struct list$1sType$ph*)come_increment_ref_count(param_types_330),(struct list$1char$ph*)come_increment_ref_count(param_names_332),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_327)),(struct sFun*)come_increment_ref_count(fun_335));
        (name_327 = come_decrement_ref_count(name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_328, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_330, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_332, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_335, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    {
        name_336=(char*)come_increment_ref_count(__builtin_string("strtoll"));
        result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
        result_type_337->mLong=(_Bool)1;
        param_types_339=(struct list$1sType$ph*)come_increment_ref_count((__list_values10___338[0]=((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values10___338[1]=((struct sType*)(__right_value300=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char**")),(_Bool)0,info))),
__list_values10___338[2]=((struct sType*)(__right_value303=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1537, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1537, "struct list$1sType$ph")),3,__list_values10___338)));
        come_call_finalizer(sType_finalize, __right_value297, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value300, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, __right_value303, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        param_names_341=(struct list$1char$ph*)come_increment_ref_count((__list_values11___340[0]=((char*)(__right_value306=xsprintf("arg1"))),
__list_values11___340[1]=((char*)(__right_value307=xsprintf("arg2"))),
__list_values11___340[2]=((char*)(__right_value308=xsprintf("arg3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1538, "struct list$1char$ph")),3,__list_values11___340)));
        (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_343=(struct list$1char$ph*)come_increment_ref_count((__list_values12___342[0]=(char*)((void*)0),
__list_values12___342[1]=(char*)((void*)0),
__list_values12___342[2]=(char*)((void*)0),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1539, "struct list$1char$ph")),3,__list_values12___342)));
        fun_344=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1540, "struct sFun*")),(char*)come_increment_ref_count(name_336),(struct sType*)come_increment_ref_count(result_type_337),(struct list$1sType$ph*)come_increment_ref_count(param_types_339),(struct list$1char$ph*)come_increment_ref_count(param_names_341),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_343),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_336)),(struct sFun*)come_increment_ref_count(fun_344));
        (name_336 = come_decrement_ref_count(name_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_337, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_339, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_341, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_343, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_344, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_294;
unsigned int it_295;
_Bool same_key_exist_296;
char* it2_297;
struct map$2char$phsFun$ph* __result_obj__107;
    if(    self->len*10>=self->size    ) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_294=string_get_hash_key(((char*)key))%self->size;
    it_295=hash_294;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_295]        ) {
            if(            string_equals(self->keys[it_295],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_295]);
                    (self->keys[it_295] = come_decrement_ref_count(self->keys[it_295], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_295]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_295]);
                    self->keys[it_295]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sFun_finalize, self->items[it_295], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_295]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_295]=item;
                }
                break;
            }
            it_295++;
            if(            it_295>=self->size            ) {
                it_295=0;
            }
            else if(            it_295==hash_294            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_295]=(_Bool)1;
            if(            1            ) {
                self->keys[it_295]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_295]=key;
            }
            if(            1            ) {
                self->items[it_295]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_295]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_296=(_Bool)0;
    for(    it2_297=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_297=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_297,key)        ) {
            same_key_exist_296=(_Bool)1;
        }
    }
    if(    !same_key_exist_296    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__107 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__107;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_277;
void* __right_value186 = (void*)0;
char** keys_278;
void* __right_value187 = (void*)0;
struct sFun** items_279;
void* __right_value188 = (void*)0;
_Bool* item_existance_280;
int len_281;
char* it_284;
struct sFun* default_value_287;
void* __right_value189 = (void*)0;
struct sFun* it2_288;
unsigned int hash_291;
int n_292;
struct sFun* default_value_293;
void* __right_value190 = (void*)0;
default_value_287 = (void*)0;
default_value_293 = (void*)0;
    size_277=self->size*10;
    keys_278=(char**)come_increment_ref_count(((char**)(__right_value186=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_277)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_279=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value187=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_277)), "/usr/local/include/comelang.h", 2152, "struct sFun**"))));
    item_existance_280=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value188=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_277)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_281=0;
    for(    it_284=map$2char$phsFun$ph_begin(self)    ;    !map$2char$phsFun$ph_end(self)    ;    it_284=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_287,0,sizeof(struct sFun*));
        it2_288=((struct sFun*)(__right_value189=map$2char$phsFun$ph_at(self,it_284,(struct sFun*)come_increment_ref_count(default_value_287))));
        come_call_finalizer(sFun_finalize, __right_value189, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_291=string_get_hash_key(((char*)it_284))%size_277;
        n_292=hash_291;
        while(        (_Bool)1        ) {
            if(            item_existance_280[n_292]            ) {
                n_292++;
                if(                n_292>=size_277                ) {
                    n_292=0;
                }
                else if(                n_292==hash_291                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_280[n_292]=(_Bool)1;
                keys_278[n_292]=it_284;
                items_279[n_292]=((struct sFun*)(__right_value190=map$2char$phsFun$ph_at(self,it_284,(struct sFun*)come_increment_ref_count(default_value_293))));
                come_call_finalizer(sFun_finalize, __right_value190, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_281++;
                come_call_finalizer(sFun_finalize, default_value_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_278;
    self->items=items_279;
    self->item_existance=item_existance_280;
    self->size=size_277;
    self->len=len_281;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_282;
char* __result_obj__97;
char* __result_obj__98;
char* result_283;
char* __result_obj__99;
result_282 = (void*)0;
result_283 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_282,0,sizeof(char*));
        __result_obj__97 = result_282;
        return __result_obj__97;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__98 = self->key_list->it->item;
        return __result_obj__98;
    }
    memset(&result_283,0,sizeof(char*));
    __result_obj__99 = result_283;
    return __result_obj__99;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_285;
char* __result_obj__100;
char* __result_obj__101;
char* result_286;
char* __result_obj__102;
result_285 = (void*)0;
result_286 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_285,0,sizeof(char*));
        __result_obj__100 = result_285;
        return __result_obj__100;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__101 = self->key_list->it->item;
        return __result_obj__101;
    }
    memset(&result_286,0,sizeof(char*));
    __result_obj__102 = result_286;
    return __result_obj__102;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_289;
unsigned int it_290;
struct sFun* __result_obj__103;
struct sFun* __result_obj__104;
struct sFun* __result_obj__105;
struct sFun* __result_obj__106;
    hash_289=string_get_hash_key(((char*)key))%self->size;
    it_290=hash_289;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_290]        ) {
            if(            string_equals(self->keys[it_290],key)            ) {
                __result_obj__103 = (struct sFun*)come_increment_ref_count(self->items[it_290]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__103;
            }
            it_290++;
            if(            it_290>=self->size            ) {
                it_290=0;
            }
            else if(            it_290==hash_289            ) {
                __result_obj__104 = (struct sFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__104;
            }
        }
        else {
            __result_obj__105 = (struct sFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__105;
        }
    }
    __result_obj__106 = (struct sFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_307;
struct list$1sType$ph* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_307=0    ;    i_307<num_value    ;    i_307++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_307]));
    }
    __result_obj__109 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value220 = (void*)0;
struct list_item$1sType$ph* litem_308;
struct sType* __dec_obj73;
void* __right_value221 = (void*)0;
struct list_item$1sType$ph* litem_309;
struct sType* __dec_obj74;
void* __right_value222 = (void*)0;
struct list_item$1sType$ph* litem_310;
struct sType* __dec_obj75;
struct list$1sType$ph* __result_obj__108;
    if(    self->len==0    ) {
        litem_308=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value220=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sType$ph*"))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj73=litem_308->item,
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1    ) {
        litem_309=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value221=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sType$ph*"))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj74=litem_309->item,
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value222=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj75=litem_310->item,
        litem_310->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result_obj__108 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_313;
struct list$1char$ph* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_313=0    ;    i_313<num_value    ;    i_313++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_313]));
    }
    __result_obj__110 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_345;
_Bool is_type_name_flag_346;
int sline_347;
_Bool define_struct_nobody_348;
char* p_349;
int sline_350;
void* __right_value318 = (void*)0;
char* word_351;
_Bool uniq_class_352;
char* p_353;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
char* buf2_354;
_Bool define_function_pointer_result_function_355;
_Bool define_variable_between_brace_356;
char* p_357;
void* __right_value321 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type_358=0;
char* fun_name_359=0;
_Bool err_360=0;
void* __right_value322 = (void*)0;
char* word_361;
_Bool define_function_flag_362;
char* p_363;
void* __right_value323 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_364=0;
char* fun_name_365=0;
_Bool err_366=0;
char* word_367;
void* __right_value324 = (void*)0;
char* __dec_obj76;
void* __right_value325 = (void*)0;
char* __dec_obj77;
char* __dec_obj78;
void* __right_value326 = (void*)0;
char* __dec_obj79;
_Bool define_variable_368;
char* p_369;
void* __right_value327 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_370=0;
char* fun_name_371=0;
_Bool err_372=0;
void* __right_value328 = (void*)0;
char* word_373;
void* __right_value329 = (void*)0;
char* word_374;
char* p_375;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* word_376;
void* __right_value333 = (void*)0;
char* __dec_obj80;
void* __right_value334 = (void*)0;
char* buf2_377;
void* __right_value335 = (void*)0;
struct sNode* __result_obj__111;
void* __right_value336 = (void*)0;
char* word_378;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* word_379;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sNode* node_380;
struct sNode* __result_obj__112;
void* __right_value341 = (void*)0;
struct sNode* __result_obj__113;
char* header_head_381;
void* __right_value342 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_382=0;
char* fun_name_383=0;
_Bool err_384=0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1sType$ph* param_types_385;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1char$ph* param_names_386;
void* __right_value347 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type_387=0;
char* param_name_388=0;
_Bool err_389=0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1sType$ph* param_types2_391;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct list$1char$ph* param_names2_392;
void* __right_value356 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_393=0;
char* param_name_394=0;
_Bool err_395=0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
char* header_tail_397;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* result_type2_398;
struct sType* __dec_obj81;
void* __right_value364 = (void*)0;
struct list$1sType$ph* __dec_obj82;
void* __right_value365 = (void*)0;
struct list$1char$ph* __dec_obj83;
_Bool var_args_399;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1char$ph* param_default_parametors_400;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sFun* fun_401;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value426 = (void*)0;
struct sNode* result_402;
struct sNode* __result_obj__138;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* node_438;
struct sNode* __result_obj__139;
void* __right_value429 = (void*)0;
struct sNode* node_439;
struct sNode* __result_obj__140;
void* __right_value430 = (void*)0;
struct sNode* node_440;
char* source_tail_441;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* header_442;
struct sNode* __result_obj__141;
void* __right_value433 = (void*)0;
char* buf2_443;
void* __right_value434 = (void*)0;
struct sNode* __result_obj__142;
    info->in_top_level=(_Bool)1;
    source_head_345=info->p;
    is_type_name_flag_346=is_type_name(buf,info);
    sline_347=info->sline;
    define_struct_nobody_348=(_Bool)0;
    {
        p_349=info->p;
        sline_350=info->sline;
        if(        charp_operator_equals(buf,"struct")        ) {
            if(            xisalpha(*info->p)||*info->p==95            ) {
                word_351=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59                ) {
                    define_struct_nobody_348=(_Bool)1;
                }
                (word_351 = come_decrement_ref_count(word_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_350;
    }
    uniq_class_352=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")    ) {
        p_353=info->p;
        info->p=head;
        (void)((char*)(__right_value319=parse_word(info)));
        (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        xisalpha(*info->p)||*info->p==95        ) {
            buf2_354=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2_354,"class")            ) {
                uniq_class_352=(_Bool)1;
            }
            (buf2_354 = come_decrement_ref_count(buf2_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_353;
        info->sline=sline_347;
    }
    define_function_pointer_result_function_355=(_Bool)0;
    define_variable_between_brace_356=(_Bool)0;
    if(    is_type_name_flag_346&&!uniq_class_352    ) {
        p_357=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value321=backtrace_parse_type((_Bool)0,info)));
            result_type_358=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_359=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_360=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value321, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42                ) {
                    define_function_pointer_result_function_355=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_361=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_361,info)&&*info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                            }
                            else {
                                define_variable_between_brace_356=(_Bool)1;
                            }
                        }
                        (word_361 = come_decrement_ref_count(word_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_359 = come_decrement_ref_count(fun_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_347;
    }
    define_function_flag_362=(_Bool)0;
    if(    is_type_name_flag_346&&!define_function_pointer_result_function_355&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class_352    ) {
        p_363=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value323=backtrace_parse_type((_Bool)0,info)));
            result_type_364=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_365=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_366=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value323, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_364, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_365 = come_decrement_ref_count(fun_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        !info->define_struct        ) {
            info->define_struct=(_Bool)0;
            word_367=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95            ) {
                __dec_obj76=word_367,
                word_367=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                if(                string_operator_equals(word_367,"extern")                ) {
                    __dec_obj77=word_367,
                    word_367=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                }
            }
            else {
                __dec_obj78=word_367,
                word_367=((void*)0);
                __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_367            ) {
                if(                is_type_name(word_367,info)                ) {
                    while(                    *info->p==42                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93                    ) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95                    ) {
                        __dec_obj79=word_367,
                        word_367=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                    }
                }
                if(                strlen(word_367)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))                ) {
                    if(                    is_type_name_flag_346                    ) {
                        define_function_flag_362=(_Bool)1;
                    }
                }
            }
            (word_367 = come_decrement_ref_count(word_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        info->p=p_363;
        info->sline=sline_347;
    }
    define_variable_368=(_Bool)1;
    if(    is_type_name_flag_346&&!define_function_pointer_result_function_355&&!uniq_class_352    ) {
        p_369=info->p;
        info->p=head;
        if(        !is_type_name_flag_346        ) {
            define_variable_368=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95        ) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value327=backtrace_parse_type((_Bool)0,info)));
            result_type_370=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_371=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_372=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value327, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        word_373=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40                            ) {
                                define_variable_368=(_Bool)1;
                            }
                        }
                        (word_373 = come_decrement_ref_count(word_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_374=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_374,info)&&*info->p!=40                        ) {
                            define_variable_368=(_Bool)1;
                        }
                    }
                    (word_374 = come_decrement_ref_count(word_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            come_call_finalizer(sType_finalize, result_type_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (fun_name_371 = come_decrement_ref_count(fun_name_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_368=(_Bool)0;
        }
        else if(        define_variable_368        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_368=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_368=(_Bool)0;
            }
        }
        info->p=p_369;
        info->sline=sline_347;
    }
    else {
        define_variable_368=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_355    ) {
        p_375=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")        ) {
            ((char*)(__right_value330=parse_struct_attribute(info)));
            (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95            ) {
                ((char*)(__right_value331=parse_word(info)));
                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95                ) {
                    word_376=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        __dec_obj80=word_376,
                        word_376=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                        if(                        string_operator_equals(word_376,"extends")                        ) {
                            define_variable_368=(_Bool)0;
                        }
                    }
                    (word_376 = come_decrement_ref_count(word_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
        }
        if(        info->define_struct        ) {
            info->define_struct=(_Bool)0;
            define_variable_368=(_Bool)0;
        }
        else if(        define_variable_368        ) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                define_variable_368=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95            ) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58            ) {
                define_variable_368=(_Bool)0;
            }
        }
        info->p=p_375;
        info->sline=sline_347;
    }
    if(    uniq_class_352    ) {
        info->p=head;
        info->sline=sline_347;
        buf2_377=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__111 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value335=top_level_v98(buf2_377,head,head_sline,info))));
        (buf2_377 = come_decrement_ref_count(buf2_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__right_value335) ? __right_value335 = come_decrement_ref_count(__right_value335, ((struct sNode*)__right_value335)->finalize, ((struct sNode*)__right_value335)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__111) ? __result_obj__111 = come_decrement_ref_count(__result_obj__111, ((struct sNode*)__result_obj__111)->finalize, ((struct sNode*)__result_obj__111)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__111;
        (buf2_377 = come_decrement_ref_count(buf2_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")    ) {
        word_378=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60        ) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1            ) {
                if(                *info->p==62                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0                ) {
                    ((struct tuple2$2int$bool$*)(__right_value337=err_msg(info,"unexpected source end")));
                    come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value337, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    exit(2);
                }
                else {
                    word_379=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_379, "05function.c", 1862, "char*")));
                    (word_379 = come_decrement_ref_count(word_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            node_380=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__112 = (struct sNode*)come_increment_ref_count(node_380);
            ((node_380) ? node_380 = come_decrement_ref_count(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            (word_378 = come_decrement_ref_count(word_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            ((__result_obj__112) ? __result_obj__112 = come_decrement_ref_count(__result_obj__112, ((struct sNode*)__result_obj__112)->finalize, ((struct sNode*)__result_obj__112)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__112;
            ((node_380) ? node_380 = come_decrement_ref_count(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        (word_378 = come_decrement_ref_count(word_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123    ) {
    }
    else if(    define_struct_nobody_348    ) {
    }
    else if(    define_variable_between_brace_356    ) {
        info->p=head;
        info->sline=sline_347;
        __result_obj__113 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value341=parse_global_variable(info))));
        ((__right_value341) ? __right_value341 = come_decrement_ref_count(__right_value341, ((struct sNode*)__right_value341)->finalize, ((struct sNode*)__right_value341)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__113;
    }
    else if(    define_function_pointer_result_function_355    ) {
        header_head_381=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value342=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_382=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_383=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_384=multiple_assign_var4->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value342, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        *info->p==40        ) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_385=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1891, "struct list$1sType$ph*"))));
            param_names_386=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1892, "struct list$1char$ph*"))));
            if(            *info->p==41            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1                ) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value347=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_387=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_388=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_389=multiple_assign_var5->v3;
                    come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value347, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    if(                    !err_389                    ) {
                        ((struct tuple2$2int$bool$*)(__right_value348=err_msg(info,"parse_type is failed")));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value348, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types_385,(struct sType*)come_increment_ref_count(param_type_387));
                    static int num_function_pointer_result_var_name_a_390=0;
                    list$1char$ph_push_back(param_names_386,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_390)));
                    if(                    xisalpha(*info->p)||*info->p==95                    ) {
                        (void)((char*)(__right_value350=parse_word(info)));
                        (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                    if(                    *info->p==44                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41                    ) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type_387, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_388 = come_decrement_ref_count(param_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                        break;
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value351=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value351, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type_387, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (param_name_388 = come_decrement_ref_count(param_name_388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40            ) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_391=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1938, "struct list$1sType$ph*"))));
                param_names2_392=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1939, "struct list$1char$ph*"))));
                if(                *info->p==41                ) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1                    ) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value356=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_393=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_394=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_395=multiple_assign_var6->v3;
                        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value356, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                        if(                        !err_395                        ) {
                            ((struct tuple2$2int$bool$*)(__right_value357=err_msg(info,"parse_type is failed")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value357, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2_391,(struct sType*)come_increment_ref_count(param_type_393));
                        static int num_function_pointer_result_var_name_b_396=0;
                        list$1char$ph_push_back(param_names2_392,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_396)));
                        if(                        xisalpha(*info->p)||*info->p==95                        ) {
                            (void)((char*)(__right_value359=parse_word(info)));
                            (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
                        }
                        if(                        *info->p==44                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41                        ) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_393, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                            (param_name_394 = come_decrement_ref_count(param_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                            break;
                        }
                        else {
                            ((struct tuple2$2int$bool$*)(__right_value360=err_msg(info,"require , or ) (2)")));
                            come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value360, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_393, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                        (param_name_394 = come_decrement_ref_count(param_name_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    }
                }
                header_tail_397=info->p;
                result_type2_398=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1981, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj81=result_type2_398->mResultType,
                result_type2_398->mResultType=(struct sType*)come_increment_ref_count(result_type_382);
                come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj82=result_type2_398->mParamTypes,
                result_type2_398->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_391));
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj82,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                __dec_obj83=result_type2_398->mParamNames,
                result_type2_398->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_392));
                come_call_finalizer(list$1char$ph_finalize, __dec_obj83,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                result_type2_398->mVarArgs=(_Bool)0;
                result_type2_398->mStatic=(_Bool)0;
                var_args_399=(_Bool)0;
                param_default_parametors_400=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1991, "struct list$1char$ph*"))));
                fun_401=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1993, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_383)),(struct sType*)come_increment_ref_count(result_type2_398),(struct list$1sType$ph*)come_increment_ref_count(param_types_385),(struct list$1char$ph*)come_increment_ref_count(param_names_386),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_400),(_Bool)1,var_args_399,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_383)),(struct sFun*)come_increment_ref_count(fun_401));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2005, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value375=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2005, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_401),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                _inf_value2->no_mutex=(void*)sNodeBase_no_mutex;
                result_402=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer(sFunNode_finalize, __right_value375, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                __result_obj__138 = (struct sNode*)come_increment_ref_count(result_402);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_391, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_398, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_401, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_402) ? result_402 = come_decrement_ref_count(result_402, ((struct sNode*)result_402)->finalize, ((struct sNode*)result_402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types_385, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name_383 = come_decrement_ref_count(fun_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                ((__result_obj__138) ? __result_obj__138 = come_decrement_ref_count(__result_obj__138, ((struct sNode*)__result_obj__138)->finalize, ((struct sNode*)__result_obj__138)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
                return __result_obj__138;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2_391, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, result_type2_398, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_400, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, fun_401, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((result_402) ? result_402 = come_decrement_ref_count(result_402, ((struct sNode*)result_402)->finalize, ((struct sNode*)result_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value427=err_msg(info,"require (")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value427, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_385, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(sType_finalize, result_type_382, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_383 = come_decrement_ref_count(fun_name_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")    ) {
        info->p=head;
        info->sline=sline_347;
        node_438=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__139 = (struct sNode*)come_increment_ref_count(node_438);
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__139) ? __result_obj__139 = come_decrement_ref_count(__result_obj__139, ((struct sNode*)__result_obj__139)->finalize, ((struct sNode*)__result_obj__139)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__139;
        ((node_438) ? node_438 = come_decrement_ref_count(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_function_flag_362    ) {
        info->p=head;
        info->sline=sline_347;
        node_439=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__140 = (struct sNode*)come_increment_ref_count(node_439);
        ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__140;
        ((node_439) ? node_439 = come_decrement_ref_count(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    else if(    define_variable_368    ) {
        info->p=head;
        info->sline=sline_347;
        node_440=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_441=info->p;
        header_442=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2039, "struct buffer*"))));
        buffer_append(header_442,source_head_345,source_tail_441-source_head_345);
        __result_obj__141 = (struct sNode*)come_increment_ref_count(node_440);
        ((node_440) ? node_440 = come_decrement_ref_count(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((__result_obj__141) ? __result_obj__141 = come_decrement_ref_count(__result_obj__141, ((struct sNode*)__result_obj__141)->finalize, ((struct sNode*)__result_obj__141)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__141;
        ((node_440) ? node_440 = come_decrement_ref_count(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, header_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->p=head;
    info->sline=sline_347;
    buf2_443=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__142 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value434=top_level_v98(buf2_443,head,head_sline,info))));
    (buf2_443 = come_decrement_ref_count(buf2_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__right_value434) ? __right_value434 = come_decrement_ref_count(__right_value434, ((struct sNode*)__right_value434)->finalize, ((struct sNode*)__right_value434)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__142) ? __result_obj__142 = come_decrement_ref_count(__result_obj__142, ((struct sNode*)__result_obj__142)->finalize, ((struct sNode*)__result_obj__142)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__142;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__114;
void* __right_value376 = (void*)0;
struct sFunNode* result_403;
void* __right_value377 = (void*)0;
char* __dec_obj84;
void* __right_value425 = (void*)0;
struct sFun* __dec_obj109;
struct sFunNode* __result_obj__137;
    if(    self==(void*)0    ) {
        __result_obj__114 = (void*)0;
        return __result_obj__114;
    }
    result_403=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)    ) {
        result_403->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj84=result_403->sname,
        result_403->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_403->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)    ) {
        __dec_obj109=result_403->mFun,
        result_403->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer(sFun_finalize, __dec_obj109,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__137 = result_403;
    come_call_finalizer(sFunNode_finalize, result_403, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__115;
void* __right_value378 = (void*)0;
struct sFun* result_404;
void* __right_value379 = (void*)0;
char* __dec_obj85;
void* __right_value380 = (void*)0;
struct sType* __dec_obj86;
void* __right_value381 = (void*)0;
struct list$1sType$ph* __dec_obj87;
void* __right_value382 = (void*)0;
struct list$1char$ph* __dec_obj88;
void* __right_value383 = (void*)0;
struct list$1char$ph* __dec_obj89;
void* __right_value384 = (void*)0;
struct sType* __dec_obj90;
void* __right_value416 = (void*)0;
struct sBlock* __dec_obj100;
void* __right_value417 = (void*)0;
char* __dec_obj101;
void* __right_value418 = (void*)0;
char* __dec_obj102;
void* __right_value419 = (void*)0;
struct buffer* __dec_obj103;
void* __right_value420 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value421 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value422 = (void*)0;
struct buffer* __dec_obj106;
void* __right_value423 = (void*)0;
char* __dec_obj107;
void* __right_value424 = (void*)0;
char* __dec_obj108;
struct sFun* __result_obj__136;
    if(    self==(void*)0    ) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__115;
    }
    result_404=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj85=result_404->mName,
        result_404->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj86=result_404->mResultType,
        result_404->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj87=result_404->mParamTypes,
        result_404->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj87,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj88=result_404->mParamNames,
        result_404->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj88,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)    ) {
        __dec_obj89=result_404->mParamDefaultParametors,
        result_404->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj89,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)    ) {
        __dec_obj90=result_404->mLambdaType,
        result_404->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)    ) {
        __dec_obj100=result_404->mBlock,
        result_404->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)    ) {
        __dec_obj101=result_404->mTextBlock,
        result_404->mTextBlock=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlock, "sFun_clone", 11, "char*"));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)    ) {
        __dec_obj102=result_404->mTextBlockSName,
        result_404->mTextBlockSName=(char*)come_increment_ref_count((char*)come_memdup(self->mTextBlockSName, "sFun_clone", 12, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_404->mTextBlockSline=self->mTextBlockSline;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)    ) {
        __dec_obj103=result_404->mSource,
        result_404->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer(buffer_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)    ) {
        __dec_obj104=result_404->mSourceHead,
        result_404->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)    ) {
        __dec_obj105=result_404->mSourceHead2,
        result_404->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)    ) {
        __dec_obj106=result_404->mSourceDefer,
        result_404->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer(buffer_finalize, __dec_obj106,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_404->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_404->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_404->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_404->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)    ) {
        result_404->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)    ) {
        result_404->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_404->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)    ) {
        result_404->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj107=result_404->mAttribute,
        result_404->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 26, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)    ) {
        __dec_obj108=result_404->mFunAttribute,
        result_404->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 27, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_404->mGenericsFun=self->mGenericsFun;
    }
    if(    self!=((void*)0)    ) {
        result_404->mImmutable=self->mImmutable;
    }
    __result_obj__136 = (struct sFun*)come_increment_ref_count(result_404);
    come_call_finalizer(sFun_finalize, result_404, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__116;
void* __right_value385 = (void*)0;
struct sBlock* result_405;
void* __right_value386 = (void*)0;
struct list$1sNode$ph* __dec_obj91;
void* __right_value415 = (void*)0;
struct sVarTable* __dec_obj99;
struct sBlock* __result_obj__135;
    if(    self==(void*)0    ) {
        __result_obj__116 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sBlock_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__116;
    }
    result_405=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj91=result_405->mNodes,
        result_405->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj99=result_405->mVarTable,
        result_405->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_405->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__135 = (struct sBlock*)come_increment_ref_count(result_405);
    come_call_finalizer(sBlock_finalize, result_405, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__117;
void* __right_value387 = (void*)0;
struct sVarTable* result_406;
void* __right_value414 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj98;
struct sVarTable* __result_obj__134;
    if(    self==(void*)0    ) {
        __result_obj__117 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__117;
    }
    result_406=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj98=result_406->mVars,
        result_406->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_406->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_406->mParent=self->mParent;
    }
    __result_obj__134 = (struct sVarTable*)come_increment_ref_count(result_406);
    come_call_finalizer(sVarTable_finalize, result_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__118;
void* __right_value388 = (void*)0;
void* __right_value394 = (void*)0;
struct map$2char$phsVar$ph* result_410;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1char$ph* __dec_obj93;
char* it_413;
struct sVar* default_value_416;
void* __right_value397 = (void*)0;
struct sVar* it2_419;
void* __right_value403 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__133;
default_value_416 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__118;
    }
    result_410=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1983, "struct map$2char$phsVar$ph*"))));
    __dec_obj93=result_410->key_list,
    result_410->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1985, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_413=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_413=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_416,0,sizeof(struct sVar*));
        it2_419=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_413,(struct sVar*)come_increment_ref_count(default_value_416)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_410,(char*)come_increment_ref_count((char*)come_memdup(it_413, "/usr/local/include/comelang.h", 1994, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_419)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_410,(char*)come_increment_ref_count((char*)come_memdup(it_413, "/usr/local/include/comelang.h", 1997, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_419)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_410,(char*)come_increment_ref_count(it_413),(struct sVar*)come_increment_ref_count(sVar_clone(it2_419)));
        }
        else {
            map$2char$phsVar$ph_put(result_410,(char*)come_increment_ref_count(it_413),(struct sVar*)come_increment_ref_count(sVar_clone(it2_419)));
        }
        come_call_finalizer(sVar_finalize, default_value_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_419, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__133 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_410);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_410, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_407;
int i_408;
    for(    i_407=0    ;    i_407<self->size    ;    i_407++    ){
        if(        self->item_existance[i_407]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_407], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_408=0    ;    i_408<self->size    ;    i_408++    ){
        if(        self->item_existance[i_408]        ) {
            if(            1            ) {
                (self->keys[i_408] = come_decrement_ref_count(self->keys[i_408], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
int i_409;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1char$ph* __dec_obj92;
struct map$2char$phsVar$ph* __result_obj__119;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value389=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1912, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value390=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1913, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value391=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1914, "_Bool*"))));
    for(    i_409=0    ;    i_409<128    ;    i_409++    ){
        self->item_existance[i_409]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj92=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1924, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__119 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_411;
char* __result_obj__120;
char* __result_obj__121;
char* result_412;
char* __result_obj__122;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_411,0,sizeof(char*));
        __result_obj__120 = result_411;
        return __result_obj__120;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__121 = self->key_list->it->item;
        return __result_obj__121;
    }
    memset(&result_412,0,sizeof(char*));
    __result_obj__122 = result_412;
    return __result_obj__122;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_414;
char* __result_obj__123;
char* __result_obj__124;
char* result_415;
char* __result_obj__125;
result_414 = (void*)0;
result_415 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_414,0,sizeof(char*));
        __result_obj__123 = result_414;
        return __result_obj__123;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__124 = self->key_list->it->item;
        return __result_obj__124;
    }
    memset(&result_415,0,sizeof(char*));
    __result_obj__125 = result_415;
    return __result_obj__125;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_417;
unsigned int it_418;
struct sVar* __result_obj__126;
struct sVar* __result_obj__127;
struct sVar* __result_obj__128;
struct sVar* __result_obj__129;
    hash_417=string_get_hash_key(((char*)key))%self->size;
    it_418=hash_417;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_418]        ) {
            if(            string_equals(self->keys[it_418],key)            ) {
                __result_obj__126 = (struct sVar*)come_increment_ref_count(self->items[it_418]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__126;
            }
            it_418++;
            if(            it_418>=self->size            ) {
                it_418=0;
            }
            else if(            it_418==hash_417            ) {
                __result_obj__127 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__127;
            }
        }
        else {
            __result_obj__128 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__128;
        }
    }
    __result_obj__129 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_431;
int it_432;
_Bool same_key_exist_433;
char* it2_434;
struct map$2char$phsVar$ph* __result_obj__130;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_431=string_get_hash_key(((char*)key))%self->size;
    it_432=hash_431;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_432]        ) {
            if(            string_equals(self->keys[it_432],key)            ) {
                if(                1                ) {
                    (self->keys[it_432] = come_decrement_ref_count(self->keys[it_432], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_432]);
                    self->keys[it_432]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_432]);
                    self->keys[it_432]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_432], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_432]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_432]=item;
                }
                break;
            }
            it_432++;
            if(            it_432>=self->size            ) {
                it_432=0;
            }
            else if(            it_432==hash_431            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_432]=(_Bool)1;
            if(            1            ) {
                self->keys[it_432]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_432]=key;
            }
            if(            1            ) {
                self->items[it_432]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_432]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_433=(_Bool)0;
    for(    it2_434=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_434=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_434,key)        ) {
            same_key_exist_433=(_Bool)1;
        }
    }
    if(    !same_key_exist_433    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__130 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__130;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_420;
void* __right_value398 = (void*)0;
char** keys_421;
void* __right_value399 = (void*)0;
struct sVar** items_422;
void* __right_value400 = (void*)0;
_Bool* item_existance_423;
int len_424;
char* it_425;
struct sVar* default_value_426;
void* __right_value401 = (void*)0;
struct sVar* it2_427;
unsigned int hash_428;
int n_429;
struct sVar* default_value_430;
void* __right_value402 = (void*)0;
default_value_426 = (void*)0;
default_value_430 = (void*)0;
    size_420=self->size*10;
    keys_421=(char**)come_increment_ref_count(((char**)(__right_value398=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_420)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_422=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value399=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_420)), "/usr/local/include/comelang.h", 2152, "struct sVar**"))));
    item_existance_423=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value400=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_420)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_424=0;
    for(    it_425=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_425=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_426,0,sizeof(struct sVar*));
        it2_427=((struct sVar*)(__right_value401=map$2char$phsVar$ph_at(self,it_425,(struct sVar*)come_increment_ref_count(default_value_426))));
        come_call_finalizer(sVar_finalize, __right_value401, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_428=string_get_hash_key(((char*)it_425))%size_420;
        n_429=hash_428;
        while(        (_Bool)1        ) {
            if(            item_existance_423[n_429]            ) {
                n_429++;
                if(                n_429>=size_420                ) {
                    n_429=0;
                }
                else if(                n_429==hash_428                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_423[n_429]=(_Bool)1;
                keys_421[n_429]=it_425;
                items_422[n_429]=((struct sVar*)(__right_value402=map$2char$phsVar$ph_at(self,it_425,(struct sVar*)come_increment_ref_count(default_value_430))));
                come_call_finalizer(sVar_finalize, __right_value402, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_424++;
                come_call_finalizer(sVar_finalize, default_value_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_426, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_421;
    self->items=items_422;
    self->item_existance=item_existance_423;
    self->size=size_420;
    self->len=len_424;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__131;
void* __right_value404 = (void*)0;
struct sVar* result_435;
void* __right_value405 = (void*)0;
char* __dec_obj94;
void* __right_value406 = (void*)0;
char* __dec_obj95;
void* __right_value407 = (void*)0;
struct sType* __dec_obj96;
void* __right_value408 = (void*)0;
char* __dec_obj97;
struct sVar* __result_obj__132;
    if(    self==(void*)0    ) {
        __result_obj__131 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__131;
    }
    result_435=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj94=result_435->mName,
        result_435->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj95=result_435->mCValueName,
        result_435->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj96=result_435->mType,
        result_435->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_435->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_435->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_435->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_435->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj97=result_435->mFunName,
        result_435->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__132 = (struct sVar*)come_increment_ref_count(result_435);
    come_call_finalizer(sVar_finalize, result_435, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_436;
int i_437;
    for(    i_436=0    ;    i_436<self->size    ;    i_436++    ){
        if(        self->item_existance[i_436]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_436], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_437=0    ;    i_437<self->size    ;    i_437++    ){
        if(        self->item_existance[i_437]        ) {
            if(            1            ) {
                (self->keys[i_437] = come_decrement_ref_count(self->keys[i_437], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_444;
int caller_line_445;
char* caller_sname_446;
_Bool comma_instead_of_semicolon_447;
char* last_code_448;
char* __dec_obj110;
char* last_code2_449;
char* __dec_obj111;
void* __right_value435 = (void*)0;
char* sname_top_450;
int sline_top_451;
struct sType* __dec_obj112;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sFun* funX_452;
void* __right_value439 = (void*)0;
char* __dec_obj113;
char* __dec_obj114;
char* __dec_obj115;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__152;
void* __right_value442 = (void*)0;
struct sType* result_type_459;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1sType$ph* param_types_460;
struct list$1sType$ph* o2_saved_461;
struct sType* it_464;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* param_type_467;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1char$ph* param_names_468;
void* __right_value449 = (void*)0;
struct list$1char$ph* param_default_parametors_469;
char* p_470;
int sline_471;
char* sname_472;
char* head_473;
struct buffer* source_474;
void* __right_value450 = (void*)0;
struct buffer* __dec_obj117;
struct sType* generics_type_saved_475;
struct sType* __dec_obj118;
void* __right_value451 = (void*)0;
struct sType* __dec_obj119;
struct list$1char$ph* method_generics_type_names_476;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1char$ph* __dec_obj120;
struct list$1char$ph* o2_saved_477;
char* it_478;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1char$ph* __dec_obj121;
char* __dec_obj122;
void* __right_value456 = (void*)0;
struct sBlock* block_479;
struct buffer* __dec_obj123;
char* __dec_obj124;
_Bool const_fun_480;
_Bool var_args_481;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sFun* fun_482;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value464 = (void*)0;
struct sNode* node_483;
_Bool in_generics_fun_484;
_Bool Value_485;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__159;
struct sType* __dec_obj125;
struct list$1char$ph* __dec_obj126;
void* __right_value468 = (void*)0;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__160;
    caller_fun_444=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_445=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_446=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_447=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_448=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj110=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_449=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj111=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_450=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_451=info->sline;
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj112=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    funX_452=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value437=__builtin_string(fun_name)))));
    (__right_value436 = come_decrement_ref_count(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    if(    funX_452    ) {
        __dec_obj113=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_450));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_451;
        __dec_obj114=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_448);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj115=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_449);
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_444;
        info->caller_line=caller_line_445;
        info->caller_sname=caller_sname_446;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_447;
        __result_obj__152 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value441=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2088, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_448 = come_decrement_ref_count(last_code_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_449 = come_decrement_ref_count(last_code2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_450 = come_decrement_ref_count(sname_top_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value441, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__152;
    }
    result_type_459=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(generics_fun->mResultType),(struct sType*)come_increment_ref_count(generics_type),info));
    param_types_460=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2093, "struct list$1sType$ph*"))));
    for(    o2_saved_461=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_464=list$1sType$ph_begin((o2_saved_461))    ;    !list$1sType$ph_end((o2_saved_461))    ;    it_464=list$1sType$ph_next((o2_saved_461))    ){
        param_type_467=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(sType_clone(it_464)),(struct sType*)come_increment_ref_count(generics_type),info));
        list$1sType$ph_add(param_types_460,(struct sType*)come_increment_ref_count(sType_clone(param_type_467)));
        come_call_finalizer(sType_finalize, param_type_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_468=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_469=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_470=info->p;
    sline_471=info->sline;
    sname_472=(char*)come_increment_ref_count(info->sname);
    head_473=info->head;
    source_474=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj117=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj117,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_475=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType    ) {
        __dec_obj118=generics_type,
        generics_type=(struct sType*)come_increment_ref_count(generics_type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj119=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    method_generics_type_names_476=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj120=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2121, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_477=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_478=list$1char$ph_begin((o2_saved_477))    ;    !list$1char$ph_end((o2_saved_477))    ;    it_478=list$1char$ph_next((o2_saved_477))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_478, "05function.c", 2123, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_477, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj121=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj121,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj122=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_479=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_473;
    __dec_obj123=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_474);
    come_call_finalizer(buffer_finalize, __dec_obj123,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_470;
    info->sline=sline_471;
    __dec_obj124=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_472);
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_459->mInline=(_Bool)0;
    result_type_459->mStatic=(_Bool)0;
    result_type_459->mUniq=(_Bool)0;
    const_fun_480=generics_fun->mConstFun;
    var_args_481=generics_fun->mVarArgs;
    fun_482=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2147, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_459),(struct list$1sType$ph*)come_increment_ref_count(param_types_460),(struct list$1char$ph*)come_increment_ref_count(param_names_468),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_469),(_Bool)0,var_args_481,(struct sBlock*)come_increment_ref_count(block_479),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_480,((void*)0),((void*)0),0,(_Bool)0));
    fun_482->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_482));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2156, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value463=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2156, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_482),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    _inf_value3->no_mutex=(void*)sNodeBase_no_mutex;
    node_483=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sFunNode_finalize, __right_value463, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    in_generics_fun_484=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_485=node_compile(node_483,info);
    if(    !Value_485    ) {
        __result_obj__159 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value467=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2161, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (last_code_448 = come_decrement_ref_count(last_code_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_449 = come_decrement_ref_count(last_code2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_450 = come_decrement_ref_count(sname_top_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, funX_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_469, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_472 = come_decrement_ref_count(sname_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, generics_type_saved_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_479, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value467, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__159;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_484;
    __dec_obj125=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_475);
    come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj126=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_476);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj127=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_450));
    __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_451;
    __dec_obj128=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_448);
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj129=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_449);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_444;
    info->caller_line=caller_line_445;
    info->caller_sname=caller_sname_446;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_447;
    __result_obj__160 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value471=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2181, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_448 = come_decrement_ref_count(last_code_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_449 = come_decrement_ref_count(last_code2_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_450 = come_decrement_ref_count(sname_top_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, funX_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, result_type_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_469, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_472 = come_decrement_ref_count(sname_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, generics_type_saved_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_479, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_483) ? node_483 = come_decrement_ref_count(node_483, ((struct sNode*)node_483)->finalize, ((struct sNode*)node_483)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value471, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_453;
unsigned int hash_454;
unsigned int it_455;
struct sFun* __result_obj__143;
struct sFun* __result_obj__144;
struct sFun* __result_obj__145;
struct sFun* __result_obj__146;
default_value_453 = (void*)0;
    memset(&default_value_453,0,sizeof(struct sFun*));
    hash_454=string_get_hash_key(((char*)key))%self->size;
    it_455=hash_454;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_455]        ) {
            if(            string_equals(self->keys[it_455],key)            ) {
                __result_obj__143 = (struct sFun*)come_increment_ref_count(self->items[it_455]);
                come_call_finalizer(sFun_finalize, default_value_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__143;
            }
            it_455++;
            if(            it_455>=self->size            ) {
                it_455=0;
            }
            else if(            it_455==hash_454            ) {
                __result_obj__144 = (struct sFun*)come_increment_ref_count(default_value_453);
                come_call_finalizer(sFun_finalize, default_value_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__144;
            }
        }
        else {
            __result_obj__145 = (struct sFun*)come_increment_ref_count(default_value_453);
            come_call_finalizer(sFun_finalize, default_value_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__145;
        }
    }
    __result_obj__146 = (struct sFun*)come_increment_ref_count(default_value_453);
    come_call_finalizer(sFun_finalize, default_value_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_456;
unsigned int hash_457;
unsigned int it_458;
struct sFun* __result_obj__147;
struct sFun* __result_obj__148;
struct sFun* __result_obj__149;
struct sFun* __result_obj__150;
default_value_456 = (void*)0;
    memset(&default_value_456,0,sizeof(struct sFun*));
    hash_457=string_get_hash_key(((char*)key))%self->size;
    it_458=hash_457;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_458]        ) {
            if(            string_equals(self->keys[it_458],key)            ) {
                __result_obj__147 = (struct sFun*)come_increment_ref_count(self->items[it_458]);
                come_call_finalizer(sFun_finalize, default_value_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__147;
            }
            it_458++;
            if(            it_458>=self->size            ) {
                it_458=0;
            }
            else if(            it_458==hash_457            ) {
                __result_obj__148 = (struct sFun*)come_increment_ref_count(default_value_456);
                come_call_finalizer(sFun_finalize, default_value_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sFun_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__148;
            }
        }
        else {
            __result_obj__149 = (struct sFun*)come_increment_ref_count(default_value_456);
            come_call_finalizer(sFun_finalize, default_value_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__149;
        }
    }
    __result_obj__150 = (struct sFun*)come_increment_ref_count(default_value_456);
    come_call_finalizer(sFun_finalize, default_value_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj116;
struct tuple2$2char$phbool$* __result_obj__151;
    __dec_obj116=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->v2=v2;
    __result_obj__151 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2char$phbool$$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)    ) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_462;
struct sType* __result_obj__153;
struct sType* __result_obj__154;
struct sType* result_463;
struct sType* __result_obj__155;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_462,0,sizeof(struct sType*));
        __result_obj__153 = result_462;
        return __result_obj__153;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__154 = self->it->item;
        return __result_obj__154;
    }
    memset(&result_463,0,sizeof(struct sType*));
    __result_obj__155 = result_463;
    return __result_obj__155;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_465;
struct sType* __result_obj__156;
struct sType* __result_obj__157;
struct sType* result_466;
struct sType* __result_obj__158;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_465,0,sizeof(struct sType*));
        __result_obj__156 = result_465;
        return __result_obj__156;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__157 = self->it->item;
        return __result_obj__157;
    }
    memset(&result_466,0,sizeof(struct sType*));
    __result_obj__158 = result_466;
    return __result_obj__158;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_486;
int caller_line_487;
char* caller_sname_488;
_Bool comma_instead_of_semicolon_489;
char* last_code_490;
char* __dec_obj130;
char* last_code2_491;
char* __dec_obj131;
void* __right_value472 = (void*)0;
char* sname_top_492;
int sline_top_493;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sFun* funX_494;
void* __right_value476 = (void*)0;
char* __dec_obj132;
char* __dec_obj133;
char* __dec_obj134;
_Bool __result_obj__161;
void* __right_value477 = (void*)0;
struct sType* result_type_495;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sType$ph* param_types_496;
struct list$1sType$ph* o2_saved_497;
struct sType* it_498;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* param_type_499;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1char$ph* param_names_500;
void* __right_value484 = (void*)0;
struct list$1char$ph* param_default_parametors_501;
char* p_502;
int sline_503;
char* sname_504;
char* head_505;
struct buffer* source_506;
void* __right_value485 = (void*)0;
struct buffer* __dec_obj135;
struct list$1char$ph* method_generics_type_names_507;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1char$ph* __dec_obj136;
struct list$1char$ph* o2_saved_508;
char* it_509;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct list$1char$ph* __dec_obj137;
char* __dec_obj138;
void* __right_value490 = (void*)0;
struct sBlock* block_510;
struct buffer* __dec_obj139;
char* __dec_obj140;
_Bool var_args_511;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sFun* fun_512;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value499 = (void*)0;
struct sNode* node_513;
_Bool Value_514;
void* __if_result__1_515 = (void*)0;
_Bool __result_obj__162;
struct list$1char$ph* __dec_obj141;
void* __right_value500 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
_Bool __result_obj__163;
    caller_fun_486=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_487=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_488=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_489=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_490=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj130=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_491=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj131=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_492=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_493=info->sline;
    funX_494=((struct sFun*)(__right_value475=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value474=__builtin_string(fun_name))))));
    (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value474 = come_decrement_ref_count(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value475, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    funX_494    ) {
        __dec_obj132=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_492));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_top_493;
        __dec_obj133=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_490);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj134=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_491);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->caller_fun=caller_fun_486;
        info->caller_line=caller_line_487;
        info->caller_sname=caller_sname_488;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_489;
        __result_obj__161 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_490 = come_decrement_ref_count(last_code_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_491 = come_decrement_ref_count(last_code2_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_492 = come_decrement_ref_count(sname_top_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    result_type_495=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_496=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2220, "struct list$1sType$ph*"))));
    for(    o2_saved_497=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_498=list$1sType$ph_begin((o2_saved_497))    ;    !list$1sType$ph_end((o2_saved_497))    ;    it_498=list$1sType$ph_next((o2_saved_497))    ){
        param_type_499=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value480=sType_clone(it_498))),info));
        come_call_finalizer(sType_finalize, __right_value480, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        list$1sType$ph_add(param_types_496,(struct sType*)come_increment_ref_count(sType_clone(param_type_499)));
        come_call_finalizer(sType_finalize, param_type_499, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_497, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_500=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_501=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_502=info->p;
    sline_503=info->sline;
    sname_504=(char*)come_increment_ref_count(info->sname);
    head_505=info->head;
    source_506=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj135=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer(buffer_finalize, __dec_obj135,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_507=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj136=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2242, "struct list$1char$ph*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    o2_saved_508=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_509=list$1char$ph_begin((o2_saved_508))    ;    !list$1char$ph_end((o2_saved_508))    ;    it_509=list$1char$ph_next((o2_saved_508))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_509, "05function.c", 2244, "char*")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_508, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj137=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj137,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj138=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_510=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_505;
    __dec_obj139=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_506);
    come_call_finalizer(buffer_finalize, __dec_obj139,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_502;
    info->sline=sline_503;
    __dec_obj140=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_504);
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_495->mInline=(_Bool)0;
    result_type_495->mStatic=(_Bool)0;
    result_type_495->mUniq=(_Bool)0;
    var_args_511=generics_fun->mVarArgs;
    fun_512=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2266, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_495),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_496)),(struct list$1char$ph*)come_increment_ref_count(param_names_500),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_501),(_Bool)0,var_args_511,(struct sBlock*)come_increment_ref_count(block_510),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
    fun_512->mGenericsFun=(_Bool)1;
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_512));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2274, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value498=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2274, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_512),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    _inf_value4->no_mutex=(void*)sNodeBase_no_mutex;
    node_513=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunNode_finalize, __right_value498, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_514=node_compile(node_513,info);
    if(    !Value_514    ) {
        __result_obj__162 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code_490 = come_decrement_ref_count(last_code_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_491 = come_decrement_ref_count(last_code2_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_492 = come_decrement_ref_count(sname_top_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_496, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_501, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_504 = come_decrement_ref_count(sname_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_507, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun_512, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_513) ? node_513 = come_decrement_ref_count(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__162;
    }
    else {
        __if_result__1_515=(void*)(Value_514);
;
    }
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_507);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_492));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_493;
    __dec_obj143=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_490);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj144=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_491);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_486;
    info->caller_line=caller_line_487;
    info->caller_sname=caller_sname_488;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_489;
    __result_obj__163 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code_490 = come_decrement_ref_count(last_code_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_491 = come_decrement_ref_count(last_code2_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_492 = come_decrement_ref_count(sname_top_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_496, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_501, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_504 = come_decrement_ref_count(sname_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names_507, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun_512, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((node_513) ? node_513 = come_decrement_ref_count(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__163;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_516;
char* source_head_517;
void* __right_value501 = (void*)0;
char* attribute_518;
struct sType* result_type_519;
char* var_name_520;
_Bool constructor__521;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj145;
void* __right_value504 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2_522=0;
char* var_name2_523=0;
_Bool err_524=0;
struct sType* __dec_obj146;
char* __dec_obj147;
_Bool method_definition_525;
char* p_526;
int sline_527;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct buffer* buf2_528;
char* fun_name_529;
char* base_fun_name_530;
struct sType* obj_type2_531;
void* __right_value507 = (void*)0;
char* __dec_obj148;
void* __right_value508 = (void*)0;
char* __dec_obj149;
void* __right_value509 = (void*)0;
struct sType* __dec_obj150;
void* __right_value510 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type_532=0;
char* name_533=0;
_Bool err_534=0;
void* __right_value511 = (void*)0;
char* __dec_obj151;
void* __right_value512 = (void*)0;
char* __dec_obj152;
void* __right_value513 = (void*)0;
struct sType* __dec_obj153;
void* __right_value514 = (void*)0;
char* __dec_obj154;
void* __right_value515 = (void*)0;
char* __dec_obj155;
void* __right_value516 = (void*)0;
struct sType* __dec_obj156;
void* __right_value517 = (void*)0;
char* __dec_obj157;
void* __right_value518 = (void*)0;
char* __dec_obj158;
void* __right_value519 = (void*)0;
struct sType* __dec_obj159;
void* __right_value520 = (void*)0;
char* __dec_obj160;
void* __right_value521 = (void*)0;
char* __dec_obj161;
void* __right_value522 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types_535=0;
struct list$1char$ph* param_names_536=0;
struct list$1char$ph* param_default_parametors_537=0;
_Bool var_args_538=0;
char* header_tail_539;
void* __right_value523 = (void*)0;
_Bool const_fun_540;
int version_541;
int n_542;
void* __right_value524 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun_543=0;
char* fun_attribute_544=0;
void* __right_value525 = (void*)0;
char* __dec_obj162;
_Bool in_top_level_545;
void* __right_value526 = (void*)0;
struct sBlock* block_546;
void* __right_value527 = (void*)0;
char* fun_name_548;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sFun* fun_549;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* fun2_550;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value541 = (void*)0;
struct sNode* __result_obj__166;
void* __right_value542 = (void*)0;
char* none_generics_name_552;
void* __right_value543 = (void*)0;
char* generics_sname_553;
int generics_sline_554;
void* __right_value544 = (void*)0;
char* block_555;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sGenericsFun* fun_556;
void* __right_value551 = (void*)0;
char* fun_name3_557;
void* __right_value557 = (void*)0;
struct sNode* __result_obj__178;
void* __right_value558 = (void*)0;
char* generics_sname_579;
int generics_sline_580;
void* __right_value559 = (void*)0;
char* block_581;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sGenericsFun* fun_582;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* __result_obj__179;
char* source_tail_583;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* new_fun_name_584;
void* __right_value570 = (void*)0;
char* __dec_obj164;
_Bool static_fun_585;
_Bool inline_fun_586;
_Bool uniq_fun_587;
void* __right_value571 = (void*)0;
char* generics_sname_588;
int generics_sline_589;
void* __right_value572 = (void*)0;
char* block_590;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sFun* fun_591;
void* __right_value576 = (void*)0;
char* header_592;
void* __right_value577 = (void*)0;
char* id_593;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value584 = (void*)0;
struct sNode* __result_obj__180;
void* __right_value585 = (void*)0;
struct sBlock* block_594;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sFun* fun_595;
void* __right_value590 = (void*)0;
char* header_596;
void* __right_value591 = (void*)0;
char* id_597;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value596 = (void*)0;
struct sNode* __result_obj__181;
void* __right_value597 = (void*)0;
char* new_fun_name_598;
void* __right_value598 = (void*)0;
char* __dec_obj165;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sFun* fun_599;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
char* header_600;
void* __right_value604 = (void*)0;
char* id_601;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value607 = (void*)0;
struct sNode* __result_obj__182;
void* __right_value608 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_602=0;
char* fun_attribute2_603=0;
void* __right_value609 = (void*)0;
char* __dec_obj166;
void* __right_value610 = (void*)0;
char* __dec_obj167;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sFun* fun_604;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
char* header_605;
void* __right_value616 = (void*)0;
char* id_606;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__183;
void* __right_value620 = (void*)0;
struct sNode* __result_obj__184;
fun_name_529 = (void*)0;
    header_head_516=info->p;
    source_head_517=info->p;
    attribute_518=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_519=((void*)0);
    var_name_520=((void*)0);
    constructor__521=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0    ) {
        ((char*)(__right_value502=parse_word(info)));
        (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        __dec_obj145=result_type_519,
        result_type_519=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        result_type_519->mHeap=(_Bool)1;
        constructor__521=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value504=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_522=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_523=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_524=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value504, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj146=result_type_519,
        result_type_519=(struct sType*)come_increment_ref_count(result_type2_522);
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj147=var_name_520,
        var_name_520=(char*)come_increment_ref_count(var_name2_523);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        if(        !err_524        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2_522, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name2_523 = come_decrement_ref_count(var_name2_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    method_definition_525=(_Bool)0;
    {
        p_526=info->p;
        sline_527=info->sline;
        buf2_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2335, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95        ) {
            buffer_append_char(buf2_528,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93        ) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_528)>0&&*info->p==58&&*(info->p+1)==58        ) {
            method_definition_525=(_Bool)1;
        }
        info->p=p_526;
        info->sline=sline_527;
        come_call_finalizer(buffer_finalize, buf2_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    base_fun_name_530=((void*)0);
    obj_type2_531=((void*)0);
    if(    constructor__521    ) {
        __dec_obj148=base_fun_name_530,
        base_fun_name_530=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj149=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_530,info,(_Bool)1));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj150=obj_type2_531,
        obj_type2_531=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    method_definition_525    ) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value510=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_532=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_533=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_534=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$phbool$$p_finalize, __right_value510, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        !err_534        ) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj151=base_fun_name_530,
        base_fun_name_530=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj152=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(create_method_name(obj_type_532,(_Bool)0,base_fun_name_530,info,(_Bool)1));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj153=obj_type2_531,
        obj_type2_531=(struct sType*)come_increment_ref_count(sType_clone(obj_type_532));
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, obj_type_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_533 = come_decrement_ref_count(name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    info->impl_type    ) {
        __dec_obj154=base_fun_name_530,
        base_fun_name_530=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj155=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_530,info,(_Bool)1));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj156=obj_type2_531,
        obj_type2_531=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->class_type    ) {
        __dec_obj157=base_fun_name_530,
        base_fun_name_530=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj158=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_530,info,(_Bool)1));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj159=obj_type2_531,
        obj_type2_531=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj160=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        __dec_obj161=base_fun_name_530,
        base_fun_name_530=(char*)come_increment_ref_count(__builtin_string(fun_name_529));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_530,"initialize")    ) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value522=parse_params(info,constructor__521)));
    param_types_535=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_536=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_537=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_538=multiple_assign_var9->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, __right_value522, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    header_tail_539=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_530,"initialize")    ) {
        info->in_class=(_Bool)1;
    }
    if(    result_type_519->mImmutable    ) {
        if(        method_definition_525||info->impl_type||info->class_type        ) {
            if(            list$1sType$ph_length(param_types_535)>0            ) {
                ((struct sType*)(__right_value523=list$1sType$ph_operator_load_element(param_types_535,0)))->mImmutable=(_Bool)1;
                come_call_finalizer(sType_finalize, __right_value523, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    const_fun_540=(_Bool)0;
    version_541=0;
    if(    parsecmp("version",info)    ) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_542=0;
        while(        xisdigit(*info->p)        ) {
            n_542=n_542*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_541=n_542;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value524=parse_function_attribute(info)));
    asm_fun_543=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute_544=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value524, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    string_operator_not_equals(asm_fun_543,"")    ) {
        __dec_obj162=fun_name_529,
        fun_name_529=(char*)come_increment_ref_count(__builtin_string(asm_fun_543));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    in_top_level_545=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_530,"lambda")    ) {
        block_546=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_547=0;
        lambda_num_547++;
        fun_name_548=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_547));
        result_type_519->mInline=(_Bool)0;
        result_type_519->mStatic=(_Bool)0;
        result_type_519->mUniq=(_Bool)0;
        fun_549=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2464, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_548)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),(_Bool)0,var_args_538,(struct sBlock*)come_increment_ref_count(block_546),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_540,((void*)0),((void*)0),0,(_Bool)0));
        fun2_550=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value534=__builtin_string(fun_name_548)))));
        (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_548)),(struct sFun*)come_increment_ref_count(fun_549));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2474, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value538=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2474, "struct sLambdaNode*")),fun_549,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        _inf_value5->no_mutex=(void*)sNodeBase_no_mutex;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value541=_inf_value5)));
        come_call_finalizer(sBlock_finalize, block_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_548 = come_decrement_ref_count(fun_name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_550, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sLambdaNode_finalize, __right_value538, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        ((__right_value541) ? __right_value541 = come_decrement_ref_count(__right_value541, ((struct sNode*)__right_value541)->finalize, ((struct sNode*)__right_value541)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__166;
        come_call_finalizer(sBlock_finalize, block_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name_548 = come_decrement_ref_count(fun_name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sFun_finalize, fun_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_550, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0    ) {
        none_generics_name_552=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_553=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_554=info->sline;
        block_555=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_556=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2484, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value546=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value547=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),var_args_538,(char*)come_increment_ref_count(block_555),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_553)),generics_sline_554,const_fun_540));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value546, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value547, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        fun_name3_557=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_552,base_fun_name_530));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_557)),(struct sGenericsFun*)come_increment_ref_count(fun_556));
        __result_obj__178 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_552 = come_decrement_ref_count(none_generics_name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_553 = come_decrement_ref_count(generics_sname_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_555 = come_decrement_ref_count(block_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_556, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_557 = come_decrement_ref_count(fun_name3_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__178;
        (none_generics_name_552 = come_decrement_ref_count(none_generics_name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (generics_sname_553 = come_decrement_ref_count(generics_sname_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_555 = come_decrement_ref_count(block_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_556, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_557 = come_decrement_ref_count(fun_name3_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0    ) {
        generics_sname_579=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_580=info->sline;
        block_581=(char*)come_increment_ref_count(skip_block(info,(_Bool)0));
        fun_582=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2498, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value561=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value562=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),var_args_538,(char*)come_increment_ref_count(block_581),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_579)),generics_sline_580,const_fun_540));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value561, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value562, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        method_definition_525        ) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sGenericsFun*)come_increment_ref_count(fun_582));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_530)),(struct sGenericsFun*)come_increment_ref_count(fun_582));
        }
        __result_obj__179 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_579 = come_decrement_ref_count(generics_sname_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_581 = come_decrement_ref_count(block_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_582, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((__result_obj__179) ? __result_obj__179 = come_decrement_ref_count(__result_obj__179, ((struct sNode*)__result_obj__179)->finalize, ((struct sNode*)__result_obj__179)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__179;
        (generics_sname_579 = come_decrement_ref_count(generics_sname_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (block_581 = come_decrement_ref_count(block_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sGenericsFun_finalize, fun_582, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else if(    *info->p==123    ) {
        source_tail_583=info->p-1;
        if(        version_541>0        ) {
            new_fun_name_584=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value568=__builtin_string(fun_name_529))),version_541));
            (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            __dec_obj164=fun_name_529,
            fun_name_529=(char*)come_increment_ref_count(__builtin_string(new_fun_name_584));
            __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_584 = come_decrement_ref_count(new_fun_name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        static_fun_585=(_Bool)0;
        if(        result_type_519->mStatic        ) {
            result_type_519->mStatic=(_Bool)0;
            result_type_519->mUniq=(_Bool)0;
            static_fun_585=(_Bool)1;
        }
        inline_fun_586=(_Bool)0;
        if(        result_type_519->mInline        ) {
            result_type_519->mInline=(_Bool)0;
            result_type_519->mUniq=(_Bool)0;
            inline_fun_586=(_Bool)1;
        }
        uniq_fun_587=(_Bool)0;
        if(        result_type_519->mUniq        ) {
            result_type_519->mUniq=(_Bool)0;
            result_type_519->mInline=(_Bool)0;
            result_type_519->mStatic=(_Bool)0;
            uniq_fun_587=(_Bool)1;
        }
        if(        result_type_519->mUniq        ) {
            result_type_519->mUniq=(_Bool)0;
            result_type_519->mInline=(_Bool)0;
            result_type_519->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq        ) {
            uniq_fun_587=(_Bool)1;
        }
        if(        uniq_fun_587        ) {
            generics_sname_588=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_589=info->sline;
            block_590=(char*)come_increment_ref_count(skip_block(info,constructor__521));
            fun_591=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2553, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),(_Bool)0,var_args_538,((void*)0),static_fun_585,info,inline_fun_586,uniq_fun_587,(_Bool)0,(char*)come_increment_ref_count(attribute_518),(char*)come_increment_ref_count(fun_attribute_544),const_fun_540,(char*)come_increment_ref_count(block_590),(char*)come_increment_ref_count(generics_sname_588),generics_sline_589,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_519->mStatic&&!info->no_output_come_code                ) {
                    header_592=(char*)come_increment_ref_count(make_come_header_function(fun_591,(char*)come_increment_ref_count(base_fun_name_530),(struct sType*)come_increment_ref_count(obj_type2_531),version_541,info));
                    id_593=(char*)come_increment_ref_count(__builtin_string(fun_name_529));
                    add_come_code_at_come_header(info,id_593,"%s",header_592);
                    (header_592 = come_decrement_ref_count(header_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_593 = come_decrement_ref_count(id_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_591));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_591));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_591));
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_591));
            }
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2581, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2581, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_591),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            _inf_value6->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__180 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value584=_inf_value6)));
            (generics_sname_588 = come_decrement_ref_count(generics_sname_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_590 = come_decrement_ref_count(block_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value583, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value584) ? __right_value584 = come_decrement_ref_count(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__180) ? __result_obj__180 = come_decrement_ref_count(__result_obj__180, ((struct sNode*)__result_obj__180)->finalize, ((struct sNode*)__result_obj__180)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__180;
            (generics_sname_588 = come_decrement_ref_count(generics_sname_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (block_590 = come_decrement_ref_count(block_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            block_594=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__521,(_Bool)1));
            fun_595=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2586, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),(_Bool)0,var_args_538,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_594)),static_fun_585,info,inline_fun_586,uniq_fun_587,(_Bool)0,(char*)come_increment_ref_count(attribute_518),(char*)come_increment_ref_count(fun_attribute_544),const_fun_540,((void*)0),((void*)0),0,(_Bool)0));
            if(            info->output_header_file            ) {
                if(                !result_type_519->mStatic&&!info->no_output_come_code                ) {
                    header_596=(char*)come_increment_ref_count(make_come_header_function(fun_595,(char*)come_increment_ref_count(base_fun_name_530),(struct sType*)come_increment_ref_count(obj_type2_531),version_541,info));
                    id_597=(char*)come_increment_ref_count(__builtin_string(fun_name_529));
                    add_come_code_at_come_header(info,id_597,"%s",header_596);
                    (header_596 = come_decrement_ref_count(header_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_597 = come_decrement_ref_count(id_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            if(            info->in_class            ) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_595));
            }
            else {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_595));
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2612, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value595=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2612, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_595),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            _inf_value7->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__181 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value596=_inf_value7)));
            come_call_finalizer(sBlock_finalize, block_594, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value595, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value596) ? __right_value596 = come_decrement_ref_count(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__181) ? __result_obj__181 = come_decrement_ref_count(__result_obj__181, ((struct sNode*)__result_obj__181)->finalize, ((struct sNode*)__result_obj__181)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__181;
            come_call_finalizer(sBlock_finalize, block_594, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59    ) {
        if(        version_541>0        ) {
            new_fun_name_598=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_529,version_541));
            __dec_obj165=fun_name_529,
            fun_name_529=(char*)come_increment_ref_count(__builtin_string(new_fun_name_598));
            __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            (new_fun_name_598 = come_decrement_ref_count(new_fun_name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_519->mStatic=(_Bool)0;
            result_type_519->mUniq=(_Bool)0;
            result_type_519->mInline=(_Bool)0;
            fun_599=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2629, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),(_Bool)1,var_args_538,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_518),(char*)come_increment_ref_count(fun_attribute_544),const_fun_540,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_599));
            if(            info->output_header_file            ) {
                if(                !result_type_519->mStatic&&!info->no_output_come_code                ) {
                    header_600=(char*)come_increment_ref_count(make_come_header_function(fun_599,(char*)come_increment_ref_count(base_fun_name_530),(struct sType*)come_increment_ref_count(obj_type2_531),version_541,info));
                    id_601=(char*)come_increment_ref_count(__builtin_string(fun_name_529));
                    add_come_code_at_come_header(info,id_601,"%s",header_600);
                    (header_600 = come_decrement_ref_count(header_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_601 = come_decrement_ref_count(id_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2649, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value606=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2649, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_599),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            _inf_value8->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__182 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value607=_inf_value8)));
            come_call_finalizer(sFun_finalize, fun_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value606, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value607) ? __right_value607 = come_decrement_ref_count(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__182) ? __result_obj__182 = come_decrement_ref_count(__result_obj__182, ((struct sNode*)__result_obj__182)->finalize, ((struct sNode*)__result_obj__182)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__182;
            come_call_finalizer(sFun_finalize, fun_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value608=parse_function_attribute(info)));
            asm_fun_602=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2_603=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value608, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            string_operator_not_equals(asm_fun_602,"")            ) {
                __dec_obj166=fun_name_529,
                fun_name_529=(char*)come_increment_ref_count(__builtin_string(asm_fun_602));
                __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            }
            __dec_obj167=fun_attribute_544,
            fun_attribute_544=(char*)come_increment_ref_count(string_operator_add(fun_attribute_544,fun_attribute2_603));
            __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            result_type_519->mStatic=(_Bool)0;
            result_type_519->mUniq=(_Bool)0;
            result_type_519->mInline=(_Bool)0;
            fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2664, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sType$ph*)come_increment_ref_count(param_types_535),(struct list$1char$ph*)come_increment_ref_count(param_names_536),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_537),(_Bool)1,var_args_538,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_518),(char*)come_increment_ref_count(fun_attribute_544),const_fun_540,((void*)0),((void*)0),0,(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_529)),(struct sFun*)come_increment_ref_count(fun_604));
            if(            info->output_header_file            ) {
                if(                !result_type_519->mStatic&&!info->no_output_come_code                ) {
                    header_605=(char*)come_increment_ref_count(make_come_header_function(fun_604,(char*)come_increment_ref_count(base_fun_name_530),(struct sType*)come_increment_ref_count(obj_type2_531),version_541,info));
                    id_606=(char*)come_increment_ref_count(__builtin_string(fun_name_529));
                    add_come_code_at_come_header(info,id_606,"%s",header_605);
                    (header_605 = come_decrement_ref_count(header_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (id_606 = come_decrement_ref_count(id_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                }
            }
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2685, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value618=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2685, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_604),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            _inf_value9->no_mutex=(void*)sNodeBase_no_mutex;
            __result_obj__183 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value619=_inf_value9)));
            (asm_fun_602 = come_decrement_ref_count(asm_fun_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_603 = come_decrement_ref_count(fun_attribute2_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_604, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFunNode_finalize, __right_value618, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            ((__right_value619) ? __right_value619 = come_decrement_ref_count(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            ((__result_obj__183) ? __result_obj__183 = come_decrement_ref_count(__result_obj__183, ((struct sNode*)__result_obj__183)->finalize, ((struct sNode*)__result_obj__183)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__183;
            (asm_fun_602 = come_decrement_ref_count(asm_fun_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (fun_attribute2_603 = come_decrement_ref_count(fun_attribute2_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sFun_finalize, fun_604, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    else {
        ((struct tuple2$2int$bool$*)(__right_value620=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value620, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_545;
    __result_obj__184 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_518 = come_decrement_ref_count(attribute_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (var_name_520 = come_decrement_ref_count(var_name_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_name_529 = come_decrement_ref_count(fun_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (base_fun_name_530 = come_decrement_ref_count(base_fun_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, obj_type2_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (asm_fun_543 = come_decrement_ref_count(asm_fun_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (fun_attribute_544 = come_decrement_ref_count(fun_attribute_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((__result_obj__184) ? __result_obj__184 = come_decrement_ref_count(__result_obj__184, ((struct sNode*)__result_obj__184)->finalize, ((struct sNode*)__result_obj__184)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__184;
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

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__164;
void* __right_value539 = (void*)0;
struct sLambdaNode* result_551;
void* __right_value540 = (void*)0;
char* __dec_obj163;
struct sLambdaNode* __result_obj__165;
    if(    self==(void*)0    ) {
        __result_obj__164 = (void*)0;
        return __result_obj__164;
    }
    result_551=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)    ) {
        result_551->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj163=result_551->sname,
        result_551->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_551->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_551->mFun=self->mFun;
    }
    __result_obj__165 = result_551;
    come_call_finalizer(sLambdaNode_finalize, result_551, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_575;
unsigned int it_576;
_Bool same_key_exist_577;
char* it2_578;
struct map$2char$phsGenericsFun$ph* __result_obj__177;
    if(    self->len*10>=self->size    ) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_575=string_get_hash_key(((char*)key))%self->size;
    it_576=hash_575;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_576]        ) {
            if(            string_equals(self->keys[it_576],key)            ) {
                if(                1                ) {
                    list$1char$ph_remove(self->key_list,self->keys[it_576]);
                    (self->keys[it_576] = come_decrement_ref_count(self->keys[it_576], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_576]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_576]);
                    self->keys[it_576]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it_576], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_576]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_576]=item;
                }
                break;
            }
            it_576++;
            if(            it_576>=self->size            ) {
                it_576=0;
            }
            else if(            it_576==hash_575            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_576]=(_Bool)1;
            if(            1            ) {
                self->keys[it_576]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_576]=key;
            }
            if(            1            ) {
                self->items[it_576]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_576]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_577=(_Bool)0;
    for(    it2_578=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_578=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_578,key)        ) {
            same_key_exist_577=(_Bool)1;
        }
    }
    if(    !same_key_exist_577    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__177 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__177;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_558;
void* __right_value552 = (void*)0;
char** keys_559;
void* __right_value553 = (void*)0;
struct sGenericsFun** items_560;
void* __right_value554 = (void*)0;
_Bool* item_existance_561;
int len_562;
char* it_565;
struct sGenericsFun* default_value_568;
void* __right_value555 = (void*)0;
struct sGenericsFun* it2_569;
unsigned int hash_572;
int n_573;
struct sGenericsFun* default_value_574;
void* __right_value556 = (void*)0;
default_value_568 = (void*)0;
default_value_574 = (void*)0;
    size_558=self->size*10;
    keys_559=(char**)come_increment_ref_count(((char**)(__right_value552=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_558)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_560=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value553=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_558)), "/usr/local/include/comelang.h", 2152, "struct sGenericsFun**"))));
    item_existance_561=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value554=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_558)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_562=0;
    for(    it_565=map$2char$phsGenericsFun$ph_begin(self)    ;    !map$2char$phsGenericsFun$ph_end(self)    ;    it_565=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_568,0,sizeof(struct sGenericsFun*));
        it2_569=((struct sGenericsFun*)(__right_value555=map$2char$phsGenericsFun$ph_at(self,it_565,(struct sGenericsFun*)come_increment_ref_count(default_value_568))));
        come_call_finalizer(sGenericsFun_finalize, __right_value555, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_572=string_get_hash_key(((char*)it_565))%size_558;
        n_573=hash_572;
        while(        (_Bool)1        ) {
            if(            item_existance_561[n_573]            ) {
                n_573++;
                if(                n_573>=size_558                ) {
                    n_573=0;
                }
                else if(                n_573==hash_572                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_561[n_573]=(_Bool)1;
                keys_559[n_573]=it_565;
                items_560[n_573]=((struct sGenericsFun*)(__right_value556=map$2char$phsGenericsFun$ph_at(self,it_565,(struct sGenericsFun*)come_increment_ref_count(default_value_574))));
                come_call_finalizer(sGenericsFun_finalize, __right_value556, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_562++;
                come_call_finalizer(sGenericsFun_finalize, default_value_574, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_574, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value_568, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_559;
    self->items=items_560;
    self->item_existance=item_existance_561;
    self->size=size_558;
    self->len=len_562;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_563;
char* __result_obj__167;
char* __result_obj__168;
char* result_564;
char* __result_obj__169;
result_563 = (void*)0;
result_564 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_563,0,sizeof(char*));
        __result_obj__167 = result_563;
        return __result_obj__167;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__168 = self->key_list->it->item;
        return __result_obj__168;
    }
    memset(&result_564,0,sizeof(char*));
    __result_obj__169 = result_564;
    return __result_obj__169;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_566;
char* __result_obj__170;
char* __result_obj__171;
char* result_567;
char* __result_obj__172;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_566,0,sizeof(char*));
        __result_obj__170 = result_566;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_567,0,sizeof(char*));
    __result_obj__172 = result_567;
    return __result_obj__172;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_570;
unsigned int it_571;
struct sGenericsFun* __result_obj__173;
struct sGenericsFun* __result_obj__174;
struct sGenericsFun* __result_obj__175;
struct sGenericsFun* __result_obj__176;
    hash_570=string_get_hash_key(((char*)key))%self->size;
    it_571=hash_570;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_571]        ) {
            if(            string_equals(self->keys[it_571],key)            ) {
                __result_obj__173 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_571]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__173;
            }
            it_571++;
            if(            it_571>=self->size            ) {
                it_571=0;
            }
            else if(            it_571==hash_570            ) {
                __result_obj__174 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__176;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_607;
char* __dec_obj168;
char* last_code2_608;
char* __dec_obj169;
_Bool comma_instead_of_semicolon_609;
struct sClass* current_stack_frame_struct_610;
char* real_fun_name_611;
struct sFun* finalizer_612;
void* __right_value621 = (void*)0;
struct sType* type_before_613;
void* __right_value622 = (void*)0;
struct sType* type2_614;
void* __right_value623 = (void*)0;
char* fun_name2_615;
struct sType* __dec_obj170;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* none_generics_name_616;
void* __right_value626 = (void*)0;
char* generics_fun_name_617;
void* __right_value627 = (void*)0;
struct sGenericsFun* generics_fun_618;
void* __right_value628 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_625=0;
_Bool err_626=0;
void* __right_value629 = (void*)0;
char* __dec_obj171;
int i_627;
void* __right_value630 = (void*)0;
char* new_fun_name_628;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
char* __dec_obj172;
void* __right_value633 = (void*)0;
char* __dec_obj173;
struct sType* __dec_obj174;
void* __right_value634 = (void*)0;
char* __dec_obj175;
void* __right_value635 = (void*)0;
char* user_real_fun_name_629;
void* __right_value636 = (void*)0;
struct sFun* user_finalizer_630;
void* __right_value637 = (void*)0;
struct sType* type2_631;
struct sType* __dec_obj176;
struct sClass* klass_632;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct buffer* source_633;
void* __right_value640 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_642;
struct tuple2$2char$phsType$ph* it_645;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_648=0;
struct sType* field_type_649=0;
char* p_652;
int sline_653;
char* sname_654;
char* head_655;
struct buffer* source3_656;
struct buffer* __dec_obj177;
void* __right_value641 = (void*)0;
char* __dec_obj178;
void* __right_value642 = (void*)0;
struct sBlock* block_657;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sType* result_type_658;
void* __right_value646 = (void*)0;
char* name_659;
void* __right_value647 = (void*)0;
struct sType* self_type_660;
struct sType* __list_values13___662[1];
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sType$ph* param_types_661;
void* __right_value650 = (void*)0;
char* __list_values14___663[1];
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1char$ph* param_names_664;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1char$ph* param_default_parametors_665;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sFun* fun2_666;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sFun* fun_667;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value665 = (void*)0;
struct sNode* node_668;
_Bool Value_669;
struct buffer* __dec_obj179;
char* __dec_obj180;
char* __dec_obj181;
char* __dec_obj182;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__208;
memset(&i_627, 0, sizeof(int));
    last_code_607=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj168=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_608=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj169=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_609=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_610=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_611=((void*)0);
    finalizer_612=((void*)0);
    type_before_613=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_614=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_614->mHeap=(_Bool)0;
    fun_name2_615=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj170=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        finalizer_612=((struct sFun*)(__right_value624=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_615)));
        come_call_finalizer(sFun_finalize, __right_value624, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        finalizer_612==((void*)0)        ) {
            none_generics_name_616=(char*)come_increment_ref_count(get_none_generics_name(type2_614->mClass->mName));
            generics_fun_name_617=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_616,fun_name));
            generics_fun_618=((struct sGenericsFun*)(__right_value627=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_617)));
            come_call_finalizer(sGenericsFun_finalize, __right_value627, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_618            ) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value628=create_generics_fun((char*)come_increment_ref_count(fun_name2_615),generics_fun_618,(struct sType*)come_increment_ref_count(type),info)));
                name_625=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err_626=multiple_assign_var12->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value628, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_626                ) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_612=((struct sFun*)(__right_value629=map$2char$phsFun$ph_operator_load_element(info->funcs,name_625)));
                come_call_finalizer(sFun_finalize, __right_value629, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_625 = come_decrement_ref_count(name_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_616 = come_decrement_ref_count(none_generics_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_617 = come_decrement_ref_count(generics_fun_name_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        __dec_obj171=real_fun_name_611,
        real_fun_name_611=(char*)come_increment_ref_count(fun_name2_615);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    else {
        for(        i_627=128-1        ;        i_627>=1        ;        i_627--        ){
            new_fun_name_628=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_615,i_627));
            finalizer_612=((struct sFun*)(__right_value631=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_628)));
            come_call_finalizer(sFun_finalize, __right_value631, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            finalizer_612            ) {
                __dec_obj172=fun_name2_615,
                fun_name2_615=(char*)come_increment_ref_count(__builtin_string(new_fun_name_628));
                __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_628 = come_decrement_ref_count(new_fun_name_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_628 = come_decrement_ref_count(new_fun_name_628, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        finalizer_612==((void*)0)        ) {
            finalizer_612=((struct sFun*)(__right_value633=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_615)));
            come_call_finalizer(sFun_finalize, __right_value633, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj173=real_fun_name_611,
        real_fun_name_611=(char*)come_increment_ref_count(fun_name2_615);
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    finalizer_612==((void*)0)    ) {
        __dec_obj174=type,
        type=(struct sType*)come_increment_ref_count(type_before_613);
        come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        __dec_obj175=real_fun_name_611,
        real_fun_name_611=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        user_real_fun_name_629=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_630=((struct sFun*)(__right_value636=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_629)));
        come_call_finalizer(sFun_finalize, __right_value636, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        type2_631=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        __dec_obj176=type,
        type=(struct sType*)come_increment_ref_count(type2_631);
        come_call_finalizer(sType_finalize, __dec_obj176,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        klass_632=type->mClass;
        if(        type->mPointerNum>0&&klass_632->mStruct||type->mAllocaValue        ) {
            source_633=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2785, "struct buffer*"))));
            buffer_append_char(source_633,123);
            klass_632=((struct sClass*)(__right_value640=map$2char$phsClass$ph_operator_load_element(info->classes,klass_632->mName)));
            come_call_finalizer(sClass_finalize, __right_value640, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_642=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_632->mFields)),it_645=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_642))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_642))            ;            it_645=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_642))            ){
                multiple_assign_var13=it_645;
                name_648=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_649=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                field_type_649->mHeap                ) {
                    char source2_650[1024];
                    memset(&source2_650, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_650,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_648,name_648,name_648,name_648);
                    buffer_append_str(source_633,source2_650);
                }
                else if(                field_type_649->mChannel                ) {
                    char source2_651[1024];
                    memset(&source2_651, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_651,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[0]); }",name_648,name_648);
                    buffer_append_str(source_633,source2_651);
                    snprintf(source2_651,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0) && come_get_ref_count(self) == 0) { close(self.%s[1]); }",name_648,name_648);
                    buffer_append_str(source_633,source2_651);
                }
                (name_648 = come_decrement_ref_count(name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_649, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_642, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            buffer_append_char(source_633,125);
            p_652=info->p;
            sline_653=info->sline;
            sname_654=(char*)come_increment_ref_count(info->sname);
            head_655=info->head;
            source3_656=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj177=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_633);
            come_call_finalizer(buffer_finalize, __dec_obj177,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=source_633->buf;
            info->head=source_633->buf;
            __dec_obj178=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_611));
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            info->sline=0;
            block_657=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_658=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2836, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_659=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_611, "05function.c", 2837, "char*"));
            self_type_660=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_660->mHeap=(_Bool)0;
            if(            self_type_660->mPointerNum==0            ) {
                self_type_660->mPointerNum=1;
            }
            if(            self_type_660->mPointerNum>1            ) {
                self_type_660->mPointerNum=1;
            }
            param_types_661=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___662[0]=self_type_660,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2846, "struct list$1sType$ph")),1,__list_values13___662)));
            param_names_664=(struct list$1char$ph*)come_increment_ref_count((__list_values14___663[0]=((char*)(__right_value650=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2847, "struct list$1char$ph")),1,__list_values14___663)));
            (__right_value650 = come_decrement_ref_count(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            param_default_parametors_665=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2848, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_665,((void*)0));
            result_type_658->mStatic=(_Bool)0;
            result_type_658->mUniq=(_Bool)0;
            result_type_658->mInline=(_Bool)0;
            fun2_666=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value656=__builtin_string(name_659)))));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            (__right_value656 = come_decrement_ref_count(__right_value656, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
            if(            fun2_666==((void*)0)||fun2_666->mExternal            ) {
                fun_667=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2857, "struct sFun*")),(char*)come_increment_ref_count(name_659),(struct sType*)come_increment_ref_count(result_type_658),(struct list$1sType$ph*)come_increment_ref_count(param_types_661),(struct list$1char$ph*)come_increment_ref_count(param_names_664),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_665),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_657),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
                fun_667->mGenericsFun=(_Bool)1;
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_659)),(struct sFun*)come_increment_ref_count(fun_667));
                finalizer_612=fun_667;
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2868, "struct sNode");
                _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value664=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2868, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_667),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sFunNode_finalize;
                _inf_value10->clone=(void*)sFunNode_clone;
                _inf_value10->compile=(void*)sFunNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sFunNode_kind;
                _inf_value10->no_mutex=(void*)sNodeBase_no_mutex;
                node_668=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sFunNode_finalize, __right_value664, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                Value_669=node_compile(node_668,info);
                if(                !Value_669                ) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer(sFun_finalize, fun_667, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                ((node_668) ? node_668 = come_decrement_ref_count(node_668, ((struct sNode*)node_668)->finalize, ((struct sNode*)node_668)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            }
            else {
                finalizer_612=fun2_666;
            }
            __dec_obj179=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_656);
            come_call_finalizer(buffer_finalize, __dec_obj179,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            info->p=p_652;
            info->head=head_655;
            info->sline=sline_653;
            __dec_obj180=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_654);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
            come_call_finalizer(buffer_finalize, source_633, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (sname_654 = come_decrement_ref_count(sname_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(buffer_finalize, source3_656, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sBlock_finalize, block_657, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sType_finalize, result_type_658, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            (name_659 = come_decrement_ref_count(name_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, self_type_660, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_661, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_names_664, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_665, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            come_call_finalizer(sFun_finalize, fun2_666, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (user_real_fun_name_629 = come_decrement_ref_count(user_real_fun_name_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, type2_631, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_610;
    __dec_obj181=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_607);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj182=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_608);
    __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_609;
    __result_obj__208 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value667=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2893, "struct tuple2$2sFun$pchar$ph")),finalizer_612,(char*)come_increment_ref_count(real_fun_name_611)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_607 = come_decrement_ref_count(last_code_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_608 = come_decrement_ref_count(last_code2_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_611 = come_decrement_ref_count(real_fun_name_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_613, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_614, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_615 = come_decrement_ref_count(fun_name2_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value667, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_619;
unsigned int hash_620;
unsigned int it_621;
struct sGenericsFun* __result_obj__185;
struct sGenericsFun* __result_obj__186;
struct sGenericsFun* __result_obj__187;
struct sGenericsFun* __result_obj__188;
default_value_619 = (void*)0;
    memset(&default_value_619,0,sizeof(struct sGenericsFun*));
    hash_620=string_get_hash_key(((char*)key))%self->size;
    it_621=hash_620;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_621]        ) {
            if(            string_equals(self->keys[it_621],key)            ) {
                __result_obj__185 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_621]);
                come_call_finalizer(sGenericsFun_finalize, default_value_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__185;
            }
            it_621++;
            if(            it_621>=self->size            ) {
                it_621=0;
            }
            else if(            it_621==hash_620            ) {
                __result_obj__186 = (struct sGenericsFun*)come_increment_ref_count(default_value_619);
                come_call_finalizer(sGenericsFun_finalize, default_value_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__186;
            }
        }
        else {
            __result_obj__187 = (struct sGenericsFun*)come_increment_ref_count(default_value_619);
            come_call_finalizer(sGenericsFun_finalize, default_value_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__187;
        }
    }
    __result_obj__188 = (struct sGenericsFun*)come_increment_ref_count(default_value_619);
    come_call_finalizer(sGenericsFun_finalize, default_value_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__188;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_622;
unsigned int hash_623;
unsigned int it_624;
struct sGenericsFun* __result_obj__189;
struct sGenericsFun* __result_obj__190;
struct sGenericsFun* __result_obj__191;
struct sGenericsFun* __result_obj__192;
default_value_622 = (void*)0;
    memset(&default_value_622,0,sizeof(struct sGenericsFun*));
    hash_623=string_get_hash_key(((char*)key))%self->size;
    it_624=hash_623;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_624]        ) {
            if(            string_equals(self->keys[it_624],key)            ) {
                __result_obj__189 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_624]);
                come_call_finalizer(sGenericsFun_finalize, default_value_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__189;
            }
            it_624++;
            if(            it_624>=self->size            ) {
                it_624=0;
            }
            else if(            it_624==hash_623            ) {
                __result_obj__190 = (struct sGenericsFun*)come_increment_ref_count(default_value_622);
                come_call_finalizer(sGenericsFun_finalize, default_value_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sGenericsFun_finalize, __result_obj__190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__190;
            }
        }
        else {
            __result_obj__191 = (struct sGenericsFun*)come_increment_ref_count(default_value_622);
            come_call_finalizer(sGenericsFun_finalize, default_value_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sGenericsFun_finalize, __result_obj__191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__191;
        }
    }
    __result_obj__192 = (struct sGenericsFun*)come_increment_ref_count(default_value_622);
    come_call_finalizer(sGenericsFun_finalize, default_value_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sGenericsFun_finalize, __result_obj__192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__192;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_634;
unsigned int hash_635;
unsigned int it_636;
struct sClass* __result_obj__193;
struct sClass* __result_obj__194;
struct sClass* __result_obj__195;
struct sClass* __result_obj__196;
default_value_634 = (void*)0;
    memset(&default_value_634,0,sizeof(struct sClass*));
    hash_635=string_get_hash_key(((char*)key))%self->size;
    it_636=hash_635;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_636]        ) {
            if(            string_equals(self->keys[it_636],key)            ) {
                __result_obj__193 = (struct sClass*)come_increment_ref_count(self->items[it_636]);
                come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__193;
            }
            it_636++;
            if(            it_636>=self->size            ) {
                it_636=0;
            }
            else if(            it_636==hash_635            ) {
                __result_obj__194 = (struct sClass*)come_increment_ref_count(default_value_634);
                come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__194;
            }
        }
        else {
            __result_obj__195 = (struct sClass*)come_increment_ref_count(default_value_634);
            come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__195, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__195;
        }
    }
    __result_obj__196 = (struct sClass*)come_increment_ref_count(default_value_634);
    come_call_finalizer(sClass_finalize, default_value_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__196;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_637;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_638;
    it_637=self->head;
    while(    it_637!=((void*)0)    ) {
        prev_it_638=it_637;
        it_637=it_637->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it_638, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct sClass* default_value_639;
unsigned int hash_640;
unsigned int it_641;
struct sClass* __result_obj__197;
struct sClass* __result_obj__198;
struct sClass* __result_obj__199;
struct sClass* __result_obj__200;
default_value_639 = (void*)0;
    memset(&default_value_639,0,sizeof(struct sClass*));
    hash_640=string_get_hash_key(((char*)key))%self->size;
    it_641=hash_640;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_641]        ) {
            if(            string_equals(self->keys[it_641],key)            ) {
                __result_obj__197 = (struct sClass*)come_increment_ref_count(self->items[it_641]);
                come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__197;
            }
            it_641++;
            if(            it_641>=self->size            ) {
                it_641=0;
            }
            else if(            it_641==hash_640            ) {
                __result_obj__198 = (struct sClass*)come_increment_ref_count(default_value_639);
                come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sClass_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__198;
            }
        }
        else {
            __result_obj__199 = (struct sClass*)come_increment_ref_count(default_value_639);
            come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sClass_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__199;
        }
    }
    __result_obj__200 = (struct sClass*)come_increment_ref_count(default_value_639);
    come_call_finalizer(sClass_finalize, default_value_639, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sClass_finalize, __result_obj__200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__200;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_643;
struct tuple2$2char$phsType$ph* __result_obj__201;
struct tuple2$2char$phsType$ph* __result_obj__202;
struct tuple2$2char$phsType$ph* result_644;
struct tuple2$2char$phsType$ph* __result_obj__203;
result_643 = (void*)0;
result_644 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_643,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__201 = result_643;
        return __result_obj__201;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_644,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__203 = result_644;
    return __result_obj__203;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_646;
struct tuple2$2char$phsType$ph* __result_obj__204;
struct tuple2$2char$phsType$ph* __result_obj__205;
struct tuple2$2char$phsType$ph* result_647;
struct tuple2$2char$phsType$ph* __result_obj__206;
result_646 = (void*)0;
result_647 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_646,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__204 = result_646;
        return __result_obj__204;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_647,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__206 = result_647;
    return __result_obj__206;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj183;
struct tuple2$2sFun$pchar$ph* __result_obj__207;
    self->v1=v1;
    __dec_obj183=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__207 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__207;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)    ) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_670;
char* __dec_obj184;
char* last_code2_671;
char* __dec_obj185;
_Bool comma_instead_of_semicolon_672;
struct sClass* current_stack_frame_struct_673;
struct sFun* equaler_674;
void* __right_value668 = (void*)0;
char* real_fun_name_675;
void* __right_value669 = (void*)0;
struct sType* type2_676;
struct sType* __dec_obj186;
struct sClass* klass_677;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct buffer* source_678;
char* name_679;
void* __right_value672 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_681;
struct tuple2$2char$phsType$ph* it_682;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_683=0;
struct sType* field_type_684=0;
char* p_686;
int sline_687;
char* sname_688;
char* head_689;
struct buffer* source3_690;
struct buffer* __dec_obj187;
void* __right_value673 = (void*)0;
char* __dec_obj188;
void* __right_value674 = (void*)0;
struct sBlock* block_691;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sType* result_type_692;
void* __right_value678 = (void*)0;
char* name_693;
void* __right_value679 = (void*)0;
struct sType* left_type_694;
void* __right_value680 = (void*)0;
struct sType* right_type_695;
struct sType* __list_values15___697[2];
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1sType$ph* param_types_696;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
char* __list_values16___698[2];
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1char$ph* param_names_699;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct list$1char$ph* param_default_parametors_700;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sFun* fun2_701;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sFun* fun_702;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value699 = (void*)0;
struct sNode* node_703;
_Bool Value_704;
void* __right_value700 = (void*)0;
struct buffer* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__209;
    last_code_670=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj184=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_671=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj185=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_672=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_673=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_674=((void*)0);
    real_fun_name_675=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_676=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj186=type,
    type=(struct sType*)come_increment_ref_count(type2_676);
    come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_677=type->mClass;
    if(    type->mPointerNum>0&&!klass_677->mNumber    ) {
        source_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2919, "struct buffer*"))));
        buffer_append_char(source_678,123);
        if(        klass_677->mProtocol        ) {
            name_679="_protocol_obj";
            char source2_680[1024];
            memset(&source2_680, 0, sizeof(char)            *(1024)            );
            snprintf(source2_680,1024,"return left.%s.equals(right.%s);\n",name_679,name_679);
            buffer_append_str(source_678,source2_680);
        }
        else {
            klass_677=((struct sClass*)(__right_value672=map$2char$phsClass$ph_operator_load_element(info->classes,klass_677->mName)));
            come_call_finalizer(sClass_finalize, __right_value672, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_681=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_677->mFields)),it_682=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_681))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_681))            ;            it_682=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_681))            ){
                multiple_assign_var14=it_682;
                name_683=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_684=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_685[1024];
                memset(&source2_685, 0, sizeof(char)                *(1024)                );
                snprintf(source2_685,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_683,name_683,name_683);
                buffer_append_str(source_678,source2_685);
                (name_683 = come_decrement_ref_count(name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_684, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_681, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_678,"return true;");
        buffer_append_char(source_678,125);
        p_686=info->p;
        sline_687=info->sline;
        sname_688=(char*)come_increment_ref_count(info->sname);
        head_689=info->head;
        source3_690=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj187=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_678);
        come_call_finalizer(buffer_finalize, __dec_obj187,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_678->buf;
        info->head=source_678->buf;
        __dec_obj188=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_675));
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_691=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_692=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2959, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_693=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_675, "05function.c", 2960, "char*"));
        left_type_694=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_694->mHeap=(_Bool)0;
        right_type_695=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_695->mHeap=(_Bool)0;
        param_types_696=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___697[0]=left_type_694,
__list_values15___697[1]=right_type_695,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2965, "struct list$1sType$ph")),2,__list_values15___697)));
        param_names_699=(struct list$1char$ph*)come_increment_ref_count((__list_values16___698[0]=((char*)(__right_value683=__builtin_string("left"))),
__list_values16___698[1]=((char*)(__right_value684=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2966, "struct list$1char$ph")),2,__list_values16___698)));
        (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value684 = come_decrement_ref_count(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_700=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2967, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_700,((void*)0));
        list$1char$ph_push_back(param_default_parametors_700,((void*)0));
        result_type_692->mStatic=(_Bool)0;
        result_type_692->mUniq=(_Bool)0;
        result_type_692->mInline=(_Bool)0;
        fun2_701=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value690=__builtin_string(name_693)))));
        (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value690 = come_decrement_ref_count(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_701==((void*)0)||fun2_701->mExternal        ) {
            fun_702=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2977, "struct sFun*")),(char*)come_increment_ref_count(name_693),(struct sType*)come_increment_ref_count(result_type_692),(struct list$1sType$ph*)come_increment_ref_count(param_types_696),(struct list$1char$ph*)come_increment_ref_count(param_names_699),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_700),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_691),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_702->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_693)),(struct sFun*)come_increment_ref_count(fun_702));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2986, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value698=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2986, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_702),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            _inf_value11->no_mutex=(void*)sNodeBase_no_mutex;
            node_703=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer(sFunNode_finalize, __right_value698, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_704=node_compile(node_703,info);
            if(            !Value_704            ) {
                ((struct tuple2$2int$bool$*)(__right_value700=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value700, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_674=fun_702;
            come_call_finalizer(sFun_finalize, fun_702, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_674=fun2_701;
        }
        __dec_obj189=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_690);
        come_call_finalizer(buffer_finalize, __dec_obj189,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_686;
        info->head=head_689;
        info->sline=sline_687;
        __dec_obj190=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_688);
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_678, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_688 = come_decrement_ref_count(sname_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_690, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_691, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_692, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_693 = come_decrement_ref_count(name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_694, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_695, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_696, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_699, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_700, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_701, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_673;
    __dec_obj191=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_670);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj192=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_671);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_672;
    __result_obj__209 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value702=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3012, "struct tuple2$2sFun$pchar$ph")),equaler_674,(char*)come_increment_ref_count(real_fun_name_675)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_670 = come_decrement_ref_count(last_code_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_671 = come_decrement_ref_count(last_code2_671, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_675 = come_decrement_ref_count(real_fun_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_676, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value702, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__209;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_705;
char* __dec_obj193;
char* last_code2_706;
char* __dec_obj194;
_Bool comma_instead_of_semicolon_707;
struct sClass* current_stack_frame_struct_708;
struct sFun* equaler_709;
void* __right_value703 = (void*)0;
char* real_fun_name_710;
void* __right_value704 = (void*)0;
struct sType* type2_711;
struct sType* __dec_obj195;
struct sClass* klass_712;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* source_713;
char* name_714;
int i_717;
void* __right_value707 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_718;
struct tuple2$2char$phsType$ph* it_719;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_720=0;
struct sType* field_type_721=0;
char* p_725;
int sline_726;
char* sname_727;
char* head_728;
struct buffer* source3_729;
struct buffer* __dec_obj196;
void* __right_value708 = (void*)0;
char* __dec_obj197;
void* __right_value709 = (void*)0;
struct sBlock* block_730;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* result_type_731;
void* __right_value713 = (void*)0;
char* name_732;
void* __right_value714 = (void*)0;
struct sType* left_type_733;
void* __right_value715 = (void*)0;
struct sType* right_type_734;
struct sType* __list_values17___736[2];
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1sType$ph* param_types_735;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
char* __list_values18___737[2];
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1char$ph* param_names_738;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1char$ph* param_default_parametors_739;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sFun* fun2_740;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sFun* fun_741;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value734 = (void*)0;
struct sNode* node_742;
_Bool Value_743;
void* __right_value735 = (void*)0;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__210;
    last_code_705=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj193=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_706=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj194=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_707=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_708=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_709=((void*)0);
    real_fun_name_710=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_711=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj195=type,
    type=(struct sType*)come_increment_ref_count(type2_711);
    come_call_finalizer(sType_finalize, __dec_obj195,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_712=type->mClass;
    if(    type->mPointerNum>0&&!klass_712->mNumber    ) {
        source_713=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3037, "struct buffer*"))));
        buffer_append_char(source_713,123);
        if(        klass_712->mProtocol        ) {
            name_714="_protocol_obj";
            char source2_715[1024];
            memset(&source2_715, 0, sizeof(char)            *(1024)            );
            snprintf(source2_715,1024,"return left.%s !== right.%s;\n",name_714,name_714);
            buffer_append_str(source_713,source2_715);
        }
        else {
            char source2_716[1024];
            memset(&source2_716, 0, sizeof(char)            *(1024)            );
            snprintf(source2_716,1024,"return !(");
            buffer_append_str(source_713,source2_716);
            snprintf(source2_716,1024,"( ");
            buffer_append_str(source_713,source2_716);
            i_717=0;
            klass_712=((struct sClass*)(__right_value707=map$2char$phsClass$ph_operator_load_element(info->classes,klass_712->mName)));
            come_call_finalizer(sClass_finalize, __right_value707, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_718=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_712->mFields)),it_719=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_718))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_718))            ;            it_719=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_718))            ){
                multiple_assign_var15=it_719;
                name_720=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_721=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_722[1024];
                memset(&source2_722, 0, sizeof(char)                *(1024)                );
                snprintf(source2_722,1024,"(left.%s === right.%s)",name_720,name_720,name_720);
                buffer_append_str(source_713,source2_722);
                if(                i_717==list$1tuple2$2char$phsType$ph$ph_length(klass_712->mFields)-1                ) {
                    char source2_723[1024];
                    memset(&source2_723, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_723,1024,"));");
                    buffer_append_str(source_713,source2_723);
                }
                else {
                    char source2_724[1024];
                    memset(&source2_724, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_724,1024," && ");
                    buffer_append_str(source_713,source2_724);
                }
                i_717++;
                (name_720 = come_decrement_ref_count(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_721, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_718, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_713,125);
        p_725=info->p;
        sline_726=info->sline;
        sname_727=(char*)come_increment_ref_count(info->sname);
        head_728=info->head;
        source3_729=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_713);
        come_call_finalizer(buffer_finalize, __dec_obj196,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_713->buf;
        info->head=source_713->buf;
        __dec_obj197=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_710));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_730=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_731=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3097, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_732=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_710, "05function.c", 3098, "char*"));
        left_type_733=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_733->mHeap=(_Bool)0;
        right_type_734=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_734->mHeap=(_Bool)0;
        param_types_735=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___736[0]=left_type_733,
__list_values17___736[1]=right_type_734,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3103, "struct list$1sType$ph")),2,__list_values17___736)));
        param_names_738=(struct list$1char$ph*)come_increment_ref_count((__list_values18___737[0]=((char*)(__right_value718=__builtin_string("left"))),
__list_values18___737[1]=((char*)(__right_value719=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3104, "struct list$1char$ph")),2,__list_values18___737)));
        (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value719 = come_decrement_ref_count(__right_value719, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_739=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3105, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_739,((void*)0));
        list$1char$ph_push_back(param_default_parametors_739,((void*)0));
        result_type_731->mStatic=(_Bool)0;
        result_type_731->mUniq=(_Bool)0;
        result_type_731->mInline=(_Bool)0;
        fun2_740=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value725=__builtin_string(name_732)))));
        (__right_value724 = come_decrement_ref_count(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value725 = come_decrement_ref_count(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_740==((void*)0)||fun2_740->mExternal        ) {
            fun_741=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3115, "struct sFun*")),(char*)come_increment_ref_count(name_732),(struct sType*)come_increment_ref_count(result_type_731),(struct list$1sType$ph*)come_increment_ref_count(param_types_735),(struct list$1char$ph*)come_increment_ref_count(param_names_738),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_739),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_730),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_741->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_732)),(struct sFun*)come_increment_ref_count(fun_741));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3124, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value733=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3124, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_741),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            _inf_value12->no_mutex=(void*)sNodeBase_no_mutex;
            node_742=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer(sFunNode_finalize, __right_value733, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_743=node_compile(node_742,info);
            if(            !Value_743            ) {
                ((struct tuple2$2int$bool$*)(__right_value735=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value735, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_709=fun_741;
            come_call_finalizer(sFun_finalize, fun_741, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_742) ? node_742 = come_decrement_ref_count(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_709=fun2_740;
        }
        __dec_obj198=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_729);
        come_call_finalizer(buffer_finalize, __dec_obj198,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_725;
        info->head=head_728;
        info->sline=sline_726;
        __dec_obj199=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_727);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_713, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_727 = come_decrement_ref_count(sname_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_729, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_730, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_731, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_732 = come_decrement_ref_count(name_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_733, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_734, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_735, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_738, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_739, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_740, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_708;
    __dec_obj200=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_705);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj201=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_706);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_707;
    __result_obj__210 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value737=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3150, "struct tuple2$2sFun$pchar$ph")),equaler_709,(char*)come_increment_ref_count(real_fun_name_710)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_710 = come_decrement_ref_count(real_fun_name_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_711, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value737, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__210;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_744;
char* __dec_obj202;
char* last_code2_745;
char* __dec_obj203;
_Bool comma_instead_of_semicolon_746;
struct sClass* current_stack_frame_struct_747;
struct sFun* equaler_748;
void* __right_value738 = (void*)0;
char* real_fun_name_749;
void* __right_value739 = (void*)0;
struct sType* type2_750;
struct sType* __dec_obj204;
struct sClass* klass_751;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct buffer* source_752;
char* name_753;
int i_756;
void* __right_value742 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_757;
struct tuple2$2char$phsType$ph* it_758;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_759=0;
struct sType* field_type_760=0;
char* p_764;
int sline_765;
char* sname_766;
char* head_767;
struct buffer* source3_768;
struct buffer* __dec_obj205;
void* __right_value743 = (void*)0;
char* __dec_obj206;
void* __right_value744 = (void*)0;
struct sBlock* block_769;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* result_type_770;
void* __right_value748 = (void*)0;
char* name_771;
void* __right_value749 = (void*)0;
struct sType* left_type_772;
void* __right_value750 = (void*)0;
struct sType* right_type_773;
struct sType* __list_values19___775[2];
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1sType$ph* param_types_774;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
char* __list_values20___776[2];
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1char$ph* param_names_777;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1char$ph* param_default_parametors_778;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sFun* fun2_779;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sFun* fun_780;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value769 = (void*)0;
struct sNode* node_781;
_Bool Value_782;
void* __right_value770 = (void*)0;
struct buffer* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
char* __dec_obj210;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__211;
    last_code_744=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_745=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_746=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_747=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_748=((void*)0);
    real_fun_name_749=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_750=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj204=type,
    type=(struct sType*)come_increment_ref_count(type2_750);
    come_call_finalizer(sType_finalize, __dec_obj204,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_751=type->mClass;
    if(    type->mPointerNum>0&&!klass_751->mNumber    ) {
        source_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3175, "struct buffer*"))));
        buffer_append_char(source_752,123);
        if(        klass_751->mProtocol        ) {
            name_753="_protocol_obj";
            char source2_754[1024];
            memset(&source2_754, 0, sizeof(char)            *(1024)            );
            snprintf(source2_754,1024,"return !left.%s.equals(right.%s);\n",name_753,name_753);
            buffer_append_str(source_752,source2_754);
        }
        else {
            char source2_755[1024];
            memset(&source2_755, 0, sizeof(char)            *(1024)            );
            snprintf(source2_755,1024,"return !(");
            buffer_append_str(source_752,source2_755);
            i_756=0;
            klass_751=((struct sClass*)(__right_value742=map$2char$phsClass$ph_operator_load_element(info->classes,klass_751->mName)));
            come_call_finalizer(sClass_finalize, __right_value742, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_757=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_751->mFields)),it_758=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_757))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_757))            ;            it_758=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_757))            ){
                multiple_assign_var16=it_758;
                name_759=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_760=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_761[1024];
                memset(&source2_761, 0, sizeof(char)                *(1024)                );
                snprintf(source2_761,1024,"left.%s.equals(right.%s)",name_759,name_759);
                buffer_append_str(source_752,source2_761);
                if(                i_756==list$1tuple2$2char$phsType$ph$ph_length(klass_751->mFields)-1                ) {
                    char source2_762[1024];
                    memset(&source2_762, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_762,1024,");");
                    buffer_append_str(source_752,source2_762);
                }
                else {
                    char source2_763[1024];
                    memset(&source2_763, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_763,1024," && ");
                    buffer_append_str(source_752,source2_763);
                }
                i_756++;
                (name_759 = come_decrement_ref_count(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_760, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_757, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_char(source_752,125);
        p_764=info->p;
        sline_765=info->sline;
        sname_766=(char*)come_increment_ref_count(info->sname);
        head_767=info->head;
        source3_768=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj205=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_752);
        come_call_finalizer(buffer_finalize, __dec_obj205,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_752->buf;
        info->head=source_752->buf;
        __dec_obj206=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_749));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_769=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_770=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3232, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_771=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_749, "05function.c", 3233, "char*"));
        left_type_772=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_772->mHeap=(_Bool)0;
        right_type_773=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_773->mHeap=(_Bool)0;
        param_types_774=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___775[0]=left_type_772,
__list_values19___775[1]=right_type_773,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3238, "struct list$1sType$ph")),2,__list_values19___775)));
        param_names_777=(struct list$1char$ph*)come_increment_ref_count((__list_values20___776[0]=((char*)(__right_value753=__builtin_string("left"))),
__list_values20___776[1]=((char*)(__right_value754=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3239, "struct list$1char$ph")),2,__list_values20___776)));
        (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value754 = come_decrement_ref_count(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_778=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3240, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_778,((void*)0));
        list$1char$ph_push_back(param_default_parametors_778,((void*)0));
        result_type_770->mStatic=(_Bool)0;
        result_type_770->mUniq=(_Bool)0;
        result_type_770->mInline=(_Bool)0;
        fun2_779=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value760=__builtin_string(name_771)))));
        (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value760 = come_decrement_ref_count(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_779==((void*)0)||fun2_779->mExternal        ) {
            fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3250, "struct sFun*")),(char*)come_increment_ref_count(name_771),(struct sType*)come_increment_ref_count(result_type_770),(struct list$1sType$ph*)come_increment_ref_count(param_types_774),(struct list$1char$ph*)come_increment_ref_count(param_names_777),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_778),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_769),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_780->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_771)),(struct sFun*)come_increment_ref_count(fun_780));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3259, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value768=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3259, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_780),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            _inf_value13->no_mutex=(void*)sNodeBase_no_mutex;
            node_781=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer(sFunNode_finalize, __right_value768, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_782=node_compile(node_781,info);
            if(            !Value_782            ) {
                ((struct tuple2$2int$bool$*)(__right_value770=err_msg(info,"compiling error")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value770, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_748=fun_780;
            come_call_finalizer(sFun_finalize, fun_780, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_781) ? node_781 = come_decrement_ref_count(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_748=fun2_779;
        }
        __dec_obj207=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_768);
        come_call_finalizer(buffer_finalize, __dec_obj207,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_764;
        info->head=head_767;
        info->sline=sline_765;
        __dec_obj208=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_766);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_752, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_766 = come_decrement_ref_count(sname_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_768, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_769, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_770, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_771 = come_decrement_ref_count(name_771, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_772, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_773, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_774, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_777, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_778, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_779, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_747;
    __dec_obj209=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_744);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj210=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_745);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_746;
    __result_obj__211 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value772=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3285, "struct tuple2$2sFun$pchar$ph")),equaler_748,(char*)come_increment_ref_count(real_fun_name_749)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_744 = come_decrement_ref_count(last_code_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_745 = come_decrement_ref_count(last_code2_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_749 = come_decrement_ref_count(real_fun_name_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_750, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value772, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_783;
char* __dec_obj211;
char* last_code2_784;
char* __dec_obj212;
_Bool comma_instead_of_semicolon_785;
struct sClass* current_stack_frame_struct_786;
struct sFun* equaler_787;
void* __right_value773 = (void*)0;
char* real_fun_name_788;
void* __right_value774 = (void*)0;
struct sType* type2_789;
struct sType* __dec_obj213;
struct sClass* klass_790;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct buffer* source_791;
char* name_792;
void* __right_value777 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_795;
struct tuple2$2char$phsType$ph* it_796;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_797=0;
struct sType* field_type_798=0;
char* p_800;
int sline_801;
char* sname_802;
char* head_803;
struct buffer* source3_804;
struct buffer* __dec_obj214;
void* __right_value778 = (void*)0;
char* __dec_obj215;
void* __right_value779 = (void*)0;
struct sBlock* block_805;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sType* result_type_806;
void* __right_value783 = (void*)0;
char* name_807;
void* __right_value784 = (void*)0;
struct sType* left_type_808;
void* __right_value785 = (void*)0;
struct sType* right_type_809;
struct sType* __list_values21___811[2];
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct list$1sType$ph* param_types_810;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
char* __list_values22___812[2];
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct list$1char$ph* param_names_813;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct list$1char$ph* param_default_parametors_814;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sFun* fun2_815;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sFun* fun_816;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value804 = (void*)0;
struct sNode* node_817;
_Bool Value_818;
void* __right_value805 = (void*)0;
struct buffer* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__212;
    last_code_783=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj211=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_784=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj212=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_785=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_786=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_787=((void*)0);
    real_fun_name_788=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_789=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj213=type,
    type=(struct sType*)come_increment_ref_count(type2_789);
    come_call_finalizer(sType_finalize, __dec_obj213,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_790=type->mClass;
    if(    type->mPointerNum>0&&!klass_790->mNumber    ) {
        source_791=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3310, "struct buffer*"))));
        buffer_append_char(source_791,123);
        if(        klass_790->mProtocol        ) {
            name_792="_protocol_obj";
            char source2_793[1024];
            memset(&source2_793, 0, sizeof(char)            *(1024)            );
            snprintf(source2_793,1024,"return left.%s === right.%s;\n",name_792,name_792);
            buffer_append_str(source_791,source2_793);
        }
        else {
            char source2_794[1024];
            memset(&source2_794, 0, sizeof(char)            *(1024)            );
            klass_790=((struct sClass*)(__right_value777=map$2char$phsClass$ph_operator_load_element(info->classes,klass_790->mName)));
            come_call_finalizer(sClass_finalize, __right_value777, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_795=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_790->mFields)),it_796=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_795))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_795))            ;            it_796=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_795))            ){
                multiple_assign_var17=it_796;
                name_797=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_798=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_799[1024];
                memset(&source2_799, 0, sizeof(char)                *(1024)                );
                snprintf(source2_799,1024,"if(left.%s !== right.%s) { return false; }\n",name_797,name_797,name_797);
                buffer_append_str(source_791,source2_799);
                (name_797 = come_decrement_ref_count(name_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_798, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_795, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        buffer_append_str(source_791,"return true;\n");
        buffer_append_char(source_791,125);
        p_800=info->p;
        sline_801=info->sline;
        sname_802=(char*)come_increment_ref_count(info->sname);
        head_803=info->head;
        source3_804=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj214=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_791);
        come_call_finalizer(buffer_finalize, __dec_obj214,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=source_791->buf;
        info->head=source_791->buf;
        __dec_obj215=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_788));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=0;
        block_805=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_806=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3352, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_807=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_788, "05function.c", 3353, "char*"));
        left_type_808=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_808->mHeap=(_Bool)0;
        right_type_809=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_809->mHeap=(_Bool)0;
        param_types_810=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___811[0]=left_type_808,
__list_values21___811[1]=right_type_809,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3358, "struct list$1sType$ph")),2,__list_values21___811)));
        param_names_813=(struct list$1char$ph*)come_increment_ref_count((__list_values22___812[0]=((char*)(__right_value788=__builtin_string("left"))),
__list_values22___812[1]=((char*)(__right_value789=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3359, "struct list$1char$ph")),2,__list_values22___812)));
        (__right_value788 = come_decrement_ref_count(__right_value788, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value789 = come_decrement_ref_count(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_814=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3360, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_814,((void*)0));
        list$1char$ph_push_back(param_default_parametors_814,((void*)0));
        result_type_806->mStatic=(_Bool)0;
        result_type_806->mUniq=(_Bool)0;
        result_type_806->mInline=(_Bool)0;
        fun2_815=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value795=__builtin_string(name_807)))));
        (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value795 = come_decrement_ref_count(__right_value795, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_815==((void*)0)||fun2_815->mExternal        ) {
            fun_816=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3370, "struct sFun*")),(char*)come_increment_ref_count(name_807),(struct sType*)come_increment_ref_count(result_type_806),(struct list$1sType$ph*)come_increment_ref_count(param_types_810),(struct list$1char$ph*)come_increment_ref_count(param_names_813),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_814),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_805),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_816->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_807)),(struct sFun*)come_increment_ref_count(fun_816));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3379, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value803=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3379, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_816),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            _inf_value14->no_mutex=(void*)sNodeBase_no_mutex;
            node_817=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer(sFunNode_finalize, __right_value803, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_818=node_compile(node_817,info);
            if(            !Value_818            ) {
                ((struct tuple2$2int$bool$*)(__right_value805=err_msg(info,"compiling error(X)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value805, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            equaler_787=fun_816;
            come_call_finalizer(sFun_finalize, fun_816, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_817) ? node_817 = come_decrement_ref_count(node_817, ((struct sNode*)node_817)->finalize, ((struct sNode*)node_817)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            equaler_787=fun2_815;
        }
        __dec_obj216=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_804);
        come_call_finalizer(buffer_finalize, __dec_obj216,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_800;
        info->head=head_803;
        info->sline=sline_801;
        __dec_obj217=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_802);
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, source_791, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_802 = come_decrement_ref_count(sname_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_804, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_805, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_806, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_807 = come_decrement_ref_count(name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, left_type_808, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, right_type_809, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_810, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_813, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_814, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_815, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_786;
    __dec_obj218=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_783);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj219=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_784);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_785;
    __result_obj__212 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value807=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3405, "struct tuple2$2sFun$pchar$ph")),equaler_787,(char*)come_increment_ref_count(real_fun_name_788)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_783 = come_decrement_ref_count(last_code_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_784 = come_decrement_ref_count(last_code2_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_788 = come_decrement_ref_count(real_fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_789, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value807, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__212;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__213;
char* last_code_819;
char* __dec_obj220;
char* last_code2_820;
char* __dec_obj221;
_Bool comma_instead_of_semicolon_821;
struct sClass* current_stack_frame_struct_822;
struct sFun* cloner_823;
void* __right_value810 = (void*)0;
char* real_fun_name_824;
void* __right_value811 = (void*)0;
struct sType* type2_825;
struct sType* __dec_obj222;
struct sClass* klass_826;
char* fun_name2_827;
void* __right_value812 = (void*)0;
char* none_generics_name_828;
void* __right_value813 = (void*)0;
struct sType* obj_type_829;
void* __right_value814 = (void*)0;
char* __dec_obj223;
void* __right_value815 = (void*)0;
char* fun_name3_830;
void* __right_value816 = (void*)0;
struct sGenericsFun* generics_fun_831;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name_832=0;
_Bool err_833=0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__214;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
char* __dec_obj224;
void* __right_value823 = (void*)0;
char* __dec_obj225;
int i_834;
void* __right_value824 = (void*)0;
char* new_fun_name_835;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* __dec_obj226;
void* __right_value827 = (void*)0;
char* __dec_obj227;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct buffer* source_836;
void* __right_value830 = (void*)0;
char* name_837;
void* __right_value831 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_839;
struct tuple2$2char$phsType$ph* it_840;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_841=0;
struct sType* field_type_842=0;
void* __right_value832 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_845;
struct tuple2$2char$phsType$ph* it_846;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_847=0;
struct sType* field_type_848=0;
void* __right_value833 = (void*)0;
char* user_real_fun_name_852;
void* __right_value834 = (void*)0;
struct sFun* user_cloner_853;
char* p_854;
int sline_855;
char* sname_856;
struct buffer* source3_857;
char* head_858;
struct buffer* __dec_obj228;
void* __right_value835 = (void*)0;
char* __dec_obj229;
void* __right_value836 = (void*)0;
struct sBlock* block_859;
void* __right_value837 = (void*)0;
struct sType* result_type_860;
void* __right_value838 = (void*)0;
char* name_861;
void* __right_value839 = (void*)0;
struct sType* self_type_862;
struct sType* __list_values23___864[1];
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct list$1sType$ph* param_types_863;
void* __right_value842 = (void*)0;
char* __list_values24___865[1];
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct list$1char$ph* param_names_866;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct list$1char$ph* param_default_parametors_867;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sFun* fun2_868;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sFun* fun_869;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value857 = (void*)0;
struct sNode* node_870;
_Bool Value_871;
void* __right_value858 = (void*)0;
char* __dec_obj230;
struct buffer* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__215;
fun_name2_827 = (void*)0;
memset(&i_834, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")    ) {
        __result_obj__213 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value809=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3411, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value809, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__213;
    }
    last_code_819=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj220=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_820=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj221=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_821=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_822=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_823=((void*)0);
    real_fun_name_824=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_825=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj222=type,
    type=(struct sType*)come_increment_ref_count(type2_825);
    come_call_finalizer(sType_finalize, __dec_obj222,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_826=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_828=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_829=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj223=fun_name2_827,
        fun_name2_827=(char*)come_increment_ref_count(create_method_name(obj_type_829,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_830=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_828,fun_name));
        generics_fun_831=((struct sGenericsFun*)(__right_value816=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_830,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value816, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_831        ) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value818=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_827)),generics_fun_831,(struct sType*)come_increment_ref_count(obj_type_829),info)));
            name_832=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err_833=multiple_assign_var18->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value818, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_833            ) {
                if(                string_operator_equals(type->mClass->mName,"void")                ) {
                    __result_obj__214 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value820=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3451, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_832 = come_decrement_ref_count(name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (none_generics_name_828 = come_decrement_ref_count(none_generics_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, obj_type_829, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name3_830 = come_decrement_ref_count(fun_name3_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (last_code_819 = come_decrement_ref_count(last_code_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (last_code2_820 = come_decrement_ref_count(last_code2_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    (real_fun_name_824 = come_decrement_ref_count(real_fun_name_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(sType_finalize, type2_825, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    (fun_name2_827 = come_decrement_ref_count(fun_name2_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value820, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                    return __result_obj__214;
                }
            }
            cloner_823=((struct sFun*)(__right_value821=map$2char$phsFun$ph_operator_load_element(info->funcs,name_832)));
            come_call_finalizer(sFun_finalize, __right_value821, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_832 = come_decrement_ref_count(name_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_823=((struct sFun*)(__right_value822=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_827)));
            come_call_finalizer(sFun_finalize, __right_value822, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj224=real_fun_name_824,
        real_fun_name_824=(char*)come_increment_ref_count(fun_name2_827);
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        (none_generics_name_828 = come_decrement_ref_count(none_generics_name_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_829, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_830 = come_decrement_ref_count(fun_name3_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj225=fun_name2_827,
        fun_name2_827=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_834=128-1        ;        i_834>=1        ;        i_834--        ){
            new_fun_name_835=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_827,i_834));
            cloner_823=((struct sFun*)(__right_value825=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_835)));
            come_call_finalizer(sFun_finalize, __right_value825, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_823            ) {
                __dec_obj226=fun_name2_827,
                fun_name2_827=(char*)come_increment_ref_count(__builtin_string(new_fun_name_835));
                __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_835 = come_decrement_ref_count(new_fun_name_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_835 = come_decrement_ref_count(new_fun_name_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_823==((void*)0)        ) {
            cloner_823=((struct sFun*)(__right_value827=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_827)));
            come_call_finalizer(sFun_finalize, __right_value827, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        __dec_obj227=real_fun_name_824,
        real_fun_name_824=(char*)come_increment_ref_count(fun_name2_827);
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    cloner_823==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0    ) {
        source_836=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3486, "struct buffer*"))));
        buffer_append_str(source_836,"{\n");
        buffer_append_str(source_836,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_836,"var result = new %s;\n",((char*)(__right_value830=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value830 = come_decrement_ref_count(__right_value830, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        klass_826->mProtocol        ) {
            name_837="_protocol_obj";
            char source2_838[1024];
            memset(&source2_838, 0, sizeof(char)            *(1024)            );
            snprintf(source2_838,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_836,source2_838);
            klass_826=((struct sClass*)(__right_value831=map$2char$phsClass$ph_operator_load_element(info->classes,klass_826->mName)));
            come_call_finalizer(sClass_finalize, __right_value831, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_839=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_826->mFields)),it_840=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_839))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_839))            ;            it_840=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_839))            ){
                multiple_assign_var19=it_840;
                name_841=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_842=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                string_operator_equals(name_841,"_protocol_obj")                ) {
                }
                else if(                list$1sNode$ph_length(field_type_842->mArrayNum)>0                ) {
                    char source2_843[1024];
                    memset(&source2_843, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_843,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_841,name_841,name_841);
                    buffer_append_str(source_836,source2_843);
                }
                else {
                    char source2_844[1024];
                    memset(&source2_844, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_844,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_841,name_841);
                    buffer_append_str(source_836,source2_844);
                }
                (name_841 = come_decrement_ref_count(name_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_842, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_839, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        else {
            klass_826=((struct sClass*)(__right_value832=map$2char$phsClass$ph_operator_load_element(info->classes,klass_826->mName)));
            come_call_finalizer(sClass_finalize, __right_value832, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            for(            o2_saved_845=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_826->mFields)),it_846=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_845))            ;            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_845))            ;            it_846=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_845))            ){
                multiple_assign_var20=it_846;
                name_847=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_848=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                field_type_848->mHeap                ) {
                    char source2_849[1024];
                    memset(&source2_849, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_849,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_847,name_847,name_847);
                    buffer_append_str(source_836,source2_849);
                }
                else if(                list$1sNode$ph_length(field_type_848->mArrayNum)>0                ) {
                    char source2_850[1024];
                    memset(&source2_850, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_850,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_847,name_847,name_847);
                    buffer_append_str(source_836,source2_850);
                }
                else {
                    char source2_851[1024];
                    memset(&source2_851, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_851,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_847,name_847);
                    buffer_append_str(source_836,source2_851);
                }
                (name_847 = come_decrement_ref_count(name_847, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, field_type_848, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_845, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        user_real_fun_name_852=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_853=((struct sFun*)(__right_value834=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_852)));
        come_call_finalizer(sFun_finalize, __right_value834, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source_836,"return result;");
        buffer_append_char(source_836,125);
        p_854=info->p;
        sline_855=info->sline;
        sname_856=(char*)come_increment_ref_count(info->sname);
        source3_857=(struct buffer*)come_increment_ref_count(info->source);
        head_858=info->head;
        __dec_obj228=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_836);
        come_call_finalizer(buffer_finalize, __dec_obj228,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj229=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_824));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_859=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_860=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_861=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_824, "05function.c", 3576, "char*"));
        self_type_862=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_862->mHeap=(_Bool)0;
        param_types_863=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___864[0]=self_type_862,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3579, "struct list$1sType$ph")),1,__list_values23___864)));
        param_names_866=(struct list$1char$ph*)come_increment_ref_count((__list_values24___865[0]=((char*)(__right_value842=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3580, "struct list$1char$ph")),1,__list_values24___865)));
        (__right_value842 = come_decrement_ref_count(__right_value842, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_867=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3581, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_867,((void*)0));
        result_type_860->mStatic=(_Bool)0;
        result_type_860->mUniq=(_Bool)0;
        result_type_860->mInline=(_Bool)0;
        fun2_868=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value848=__builtin_string(name_861)))));
        (__right_value847 = come_decrement_ref_count(__right_value847, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value848 = come_decrement_ref_count(__right_value848, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_868==((void*)0)||fun2_868->mExternal        ) {
            fun_869=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3591, "struct sFun*")),(char*)come_increment_ref_count(name_861),(struct sType*)come_increment_ref_count(result_type_860),(struct list$1sType$ph*)come_increment_ref_count(param_types_863),(struct list$1char$ph*)come_increment_ref_count(param_names_866),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_867),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_859),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_869->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_861)),(struct sFun*)come_increment_ref_count(fun_869));
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3600, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value856=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3600, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_869),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            _inf_value15->no_mutex=(void*)sNodeBase_no_mutex;
            node_870=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer(sFunNode_finalize, __right_value856, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_871=node_compile(node_870,info);
            if(            !Value_871            ) {
                ((struct tuple2$2int$bool$*)(__right_value858=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value858, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            cloner_823=fun_869;
            come_call_finalizer(sFun_finalize, fun_869, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_870) ? node_870 = come_decrement_ref_count(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            cloner_823=fun2_868;
        }
        __dec_obj230=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_856);
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_855;
        __dec_obj231=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_857);
        come_call_finalizer(buffer_finalize, __dec_obj231,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_854;
        info->head=head_858;
        info->sline=sline_855;
        come_call_finalizer(buffer_finalize, source_836, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (user_real_fun_name_852 = come_decrement_ref_count(user_real_fun_name_852, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_856 = come_decrement_ref_count(sname_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_857, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_859, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_860, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_861 = come_decrement_ref_count(name_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_862, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_863, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_866, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_867, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_868, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_822;
    __dec_obj232=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_819);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj233=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_820);
    __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_821;
    __result_obj__215 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value860=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3628, "struct tuple2$2sFun$pchar$ph")),cloner_823,(char*)come_increment_ref_count(real_fun_name_824)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_819 = come_decrement_ref_count(last_code_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_820 = come_decrement_ref_count(last_code2_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_824 = come_decrement_ref_count(real_fun_name_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_825, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_827 = come_decrement_ref_count(fun_name2_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value860, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__215;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_906;
char* __dec_obj243;
char* last_code2_907;
char* __dec_obj244;
_Bool comma_instead_of_semicolon_908;
struct sClass* current_stack_frame_struct_909;
struct sFun* to_string_fun_910;
void* __right_value894 = (void*)0;
char* real_fun_name_911;
void* __right_value895 = (void*)0;
struct sType* type_before_912;
void* __right_value896 = (void*)0;
struct sType* type2_913;
struct sType* __dec_obj245;
struct sClass* klass_914;
struct sType* __dec_obj246;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
char* none_generics_name_915;
void* __right_value899 = (void*)0;
char* generics_fun_name_916;
void* __right_value900 = (void*)0;
struct sGenericsFun* generics_fun_917;
void* __right_value901 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name_918=0;
_Bool err_919=0;
void* __right_value902 = (void*)0;
int i_920;
void* __right_value903 = (void*)0;
char* new_fun_name_921;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
char* __dec_obj247;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* source_922;
int i_923;
void* __right_value909 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_924;
struct tuple2$2char$phsType$ph* it_925;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_926=0;
struct sType* field_type_927=0;
char* p_931;
int sline_932;
char* sname_933;
struct buffer* source3_934;
char* head_935;
struct buffer* __dec_obj248;
void* __right_value910 = (void*)0;
char* __dec_obj249;
void* __right_value911 = (void*)0;
struct sBlock* block_936;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sType* result_type_937;
void* __right_value915 = (void*)0;
char* name_938;
void* __right_value916 = (void*)0;
struct sType* self_type_939;
void* __right_value917 = (void*)0;
struct sType* __dec_obj250;
struct sType* __list_values27___941[1];
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1sType$ph* param_types_940;
void* __right_value920 = (void*)0;
char* __list_values28___942[1];
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct list$1char$ph* param_names_943;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct list$1char$ph* param_default_parametors_944;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sFun* fun2_945;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun_946;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value935 = (void*)0;
struct sNode* node_947;
_Bool Value_948;
void* __right_value936 = (void*)0;
char* __dec_obj251;
struct buffer* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__217;
memset(&i_920, 0, sizeof(int));
    last_code_906=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj243=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_907=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj244=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_908=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_909=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_910=((void*)0);
    real_fun_name_911=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_912=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_913=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj245=type,
    type=(struct sType*)come_increment_ref_count(type2_913);
    come_call_finalizer(sType_finalize, __dec_obj245,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_914=type->mClass;
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj246=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj246,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        to_string_fun_910=((struct sFun*)(__right_value897=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_911)));
        come_call_finalizer(sFun_finalize, __right_value897, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        to_string_fun_910==((void*)0)        ) {
            none_generics_name_915=(char*)come_increment_ref_count(get_none_generics_name(type2_913->mClass->mName));
            generics_fun_name_916=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_915,fun_name));
            generics_fun_917=((struct sGenericsFun*)(__right_value900=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_916)));
            come_call_finalizer(sGenericsFun_finalize, __right_value900, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_917            ) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value901=create_generics_fun((char*)come_increment_ref_count(real_fun_name_911),generics_fun_917,(struct sType*)come_increment_ref_count(type),info)));
                name_918=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err_919=multiple_assign_var22->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value901, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_919                ) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_910=((struct sFun*)(__right_value902=map$2char$phsFun$ph_operator_load_element(info->funcs,name_918)));
                come_call_finalizer(sFun_finalize, __right_value902, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_918 = come_decrement_ref_count(name_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_915 = come_decrement_ref_count(none_generics_name_915, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_916 = come_decrement_ref_count(generics_fun_name_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_920=128-1        ;        i_920>=1        ;        i_920--        ){
            new_fun_name_921=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_911,i_920));
            to_string_fun_910=((struct sFun*)(__right_value904=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_921)));
            come_call_finalizer(sFun_finalize, __right_value904, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            to_string_fun_910            ) {
                __dec_obj247=real_fun_name_911,
                real_fun_name_911=(char*)come_increment_ref_count(__builtin_string(new_fun_name_921));
                __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_921 = come_decrement_ref_count(new_fun_name_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_921 = come_decrement_ref_count(new_fun_name_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        to_string_fun_910==((void*)0)        ) {
            to_string_fun_910=((struct sFun*)(__right_value906=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_911)));
            come_call_finalizer(sFun_finalize, __right_value906, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    to_string_fun_910==((void*)0)&&type->mPointerNum>0&&!klass_914->mNumber    ) {
        source_922=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3837, "struct buffer*"))));
        buffer_append_str(source_922,"{\n");
        buffer_append_str(source_922,"var result = new buffer();\n");
        buffer_append_format(source_922,"result.append_str(\"%s {\");\n",klass_914->mName);
        i_923=0;
        klass_914=((struct sClass*)(__right_value909=map$2char$phsClass$ph_operator_load_element(info->classes,klass_914->mName)));
        come_call_finalizer(sClass_finalize, __right_value909, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_924=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_914->mFields)),it_925=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_924))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_924))        ;        it_925=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_924))        ){
            multiple_assign_var23=it_925;
            name_926=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type_927=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            string_operator_equals(field_type_927->mClass->mName,"lambda")            ) {
                char source2_928[1024];
                memset(&source2_928, 0, sizeof(char)                *(1024)                );
                snprintf(source2_928,1024,"result.append_str(\"%s:\");\n",name_926);
                buffer_append_str(source_922,source2_928);
                snprintf(source2_928,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_922,source2_928);
            }
            else if(            i_923==list$1tuple2$2char$phsType$ph$ph_length(klass_914->mFields)-1            ) {
                char source2_929[1024];
                memset(&source2_929, 0, sizeof(char)                *(1024)                );
                snprintf(source2_929,1024,"result.append_str(\"%s:\");\n",name_926);
                buffer_append_str(source_922,source2_929);
                snprintf(source2_929,1024,"result.append_str(self.%s.to_string());\n",name_926);
                buffer_append_str(source_922,source2_929);
            }
            else {
                char source2_930[1024];
                memset(&source2_930, 0, sizeof(char)                *(1024)                );
                snprintf(source2_930,1024,"result.append_str(\"%s:\");\n",name_926);
                buffer_append_str(source_922,source2_930);
                snprintf(source2_930,1024,"result.append_str(self.%s.to_string());\n",name_926);
                buffer_append_str(source_922,source2_930);
                snprintf(source2_930,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_922,source2_930);
            }
            i_923++;
            (name_926 = come_decrement_ref_count(name_926, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_927, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_924, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_str(source_922,"result.append_str(\"}\");\n");
        buffer_append_format(source_922,"return result.to_string();\n");
        buffer_append_char(source_922,125);
        p_931=info->p;
        sline_932=info->sline;
        sname_933=(char*)come_increment_ref_count(info->sname);
        source3_934=(struct buffer*)come_increment_ref_count(info->source);
        head_935=info->head;
        __dec_obj248=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_922);
        come_call_finalizer(buffer_finalize, __dec_obj248,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj249=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_911));
        __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_936=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_937=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3906, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_937->mHeap=(_Bool)1;
        name_938=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_911, "05function.c", 3908, "char*"));
        self_type_939=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj250=self_type_939,
        self_type_939=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
        come_call_finalizer(sType_finalize, __dec_obj250,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self_type_939->mHeap=(_Bool)0;
        param_types_940=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___941[0]=self_type_939,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3913, "struct list$1sType$ph")),1,__list_values27___941)));
        param_names_943=(struct list$1char$ph*)come_increment_ref_count((__list_values28___942[0]=((char*)(__right_value920=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3914, "struct list$1char$ph")),1,__list_values28___942)));
        (__right_value920 = come_decrement_ref_count(__right_value920, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_944=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3915, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_944,((void*)0));
        result_type_937->mStatic=(_Bool)0;
        result_type_937->mUniq=(_Bool)0;
        result_type_937->mInline=(_Bool)0;
        fun2_945=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value926=__builtin_string(name_938)))));
        (__right_value925 = come_decrement_ref_count(__right_value925, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value926 = come_decrement_ref_count(__right_value926, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_945==((void*)0)||fun2_945->mExternal        ) {
            fun_946=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3924, "struct sFun*")),(char*)come_increment_ref_count(name_938),(struct sType*)come_increment_ref_count(result_type_937),(struct list$1sType$ph*)come_increment_ref_count(param_types_940),(struct list$1char$ph*)come_increment_ref_count(param_names_943),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_944),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_936),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_946->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_938)),(struct sFun*)come_increment_ref_count(fun_946));
            to_string_fun_910=fun_946;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3935, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value934=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3935, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_946),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            _inf_value17->no_mutex=(void*)sNodeBase_no_mutex;
            node_947=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer(sFunNode_finalize, __right_value934, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_948=node_compile(node_947,info);
            if(            !Value_948            ) {
                ((struct tuple2$2int$bool$*)(__right_value936=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value936, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_946, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_947) ? node_947 = come_decrement_ref_count(node_947, ((struct sNode*)node_947)->finalize, ((struct sNode*)node_947)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            to_string_fun_910=fun2_945;
        }
        __dec_obj251=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_933);
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_932;
        __dec_obj252=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_934);
        come_call_finalizer(buffer_finalize, __dec_obj252,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_931;
        info->head=head_935;
        info->sline=sline_932;
        come_call_finalizer(buffer_finalize, source_922, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_933 = come_decrement_ref_count(sname_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_934, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_936, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_937, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_938 = come_decrement_ref_count(name_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_939, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_940, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_943, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_944, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_945, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_909;
    __dec_obj253=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_906);
    __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj254=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_907);
    __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_908;
    __result_obj__217 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value938=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3961, "struct tuple2$2sFun$pchar$ph")),to_string_fun_910,(char*)come_increment_ref_count(real_fun_name_911)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_906 = come_decrement_ref_count(last_code_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_907 = come_decrement_ref_count(last_code2_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_911 = come_decrement_ref_count(real_fun_name_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type_before_912, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_913, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value938, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__217;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_949;
char* __dec_obj255;
char* last_code2_950;
char* __dec_obj256;
_Bool comma_instead_of_semicolon_951;
struct sClass* current_stack_frame_struct_952;
struct sFun* get_hash_key_fun_953;
void* __right_value939 = (void*)0;
char* real_fun_name_954;
void* __right_value940 = (void*)0;
struct sType* type2_955;
struct sType* __dec_obj257;
struct sClass* klass_956;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
char* none_generics_name_957;
void* __right_value943 = (void*)0;
char* generics_fun_name_958;
void* __right_value944 = (void*)0;
struct sGenericsFun* generics_fun_959;
void* __right_value945 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name_960=0;
_Bool err_961=0;
void* __right_value946 = (void*)0;
int i_962;
void* __right_value947 = (void*)0;
char* new_fun_name_963;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
char* __dec_obj258;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct buffer* source_964;
int i_965;
void* __right_value953 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_966;
struct tuple2$2char$phsType$ph* it_967;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_968=0;
struct sType* field_type_969=0;
char* p_971;
int sline_972;
char* sname_973;
struct buffer* source3_974;
char* head_975;
struct buffer* __dec_obj259;
void* __right_value954 = (void*)0;
char* __dec_obj260;
void* __right_value955 = (void*)0;
struct sBlock* block_976;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sType* result_type_977;
void* __right_value959 = (void*)0;
char* name_978;
void* __right_value960 = (void*)0;
struct sType* self_type_979;
struct sType* __list_values29___981[1];
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct list$1sType$ph* param_types_980;
void* __right_value963 = (void*)0;
char* __list_values30___982[1];
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct list$1char$ph* param_names_983;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct list$1char$ph* param_default_parametors_984;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sFun* fun2_985;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sFun* fun_986;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sNode* _inf_value18;
struct sFunNode* _inf_obj_value18;
void* __right_value978 = (void*)0;
struct sNode* node_987;
_Bool Value_988;
void* __right_value979 = (void*)0;
char* __dec_obj261;
struct buffer* __dec_obj262;
char* __dec_obj263;
char* __dec_obj264;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__218;
memset(&i_962, 0, sizeof(int));
    last_code_949=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj255=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_950=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj256=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    comma_instead_of_semicolon_951=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_952=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_953=((void*)0);
    real_fun_name_954=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_955=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(type),info));
    __dec_obj257=type,
    type=(struct sType*)come_increment_ref_count(type2_955);
    come_call_finalizer(sType_finalize, __dec_obj257,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    klass_956=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        get_hash_key_fun_953=((struct sFun*)(__right_value941=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_954)));
        come_call_finalizer(sFun_finalize, __right_value941, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        get_hash_key_fun_953==((void*)0)        ) {
            none_generics_name_957=(char*)come_increment_ref_count(get_none_generics_name(type2_955->mClass->mName));
            generics_fun_name_958=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_957,fun_name));
            generics_fun_959=((struct sGenericsFun*)(__right_value944=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_958)));
            come_call_finalizer(sGenericsFun_finalize, __right_value944, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            generics_fun_959            ) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value945=create_generics_fun((char*)come_increment_ref_count(real_fun_name_954),generics_fun_959,(struct sType*)come_increment_ref_count(type),info)));
                name_960=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err_961=multiple_assign_var24->v2;
                come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value945, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                !err_961                ) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_953=((struct sFun*)(__right_value946=map$2char$phsFun$ph_operator_load_element(info->funcs,name_960)));
                come_call_finalizer(sFun_finalize, __right_value946, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                (name_960 = come_decrement_ref_count(name_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
            (none_generics_name_957 = come_decrement_ref_count(none_generics_name_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            (generics_fun_name_958 = come_decrement_ref_count(generics_fun_name_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
    }
    else {
        for(        i_962=128-1        ;        i_962>=1        ;        i_962--        ){
            new_fun_name_963=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_954,i_962));
            get_hash_key_fun_953=((struct sFun*)(__right_value948=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_963)));
            come_call_finalizer(sFun_finalize, __right_value948, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            get_hash_key_fun_953            ) {
                __dec_obj258=real_fun_name_954,
                real_fun_name_954=(char*)come_increment_ref_count(__builtin_string(new_fun_name_963));
                __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_963 = come_decrement_ref_count(new_fun_name_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_963 = come_decrement_ref_count(new_fun_name_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        get_hash_key_fun_953==((void*)0)        ) {
            get_hash_key_fun_953=((struct sFun*)(__right_value950=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_954)));
            come_call_finalizer(sFun_finalize, __right_value950, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    get_hash_key_fun_953==((void*)0)&&type->mPointerNum>0&&!klass_956->mNumber&&!klass_956->mProtocol    ) {
        source_964=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 4031, "struct buffer*"))));
        buffer_append_str(source_964,"{\n");
        buffer_append_str(source_964,"unsigned int result = 0;\n");
        i_965=0;
        klass_956=((struct sClass*)(__right_value953=map$2char$phsClass$ph_operator_load_element(info->classes,klass_956->mName)));
        come_call_finalizer(sClass_finalize, __right_value953, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        for(        o2_saved_966=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_956->mFields)),it_967=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_966))        ;        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_966))        ;        it_967=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_966))        ){
            multiple_assign_var25=it_967;
            name_968=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type_969=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2_970[1024];
            memset(&source2_970, 0, sizeof(char)            *(1024)            );
            snprintf(source2_970,1024,"result += ((int)self.%s).get_hash_key();\n",name_968);
            buffer_append_str(source_964,source2_970);
            i_965++;
            (name_968 = come_decrement_ref_count(name_968, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            come_call_finalizer(sType_finalize, field_type_969, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_966, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        buffer_append_format(source_964,"return result;\n");
        buffer_append_char(source_964,125);
        p_971=info->p;
        sline_972=info->sline;
        sname_973=(char*)come_increment_ref_count(info->sname);
        source3_974=(struct buffer*)come_increment_ref_count(info->source);
        head_975=info->head;
        __dec_obj259=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_964);
        come_call_finalizer(buffer_finalize, __dec_obj259,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj260=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_954));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=1;
        block_976=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_977=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 4068, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_977->mUnsigned=(_Bool)1;
        name_978=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_954, "05function.c", 4070, "char*"));
        self_type_979=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_979->mHeap=(_Bool)0;
        param_types_980=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___981[0]=self_type_979,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4073, "struct list$1sType$ph")),1,__list_values29___981)));
        param_names_983=(struct list$1char$ph*)come_increment_ref_count((__list_values30___982[0]=((char*)(__right_value963=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4074, "struct list$1char$ph")),1,__list_values30___982)));
        (__right_value963 = come_decrement_ref_count(__right_value963, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        param_default_parametors_984=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4075, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_984,((void*)0));
        result_type_977->mStatic=(_Bool)0;
        result_type_977->mUniq=(_Bool)0;
        result_type_977->mInline=(_Bool)0;
        fun2_985=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value969=__builtin_string(name_978)))));
        (__right_value968 = come_decrement_ref_count(__right_value968, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value969 = come_decrement_ref_count(__right_value969, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        if(        fun2_985==((void*)0)||fun2_985->mExternal        ) {
            fun_986=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4084, "struct sFun*")),(char*)come_increment_ref_count(name_978),(struct sType*)come_increment_ref_count(result_type_977),(struct list$1sType$ph*)come_increment_ref_count(param_types_980),(struct list$1char$ph*)come_increment_ref_count(param_names_983),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_984),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_976),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0));
            fun_986->mGenericsFun=(_Bool)1;
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_978)),(struct sFun*)come_increment_ref_count(fun_986));
            get_hash_key_fun_953=fun_986;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4095, "struct sNode");
            _inf_obj_value18=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value977=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4095, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_986),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFunNode_finalize;
            _inf_value18->clone=(void*)sFunNode_clone;
            _inf_value18->compile=(void*)sFunNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFunNode_kind;
            _inf_value18->no_mutex=(void*)sNodeBase_no_mutex;
            node_987=(struct sNode*)come_increment_ref_count(_inf_value18);
            come_call_finalizer(sFunNode_finalize, __right_value977, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            Value_988=node_compile(node_987,info);
            if(            !Value_988            ) {
                ((struct tuple2$2int$bool$*)(__right_value979=err_msg(info,"compiling error(Y)")));
                come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value979, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                exit(2);
            }
            else {
            }
            come_call_finalizer(sFun_finalize, fun_986, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            ((node_987) ? node_987 = come_decrement_ref_count(node_987, ((struct sNode*)node_987)->finalize, ((struct sNode*)node_987)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_953=fun2_985;
        }
        __dec_obj261=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_973);
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        info->sline=sline_972;
        __dec_obj262=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_974);
        come_call_finalizer(buffer_finalize, __dec_obj262,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        info->p=p_971;
        info->head=head_975;
        info->sline=sline_972;
        come_call_finalizer(buffer_finalize, source_964, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_973 = come_decrement_ref_count(sname_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source3_974, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_976, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sType_finalize, result_type_977, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (name_978 = come_decrement_ref_count(name_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, self_type_979, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_980, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_983, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_984, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_985, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_952;
    __dec_obj263=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_949);
    __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj264=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_950);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_951;
    __result_obj__218 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value981=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4121, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_953,(char*)come_increment_ref_count(real_fun_name_954)))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (last_code_949 = come_decrement_ref_count(last_code_949, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_950 = come_decrement_ref_count(last_code2_950, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (real_fun_name_954 = come_decrement_ref_count(real_fun_name_954, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, type2_955, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value981, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__218;
}

struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info){
struct sFun* caller_fun_989;
int caller_line_990;
char* caller_sname_991;
_Bool comma_instead_of_semicolon_992;
char* last_code_993;
char* __dec_obj265;
char* last_code2_994;
char* __dec_obj266;
void* __right_value982 = (void*)0;
char* sname_top_995;
int sline_top_996;
struct sType* result_type_997;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct list$1sType$ph* param_types_998;
struct list$1sType$ph* o2_saved_999;
struct sType* it_1000;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct list$1char$ph* param_names_1001;
void* __right_value987 = (void*)0;
struct list$1char$ph* param_default_parametors_1002;
char* p_1003;
int sline_1004;
char* sname_1005;
char* head_1006;
struct buffer* source_1007;
void* __right_value988 = (void*)0;
struct buffer* __dec_obj267;
char* __dec_obj268;
void* __right_value989 = (void*)0;
struct sBlock* block_1008;
struct buffer* __dec_obj269;
char* __dec_obj270;
_Bool const_fun_1009;
_Bool var_args_1010;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sFun* fun2_1011;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sNode* _inf_value19;
struct sFunNode* _inf_obj_value19;
void* __right_value996 = (void*)0;
struct sNode* node_1012;
_Bool Value_1013;
struct sFun* __result_obj__219;
void* __right_value997 = (void*)0;
char* __dec_obj271;
char* __dec_obj272;
char* __dec_obj273;
struct sFun* __result_obj__220;
    caller_fun_989=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_990=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_991=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_992=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_993=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj265=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    last_code2_994=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj266=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj266 = come_decrement_ref_count(__dec_obj266, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    sname_top_995=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_996=info->sline;
    result_type_997=(struct sType*)come_increment_ref_count(fun->mResultType);
    param_types_998=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4145, "struct list$1sType$ph*"))));
    for(    o2_saved_999=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_1000=list$1sType$ph_begin((o2_saved_999))    ;    !list$1sType$ph_end((o2_saved_999))    ;    it_1000=list$1sType$ph_next((o2_saved_999))    ){
        list$1sType$ph_add(param_types_998,(struct sType*)come_increment_ref_count(sType_clone(it_1000)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_999, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    param_names_1001=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamNames));
    param_default_parametors_1002=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(fun->mParamDefaultParametors));
    p_1003=info->p;
    sline_1004=info->sline;
    sname_1005=(char*)come_increment_ref_count(info->sname);
    head_1006=info->head;
    source_1007=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj267=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(fun->mTextBlock));
    come_call_finalizer(buffer_finalize, __dec_obj267,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=fun->mTextBlockSline;
    __dec_obj268=info->sname,
    info->sname=(char*)come_increment_ref_count(fun->mTextBlockSName);
    __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    block_1008=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_1006;
    __dec_obj269=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_1007);
    come_call_finalizer(buffer_finalize, __dec_obj269,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->p=p_1003;
    info->sline=sline_1004;
    __dec_obj270=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_1005);
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_type_997->mInline=(_Bool)0;
    result_type_997->mStatic=(_Bool)0;
    result_type_997->mUniq=(_Bool)0;
    const_fun_1009=fun->mConstFun;
    var_args_1010=fun->mVarArgs;
    fun2_1011=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 4181, "struct sFun*")),(char*)come_increment_ref_count(fun->mName),(struct sType*)come_increment_ref_count(result_type_997),(struct list$1sType$ph*)come_increment_ref_count(param_types_998),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)0,var_args_1010,(struct sBlock*)come_increment_ref_count(block_1008),(_Bool)0,info,(_Bool)0,(_Bool)1,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_1009,((void*)0),((void*)0),0,(_Bool)0));
    _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 4186, "struct sNode");
    _inf_obj_value19=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value995=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 4186, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun2_1011),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sFunNode_finalize;
    _inf_value19->clone=(void*)sFunNode_clone;
    _inf_value19->compile=(void*)sFunNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sFunNode_kind;
    _inf_value19->no_mutex=(void*)sNodeBase_no_mutex;
    node_1012=(struct sNode*)come_increment_ref_count(_inf_value19);
    come_call_finalizer(sFunNode_finalize, __right_value995, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    Value_1013=node_compile(node_1012,info);
    if(    !Value_1013    ) {
        __result_obj__219 = (void*)come_increment_ref_count(((void*)0));
        (last_code_993 = come_decrement_ref_count(last_code_993, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (last_code2_994 = come_decrement_ref_count(last_code2_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (sname_top_995 = come_decrement_ref_count(sname_top_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, result_type_997, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_998, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_1001, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1002, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (sname_1005 = come_decrement_ref_count(sname_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(buffer_finalize, source_1007, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, block_1008, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sFun_finalize, fun2_1011, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((node_1012) ? node_1012 = come_decrement_ref_count(node_1012, ((struct sNode*)node_1012)->finalize, ((struct sNode*)node_1012)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sFun_finalize, __result_obj__219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__219;
    }
    else {
    }
    __dec_obj271=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_995));
    __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->sline=sline_top_996;
    __dec_obj272=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_993);
    __dec_obj272 = come_decrement_ref_count(__dec_obj272, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __dec_obj273=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_994);
    __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    info->caller_fun=caller_fun_989;
    info->caller_line=caller_line_990;
    info->caller_sname=caller_sname_991;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_992;
    __result_obj__220 = (struct sFun*)come_increment_ref_count(fun2_1011);
    (last_code_993 = come_decrement_ref_count(last_code_993, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (last_code2_994 = come_decrement_ref_count(last_code2_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (sname_top_995 = come_decrement_ref_count(sname_top_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sType_finalize, result_type_997, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types_998, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names_1001, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_1002, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (sname_1005 = come_decrement_ref_count(sname_1005, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, source_1007, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, block_1008, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sFun_finalize, fun2_1011, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((node_1012) ? node_1012 = come_decrement_ref_count(node_1012, ((struct sNode*)node_1012)->finalize, ((struct sNode*)node_1012)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sFun_finalize, __result_obj__220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__220;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj274;
char* result_1014;
struct list$1CVALUE$ph* stack_saved_1015;
struct list$1sRightValueObject$ph* right_value_objects_1016;
struct sClass* klass_1017;
char* class_name_1018;
char* fun_name_1019;
void* __right_value998 = (void*)0;
struct sType* type2_1020;
struct sFun* cloner_1021;
char* fun_name2_1022;
void* __right_value999 = (void*)0;
char* none_generics_name_1023;
void* __right_value1000 = (void*)0;
struct sType* obj_type_1024;
void* __right_value1001 = (void*)0;
char* __dec_obj275;
void* __right_value1002 = (void*)0;
char* fun_name3_1025;
void* __right_value1003 = (void*)0;
struct sGenericsFun* generics_fun_1026;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var26 = (void*)0;
char* name_1027=0;
_Bool err_1028=0;
_Bool __result_obj__221;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
char* __dec_obj276;
int i_1031;
void* __right_value1009 = (void*)0;
char* new_fun_name_1032;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
char* __dec_obj277;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var27 = (void*)0;
struct sFun* fun_1033=0;
char* new_fun_name_1034=0;
char* __dec_obj278;
struct list$1sRightValueObject$ph* __dec_obj279;
struct list$1CVALUE$ph* __dec_obj280;
_Bool __result_obj__222;
fun_name2_1022 = (void*)0;
memset(&i_1031, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj274=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj274,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1014=((void*)0);
    stack_saved_1015=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1016=info->right_value_objects;
    klass_1017=type->mClass;
    class_name_1018=klass_1017->mName;
    fun_name_1019="equals";
    type2_1020=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1020->mHeap=(_Bool)0;
    cloner_1021=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1023=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1024=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj275=fun_name2_1022,
        fun_name2_1022=(char*)come_increment_ref_count(create_method_name(obj_type_1024,(_Bool)0,fun_name_1019,info,(_Bool)1));
        __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1025=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1023,fun_name_1019));
        generics_fun_1026=((struct sGenericsFun*)(__right_value1003=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1025,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1003, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1026        ) {
            multiple_assign_var26=((struct tuple2$2char$phbool$*)(__right_value1005=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1022)),generics_fun_1026,(struct sType*)come_increment_ref_count(obj_type_1024),info)));
            name_1027=(char*)come_increment_ref_count(multiple_assign_var26->v1);
            err_1028=multiple_assign_var26->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1005, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1028            ) {
                __result_obj__221 = (_Bool)0;
                (name_1027 = come_decrement_ref_count(name_1027, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1023 = come_decrement_ref_count(none_generics_name_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1024, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1025 = come_decrement_ref_count(fun_name3_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1014 = come_decrement_ref_count(result_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1015, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1020, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1022 = come_decrement_ref_count(fun_name2_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__221;
            }
            else {
                cloner_1021=((struct sFun*)(__right_value1006=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1027)));
                come_call_finalizer(sFun_finalize, __right_value1006, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            }
            (name_1027 = come_decrement_ref_count(name_1027, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1021=((struct sFun*)(__right_value1007=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1022)));
            come_call_finalizer(sFun_finalize, __right_value1007, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1023 = come_decrement_ref_count(none_generics_name_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1024, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1025 = come_decrement_ref_count(fun_name3_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj276=fun_name2_1022,
        fun_name2_1022=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1019,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1031=128-1        ;        i_1031>=1        ;        i_1031--        ){
            new_fun_name_1032=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1022,i_1031));
            cloner_1021=((struct sFun*)(__right_value1010=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1032)));
            come_call_finalizer(sFun_finalize, __right_value1010, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1021            ) {
                __dec_obj277=fun_name2_1022,
                fun_name2_1022=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1032));
                __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1032 = come_decrement_ref_count(new_fun_name_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1032 = come_decrement_ref_count(new_fun_name_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1021==((void*)0)        ) {
            cloner_1021=((struct sFun*)(__right_value1012=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1022)));
            come_call_finalizer(sFun_finalize, __right_value1012, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1021==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var27=((struct tuple2$2sFun$pchar$ph*)(__right_value1013=create_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1019,info)));
        fun_1033=multiple_assign_var27->v1;
        new_fun_name_1034=(char*)come_increment_ref_count(multiple_assign_var27->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1013, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj278=fun_name2_1022,
        fun_name2_1022=(char*)come_increment_ref_count(new_fun_name_1034);
        __dec_obj278 = come_decrement_ref_count(__dec_obj278, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1021=fun_1033;
        (new_fun_name_1034 = come_decrement_ref_count(new_fun_name_1034, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj279=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1016);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj279,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj280=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1015);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj280,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__222 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1014 = come_decrement_ref_count(result_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1015, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1020, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1022 = come_decrement_ref_count(fun_name2_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__222;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1029;
struct list_item$1CVALUE$ph* prev_it_1030;
    it_1029=self->head;
    while(    it_1029!=((void*)0)    ) {
        prev_it_1030=it_1029;
        it_1029=it_1029->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1030, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_1035;
struct list_item$1CVALUE$ph* prev_it_1036;
    it_1035=self->head;
    while(    it_1035!=((void*)0)    ) {
        prev_it_1036=it_1035;
        it_1035=it_1035->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_1036, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj281;
char* result_1037;
struct list$1CVALUE$ph* stack_saved_1038;
struct list$1sRightValueObject$ph* right_value_objects_1039;
struct sClass* klass_1040;
char* class_name_1041;
char* fun_name_1042;
void* __right_value1014 = (void*)0;
struct sType* type2_1043;
struct sFun* cloner_1044;
char* fun_name2_1045;
void* __right_value1015 = (void*)0;
char* none_generics_name_1046;
void* __right_value1016 = (void*)0;
struct sType* obj_type_1047;
void* __right_value1017 = (void*)0;
char* __dec_obj282;
void* __right_value1018 = (void*)0;
char* fun_name3_1048;
void* __right_value1019 = (void*)0;
struct sGenericsFun* generics_fun_1049;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var28 = (void*)0;
char* name_1050=0;
_Bool err_1051=0;
_Bool __result_obj__223;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
char* __dec_obj283;
int i_1052;
void* __right_value1025 = (void*)0;
char* new_fun_name_1053;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
char* __dec_obj284;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var29 = (void*)0;
struct sFun* fun_1054=0;
char* new_fun_name_1055=0;
char* __dec_obj285;
struct list$1sRightValueObject$ph* __dec_obj286;
struct list$1CVALUE$ph* __dec_obj287;
_Bool __result_obj__224;
fun_name2_1045 = (void*)0;
memset(&i_1052, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj281=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj281,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1037=((void*)0);
    stack_saved_1038=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1039=info->right_value_objects;
    klass_1040=type->mClass;
    class_name_1041=klass_1040->mName;
    fun_name_1042="operator_equals";
    type2_1043=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1043->mHeap=(_Bool)0;
    cloner_1044=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1046=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1047=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj282=fun_name2_1045,
        fun_name2_1045=(char*)come_increment_ref_count(create_method_name(obj_type_1047,(_Bool)0,fun_name_1042,info,(_Bool)1));
        __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1048=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1046,fun_name_1042));
        generics_fun_1049=((struct sGenericsFun*)(__right_value1019=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1048,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1019, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1049        ) {
            multiple_assign_var28=((struct tuple2$2char$phbool$*)(__right_value1021=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1045)),generics_fun_1049,(struct sType*)come_increment_ref_count(obj_type_1047),info)));
            name_1050=(char*)come_increment_ref_count(multiple_assign_var28->v1);
            err_1051=multiple_assign_var28->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1021, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1051            ) {
                __result_obj__223 = (_Bool)0;
                (name_1050 = come_decrement_ref_count(name_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1046 = come_decrement_ref_count(none_generics_name_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1047, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1048 = come_decrement_ref_count(fun_name3_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1037 = come_decrement_ref_count(result_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1038, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1043, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1045 = come_decrement_ref_count(fun_name2_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__223;
            }
            cloner_1044=((struct sFun*)(__right_value1022=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1050)));
            come_call_finalizer(sFun_finalize, __right_value1022, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1050 = come_decrement_ref_count(name_1050, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1044=((struct sFun*)(__right_value1023=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1045)));
            come_call_finalizer(sFun_finalize, __right_value1023, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1046 = come_decrement_ref_count(none_generics_name_1046, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1047, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1048 = come_decrement_ref_count(fun_name3_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj283=fun_name2_1045,
        fun_name2_1045=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1042,info,(_Bool)1));
        __dec_obj283 = come_decrement_ref_count(__dec_obj283, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1052=128-1        ;        i_1052>=1        ;        i_1052--        ){
            new_fun_name_1053=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1045,i_1052));
            cloner_1044=((struct sFun*)(__right_value1026=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1053)));
            come_call_finalizer(sFun_finalize, __right_value1026, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1044            ) {
                __dec_obj284=fun_name2_1045,
                fun_name2_1045=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1053));
                __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1053 = come_decrement_ref_count(new_fun_name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1053 = come_decrement_ref_count(new_fun_name_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1044==((void*)0)        ) {
            cloner_1044=((struct sFun*)(__right_value1028=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1045)));
            come_call_finalizer(sFun_finalize, __right_value1028, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1044==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var29=((struct tuple2$2sFun$pchar$ph*)(__right_value1029=create_operator_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1042,info)));
        fun_1054=multiple_assign_var29->v1;
        new_fun_name_1055=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1029, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj285=fun_name2_1045,
        fun_name2_1045=(char*)come_increment_ref_count(new_fun_name_1055);
        __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1044=fun_1054;
        (new_fun_name_1055 = come_decrement_ref_count(new_fun_name_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj286=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1039);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj286,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj287=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1038);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj287,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__224 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1037 = come_decrement_ref_count(result_1037, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1038, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1043, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1045 = come_decrement_ref_count(fun_name2_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__224;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
struct sType* __dec_obj288;
char* result_1056;
struct list$1CVALUE$ph* stack_saved_1057;
struct list$1sRightValueObject$ph* right_value_objects_1058;
struct sClass* klass_1059;
char* class_name_1060;
char* fun_name_1061;
void* __right_value1030 = (void*)0;
struct sType* type2_1062;
struct sFun* cloner_1063;
char* fun_name2_1064;
void* __right_value1031 = (void*)0;
char* none_generics_name_1065;
void* __right_value1032 = (void*)0;
struct sType* obj_type_1066;
void* __right_value1033 = (void*)0;
char* __dec_obj289;
void* __right_value1034 = (void*)0;
char* fun_name3_1067;
void* __right_value1035 = (void*)0;
struct sGenericsFun* generics_fun_1068;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var30 = (void*)0;
char* name_1069=0;
_Bool err_1070=0;
_Bool __result_obj__225;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
char* __dec_obj290;
int i_1071;
void* __right_value1041 = (void*)0;
char* new_fun_name_1072;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
char* __dec_obj291;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var31 = (void*)0;
struct sFun* fun_1073=0;
char* new_fun_name_1074=0;
char* __dec_obj292;
struct list$1sRightValueObject$ph* __dec_obj293;
struct list$1CVALUE$ph* __dec_obj294;
_Bool __result_obj__226;
fun_name2_1064 = (void*)0;
memset(&i_1071, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType    ) {
        __dec_obj288=type,
        type=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer(sType_finalize, __dec_obj288,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    result_1056=((void*)0);
    stack_saved_1057=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_1058=info->right_value_objects;
    klass_1059=type->mClass;
    class_name_1060=klass_1059->mName;
    fun_name_1061="operator_not_equals";
    type2_1062=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1062->mHeap=(_Bool)0;
    cloner_1063=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0    ) {
        none_generics_name_1065=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1066=(struct sType*)come_increment_ref_count(solve_generics((struct sType*)come_increment_ref_count(type),(struct sType*)come_increment_ref_count(info->generics_type),info));
        __dec_obj289=fun_name2_1064,
        fun_name2_1064=(char*)come_increment_ref_count(create_method_name(obj_type_1066,(_Bool)0,fun_name_1061,info,(_Bool)1));
        __dec_obj289 = come_decrement_ref_count(__dec_obj289, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        fun_name3_1067=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1065,fun_name_1061));
        generics_fun_1068=((struct sGenericsFun*)(__right_value1035=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1067,((void*)0))));
        come_call_finalizer(sGenericsFun_finalize, __right_value1035, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        if(        generics_fun_1068        ) {
            multiple_assign_var30=((struct tuple2$2char$phbool$*)(__right_value1037=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1064)),generics_fun_1068,(struct sType*)come_increment_ref_count(obj_type_1066),info)));
            name_1069=(char*)come_increment_ref_count(multiple_assign_var30->v1);
            err_1070=multiple_assign_var30->v2;
            come_call_finalizer(tuple2$2char$phbool$$p_finalize, __right_value1037, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            !err_1070            ) {
                __result_obj__225 = (_Bool)0;
                (name_1069 = come_decrement_ref_count(name_1069, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                (none_generics_name_1065 = come_decrement_ref_count(none_generics_name_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, obj_type_1066, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name3_1067 = come_decrement_ref_count(fun_name3_1067, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (result_1056 = come_decrement_ref_count(result_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1057, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sType_finalize, type2_1062, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                (fun_name2_1064 = come_decrement_ref_count(fun_name2_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__225;
            }
            cloner_1063=((struct sFun*)(__right_value1038=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1069)));
            come_call_finalizer(sFun_finalize, __right_value1038, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            (name_1069 = come_decrement_ref_count(name_1069, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        else {
            cloner_1063=((struct sFun*)(__right_value1039=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1064)));
            come_call_finalizer(sFun_finalize, __right_value1039, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
        (none_generics_name_1065 = come_decrement_ref_count(none_generics_name_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, obj_type_1066, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        (fun_name3_1067 = come_decrement_ref_count(fun_name3_1067, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    else {
        __dec_obj290=fun_name2_1064,
        fun_name2_1064=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_1061,info,(_Bool)1));
        __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        for(        i_1071=128-1        ;        i_1071>=1        ;        i_1071--        ){
            new_fun_name_1072=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1064,i_1071));
            cloner_1063=((struct sFun*)(__right_value1042=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1072)));
            come_call_finalizer(sFun_finalize, __right_value1042, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            cloner_1063            ) {
                __dec_obj291=fun_name2_1064,
                fun_name2_1064=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1072));
                __dec_obj291 = come_decrement_ref_count(__dec_obj291, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
                (new_fun_name_1072 = come_decrement_ref_count(new_fun_name_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (new_fun_name_1072 = come_decrement_ref_count(new_fun_name_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        if(        cloner_1063==((void*)0)        ) {
            cloner_1063=((struct sFun*)(__right_value1044=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1064)));
            come_call_finalizer(sFun_finalize, __right_value1044, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        }
    }
    if(    cloner_1063==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber    ) {
        multiple_assign_var31=((struct tuple2$2sFun$pchar$ph*)(__right_value1045=create_operator_not_equals_automatically((struct sType*)come_increment_ref_count(type),fun_name_1061,info)));
        fun_1073=multiple_assign_var31->v1;
        new_fun_name_1074=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1045, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj292=fun_name2_1064,
        fun_name2_1064=(char*)come_increment_ref_count(new_fun_name_1074);
        __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        cloner_1063=fun_1073;
        (new_fun_name_1074 = come_decrement_ref_count(new_fun_name_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    __dec_obj293=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_1058);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj293,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj294=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_1057);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj294,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__226 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (result_1056 = come_decrement_ref_count(result_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved_1057, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, type2_1062, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (fun_name2_1064 = come_decrement_ref_count(fun_name2_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__226;
}

