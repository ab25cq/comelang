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

struct list_item$1sBlock$ph
{
    struct sBlock* item;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_no_mutex(struct sIfNode* self);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item);
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_no_mutex(struct sMatchNode* self);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_no_mutex(struct sIfMethodNode* self);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_no_mutex(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_no_mutex(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
// uniq global variable
// inline function

// body function
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __right_value0 = (void*)0;
void* __right_value2 = (void*)0;
struct sNode* __dec_obj1;
void* __right_value78 = (void*)0;
struct sBlock* __dec_obj38;
void* __right_value79 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
void* __right_value87 = (void*)0;
struct list$1sBlock$ph* __dec_obj43;
void* __right_value88 = (void*)0;
struct sBlock* __dec_obj44;
struct sBlock* __dec_obj45;
struct sIfNode* __result_obj__55;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj1=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj38=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj38,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj39=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(elif_expression_nodes));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __dec_obj43=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(elif_blocks));
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block    ) {
        __dec_obj44=self->mElseBlock,
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj44,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj45=self->mElseBlock,
        self->mElseBlock=((void*)0);
        come_call_finalizer(sBlock_finalize, __dec_obj45,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__55 = (struct sIfNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sIfNode_finalize, __result_obj__55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__55;
}

_Bool sIfNode_no_mutex(struct sIfNode* self){
    return (_Bool)1;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __right_value89 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string("sIfNode"))));
    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_98;
int i_99;
void* __right_value90 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value91 = (void*)0;
struct sBlock* else_block_106;
int elif_num_107;
_Bool guard__108;
char* if_result_var_name_109;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct sType* if_result_type_110;
void* __right_value95 = (void*)0;
char* __dec_obj46;
void* __right_value96 = (void*)0;
struct sVar* var__112;
void* __right_value97 = (void*)0;
struct sNode* expression_node_113;
int sline_114;
char* sname_115;
_Bool comma_instead_of_semicolon_before_116;
_Bool Value_117;
_Bool __result_obj__61;
_Bool normal_if_118;
void* __right_value98 = (void*)0;
struct CVALUE* conditional_value_119;
void* __right_value99 = (void*)0;
struct CVALUE* conditional_value_120;
struct sBlock* if_block_121;
int i_122;
void* __right_value100 = (void*)0;
struct sNode* expression_node2_123;
_Bool comma_instead_of_semicolon_before_130;
_Bool Value_131;
_Bool __result_obj__66;
_Bool normal_if_132;
void* __right_value101 = (void*)0;
struct CVALUE* conditional_value_133;
void* __right_value102 = (void*)0;
struct CVALUE* conditional_value_134;
void* __right_value103 = (void*)0;
struct sBlock* elif_node_block_135;
struct sVar* var__136;
int __exception_result_var_b1;
void* __right_value104 = (void*)0;
struct sNode* result_node_137;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct sNode* __dec_obj47;
_Bool Value_138;
_Bool __result_obj__67;
void* __right_value107 = (void*)0;
struct CVALUE* come_value2_139;
void* __right_value108 = (void*)0;
struct sType* __dec_obj48;
char* __dec_obj52;
_Bool __result_obj__69;
    existance_of_result_value_98=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon        ) {
            existance_of_result_value_98=(_Bool)0;
        }
        for(        i_99=0        ;        i_99<self->mElifNum        ;        i_99++        ){
            if(            (_condtional_value_X1=(!((struct sBlock*)(__right_value90=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_99)))->mOmitSemicolon)),            come_call_finalizer(sBlock_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
            _condtional_value_X1            ) {
                existance_of_result_value_98=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon        ) {
            existance_of_result_value_98=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon    ) {
        ((struct tuple2$2int$bool$*)(__right_value91=err_msg(info,"In conditional operator comelang can't use if statment")));
        come_call_finalizer(tuple2$2int$bool$$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        return (_Bool)1;
    }
    else_block_106=self->mElseBlock;
    elif_num_107=self->mElifNum;
    guard__108=self->mGuard;
    if_result_var_name_109=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_98    ) {
        if_result_type_110=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "08if.c", 67, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        static int var_num_111=0;
        __dec_obj46=info->if_result_var_name,
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_111++));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(sType_clone(if_result_type_110)),info,(_Bool)0,(_Bool)0);
        var__112=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value97=make_define_var(var__112->mType,var__112->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        come_call_finalizer(sType_finalize, if_result_type_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    expression_node_113=self->mExpressionNode;
    sline_114=info->sline;
    sname_115=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_116=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_117=node_compile(expression_node_113,info);
    if(    !Value_117    ) {
        __result_obj__61 = (_Bool)0;
        (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        return __result_obj__61;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_116;
    normal_if_118=(_Bool)1;
    if(    existance_free_right_value_objects(info)    ) {
        normal_if_118=(_Bool)0;
    }
    if(    normal_if_118    ) {
        conditional_value_119=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"%s",conditional_value_119->c_value);
        come_call_finalizer(CVALUE_finalize, conditional_value_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        conditional_value_120=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_120),info);
        come_call_finalizer(CVALUE_finalize, conditional_value_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    add_come_code(info,") {\n");
    if_block_121=self->mIfBlock;
    transpile_block(if_block_121,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
    add_come_code(info,"}\n");
    if(    elif_num_107>0    ) {
        for(        i_122=0        ;        i_122<elif_num_107        ;        i_122++        ){
            expression_node2_123=((struct sNode*)(__right_value100=list$1sNode$ph_operator_load_element(self->mElifExpressionNodes,i_122)));
            ((__right_value100) ? __right_value100 = come_decrement_ref_count(__right_value100, ((struct sNode*)__right_value100)->finalize, ((struct sNode*)__right_value100)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_130=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            Value_131=node_compile(expression_node2_123,info);
            if(            !Value_131            ) {
                __result_obj__66 = (_Bool)0;
                (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                return __result_obj__66;
            }
            else {
            }
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_130;
            normal_if_132=(_Bool)1;
            if(            existance_free_right_value_objects(info)            ) {
                normal_if_132=(_Bool)0;
            }
            if(            normal_if_132            ) {
                conditional_value_133=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s",conditional_value_133->c_value);
                come_call_finalizer(CVALUE_finalize, conditional_value_133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                conditional_value_134=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_134),info);
                come_call_finalizer(CVALUE_finalize, conditional_value_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            add_come_code(info,") {\n");
            elif_node_block_135=((struct sBlock*)(__right_value103=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i_122)));
            come_call_finalizer(sBlock_finalize, __right_value103, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            transpile_block(elif_node_block_135,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_106    ) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_106,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_98);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_98    ) {
        var__136=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 166, 0),__exception_result_var_b1=assert_v2(var__136!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_137=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj47=result_node_137,
        result_node_137=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(sType_clone(var__136->mType)),(struct sNode*)come_increment_ref_count(result_node_137),info));
        (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        Value_138=node_compile(result_node_137,info);
        if(        !Value_138        ) {
            __result_obj__67 = (_Bool)0;
            ((result_node_137) ? result_node_137 = come_decrement_ref_count(result_node_137, ((struct sNode*)result_node_137)->finalize, ((struct sNode*)result_node_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            return __result_obj__67;
        }
        else {
        }
        come_value2_139=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj48=come_value2_139->type,
        come_value2_139->type=(struct sType*)come_increment_ref_count(sType_clone(var__136->mType));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_139));
        ((result_node_137) ? result_node_137 = come_decrement_ref_count(result_node_137, ((struct sNode*)result_node_137)->finalize, ((struct sNode*)result_node_137)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __dec_obj52=info->if_result_var_name,
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_109);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    __result_obj__69 = (_Bool)1;
    (if_result_var_name_109 = come_decrement_ref_count(if_result_var_name_109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__69;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__1;
void* __right_value1 = (void*)0;
struct sNode* result_0;
struct sNode* __result_obj__2;
    if(    self==(void*)0    ) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__1) ? __result_obj__1 = come_decrement_ref_count(__result_obj__1, ((struct sNode*)__result_obj__1)->finalize, ((struct sNode*)__result_obj__1)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__1;
    }
    result_0=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)    ) {
        result_0->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)    ) {
        result_0->finalize=self->finalize;
    }
    if(    self!=((void*)0)    ) {
        result_0->clone=self->clone;
    }
    if(    self!=((void*)0)    ) {
        result_0->compile=self->compile;
    }
    if(    self!=((void*)0)    ) {
        result_0->sline=self->sline;
    }
    if(    self!=((void*)0)    ) {
        result_0->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)    ) {
        result_0->sname=self->sname;
    }
    if(    self!=((void*)0)    ) {
        result_0->terminated=self->terminated;
    }
    if(    self!=((void*)0)    ) {
        result_0->kind=self->kind;
    }
    if(    self!=((void*)0)    ) {
        result_0->no_mutex=self->no_mutex;
    }
    __result_obj__2 = (struct sNode*)come_increment_ref_count(result_0);
    ((result_0) ? result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__2) ? __result_obj__2 = come_decrement_ref_count(__result_obj__2, ((struct sNode*)__result_obj__2)->finalize, ((struct sNode*)__result_obj__2)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__2;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__3;
void* __right_value3 = (void*)0;
struct sBlock* result_1;
void* __right_value11 = (void*)0;
struct list$1sNode$ph* __dec_obj5;
void* __right_value77 = (void*)0;
struct sVarTable* __dec_obj37;
struct sBlock* __result_obj__50;
    if(    self==(void*)0    ) {
        __result_obj__3 = (void*)0;
        return __result_obj__3;
    }
    result_1=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        __dec_obj5=result_1->mNodes,
        result_1->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        __dec_obj37=result_1->mVarTable,
        result_1->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj37,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_1->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__50 = result_1;
    come_call_finalizer(sBlock_finalize, result_1, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__4;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct list$1sNode$ph* result_4;
struct list_item$1sNode$ph* it_5;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1sNode$ph* __result_obj__7;
    if(    self==((void*)0)    ) {
        __result_obj__4 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__4;
    }
    result_4=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_5=self->head;
    while(    it_5!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        else {
            list$1sNode$ph_add(result_4,(struct sNode*)come_increment_ref_count(sNode_clone(it_5->item)));
        }
        it_5=it_5->next;
    }
    __result_obj__7 = (struct list$1sNode$ph*)come_increment_ref_count(result_4);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_4, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__7, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__7;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)    ) {
        prev_it_3=it_2;
        it_2=it_2->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__5;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__5 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__5, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__5;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value6 = (void*)0;
struct list_item$1sNode$ph* litem_6;
struct sNode* __dec_obj2;
void* __right_value7 = (void*)0;
struct list_item$1sNode$ph* litem_7;
struct sNode* __dec_obj3;
void* __right_value8 = (void*)0;
struct list_item$1sNode$ph* litem_8;
struct sNode* __dec_obj4;
struct list$1sNode$ph* __result_obj__6;
    if(    self->len==0    ) {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value6=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sNode$ph*"))));
        litem_6->prev=((void*)0);
        litem_6->next=((void*)0);
        __dec_obj2=litem_6->item,
        litem_6->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_6;
        self->head=litem_6;
    }
    else if(    self->len==1    ) {
        litem_7=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value7=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sNode$ph*"))));
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj3=litem_7->item,
        litem_7->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value8=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj4=litem_8->item,
        litem_8->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
    __result_obj__6 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__6;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_9;
struct list_item$1sNode$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__8;
void* __right_value12 = (void*)0;
struct sVarTable* result_11;
void* __right_value76 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj36;
struct sVarTable* __result_obj__49;
    if(    self==(void*)0    ) {
        __result_obj__8 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVarTable_finalize, __result_obj__8, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__8;
    }
    result_11=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)    ) {
        __dec_obj36=result_11->mVars,
        result_11->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_11->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_11->mParent=self->mParent;
    }
    __result_obj__49 = (struct sVarTable*)come_increment_ref_count(result_11);
    come_call_finalizer(sVarTable_finalize, result_11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVarTable_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__9;
void* __right_value13 = (void*)0;
void* __right_value19 = (void*)0;
struct map$2char$phsVar$ph* result_23;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1char$ph* __dec_obj7;
char* it_26;
struct sVar* default_value_29;
void* __right_value22 = (void*)0;
struct sVar* it2_32;
void* __right_value31 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
void* __right_value75 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__48;
default_value_29 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__9 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__9, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__9;
    }
    result_23=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/comelang.h", 1983, "struct map$2char$phsVar$ph*"))));
    __dec_obj7=result_23->key_list,
    result_23->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1985, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_26=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_26=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_29,0,sizeof(struct sVar*));
        it2_32=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_26,(struct sVar*)come_increment_ref_count(default_value_29)));
        if(        1&&1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "/usr/local/include/comelang.h", 1994, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count((char*)come_memdup(it_26, "/usr/local/include/comelang.h", 1997, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else if(        1        ) {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        else {
            map$2char$phsVar$ph_put(result_23,(char*)come_increment_ref_count(it_26),(struct sVar*)come_increment_ref_count(sVar_clone(it2_32)));
        }
        come_call_finalizer(sVar_finalize, default_value_29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sVar_finalize, it2_32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__48 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_23);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result_23, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_12;
int i_17;
    for(    i_12=0    ;    i_12<self->size    ;    i_12++    ){
        if(        self->item_existance[i_12]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_12], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_17=0    ;    i_17<self->size    ;    i_17++    ){
        if(        self->item_existance[i_17]        ) {
            if(            1            ) {
                (self->keys[i_17] = come_decrement_ref_count(self->keys[i_17], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_15;
struct list_item$1char$ph* prev_it_16;
    it_15=self->head;
    while(    it_15!=((void*)0)    ) {
        prev_it_16=it_15;
        it_15=it_15->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
int i_18;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
struct list$1char$ph* __dec_obj6;
struct map$2char$phsVar$ph* __result_obj__11;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value14=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1912, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value15=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1913, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value16=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1914, "_Bool*"))));
    for(    i_18=0    ;    i_18<128    ;    i_18++    ){
        self->item_existance[i_18]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj6=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 1924, "struct list$1char$p*"))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__11 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__11;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__10;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__10 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__10;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_19;
struct list_item$1char$p* prev_it_20;
    it_19=self->head;
    while(    it_19!=((void*)0)    ) {
        prev_it_20=it_19;
        it_19=it_19->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_21;
struct list_item$1char$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)    ) {
        prev_it_22=it_21;
        it_21=it_21->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_24;
char* __result_obj__12;
char* __result_obj__13;
char* result_25;
char* __result_obj__14;
result_24 = (void*)0;
result_25 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_24,0,sizeof(char*));
        __result_obj__12 = result_24;
        return __result_obj__12;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__13 = self->key_list->it->item;
        return __result_obj__13;
    }
    memset(&result_25,0,sizeof(char*));
    __result_obj__14 = result_25;
    return __result_obj__14;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_27;
char* __result_obj__15;
char* __result_obj__16;
char* result_28;
char* __result_obj__17;
result_27 = (void*)0;
result_28 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_27,0,sizeof(char*));
        __result_obj__15 = result_27;
        return __result_obj__15;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__16 = self->key_list->it->item;
        return __result_obj__16;
    }
    memset(&result_28,0,sizeof(char*));
    __result_obj__17 = result_28;
    return __result_obj__17;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_30;
unsigned int it_31;
struct sVar* __result_obj__18;
struct sVar* __result_obj__19;
struct sVar* __result_obj__20;
struct sVar* __result_obj__21;
    hash_30=string_get_hash_key(((char*)key))%self->size;
    it_31=hash_30;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_31]        ) {
            if(            string_equals(self->keys[it_31],key)            ) {
                __result_obj__18 = (struct sVar*)come_increment_ref_count(self->items[it_31]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__18;
            }
            it_31++;
            if(            it_31>=self->size            ) {
                it_31=0;
            }
            else if(            it_31==hash_30            ) {
                __result_obj__19 = (struct sVar*)come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(sVar_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__19;
            }
        }
        else {
            __result_obj__20 = (struct sVar*)come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(sVar_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__20;
        }
    }
    __result_obj__21 = (struct sVar*)come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__21, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__21;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_44;
int it_45;
_Bool same_key_exist_62;
char* it2_65;
struct map$2char$phsVar$ph* __result_obj__33;
    if(    self->len*2>=self->size    ) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_44=string_get_hash_key(((char*)key))%self->size;
    it_45=hash_44;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_45]        ) {
            if(            string_equals(self->keys[it_45],key)            ) {
                if(                1                ) {
                    (self->keys[it_45] = come_decrement_ref_count(self->keys[it_45], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_45]);
                    self->keys[it_45]=key;
                }
                if(                1                ) {
                    come_call_finalizer(sVar_finalize, self->items[it_45], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_45]=item;
                }
                break;
            }
            it_45++;
            if(            it_45>=self->size            ) {
                it_45=0;
            }
            else if(            it_45==hash_44            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_45]=(_Bool)1;
            if(            1            ) {
                self->keys[it_45]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_45]=key;
            }
            if(            1            ) {
                self->items[it_45]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_45]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_62=(_Bool)0;
    for(    it2_65=list$1char$ph_begin(self->key_list)    ;    !list$1char$ph_end(self->key_list)    ;    it2_65=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_65,key)        ) {
            same_key_exist_62=(_Bool)1;
        }
    }
    if(    !same_key_exist_62    ) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__33 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__33;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_33;
void* __right_value23 = (void*)0;
char** keys_34;
void* __right_value24 = (void*)0;
struct sVar** items_35;
void* __right_value25 = (void*)0;
_Bool* item_existance_36;
int len_37;
char* it_38;
struct sVar* default_value_39;
void* __right_value26 = (void*)0;
struct sVar* it2_40;
unsigned int hash_41;
int n_42;
struct sVar* default_value_43;
void* __right_value27 = (void*)0;
default_value_39 = (void*)0;
default_value_43 = (void*)0;
    size_33=self->size*10;
    keys_34=(char**)come_increment_ref_count(((char**)(__right_value23=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_33)), "/usr/local/include/comelang.h", 2151, "char**"))));
    items_35=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value24=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_33)), "/usr/local/include/comelang.h", 2152, "struct sVar**"))));
    item_existance_36=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value25=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_33)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
    len_37=0;
    for(    it_38=map$2char$phsVar$ph_begin(self)    ;    !map$2char$phsVar$ph_end(self)    ;    it_38=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_39,0,sizeof(struct sVar*));
        it2_40=((struct sVar*)(__right_value26=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_39))));
        come_call_finalizer(sVar_finalize, __right_value26, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_41=string_get_hash_key(((char*)it_38))%size_33;
        n_42=hash_41;
        while(        (_Bool)1        ) {
            if(            item_existance_36[n_42]            ) {
                n_42++;
                if(                n_42>=size_33                ) {
                    n_42=0;
                }
                else if(                n_42==hash_41                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_36[n_42]=(_Bool)1;
                keys_34[n_42]=it_38;
                items_35[n_42]=((struct sVar*)(__right_value27=map$2char$phsVar$ph_at(self,it_38,(struct sVar*)come_increment_ref_count(default_value_43))));
                come_call_finalizer(sVar_finalize, __right_value27, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_37++;
                come_call_finalizer(sVar_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(sVar_finalize, default_value_39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_34;
    self->items=items_35;
    self->item_existance=item_existance_36;
    self->size=size_33;
    self->len=len_37;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_46;
struct list_item$1char$ph* it_47;
struct list$1char$ph* __result_obj__25;
    it2_46=0;
    it_47=self->head;
    while(    it_47!=((void*)0)    ) {
        if(        string_equals(it_47->item,item)        ) {
            list$1char$ph_delete(self,it2_46,it2_46+1);
            break;
        }
        it2_46++;
        it_47=it_47->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_48;
struct list$1char$ph* __result_obj__22;
struct list_item$1char$ph* it_51;
int i_52;
struct list_item$1char$ph* prev_it_53;
struct list_item$1char$ph* it_54;
int i_55;
struct list_item$1char$ph* prev_it_56;
struct list_item$1char$ph* it_57;
struct list_item$1char$ph* head_prev_it_58;
struct list_item$1char$ph* tail_it_59;
int i_60;
struct list_item$1char$ph* prev_it_61;
struct list$1char$ph* __result_obj__24;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_48=tail;
        tail=head;
        head=tmp_48;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__22 = self;
        return __result_obj__22;
    }
    if(    head==0&&tail==self->len    ) {
        list$1char$ph_reset(self);
    }
    else if(    head==0    ) {
        it_51=self->head;
        i_52=0;
        while(        it_51!=((void*)0)        ) {
            if(            i_52<tail            ) {
                prev_it_53=it_51;
                it_51=it_51->next;
                i_52++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_52==tail            ) {
                self->head=it_51;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_51=it_51->next;
                i_52++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_54=self->head;
        i_55=0;
        while(        it_54!=((void*)0)        ) {
            if(            i_55==head            ) {
                self->tail=it_54->prev;
                self->tail->next=((void*)0);
            }
            if(            i_55>=head            ) {
                prev_it_56=it_54;
                it_54=it_54->next;
                i_55++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_54=it_54->next;
                i_55++;
            }
        }
    }
    else {
        it_57=self->head;
        head_prev_it_58=((void*)0);
        tail_it_59=((void*)0);
        i_60=0;
        while(        it_57!=((void*)0)        ) {
            if(            i_60==head            ) {
                head_prev_it_58=it_57->prev;
            }
            if(            i_60==tail            ) {
                tail_it_59=it_57;
            }
            if(            i_60>=head&&i_60<tail            ) {
                prev_it_61=it_57;
                it_57=it_57->next;
                i_60++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_57=it_57->next;
                i_60++;
            }
        }
        if(        head_prev_it_58!=((void*)0)        ) {
            head_prev_it_58->next=tail_it_59;
        }
        if(        tail_it_59!=((void*)0)        ) {
            tail_it_59->prev=head_prev_it_58;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_49;
struct list_item$1char$ph* prev_it_50;
struct list$1char$ph* __result_obj__23;
    it_49=self->head;
    while(    it_49!=((void*)0)    ) {
        prev_it_50=it_49;
        it_49=it_49->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = self;
    return __result_obj__23;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_63;
char* __result_obj__26;
char* __result_obj__27;
char* result_64;
char* __result_obj__28;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_63,0,sizeof(char*));
        __result_obj__26 = result_63;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_64,0,sizeof(char*));
    __result_obj__28 = result_64;
    return __result_obj__28;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_66;
char* __result_obj__29;
char* __result_obj__30;
char* result_67;
char* __result_obj__31;
result_66 = (void*)0;
result_67 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_66,0,sizeof(char*));
        __result_obj__29 = result_66;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_67,0,sizeof(char*));
    __result_obj__31 = result_67;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value28 = (void*)0;
struct list_item$1char$ph* litem_68;
char* __dec_obj8;
void* __right_value29 = (void*)0;
struct list_item$1char$ph* litem_69;
char* __dec_obj9;
void* __right_value30 = (void*)0;
struct list_item$1char$ph* litem_70;
char* __dec_obj10;
struct list$1char$ph* __result_obj__32;
    if(    self->len==0    ) {
        litem_68=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value28=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj8=litem_68->item,
        litem_68->item=(char*)come_increment_ref_count(item);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_68;
        self->head=litem_68;
    }
    else if(    self->len==1    ) {
        litem_69=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value29=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_69->prev=self->head;
        litem_69->next=((void*)0);
        __dec_obj9=litem_69->item,
        litem_69->item=(char*)come_increment_ref_count(item);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_69;
        self->head->next=litem_69;
    }
    else {
        litem_70=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value30=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_70->prev=self->tail;
        litem_70->next=((void*)0);
        __dec_obj10=litem_70->item,
        litem_70->item=(char*)come_increment_ref_count(item);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_70;
        self->tail=litem_70;
    }
    self->len++;
    __result_obj__32 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__32;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__34;
void* __right_value32 = (void*)0;
struct sVar* result_71;
void* __right_value33 = (void*)0;
char* __dec_obj11;
void* __right_value34 = (void*)0;
char* __dec_obj12;
void* __right_value69 = (void*)0;
struct sType* __dec_obj34;
void* __right_value70 = (void*)0;
char* __dec_obj35;
struct sVar* __result_obj__47;
    if(    self==(void*)0    ) {
        __result_obj__34 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sVar_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__34;
    }
    result_71=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)    ) {
        __dec_obj11=result_71->mName,
        result_71->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)    ) {
        __dec_obj12=result_71->mCValueName,
        result_71->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)    ) {
        __dec_obj34=result_71->mType,
        result_71->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_71->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)    ) {
        result_71->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_71->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)    ) {
        result_71->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)    ) {
        __dec_obj35=result_71->mFunName,
        result_71->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    __result_obj__47 = (struct sVar*)come_increment_ref_count(result_71);
    come_call_finalizer(sVar_finalize, result_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sVar_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__35;
void* __right_value35 = (void*)0;
struct sType* result_72;
void* __right_value36 = (void*)0;
struct sType* __dec_obj13;
void* __right_value37 = (void*)0;
struct sType* __dec_obj14;
void* __right_value45 = (void*)0;
struct list$1sType$ph* __dec_obj18;
void* __right_value46 = (void*)0;
struct sType* __dec_obj19;
void* __right_value47 = (void*)0;
struct sNode* __dec_obj20;
void* __right_value48 = (void*)0;
struct sNode* __dec_obj21;
void* __right_value49 = (void*)0;
char* __dec_obj22;
void* __right_value50 = (void*)0;
char* __dec_obj23;
void* __right_value51 = (void*)0;
char* __dec_obj24;
void* __right_value52 = (void*)0;
char* __dec_obj25;
void* __right_value57 = (void*)0;
struct list$1sNode$ph* __dec_obj26;
void* __right_value58 = (void*)0;
char* __dec_obj27;
void* __right_value59 = (void*)0;
struct list$1sType$ph* __dec_obj28;
void* __right_value67 = (void*)0;
struct list$1char$ph* __dec_obj32;
void* __right_value68 = (void*)0;
struct sType* __dec_obj33;
struct sType* __result_obj__46;
    if(    self==(void*)0    ) {
        __result_obj__35 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(sType_finalize, __result_obj__35, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__35;
    }
    result_72=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)    ) {
        result_72->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)    ) {
        __dec_obj13=result_72->mOriginalLoadVarType,
        result_72->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)    ) {
        __dec_obj14=result_72->mChannelType,
        result_72->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)    ) {
        __dec_obj18=result_72->mGenericsTypes,
        result_72->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)    ) {
        __dec_obj19=result_72->mNoSolvedGenericsType,
        result_72->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)    ) {
        __dec_obj20=result_72->mSizeNum,
        result_72->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)    ) {
        __dec_obj21=result_72->mAlignas,
        result_72->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)    ) {
        __dec_obj22=result_72->mTupleName,
        result_72->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)    ) {
        __dec_obj23=result_72->mAttribute,
        result_72->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarAttribute!=((void*)0)    ) {
        __dec_obj24=result_72->mVarAttribute,
        result_72->mVarAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mVarAttribute, "sType_clone", 13, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)    ) {
        result_72->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)    ) {
        result_72->mShort=self->mShort;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLong=self->mLong;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)    ) {
        result_72->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)    ) {
        result_72->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)    ) {
        result_72->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)    ) {
        result_72->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)    ) {
        result_72->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)    ) {
        result_72->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)    ) {
        result_72->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)    ) {
        result_72->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)    ) {
        result_72->mTask=self->mTask;
    }
    if(    self!=((void*)0)    ) {
        result_72->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)    ) {
        result_72->mException=self->mException;
    }
    if(    self!=((void*)0)    ) {
        result_72->mInline=self->mInline;
    }
    if(    self!=((void*)0)    ) {
        result_72->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)    ) {
        result_72->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)    ) {
        __dec_obj25=result_72->mAsmName,
        result_72->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)    ) {
        result_72->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)    ) {
        __dec_obj26=result_72->mArrayNum,
        result_72->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)    ) {
        result_72->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)    ) {
        __dec_obj27=result_72->mOriginalTypeName,
        result_72->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)    ) {
        result_72->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)    ) {
        result_72->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)    ) {
        __dec_obj28=result_72->mParamTypes,
        result_72->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)    ) {
        __dec_obj32=result_72->mParamNames,
        result_72->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)    ) {
        __dec_obj33=result_72->mResultType,
        result_72->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_72->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)    ) {
        result_72->mDefferRightValue=self->mDefferRightValue;
    }
    __result_obj__46 = (struct sType*)come_increment_ref_count(result_72);
    come_call_finalizer(sType_finalize, result_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sType_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__36;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1sType$ph* result_73;
struct list_item$1sType$ph* it_74;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct list$1sType$ph* __result_obj__39;
    if(    self==((void*)0)    ) {
        __result_obj__36 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__36, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__36;
    }
    result_73=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sType$ph*"))));
    it_74=self->head;
    while(    it_74!=((void*)0)    ) {
        if(        1        ) {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        else {
            list$1sType$ph_add(result_73,(struct sType*)come_increment_ref_count(sType_clone(it_74->item)));
        }
        it_74=it_74->next;
    }
    __result_obj__39 = (struct list$1sType$ph*)come_increment_ref_count(result_73);
    come_call_finalizer(list$1sType$ph$p_finalize, result_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__39;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__37;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__37 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__37, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__37;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value40 = (void*)0;
struct list_item$1sType$ph* litem_75;
struct sType* __dec_obj15;
void* __right_value41 = (void*)0;
struct list_item$1sType$ph* litem_76;
struct sType* __dec_obj16;
void* __right_value42 = (void*)0;
struct list_item$1sType$ph* litem_77;
struct sType* __dec_obj17;
struct list$1sType$ph* __result_obj__38;
    if(    self->len==0    ) {
        litem_75=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value40=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sType$ph*"))));
        litem_75->prev=((void*)0);
        litem_75->next=((void*)0);
        __dec_obj15=litem_75->item,
        litem_75->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_75;
        self->head=litem_75;
    }
    else if(    self->len==1    ) {
        litem_76=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value41=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sType$ph*"))));
        litem_76->prev=self->head;
        litem_76->next=((void*)0);
        __dec_obj16=litem_76->item,
        litem_76->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_76;
        self->head->next=litem_76;
    }
    else {
        litem_77=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value42=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_77->prev=self->tail;
        litem_77->next=((void*)0);
        __dec_obj17=litem_77->item,
        litem_77->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_77;
        self->tail=litem_77;
    }
    self->len++;
    __result_obj__38 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__38;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_78;
struct list_item$1sType$ph* prev_it_79;
    it_78=self->head;
    while(    it_78!=((void*)0)    ) {
        prev_it_79=it_78;
        it_78=it_78->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__40;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1sNode$ph* result_80;
struct list_item$1sNode$ph* it_81;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1sNode$ph* __result_obj__41;
    if(    self==((void*)0)    ) {
        __result_obj__40 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__40, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__40;
    }
    result_80=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sNode$ph*"))));
    it_81=self->head;
    while(    it_81!=((void*)0)    ) {
        if(        1        ) {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        else {
            list$1sNode$ph_add(result_80,(struct sNode*)come_increment_ref_count(sNode_clone(it_81->item)));
        }
        it_81=it_81->next;
    }
    __result_obj__41 = (struct list$1sNode$ph*)come_increment_ref_count(result_80);
    come_call_finalizer(list$1sNode$ph$p_finalize, result_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__41;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__42;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$ph* result_82;
struct list_item$1char$ph* it_83;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1char$ph* __result_obj__45;
    if(    self==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__42;
    }
    result_82=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1char$ph*"))));
    it_83=self->head;
    while(    it_83!=((void*)0)    ) {
        if(        1        ) {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "/usr/local/include/comelang.h", 1001, "char*")));
        }
        else {
            list$1char$ph_add(result_82,(char*)come_increment_ref_count((char*)come_memdup(it_83->item, "/usr/local/include/comelang.h", 1004, "char*")));
        }
        it_83=it_83->next;
    }
    __result_obj__45 = (struct list$1char$ph*)come_increment_ref_count(result_82);
    come_call_finalizer(list$1char$ph$p_finalize, result_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__43;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__43 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value62 = (void*)0;
struct list_item$1char$ph* litem_84;
char* __dec_obj29;
void* __right_value63 = (void*)0;
struct list_item$1char$ph* litem_85;
char* __dec_obj30;
void* __right_value64 = (void*)0;
struct list_item$1char$ph* litem_86;
char* __dec_obj31;
struct list$1char$ph* __result_obj__44;
    if(    self->len==0    ) {
        litem_84=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value62=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1char$ph*"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj29=litem_84->item,
        litem_84->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1    ) {
        litem_85=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value63=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1char$ph*"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj30=litem_85->item,
        litem_85->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value64=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj31=litem_86->item,
        litem_86->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
    }
    self->len++;
    __result_obj__44 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__44;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_87;
int i_88;
    for(    i_87=0    ;    i_87<self->size    ;    i_87++    ){
        if(        self->item_existance[i_87]        ) {
            if(            1            ) {
                come_call_finalizer(sVar_finalize, self->items[i_87], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_88=0    ;    i_88<self->size    ;    i_88++    ){
        if(        self->item_existance[i_88]        ) {
            if(            1            ) {
                (self->keys[i_88] = come_decrement_ref_count(self->keys[i_88], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)    ) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__51;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1sBlock$ph* result_91;
struct list_item$1sBlock$ph* it_92;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1sBlock$ph* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__51 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__51;
    }
    result_91=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 996, "struct list$1sBlock$ph*"))));
    it_92=self->head;
    while(    it_92!=((void*)0)    ) {
        if(        1        ) {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        else {
            list$1sBlock$ph_add(result_91,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_92->item)));
        }
        it_92=it_92->next;
    }
    __result_obj__54 = (struct list$1sBlock$ph*)come_increment_ref_count(result_91);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__54;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_89;
struct list_item$1sBlock$ph* prev_it_90;
    it_89=self->head;
    while(    it_89!=((void*)0)    ) {
        prev_it_90=it_89;
        it_89=it_89->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self){
struct list$1sBlock$ph* __result_obj__52;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__52 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__52;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value82 = (void*)0;
struct list_item$1sBlock$ph* litem_93;
struct sBlock* __dec_obj40;
void* __right_value83 = (void*)0;
struct list_item$1sBlock$ph* litem_94;
struct sBlock* __dec_obj41;
void* __right_value84 = (void*)0;
struct list_item$1sBlock$ph* litem_95;
struct sBlock* __dec_obj42;
struct list$1sBlock$ph* __result_obj__53;
    if(    self->len==0    ) {
        litem_93=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value82=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sBlock$ph*"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj40=litem_93->item,
        litem_93->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj40,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else if(    self->len==1    ) {
        litem_94=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value83=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sBlock$ph*"))));
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj41=litem_94->item,
        litem_94->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj41,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        litem_95=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value84=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sBlock$ph*"))));
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj42=litem_95->item,
        litem_95->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj42,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
    __result_obj__53 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__53;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self){
struct list_item$1sBlock$ph* it_96;
struct list_item$1sBlock$ph* prev_it_97;
    it_96=self->head;
    while(    it_96!=((void*)0)    ) {
        prev_it_97=it_96;
        it_96=it_96->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)    ) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mElifExpressionNodes, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)    ) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->mElifBlocks, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mElseBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct sBlock* list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_100;
int i_101;
struct sBlock* __result_obj__57;
struct sBlock* default_value_102;
struct sBlock* __result_obj__58;
default_value_102 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_100=self->head;
    i_101=0;
    while(    it_100!=((void*)0)    ) {
        if(        position==i_101        ) {
            __result_obj__57 = (struct sBlock*)come_increment_ref_count(it_100->item);
            come_call_finalizer(sBlock_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__57;
        }
        it_100=it_100->next;
        i_101++;
    }
    memset(&default_value_102,0,sizeof(struct sBlock*));
    __result_obj__58 = (struct sBlock*)come_increment_ref_count(default_value_102);
    come_call_finalizer(sBlock_finalize, default_value_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

static struct sBlock* list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position){
struct list_item$1sBlock$ph* it_103;
int i_104;
struct sBlock* __result_obj__59;
struct sBlock* default_value_105;
struct sBlock* __result_obj__60;
default_value_105 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_103=self->head;
    i_104=0;
    while(    it_103!=((void*)0)    ) {
        if(        position==i_104        ) {
            __result_obj__59 = (struct sBlock*)come_increment_ref_count(it_103->item);
            come_call_finalizer(sBlock_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__59;
        }
        it_103=it_103->next;
        i_104++;
    }
    memset(&default_value_105,0,sizeof(struct sBlock*));
    __result_obj__60 = (struct sBlock*)come_increment_ref_count(default_value_105);
    come_call_finalizer(sBlock_finalize, default_value_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_124;
int i_125;
struct sNode* __result_obj__62;
struct sNode* default_value_126;
struct sNode* __result_obj__63;
default_value_126 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_124=self->head;
    i_125=0;
    while(    it_124!=((void*)0)    ) {
        if(        position==i_125        ) {
            __result_obj__62 = (struct sNode*)come_increment_ref_count(it_124->item);
            ((__result_obj__62) ? __result_obj__62 = come_decrement_ref_count(__result_obj__62, ((struct sNode*)__result_obj__62)->finalize, ((struct sNode*)__result_obj__62)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__62;
        }
        it_124=it_124->next;
        i_125++;
    }
    memset(&default_value_126,0,sizeof(struct sNode*));
    __result_obj__63 = (struct sNode*)come_increment_ref_count(default_value_126);
    ((default_value_126) ? default_value_126 = come_decrement_ref_count(default_value_126, ((struct sNode*)default_value_126)->finalize, ((struct sNode*)default_value_126)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__63) ? __result_obj__63 = come_decrement_ref_count(__result_obj__63, ((struct sNode*)__result_obj__63)->finalize, ((struct sNode*)__result_obj__63)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__63;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_127;
int i_128;
struct sNode* __result_obj__64;
struct sNode* default_value_129;
struct sNode* __result_obj__65;
default_value_129 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_127=self->head;
    i_128=0;
    while(    it_127!=((void*)0)    ) {
        if(        position==i_128        ) {
            __result_obj__64 = (struct sNode*)come_increment_ref_count(it_127->item);
            ((__result_obj__64) ? __result_obj__64 = come_decrement_ref_count(__result_obj__64, ((struct sNode*)__result_obj__64)->finalize, ((struct sNode*)__result_obj__64)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
            return __result_obj__64;
        }
        it_127=it_127->next;
        i_128++;
    }
    memset(&default_value_129,0,sizeof(struct sNode*));
    __result_obj__65 = (struct sNode*)come_increment_ref_count(default_value_129);
    ((default_value_129) ? default_value_129 = come_decrement_ref_count(default_value_129, ((struct sNode*)default_value_129)->finalize, ((struct sNode*)default_value_129)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__65) ? __result_obj__65 = come_decrement_ref_count(__result_obj__65, ((struct sNode*)__result_obj__65)->finalize, ((struct sNode*)__result_obj__65)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__65;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value109 = (void*)0;
struct list_item$1CVALUE$ph* litem_140;
struct CVALUE* __dec_obj49;
void* __right_value110 = (void*)0;
struct list_item$1CVALUE$ph* litem_141;
struct CVALUE* __dec_obj50;
void* __right_value111 = (void*)0;
struct list_item$1CVALUE$ph* litem_142;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__68;
    if(    self->len==0    ) {
        litem_140=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value109=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1CVALUE$ph*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        __dec_obj49=litem_140->item,
        litem_140->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1    ) {
        litem_141=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value110=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1CVALUE$ph*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        __dec_obj50=litem_141->item,
        litem_141->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value111=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1CVALUE$ph*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        __dec_obj51=litem_142->item,
        litem_142->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__68 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__68;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj53;
void* __right_value114 = (void*)0;
struct sNode* __dec_obj54;
struct sMatchNode* __result_obj__70;
    ((struct sNodeBase*)(__right_value112=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj53=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj54=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__70 = (struct sMatchNode*)come_increment_ref_count(self);
    come_call_finalizer(sMatchNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sMatchNode_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

_Bool sMatchNode_no_mutex(struct sMatchNode* self){
    return (_Bool)1;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __right_value115 = (void*)0;
char* __result_obj__71;
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string("sMatch"))));
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_143;
struct sNode* match_node_144;
_Bool Value_145;
_Bool __result_obj__72;
void* __right_value116 = (void*)0;
struct CVALUE* come_value_146;
_Bool Value_147;
_Bool __result_obj__73;
struct sVar* var__148;
int __exception_result_var_b2;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1sVar$ph* __dec_obj55;
void* __right_value122 = (void*)0;
_Bool __result_obj__76;
    it_node_143=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_144=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_145=node_compile(it_node_143,info);
    if(    !Value_145    ) {
        __result_obj__72 = (_Bool)0;
        ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__72;
    }
    else {
    }
    come_value_146=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_146->c_value);
    Value_147=node_compile(match_node_144,info);
    if(    !Value_147    ) {
        __result_obj__73 = (_Bool)0;
        ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__73;
    }
    else {
    }
    if(    info->if_result_var_name    ) {
        var__148=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 229, 1),__exception_result_var_b2=assert_v2(var__148!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)        ) {
            __dec_obj55=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 232, "struct list$1sVar$ph*"))));
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj55,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__148)));
    }
    __result_obj__76 = (_Bool)1;
    ((it_node_143) ? it_node_143 = come_decrement_ref_count(it_node_143, ((struct sNode*)it_node_143)->finalize, ((struct sNode*)it_node_143)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node_144) ? match_node_144 = come_decrement_ref_count(match_node_144, ((struct sNode*)match_node_144)->finalize, ((struct sNode*)match_node_144)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__76;
}

static void sMatchNode_finalize(struct sMatchNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self){
struct list$1sVar$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_149;
struct list_item$1sVar$ph* prev_it_150;
    it_149=self->head;
    while(    it_149!=((void*)0)    ) {
        prev_it_150=it_149;
        it_149=it_149->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_151;
struct list_item$1sVar$ph* prev_it_152;
    it_151=self->head;
    while(    it_151!=((void*)0)    ) {
        prev_it_152=it_151;
        it_151=it_151->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it_152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar* item){
void* __right_value119 = (void*)0;
struct list_item$1sVar$ph* litem_153;
struct sVar* __dec_obj56;
void* __right_value120 = (void*)0;
struct list_item$1sVar$ph* litem_154;
struct sVar* __dec_obj57;
void* __right_value121 = (void*)0;
struct list_item$1sVar$ph* litem_155;
struct sVar* __dec_obj58;
struct list$1sVar$ph* __result_obj__75;
    if(    self->len==0    ) {
        litem_153=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value119=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1sVar$ph*"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        __dec_obj56=litem_153->item,
        litem_153->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj56,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1    ) {
        litem_154=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value120=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1sVar$ph*"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        __dec_obj57=litem_154->item,
        litem_154->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj57,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value121=(struct list_item$1sVar$ph*)come_calloc_v2(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1sVar$ph*"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        __dec_obj58=litem_155->item,
        litem_155->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer(sVar_finalize, __dec_obj58,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result_obj__75 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__75;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value125 = (void*)0;
struct sNode* __dec_obj60;
struct sIfMethodNode* __result_obj__77;
    ((struct sNodeBase*)(__right_value123=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj59=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj60=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __result_obj__77 = (struct sIfMethodNode*)come_increment_ref_count(self);
    come_call_finalizer(sIfMethodNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

_Bool sIfMethodNode_no_mutex(struct sIfMethodNode* self){
    return (_Bool)1;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __right_value126 = (void*)0;
char* __result_obj__78;
    __result_obj__78 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string("sMatch"))));
    (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_156;
struct sNode* match_node_157;
_Bool Value_158;
_Bool __result_obj__79;
void* __right_value127 = (void*)0;
struct CVALUE* come_value_159;
_Bool Value_160;
_Bool __result_obj__80;
struct sVar* var__161;
int __exception_result_var_b3;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1sVar$ph* __dec_obj61;
void* __right_value130 = (void*)0;
_Bool __result_obj__81;
    it_node_156=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_157=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_158=node_compile(it_node_156,info);
    if(    !Value_158    ) {
        __result_obj__79 = (_Bool)0;
        ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        return __result_obj__79;
    }
    else {
    }
    come_value_159=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_159->c_value);
    Value_160=node_compile(match_node_157,info);
    if(    !Value_160    ) {
        __result_obj__80 = (_Bool)0;
        ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__80;
    }
    else {
    }
    if(    info->if_result_var_name    ) {
        var__161=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 284, 2),__exception_result_var_b3=assert_v2(var__161!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)        ) {
            __dec_obj61=info->match_it_var,
            info->match_it_var=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc_v2(1, sizeof(struct list$1sVar$ph)*(1), "08if.c", 287, "struct list$1sVar$ph*"))));
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        list$1sVar$ph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__161)));
    }
    __result_obj__81 = (_Bool)1;
    ((it_node_156) ? it_node_156 = come_decrement_ref_count(it_node_156, ((struct sNode*)it_node_156)->finalize, ((struct sNode*)it_node_156)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((match_node_157) ? match_node_157 = come_decrement_ref_count(match_node_157, ((struct sNode*)match_node_157)->finalize, ((struct sNode*)match_node_157)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__81;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value133 = (void*)0;
struct sBlock* __dec_obj63;
struct sOrStatmentNode* __result_obj__82;
    ((struct sNodeBase*)(__right_value131=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value131, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj62=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj63=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj63,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__82 = (struct sOrStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrStatmentNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

_Bool sOrStatmentNode_no_mutex(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __right_value134 = (void*)0;
char* __result_obj__83;
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string("sOrStatmentNode"))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__83;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_162;
_Bool comma_instead_of_semicolon_163;
_Bool Value_164;
void* __right_value135 = (void*)0;
struct CVALUE* conditional_value_165;
struct sBlock* if_block_166;
_Bool __result_obj__84;
    expression_node_162=self->mExpressionNode;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_163=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_164=node_compile(expression_node_162,info);
    if(    !Value_164    ) {
        return (_Bool)0;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_163;
    conditional_value_165=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_165),info);
    add_come_code(info,") {\n");
    if_block_166=self->mIfBlock;
    transpile_block(if_block_166,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__84 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__84;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct sNode* __dec_obj64;
void* __right_value138 = (void*)0;
struct sBlock* __dec_obj65;
struct sAndStatmentNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value136=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value136, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __dec_obj64=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    __dec_obj65=self->mIfBlock,
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer(sBlock_finalize, __dec_obj65,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    __result_obj__85 = (struct sAndStatmentNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndStatmentNode_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

_Bool sAndStatmentNode_no_mutex(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __right_value139 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string("sAndStatmentNode"))));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__86;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_167;
_Bool comma_instead_of_semicolon_168;
_Bool Value_169;
void* __right_value140 = (void*)0;
struct CVALUE* conditional_value_170;
struct sBlock* if_block_171;
_Bool __result_obj__87;
    expression_node_167=self->mExpressionNode;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_168=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    Value_169=node_compile(expression_node_167,info);
    if(    !Value_169    ) {
        return (_Bool)0;
    }
    else {
    }
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_168;
    conditional_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    transpile_conditional_with_free_right_object_value((struct CVALUE*)come_increment_ref_count(conditional_value_170),info);
    add_come_code(info,") {\n");
    if_block_171=self->mIfBlock;
    transpile_block(if_block_171,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result_obj__87 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, conditional_value_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__87;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value141 = (void*)0;
char* sname_172;
int sline_173;
int sline_real_174;
void* __right_value142 = (void*)0;
struct sNode* expression_node_175;
void* __right_value143 = (void*)0;
struct sBlock* if_block_176;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_177;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1sBlock$ph* elif_blocks_178;
int elif_num_179;
struct sBlock* else_block_180;
char* saved_p_181;
int saved_sline_182;
void* __right_value148 = (void*)0;
char* buf_183;
int sline_real_184;
void* __right_value149 = (void*)0;
struct sNode* expression_node_185;
void* __right_value153 = (void*)0;
struct sBlock* elif_block_189;
void* __right_value157 = (void*)0;
struct sBlock* __dec_obj72;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value167 = (void*)0;
struct sNode* result_193;
struct sNode* __result_obj__92;
void* __right_value168 = (void*)0;
struct sNode* __result_obj__93;
    if(    charp_operator_equals(buf,"if")    ) {
        sname_172=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 404, "char*"));
        sline_173=info->sline;
        sline_real_174=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_175=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_176=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_177=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 421, "struct list$1sNode$ph*"))));
        elif_blocks_178=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 423, "struct list$1sBlock$ph*"))));
        elif_num_179=0;
        else_block_180=((void*)0);
        while(        1        ) {
            saved_p_181=info->p;
            saved_sline_182=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59            ) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !(xisalpha(*info->p)||*info->p==95)            ) {
                break;
            }
            parse_sharp_v5(info);
            buf_183=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_183,"else")            ) {
                sline_real_184=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)                ) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_185=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(elif_expression_nodes_177,(struct sNode*)come_increment_ref_count(expression_node_185));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_189=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlock$ph_push_back(elif_blocks_178,(struct sBlock*)come_increment_ref_count(elif_block_189));
                    elif_num_179++;
                    ((expression_node_185) ? expression_node_185 = come_decrement_ref_count(expression_node_185, ((struct sNode*)expression_node_185)->finalize, ((struct sNode*)expression_node_185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, elif_block_189, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                }
                else {
                    __dec_obj72=else_block_180,
                    else_block_180=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj72,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                    (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    break;
                }
                info->sline_real=sline_real_184;
            }
            else {
                info->p=saved_p_181;
                info->sline=saved_sline_182;
                (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
            (buf_183 = come_decrement_ref_count(buf_183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        }
        _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 486, "struct sNode");
        _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value159=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 486, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(expression_node_175),if_block_176,elif_expression_nodes_177,elif_blocks_178,elif_num_179,else_block_180,(_Bool)0,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIfNode_finalize;
        _inf_value1->clone=(void*)sIfNode_clone;
        _inf_value1->compile=(void*)sIfNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sIfNode_terminated;
        _inf_value1->kind=(void*)sIfNode_kind;
        _inf_value1->no_mutex=(void*)sIfNode_no_mutex;
        result_193=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer(sIfNode_finalize, __right_value159, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        info->sline_real=sline_real_174;
        __result_obj__92 = (struct sNode*)come_increment_ref_count(result_193);
        (sname_172 = come_decrement_ref_count(sname_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((expression_node_175) ? expression_node_175 = come_decrement_ref_count(expression_node_175, ((struct sNode*)expression_node_175)->finalize, ((struct sNode*)expression_node_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((result_193) ? result_193 = come_decrement_ref_count(result_193, ((struct sNode*)result_193)->finalize, ((struct sNode*)result_193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        ((__result_obj__92) ? __result_obj__92 = come_decrement_ref_count(__result_obj__92, ((struct sNode*)__result_obj__92)->finalize, ((struct sNode*)__result_obj__92)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
        return __result_obj__92;
        (sname_172 = come_decrement_ref_count(sname_172, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        ((expression_node_175) ? expression_node_175 = come_decrement_ref_count(expression_node_175, ((struct sNode*)expression_node_175)->finalize, ((struct sNode*)expression_node_175)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(sBlock_finalize, else_block_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        ((result_193) ? result_193 = come_decrement_ref_count(result_193, ((struct sNode*)result_193)->finalize, ((struct sNode*)result_193)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    __result_obj__93 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value168=string_node_v7(buf,head,head_sline,info))));
    ((__right_value168) ? __right_value168 = come_decrement_ref_count(__right_value168, ((struct sNode*)__right_value168)->finalize, ((struct sNode*)__right_value168)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__93) ? __result_obj__93 = come_decrement_ref_count(__result_obj__93, ((struct sNode*)__result_obj__93)->finalize, ((struct sNode*)__result_obj__93)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__93;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value150 = (void*)0;
struct list_item$1sNode$ph* litem_186;
struct sNode* __dec_obj66;
void* __right_value151 = (void*)0;
struct list_item$1sNode$ph* litem_187;
struct sNode* __dec_obj67;
void* __right_value152 = (void*)0;
struct list_item$1sNode$ph* litem_188;
struct sNode* __dec_obj68;
struct list$1sNode$ph* __result_obj__88;
    if(    self->len==0    ) {
        litem_186=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value150=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sNode$ph*"))));
        litem_186->prev=((void*)0);
        litem_186->next=((void*)0);
        __dec_obj66=litem_186->item,
        litem_186->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_186;
        self->head=litem_186;
    }
    else if(    self->len==1    ) {
        litem_187=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value151=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sNode$ph*"))));
        litem_187->prev=self->head;
        litem_187->next=((void*)0);
        __dec_obj67=litem_187->item,
        litem_187->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail=litem_187;
        self->head->next=litem_187;
    }
    else {
        litem_188=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value152=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sNode$ph*"))));
        litem_188->prev=self->tail;
        litem_188->next=((void*)0);
        __dec_obj68=litem_188->item,
        litem_188->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
        self->tail->next=litem_188;
        self->tail=litem_188;
    }
    self->len++;
    __result_obj__88 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    return __result_obj__88;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock* item){
void* __right_value154 = (void*)0;
struct list_item$1sBlock$ph* litem_190;
struct sBlock* __dec_obj69;
void* __right_value155 = (void*)0;
struct list_item$1sBlock$ph* litem_191;
struct sBlock* __dec_obj70;
void* __right_value156 = (void*)0;
struct list_item$1sBlock$ph* litem_192;
struct sBlock* __dec_obj71;
struct list$1sBlock$ph* __result_obj__89;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value154=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1sBlock$ph*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        __dec_obj69=litem_190->item,
        litem_190->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj69,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value155=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1sBlock$ph*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        __dec_obj70=litem_191->item,
        litem_191->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj70,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value156=(struct list_item$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list_item$1sBlock$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1sBlock$ph*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        __dec_obj71=litem_192->item,
        litem_192->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj71,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__89 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
struct sIfNode* __result_obj__90;
void* __right_value160 = (void*)0;
struct sIfNode* result_194;
void* __right_value161 = (void*)0;
char* __dec_obj73;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value163 = (void*)0;
struct sBlock* __dec_obj75;
void* __right_value164 = (void*)0;
struct list$1sNode$ph* __dec_obj76;
void* __right_value165 = (void*)0;
struct list$1sBlock$ph* __dec_obj77;
void* __right_value166 = (void*)0;
struct sBlock* __dec_obj78;
struct sIfNode* __result_obj__91;
    if(    self==(void*)0    ) {
        __result_obj__90 = (void*)0;
        return __result_obj__90;
    }
    result_194=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode*"));
    if(    self!=((void*)0)    ) {
        result_194->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj73=result_194->sname,
        result_194->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfNode_clone", 5, "char*"));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_194->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj74=result_194->mExpressionNode,
        result_194->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj75=result_194->mIfBlock,
        result_194->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj75,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)    ) {
        __dec_obj76=result_194->mElifExpressionNodes,
        result_194->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mElifExpressionNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)    ) {
        __dec_obj77=result_194->mElifBlocks,
        result_194->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->mElifBlocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_194->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)    ) {
        result_194->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)    ) {
        __dec_obj78=result_194->mElseBlock,
        result_194->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj78,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__91 = result_194;
    come_call_finalizer(sIfNode_finalize, result_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value169 = (void*)0;
char* sname_195;
int sline_196;
void* __right_value170 = (void*)0;
struct sBlock* if_block_197;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct sNode* _inf_value2;
struct sOrStatmentNode* _inf_obj_value2;
void* __right_value177 = (void*)0;
struct sNode* __result_obj__96;
    sname_195=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 497, "char*"));
    sline_196=info->sline;
    parse_sharp_v5(info);
    if_block_197=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 504, "struct sNode");
    _inf_obj_value2=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value172=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 504, "struct sOrStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_197,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value2->clone=(void*)sOrStatmentNode_clone;
    _inf_value2->compile=(void*)sOrStatmentNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value2->kind=(void*)sOrStatmentNode_kind;
    _inf_value2->no_mutex=(void*)sOrStatmentNode_no_mutex;
    __result_obj__96 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value177=_inf_value2)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_195 = come_decrement_ref_count(sname_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sOrStatmentNode_finalize, __right_value172, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value177) ? __right_value177 = come_decrement_ref_count(__right_value177, ((struct sNode*)__right_value177)->finalize, ((struct sNode*)__right_value177)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__96) ? __result_obj__96 = come_decrement_ref_count(__result_obj__96, ((struct sNode*)__result_obj__96)->finalize, ((struct sNode*)__result_obj__96)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__96;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
struct sOrStatmentNode* __result_obj__94;
void* __right_value173 = (void*)0;
struct sOrStatmentNode* result_198;
void* __right_value174 = (void*)0;
char* __dec_obj79;
void* __right_value175 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value176 = (void*)0;
struct sBlock* __dec_obj81;
struct sOrStatmentNode* __result_obj__95;
    if(    self==(void*)0    ) {
        __result_obj__94 = (void*)0;
        return __result_obj__94;
    }
    result_198=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc_v2(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode*"));
    if(    self!=((void*)0)    ) {
        result_198->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj79=result_198->sname,
        result_198->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrStatmentNode_clone", 5, "char*"));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_198->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj80=result_198->mExpressionNode,
        result_198->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj81=result_198->mIfBlock,
        result_198->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj81,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__95 = result_198;
    come_call_finalizer(sOrStatmentNode_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __right_value178 = (void*)0;
char* sname_199;
int sline_200;
void* __right_value179 = (void*)0;
struct sBlock* if_block_201;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sNode* _inf_value3;
struct sAndStatmentNode* _inf_obj_value3;
void* __right_value186 = (void*)0;
struct sNode* __result_obj__99;
    sname_199=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 509, "char*"));
    sline_200=info->sline;
    parse_sharp_v5(info);
    if_block_201=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 516, "struct sNode");
    _inf_obj_value3=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value181=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 516, "struct sAndStatmentNode*")),(struct sNode*)come_increment_ref_count(expression_node),if_block_201,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value3->clone=(void*)sAndStatmentNode_clone;
    _inf_value3->compile=(void*)sAndStatmentNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value3->kind=(void*)sAndStatmentNode_kind;
    _inf_value3->no_mutex=(void*)sAndStatmentNode_no_mutex;
    __result_obj__99 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value186=_inf_value3)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_199 = come_decrement_ref_count(sname_199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(sBlock_finalize, if_block_201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sAndStatmentNode_finalize, __right_value181, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value186) ? __right_value186 = come_decrement_ref_count(__right_value186, ((struct sNode*)__right_value186)->finalize, ((struct sNode*)__right_value186)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__99) ? __result_obj__99 = come_decrement_ref_count(__result_obj__99, ((struct sNode*)__result_obj__99)->finalize, ((struct sNode*)__result_obj__99)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__99;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
struct sAndStatmentNode* __result_obj__97;
void* __right_value182 = (void*)0;
struct sAndStatmentNode* result_202;
void* __right_value183 = (void*)0;
char* __dec_obj82;
void* __right_value184 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value185 = (void*)0;
struct sBlock* __dec_obj84;
struct sAndStatmentNode* __result_obj__98;
    if(    self==(void*)0    ) {
        __result_obj__97 = (void*)0;
        return __result_obj__97;
    }
    result_202=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc_v2(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode*"));
    if(    self!=((void*)0)    ) {
        result_202->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj82=result_202->sname,
        result_202->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndStatmentNode_clone", 5, "char*"));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_202->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)    ) {
        __dec_obj83=result_202->mExpressionNode,
        result_202->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)    ) {
        __dec_obj84=result_202->mIfBlock,
        result_202->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer(sBlock_finalize, __dec_obj84,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__98 = result_202;
    come_call_finalizer(sAndStatmentNode_finalize, result_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __right_value187 = (void*)0;
char* sname_203;
int sline_204;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sNode* it_node_205;
void* __right_value190 = (void*)0;
struct sNode* conditional_value_206;
void* __right_value191 = (void*)0;
struct sBlock* if_block_207;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_208;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1sBlock$ph* elif_blocks_209;
int elif_num_210;
struct sBlock* else_block_211;
void* __right_value196 = (void*)0;
struct sBlock* __dec_obj85;
void* __right_value197 = (void*)0;
struct sNode* conditional_value_212;
void* __right_value198 = (void*)0;
struct sBlock* elif_block_213;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct sBlock* __dec_obj86;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sNode* _inf_value4;
struct sIfNode* _inf_obj_value4;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sNode* _inf_value5;
struct sMatchNode* _inf_obj_value5;
void* __right_value211 = (void*)0;
struct sNode* __result_obj__102;
    sname_203=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 521, "char*"));
    sline_204=info->sline;
    expected_next_character(123,info);
    it_node_205=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    expected_next_character(40,info);
    conditional_value_206=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_207=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_208=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 537, "struct list$1sNode$ph*"))));
    elif_blocks_209=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 538, "struct list$1sBlock$ph*"))));
    elif_num_210=0;
    else_block_211=((void*)0);
    while(    (_Bool)1    ) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0        ) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj85=else_block_211,
            else_block_211=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer(sBlock_finalize, __dec_obj85,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_212=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_add(elif_expression_nodes_208,(struct sNode*)come_increment_ref_count(conditional_value_212));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_213=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlock$ph_add(elif_blocks_209,(struct sBlock*)come_increment_ref_count(elif_block_213));
            elif_num_210++;
            ((conditional_value_212) ? conditional_value_212 = come_decrement_ref_count(conditional_value_212, ((struct sNode*)conditional_value_212)->finalize, ((struct sNode*)conditional_value_212)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
            come_call_finalizer(sBlock_finalize, elif_block_213, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        if(        *info->p==125        ) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_211==((void*)0)    ) {
        __dec_obj86=else_block_211,
        else_block_211=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 576, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_211->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_211->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 582, "struct sNode");
    _inf_obj_value4=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value204=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 582, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_value_206),if_block_207,elif_expression_nodes_208,elif_blocks_209,elif_num_210,else_block_211,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sIfNode_finalize;
    _inf_value4->clone=(void*)sIfNode_clone;
    _inf_value4->compile=(void*)sIfNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sIfNode_terminated;
    _inf_value4->kind=(void*)sIfNode_kind;
    _inf_value4->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 582, "struct sNode");
    _inf_obj_value5=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value206=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "08if.c", 582, "struct sMatchNode*")),(struct sNode*)come_increment_ref_count(it_node_205),(struct sNode*)come_increment_ref_count(_inf_value4),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMatchNode_finalize;
    _inf_value5->clone=(void*)sMatchNode_clone;
    _inf_value5->compile=(void*)sMatchNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMatchNode_terminated;
    _inf_value5->kind=(void*)sMatchNode_kind;
    _inf_value5->no_mutex=(void*)sMatchNode_no_mutex;
    __result_obj__102 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value211=_inf_value5)));
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_203 = come_decrement_ref_count(sname_203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_205) ? it_node_205 = come_decrement_ref_count(it_node_205, ((struct sNode*)it_node_205)->finalize, ((struct sNode*)it_node_205)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_value_206) ? conditional_value_206 = come_decrement_ref_count(conditional_value_206, ((struct sNode*)conditional_value_206)->finalize, ((struct sNode*)conditional_value_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_207, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfNode_finalize, __right_value204, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sMatchNode_finalize, __right_value206, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ((__right_value211) ? __right_value211 = come_decrement_ref_count(__right_value211, ((struct sNode*)__right_value211)->finalize, ((struct sNode*)__right_value211)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__102) ? __result_obj__102 = come_decrement_ref_count(__result_obj__102, ((struct sNode*)__result_obj__102)->finalize, ((struct sNode*)__result_obj__102)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__102;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
struct sMatchNode* __result_obj__100;
void* __right_value207 = (void*)0;
struct sMatchNode* result_214;
void* __right_value208 = (void*)0;
char* __dec_obj87;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value210 = (void*)0;
struct sNode* __dec_obj89;
struct sMatchNode* __result_obj__101;
    if(    self==(void*)0    ) {
        __result_obj__100 = (void*)0;
        return __result_obj__100;
    }
    result_214=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc_v2(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode*"));
    if(    self!=((void*)0)    ) {
        result_214->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj87=result_214->sname,
        result_214->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMatchNode_clone", 5, "char*"));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_214->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        __dec_obj88=result_214->it_node,
        result_214->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        __dec_obj89=result_214->match_node,
        result_214->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__101 = result_214;
    come_call_finalizer(sMatchNode_finalize, result_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value212 = (void*)0;
char* sname_215;
int sline_216;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sNode* it_node_217;
void* __right_value215 = (void*)0;
struct sNode* conditional_node_218;
void* __right_value216 = (void*)0;
struct sBlock* if_block_219;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_220;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct list$1sBlock$ph* elif_blocks_221;
int elif_num_222;
struct sBlock* else_block_223;
char* saved_p_224;
int saved_sline_225;
void* __right_value221 = (void*)0;
char* buf_226;
void* __right_value222 = (void*)0;
struct sNode* expression_node_227;
void* __right_value223 = (void*)0;
struct sBlock* elif_block_228;
void* __right_value224 = (void*)0;
struct sBlock* __dec_obj90;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sBlock* __dec_obj91;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sNode* _inf_value6;
struct sIfNode* _inf_obj_value6;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sNode* _inf_value7;
struct sIfMethodNode* _inf_obj_value7;
void* __right_value237 = (void*)0;
struct sNode* result_229;
struct sNode* __result_obj__105;
    sname_215=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 587, "char*"));
    sline_216=info->sline;
    it_node_217=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_218=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_219=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_220=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 598, "struct list$1sNode$ph*"))));
    elif_blocks_221=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 600, "struct list$1sBlock$ph*"))));
    elif_num_222=0;
    else_block_223=((void*)0);
    while(    1    ) {
        saved_p_224=info->p;
        saved_sline_225=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_226=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_226,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_220,(struct sNode*)come_increment_ref_count(expression_node_227));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_228=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_221,(struct sBlock*)come_increment_ref_count(elif_block_228));
                elif_num_222++;
                ((expression_node_227) ? expression_node_227 = come_decrement_ref_count(expression_node_227, ((struct sNode*)expression_node_227)->finalize, ((struct sNode*)expression_node_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj90=else_block_223,
                else_block_223=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj90,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_224;
            info->sline=saved_sline_225;
            (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_226 = come_decrement_ref_count(buf_226, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_223==((void*)0)    ) {
        __dec_obj91=else_block_223,
        else_block_223=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 661, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj91,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_223->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_223->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 667, "struct sNode");
    _inf_obj_value6=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value230=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 667, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node_218),if_block_219,elif_expression_nodes_220,elif_blocks_221,elif_num_222,else_block_223,(_Bool)0,info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    _inf_value6->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 667, "struct sNode");
    _inf_obj_value7=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value232=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 667, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_217),(struct sNode*)come_increment_ref_count(_inf_value6),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIfMethodNode_finalize;
    _inf_value7->clone=(void*)sIfMethodNode_clone;
    _inf_value7->compile=(void*)sIfMethodNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIfMethodNode_terminated;
    _inf_value7->kind=(void*)sIfMethodNode_kind;
    _inf_value7->no_mutex=(void*)sIfMethodNode_no_mutex;
    result_229=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer(sIfNode_finalize, __right_value230, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value232, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__105 = (struct sNode*)come_increment_ref_count(result_229);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_215 = come_decrement_ref_count(sname_215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_217) ? it_node_217 = come_decrement_ref_count(it_node_217, ((struct sNode*)it_node_217)->finalize, ((struct sNode*)it_node_217)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_218) ? conditional_node_218 = come_decrement_ref_count(conditional_node_218, ((struct sNode*)conditional_node_218)->finalize, ((struct sNode*)conditional_node_218)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_229) ? result_229 = come_decrement_ref_count(result_229, ((struct sNode*)result_229)->finalize, ((struct sNode*)result_229)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__105) ? __result_obj__105 = come_decrement_ref_count(__result_obj__105, ((struct sNode*)__result_obj__105)->finalize, ((struct sNode*)__result_obj__105)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__105;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
struct sIfMethodNode* __result_obj__103;
void* __right_value233 = (void*)0;
struct sIfMethodNode* result_230;
void* __right_value234 = (void*)0;
char* __dec_obj92;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj93;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj94;
struct sIfMethodNode* __result_obj__104;
    if(    self==(void*)0    ) {
        __result_obj__103 = (void*)0;
        return __result_obj__103;
    }
    result_230=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode*"));
    if(    self!=((void*)0)    ) {
        result_230->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)    ) {
        __dec_obj92=result_230->sname,
        result_230->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIfMethodNode_clone", 5, "char*"));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    }
    if(    self!=((void*)0)    ) {
        result_230->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)    ) {
        __dec_obj93=result_230->it_node,
        result_230->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)    ) {
        __dec_obj94=result_230->match_node,
        result_230->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */, (void*)0) :0);
    }
    __result_obj__104 = result_230;
    come_call_finalizer(sIfMethodNode_finalize, result_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value238 = (void*)0;
char* sname_231;
int sline_232;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sNode* it_node_233;
void* __right_value241 = (void*)0;
struct sNode* conditional_node_234;
void* __right_value242 = (void*)0;
struct sNode* conditional_node2_235;
void* __right_value243 = (void*)0;
struct sBlock* if_block_236;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_237;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1sBlock$ph* elif_blocks_238;
int elif_num_239;
struct sBlock* else_block_240;
char* saved_p_241;
int saved_sline_242;
void* __right_value248 = (void*)0;
char* buf_243;
void* __right_value249 = (void*)0;
struct sNode* expression_node_244;
void* __right_value250 = (void*)0;
struct sBlock* elif_block_245;
void* __right_value251 = (void*)0;
struct sBlock* __dec_obj95;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* _inf_value8;
struct sIfNode* _inf_obj_value8;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sNode* _inf_value9;
struct sIfMethodNode* _inf_obj_value9;
void* __right_value260 = (void*)0;
struct sNode* result_246;
struct sNode* __result_obj__106;
    sname_231=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 674, "char*"));
    sline_232=info->sline;
    it_node_233=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_234=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_235=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_234),info));
    parse_sharp_v5(info);
    if_block_236=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_237=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 686, "struct list$1sNode$ph*"))));
    elif_blocks_238=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 688, "struct list$1sBlock$ph*"))));
    elif_num_239=0;
    else_block_240=((void*)0);
    while(    1    ) {
        saved_p_241=info->p;
        saved_sline_242=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_243=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_243,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_244=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_237,(struct sNode*)come_increment_ref_count(expression_node_244));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_245=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_238,(struct sBlock*)come_increment_ref_count(elif_block_245));
                elif_num_239++;
                ((expression_node_244) ? expression_node_244 = come_decrement_ref_count(expression_node_244, ((struct sNode*)expression_node_244)->finalize, ((struct sNode*)expression_node_244)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj95=else_block_240,
                else_block_240=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj95,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_241;
            info->sline=saved_sline_242;
            (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_243 = come_decrement_ref_count(buf_243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_240==((void*)0)    ) {
        __dec_obj96=else_block_240,
        else_block_240=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 749, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj96,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_240->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_240->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 755, "struct sNode");
    _inf_obj_value8=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value257=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 755, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_235),if_block_236,elif_expression_nodes_237,elif_blocks_238,elif_num_239,else_block_240,(_Bool)0,info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sIfNode_finalize;
    _inf_value8->clone=(void*)sIfNode_clone;
    _inf_value8->compile=(void*)sIfNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sIfNode_terminated;
    _inf_value8->kind=(void*)sIfNode_kind;
    _inf_value8->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 755, "struct sNode");
    _inf_obj_value9=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value259=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 755, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_233),(struct sNode*)come_increment_ref_count(_inf_value8),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sIfMethodNode_finalize;
    _inf_value9->clone=(void*)sIfMethodNode_clone;
    _inf_value9->compile=(void*)sIfMethodNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sIfMethodNode_terminated;
    _inf_value9->kind=(void*)sIfMethodNode_kind;
    _inf_value9->no_mutex=(void*)sIfMethodNode_no_mutex;
    result_246=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer(sIfNode_finalize, __right_value257, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value259, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__106 = (struct sNode*)come_increment_ref_count(result_246);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_231 = come_decrement_ref_count(sname_231, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_233) ? it_node_233 = come_decrement_ref_count(it_node_233, ((struct sNode*)it_node_233)->finalize, ((struct sNode*)it_node_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_234) ? conditional_node_234 = come_decrement_ref_count(conditional_node_234, ((struct sNode*)conditional_node_234)->finalize, ((struct sNode*)conditional_node_234)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_235) ? conditional_node2_235 = come_decrement_ref_count(conditional_node2_235, ((struct sNode*)conditional_node2_235)->finalize, ((struct sNode*)conditional_node2_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_246) ? result_246 = come_decrement_ref_count(result_246, ((struct sNode*)result_246)->finalize, ((struct sNode*)result_246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__106) ? __result_obj__106 = come_decrement_ref_count(__result_obj__106, ((struct sNode*)__result_obj__106)->finalize, ((struct sNode*)__result_obj__106)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__106;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value261 = (void*)0;
char* sname_247;
int sline_248;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct sNode* it_node_249;
void* __right_value264 = (void*)0;
struct sNode* conditional_node_250;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sNode* conditional_node2_251;
void* __right_value267 = (void*)0;
struct sBlock* if_block_252;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_253;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sBlock$ph* elif_blocks_254;
int elif_num_255;
struct sBlock* else_block_256;
char* saved_p_257;
int saved_sline_258;
void* __right_value272 = (void*)0;
char* buf_259;
void* __right_value273 = (void*)0;
struct sNode* expression_node_260;
void* __right_value274 = (void*)0;
struct sBlock* elif_block_261;
void* __right_value275 = (void*)0;
struct sBlock* __dec_obj97;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sBlock* __dec_obj98;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* _inf_value10;
struct sIfNode* _inf_obj_value10;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* _inf_value11;
struct sIfMethodNode* _inf_obj_value11;
void* __right_value284 = (void*)0;
struct sNode* result_262;
struct sNode* __result_obj__107;
    sname_247=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 762, "char*"));
    sline_248=info->sline;
    it_node_249=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    conditional_node_250=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_251=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_250),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_252=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 774, "struct list$1sNode$ph*"))));
    elif_blocks_254=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 776, "struct list$1sBlock$ph*"))));
    elif_num_255=0;
    else_block_256=((void*)0);
    while(    1    ) {
        saved_p_257=info->p;
        saved_sline_258=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_259=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_259,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_260=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_253,(struct sNode*)come_increment_ref_count(expression_node_260));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_261=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_254,(struct sBlock*)come_increment_ref_count(elif_block_261));
                elif_num_255++;
                ((expression_node_260) ? expression_node_260 = come_decrement_ref_count(expression_node_260, ((struct sNode*)expression_node_260)->finalize, ((struct sNode*)expression_node_260)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj97=else_block_256,
                else_block_256=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj97,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_257;
            info->sline=saved_sline_258;
            (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_259 = come_decrement_ref_count(buf_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_256==((void*)0)    ) {
        __dec_obj98=else_block_256,
        else_block_256=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 837, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj98,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_256->mOmitSemicolon=(_Bool)1;
        list$1sNode$ph_push_back(else_block_256->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 843, "struct sNode");
    _inf_obj_value10=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value281=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 843, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_251),if_block_252,elif_expression_nodes_253,elif_blocks_254,elif_num_255,else_block_256,(_Bool)0,info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sIfNode_finalize;
    _inf_value10->clone=(void*)sIfNode_clone;
    _inf_value10->compile=(void*)sIfNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sIfNode_terminated;
    _inf_value10->kind=(void*)sIfNode_kind;
    _inf_value10->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 843, "struct sNode");
    _inf_obj_value11=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value283=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 843, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_249),(struct sNode*)come_increment_ref_count(_inf_value10),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIfMethodNode_finalize;
    _inf_value11->clone=(void*)sIfMethodNode_clone;
    _inf_value11->compile=(void*)sIfMethodNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sIfMethodNode_terminated;
    _inf_value11->kind=(void*)sIfMethodNode_kind;
    _inf_value11->no_mutex=(void*)sIfMethodNode_no_mutex;
    result_262=(struct sNode*)come_increment_ref_count(_inf_value11);
    come_call_finalizer(sIfNode_finalize, __right_value281, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value283, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__107 = (struct sNode*)come_increment_ref_count(result_262);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_247 = come_decrement_ref_count(sname_247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_249) ? it_node_249 = come_decrement_ref_count(it_node_249, ((struct sNode*)it_node_249)->finalize, ((struct sNode*)it_node_249)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_250) ? conditional_node_250 = come_decrement_ref_count(conditional_node_250, ((struct sNode*)conditional_node_250)->finalize, ((struct sNode*)conditional_node_250)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_251) ? conditional_node2_251 = come_decrement_ref_count(conditional_node2_251, ((struct sNode*)conditional_node2_251)->finalize, ((struct sNode*)conditional_node2_251)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_262) ? result_262 = come_decrement_ref_count(result_262, ((struct sNode*)result_262)->finalize, ((struct sNode*)result_262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__107) ? __result_obj__107 = come_decrement_ref_count(__result_obj__107, ((struct sNode*)__result_obj__107)->finalize, ((struct sNode*)__result_obj__107)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__107;
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value285 = (void*)0;
char* sname_263;
int sline_264;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* it_node_265;
void* __right_value288 = (void*)0;
struct sNode* value_node_266;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* conditional_node_267;
void* __right_value291 = (void*)0;
struct sNode* conditional_node2_268;
void* __right_value292 = (void*)0;
struct sBlock* if_block_269;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_270;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1sBlock$ph* elif_blocks_271;
int elif_num_272;
struct sBlock* else_block_273;
char* saved_p_274;
int saved_sline_275;
void* __right_value297 = (void*)0;
char* buf_276;
void* __right_value298 = (void*)0;
struct sNode* expression_node_277;
void* __right_value299 = (void*)0;
struct sBlock* elif_block_278;
void* __right_value300 = (void*)0;
struct sBlock* __dec_obj99;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sBlock* __dec_obj100;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sNode* node_279;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sNode* _inf_value13;
struct sIfMethodNode* _inf_obj_value13;
void* __right_value310 = (void*)0;
struct sNode* result_280;
struct sNode* __result_obj__108;
    sname_263=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 850, "char*"));
    sline_264=info->sline;
    it_node_265=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_266=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_267=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_266),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_268=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_267),info));
    parse_sharp_v5(info);
    if_block_269=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_270=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 863, "struct list$1sNode$ph*"))));
    elif_blocks_271=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 865, "struct list$1sBlock$ph*"))));
    elif_num_272=0;
    else_block_273=((void*)0);
    while(    1    ) {
        saved_p_274=info->p;
        saved_sline_275=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_276=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_276,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_277=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_270,(struct sNode*)come_increment_ref_count(expression_node_277));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_278=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_271,(struct sBlock*)come_increment_ref_count(elif_block_278));
                elif_num_272++;
                ((expression_node_277) ? expression_node_277 = come_decrement_ref_count(expression_node_277, ((struct sNode*)expression_node_277)->finalize, ((struct sNode*)expression_node_277)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_278, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj99=else_block_273,
                else_block_273=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj99,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_274;
            info->sline=saved_sline_275;
            (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_276 = come_decrement_ref_count(buf_276, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_273==((void*)0)    ) {
        __dec_obj100=else_block_273,
        else_block_273=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 926, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj100,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_273->mOmitSemicolon=(_Bool)1;
        node_279=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_266),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_273->mNodes,(struct sNode*)come_increment_ref_count(node_279));
        ((node_279) ? node_279 = come_decrement_ref_count(node_279, ((struct sNode*)node_279)->finalize, ((struct sNode*)node_279)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 934, "struct sNode");
    _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value307=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 934, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_268),if_block_269,elif_expression_nodes_270,elif_blocks_271,elif_num_272,else_block_273,(_Bool)0,info))));
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sIfNode_finalize;
    _inf_value12->clone=(void*)sIfNode_clone;
    _inf_value12->compile=(void*)sIfNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sIfNode_terminated;
    _inf_value12->kind=(void*)sIfNode_kind;
    _inf_value12->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 934, "struct sNode");
    _inf_obj_value13=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value309=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 934, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_265),(struct sNode*)come_increment_ref_count(_inf_value12),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sIfMethodNode_finalize;
    _inf_value13->clone=(void*)sIfMethodNode_clone;
    _inf_value13->compile=(void*)sIfMethodNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sIfMethodNode_terminated;
    _inf_value13->kind=(void*)sIfMethodNode_kind;
    _inf_value13->no_mutex=(void*)sIfMethodNode_no_mutex;
    result_280=(struct sNode*)come_increment_ref_count(_inf_value13);
    come_call_finalizer(sIfNode_finalize, __right_value307, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value309, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__108 = (struct sNode*)come_increment_ref_count(result_280);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_263 = come_decrement_ref_count(sname_263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_265) ? it_node_265 = come_decrement_ref_count(it_node_265, ((struct sNode*)it_node_265)->finalize, ((struct sNode*)it_node_265)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value_node_266) ? value_node_266 = come_decrement_ref_count(value_node_266, ((struct sNode*)value_node_266)->finalize, ((struct sNode*)value_node_266)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_267) ? conditional_node_267 = come_decrement_ref_count(conditional_node_267, ((struct sNode*)conditional_node_267)->finalize, ((struct sNode*)conditional_node_267)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_268) ? conditional_node2_268 = come_decrement_ref_count(conditional_node2_268, ((struct sNode*)conditional_node2_268)->finalize, ((struct sNode*)conditional_node2_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block_269, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_270, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_273, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_280) ? result_280 = come_decrement_ref_count(result_280, ((struct sNode*)result_280)->finalize, ((struct sNode*)result_280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__108) ? __result_obj__108 = come_decrement_ref_count(__result_obj__108, ((struct sNode*)__result_obj__108)->finalize, ((struct sNode*)__result_obj__108)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__108;
}

struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info){
void* __right_value311 = (void*)0;
char* sname_281;
int sline_282;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sNode* it_node_283;
void* __right_value314 = (void*)0;
struct sNode* value_node_284;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sNode* conditional_node_285;
void* __right_value317 = (void*)0;
struct sNode* conditional_node2_286;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct buffer* buf_287;
char* p_288;
struct buffer* source_289;
char* head_290;
char* p_291;
int sline_292;
struct buffer* __dec_obj101;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sBlock* if_block_293;
struct buffer* __dec_obj102;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1sNode$ph* elif_expression_nodes_294;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct list$1sBlock$ph* elif_blocks_295;
int elif_num_296;
struct sBlock* else_block_297;
char* saved_p_298;
int saved_sline_299;
void* __right_value326 = (void*)0;
char* buf_300;
void* __right_value327 = (void*)0;
struct sNode* expression_node_301;
void* __right_value328 = (void*)0;
struct sBlock* elif_block_302;
void* __right_value329 = (void*)0;
struct sBlock* __dec_obj103;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sBlock* __dec_obj104;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* node_303;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sNode* _inf_value14;
struct sIfNode* _inf_obj_value14;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* _inf_value15;
struct sIfMethodNode* _inf_obj_value15;
void* __right_value339 = (void*)0;
struct sNode* result_304;
struct sNode* __result_obj__109;
    sname_281=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "08if.c", 941, "char*"));
    sline_282=info->sline;
    it_node_283=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info,(_Bool)0));
    value_node_284=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node_285=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_284),(char*)come_increment_ref_count(xsprintf("v2")),info));
    conditional_node2_286=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_285),info));
    parse_sharp_v5(info);
    buf_287=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value318=xsprintf("{ puts(\"%s %d: exception\"); exit(39); 39 }\n",info->sname,info->sline)))));
    (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    p_288=info->p;
    source_289=(struct buffer*)come_increment_ref_count(info->source);
    head_290=info->head;
    p_291=info->p;
    sline_292=info->sline;
    __dec_obj101=info->source,
    info->source=(struct buffer*)come_increment_ref_count(buf_287);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->head=((char*)(__right_value320=buffer_to_string(info->source)));
    (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    info->p=info->head;
    info->sline=0;
    if_block_293=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj102=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_289);
    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    info->head=head_290;
    info->p=p_291;
    info->sline=sline_292;
    elif_expression_nodes_294=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "08if.c", 973, "struct list$1sNode$ph*"))));
    elif_blocks_295=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc_v2(1, sizeof(struct list$1sBlock$ph)*(1), "08if.c", 975, "struct list$1sBlock$ph*"))));
    elif_num_296=0;
    else_block_297=((void*)0);
    while(    1    ) {
        saved_p_298=info->p;
        saved_sline_299=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59        ) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !(xisalpha(*info->p)||*info->p==95)        ) {
            break;
        }
        parse_sharp_v5(info);
        buf_300=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_300,"else")        ) {
            if(            parsecmp("if",info)            ) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_301=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(elif_expression_nodes_294,(struct sNode*)come_increment_ref_count(expression_node_301));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_302=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlock$ph_push_back(elif_blocks_295,(struct sBlock*)come_increment_ref_count(elif_block_302));
                elif_num_296++;
                ((expression_node_301) ? expression_node_301 = come_decrement_ref_count(expression_node_301, ((struct sNode*)expression_node_301)->finalize, ((struct sNode*)expression_node_301)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block_302, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
            else {
                __dec_obj103=else_block_297,
                else_block_297=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer(sBlock_finalize, __dec_obj103,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
                (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                break;
            }
        }
        else {
            info->p=saved_p_298;
            info->sline=saved_sline_299;
            (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            break;
        }
        (buf_300 = come_decrement_ref_count(buf_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    if(    else_block_297==((void*)0)    ) {
        __dec_obj104=else_block_297,
        else_block_297=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "08if.c", 1036, "struct sBlock*"))));
        come_call_finalizer(sBlock_finalize, __dec_obj104,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        else_block_297->mOmitSemicolon=(_Bool)1;
        node_303=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_284),(char*)come_increment_ref_count(xsprintf("v1")),info));
        list$1sNode$ph_push_back(else_block_297->mNodes,(struct sNode*)come_increment_ref_count(node_303));
        ((node_303) ? node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    }
    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1044, "struct sNode");
    _inf_obj_value14=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value336=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc_v2(1, sizeof(struct sIfNode)*(1), "08if.c", 1044, "struct sIfNode*")),(struct sNode*)come_increment_ref_count(conditional_node2_286),if_block_293,elif_expression_nodes_294,elif_blocks_295,elif_num_296,else_block_297,(_Bool)0,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sIfNode_finalize;
    _inf_value14->clone=(void*)sIfNode_clone;
    _inf_value14->compile=(void*)sIfNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sIfNode_terminated;
    _inf_value14->kind=(void*)sIfNode_kind;
    _inf_value14->no_mutex=(void*)sIfNode_no_mutex;
    _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "08if.c", 1044, "struct sNode");
    _inf_obj_value15=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value338=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc_v2(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1044, "struct sIfMethodNode*")),(struct sNode*)come_increment_ref_count(it_node_283),(struct sNode*)come_increment_ref_count(_inf_value14),info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfMethodNode_finalize;
    _inf_value15->clone=(void*)sIfMethodNode_clone;
    _inf_value15->compile=(void*)sIfMethodNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfMethodNode_terminated;
    _inf_value15->kind=(void*)sIfMethodNode_kind;
    _inf_value15->no_mutex=(void*)sIfMethodNode_no_mutex;
    result_304=(struct sNode*)come_increment_ref_count(_inf_value15);
    come_call_finalizer(sIfNode_finalize, __right_value336, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sIfMethodNode_finalize, __right_value338, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    __result_obj__109 = (struct sNode*)come_increment_ref_count(result_304);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    (sname_281 = come_decrement_ref_count(sname_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    ((it_node_283) ? it_node_283 = come_decrement_ref_count(it_node_283, ((struct sNode*)it_node_283)->finalize, ((struct sNode*)it_node_283)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((value_node_284) ? value_node_284 = come_decrement_ref_count(value_node_284, ((struct sNode*)value_node_284)->finalize, ((struct sNode*)value_node_284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node_285) ? conditional_node_285 = come_decrement_ref_count(conditional_node_285, ((struct sNode*)conditional_node_285)->finalize, ((struct sNode*)conditional_node_285)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    ((conditional_node2_286) ? conditional_node2_286 = come_decrement_ref_count(conditional_node2_286, ((struct sNode*)conditional_node2_286)->finalize, ((struct sNode*)conditional_node2_286)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf_287, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, source_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, if_block_293, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks_295, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block_297, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    ((result_304) ? result_304 = come_decrement_ref_count(result_304, ((struct sNode*)result_304)->finalize, ((struct sNode*)result_304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    ((__result_obj__109) ? __result_obj__109 = come_decrement_ref_count(__result_obj__109, ((struct sNode*)__result_obj__109)->finalize, ((struct sNode*)__result_obj__109)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,(void*)0):(void*)0);
    return __result_obj__109;
}

